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
#include "ims_perf_test.h"
#include <iostream>
using namespace std;

/*
	TPFS性能测试的时候由于数据不充足的缘故，
	需要绕过IMS登录环节
	所以需要使用字符串"AAATESTSESSIONKEY"作为sessionno
	辛树mock
*/

void *ims_init(void* p)
{
	srand(time(0));

	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	create_transaction(pVuser,"IMS");

	CWWSimulator *pWW = new (CWWSimulator);
	pVuser->verb = pWW;
	
	string imServerIP = "10.249.65.31";
	uint16_t port = 80;
	//string imServerIP = "10.250.3.88";
	//uint16_t port = 16000;
	//string tpfsIP = "10.249.197.17";
	//uint16_t tpfs_port = 16000;
	char *tmp = select_param_ex(pVuser);
	char *comaidx = index(tmp,',');
	char *uname = strndup(tmp,comaidx-tmp-1);
	char *pword = strdup(comaidx+1);
	free(tmp);
	
	string username(uname);
	string password(pword);
	//string username("cntaobaoabcctv");
	//string password("system");
	pWW->SetServerIP(imServerIP, port);
	//pWW->SetTpfsIP(tpfsIP, tpfs_port);
	pWW->SetStatus(TOKEN_FLAG, DEFAULT_LOGINSTAT);
	pWW->SetClient(DEFAULT_CLIENTVERSION, DEFAULT_CLIENTLANGUAGE);
	pWW->SetUser(username,password);

	string msg;
	int count = 5;
	while(pWW->login(msg) != 0){
		count--;
		if(count == 0){
			fail_transactionEx(pVuser,"IMS",(char*)msg.c_str());
			printf("Can't login.\n");
			cb_exit(p);
		}
	}
	success_transactionEx(pVuser,"IMS",(char*)msg.c_str());
	//string session= "AAATESTSESSIONKEY";
	/*
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
	   fail_transactionEx(pVuser,"IMS",(char*)msg.c_str());
	 */
}


void *ims_login(void* p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	CWWSimulator *pWW = (CWWSimulator*)(pVuser->verb);

	pWW->SetStatus(0, DEFAULT_LOGINSTAT);
	pWW->SetUser(pWW->m_username, pWW->m_password);

	string msg;
	if(pWW->login(msg) == 0)
		success_transactionEx(pVuser,"IMS",(char*)msg.c_str());
	else
		fail_transactionEx(pVuser,"IMS",(char*)msg.c_str());
}

void *ims_storm_login(void* p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;

	int i;
	string imServerIP = "10.249.65.31";
	long t = time(0);
	uint16_t port = 80;
	for (i = 0; i < 100; i++) {
		char uname[128];
		sprintf(uname,"cntaobaoperftestx%dx%dx%dx%ldx%d",i,get_vuser_id(p),get_vuser_group(p),t,rand()*1000);

		string username(uname);
		string password("system");
		CWWSimulator *pWW = new (CWWSimulator);
		pWW->SetServerIP(imServerIP, port);
		pWW->SetStatus(TOKEN_FLAG, DEFAULT_LOGINSTAT);
		pWW->SetClient(DEFAULT_CLIENTVERSION, DEFAULT_CLIENTLANGUAGE);
		pWW->SetUser(username,password);

		string msg;
		if(pWW->login(msg) == 0)
			success_transactionEx(pVuser,"IMS",(char*)msg.c_str());
		else
			fail_transactionEx(pVuser,"IMS",(char*)msg.c_str());
		delete(pWW);
	}
}

void *ims_login_with_token(void* p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	CWWSimulator *pWW = (CWWSimulator*)(pVuser->verb);

	pWW->SetStatus(1, DEFAULT_LOGINSTAT);
	pWW->SetUser(pWW->m_username, pWW->m_pwtoken);

	string msg;
	if(pWW->login(msg) == 0)
		success_transactionEx(pVuser,"IMS",(char*)msg.c_str());
	else
		fail_transactionEx(pVuser,"IMS",(char*)msg.c_str());
}

void *ims_updateUserProfile(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	CWWSimulator *pWW = (CWWSimulator*)(pVuser->verb);

	char *bloodtype[4] = {"A","B","AB","O"};
	int i = rand()%4;
	string msg;
	if(pWW->updateUserprofile(bloodtype[i],"13012345678",msg) == 0)
		success_transactionEx(pVuser,"IMS",(char*)msg.c_str());
	else
		fail_transactionEx(pVuser,"IMS",(char*)msg.c_str());
	//sleep(1);
}

void *ims_chgStatus(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	CWWSimulator *pWW = (CWWSimulator*)(pVuser->verb);

	//uint16_t CWWSimulator::chgStatus(int basicstatus,int predefstatus,string& msg)
	int predefstatus = rand()%6+1;
	string msg;
	if(pWW->chgStatus(1,predefstatus,msg) == 0)
		success_transactionEx(pVuser,"IMS",(char*)msg.c_str());
	else
		fail_transactionEx(pVuser,"IMS",(char*)msg.c_str());
}

void *ims_search_contact(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	CWWSimulator *pWW = (CWWSimulator*)(pVuser->verb);

	//uint16_t CWWSimulator::chgStatus(int basicstatus,int predefstatus,string& msg)
	vector<struct SContactInfo>::iterator i;
	//for(i = pWW->m_contactList.begin(); i < pWW->m_contactList.end(); i++)
	//cout << (*i) << endl;;

	int predefstatus = rand()%6+1;
	string msg;
	if(pWW->chgStatus(1,predefstatus,msg) == 0)
		success_transactionEx(pVuser,"IMS",(char*)msg.c_str());
	else
		fail_transactionEx(pVuser,"IMS",(char*)msg.c_str());
}

void *ims_end(void* p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	CWWSimulator *pWW = (CWWSimulator*)(pVuser->verb);

	//pWW->Detach();
}





















