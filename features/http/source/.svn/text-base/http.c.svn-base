/*
 * =====================================================================================
 *
 *       Filename:  http.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2011年01月14日 16时30分59秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zheng.cuizh@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#include "http.h"

void cfg_set(http_conf_st *conf, char *key, char *value);
int cfg_cb(void* ctx, int type, const JSON_value* value);

http_conf_st *conf_st;
middleware_t *pmw;

/**
 * @brief initialize 
 * 初始化libhttp.so插件
 * 在该函数内执行初始化插件级别参数结构体
 * 比如：
 * 读取用户指定的配置文件
 * 分析该配置文件(可以用json格式)
 * 生成http_conft_st结构体
 * 并将该结构体指针赋值给bench_t的param元素
 * 以后init(),act(),end()都可以通过指针得到该元素
 * 从而完成了插件级别业务参数的传递
 *
 * @param p
 *
 * @return 
 */
void* initialize(void *p)
{
	int scenarioId = 0;
    pmw = (middleware_t*)p;
    bench_t *pb = pmw->bp;
	char conf[1024] = {0};
	char conf_content[10240] = {0};
	FILE *conf_file;

	/*
	 * 性能测试的时候
	 * 类似http这种协议
	 * 会建立非常多的句柄fd
	 * 因此需要设置ulimit
	 *
	 * 每个用户都有最大的ulimit open files限制
	 * 必须使用root帐户更改最大数量
	 * 命令如下：
	 * [root:] ulimit -n 1000000
	 */

	/*
	 *	pb指向的bench_t结构体是处于mmap空间的
	 *	所以需要通过cbutil中的strpcpy方法来复制字符串
	 *	而不能使用strcpy等方法
	 * */
	pmalloc(sizeof(http_conf_st), &conf_st);
	pb->param = conf_st;

	/*
	 * 初始化json-parser
	 */
	JSON_config config;

    struct JSON_parser_struct* jc = NULL;
    
    init_JSON_config(&config);
    
    config.depth                  = 19;
    config.callback               = &cfg_cb;
    config.allow_comments         = 1;
    config.handle_floats_manually = 0;

	jc = new_JSON_parser(&config);

	/* 
	 *	初始化curl
	 *	该函数可能线程不安全
	 *	在curl官网有描述
	 *	但在官网的这个例子里面可以在下面这个多线程代码中使用：
	 *	http://curl.haxx.se/libcurl/c/multithread.html
	 * */
	/*
	 * curl太慢，不如自己实现get和post
	 */
	//curl_global_init(CURL_GLOBAL_ALL);

	printf("Config file[default \"../../conf/http.conf\"]:\n");
	conf[0] = (char)fgetc(stdin);
	/* 
	 * 	如够只输入回车
	 *	则读取默认conf文件位置
	 * */
	if(conf[0] == '\n' )
		strcpy(conf, "../../conf/http.conf");
	else{
		scanf("%s",conf+1);
		printf("\n");
	}

	/* 
	 *	读入配置文件内容
	 *	解析配置
	 * */
	if((conf_file = fopen(conf,"r")) == 0)
		fprintf(stderr,"Can't read %s",conf);
	else{
		int char_buf;
		while((char_buf = fgetc(conf_file)) > 0){
				if (!JSON_parser_char(jc, char_buf)) {
						fprintf(stderr, "JSON_parser_char: syntax error\n");
						exit(-1);
				}
		}
		if (!JSON_parser_done(jc)) {
				fprintf(stderr, "JSON_parser_end: syntax error\n");
				exit(-1);
		}
		fclose(conf_file);
	}
	delete_JSON_parser(jc);
}

char json_key[256];
char json_value[256];
int s_IsKey;

int cfg_cb(void* ctx, int type, const JSON_value* value)
{
		switch(type){
				case JSON_T_KEY:
						s_IsKey = 1;
						strcpy(json_key, value->vu.str.value);
						break;   
				case JSON_T_STRING:
						s_IsKey = 0;
						strcpy(json_value, value->vu.str.value);

						cfg_set(conf_st, json_key, json_value);
						break;
				default:
						break;
		}
}

void cfg_set(http_conf_st *conf, char *key, char *value)
{
		if(strcmp(key,"url") == 0){
				strpcpy(&conf->url, value);
		}else if(strcmp(key,"method") == 0){
				strpcpy(&conf->method, value);
				if(strcmp(conf_st->method,"GET") == 0){
						pmw->script.init = http_get_init;
						pmw->script.act = http_get_act;
				}else if(strcmp(conf_st->method,"POST") == 0){
						pmw->script.init = http_post_init;
						pmw->script.act = http_post_act;
				}
		}else if(strcmp(key,"cookie-clean") == 0){
				strpcpy(&conf->cookie_clean, value);
		}
}
