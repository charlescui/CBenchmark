#include "dbs_perf_test.h"

using namespace std;
using namespace Ice;
using namespace AliIMDBBase;

void* dbs_init(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	dbs_st *ap = (dbs_st *)malloc(sizeof(dbs_st));
	pVuser->verb = ap;
	srand(time(0));
	create_transaction(pVuser,"DBS");

	int status = 0;
	Ice::CommunicatorPtr ic;

	try{
		ic = Ice::initialize();

		Ice::ObjectPrx base = ic->stringToProxy("DBServerProxyId:default -h 10.250.3.34 -p 10001");
		IMDBProxyMgrPrx dbs = IMDBProxyMgrPrx::checkedCast(base);
		if(!dbs){
			throw "Invalid proxy";
		}
		ap->dbs = new IMDBProxyMgrPrx(dbs);
		ap->ic = new Ice::CommunicatorPtr(ic);
	}catch(const Ice::Exception& ex){
		cerr << ex << endl;
		status = 1;
	}catch(const char* msg){
		cerr << msg << endl;
		status = 1;
	}
}

//int CheckUserTokenExtra(string userId, string passwd,out string lid, out string retuidtokenpw,out string retmd5passwd ,out int activeStat, out int webdata);
void* dbs_CheckUserTokenExtra(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	dbs_st *ap = (dbs_st *)pVuser->verb;
	int status = 0;
	IMDBProxyMgrPrx dbs = *(ap->dbs);

        char *tmp = select_param_ex(pVuser);
        char *comaidx = index(tmp,',');
        char *uname = strndup(tmp,comaidx-tmp-1);
        char *pword = strdup(comaidx+1);
        free(tmp);
	string userId(uname);
	string passwd(pword);
	string lid;
	string retuidtokenpw;
	string retmd5passwd; 
	int activeStat; 
	int webdata;

	try{
		status = dbs->CheckUserTokenExtra( userId,  passwd, lid, retuidtokenpw, retmd5passwd , activeStat,  webdata);
		if(status == 0)
			success_transactionEx(pVuser,"DBS","CheckUserTokenExtra Sucess.");
		else{
			char str_tmp[320] = {0};
			sprintf(str_tmp,"CheckUserTokenExtra:Call ret status is %d",status);
			fail_transactionEx(pVuser,"DBS",str_tmp);
		}
		printf("userId : %s; status : %d\n",userId.c_str(),status);
	}catch(const Ice::Exception& ex){
		cerr << ex << endl;
		status = 1;
	}catch(const char* msg){
		cerr << msg << endl;
		status = 1;
	}
}

//int CheckWebWWPasswd(string userId, string passwd,out string lid, out string retuidtokenpw,out string retmd5passwd,out int activeStat);
void* dbs_CheckWebWWPasswd(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	dbs_st *ap = (dbs_st *)pVuser->verb;
	int status = 0;
	IMDBProxyMgrPrx dbs = *(ap->dbs);

        char *tmp = select_param_ex(pVuser);
        char *comaidx = index(tmp,',');
        char *uname = strndup(tmp,comaidx-tmp-1);
        char *pword = strdup(comaidx+1);
        free(tmp);
	string userId(uname);
	string passwd(pword);
	string lid;
	string retuidtokenpw;
	string retmd5passwd;
	int activeStat;

	try{
		status = dbs->CheckWebWWPasswd( userId,  passwd, lid,  retuidtokenpw, retmd5passwd,activeStat);
		if(status == 0)
			success_transactionEx(pVuser,"DBS","CheckWebWWPasswd Sucess.");
		else{
			char str_tmp[320] = {0};
			sprintf(str_tmp,"CheckWebWWPasswd:Call ret status is %d",status);
			fail_transactionEx(pVuser,"DBS",str_tmp);
		}
		printf("userId : %s; status : %d\n",userId.c_str(),status);
	}catch(const Ice::Exception& ex){
		cerr << ex << endl;
		status = 1;
	}catch(const char* msg){
		cerr << msg << endl;
		status = 1;
	}
}

//int CheckUserWebPasswdExtra(string userId, string passwd,out string lid, out string retuidtokenpw,out string retmd5passwd,out int activeStat, out int webdata);
void* dbs_CheckUserWebPasswdExtra(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	dbs_st *ap = (dbs_st *)pVuser->verb;
	int status = 0;
	IMDBProxyMgrPrx dbs = *(ap->dbs);

        char *tmp = select_param_ex(pVuser);
        char *comaidx = index(tmp,',');
        char *uname = strndup(tmp,comaidx-tmp-1);
        char *pword = strdup(comaidx+1);
        free(tmp);
	string userId(uname);
	string passwd(pword);
	string lid;
	string retuidtokenpw;
	string retmd5passwd;
	int activeStat;
	int webdata;

	try{
		status = dbs->CheckUserWebPasswdExtra(userId, passwd, lid,  retuidtokenpw, retmd5passwd, activeStat, webdata);
		if(status == 0)
			success_transactionEx(pVuser,"DBS","CheckUserWebPasswdExtra Sucess.");
		else{
			char str_tmp[320] = {0};
			sprintf(str_tmp,"CheckUserWebPasswdExtra:Call ret status is %d",status);
			fail_transactionEx(pVuser,"DBS",str_tmp);
		}
		printf("userId : %s; status : %d\n",userId.c_str(),status);
	}catch(const Ice::Exception& ex){
		cerr << ex << endl;
		status = 1;
	}catch(const char* msg){
		cerr << msg << endl;
		status = 1;
	}
}

//GetUserInfoExNew4(string userId, out SICEUserInfoExNew4 userInfo);
void* dbs_GetUserInfoExNew4(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	dbs_st *ap = (dbs_st *)pVuser->verb;
	int status = 0;
	IMDBProxyMgrPrx dbs = *(ap->dbs);

	string userId(select_param_ex(pVuser));
	SICEUserInfoExNew4 userInfo;

	try{
		status = dbs->GetUserInfoExNew4(userId, userInfo);
		if(status == 0)
			success_transactionEx(pVuser,"DBS","GetUserInfoExNew4 Sucess.");
		else{
			char str_tmp[320] = {0};
			sprintf(str_tmp,"GetUserInfoExNew4:Call ret status is %d",status);
			fail_transactionEx(pVuser,"DBS",str_tmp);
		}
		printf("userId : %s; status : %d\n",userId.c_str(),status);
	}catch(const Ice::Exception& ex){
		cerr << ex << endl;
		status = 1;
	}catch(const char* msg){
		cerr << msg << endl;
		status = 1;
	}
}
void* dbs_UpdateUserDataInfo3(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	dbs_st *ap = (dbs_st *)pVuser->verb;
	int status = 0;
	IMDBProxyMgrPrx dbs = *(ap->dbs);

	string userId(select_param_ex(pVuser));
	RIGHTTABLE rightMap;
	int onlineTimes = 100;
	int activeDegree = 20;
	float rewardActDegree = 30;
	float onlineActDegree = 40;

	try{
		status = dbs->UpdateUserDataInfo3(userId, rightMap, onlineTimes,  activeDegree, rewardActDegree, onlineActDegree);
		if(status == 0)
			success_transactionEx(pVuser,"DBS","UpdateUserDataInfo3 Sucess.");
		else{
			char str_tmp[320] = {0};
			sprintf(str_tmp,"UpdateUserDataInfo3:Call ret status is %d",status);
			fail_transactionEx(pVuser,"DBS",str_tmp);
		}
		printf("userId : %s; status : %d\n",userId.c_str(),status);
	}catch(const Ice::Exception& ex){
		cerr << ex << endl;
		status = 1;
	}catch(const char* msg){
		cerr << msg << endl;
		status = 1;
	}
}

void* dbs_end(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	dbs_st *ap = (dbs_st *)pVuser->verb;
	int status = 0;
	IMDBProxyMgrPrx dbs = *(ap->dbs);
	Ice::CommunicatorPtr ic = *(ap->ic);

	if(ic){
		try{
			ic->destroy();
			//delete(&ic);
			//delete(&dbs);
		}catch(const Ice::Exception& ex){
			cerr << ex << endl;
			status = 1;
		}catch(const char* msg){
			cerr << msg << endl;
			status = 1;
		}
	}
}

