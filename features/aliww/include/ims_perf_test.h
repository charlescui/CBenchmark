/*
 * =====================================================================================
 *
 *       Filename:  ims_perf_test.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2011年01月07日 15时44分43秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Davi.Q (), 
 *        Company:  Aliyun
 *
 * =====================================================================================
 */

#ifndef IMS_PERF_TEST_H
#define IMS_PERF_TEST_H
#include <string>
using namespace std;

#ifdef __cplusplus
extern "C" {
#endif
void *ims_init(void* p);
void *ims_login(void* p);
void *ims_login_with_token(void* p);
void *ims_updateUserProfile(void* p);
void *ims_chgStatus(void *p);
void *ims_storm_login(void* p);
void *ims_end(void* p);
#ifdef __cplusplus
}
#endif
#endif
