/*
 * =====================================================================================
 *
 *       Filename:  backup.c
 *
 *    Description:  保存历史函数
 *
 *        Version:  1.0
 *        Created:  2011年02月15日 11时55分28秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */


/**
 * @brief timmer_to_exit 
 * 实现定时执行需要一个定时器
 * 通过select模型得到一个定时器
 *
 * @param tp
 * tp的类型是timmer_to_exit_para_t
 * 包含了一个元素switcher
 * 该元素是执行act循环条件变量的指针
 * 通过改变该指针指向的内容从而改变循环是否成立的条件
 *
 * @return 
 * 无返回
 */
void* timmer_to_exit(void *tp)
{
	timmer_to_exit_para_t *tpp = (timmer_to_exit_para_t*)tp;
	struct bench* p = tpp->p;
	select(0,0,0,0,&p->time);
	/*
	 *	由于在dobench函数中执行act函数的循环条件是:
	 *	switcher指向的变量小于p->n
	 *	所以下面这个表达式将使死循环中的表达式失效，从而结束act操作
	 * */
	*tpp->switcher = p->n;
}

/**
 * @brief init_timer 初始化定时器结构体
 * 
 * 在这个函数中判断cbenchmark运行时是否以定时器模式运行
 * 如果是
 * 则初始化定时器结构体
 *
 * @param p
 * cbenchmark全局配置参数指针
 * @param switcher
 * 控制定时器模式中
 * act循环条件是否成立的变量的指针
 *
 * @return 
 * 操作完成状态
 */
int init_timer(struct bench * p)
{
	timmer_to_exit_para_t *tp = (timmer_to_exit_para_t *)malloc(sizeof(timmer_to_exit_para_t));
	tp->p = p;
	tp->switcher = switcher;
	/*
	 * 	判断是否需要启动定时器
	 * */
	if(p->mode & BM_MODE_TIMER){
		if((p->time.tv_sec > 0) || (p->time.tv_usec > 0)){
			/*
			 * 	如果需要定时器，
			 * 	则设置p->n为大于0的数值
			 * */
			p->n = 0xFFFF;
			/*
			 * 	创建定时器线程，否则会阻塞当前线程
			 * */
			pthread_t tid;
			if(pthread_create(&tid,NULL,timmer_to_exit,(void*)tp)<0){
				syslog(LOG_ERR,"registe timmer failed.BM_INIT_TIMMER_THREADFAIL");
				return BM_INIT_TIMMER_THREADFAIL;
			}
			else{
				/*
				 * 	不需要执行指定次数的迭代操作
				 * 	而是通过定时器线程控制
				 * 	工作线程死循环即可
				 * */
				syslog(LOG_INFO,"registe timmer sucess.");
				return BM_INIT_TIMMER_SUCC;
			}
		}else{
			syslog(LOG_INFO,"no timmer needed.");
			return BM_INIT_TIMMER_NOTIMER;
		}
	}else{
		return BM_INIT_TIMMER_NOTIMER;
	}
}
