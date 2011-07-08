/*
 * =====================================================================================
 *
 *       Filename:  utils.c
 *
 *    Description: 本文件实现了smtp插件所以来的各种请求以及工具方法，目前这些http协议依赖于curl库来实现。
 *
 *        Version:  1.0
 *        Created:  2011年02月14日 15时18分24秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zheng.cuizh@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#include "smtp.h"

typedef struct libsmtp_t{
		smtp_srv_t *srv;
		char *rcpts[10];
}libsmtp_st;

void* smtp_login(void *p)
{
		//_cb_init();
    	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
		bench_t *bp = (bench_t *)pVuser->b->b;

		create_transaction(pVuser, "SMTP");

		smtp_conf_st *conf_st = (smtp_conf_st *)bp->param;
		smtp_srv_t *srv = (smtp_srv_t *)malloc(sizeof(smtp_srv_t));

		libsmtp_st *ls = (libsmtp_st *)malloc(sizeof(libsmtp_st));
		ls->srv = srv;
		memset(ls->rcpts,0,sizeof(char *)*10);

		char *strRecpts;
		int i;
		strRecpts = strdup(conf_st->to);
		for(i = 0; (ls->rcpts[i] = strsep(&strRecpts,",")) != NULL; i++);

		smtp_init (srv, conf_st->url, conf_st->from, conf_st->url, atoi(conf_st->port), 10);
		smtp_set_credentials (srv, "auto", conf_st->user, conf_st->password, "");

		if (smtp_connect (srv) == -1)
		{
				fail_transactionEx(pVuser,"SMTP","Smtp Connect Failed.");
				puts (err_str_error ());
				smtp_cleanup (srv);
				cb_exit((void *)pVuser);
		}else{
				pVuser->verb = (void *)ls;
		}
}

void* smtp_send(void *p)
{
		vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
		bench_t *bp = (bench_t *)pVuser->b->b;
		libsmtp_st *ls = (libsmtp_st *)pVuser->verb;
		smtp_conf_st *conf_st = (smtp_conf_st *)bp->param;

		if (smtp_send_msg (ls->srv, conf_st->content, ls->rcpts) == -1)
		{
				puts (err_str_error ());
				fail_transactionEx(pVuser,"SMTP","Smtp Send Msg Failed.");
		}else{
				success_transactionEx(pVuser,"SMTP","Smtp Send Msg Success.");
		}
		return NULL;
}

void* smtp_logoff(void *p)
{
		vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
		bench_t *bp = (bench_t *)pVuser->b->b;
		libsmtp_st *ls = (libsmtp_st *)pVuser->verb;

		if (smtp_close(ls->srv) == -1)
		{
				fail_transactionEx(pVuser,"SMTP","Smtp Logoff Failed.");
		}
		smtp_cleanup(ls->srv);	

		return NULL;
}
