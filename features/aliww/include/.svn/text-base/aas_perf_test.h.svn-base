#ifndef _AAS_PERF_TEST_H
#define _AAS_PERF_TEST_H

#include "paramutil.h"
#include "cbenchmark.h"
#include <Ice/Ice.h>
#include <aasservice.h>
#include <iostream>
#include <time.h>
#include "md5hash.h"

using namespace std;
using namespace Ice;
using namespace AASSERVICE;

typedef struct aas_t{
    AasInterfacePrx *aas;
    Ice::CommunicatorPtr *ic;
}aas_st; 

#ifdef __cplusplus
extern "C" {
#endif

void* aas_init(void *p);
void* aas_act(void *p);
void* aas_end(void *p);

void* aas_textput(void *p);
void* aas_textgetput(void *p);
void* aas_picput(void *p);
void* aas_picputget(void *p);
void* aas_textget(void *p);
void* aas_picget(void *p);
#ifdef __cplusplus
}
#endif
#endif
