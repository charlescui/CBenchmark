/*
 * =====================================================================================
 *
 *       Filename:  cbutils.c
 *
 *    Description: cbenchmark的工具库 
 *
 *        Version:  1.0
 *        Created:  2011年01月13日 13时38分24秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zheng.cuizh@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#include "cbutils.h"

/**
 * @brief strmcpy 
 * 为dest分配空间同时将src内容copy给dest
 *
 * @param dest
 * @param src
 *
 * @return 
 * @see strcpy
 */

void pmalloc(size_t size,void** out)
{
	void *ret;
	if((ret = mmap(0,size, PROT_READ|PROT_WRITE, MAP_SHARED|MAP_ANONYMOUS,-1,0)) == MAP_FAILED){
		perror("mmap failed");
		exit(EXIT_FAILURE);
	}else{
		*out = ret;
	}
}

char* strmcpy(char **dest,char *src)
{
	*dest = (char*)malloc(strlen(src)+1);
	strcpy(*dest,src);
	dest[strlen(src)] = '\0';
	return *dest;
}

char* strpcpy(char **dest,char *src)
{
	pmalloc(strlen(src)+1,(void**)dest);
	memcpy(*dest,src,strlen(src)+1);
	dest[strlen(src)] = '\0';
	return *dest;
}


int unlink_recursive(const char* name)
{
   struct stat st;
   DIR *dir;
   struct dirent *de;
   int fail = 0;

   /* is it a file or directory? */
   if (lstat(name, &st) < 0)
       return -1;

   /* a file, so unlink it */
   if (!S_ISDIR(st.st_mode))
       return unlink(name);

   /* a directory, so open handle */
   dir = opendir(name);
   if (dir == NULL)
       return -1;

   /* recurse over components */
   errno = 0;
   while ((de = readdir(dir)) != NULL) {
       char dn[PATH_MAX];
       if (!strcmp(de->d_name, "..") || !strcmp(de->d_name, "."))
           continue;
       sprintf(dn, "%s/%s", name, de->d_name);
       if (unlink_recursive(dn) < 0) {
           fail = 1;
           break;
       }
       errno = 0;
   }
   /* in case readdir or unlink_recursive failed */
   if (fail || errno < 0) {
       int save = errno;
       closedir(dir);
       errno = save;
       return -1;
   }

   /* close directory handle */
   if (closedir(dir) < 0)
       return -1;

   /* delete target directory */
   return rmdir(name);
}

void timer(struct timeval *t, timer_cb cb, void *param)
{
		timer_st *tm = (timer_st *)malloc(sizeof(timer_st));
		tm->t = t;
		tm->cb = cb;
		tm->param = param;
		pthread_t tid;
		if(pthread_create(&tid,NULL,timer_to_do,(void*)tm)<0){
				fprintf(stderr,"Timer create error!");
		}
}

/**
 * @brief timer_to_do 
 * 定时器到时后要执行的回调函数
 * @param param
 *
 * @return 
 */
void *timer_to_do(void *param)
{
		timer_st *tmp = (timer_st *)param;
		select(0,0,0,0,tmp->t);
		tmp->cb(tmp->param);
}

/*
 * 作用和ulimit一样
 * 在需要大量句柄时需要用到
 */
void setopenfiles(long num)
{
		//设置可用文件数
		struct rlimit rt;
		rt.rlim_max = rt.rlim_cur = num;
		if (setrlimit(RLIMIT_NOFILE, &rt) == -1) 
		{
				fprintf(stderr, "setrlimit error. - %m");
		}
}
