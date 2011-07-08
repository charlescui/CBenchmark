/*
 * =====================================================================================
 *
 *       Filename:  get.c
 *
 *    Description:  本文件实现了简单的http协议的get操作，注意http连接的策略
 *
 *        Version:  1.0
 *        Created:  2011年01月14日 16时33分28秒
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
 * @brief http_get_init 
 * 初始化过程完成：解析uri，生成http连接fd(如果需要)，创建事件等操作
 *
 * http协议的压力测试往往需要客户端（压力生成端）可以生成大量的connection，
 * 如果是linux平台，这就需要客户端可用句柄数量充足，请用ulimit -a查看
 * 同时还需要优化linux的可用端口数范围
 * net.ipv4.ip_local_port_range = 1024     65000
 *
 * 由于http创建的连接fd可以复用，这就可以大大减少对系统fd及端口资源的消耗
 * 但如果被压的http服务器不支持keep-alive或者允许的keep-alive次数很少
 * 那测试人员在编码时期就要注意，当这个fd用到keep-alive指定次数后就该释放了
 * 然后重新connect再使用新的fd进行会话
 * 上面说的对我们的http协议测试很重要，如果不理解，大家会碰到系统提示的一些错误
 * 比如：远程主机关闭socket，或者本地资源不足无法分配句柄导致connect无法完成等
 *
 * 我们会使用两种策略进行http协议的测试：
 * 1.
 * connect->(send->read)*N->free
 * 本策略：N等于或者小于被压服务器的keep-alive允许次数
 * 2.
 * (connect->send->read->free)*N
 * 本策略：需要优化Xnix压力生成所在的主机的资源配置，使得cbenchmark有充足的端口和fd可用。
 *
 * @param p
 *
 * @return 
 */
void* http_get_init(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;

	http_conf_st *conf = (http_conf_st *)bp->param;
	char *url = conf->url;
	uri_st *uri = http_parse_url(url);

	create_transaction(pVuser, "HTTP_GET");

	http_verb_st *vbp = (http_verb_st *)malloc(sizeof(http_verb_st));
	vbp->fd = http_conn(uri);
	vbp->uri = uri;

	pVuser->verb = (void *)vbp;
}

/**
 * @brief http_get_act 
 * http插件的简单web压力测试实现
 *
 * 该函数简单的对单一的url进行压力测试
 * 通过cbenchmark调用http插件实现并发
 * 而在本文件内实现迭代的请求配置文件中的某一url
 * 本程序实现的是http协议的get方法
 * 其压力的实现依赖于curl库
 * 实现的功能相当于apache httpd自带的压力测试程序ab
 *
 * 实际项目中用户使用http插件的时候
 * 如果需要实现更复杂的测试场景
 * 比如：登录->保存cookie->请求其他操作url->退出
 * 则需要编写类似http_get_(init|act|end)的函数
 *
 * @param p
 *
 * @return 
 */
void* http_get_act(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	/*
	 * 由于在http.c中的initialize方法中
	 * conf结构体被保存在全局结构信息bp的param指针中
	 * 所以在本函数内可以通过bp->param得到该结构体指针
	 * 所有进程共用该结构题bp
	 * 之间的通讯可以通过该结构体的属性完成
	 * 留给用户传递业务参数的属性就是param
	 * 他是一个void*指针
	 */
	http_verb_st *vbp = (http_verb_st *)pVuser->verb;
	uri_st *uri = (uri_st *)vbp->uri;

	//int fd = http_conn(uri);
	char *content = http_get_url(uri,vbp->fd,1);
	//http_get_free(fd);
	/*
	 * 实际业务测试的时候会对返回值或者http status-code进行判断
	 * 从而决定是否设置一个成功或者失败的事件
	 */
	if(1 == 1)
			success_transactionEx(pVuser, "HTTP_GET", content);
}

void* http_get_end(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	http_verb_st *vbp = (http_verb_st *)pVuser->verb;

	http_get_free(vbp->fd);
}
