/*
 * =====================================================================================
 *
 *       Filename:  get_bind_list.h
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

#ifndef TPFS_PERF_TEST_H
#define TPFS_PERF_TEST_H
#include <string>
using namespace std;

#ifdef __cplusplus
extern "C" {
#endif
void *tpfs_init(void* p);
void *tpfs_act(void* p);
void *tpfs_end(void* p);
void *tpfs_getcal(void* p);
void *tpfs_gettext(void* p);
void *tpfs_getpic(void* p);
void *tpfs_putpic(void* p);
void *tpfs_putgetpic(void* p);

#ifdef __cplusplus
}
#endif
#endif
