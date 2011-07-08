/*
 * main.cpp
 *
 *  Created on: 2010-10-9
 *      Author: zheng.cuizh
 */

#include "main.h"
#include "cbenchmark.h"
/*
 * 	这里commandline得到的参数是BM传递过来的一个VUSER结构体，
 * 	该结构题包含一个指向bench_t结构的指针，
 * 	而bench_t结构可以得到业务参数param的地址
 * */
void *commandline(void* v)
{
	vuser_node_st_t* vuser = (vuser_node_st_t*)v;
	void* param = vuser->b->b->param;

	char buf[256];
	FILE *fp;
	if(!(fp=popen((const char *)param,"r")))
			syslog(LOG_ERR, "popen {%s} failed. - %m",(const char *)param);
	if (bm_opts.v != 0){
			while (fread(buf, 1, sizeof(buf), fp)) {
					fputs(buf, stdout);
			}
	}
	if (!pclose(fp))
			syslog(LOG_ERR, "close popen failed. - %m");
}

void *concurrence(void* param)
{
        //这里完成单线程多次执行的代码

        //例子
	printf("Test OK!\n");
    char uuidstr[36];
/*
  	uuid_t buf;
	uuid_generate_random(buf);
 	uuid_unparse(buf,uuidstr);
    printf("concurrence func get uuid => %s\n",uuidstr);
*/
}

void arg_err(void)
{
		printf("Arguments error.See [-?] for help\n");
		exit(-1);
}

int main (int argc, char* const argv[])
{
		char ch;
		bench_t *bp = cb_init();

		int ARGS = 0x00;
		int scenarioId = 0;


		//处理argv
		while( ( ch = getopt( argc, argv, "n:c:l:g:f:o:x:T:F:stv?" ) ) != EOF )
		{
				switch(ch)
				{
						case 'n':
								/*
								 * 	单个线程的迭代次数
								 * */
								bp->n = atoi(optarg);
								printf("Each thread iterations times =>%d\n", bp->n);
								break;
						case 'c':
								/*
								 * 	并发数
								 * */
								bp->num = atol(optarg);
								printf("Concurrence NUM => %d\n", bp->num);
								break;
						case 'l':
								/*
								 * 	测试日志的级别
								 LOG_EMERG       0
								 LOG_ALERT       1
								 LOG_CRIT        2
								 LOG_ERR         3
								 LOG_WARNING     4
								 LOG_NOTICE      5
								 LOG_INFO        6
								 LOG_DEBUG       7
								 *
								 * */
								bp->log.level = atol(optarg);
								printf("Syslog level => %d.\n",bp->log.level);
								break;
						case 'x':
								/*
								 * 	和参数s一样，
								 * 	这个参数不需要交互式的选择执行某一个用例，
								 * 	可以直接选择执行某一个用例
								 * */
								scenarioId = atoi(optarg);
								break;
						case 'g':
								strpcpy(&bp->log.name,optarg);
								printf("Syslog name => %s.\n",bp->log.name);
								break;
						case 's':
								/*
								 * 	通过这个参数可以实现测试用例的交互式选择执行
								 * */
								ARGS |= BM_SCEN;
								printf("[1]\tScenario1\n");
								printf("[2]\tScenario2\n");
								printf("[3]\tScenario3\n");
								printf("[4]\tScenario4\n");
								printf("[5]\tScenario5\n");
								printf("[6]\t\n");
								printf("Choose scenario ID.\n");
								scanf("%d",&scenarioId);
								break;
						case 't':
								/*
								 * 	用内置的测试用例执行一下BM的自测
								 * */
								ARGS |= BM_SELFTEST;
								bm_opts.t = 1;
								break;
						case 'v':
								/*
								 * 	这个参数决定了是否要显示命令行的输出stdout，默认不显示
								 * */
								bm_opts.v = 1;
								break;
						case 'f':
								/*
								 *		设置保存输出分析日志的目录
								 * */
								if(strlen(optarg) > 0) {
										strpcpy(&bp->outfile,optarg);
								}
                                break;
						case 'F':
								/* 
								 *	设置以动态库方式加载时的配置路径
								 * */
								if(strlen(optarg) > 0) {
										ARGS |= BM_SHARED;
										strpcpy(&bp->libs,optarg);
										/* 
										 *	设置CBenchmark以调用动态库方式执行
										 *	如果此时没有设置bp->mode,
										 *	那么此后bp->mode = BM_MODE_SHARE | BM_MODE_COUNTER
										 * */
										bp->mode |= BM_MODE_SHARE;
								}
								break;
						case 'o':
								/*
								 * 	这个参数是用来在BM被当作命令行工具时，
								 * 	并发执行某条命令而用的。
								 * */
								ARGS |= BM_CMD;
								if (strlen(optarg) > 0) {
										strpcpy((char **)&(bp->param),optarg);
										printf("Command line => %s.\n",(char*)bp->param);
										break;
								}else
										arg_err();
						case 'T':
								/*
								 * 	设置执行时长，单位为妙
								 * 	如果设置了此参数，则执行次数将不起作用
								 * */
								bp->time.tv_sec = atol(optarg);
								bp->mode |= BM_MODE_TIMER;
								break;
						case '?':
								{
										char verb[1024]={0};
										strcat(verb,"\tCharlesCui's Benchmark\n");
										strcat(verb,"\t\thelp you do performance test nice.\n");

										strcat(verb,"-o [\"Shell command\"]\n"); 
										strcat(verb,"-f [Output result path]\n");
										strcat(verb,"-F [Dynamic lib path.]\n");
										strcat(verb,"-n [Each thread iterations times]\n");
										strcat(verb,"-c [Concurrence NUM]\n");
										strcat(verb,"-l [Syslog level]\n");
										strcat(verb,"-g [Syslog name,less than 128 char]\n");
										strcat(verb,"-v [Show -o stdoutput]\n");
										strcat(verb,"-t [Selftest]\n");
										strcat(verb,"-x [Scenario id]\n");
										strcat(verb,"-T [Timmer(seconds)].\n");
										strcat(verb,"-s [Select a scenario from list]\n");

										strcat(verb,"Project based on http://code.google.com/p/cbenchmark/\n");
										printf(verb);
										exit(2);
								}
						default:
								printf("Not support option :%c\n",ch);
								arg_err();
				}
		}

		/*
		 *	判断执行模式
		 * */
		if (ARGS & BM_SELFTEST) {
				/*
				 *	执行benchmark自身测试
				 * */
				bp->script.act = concurrence;
				bp->param = NULL;
		}else if((ARGS & BM_SHARED)&&(bp->mode & BM_MODE_SHARE)){
				/*  
				 *      判断执行模式是否是动态库方式
				 * */
		}else if((ARGS & BM_SCEN)&&(scenarioId>0)){
				/*
				 * 	判断是否是选择编译模式并且指定场景
				 * 	如果scenario被选择，
				 * 	则执行这个分支的代码
				 * 	此分支负责选择执行哪个测试场景／用例
				 * */

				switch(scenarioId){
						case	1:
								/*
								 * 	下面是个例子
								 * 	这里通过选择case 1，来执行一下这个测试场景/用例
								 * */
								{
										break;
								}
						case	2:
								break;
						case	3:
								break;
						default:
								break;
				}
		}else if(ARGS & BM_CMD){
				/*
				 *		并发执行终端命令
				 * */
				printf("Benchmark command model:\n");
				bp->script.act = commandline;
		}else {
				arg_err();
		}

		benchmark((void *)bp);

		return 0;
}
