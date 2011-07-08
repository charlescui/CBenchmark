#include "uss_perf_test.h"

using namespace std;
using namespace Ice;
using namespace UserStaticsX;

void* uss_init(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	uss_st *ap = (uss_st *)malloc(sizeof(uss_st));
	pVuser->verb = ap;
	srand(time(0));
	create_transaction(pVuser,"USS");

	int status = 0;
	Ice::CommunicatorPtr ic;

	try{
		ic = Ice::initialize();

		Ice::ObjectPrx base = ic->stringToProxy("USSID:default -h 10.250.3.75 -p 5555");
		UserStaticsIPrx uss = UserStaticsIPrx::checkedCast(base);
		if(!uss){
			throw "Invalid proxy";
		}
		ap->uss = new UserStaticsIPrx(uss);
		ap->ic = new Ice::CommunicatorPtr(ic);
	}catch(const Ice::Exception& ex){
		cerr << ex << endl;
		status = 1;
	}catch(const char* msg){
		cerr << msg << endl;
		status = 1;
	}
}

//int get(string id, out UserStaticsX::UserStatics s);
void* uss_get(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	uss_st *ap = (uss_st *)pVuser->verb;
	int status = 0;
	UserStaticsIPrx uss = *(ap->uss);

        string userId(select_param_ex(pVuser));
	AliIMDBBase::UserStatics s;

	try{
		status = uss->get( userId, s);
		if(status == 0)
			success_transactionEx(pVuser,"USS","get Sucess.");
		else{
			char str_tmp[320] = {0};
			sprintf(str_tmp,"get:Call ret status is %d",status);
			fail_transactionEx(pVuser,"USS",str_tmp);
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

void* uss_insert(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	uss_st *ap = (uss_st *)pVuser->verb;
	int status = 0;
	UserStaticsIPrx uss = *(ap->uss);

        string userId(select_param_ex(pVuser));
	AliIMDBBase::UserStatics delta;
	delta.loginId = userId;
	delta.type = 0;
	int online_degree = rand()*1000%48;
	int chat_degree = rand()*1000%48;
	int reward_degree = rand()*100%10;
	delta.totalDegree = online_degree + 1.5 * chat_degree + reward_degree;

	try{
		status = uss->insert( delta);
		if(status == 0)
			success_transactionEx(pVuser,"USS","insert Sucess.");
		else{
			char str_tmp[320] = {0};
			sprintf(str_tmp,"insert:Call ret status is %d",status);
			fail_transactionEx(pVuser,"USS",str_tmp);
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

void* uss_end(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	uss_st *ap = (uss_st *)pVuser->verb;
	int status = 0;
	UserStaticsIPrx uss = *(ap->uss);
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

