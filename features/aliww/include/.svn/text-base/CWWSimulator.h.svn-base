/*
 * =====================================================================================
 *
 *       Filename:  CWWSimulator.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2010年12月14日 16时57分10秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Davi.Q (), 
 *        Company:  Aliyun
 *
 * =====================================================================================
 */

#ifndef __H__CWWSIMULATOR__H
#define __H__CWWSIMULATOR__H

#include <string>
#include <imsc_pack.h>
//#include <tpfs_pack.h>
#include "RSAWrapper.h"
#include "md5hash.h"
#include "urlencode.h"
#include "datatype.h"

#define RSPDATASIZE 10240 
#define MAXDATASIZE 10240
using namespace std;

/**
 * @brief 
 * simulate a wangwang client.
 */
class CWWSimulator
{
	public: 
		CWWSimulator();
		CWWSimulator(string& username, string& password, string version = "6.18.09", string imServerIP = "110.75.161.9",uint16_t port = 16000);
		~CWWSimulator();

		void SetUser(string& username, string& password);
		void SetServerIP(string& imServerIP, uint16_t port);  
		void SetTpfsIP(string& imServerIP, uint16_t port);
		void SetClient(string& version, uint32_t language);
		void SetStatus(uint8_t tokenflag, int loginState);
		void SetSessionNo(string& sessionNo);

		uint16_t login(string& msg);
		uint16_t sendIMMessage(string& msg);
		uint16_t createSession(string& msg);
		uint16_t chatPidfy(string& msg);
		uint16_t chatPutpic(const char* picdata, string& msg);
		//uint16_t chatPutpic(const string& picdata, string& msg);
		uint16_t chatGetpic(const char* picName, string& msg);
		uint16_t chatGetcal(const char* fromid, const char* toid, const char* startDate, const char* endDate, string& msg);
		uint16_t chatGettxt(const char* fromid, const char* toid, uint64_t startTime, uint64_t endTime, string& msg);
		uint16_t chgStatus(int basicstatus, int predefstatus, std::string&msg);
		uint16_t chgStatus_recieve(std::string&msg);
		uint16_t updateUserprofile(const char * bloodType,const char * mobileno,string& msg);
		//添加联系人 type=0 不需要验证，type=1 需要验证
		uint16_t addcontactnew(const char * contactid,int type,string& msg);
		//修改联系人
		uint16_t chgcontact(const char * contactid,const char * nickname,string& msg);
		//删除联系人
		uint16_t delcontact(const char * contactid,string& msg);
		//搜索联系人
		uint16_t searchcontact(const char * contactid,string& msg);
		//添加分组
		uint16_t addgroup(const char * groupname,string& msg);
			
	public:
		uint32_t UnPackhdr(string& pack);
		void Commander(uint32_t cmd,...);
		bool SendPack(string& pack);
		bool SendPack(string& pack, uint32_t fd);
		uint16_t HandlePack(string& pack, void** p);
		bool Connect(void);
		bool Connect(uint32_t& fd, string ip, uint16_t port);
		bool ConnectTpfs(void);
		void Detach(void);
		bool StartReceiving();
		bool StartReceiving(uint32_t fd);
		string ReceivePack();
		string ReceivePack(uint32_t fd);
		char* GetRandStr();
		string GetUUID();

		string m_version;
		string m_username;
		string m_password;
		int m_nLoginState;//用户登录状态
		uint8_t  m_tokenFlag;
		uint32_t m_clientLanguage;
		uint32_t m_dwTimeStampsFlag;
		//客户端连接信息
		uint32_t m_socketFD;
		uint32_t m_tpfsFD;
		bool m_bIsReceiving;
		bool m_bIsConnected;

		//服务端相关信息
		string m_imServerIP;
		uint16_t m_port;
		string m_tpfsIP;
		uint16_t m_tpfs_port;
		//服务端返回信息	
		uint32_t m_connectNO;
		string m_pubkey;
		string m_strStorage;
		string m_pwtoken;
		string m_rid;
		string m_strkey;
		string m_packRemark;
		string m_login2token;
		string m_serverTime;
		string m_sessionno;
		string m_randstr;
		/*
		 * cuizheng
		 */
		uint32_t m_retcode;
		string m_loginstr;
		string m_usermd5str;
		uint32_t m_tpfs_connectNO;
		string m_tpfs_pubkey;
		string m_tpfs_identifystr;
		string m_verb_sessionid;
		string m_aliuid;
		string m_workkey;
		string m_df;
		VECTOR<SContactInfo > m_contactList;
		VECTOR<SUserGroup> m_groupList;
};




#endif //__H__CWWSIMULATOR__H

