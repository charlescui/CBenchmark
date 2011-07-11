#ifndef _MOS_PERF_TEST_H
#define _MOS_PERF_TEST_H

#include "paramutil.h"
#include "cbenchmark.h"
#include "mosInterface.h"
#include <Ice/Ice.h>
#include <iostream>

using namespace std;
using namespace Ice;
using namespace AMOServer;

typedef struct mos_t{
    MOSInterfacePrx *mos;
    Ice::CommunicatorPtr *ic;
}mos_st; 

#ifdef __cplusplus
extern "C" {
#endif

void* mos_init(void *p);
void* mos_end(void *p);

void* mos_getUserStatus(void *p);
void* mos_getUserCount(void *p);
#ifdef __cplusplus
}
#endif
#endif
