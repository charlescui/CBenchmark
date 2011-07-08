/* Copyright(C)
 * For free
 * All right reserved
 * 
 */

/**
 * @file cb_test_dl.c
 * @brief 
 * @author zheng.cuizh@gmail.com
 * @version 0.1.0
 * @date 2011-01-12
 */


#include "cbenchmark.h"

/**
 * @brief initialize 
 *
 * cb_test_dl是一个测试库
 * 它里面可以保存若干的场景
 * 在初始化操作中
 * 可以通过和用户的交互
 * 得到用户选择要执行的测试场景
 * 在以下步骤中可以将bp->script.init|act|end三个函数指针参数赋值
 * 并且生成被测试场景需要的参数结构体
 * 并将该结构体的指针传递给bp->param
 * 这就完成了用户所要告诉这个测试库的全部信息
 * 而测试库的initialize()函数中所有对cbenchmark全局信息结构体的设置
 * 都会在cbenchmark执行压力回掉这三个被设定的函数指针的时候传递过来
 *  
 * @param b
 * cbenchmark全局信息
 *
 * @return 
 * 无返回值
 */
void* initialize(void* b)
{
	bench_t *bp = (bench_t*)b;
	printf("Hello from cb_test_dl\n");
	int sid;
	printf("please input a scenario id,\nand i'll choose the [init(),act(),end()] function to do performance.\n");
	scanf("%d",&sid);
}

/**
 * @brief init run once at begin of test case.
 *
 * @param v typeof vuser_node_st_t,cbenchmark all init with this param
 *
 * @return 
 */
void* init(void* v)
{
	create_transaction(v,"Test_SO");
	//printf("test init.\n");
	return (void*)0;
}


/**
 * @brief act run each iteration after init been call.
 *
 * @param v typeof vuser_node_st_t,cbenchmark all act with this param
 *
 * @return 
 */
void* act(void* v)
{
	vuser_node_st_t *vuser = (vuser_node_st_t*) v;
	char msg[36] = {0};

	//printf("PID:%d [%d:%d - %d] ",getpid(),vuser->group,vuser->id,vuser->curIteNo);
	sprintf(msg,"USERID => %d.Always good!!!",vuser->id);
	printf("%d.",getpid());
	sleep(3);
	fflush(stdout);
	success_transactionEx(v,"Test_SO",msg);
	return (void*)0;
}


/**
 * @brief end run at last,to release somen resource or logout action,etc.
 *
 * @param v	typeof vuser_node_st_t,cbenchmark all end with this param
 *
 * @return 
 */
void* end(void* v)
{
	return (void*)0;
}
