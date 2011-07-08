/*
 * =====================================================================================
 *
 *       Filename:  utils.c
 *
 *    Description: 本文件实现了http插件所以来的各种请求以及工具方法，目前这些http协议依赖于curl库来实现。
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

#include "http.h"

/**
 * @brief http_writefunction 
 * for curl
 *
 * @param ptr
 * @param size
 * @param nmemb
 * @param userdata
 *
 * @return 
 */
size_t http_writefunction(void *ptr, size_t size, size_t nmemb, void *userdata)
{
		char **content = (char **)userdata;
		size_t c_size = size*nmemb;

		*content = (char *)malloc(c_size);
		memset(*content, 0, c_size);
		memcpy(*content, ptr, c_size);
}

char* http_get_url(uri_st *uri, int fd, int boool)
{
		char *host = uri->host,*path = uri->path,*port = uri->port,*method = "GET";
		char req[4096];

		sprintf(req, "%s %s HTTP/1.1\r\n"
						"Accept:*/* \r\n"
						"Accept-Language:zh-zn\r\n"
						"User-Agent:Mozilla/4.0\r\n"
						"Host:%s\r\n"
						"Connection: keep-alive\r\n\r\n",
						method, path, host);

		/*
		 * 发送请求后并不读取内容
		 * 而是继续发送
		 * fd没有关闭
		 * 这使得压力变得非常大
		 * 但如果测试场景要求对返回值进行业务级别的操作
		 * 就需要用户再实现读取返回值等函数。
		 */
		http_send(fd, req, strlen(req));
		return http_read(fd,boool);
}

int http_conn(uri_st *uri)
{
		int sockfd;
		int res;
		struct sockaddr_in dst;
		struct hostent hinfo, *ht;
		char *host = uri->host, buf[1024];
		int port = atoi(uri->port), ret;

		//ht = gethostbyname_r(host);
		if(gethostbyname_r(host,&hinfo,buf,sizeof(buf),&ht,&ret)){
				fprintf(stderr,"ERROR:gethostbyname(%s) ret:%d,phost:%d\n - %m",host,ret,(int)ht);
				return -1;
		}else if(ht == NULL){
				fprintf(stderr,"ERROR:gethostbyname(%s) ret:%d,phost:%d\n - %m",host,ret,(int)ht);
				return -1;
		};
		if(ht == NULL){
				fprintf(stderr, "gethostbyname error - %m");
				return -1;
		}

		sockfd = socket(AF_INET, SOCK_STREAM, 0);
		if(sockfd < 0)
		{
				fprintf(stderr, "socket error! - %m\n");
				return -1;
		}

		bzero(&dst, sizeof(dst));
		dst.sin_family = AF_INET;
		dst.sin_port = htons(port);
		//dst.sin_addr.s_addr = inet_addr(host);
		bcopy(ht->h_addr, (struct sockaddr *)&dst.sin_addr, ht->h_length);

		res = connect(sockfd, (struct sockaddr *)&dst, sizeof(dst));
		if(res < 0)
		{
				fprintf(stderr, "connect error! - %m\n");
				return NULL;
		}
		return sockfd;
}

int http_send(int sockfd, char *buf, int nbytes)
{
		int send_nbytes = 0;
		int res;
		while(send_nbytes < nbytes)
		{
				res = write(sockfd, buf + send_nbytes, nbytes - send_nbytes);
				if(res == -1)
				{
						fprintf(stderr, "send error! - %m\n");
						return send_nbytes;
				}
				send_nbytes += res;
		}
		return send_nbytes;
}

char * http_read(int fd, int boool)
{
		char *rsp,buf[102400];
		int read_nbytes = 0, res = 0, read_max = 1024;
		struct list_head rsp_head;

		if(boool){
				INIT_LIST_HEAD(&rsp_head);
		}

		while((res = read(fd,buf,read_max)) == read_max){
				read_nbytes += res;
				if(boool){
						rsp_list_node_st *rsp_node = (rsp_list_node_st *)malloc(sizeof(rsp_list_node_st));
						rsp_node->size = res;
						rsp_node->buf = (char *)malloc(sizeof(char)*res);
						memcpy(rsp_node->buf,buf,res);
						list_add_tail(&rsp_node->list,&rsp_head);
				}
		}
		read_nbytes += res;
		if(boool){
				rsp_list_node_st *rsp_node = (rsp_list_node_st *)malloc(sizeof(rsp_list_node_st));
				rsp_node->size = res;
				rsp_node->buf = (char *)malloc(sizeof(char)*res);
				memcpy(rsp_node->buf,buf,res);
				list_add_tail(&rsp_node->list,&rsp_head);
		}

		if(boool){
				rsp = (char *)malloc(read_nbytes);
				memset(rsp,0,read_nbytes);
				long rsp_length = 0;
				rsp_list_node_st *rsp_node;
				list_for_each_entry(rsp_node,&rsp_head,list){
						memcpy(rsp+rsp_length,rsp_node->buf,rsp_node->size);
						free(rsp_node->buf);
						rsp_length += rsp_node->size;
				}
				return rsp;
		}
}

void http_get_free(int fd)
{
		close(fd);
}

uri_st* http_parse_url(char *url)
{
		uri_st *uri = (uri_st *)malloc(sizeof(uri_st));

		/*
		 * 解析url
		 * 得到host,path(带有query)和port
		 */
		if(strncasecmp(url,"http://",7) == 0){
				char *idx;
				if((idx = strchr(&url[7],':')) != NULL){
						uri->host = strndup(&url[7],idx-&url[7]);
						char *pidx;
						if((pidx = strchr(idx,'/')) == NULL){
								uri->port = strdup(idx+1);
								uri->path = strdup("/");
						}else{
								uri->port = strndup(idx+1,pidx-idx-1);
								uri->path = strdup(pidx);
						}
				}else{
						char *pidx;
						if((pidx = strchr(&url[7],'/')) == NULL){
								uri->host = strdup(&url[7]);
								uri->port = strdup("80");
								uri->path = strdup("/");
						}else{
								uri->host = strndup(&url[7],pidx-&url[7]);
								uri->port = strdup("80");
								uri->path = strdup(pidx);
						}
				}
		}

		return uri;
}
