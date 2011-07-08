/*
 * =====================================================================================
 *
 *       Filename:  cbenchmark.h
 *
 *    Description:  cbenchmark的头文件
 *
 *        Version:  1.0
 *        Created:  2011年01月13日 13时43分34秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zheng.cuizh@gmail.com
 *        Company:
 *
 * =====================================================================================
 */


#ifndef CBENCHMARK_H
#define CBENCHMARK_H

#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <getopt.h>
#include <syslog.h>
#include <time.h>
#include <errno.h>
#include <unistd.h>
#include <dlfcn.h>
#include <libgen.h>
#include <stdarg.h>
#include <sys/wait.h>
#include <sys/resource.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/select.h>
#include <sys/signal.h>
#include <sys/mman.h>
#include <sys/time.h>
#ifdef __KERNEL__
#include <linux/list.h>
#else
#include "list.h"
#endif

#include "cbutils.h"

#define BM_GROUP_THREADS 50

enum{
	FAIL = 0,
	TRUE = 1
};

typedef enum TIMER_SWITCH{
	BREAK = 0,
	CONTINUE = 1,
	SUSPEND = 2
}TIMER_SWITCH_T;

/**
 * @brief 
 * cbenchmark的执行模式
 * 可以多选
 * 但TIMER和COUNTER只能选一个
 * TIMER优先级比COUNTER高
 * SHARE模式则使得cbenchmark可以以动态库方式调用用户的三个函数
 * 而用户只需要告诉cbenchmark一个动态库的路径
 */
enum BM_MODE{
	BM_MODE_TIMER = 0x001,
	BM_MODE_COUNTER = 0x002,
	BM_MODE_SHARE = 0x004
};

enum BM_STSTUS{
	BM_TRAN_SUCCESS = 0,
	BM_TRAN_FAILE = 1,
	BM_EXIT_TIMMER_SUCC = 2,
	BM_EXIT_TIMMER_FAIL = 3,
	BM_INIT_TIMMER_SUCC = 4,
	BM_INIT_TIMMER_NOTIMER = 5,
	BM_INIT_TIMMER_THREADFAIL = 6,
	BM_TRAN_START = 7
};

/**
 * @brief  
 * 用户需要时间的三个函数的原型
 *
 * @param 
 * cbenchmark回掉这三个函数时候会回传vuer_node_st_t参数
 *
 * @return 
 * 无返回
 */
typedef void* (*cb_script_ft)(void*);
typedef struct script_st{
	cb_script_ft init;///<初始化函数，执行一次
	cb_script_ft act;///<迭代函数，执行多次
	cb_script_ft end;///<终止函数，执行一次
	cb_script_ft initialize;///<middleware使用的初始化函数-cbenchmark不使用该元素
}script_st_t;

/**
 * @brief 
 * 事件冗余信息结构体
 *
 * 该结构体是事件信息结构体中
 * 冗余信息链表的一个节点
 */
typedef struct transaction_verb_st{
	long id;
	time_t t;
	char* msg;
	long spend;
	struct list_head list;
}transaction_verb_st_t;

/**
 * @brief 
 * 事件信息结构体
 */
typedef struct transaction_st{
	char* name;
	long int success;
	long int fail;
	time_t timer;
	/*
	 * 	success_ts和fail_ts
	 * 	这两个成员是成功和失败事件的发生时间等冗余信息的链表
	 * 	而success和fail是这两个链表的统计
	 * */
	struct list_head success_verb;
	struct list_head fail_verb;
	struct list_head list;
	/*
	 * art => average response time
	 */
	float succ_art;
	float fail_art;
}transaction_st_t;

typedef struct log_st{
	int level;
	char* name;
}log_st_t;

/**
 * @brief 
 * cbenchmark全局信息结构体
 */
typedef	struct bench{
	script_st_t script;///<业务函数
	log_st_t log;
	void *param;///<业务参数
	unsigned long n;///<每个线程要执行的次数
	struct timeval time;///<milliseconds.测试执行的时长
	int mode;///<执行模式:计时器模式，计数器模式
	long num;///<总并发数，所有进程的线程数
	long processes;
	long groupthreads;///<每个进程的最大线程数
	char *infile;///<参数文件
	char *outfile;///<输出供分析器分析的日志文件保存目录
	struct list_head mws;///<middleware链表头,如果benchmark以动态库方式打开，则保存动态库信息
	char *libs;///<以逗号分割的动态库绝对路径字符串
	struct list_head children;
	int childsigopt;///<主进程通过信号机制控制子进程操作，该元素标志操作类型
	pid_t pid;
}bench_t;

typedef struct bench_child_transaction{
	long success;
	long fail;
	float t;
}bench_child_transaction_t;

typedef struct bench_child{
	long count;
	struct list_head vusers;
	pthread_cond_t cond;
	pthread_mutex_t mutex;
	struct list_head list;
	bench_t *b;
	long group;
	void* param;///<paramutil所需要的参数文件
	long num;///<某一个进程的并发数
	pid_t pid;///<该bench_child_t结构体对应的进程id
	TIMER_SWITCH_T switcher;///<如果以定时器模式执行，则该属性控制act函数是否继续迭代执行
	float analyse_cost;
	bench_child_transaction_t transactions;
}bench_child_t;

typedef struct mmap_bench{
	bench_t bp;
//	bench_child_t *bcp;
}mmap_bench_t;
static mmap_bench_t *mbp;///<通过mmap分配的bp和bcp空间指针

typedef struct middleware{
	char* path;///<动态库绝对路径
	char* name;///<动态库basename
	void* handle;
	script_st_t script;
	struct list_head list;
	bench_t *bp;
}middleware_t;

/**
 * @brief 
 * 虚拟用户信息结构体
 */
typedef struct vuser_node_st{
	long int group;
	long int id;
	long int curIteNo;
	struct list_head list;
	/*
	 * 	verb指针实现了init act 以及 end函数之间互传地址空间
	 * 	由此，可以在init中对verb指针分配空间
	 * 	在act以及end中访问该空间
	 * */
	void* verb;
	/*
	 * 	只想bench结构的指针
	 * 	该指针在vuser被传入dobench的时候，
	 * 	使dobench可以通过vuser找到bench的地址。
	 * */
	bench_child_t *b;
	struct list_head transactions;
	//void *param;///<业务参数
}vuser_node_st_t;


typedef struct analyse_st{
	long int success;
	long int fail;
	float t;
	long int tps;
	float fail_rate;
}analyse_t;

typedef	struct _bm_opts{
	int t;
	int v;
}_bm_opts_t;

//命令行参数
static _bm_opts_t bm_opts = {0};

#ifdef __cplusplus
extern "C" {
#endif

void benchmark(void* param);
long int get_vuser_id(void* v);
long int get_vuser_group(void* v);
long int get_vuser_ite(void* v);
void create_transaction(vuser_node_st_t *v, const char *name);
transaction_st_t* success_transaction(vuser_node_st_t *v, const char *name);
transaction_st_t* fail_transaction(vuser_node_st_t *v, const char *name);
transaction_st_t* success_transactionEx(vuser_node_st_t *v, const char *name, const char *msg);
transaction_st_t* fail_transactionEx(vuser_node_st_t *v, const char *name, const char *msg);
bench_t* cb_init();
transaction_st_t* start_transactionEx(vuser_node_st_t *v, const char *name);
void cb_exit(void *p);

//private function
void bm_thread_exit(bench_child_t * bcp);
void* timmer_to_exit(void *tp);
int init_timer(struct bench * p,int* switcher);
void* dobench(void* v);
transaction_st_t* find_transaction(vuser_node_st_t *v, const char *name);
transaction_st_t* do_transaction(vuser_node_st_t *v, const char *name, int boool);
transaction_st_t* do_transactionEx(vuser_node_st_t *v, const char *name, int boool, const char *msg);
vuser_node_st_t* create_vuser(bench_child_t * p);
mode_t read_umask(void);
void call_threads(bench_child_t * bcp);
void dofork(struct bench * bp,int n,long int g);
bench_child_t * get_bench_child(long int i);
void dispatch(struct bench * bp);
void waitall(void *p);
bench_t* bm_init(void *param);
analyse_t* analyse(void* p,float t);
void analyse_vuser(void* p);
void analyse_transaction(void* p, const char* pa);
void analyse_transaction_verb(void* p, const char* pa);
void set_bc_success_count(long i);
int get_bc_success_count(void);
void set_bc_fail_count(long i);
int get_bc_fail_count(void);
void set_v_success_count(long i);
int get_v_success_count(void);
void set_v_fail_count(long i);
int get_v_fail_count(void);
void trans_analyse(void* p);///<被analyse()替代
void* init_mw(void *b);
void* destroy_mw(void *b);
void cb_trap(int sig);
bench_child_t * get_current_bench_child();
bench_child_t * get_bench_child_by_pid(pid_t pid);
void* cb_kill_child(void* p,int n,...);
void* cb_kill_children(void* p);
void* cb_kill_children_break(void* p);

#ifdef __cplusplus
}
#endif
#endif /* CBENCHMARK_H */
