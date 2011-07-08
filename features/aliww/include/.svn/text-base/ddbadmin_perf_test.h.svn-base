#ifndef _DDBAdmin_PERF_TEST_H
#define _DDBAdmin_PERF_TEST_H

#include "paramutil.h"
#include "cbenchmark.h"
#include "DDBInterface.h"
#include <Ice/Ice.h>
#include <iostream>

using namespace std;
using namespace Ice;
using namespace AliDDB;

typedef struct ddbadmin_t{
    AliDDBInterfacePrx *ddbadmin;
    Ice::CommunicatorPtr *ic;
}ddbadmin_st; 

#ifdef __cplusplus
extern "C" {
#endif

void* ddbadmin_init(void *p);
void* ddbadmin_end(void *p);

void* ddbadmin_insertRecord(void *p);
void* ddbadmin_getRecord(void *p);
void* ddbadmin_updateRecord(void *p);
void* ddbadmin_deleteRecord(void *p);
void* ddbadmin_insertRecord_delete(void *p);
#ifdef __cplusplus
}
#endif
#endif
