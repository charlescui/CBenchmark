#ifndef _DBS_PERF_TEST_H
#define _DBS_PERF_TEST_H

#include "paramutil.h"
#include "cbenchmark.h"
#include "dbservice.h"
#include <Ice/Ice.h>
#include <iostream>

using namespace std;
using namespace Ice;
using namespace AliIMDBBase;

typedef struct dbs_t{
    IMDBProxyMgrPrx *dbs;
    Ice::CommunicatorPtr *ic;
}dbs_st; 

#ifdef __cplusplus
extern "C" {
#endif

void* dbs_init(void *p);
void* dbs_end(void *p);

void* dbs_CheckUserTokenExtra(void *p);
void* dbs_CheckWebWWPasswd(void *p);
void* dbs_CheckUserWebPasswdExtra(void *p);
void* dbs_GetUserInfoExNew4(void *p);
void* dbs_UpdateUserDataInfo3(void *p);
#ifdef __cplusplus
}
#endif
#endif
