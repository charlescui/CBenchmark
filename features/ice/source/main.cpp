/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  ICE测试用例库
 *
 *        Version:  1.0
 *        Created:  01/27/2011 10:31:46 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zheng.cuizh@gmail.com, 
 *        Company:  Aliyun
 *
 * =====================================================================================
 */
#include "main.h"


void *initialize(void *p)
{
	middleware_t *pmw = (middleware_t*)p;
	bench_t *pb = pmw->bp;
	int scenarioID = 1;
	printf("Test scenario:\n");
	printf("1:MOS getUserStatus\n");
	printf("2:MOS getUserCount\n");
	printf("\nSelect scenario ID:\n");
	scanf("%d",&scenarioID);
	switch(scenarioID)
	{
		case 1:
			{
				//注意测试数据所在的位置与当前CBenchmark执行路径的关系
				set_param_file(pb, "../../data/user");
				pmw->script.init = mos_init; 
				pmw->script.act = mos_getUserStatus;
				pmw->script.end = mos_end;
				break;
			}
		case 2:
			{
				pmw->script.init = mos_init; 
				pmw->script.act = mos_getUserCount;
				pmw->script.end = mos_end;
				break;
			}
		default:
			{
				printf("scenarioID: %d is not right.Please have a check!\n", scenarioID);
			}

	}
}

