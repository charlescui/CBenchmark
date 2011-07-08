/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2011年02月21日 17时50分37秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */

#include <dlfcn.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, const char *argv[])
{
	void* hd = dlopen("./libexample_2.so",RTLD_NOW);
	void (*example)(void);

	example = dlsym(hd,"example");
	if(fork() == 0){
			printf("This is process[%d]\n",getpid());
//			void* hd = dlopen("./libexample_2.so",RTLD_NOW);
//			example = dlsym(hd,"example");
			example();
	}else{
			printf("This is process[%d]\n",getpid());
	}
	dlclose(hd);

	return 0;
}
