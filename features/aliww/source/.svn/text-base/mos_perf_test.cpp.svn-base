#include "mos_perf_test.h"

using namespace std;
using namespace Ice;
using namespace AMOServer;

void* mos_init(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	mos_st *ap = (mos_st *)malloc(sizeof(mos_st));
	pVuser->verb = ap;
	srand(time(0));
	create_transaction(pVuser,"MOS");

	int status = 0;
	Ice::CommunicatorPtr ic;

	try{
		ic = Ice::initialize();

		Ice::ObjectPrx base = ic->stringToProxy("mosInterfaceAdapter:default -h 10.249.65.38 -p 40001");
		MOSInterfacePrx mos = MOSInterfacePrx::checkedCast(base);
		if(!mos){
			throw "Invalid proxy";
		}
		ap->mos = new MOSInterfacePrx(mos);
		ap->ic = new Ice::CommunicatorPtr(ic);
	}catch(const Ice::Exception& ex){
		cerr << ex << endl;
		status = 1;
	}catch(const char* msg){
		cerr << msg << endl;
		status = 1;
	}
}

void* mos_getUserStatus(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	mos_st *ap = (mos_st *)pVuser->verb;
	int status = 0;
	MOSInterfacePrx mos = *(ap->mos);

	::AMOServer::SICEUserIdSeq userList;
	::AMOServer::SICEMosStatusSeq mosStatusList;

	int user_size = 10, i = 0;
	for(i = 0; i < user_size; i++){
		string user(select_param_ex(pVuser));
		userList.push_back(user);
	}

	try{
		status = mos->getUserStatus(userList, mosStatusList);
		if(status == 0)
			success_transactionEx(pVuser,"MOS","TextPut Sucess.");
		else{
			char str_tmp[32] = {0};
			sprintf(str_tmp,"getUserStatus:Call ret status is %d",status);
			fail_transactionEx(pVuser,"MOS",str_tmp);
		}
	}catch(const Ice::Exception& ex){
		cerr << ex << endl;
		status = 1;
	}catch(const char* msg){
		cerr << msg << endl;
		status = 1;
	}
}

void* mos_getUserCount(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	mos_st *ap = (mos_st *)pVuser->verb;
	int status = 0;
	MOSInterfacePrx mos = *(ap->mos);

	short type = 3;
	long arg1 = 1;
	string arg2;
	long count;

	try{
		status = mos->getUserCount(type, arg1, arg2, count);
/*
		if(status == 0)
			success_transactionEx(pVuser,"MOS","TextPut Sucess.");
		else{
			char str_tmp[32] = {0};
			sprintf(str_tmp,"getUserStatus:Call ret status is %d",status);
			fail_transactionEx(pVuser,"MOS",str_tmp);
		}
*/
		cout << "Now user count: " << count << endl;
	}catch(const Ice::Exception& ex){
		cerr << ex << endl;
		status = 1;
	}catch(const char* msg){
		cerr << msg << endl;
		status = 1;
	}
}

void* mos_end(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	mos_st *ap = (mos_st *)pVuser->verb;
	int status = 0;
	MOSInterfacePrx mos = *(ap->mos);
	Ice::CommunicatorPtr ic = *(ap->ic);

	if(ic){
		try{
			ic->destroy();
			//delete(&ic);
			//delete(&mos);
		}catch(const Ice::Exception& ex){
			cerr << ex << endl;
			status = 1;
		}catch(const char* msg){
			cerr << msg << endl;
			status = 1;
		}
	}
}

