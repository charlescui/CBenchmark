/*
 * =====================================================================================
 *
 *       Filename:  bind_unbind.h
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

#ifndef BIND_UNBIND_H
#define BIND_UNBIND_H
#include <string>
using namespace std;

void *bind_unbind_init(void* p);
void *bind_unbind_act(void* p);
void *bind_unbind_end(void* p);

#endif//BIND_UNBIND_H
