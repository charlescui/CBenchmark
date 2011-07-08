#include "ddbadmin_perf_test.h"

using namespace std;
using namespace Ice;
using namespace AliDDB;

void* ddbadmin_init(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	ddbadmin_st *ap = (ddbadmin_st *)malloc(sizeof(ddbadmin_st));
	pVuser->verb = ap;
	srand(time(0));
	create_transaction(pVuser,"DDBAdmin");

	int status = 0;
	Ice::CommunicatorPtr ic;

	try{
		ic = Ice::initialize();

		Ice::ObjectPrx base = ic->stringToProxy("DDBAdminMgrProxyId:default -h 10.250.2.12 -p 20000");
		AliDDBInterfacePrx ddbadmin = AliDDBInterfacePrx::checkedCast(base);
		if(!ddbadmin){
			throw "Invalid proxy";
		}
		ap->ddbadmin = new AliDDBInterfacePrx(ddbadmin);
		ap->ic = new Ice::CommunicatorPtr(ic);
	}catch(const Ice::Exception& ex){
		cerr << ex << endl;
		status = 1;
	}catch(const char* msg){
		cerr << msg << endl;
		status = 1;
	}
}

void* ddbadmin_insertRecord(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	ddbadmin_st *ap = (ddbadmin_st *)pVuser->verb;
	int status = 0;
	AliDDBInterfacePrx ddbadmin = *(ap->ddbadmin);

	string table = "im_user";
	KVMap key;
	char cvalue[256];
	sprintf(cvalue,"ddbadmin_insertRecord%dx%dx%d",get_vuser_id(pVuser),get_vuser_group(pVuser),get_vuser_ite(pVuser));
	string value(cvalue);
	key["login_id"] = value;
	DBRecord record;
	record.fields["web_id"]="cntaobao";
	record.fields["sys_msg_id"]="100";
	record.fields["group_times"]="1";
	record.fields["contact_times"]="2";
	record.fields["blacklist_times"]="3";
	record.fields["reverse_blacklist_times"]="4";
	record.fields["user_status"]="0";
	record.fields["tools_times"]="5";
	record.fields["multi_account_flag"]="0";
	record.fields["add_contact_verify"]="1";
	record.fields["send_msg_verify"]="1";
	record.fields["add_tribe_verify"]="1";

	try{
		status = ddbadmin->insertRecord(table, key, record);
		if(status == 0)
			success_transactionEx(pVuser,"DDBAdmin","insertRecord Sucess.");
		else{
			char str_tmp[32] = {0};
			sprintf(str_tmp,"insertRecord:Call ret status is %d",status);
			fail_transactionEx(pVuser,"DDBAdmin",str_tmp);
		}
	}catch(const Ice::Exception& ex){
		cerr << ex << endl;
		status = 1;
	}catch(const char* msg){
		cerr << msg << endl;
		status = 1;
	}
}

void* ddbadmin_getRecord(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	ddbadmin_st *ap = (ddbadmin_st *)pVuser->verb;
	int status = 0;
	AliDDBInterfacePrx ddbadmin = *(ap->ddbadmin);

	string table = "im_user";
	KVMap key;
	string value( select_param_ex(pVuser));
	key["login_id"] = value;
	vector<string> fields, bf;
	fields.push_back("web_id");
	fields.push_back("sys_msg_id");
	fields.push_back("group_times");
	fields.push_back("contact_times");
	fields.push_back("blacklist_times");
	fields.push_back("reverse_blacklist_times");
	fields.push_back("user_status");
	fields.push_back("tools_times");
	fields.push_back("multi_account_flag");
	fields.push_back("add_contact_verify");
	fields.push_back("send_msg_verify");
	fields.push_back("add_tribe_verify");
	fields.push_back("gmt_create");
	fields.push_back("gmt_modified");
	DBRecord record;

	try{
		status = ddbadmin->getRecord(table, key, fields, bf, record);
		if(status == 0)
			success_transactionEx(pVuser,"DDBAdmin","getRecord Sucess.");
		else{
			char str_tmp[32] = {0};
			sprintf(str_tmp,"getRecord:Call ret status is %d",status);
			fail_transactionEx(pVuser,"DDBAdmin",str_tmp);
		}
	}catch(const Ice::Exception& ex){
		cerr << ex << endl;
		status = 1;
	}catch(const char* msg){
		cerr << msg << endl;
		status = 1;
	}
}


void* ddbadmin_deleteRecord(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	ddbadmin_st *ap = (ddbadmin_st *)pVuser->verb;
	int status = 0;
	AliDDBInterfacePrx ddbadmin = *(ap->ddbadmin);

	string table = "im_user";
	KVMap key, uniqKey;
	string value( select_param_ex(pVuser));
	key["login_id"] = value;

	try{
		status = ddbadmin->deleteRecord(table, key, uniqKey);
		if(status == 0)
			success_transactionEx(pVuser,"DDBAdmin","deleteRecord Sucess.");
		else{
			char str_tmp[32] = {0};
			sprintf(str_tmp,"deleteRecord:Call ret status is %d",status);
			fail_transactionEx(pVuser,"DDBAdmin",str_tmp);
		}
	}catch(const Ice::Exception& ex){
		cerr << ex << endl;
		status = 1;
	}catch(const char* msg){
		cerr << msg << endl;
		status = 1;
	}
}

void* ddbadmin_updateRecord(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	ddbadmin_st *ap = (ddbadmin_st *)pVuser->verb;
	int status = 0;
	AliDDBInterfacePrx ddbadmin = *(ap->ddbadmin);

	string table = "im_user";
	KVMap key, uniqKey;
	string value( select_param_ex(pVuser));
	key["login_id"] = value;
	DBRecord record;
	record.fields["web_id"]="cnalichn";
	record.fields["sys_msg_id"]="100";
	record.fields["group_times"]="1";
	record.fields["contact_times"]="2";
	record.fields["blacklist_times"]="3";
	record.fields["reverse_blacklist_times"]="4";
	record.fields["user_status"]="0";
	record.fields["tools_times"]="5";
	record.fields["multi_account_flag"]="0";
	record.fields["add_contact_verify"]="1";
	record.fields["send_msg_verify"]="1";
	record.fields["add_tribe_verify"]="1";

	try{
		status = ddbadmin->updateRecord(table, key, uniqKey, record);
		if(status == 0)
			success_transactionEx(pVuser,"DDBAdmin","TextPut Sucess.");
		else{
			char str_tmp[32] = {0};
			sprintf(str_tmp,"getUserStatus:Call ret status is %d",status);
			fail_transactionEx(pVuser,"DDBAdmin",str_tmp);
		}
	}catch(const Ice::Exception& ex){
		cerr << ex << endl;
		status = 1;
	}catch(const char* msg){
		cerr << msg << endl;
		status = 1;
	}
}

void* ddbadmin_insertRecord_delete(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	ddbadmin_st *ap = (ddbadmin_st *)pVuser->verb;
	int status = 0;
	AliDDBInterfacePrx ddbadmin = *(ap->ddbadmin);

	string table = "im_user";
	KVMap key, uniqKey;
	char cvalue[256];
	sprintf(cvalue,"ddbadmin_insertRecord%dx%dx%d",get_vuser_id(pVuser),get_vuser_group(pVuser),get_vuser_ite(pVuser));
	string value(cvalue);
	key["login_id"] = value;
	DBRecord record;
	record.fields["web_id"]="cntaobao";
	record.fields["sys_msg_id"]="100";
	record.fields["group_times"]="1";
	record.fields["contact_times"]="2";
	record.fields["blacklist_times"]="3";
	record.fields["reverse_blacklist_times"]="4";
	record.fields["user_status"]="0";
	record.fields["tools_times"]="5";
	record.fields["multi_account_flag"]="0";
	record.fields["add_contact_verify"]="1";
	record.fields["send_msg_verify"]="1";
	record.fields["add_tribe_verify"]="1";

	try{
		status = ddbadmin->insertRecord(table, key, record);
		if(status == 0)
			success_transactionEx(pVuser,"DDBAdmin","insertRecord Sucess.");
		else{
			char str_tmp[32] = {0};
			sprintf(str_tmp,"insertRecord:Call ret status is %d",status);
			fail_transactionEx(pVuser,"DDBAdmin",str_tmp);
		}
		status = ddbadmin->deleteRecord(table, key, uniqKey);
		if(status == 0)
			success_transactionEx(pVuser,"DDBAdmin","deleteRecord Sucess.");
		else{
			char str_tmp[32] = {0};
			sprintf(str_tmp,"deleteRecord:Call ret status is %d",status);
			fail_transactionEx(pVuser,"DDBAdmin",str_tmp);
		}
	}catch(const Ice::Exception& ex){
		cerr << ex << endl;
		status = 1;
	}catch(const char* msg){
		cerr << msg << endl;
		status = 1;
	}
}
void* ddbadmin_end(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	ddbadmin_st *ap = (ddbadmin_st *)pVuser->verb;
	int status = 0;
	AliDDBInterfacePrx ddbadmin = *(ap->ddbadmin);
	Ice::CommunicatorPtr ic = *(ap->ic);

	if(ic){
		try{
			ic->destroy();
			//delete(&ic);
			//delete(&ddbadmin);
		}catch(const Ice::Exception& ex){
			cerr << ex << endl;
			status = 1;
		}catch(const char* msg){
			cerr << msg << endl;
			status = 1;
		}
	}
}

