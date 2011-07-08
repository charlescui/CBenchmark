/*
 * cb_test_multitransactions_dl.c
 *
 *  Created on: 2011-1-21
 *      Author: zheng.cuizh
 */

#include "cbenchmark.h"

void* multi_trans_init(void* p);
void* multi_trans_act(void* p);
void* multi_trans_end(void* p);

void* initialize(void* p)
{
	middleware_t *mw = (middleware_t *)p;
	bench_t *bp = mw->bp;
	printf("Output file path:%s\n\n",bp->outfile);
	printf("Defense of the Ancients\n");
	mw->script.init = multi_trans_init;
	mw->script.act = multi_trans_act;
	mw->script.end = multi_trans_end;
}

void* multi_trans_init(void* p)
{
	vuser_node_st_t *vuser = (vuser_node_st_t*) p;
//	printf("D*O*T*A\n");
	create_transaction(vuser,"GodLike");
	create_transaction(vuser,"TribKill");
}

void* multi_trans_act(void* p)
{
	vuser_node_st_t *vuser = (vuser_node_st_t*) p;
	success_transactionEx(vuser,"GodLike","Pis");
	fail_transactionEx(vuser,"TribKill","2B");
}

void* multi_trans_end(void* p)
{
	vuser_node_st_t *vuser = (vuser_node_st_t*) p;
//	puts("Well Done!\n");
}
