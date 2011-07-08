#ifndef _USS_PERF_TEST_H
#define _USS_PERF_TEST_H

#include "paramutil.h"
#include "cbenchmark.h"
#include "dbdatadefine.h"
#include "user_statics.h"
#include <Ice/Ice.h>
#include <iostream>

using namespace std;
using namespace Ice;
using namespace UserStaticsX;

typedef struct uss_t{
    UserStaticsIPrx *uss;
    Ice::CommunicatorPtr *ic;
}uss_st; 

#ifdef __cplusplus
extern "C" {
#endif

void* uss_init(void *p);
void* uss_end(void *p);

void* uss_insert(void *p);
void* uss_get(void *p);
#ifdef __cplusplus
}
#endif
#endif
