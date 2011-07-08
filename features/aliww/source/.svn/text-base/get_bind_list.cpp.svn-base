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
#include "get_bind_list.h"
#include "cbenchmark.h"
#include "paramutil.h"
#include "CWWSimulator.h"
#include "script_consts.h"
#include <iostream>
using namespace std;


void *get_bind_list_init(void* p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
//	create_transaction(pVuser,"GetWebBinding");

	CWWSimulator *pWW = new (CWWSimulator);
	pVuser->verb = pWW;
	
	string imServerIP;
	uint16_t port;
	

	pWW->SetServerIP(imServerIP = "10.250.3.136", port = 16000);
	pWW->SetStatus(TOKEN_FLAG, DEFAULT_LOGINSTAT);
	pWW->SetClient(DEFAULT_CLIENTVERSION, DEFAULT_CLIENTLANGUAGE);

}

void *get_bind_list_act(void* p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	CWWSimulator *pWW = (CWWSimulator*)(pVuser->verb);


	//initilize username and password
	string username, password;
	char *temp = select_param_ex(pVuser);	
	printf("param selected: %s\n",temp);
	string params;
	params.assign(temp,strlen(temp)-1);//temp is end with '\n'
	int pos = params.find(',');
	username = params.substr(0, pos);
	password = "aliyun";
	pWW->SetUser(username, password);

	string recvPack;
	void** ppPack;
	int retcode;
	pWW->GetWebBinding();
	
	pWW->Detach();
}


























