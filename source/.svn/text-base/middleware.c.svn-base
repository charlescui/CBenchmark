/* Copyright(C)
 * For free
 * All right reserved
 * 
 */
/**
 * @file middleware.c
 * @brief 实现CBenchmark的插件机制
 * @author zheng.cuizh@gmail.com
 * @version 0.1.0
 * @date 2011-01-18
 */

#include "cbenchmark.h"

#define MW_SCRIPTS(OP) \
void* mw_script_##OP (void *v) \
{\
	vuser_node_st_t *vuser = (vuser_node_st_t *)v;\
	bench_t *bp = vuser->b->b;\
	middleware_t *pos; \
	list_for_each_entry(pos,&bp->mws,list){ \
		if(pos->script.OP != NULL) \
			pos->script.OP (v); \
	}\
}

MW_SCRIPTS(init)
MW_SCRIPTS(act)
MW_SCRIPTS(end)

/**
 * @brief init_mw 
 * 通过该函数可以打开指定的动态库
 *
 * cbenchmark的插件机制就是通过这个函数实现的
 * 在入口时指定所需加载的动态库绝对路径
 * (这个动态库可以是由用户自行实现
 * 也可以是使用cbenchmark自带的测试插件)
 * 这些动态库都必须实现以下方法
 * Cbenchmark需要动态库实现的函数如下：
 * void* (*init)(void*)
 * void* (*act)(void*)
 * void* (*end)(void*)
 * void* (*initialize)(void*)
 * cbenchmark调用initialize()函数作该动态库初始化的同时
 * 会将benc_t *bp指针传递给该函数
 * 该函数得到这个cbenchmark全局环境结构体后
 * 可以对起提供的属性进行访问
 * 从而实现了人机交互的会话从cbenchmark级
 * 转变到插件级
 * 因此这些插件可以得到使用者传递的信息
 * 而不是cbenchmark传递给这些插件的信息
 * 这样就使得cbenchmark和插件在业务层是不存在耦合的
 * 
 * @param bp
 * cbenchmark全局信息
 *
 * @return 
 * 无返回内容
 */
void* init_mw(void *b)
{
	bench_t *bp = (bench_t *)b;
	char *lib,*libs;
	libs = strdup(bp->libs);
	
	INIT_LIST_HEAD(&bp->mws);
	while((lib = strsep(&libs,",")) != NULL)
	{
		char *error;
//		void *handle = dlopen (lib, RTLD_LAZY | RTLD_GLOBAL);
		void *handle = dlopen (lib, RTLD_NOW);
		if (!handle) {
			fprintf (stderr, "%s\n", dlerror());
			continue;
		}

		middleware_t *mw;
		pmalloc(sizeof(middleware_t),(void**)&mw);
		strpcpy(&mw->path,lib);
		strpcpy(&mw->name,basename(lib));
		mw->handle = handle;
		mw->bp = bp;

		list_add_tail(&mw->list,&bp->mws);

		dlerror();    /*  Clear any existing error */
		/* 
		 *	CBenchmark需要动态库实现的函数如下：
		 *	void* (*init)(void*)
		 *	void* (*act)(void*)
		 *	void* (*end)(void*)
		 *	void* (*initialize)(void*)
		 *	如果init,act和end已经定义
		 *	可以不用再定义initialize
		 *	如果上面三个函数没有定义
		 *	那么可以在initialize中定义
		 *	如果这四个函数都没有定义
		 *	那么该中间件则不被使用
		 * */
		mw->script.init = (cb_script_ft)dlsym(handle, "init");
		mw->script.act = (cb_script_ft)dlsym(handle, "act");
		mw->script.end = (cb_script_ft)dlsym(handle, "end");
		mw->script.initialize = (cb_script_ft)dlsym(mw->handle, "initialize");
		if(mw->script.initialize)
				mw->script.initialize((void*)mw);

		if ((error = dlerror()) != NULL)  {
				fprintf (stderr, "%s\n", error);
				exit(1);
		}

	}

	bp->script.init = mw_script_init;
	bp->script.act = mw_script_act;
	bp->script.end = mw_script_end;

	return (void*)bp;
}

void* destroy_mw(void *b)
{
	bench_t *bp = (bench_t*)b;
	middleware_t *pos;
	return b;
	list_for_each_entry(pos,&bp->mws,list){
		//if(pos->list != bp->mws){
			char *error;
			dlerror();    /*  Clear any existing error */

			dlclose(pos->handle);
			printf("funck mw!");

			if((error = dlerror()) != NULL){
				fprintf (stderr, "%s\n", error);
			}
		//}
	}
	return b;
}

