/*
 * =====================================================================================
 *
 *       Filename:  bind_unbind.cpp
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
#include "bind_unbind.h"
#include "cbenchmark.h"
#include "paramutil.h"
#include "script_consts.h"
#include "CWWSimulator.h"
#include <iostream>
using namespace std;



void *bind_unbind_init(void* p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	
//	create_transaction(pVuser,"Setbinding");
//	create_transaction(pVuser,"Unbind");

	CWWSimulator *pWW = new (CWWSimulator);
	pVuser->verb = pWW;
	
	string imServerIP;
	uint16_t port;
	

	pWW->SetServerIP(imServerIP = "10.250.3.136", port = 16000);

	pWW->SetStatus(TOKEN_FLAG, DEFAULT_LOGINSTAT);
	pWW->SetClient(DEFAULT_CLIENTVERSION, DEFAULT_CLIENTLANGUAGE);

	

}

void *bind_unbind_act(void* p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	CWWSimulator *pWW = (CWWSimulator*)(pVuser->verb);
	
	string recvPack;
	void** ppPack;
	int retcode;

	
	//initilize username and password

	string params,username, password, bindUserID, bindUserPwd;
	char * temp = select_param_ex(pVuser);
	//printf("params selected:%s\n", temp);//调试的时候可以打印出来，看看是否是数据问题。
	params.assign(temp,strlen(temp)-1);
	int pos = params.find(',');
	username = params.substr(0, pos);
	bindUserID = params.substr(pos+1, params.length()-pos-2);
	password = "aliyun";
	bindUserPwd = "system";
	pWW->SetUser(username, password);
	pWW->SetBindUser(bindUserID, bindUserPwd); 

	pWW->BindUnbind();
	pWW->Detach();


}


























