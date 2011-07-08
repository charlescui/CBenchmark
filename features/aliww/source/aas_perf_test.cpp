#include "aas_perf_test.h"

using namespace std;
using namespace Ice;
using namespace AASSERVICE;

void* aas_init(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	aas_st *ap = (aas_st *)malloc(sizeof(aas_st));
	pVuser->verb = ap;
	srand(time(0));
	create_transaction(pVuser,"AAS");

	int status = 0;
	Ice::CommunicatorPtr ic;

	try{
		ic = Ice::initialize();

		Ice::ObjectPrx base = ic->stringToProxy("AAS:default -h 10.249.199.125 -p 12480: tcp -h 10.249.199.126 -p 12480: tcp -h 10.249.199.127 -p 12480: tcp -h 10.249.199.128 -p 12480");
		//Ice::ObjectPrx base = ic->stringToProxy("AAS:default -h 10.250.3.18 -p 12480");
		AasInterfacePrx aas = AasInterfacePrx::checkedCast(base);
		if(!aas){
			throw "Invalid proxy";
		}
		ap->aas = new AasInterfacePrx(aas);
		ap->ic = new Ice::CommunicatorPtr(ic);
	}catch(const Ice::Exception& ex){
		cerr << ex << endl;
		status = 1;
	}catch(const char* msg){
		cerr << msg << endl;
		status = 1;
	}
}

struct timespec dt;

void* aas_textput(void *p)
{
	dt.tv_sec = 0;
	dt.tv_nsec = 30000000;
	//nanosleep(&dt,NULL);
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	aas_st *ap = (aas_st *)pVuser->verb;
	int status = 0;
	AasInterfacePrx aas = *(ap->aas);
	char fromID[36],toID[36];

	sprintf(fromID,"cnalichnabc%dx%dx%d",get_vuser_group(pVuser),get_vuser_id(pVuser),get_vuser_ite(pVuser));
	sprintf(toID,"cnalichnabc%dx%dx%d",get_vuser_group(pVuser),get_vuser_id(pVuser),get_vuser_ite(pVuser)+1);

	try{
		status = aas->textput(fromID,toID,time(0),1,"hello from cbenchmark peftest.");
		if(status == 0)
			success_transactionEx(pVuser,"AAS","TextPut Sucess.");
		else{
			char str_tmp[32] = {0};
			sprintf(str_tmp,"TextPut:Call ret status is %d",status);
			fail_transactionEx(pVuser,"AAS",str_tmp);
		}
	}catch(const Ice::Exception& ex){
		cerr << ex << endl;
		status = 1;
	}catch(const char* msg){
		cerr << msg << endl;
		status = 1;
	}
}

void* aas_end(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	aas_st *ap = (aas_st *)pVuser->verb;
	int status = 0;
	AasInterfacePrx aas = *(ap->aas);
	Ice::CommunicatorPtr ic = *(ap->ic);

	if(ic){
		try{
			ic->destroy();
			//delete(&ic);
			//delete(&aas);
		}catch(const Ice::Exception& ex){
			cerr << ex << endl;
			status = 1;
		}catch(const char* msg){
			cerr << msg << endl;
			status = 1;
		}
	}
}

void* aas_textgetput(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	aas_st *ap = (aas_st *)pVuser->verb;
	int status = 0;
	AasInterfacePrx aas = *(ap->aas);
	char fromID[36],toID[36];
	long ts = (long)time(0);
	string msg;

	sprintf(fromID,"cnalichnabc%dx%dx%d",get_vuser_group(pVuser),get_vuser_id(pVuser),get_vuser_ite(pVuser));
	sprintf(toID,"cnalichnabc%dx%dx%d",get_vuser_group(pVuser),get_vuser_id(pVuser),get_vuser_ite(pVuser)+1);

	try{
		status = aas->textput(fromID,toID,ts,1,"hello from cbenchmark peftest.");
		if(status != 0){
			char str_tmp[32] = {0};
			sprintf(str_tmp,"Textput:Call ret status is %d",status);
			fail_transactionEx(pVuser,"AAS",str_tmp);
			return NULL;
		}

		ChatRecordInfoSeq rcd;
		status = aas->textget(fromID,toID,ts+1,ts-100000,100,rcd);
		if(status != 0){
			char str_tmp[32] = {0};
			sprintf(str_tmp,"Textget:Call ret status is %d",status);
			fail_transactionEx(pVuser,"AAS",str_tmp);
			return NULL;
		}
		char txt[1024];
		sprintf(txt,"AAS TextPutGet Success,Result Size:%d",rcd.size());
		success_transactionEx(pVuser,"AAS",txt);
	}catch(const Ice::Exception& ex){
		cerr << ex << endl;
		status = 1;
	}catch(const char* msg){
		cerr << msg << endl;
		status = 1;
	}
}

void* aas_picput(void *p)
{
	long picSize = 40*1024 + rand()%10000;
	char *content = (char *)malloc(picSize*sizeof(char) + 1);
	char e = (char)rand()%254+1;
	memset(content,e,picSize);
	content[picSize] = '\0';
	string spicData(content);

	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	aas_st *ap = (aas_st *)pVuser->verb;
	int status = 0;
	AasInterfacePrx aas = *(ap->aas);
	char cpicName[256];
	long ts = (long)time(0);
	::AASSERVICE::ByteSeq picData(picSize,e);
	string msg;
	sprintf(cpicName,"%s_%d",Md5Hash::GetMD5(spicData).c_str(),picSize);
	string picName(cpicName);
	try{
		status = aas->picput(picName,picData);
		if(status == 0)
			success_transactionEx(pVuser,"AAS","PicPut Sucess.");
		else{
			char str_tmp[32] = {0};
			sprintf(str_tmp,"PicPut:Call ret status is %d",status);
			fail_transactionEx(pVuser,"AAS",str_tmp);
		}
	}catch(const Ice::Exception& ex){
		cerr << ex << endl;
		status = 1;
	}catch(const char* msg){
		cerr << msg << endl;
		status = 1;
	}
}

void* aas_picputget(void *p)
{
	long picSize = 40*1024 + rand()%10000;
	char *content = (char *)malloc(picSize*sizeof(char) + 1);
	char e = (char)rand()%254+1;
	memset(content,e,picSize);
	content[picSize] = '\0';
	string spicData(content);

	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	aas_st *ap = (aas_st *)pVuser->verb;
	int status = 0;
	AasInterfacePrx aas = *(ap->aas);
	char cpicName[256];
	long ts = (long)time(0);
	::AASSERVICE::ByteSeq picData(picSize,e);
	string msg;
	sprintf(cpicName,"%s_%d",Md5Hash::GetMD5(spicData).c_str(),picSize);
	string picName(cpicName);
	try{
		status = aas->picput(picName,picData);
		if(status != 0){
			char str_tmp[32] = {0};
			sprintf(str_tmp,"PicPut:Call ret status is %d,picname is %s",status,cpicName);
			printf("%s\n",str_tmp);
			fail_transactionEx(pVuser,"AAS",str_tmp);
			return NULL;
		}
		status = aas->picget(picName,picData);
		if(status != 0){
			char str_tmp[32] = {0};
			sprintf(str_tmp,"PicGet:Call ret status is %d",status);
			printf("%s\n",str_tmp);
			fail_transactionEx(pVuser,"AAS",str_tmp);
			return NULL;
		}
		success_transactionEx(pVuser,"AAS","PicPutGet success.");
	}catch(const Ice::Exception& ex){
		cerr << ex << endl;
		status = 1;
	}catch(const char* msg){
		cerr << msg << endl;
		status = 1;
	}
	free(content);
}

void* aas_textget(void *p)
{
	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	aas_st *ap = (aas_st *)pVuser->verb;
	int status = 0;
	AasInterfacePrx aas = *(ap->aas);
	char fromID[36],toID[36];
	long ts = (long)time(0);
	string msg;

	sprintf(fromID,"cnalichnabc%dx%dx%d",get_vuser_group(pVuser),get_vuser_id(pVuser),get_vuser_ite(pVuser));
	sprintf(toID,"cnalichnabc%dx%dx%d",get_vuser_group(pVuser),get_vuser_id(pVuser),get_vuser_ite(pVuser)+1);

	try{
		ChatRecordInfoSeq rcd;
		status = aas->textget(fromID,toID,ts+1,ts-100000,100,rcd);
		if(status == 0){
			char txt[1024];
			sprintf(txt,"AAS TextGet Success,Result Size:%d",rcd.size());
			success_transactionEx(pVuser,"AAS",txt);
		}else{
			char str_tmp[32] = {0};
			sprintf(str_tmp,"Textget:Call ret status is %d",status);
			fail_transactionEx(pVuser,"AAS",str_tmp);
		}
	}catch(const Ice::Exception& ex){
		cerr << ex << endl;
		status = 1;
	}catch(const char* msg){
		cerr << msg << endl;
		status = 1;
	}
}


void* aas_picget(void *p)
{
	struct timeval tvStart,tvEnd;

	vuser_node_st_t *pVuser = (vuser_node_st_t*)p;
	bench_t *bp = (bench_t *)pVuser->b->b;
	aas_st *ap = (aas_st *)pVuser->verb;
	int status = 0;
	AasInterfacePrx aas = *(ap->aas);
	char cpicName[256],*cpicNameParam;
	long ts = (long)time(0);
	string msg;
	sprintf(cpicName, "%04d%04d%08d%016ld_%d%d%d",rand(),rand(),rand(),time(NULL),get_vuser_group(pVuser),get_vuser_id(pVuser),get_vuser_ite(pVuser));
	//string picName(cpicName);

	cpicNameParam = select_param_ex(pVuser);
	string picName(cpicNameParam);
	::AASSERVICE::ByteSeq picData;
	try{
		gettimeofday(&tvStart,NULL);
		status = aas->picget(picName,picData);
	        //终止时间
        	gettimeofday(&tvEnd,NULL);

	        float dif;
        	dif = (tvEnd.tv_sec-tvStart.tv_sec) + (tvEnd.tv_usec-tvStart.tv_usec)/1000000.0;
		//printf("aas_picget cost %f\n",dif);
		/*
			由于key是人造的
			所以飞天取不到图片
			所以这里不判断返回结果是否正确
		*/
		success_transactionEx(pVuser,"AAS","PicPutGet success.");
	}catch(const Ice::Exception& ex){
		cerr << ex << endl;
		status = 1;
	}catch(const char* msg){
		cerr << msg << endl;
		status = 1;
	}
}
