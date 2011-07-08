/*
 * =====================================================================================
 *
 *       Filename:  smtp.c
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

#include "smtp.h"

void cfg_set(smtp_conf_st *conf, char *key, char *value);
int cfg_cb(void* ctx, int type, const JSON_value* value);

smtp_conf_st *conf_st;
middleware_t *pmw;

void* initialize(void *p)
{
	int scenarioId = 0;
    pmw = (middleware_t*)p;
    bench_t *pb = pmw->bp;
	char conf[1024] = {0};
	char conf_content[10240] = {0};
	FILE *conf_file;

	/*
	 *	pb指向的bench_t结构体是处于mmap空间的
	 *	所以需要通过cbutil中的strpcpy方法来复制字符串
	 *	而不能使用strcpy等方法
	 * */
	pmalloc(sizeof(smtp_conf_st), &conf_st);
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

	printf("Config file[default \"../../conf/smtp.conf\"]:\n");
	conf[0] = (char)fgetc(stdin);
	/* 
	 * 	如够只输入回车
	 *	则读取默认conf文件位置
	 * */
	if(conf[0] == '\n' )
		strcpy(conf, "../../conf/smtp.conf");
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

	pmw->script.init = smtp_login;
	pmw->script.act = smtp_send;
	pmw->script.end = smtp_logoff;

	//pmw->script.act = smtp_test;
}

char json_key[256];
char json_value[25600];
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

void cfg_set(smtp_conf_st *conf, char *key, char *value)
{
		if(strcmp(key,"URL") == 0){
				strpcpy(&conf->url, value);
		}else if(strcmp(key,"PORT") == 0){
				strpcpy(&conf->port, value);
		}else if(strcmp(key,"USER") == 0){
				strpcpy(&conf->user, value);
		}else if(strcmp(key,"PASSWORD") == 0){
				strpcpy(&conf->password, value);
		}else if(strcmp(key,"TO") == 0){
				strpcpy(&conf->to, value);
		}else if(strcmp(key,"CC") == 0){
				strpcpy(&conf->cc, value);
		}else if(strcmp(key,"BCC") == 0){
				strpcpy(&conf->bcc, value);
		}else if(strcmp(key,"FROM") == 0){
				strpcpy(&conf->from, value);
		}else if(strcmp(key,"SUBJECT") == 0){
				strpcpy(&conf->subject, value);
		}else if(strcmp(key,"CONTENT") == 0){
				strpcpy(&conf->content, value);
		}
}

