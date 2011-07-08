/* Copyright(C)
 * For free
 * All right reserved
 * 
 */

/**
 * @file cb_test_lib1.c
 * @brief 
 * @author zheng.cuizh@gmail.com
 * @version 0.1.0
 * @date 2011-01-12
 */


#include "cbenchmark.h"

void* initialize(void* p)
{
	middleware_t *mw = (middleware_t *)p;
	bench_t *bp = mw->bp;
	printf("Hello from cb_test_lib1\n");
}

/**
 * @brief init run once at begin of test case.
 *
 * @param v typeof vuser_node_st_t,cbenchmark all init with this param
 *
 * @return 
 */
void* *init(void* v)
{
	create_transaction(v,"Test_LIBS");
	printf("test init.\n");
	return (void*)0;
}


/**
 * @brief act run each iteration after init been call.
 *
 * @param v typeof vuser_node_st_t,cbenchmark all act with this param
 *
 * @return 
 */
void* *act(void* v)
{
	vuser_node_st_t *vuser = (vuser_node_st_t*) v;
	char msg[36] = {0};

	printf("act from lib1\n");
	sprintf(msg,"i'm lib1.");
	success_transactionEx(v,"Test_LIBS",msg);
	return (void*)0;
}


/**
 * @brief end run at last,to release somen resource or logout action,etc.
 *
 * @param v	typeof vuser_node_st_t,cbenchmark all end with this param
 *
 * @return 
 */
void* *end(void* v)
{
	return (void*)0;
}
