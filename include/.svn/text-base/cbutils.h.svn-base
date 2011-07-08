/*
 * =====================================================================================
 *
 *       Filename:  cbutils.h
 *
 *    Description:  cbenchmark工具库的头文件
 *
 *        Version:  1.0
 *        Created:  2011年01月13日 13时43分34秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zheng.cuizh@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef CBUTILS_H
#define CBUTILS_H

#include "stdlib.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <linux/types.h>
//#include <linux/dirent.h>
#include <sys/stat.h>
#include <errno.h>
#include <dirent.h>
#include <sys/time.h>
#include <sys/resource.h>

//#define PATH_MAX 10240

typedef void* (*timer_cb)(void *);

typedef struct {
	struct timeval *t;
	timer_cb cb;
	void* param;
}timer_st;

#ifdef __cplusplus
extern "C" {
#endif
char* strmcpy(char **dest,char *src);
char* strpcpy(char **dest,char *src);
void pmalloc(size_t size,void** out);
char* strpdup(char *src);
int unlink_recursive(const char* name);
void timer(struct timeval *t, timer_cb cb, void *param);
void *timer_to_do(void *param);
void setopenfiles(long num);
#ifdef __cplusplus
}
#endif
#endif
