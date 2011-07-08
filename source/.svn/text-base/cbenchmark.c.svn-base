/*
 * =====================================================================================
 *
 *       Filename:  cbenchmark.c
 *
 *    Description:  高性能可靠的性能测试工具
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

/**
 * @file benchmark.c
 * @brief 
 * 高性能可靠的性能测试工具
 *
 * cbenchmark工具通过[多进程+多线程]模式
 * 使用户业务代码的高并发执行
 * 从而产生了可以对产品进行性能测试的压力源
 * 而用户只需要完成init/act/end三个函数
 *
 * @author zheng.cuizh@gmail.com q.daifei@gmail.com
 * @version 0.1.0
 * @date 2011-01-12
 * @todo
 * 未来需要和portal集成
 * 从而实现一套集:用例|场景管理,压力生成,报表展现,以及测试报告发送等一套完善的性能测试产品
 */

#include "cbenchmark.h"
#include "paramutil.h"

/**
 * @brief cb_exit 
 * 用户可以调用该方法实现某一虚拟用户的终止操作
 * @param p
 */
void cb_exit(void *p)
{
		vuser_node_st_t *pVuser = (vuser_node_st_t *)p;
		bm_thread_exit((bench_child_t *)(pVuser->b));
		pthread_exit(NULL);
}

/**
 * @brief bm_thread_exit 
 * 控制全局锁使得计数器递增
 *
 * 加锁->计数器加一->条件变量触发->解锁
 * 每当一个线程迭代完成指定的任务时,都要通过条件变量通知主线程.
 *
 * @param p
 */
void bm_thread_exit(bench_child_t * bcp){
	pthread_mutex_lock(&bcp->mutex);
	bcp->count++;
	pthread_cond_signal(&bcp->cond);
	pthread_mutex_unlock(&bcp->mutex);
}

/**
 * @brief dobench 
 * 执行测试代码
 * 测试代码是由以下三个函数来实现的:
 * cb_script_ft init
 * cb_script_ft act
 * cb_script_ft end
 * init和end都只会被执行一次
 * act将重复执行从而完成压力测试的迭代工作
 *
 * -从执行过程来分
 * act可以按照如下模式来工作：
 * -#1. BM_MODE_TIMER = 0x001
 * -#2. BM_MODE_COUNTER = 0x002(默认)
 * 
 * -从场景/代码组织形式来分
 * act还可以按照如下模式来工作:
 * -#1.BM_MODE_SHARE
 * -#2.非BM_MODE_SHARE(默认)
 *
 * @param v
 * cbenchmark会产生各个进程
 * 每个进程都会产生很多线程
 * 进程中线程的数量由BM_GROUP_THREADS决定
 * 线程会执行dobench方法
 * 并将包含vuser信息的vuser_node_st_t v参数传递给dobench
 * 该参数包含了所有cbenchmark的信息
 * 并且有冗余参数指针(void* verb;)提供给使用者
 * 以使其可以通过这个冗余参数指针在init(),act(),end()三者之间传递参数
 *
 * @return 
 * 返回(struct bench *)vuser->b
 */
void* dobench(void* v)
{
	vuser_node_st_t* vuser = (vuser_node_st_t*)v;
	syslog(LOG_INFO,"[DOBENCH] VUSER-INFO:GROUP=>%d,ID=>%d",vuser->group,vuser->id);

	bench_t *bp = (bench_t *) vuser->b->b;
	bench_child_t *bcp = (bench_child_t *) vuser->b;

	/*
	 * 	i是循环的条件变量，也是定时器控制循环的开关
	 * */
	int i = 0;
	void* (* init)(void*);
	void* (* act)(void*);
	void* (* end)(void*);
	struct timeval tvStart,tvEnd;
	init = bp->script.init;
	act = bp->script.act;
	end = bp->script.end;
	
	pthread_t ppid = pthread_self();
	syslog(LOG_NOTICE, "Thread[%lld] dobench variables inited.\n",ppid);

	//起始时间
	gettimeofday(&tvStart,NULL);

	/*
	 * 	在性能测试代码执行的过程中，
	 * 	代码按照一下顺序执行：
	 *  1.init 执行的是初始化代码
	 * 	2.act 执行迭代代码，压力由此产生
	 * 	3.end 执行的是结束代码，用以释放资源
	 * 	以上三个函数的参数都是同一个函数指针
	 * 	从而可以实现局部变量共享
	 * */

	/*
	 * 	执行初始化函数
	 * */
	syslog(LOG_NOTICE, "Thread[%lld] Init call.\n",pthread_self());
	if(init != NULL)
		init((void *)vuser);

	/*
	 * 	执行迭代压力
	 * */
	if (bp->n > 0) {
			vuser->curIteNo = 0;

			syslog(LOG_NOTICE, "Thread[%lld] Act call.\n",pthread_self());

			for (i=0; ; ) {
					/*
					 * bcp->switcher用来控制子进程的执行
					 * 无论定时器模式或者计数器模式
					 * 都会判断该开关的状态
					 * 从而可以让主进程通过切换开关而控制子进程
					 */
					if(bcp->switcher == BREAK)
							break;
					/*
					 * 下面的代码可以暂停cbenchmark的执行
					 */
					if(bcp->switcher == SUSPEND){
							sleep(2);
							continue;
							//pause();
					}
					if(bcp->switcher == CONTINUE){
							if(bp->mode & BM_MODE_TIMER){
									/*
									 * 	有定时器，即用户选择通过执行时间控制操作
									 * 	那么定时器在到时的时候会将属性： bcp->switcher设置为BREAK
									 * */
							}else{
									/*
									 * 	没有定时器，即用户选择执行次数由p->n决定，
									 * */
									if(i >= bp->n)
											break;
									i++;
							}
							struct timeval act_tvStart,act_tvEnd;
							gettimeofday(&act_tvStart,NULL);
							act((void *)vuser);
							gettimeofday(&act_tvEnd,NULL);
							float dif;
							dif = (act_tvEnd.tv_sec-act_tvStart.tv_sec) + (act_tvEnd.tv_usec-act_tvStart.tv_usec)/1000000.0;
							syslog(LOG_WARNING, "act cost %f seconds", dif);
							vuser->curIteNo++;
					}
			}
	}
	else {
			syslog(LOG_NOTICE, "struct bench * bp->n should graet than 0\n");
	}

	/*
	 * 	执行释放函数
	 * */
	syslog(LOG_NOTICE, "Thread[%lld] End call.\n",pthread_self());
	if(end != NULL)
			end((void *)vuser);

	//终止时间
	gettimeofday(&tvEnd,NULL);

	float dif;
	dif = (tvEnd.tv_sec-tvStart.tv_sec) + (tvEnd.tv_usec-tvStart.tv_usec)/1000000.0;

	syslog(LOG_NOTICE,"Thread[%lld] Cost => %f\n",pthread_self(),dif);

	bm_thread_exit(bcp);

	return (void*)bp;
}

/**
 * @brief create_vuser 
 * 创建一个虚拟用户
 *
 * 一个进程维护一组线程
 * 每一个进程是一个虚拟用户
 * 本函数将生成一个虚拟用户(节点)
 * 并将该节点添加到进程空间的用户链表中
 *
 * @param p
 * cbenchmark全局信息
 * @param group
 * 该用户所在用户组(进程组)ID
 *
 * @return 
 * 返回该用户的结构体指针
 */
vuser_node_st_t* create_vuser(bench_child_t * p)
{
		vuser_node_st_t* vuser = (vuser_node_st_t *)malloc(sizeof(vuser_node_st_t));
		vuser->group = p->group;
		vuser->verb = NULL;
		vuser->curIteNo = 0;
		vuser->b = p;

		/*
		 * 	将新增的节点加入已有的vusers链表的末尾
		 * */
		list_add_tail(&vuser->list,&p->vusers);
		/*
		 * 	每个用户各自维护一个事件transactions列表
		 * 	该列表记录该用户该事件的成功失败次数
		 * */
		INIT_LIST_HEAD(&vuser->transactions);
		return vuser;
}

/*
 * 	读取umask，用来给mkdir等文件系统权限相关的函数做参数操作
 * */
mode_t read_umask(void)
{
		mode_t mask = umask (0);
		umask (mask);
		return 0xffff;
}



bench_child_t* create_child_bench(struct bench *bp,int n,long int g)
{
		/* 
		 *	得到bench_child
		 *	并且初始化
		 * */
		bench_child_t *bcp = get_bench_child(g);
		bcp->b = bp;
		bcp->group = g;
		bcp->count = 0;
		bcp->num = n;
		bcp->pid = getpid();
		bcp->switcher = CONTINUE;
		INIT_LIST_HEAD(&bcp->vusers);
		list_add_tail(&bcp->list,&bp->children);
		return bcp;
}

/**
 * @brief call_threads 
 * 并发执行dobench
 *
 * 这个函数由cbenchmark主进程执行
 * 是cbenchmark每个子进程并发的起点
 * 通过维护一个进程空间内的计数器
 * 并通过信号量方式
 * 和每个线程互动
 * 该函数还记录了本进程执行的时间
 * 这个时间理论上等于该进程内
 * 所有子线程中最晚结束记录的时间的执行时间
 * 减去
 * 所有子线程中最早开始记录的事件的执行时间
 *
 * @param p
 * cbenchmark全局信息
 * @param group
 * 进程组(用户组)ID
 */
void call_threads(bench_child_t * bcp)
{
		bench_t *bp = bcp->b;
		struct timeval tvStart,tvEnd;
		float dif;
		long i;

		/*
		 * 注册信号处理方法
		 * 当主进程发送SIGUSR1信号给子进程后
		 * 子进程调用cb_trap进行处理
		 * 比如：
		 * 定时器模式下
		 * 当主进程到达指定时间后
		 * 通过向各个子进程发送SIGUSR1信号
		 * 子进程调用cb_trap函数
		 * 从而改变act()的for循环条件
		 * 使得这些子进程结束act的循环
		 */
		if(signal(SIGUSR1,cb_trap) == SIG_ERR){
				fprintf(stderr,"Register signal trap faile.");
		};

		//起始时间
		gettimeofday(&tvStart,NULL);

		//初始化互斥锁及条件变量
		pthread_cond_init(&bcp->cond,NULL);
		pthread_mutex_init(&bcp->mutex,NULL);

		pthread_t tid;
		for(i = 0; i < bcp->num; ++i)
		{
				vuser_node_st_t* vuser =  create_vuser(bcp);
				syslog(LOG_DEBUG,"[call_threads] create vuser,list empty? => %d",(int)list_empty(&bcp->vusers));
				vuser->id = i;

				/* 通过多线程并发执行 */
				if (pthread_create(&tid,NULL,dobench,(void *)vuser) < 0) {
						syslog(LOG_ERR, "Create thread failed. - %m\n");
				}else{
						syslog(LOG_NOTICE, "Created a thread.\n");
				}
		}

		//加锁->等待条件变量触发->解锁
		pthread_mutex_lock(&bcp->mutex);

		while(bcp->count < bcp->num)
		{
				pthread_cond_wait(&bcp->cond,&bcp->mutex);
		}

		//终止时间
		gettimeofday(&tvEnd,NULL);
		//dif是该进程所花费的时间
		dif = (tvEnd.tv_sec-tvStart.tv_sec) + (tvEnd.tv_usec-tvStart.tv_usec)/1000000.0;

		pthread_mutex_unlock(&bcp->mutex);

		syslog(LOG_NOTICE,"Analyse will run");
		bcp->transactions.t = dif;

		/*
		 * 计算分析每个Vuser事件花费的时间
		 */
		gettimeofday(&tvStart,NULL);
		analyse_vuser((void *)bcp);
		gettimeofday(&tvEnd,NULL);
		dif = (tvEnd.tv_sec-tvStart.tv_sec) + (tvEnd.tv_usec-tvStart.tv_usec)/1000000.0;
		bcp->analyse_cost = dif;
		syslog(LOG_DEBUG,"Process[%d] Group[%d] analyse vuser cost %d seconds.",getpid(),bcp->group,dif);
}

void cb_trap(int sig)
{
		static int flag = 1;///<信号处理请求标记，防止在信号处理过程中再收到请求处理的信号
		int chi = 0, s = SIGUSR1;
		char pidstr[1024] = {0};	
		char getPids[1024] = {0};
		char *dgetPids,*dgetPid;
		int i, foundPid;
		if(!flag)
				return;
		flag = 0;///<开始处理信号

		if((sig == SIGINT) && (mbp->bp.pid == getpid())){
				/* 
				 *	主进程信号处理逻辑
				 * */
				fprintf(stderr,"Signal Control:\n"\
								"\t0:Force Kill.\n"\
								"\t1:Stop CBenchmark.\n"\
								"\t2:Suspend All Vusers.\n"\
								"\t3:Resume All Vusers.\n"\
								"\t4:Stop Some Processes.\n"\
								"\t5:Resume Some Processes.\n"\
								"intput the signal id:");
				scanf("%d",&chi);
				switch(chi){
						case 0:
								s = SIGKILL;
								cb_kill_children(&s);
								exit(100);
						case 1:
								mbp->bp.childsigopt = 1;
								printf("CBenchmark Stop by SIGINT.\n");
								cb_kill_children(&s);
								break;
						case 2:
								mbp->bp.childsigopt = 2;
								printf("All vusers will suspend.\n");
								cb_kill_children(&s);
								break;
						case 3:
								mbp->bp.childsigopt = 3;
								printf("All vusers will resume.\n");
								cb_kill_children(&s);
								break;
						case 4:
								mbp->bp.childsigopt = 4;
								for(i = 0; i < mbp->bp.processes; i++){
										bench_child_t *bcp = get_bench_child(i);
										if(bcp->switcher == CONTINUE){
												if(pidstr[0] == '\0')
														sprintf(pidstr,"%d",bcp->pid);
												else
														sprintf(pidstr,"%s,%d",pidstr,bcp->pid);
										}
								}
								if(strlen(pidstr) == 0){
										printf("No Running Process.\n");
										goto ret;
								}
										
								printf("Stop Some Processes.\n");
								printf("Current Running CBenchmark Processes List:\n\t%s\n",pidstr);
								printf("Input Processes ID tobe Stopped, Split By comma.\n");
								scanf("%s",getPids);
								dgetPids = strdup(getPids);
								while((dgetPid = strsep(&dgetPids,",")) != NULL){
										foundPid = 0;
										for(i = 0; i < mbp->bp.processes; i++){
												bench_child_t *bcp = get_bench_child(i);
												if((pid_t)atoi(dgetPid) == bcp->pid){
														foundPid = 1;
														if(bcp->switcher == CONTINUE){
																cb_kill_child(&s,1,bcp->pid);
																break;
														}else{
																printf("Process %d is already STOP.\n",bcp->pid);
																break;
														}
												}
										}
										if(foundPid == 0)
												printf("No Such Process ID %s.\n",dgetPid);
								}
								break;
						case 5:
								mbp->bp.childsigopt = 5;
								for(i = 0; i < mbp->bp.processes; i++){
										bench_child_t *bcp = get_bench_child(i);
										if(bcp->switcher == SUSPEND){
												if(pidstr[0] == '\0')
														sprintf(pidstr,"%d",bcp->pid);
												else
														sprintf(pidstr,"%s,%d",pidstr,bcp->pid);
										}
								}
								if(strlen(pidstr) == 0){
										printf("No Stopped Process.\n");
										goto ret;
								}
										
								printf("Resume Some Processes.\n");
								printf("Current Suspend CBenchmark Processes List:\n\t%s\n",pidstr);
								printf("Input Processes ID tobe Stopped, Split By comma.\n");
								scanf("%s",getPids);
								dgetPids = strdup(getPids);
								while((dgetPid = strsep(&dgetPids,",")) != NULL){
										foundPid = 0;
										for(i = 0; i < mbp->bp.processes; i++){
												bench_child_t *bcp = get_bench_child(i);
												if((pid_t)atoi(dgetPid) == bcp->pid){
														foundPid = 1;
														if(bcp->switcher == SUSPEND){
																cb_kill_child(&s,1,bcp->pid);
																break;
														}else{
																printf("Process %d is already RUNNING.\n",bcp->pid);
																break;
														}
												}
										}
										if(foundPid == 0)
												printf("No Such Process ID %s.\n",dgetPid);
								}
								break;
						default:
								printf("No Such Signal Trap.\n");
								goto ret;
				}
		}else if(sig == SIGUSR1){
				/* *
				 *	子进程信号处理逻辑
				 * */
				printf("Child Process[%d] Receive signal[%d] and childsigopt[%d].\n",getpid(),sig,mbp->bp.childsigopt);
				bench_child_t *bcp = get_current_bench_child();
				switch(mbp->bp.childsigopt){
						case 1:
								bcp->switcher = BREAK;
								break;
						case 2:
								bcp->switcher = SUSPEND;
								break;
						case 3:
								bcp->switcher = CONTINUE;
								break;
						case 4:
								bcp->switcher = SUSPEND;
								break;
						case 5:
								bcp->switcher = CONTINUE;
								break;
						default:
								printf("Not support child signal operation.\n");
				}
		}
		ret:flag = 1;///<结束信号处理
}

void _cb_trap(int sig)
{
		if(sig == SIGUSR1){
				bench_child_t *bcp = get_current_bench_child();
				bcp->switcher = BREAK;
		}else if(sig == SIGINT){
				int s = SIGUSR1;
				cb_kill_children(&s);
				printf("CBenchmark Stop by SIGINT.\n");
		}
}

/**
 * @brief dofork 
 * 将cbenchmark变成多个进程
 *
 * 该函数是cbenchmark多进程多线程模式的起点
 * 在该函数执行后
 * 每个子进程又会通过访问call_threads函数来生成若干子线程
 *
 * @param bp
 * cbenchmark全局信息
 * @param n
 * 该进程所负责执行的并发数
 * 也就是该进程将会生成的线程(虚拟用户)数
 * @param g
 * 进程(用户)组ID
 */
void dofork(struct bench * bp,int n,long int g)
{
		if (fork()==0) {
				syslog(LOG_NOTICE, "Child process forked. pid: [%ld], ppid: [%ld]",getpid(),getppid());
				/* 
				 *	生成bench_child_t变量
				 *	每个该变量属于一个进程
				 *	但存放在进程共享内存中
				 * */
				bench_child_t *bcp = create_child_bench(bp,n,g);

				//如果指定参数，则进行进程参数初始化
				if(bp->infile != NULL){
						proc_param_st_t procpm;                                                 
						init_param(bcp, &procpm);        
						bcp->param = (void*)&procpm; 
				}

				call_threads(bcp);
				exit(errno);
		}
}

/**
 * @brief dispatch 
 * 并发数分配到若干进程
 *
 * 将期待的并发量p->num
 * 也就是参数 c 的值分组
 * 每组调用一次dofork函数得到一个进程
 * 默认一个进程里面会产生BM_GROUP_THREADS个线程
 * p->num在对BM_GROUP_THREADS求余
 * 剩下的不足BM_GROUP_THREADS都会分配到一个进程中
 *
 * @param p
 * cbenchmark全局信息
 */
void dispatch(struct bench * bp)
{
		long int i;

		for (i = 0; i < bp->num/BM_GROUP_THREADS; i++) {
				dofork(bp,BM_GROUP_THREADS,i);
		}
		if(bp->num%BM_GROUP_THREADS > 0)
				dofork(bp,bp->num%BM_GROUP_THREADS,i);
}

/**
 * @brief waitall 
 * cbenchmark主进程等待全部子进程执行完毕
 *
 * @param p
 * cbenchmark全局信息
 */
void waitall(void *p)
{
		struct bench *bp = (struct bench *)p;
		int status = 0;

		do {
				status = wait(NULL);
				if(status == -1 && errno != ECHILD) {
						syslog(LOG_ERR, "wait child process error! - %m");
						//abort();
				}
		} while (status > 0);
}

bench_t* bm_init(void *param){
		bench_t* bp = (bench_t*)param;
		bench_t* bp_new;

		if(bp->mode == 0x0)
				bp->mode = BM_MODE_COUNTER;

		bp->processes = bp->num / BM_GROUP_THREADS;
		bp->groupthreads = BM_GROUP_THREADS;
		if(bp->num % BM_GROUP_THREADS > 0)
				bp->processes += 1;

		/*
		 * 通过pmalloc调用mmap
		 * 分配bench_child_t的空间
		 * bench_child_t的数量取决于子进程数
		 */
		pmalloc(sizeof(bench_t) + sizeof(bench_child_t)*(bp->processes),(void **)&mbp);
		memset(mbp,0,sizeof(bench_t) + sizeof(bench_child_t)*(bp->processes));
		memcpy(&mbp->bp,bp,sizeof(bench_t));

		INIT_LIST_HEAD(&mbp->bp.children);

		/*
		 * 	如果日志输出目录已经存在
		 * 	就删除掉
		 */
		int ret = 0;
		if(bp->outfile){
				//			ret = rmdir(bp->outfile);
				ret = unlink_recursive(bp->outfile);
				if(ret != 0){
						syslog(LOG_ERR,"rmdir %s faild - %m",bp->outfile);
				}
		}

		mbp->bp.pid = getpid();///<获得主进程pid
		return &mbp->bp;
}

/**
 * @brief benchmark 
 * cbenchmark的入口
 * 通过读取参数中的信息
 * 开始执行
 *
 * @param param
 * cbenchmark全局信息
 */
void benchmark(void* param)
{
		struct bench * bp = bm_init(param);
		struct timeval tvStart,tvEnd;
		float dif = 0;
		float tps = 0;

		if(bp->mode & BM_MODE_SHARE && (bp->libs != NULL)){
				init_mw(bp);
		}

		//参数文件初始化	
		if(bp->infile != NULL){
				init_proc_param(bp);
		}

		//日志初始化
		openlog(bp->log.name, LOG_PID|LOG_CONS, LOG_USER);
		setlogmask(LOG_UPTO(bp->log.level));

		/*
		 * 为cbenchmark主进程注册信号处理函数
		 * 之后会对每个子进程也注册类似函数
		 * 这些信号处理统一由cb_trap管理
		 */

		/*
		 * SIGINT信号处理当用户通过Ctrl+C发送中断信息给主进程后
		 * 主进程将让子进程停止工作
		 * 同时自己也逐渐结束
		 */
		if(signal(SIGINT,cb_trap) == SIG_ERR){
				fprintf(stderr,"Register signal trap faile.");
		};

		//起始时间
		gettimeofday(&tvStart,NULL);

		dispatch(bp);

		//如果以定时器模式执行
		//则启动定时器
		//并设置回掉函数
		//让其对子进程发送SIGUSR1信号
		if(bp->mode & BM_MODE_TIMER){
				timer(&bp->time,cb_kill_children_break,NULL);
		}

		//等待所有进程终止
		waitall((void *)bp);

		//终止时间
		gettimeofday(&tvEnd,NULL);

		dif = (tvEnd.tv_sec-tvStart.tv_sec) + (tvEnd.tv_usec-tvStart.tv_usec)/1000000.0;

		analyse((void *)bp,dif);

		//关闭日志
		closelog();
		//关闭动态库
		if(bp->mode & BM_MODE_SHARE && (bp->libs != NULL)){
				destroy_mw(bp);
		}
}

/**
 * @brief get_vuser_id 
 * 用户空间函数
 * 通过该函数可以得到当前用户的用户id
 *
 * @param v
 *
 * @return 
 * 当前用户id
 */
long int get_vuser_id(void* v){
		vuser_node_st_t *vuser = (vuser_node_st_t *)v;
		return vuser->id;
}

/**
 * @brief get_vuser_group 
 * 用户空间函数
 * 通过该函数可以得到当前用户的组id
 *
 * @param v
 *
 * @return 
 * 当前用户组id
 */
long int get_vuser_group(void* v){
		vuser_node_st_t *vuser = (vuser_node_st_t *)v;
		return vuser->group;
}

/**
 * @brief get_vuser_ite 
 * 用户空间函数
 * 通过该函数可以得到当前用户act函数的已经执行次数
 *
 * @param v
 *
 * @return 
 * 当前用户act函数已经执行次数
 */
long int get_vuser_ite(void* v){
		vuser_node_st_t *vuser = (vuser_node_st_t *)v;
		return vuser->curIteNo;
}


/**
 * @brief cb_init 
 * 初始化cbenchmark的全局信息结构体
 *
 * @param bp
 * 提供一个需要被初始化的结构体
 * 如果没有可以传入NULL
 *
 * @return 
 * 将被传入的结构体作初始化操作
 * 或者生成一个初始化好的全局信息结构体
 * 并将他的指针返回
 */
bench_t* cb_init(){
		bench_t *bp;
		bp = (bench_t *)malloc(sizeof(bench_t));

		/*
		 * 	初始化bp，设置count以及script函数
		 * */
		bp->script.init = NULL;
		bp->script.act = NULL;
		bp->script.end = NULL;
		bp->script.initialize = NULL;
		/*
		 * 	设置定时器执行时间
		 * 	初始化时必须设置为0
		 * 	否则如果time中的两个元素不为0
		 * 	则迭代执行压力的时候将按照定时器方式执行
		 * 	而忽略设置的执行次数
		 * */
		bp->time.tv_sec = 0;
		bp->time.tv_usec = 0;

		/*
		 * 	在bm_init函数中
		 * 	如果mode不是计时器模式
		 *	则默认设置mode ＝ BM_MODE_COUNTER
		 * */
		bp->mode = 0;

		/*
		 *	初始化动态库配置
		 * */
		bp->libs = 0;

		//参数初始化,设置默认参数
		bp->log.level = LOG_ERR;//LOG_DEBUG;
		strpcpy(&bp->log.name,"Benchmark");
		strpcpy(&bp->outfile,"result");

		bp->n = 100;
		bp->num = 10;
		bp->param = NULL;
		bp->infile = NULL;

		return bp;
}

bench_child_t * get_bench_child(long int i)
{
		return (bench_child_t *)((long int)mbp + sizeof(bench_t) + sizeof(bench_child_t)*i);
}

bench_child_t * get_bench_child_by_pid(pid_t pid)
{
		long i;
		for(i = 0; i < mbp->bp.processes; i++){
				bench_child_t *bcp = get_bench_child(i);
				if(bcp->pid == pid)
						return bcp;
		}
		return NULL;
}

bench_child_t * get_current_bench_child()
{
		return get_bench_child_by_pid(getpid());
}

void* cb_kill_child(void* p,int n,...)
{
		va_list ap;
		va_start(ap,n);
		int sig = *(int *) p;
		long i;
		for(i = 0; i < n; i++){
				pid_t pid = va_arg(ap, pid_t);
				if(kill(pid,sig) == 0)
						syslog(LOG_NOTICE, "Send signal<%d> to Process<%d>.",sig,pid);
				else
						syslog(LOG_ERR, "Fail Send signal<%d> to Process<%d>.",sig,pid);
		}
		va_end(ap);
}

void* cb_kill_children(void* p)
{
		int sig = *(int *) p;
		long i;
		for(i = 0; i < mbp->bp.processes; i++){
				bench_child_t *bcp = get_bench_child(i);
				if(kill(bcp->pid,sig) == 0)
						syslog(LOG_NOTICE, "Send signal<%d> to Process<%d>.",sig,bcp->pid);
				else
						syslog(LOG_ERR, "Fail Send signal<%d> to Process<%d>.",sig,bcp->pid);
		}
}

void* cb_kill_children_break(void* p)
{
		int sig = SIGUSR1;
		mbp->bp.childsigopt = 1;
		cb_kill_children(&sig);
}
