/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2011年02月21日 15时11分56秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */

#include "smtp.h"

char *msg =
"To: zheng.cuizh@gmail.com\n"
"Subject: Test\n"
"\n"
"\n"
"Test From CBenchmark.\n";

char *rcpts[]={
		"zheng.cuizh@gmail.com",
		NULL
};

void* smtp_test(void *p)
{
		_cb_init();
		p = NULL;
		smtp_srv_t srv;
		if(p != NULL){
				vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
				bench_t *bp = (bench_t *)pVuser->b->b;
				smtp_conf_st *conf_st = (smtp_conf_st *)bp->param;

				smtp_init (&srv, conf_st->url, conf_st->user, conf_st->url, atoi(conf_st->port), 60);
				smtp_set_credentials (&srv, "auto", conf_st->user, conf_st->password, "");
		}else{
				smtp_init (&srv, "smtp.yeah.net", "cbtest@yeah.net", "smtp.yeah.net", 25, 60);
				smtp_set_credentials (&srv, "auto", "cbtest@yeah.net", "yijiushiwo", "");
		}

		if (smtp_connect (&srv) == -1)
		{
				puts (err_str_error ());
				smtp_cleanup (&srv);
				return NULL;
		}

		/* *
		 * Send the message.
		 */
		if (smtp_send_msg (&srv, msg, rcpts) == -1)
		{
				puts (err_str_error ());
				smtp_cleanup (&srv);
				return NULL;
		}

		/* *
		 * Close the connection to the SMTP server.
		 */
		if (smtp_close (&srv) == -1)
		{
				puts (err_str_error ());
		}

		/* *
		 * Free unneeded resources. 
		 */
		smtp_cleanup (&srv);

		puts ("The message was successfully sent.");
}

int main_t(int argc, const char *argv[])
{
		return smtp_test((void*)0);
}
