/*
 * =====================================================================================
 *
 *       Filename:  analyse.c
 *
 *    Description:
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
#include "cbenchmark.h"

//static long b_success_count = 0;///<全局成功计数器
//static long b_fail_count = 0;///<全局失败计数器
static long bc_success_count = 0;///<用户组成功计数器
static long bc_fail_count = 0;///<用户组失败计数器
static long v_success_count = 0;///<用户成功计数器
static long v_fail_count = 0;///<用户失败计数器


//void set_b_success_count(long i)
//{
//	b_success_count = i;
//}
//
//int get_b_success_count(void)
//{
//	return b_success_count;
//}

//void set_b_fail_count(long i)
//{
//	b_fail_count = i;
//}
//
//int get_b_fail_count(void)
//{
//	return b_fail_count;
//}

void set_bc_success_count(long i)
{
	bc_success_count = i;
}

int get_bc_success_count(void)
{
	return bc_success_count;
}

void set_bc_fail_count(long i)
{
	bc_fail_count = i;
}

int get_bc_fail_count(void)
{
	return bc_fail_count;
}

void set_v_success_count(long i)
{
	v_success_count = i;
}

int get_v_success_count(void)
{
	return v_success_count;
}

void set_v_fail_count(long i)
{
	v_fail_count = i;
}

int get_v_fail_count(void)
{
	return v_fail_count;
}



analyse_t* analyse(void* p,float t)
{
	int i = 0;
	bench_t *bp = (bench_t *)p;
	bench_child_t *bcp;

	analyse_t *rlt = (analyse_t *)malloc(sizeof(analyse_t));
	rlt->success = 0;
	rlt->fail = 0;

	/*
	 * 统计每个子进程的成功和失败的事件
	 * 并且要去掉等待子进程分析Vuser的耗时
	 * 该耗时为最耗时子进程所花费的分析时间
	 */
	float max_cost = 0;
	for(;i < bp->processes; i++){
		bcp = get_bench_child(i);
		rlt->success += bcp->transactions.success;
		rlt->fail += bcp->transactions.fail;
		if(max_cost < bcp->analyse_cost)
				max_cost = bcp->analyse_cost;
	}

	rlt->t = t - max_cost;
	rlt->tps = (rlt->success+rlt->fail)*1.0/rlt->t;
	rlt->fail_rate = rlt->fail*1.0/(rlt->success+rlt->fail);

	printf("Success:%ld\n"
					"Fail:%ld\n"
					"AnalyseCost:%fsec\n"
					"Timespend:%fsec\n"
					"TPS:%d\n"
					"Failrate:%f\n"
					,rlt->success,rlt->fail,max_cost,rlt->t,rlt->tps,rlt->fail_rate);
	return rlt;
}

void analyse_vuser(void* p)
{
	bench_child_t *bcp = (bench_child_t *)p;
	int ret = 0;
	char path[128] = {0};

	if(list_empty(&bcp->vusers)){
		syslog(LOG_ERR,"No vusers.Analyse exit.");
		return;
	}

	set_bc_success_count(0);
	set_bc_fail_count(0);

	memset(path,0,sizeof(path));
	if(bcp->b->outfile){
		ret = mkdir(bcp->b->outfile,read_umask());
		if(ret != 0)
			syslog(LOG_ERR,"Create dir failed: %s - %m",path);
		sprintf(path,"%s",bcp->b->outfile);
	}

	sprintf(path,"%s/%d",path,bcp->group);
	ret = mkdir(path,read_umask());
	if(ret != 0)
		syslog(LOG_ERR,"Create dir failed: %s - %m",path);

	vuser_node_st_t *vuser = (vuser_node_st_t *)NULL;
	list_for_each_entry(vuser,&bcp->vusers,list){
		if(vuser != NULL)
			analyse_transaction((void*)vuser,path);
	}

	bcp->transactions.success = get_bc_success_count();
	bcp->transactions.fail = get_bc_fail_count();
}

void analyse_transaction(void* p,const char* pa)
{
	vuser_node_st_t *vuser = (vuser_node_st_t *)p;
	int ret = 0;
	char path[128] = {0};

	if(list_empty(&vuser->transactions)){
		syslog(LOG_ERR,"No transactions.Analyse exit.");
		return;
	}

	set_v_success_count(0);
	set_v_success_count(0);

	memset(path,0,sizeof(path));
	sprintf(path,"%s/%d",pa,vuser->id);
	ret = mkdir(path,read_umask());
	if(ret != 0)
		syslog(LOG_ERR,"Create dir failed: %s - %m",path);

	if(!list_empty(&vuser->transactions)){
		transaction_st_t *tran;
		list_for_each_entry(tran,&vuser->transactions,list){
//			set_b_success_count(get_b_success_count()+tran->success);
//			set_b_fail_count(get_b_fail_count()+tran->fail);
			set_bc_success_count(get_bc_success_count()+tran->success);
			set_bc_fail_count(get_bc_fail_count()+tran->fail);
			set_v_success_count(get_v_success_count()+tran->success);
			set_v_fail_count(get_v_fail_count()+tran->fail);

			analyse_transaction_verb((void*)tran,path);
		}
	}
}

void analyse_transaction_verb(void* p, const char* pa)
{
	transaction_st_t *tran = (transaction_st_t *)p;
	int ret = 0;
	char path[128] = {0};
	int count = 0;
	float cost = 0;

	if(list_empty(&tran->success_verb) && list_empty(&tran->fail_verb)){
		syslog(LOG_ERR,"No verb.Analyse exit.");
		return;
	}

	memset(path,0,sizeof(path));
	sprintf(path,"%s/%s",pa,tran->name);
	ret = mkdir(path,read_umask());
	if(ret != 0)
		syslog(LOG_ERR,"Create dir failed: %s - %m",path);

	char file_dat[512] = {0};
	memset(file_dat,0,sizeof(file_dat));
	sprintf(file_dat,"%s/%s",path,tran->name);
	FILE* ff = fopen(file_dat,"w+");
	if(!ff){
			syslog(LOG_ERR,"fopen failed. Can't open file:%s",file_dat);
	}

	/*
	 * 	如果有success_verb
	 * */
	if(!list_empty(&tran->success_verb)){
		char success_dat[512] = {0};
		memset(success_dat,0,sizeof(success_dat));
		sprintf(success_dat,"%s/%s",path,"success.dat");
		count = 0;
		cost = 0;

		FILE* fsucc = fopen(success_dat,"w+");
		fprintf(ff,"Success\n");

		if(fsucc){
			transaction_verb_st_t *verb;
			list_for_each_entry(verb,&tran->success_verb,list){
				fprintf(fsucc,"%ld\t%ld\t%s\t%ld\n",verb->id,verb->t,verb->msg,verb->spend);
				count++;
				cost += verb->spend;
			}
			tran->succ_art = cost/count;
			fprintf(ff,"count:%d\n"
							"cost:%f\n"
							"art:%f\n",count,cost,tran->succ_art);
		}else{
			syslog(LOG_ERR,"fopen failed. Can't open file:%s",success_dat);
		}
		fclose(fsucc);
	}

	/*
	 * 	如果有fail_verb
	 * */
	if(!list_empty(&tran->fail_verb)){
		char fail_dat[512] = {0};
		memset(fail_dat,0,512);
		sprintf(fail_dat,"%s/%s",path,"fail.dat");
		count = 0;
		cost = 0;

		FILE* ffail = fopen(fail_dat,"w+");
		fprintf(ff,"Fail\n");

		if(ffail){
			transaction_verb_st_t *verb;
			list_for_each_entry(verb,&tran->fail_verb,list){
				fprintf(ffail,"%ld\t%ld\t%s\t%ld\n",verb->id,verb->t,verb->msg,verb->spend);
				count++;
				cost += verb->spend;
			}
			tran->fail_art = cost/count;
			fprintf(ff,"count:%d\n"
							"cost:%f\n"
							"art:%f\n",count,cost,tran->succ_art);
		}else{
			syslog(LOG_ERR,"fopen failed. Can't open file:%s",fail_dat);
		}
		fclose(ffail);
	}
	fclose(ff);
}

/**
 * @brief trans_analyse
 * 分析本进程组执行数据并写入日志文件
 *
 * 该函数可以统计本进程组内
 * 所有虚拟用户执行时产生的数据
 * 比如:用户添加的事件以及事件执行消耗的事件和成功失败数量的统计等
 * 在统计完成后会将这些数据写入到日志中
 * -存储格式
 * 由于cbenchmark在长时间执行后会产生很大的日志文件
 * 所以对该数据的格式化并没有采用xml/json/yaml等其他结构化存储格式
 * -日志目录结构
 * 该函数生成的文件存放方式为
 * -#bp->output_file || "benchmark_result"
 *  --#group(0,1,2,3,etc.)
 *  ---#userId(0,1,2,3,etc.)
 *   ----#success.dat || fail.dat
 * -分析器
 *  在cbenchmark相关的一个potal项目中(基于cbenchmark的一个web工程，管理cbenchmark的用例，生成报表，发送测试报告以及给开放接口的IM工具发送测试状态消息)
 *  会有一个Ruby写的分析器将这些数据分析成格式化之后的结果
 *  比如可以生成xml给portal的报表展示
 *
 * @param param
 * cbenchmark全局信息
 */
void trans_analyse(void* p){
	long int success_count = 0;
	long int fail_count = 0;
	char content[1000000] = {0};

	strcat(content,"\n[Analyse]\n\n");

	bench_child_t *bcp = (bench_child_t *)p;
	if(list_empty(&bcp->vusers)){
		syslog(LOG_ERR,"No vusers.Analyse exit.");
		return;
	}
	/*
	 * 	如果有虚拟用户，
	 * 	则下一步将遍历vusers
	 * */

	vuser_node_st_t *vuser = (vuser_node_st_t *)NULL;
	list_for_each_entry(vuser,&bcp->vusers,list){
		if(vuser != NULL){
			/*
			 * 	创建虚拟用户verb数据目录
			 * 	./group/userId/transaction
			 * */
			int ret = 0;
			char group_dir[128] = {0};
			memset(group_dir,0,128);
			bench_t *bp = vuser->b->b;
			if(bp->outfile){
				ret = mkdir(bp->outfile,read_umask());
				if(ret != 0)
					syslog(LOG_ERR,"Create dir failed: %s - %m",group_dir);
				sprintf(group_dir,"%s/",bp->outfile);
			}
			sprintf(&group_dir[strlen(group_dir)],"%d",vuser->group);
			ret = mkdir(group_dir,read_umask());
			if(ret != 0)
				syslog(LOG_ERR,"Create dir failed: %s - %m",group_dir);

			char group_user_dir[128] = {0};
			memset(group_user_dir,0,128);
			sprintf(group_user_dir,"%s/%d",group_dir,vuser->id);
			ret = mkdir(group_user_dir,read_umask());
			if(ret != 0)
				syslog(LOG_ERR,"Create dir failed: %s - %m",group_user_dir);

			long int v_success_count = 0;
			long int v_fail_count = 0;
			/*
			 * 	如果该虚拟用户有事件，
			 * 	则遍历事件
			 * */
			syslog(LOG_NOTICE,"[Analyse] - group id => %ld, user id => %ld",vuser->group,vuser->id);
			sprintf(content,"%s\tVuser:\n\t\tgroup id : %ld\n\t\tuser id : %ld\n",content,vuser->group,vuser->id);

			strcat(content,"\n\tTransactions:\n");

			if(!list_empty(&vuser->transactions)){
				transaction_st_t *tran;
				list_for_each_entry(tran,&vuser->transactions,list){
					success_count += tran->success;
					fail_count += tran->fail;
					v_success_count += tran->success;
					v_fail_count += tran->fail;
					/*
					 * 	处理：
					 * 	success_verb
					 * 	fail_verb
					 * */

					/*
					 * 	创建该事件日志目录
					 * 	一个事件拥有2个日志文件
					 * 	success.dat
					 * 	fail.dat
					 * */
					char group_user_trans_dir[256] = {0};
					memset(group_user_trans_dir,0,256);
					sprintf(group_user_trans_dir,"%s/%s",group_user_dir,tran->name);
					ret = mkdir(group_user_trans_dir,read_umask());
					if(ret != 0)
									syslog(LOG_ERR,"Create dir failed: %s - %m",group_user_dir);

					/*
					 * 	如果有success_verb
					 * */
					if(!list_empty(&tran->success_verb)){

						char group_user_trans_succ_dir[512] = {0};
						memset(group_user_trans_succ_dir,0,512);
						sprintf(group_user_trans_succ_dir,"%s/%s",group_user_trans_dir,"success.dat");

						FILE* fsucc = fopen(group_user_trans_succ_dir,"w+");

						if(fsucc){
							transaction_verb_st_t *verb;
							list_for_each_entry(verb,&tran->success_verb,list){
								fprintf(fsucc,"%ld\t%ld\t%s\t%ld\n",verb->id,verb->t,verb->msg,verb->spend);
							}
						}else{
							syslog(LOG_ERR,"fopen failed. Can't open file:%s",group_user_trans_succ_dir);
						}

						fclose(fsucc);
					}

					/*
					 * 	如果有fail_verb
					 * */
					if(!list_empty(&tran->fail_verb)){
						char group_user_trans_fail_dir[512] = {0};
						memset(group_user_trans_fail_dir,0,512);
						sprintf(group_user_trans_fail_dir,"%s/%s",group_user_trans_dir,"fail.dat");

						FILE* ffail = fopen(group_user_trans_fail_dir,"w+");

						if(ffail){
							transaction_verb_st_t *verb;
							list_for_each_entry(verb,&tran->fail_verb,list){
								fprintf(ffail,"%ld\t%ld\t%s\t%ld\n",verb->id,verb->t,verb->msg,verb->spend);
							}
						}else{
							syslog(LOG_ERR,"fopen failed. Can't open file:%s",group_user_trans_fail_dir);
						}

						fclose(ffail);
					}


					sprintf(content,"%s\t\tName:%s\n\t\tSuccess:%ld\n\t\tFail:%ld\n",content,tran->name,tran->success,tran->fail);
				}
				/*
				 * 	vuser统计事件
				 * */
				sprintf(content,"%s\n\tVuser Total Transaction:\n\t\tSuccess:%ld\n\t\tFail:%ld\n",content,v_success_count,v_fail_count);
			}
		}
	}
	sprintf(content,"%s\n\tTotal:\n\t\tSuccess:%ld\t\tFail:%ld\n",content,success_count,fail_count);
	/*
	 *	将该进程事件统计信息写入该进程信息结构体中bcp.
	 * */
	bcp->transactions.success = success_count;
	bcp->transactions.fail = fail_count;

	printf("%s",content);
}
