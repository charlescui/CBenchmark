/*
 * =====================================================================================
 *
 *       Filename:  smtp.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2011年02月11日 13时57分08秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef SMTP_H
#define SMTP_H

#include "paramutil.h"
#include "cbenchmark.h"
#include <libsmtp--/smtp.h>
#include <libsmtp--/error.h>
#include <libsmtp--/algorithm.h>
#include "JSON_parser.h"

typedef struct smtp_conf{
		char *url;
		char *port;
		char *user;
		char *password;
		char *to;
		char *cc;
		char *bcc;
		char *from;
		char *subject;
		char *content;
}smtp_conf_st;

/*
 * utils.c
 */
void* smtp_login(void *p);
void* smtp_send(void *p);
void* smtp_logoff(void *p);
/*
 * test.c
 */
void* smtp_test(void *p);
int main_t(int argc, const char *argv[]);
#endif
