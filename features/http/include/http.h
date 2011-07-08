/*
 * =====================================================================================
 *
 *       Filename:  http.h
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

#ifndef HTTP_H
#define HTTP_H

#include "paramutil.h"
#include "cbenchmark.h"
#include "curl/curl.h"
#include "JSON_parser.h"
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>

typedef struct http_conf{
		char *url;
		char *method;
		char *cookie_clean;
}http_conf_st;

typedef struct uri_t{
		char *host;
		char *path;
		char *port;
}uri_st;

typedef struct http_verb{
		int fd;
		uri_st *uri;
		/*
		 * 业务参数
		 */
		void* p;
}http_verb_st;

typedef struct rsp_list_node{
		char *buf;
		long size;
		struct list_head list;
}rsp_list_node_st;

/*
 * get.c
 */
void* http_get_init(void *p);
void* http_get_act(void *p);
/*
 * post.c
 */
void* http_post_init(void *p);
void* http_post_act(void *p);
/*
 * utils.c
 */
size_t http_writefunction(void *ptr, size_t size, size_t nmemb, void *userdata);
char* http_get_url(uri_st *uri, int fd, int boool);
int http_send(int sockfd, char *buf, int nbytes);
int http_conn(uri_st *uri);
void http_get_free(int fd);
uri_st* http_parse_url(char *url);
char* http_read(int fd, int boool);
#endif
