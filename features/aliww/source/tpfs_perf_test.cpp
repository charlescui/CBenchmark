/*
 * =====================================================================================
 *
 *       Filename:  get_bind_list.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2011年01月07日 15时53分02秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Davi.Q (), 
 *        Company:  Aliyun
 *
 * =====================================================================================
 */
#include "cbenchmark.h"
#include "paramutil.h"
#include "CWWSimulator.h"
#include "script_consts.h"
#include "tpfs_perf_test.h"
#include <iostream>
using namespace std;

/*
	TPFS性能测试的时候由于数据不充足的缘故，
	需要绕过IMS登录环节
	所以需要使用字符串"AAATESTSESSIONKEY"作为sessionno
	辛树mock
*/

void *tpfs_init(void* p)
{
	srand(time(0));

	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	create_transaction(pVuser,"TPFS");

	CWWSimulator *pWW = new (CWWSimulator);
	pVuser->verb = pWW;
	
	string imServerIP = "10.249.199.124";
	uint16_t port = 16000;
	string tpfsIP = "10.249.197.17";
	//string tpfsIP = "10.220.2.17";
	uint16_t tpfs_port = 16000;
	char fromid[64];
	snprintf(fromid,64,"cnalichnabc%dx%dx%d",get_vuser_group(pVuser),get_vuser_id(pVuser),get_vuser_ite(pVuser));
	string password = "system";
	string username(fromid);
/*
	char *tmp = select_param_ex(pVuser);
	int comaidx = index(tmp,',');
	char *uname = strndup(tmp,comaidx);
	char *pword = strndup(tmp+comaidx,strlen(tmp)-i);
	string username(uname);
	string password(pword);
*/	
	pWW->SetServerIP(imServerIP, port);
	pWW->SetTpfsIP(tpfsIP, tpfs_port);
	pWW->SetStatus(TOKEN_FLAG, DEFAULT_LOGINSTAT);
	pWW->SetClient(DEFAULT_CLIENTVERSION, DEFAULT_CLIENTLANGUAGE);
	pWW->SetUser(username,password);


	string session= "AAATESTSESSIONKEY";

	int con_count = 0;
	while(!pWW->m_bIsConnected)
	{
		pWW->SetSessionNo(session);
		pWW->ConnectTpfs();
		sleep(2);
		if(con_count++ > 5){
			printf("Dangerous!!! Already connect %d times.\n",con_count);
		}
	}

	string msg;
	if(pWW->chatPidfy(msg) != 0)
		fail_transactionEx(pVuser,"TPFS",(char*)msg.c_str());
}

void *tpfs_act(void* p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	CWWSimulator *pWW = (CWWSimulator*)(pVuser->verb);
}
#define CHECK_CONN(__conected,__pVuser,__fun) \
	if(!__conected) \
	{ \
		printf("act but not connected.\n"); \
		fail_transactionEx(__pVuser,(char *)__fun,"connect failed"); \
		return NULL; \
	} 

void *tpfs_getcal(void* p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	CWWSimulator *pWW = (CWWSimulator*)(pVuser->verb);

	CHECK_CONN(pWW->m_bIsConnected,pVuser,__FUNCTION__);

	const char* fromid = pWW->m_username.c_str();
	char toid[64];
	snprintf(toid,64,"cnalichnabc%dx%dx%d",get_vuser_group(pVuser),get_vuser_id(pVuser),1);
	char* startDate = "20100201";
	char* endDate = "20110330";
	string msg;
	if(pWW->chatGetcal(fromid,toid,startDate,endDate,msg) != 0)
		fail_transactionEx(pVuser,"TPFS",(char *)msg.c_str());
	else
		success_transaction(pVuser,"TPFS");
}

void *tpfs_gettext(void* p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	CWWSimulator *pWW = (CWWSimulator*)(pVuser->verb);

	CHECK_CONN(pWW->m_bIsConnected,pVuser,__FUNCTION__);

	char toid[256];
	string msg;
	sprintf(toid, "cnalichnabc%dx%dx%d",get_vuser_group(pVuser),get_vuser_id(pVuser),1);
	if(pWW->chatGettxt(pWW->m_username.c_str(),toid,time(0) - 100000,time(0),msg) != 0)
		fail_transactionEx(pVuser,"TPFS",(char *)msg.c_str());
	else
		success_transaction(pVuser,"TPFS");
}

void *tpfs_getpic(void* p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	CWWSimulator *pWW = (CWWSimulator*)(pVuser->verb);

	CHECK_CONN(pWW->m_bIsConnected,pVuser,__FUNCTION__);

	char picName[256] = {0};
	sprintf(picName, "ddc2ebff36f65292ce646a5831823e9d_1%d%d%d",get_vuser_group(pVuser),get_vuser_id(pVuser),get_vuser_ite(pVuser));

	string msg;
	int ret = pWW->chatGetpic(picName,msg);
	if(ret != 0 && ret != 8091)
		fail_transaction(pVuser,"TPFS");
	else
		success_transaction(pVuser,"TPFS");
}

void *tpfs_putpic(void* p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	CWWSimulator *pWW = (CWWSimulator*)(pVuser->verb);

	CHECK_CONN(pWW->m_bIsConnected,pVuser,__FUNCTION__);

        long picSize = 40*1024 + rand()%10000;
        char *content = (char *)malloc(picSize*sizeof(char) + 1);
        char e = (char)rand()%254+1;

        memset(content,e,picSize);
        content[picSize] = '\0';

	string msg="";
	int ret=pWW->chatPutpic(content, msg);
	free(content);

	if(ret != 0)
		fail_transactionEx(pVuser,"TPFS",(char *)msg.c_str());
	else
		success_transaction(pVuser,"TPFS");

	return NULL;
}

void *tpfs_putgetpic(void* p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	CWWSimulator *pWW = (CWWSimulator*)(pVuser->verb);

	CHECK_CONN(pWW->m_bIsConnected,pVuser,__FUNCTION__);

        long picSize = 40*1024 + rand()%10000;
        char *content = (char *)malloc(picSize*sizeof(char) + 1);
        char e = (char)rand()%254+1;
        memset(content,e,picSize);
        content[picSize] = '\0';
	string spicData(content);
	char cpicName[256] = {0};
	sprintf(cpicName,"%s_%d",Md5Hash::GetMD5(spicData).c_str(),picSize);

	string msg;
	//int ret = pWW->chatPutpic(spicData, msg);
	int ret = pWW->chatPutpic(content, msg);
	free(content);

	if(ret != 0)
	{
		fail_transactionEx(pVuser,"TPFS",(char *)msg.c_str());
		return NULL;
	}
	ret = pWW->chatGetpic(cpicName, msg);
	if(ret != 0 && ret != 8091)
	{
		fail_transactionEx(pVuser,"TPFS",(char *)msg.c_str());
	}
	else
		success_transactionEx(pVuser,"TPFS","chatPutGetpic succ.");
	return NULL;
}

void *tpfs_end(void* p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	CWWSimulator *pWW = (CWWSimulator*)(pVuser->verb);

	//pWW->Detach();
}





















