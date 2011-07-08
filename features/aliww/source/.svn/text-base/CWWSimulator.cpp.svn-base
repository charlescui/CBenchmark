/* * ===================================================================================== * *     
 *	
 *	Filename:  CWWSimulator.cpp    
 * 	Description:  
 *
 *        Version:  1.0
 *        Created:  2010年12月14日 16时48分09秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Davi.Q (), 
 *        Company:  Aliyun
 *
 * =====================================================================================
 */
#include <iostream>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <pthread.h>
#include <sstream>
#include <sys/types.h>
#include <stdarg.h>
#include <sstream>

#include "CWWSimulator.h"
#include "sc_head.h"
#include "imsc_cmd.h"
#include "imsc_pack.h"
#include "imsc_cmd_2Str.h"
#include "RSAWrapper.h"
#include "md5hash.h"
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>

using namespace std;

char* CWWSimulator::GetRandStr()
{
	char cstr[512];
	memset(cstr,0,512);
	sprintf(cstr,"%s%d%s%d%ld",m_username.c_str(),rand(),m_password.c_str(),rand(),time(0));
	return cstr;
}

string CWWSimulator::GetUUID()
{
	char cstr[512];
	memset(cstr,0,512);
	sprintf(cstr,"%s%d%s%d%ld",m_username.size()>0?m_username.c_str():"no_name",rand(),m_password.size()>0?m_password.c_str():"no_pass",rand(),time(0));
	return string(cstr);
}

CWWSimulator::CWWSimulator()
{
	srand(time(0));
	m_bIsConnected = false;
	m_bIsReceiving = false;
}

CWWSimulator::CWWSimulator(string& username, string& password, string version, string imServerIP, uint16_t port):
	m_username(username), m_password(password), m_version(version), m_imServerIP(imServerIP), m_port(port)
{
	srand(time(0));
	m_bIsConnected = false;
	m_bIsReceiving = false;

}
CWWSimulator::~CWWSimulator()
{
	//Detach();
}
void CWWSimulator::SetUser(string& username, string& password)
{
	        m_username = username;
		m_password = password;
}
void CWWSimulator::SetSessionNo(string& sessionNo)
{
		/*
			tpfs测时时，tpfs服务器对sessionno的验证做了mock
			使得当sessionno是AAA开头的string时验证肯定通过
		*/
		//m_sessionno = "AAATESTSESSIONKEY";
		m_sessionno = sessionNo;
}

void CWWSimulator::SetServerIP(string& imServerIP, uint16_t port)
{
	        m_imServerIP = imServerIP;
		m_port = port;
}
void CWWSimulator::SetTpfsIP(string& imServerIP, uint16_t port)
{
		m_tpfsIP = imServerIP;
		m_tpfs_port = port;
}
void CWWSimulator::SetClient(string& version, uint32_t language)
{
		m_version = version;
		m_clientLanguage = language;
}
/*
用真实密码登录
tokenFlag = TOKEN_FLAG = 0;
用token登录
tokenFlag = TOKEN_FLAG = 1;
*/
void CWWSimulator::SetStatus(uint8_t tokenFlag, int loginState)
{
		m_tokenFlag = tokenFlag;
		m_nLoginState = loginState;
}

bool CWWSimulator::ConnectTpfs(void)
{
	return Connect(m_tpfsFD,m_tpfsIP,m_tpfs_port);
}

bool CWWSimulator::Connect(void)
{
	return Connect(m_socketFD,m_imServerIP,m_port);
}

void setblocking(int sock)
{
    int opts;
    opts=fcntl(sock,F_GETFL);
    if(opts<0)
    {    
        printf("fcntl(sock,GETFL)\n");
        exit(1);
    }    
    opts = opts & (~O_NONBLOCK);
    if(fcntl(sock,F_SETFL,opts)<0)
    {    
        printf("fcntl(sock,SETFL,opts)\n");
        exit(1);
    }    
}

bool CWWSimulator::Connect(uint32_t& fd, string ip, uint16_t port)
{		
	uint32_t sockfd;
	struct sockaddr_in server_addr;

	sockfd = socket(AF_INET, SOCK_STREAM, 0);

	server_addr.sin_family = AF_INET;
	server_addr.sin_addr.s_addr = inet_addr(ip.c_str());
	server_addr.sin_port = htons(port);

	//cout << "serverIP: " << ip.c_str() << endl;
	//cout << "port: " << port << endl;
	if( (connect(sockfd, (struct sockaddr*)&server_addr, sizeof(server_addr))) != -1)
	{
		fd = sockfd;
		setblocking(sockfd);
		m_bIsConnected = true;
		cout << "Server connected" << endl;
		return true;
	}
	else
	{
		cout << "connect server failed" << endl;
		m_bIsConnected = false;
		perror("connect error!");
		return false;
	}

}

bool CWWSimulator::SendPack(string& pack)
{
	return SendPack(pack, m_socketFD);
}

bool CWWSimulator::SendPack(string& pack, uint32_t fd)
{	
	uint32_t sendLen = 0;
	uint32_t totalLen = 0;
	uint32_t packSize = pack.size();
	while(packSize != totalLen)
	{
		sendLen = write(fd, const_cast<char*>(pack.c_str())+totalLen, packSize-totalLen);
		totalLen += sendLen;
		if(sendLen <= 0)
		{
			fprintf(stderr,"write fd err . fd == %d - %m",fd);
			return false;
		}
	}
	return true;
}

bool CWWSimulator::StartReceiving()
{
	return StartReceiving(m_socketFD);
}

bool CWWSimulator::StartReceiving(uint32_t fd)
{
	if(m_bIsConnected != true)
	{
		//cout<< "begin connect server" <<endl;
		Connect();
	}
	if(m_bIsConnected == true)
	{
		if(m_bIsReceiving == true)
		{
			return true;
		}
		ReceivePack(fd);
	}
	//cout << "Receiving thread create failed" << endl; 
	return false;
}

void CWWSimulator::Commander(uint32_t cmd,...)
{
	va_list ap;
	va_start(ap, cmd);

	switch(cmd)
	{
		case IM_REQ_CHECKVERSION:
			{
				CImReqCheckversion reqCheckversion;
				reqCheckversion.m_scHead.m_encrypt = 0;
				reqCheckversion.SetVersion(m_version);

				string pack;
				reqCheckversion.PackData(pack,"");

				SendPack(pack);
				//cout << "send IM_REQ_CHECKVERSION " << endl;
				break;
			}
		case IM_REQ_LOGIN:
			{
				string randStr("xxxxxx");
				m_usermd5str = Md5Hash::GetMD5(m_username + m_password + randStr, true);
				CDesEncrypt enc;
				m_strkey = enc.SetKey(m_usermd5str);

				CImReqLogin reqLogin;
				reqLogin.m_scHead.m_reserved = 1;
				reqLogin.m_scHead.m_extdata = m_username;
				reqLogin.SetPassword(m_password);
				reqLogin.SetTokenFlag(m_tokenFlag);
				reqLogin.SetLanguage(m_clientLanguage);
				reqLogin.SetVersion(m_version);
				reqLogin.SetConnectNo(m_connectNO);

				reqLogin.SetTimestampFlag(15);
				VECTOR<uint32_t> vecTimeStamp;
				long dwTimeStamps[16] = {0};
				for (int i=0;i<16;i++) vecTimeStamp.push_back(dwTimeStamps[i]);
				reqLogin.SetTimestampList(vecTimeStamp);
				VECTOR<std::string> sHardCodeArray;
				string sAllHardCode = "D85F450B524F2B3E20D663198181C601";
				reqLogin.SetHardcode(sHardCodeArray);
				reqLogin.SetHardcheck(sAllHardCode);
				string rid = "pcid=c4e0284ea47a400c814443c4771696c1";
				reqLogin.SetRid(rid);
				reqLogin.PackData(m_loginstr,m_strkey);
				break;
			}
		case IM_REQ_PRELOGIN:
			{
				Commander(IM_REQ_LOGIN);
				CImReqPrelogin reqPrelogin;
				reqPrelogin.SetConnectNo(m_connectNO); 
				string strRsaResult;//用服务传回的pubkey 将m_usermd5str加密一下

				int nRet = RSA_PublicEncrypt(m_pubkey.c_str(),  m_pubkey.size(),
						m_usermd5str.c_str(), m_usermd5str.size(), strRsaResult);
				reqPrelogin.SetWorkKey(strRsaResult);
				reqPrelogin.SetStrlogin(m_loginstr);
				reqPrelogin.m_scHead.m_encrypt = 0;
				string pack;
				reqPrelogin.PackData(pack, m_strkey);
				SendPack(pack);
				//cout << "send IM_REQ_PRELOGIN " << endl;
				break;
			}
		case IM_REQ_POSTLOGIN:
			{

				CImReqPostlogin reqPostlogin;
				reqPostlogin.SetPredefStatus(m_nLoginState& 0xff);
				reqPostlogin.SetBasicStatus(m_nLoginState >> 16);

				string pack;
				reqPostlogin.PackData(pack,m_strkey);
				SendPack(pack);
				//cout << "send IM_REQ_POSTLOGIN" << endl;
				break;
			}
		case IM_REQ_CHGSTATUS:
			{
				uint64_t basicstatus = va_arg(ap, uint64_t);
				uint64_t predefstatus = va_arg(ap, uint64_t);
				CImReqChgstatus reqchgstatus;
				reqchgstatus.SetBasicStatus(basicstatus);
				reqchgstatus.SetPredefStatus(predefstatus);
				string pack;
				reqchgstatus.PackData(pack, m_strkey);
				SendPack(pack);
				break;	
			}
		case IM_REQ_LOGOFF:
			{
				CImReqLogoff reqLogoff;
				string pack;
				reqLogoff.PackData(pack,m_strkey);
				SendPack(pack);
				//cout << "send IM_REQ_LOGOFF " << endl;
				break;
			}
		case IM_REQ_GETWEB_SESSION:
			{
				CImReqGetwebSession reqgetws;
				string pack;
				reqgetws.PackData(pack,m_strkey);
				SendPack(pack);
				//cout << "send IM_REQ_GETWEB_SESSION" << endl;
				break;
			}
		case IM_REQ_SENDIMMESSAGE:
			{
				string pack;
				CImReqSendimmessage reqSendimmessage;
				reqSendimmessage.SetTargetId("cntaobaojason3");
				reqSendimmessage.SetType(0x01);//是否存离线 01存 00不存
				string msghead = "12345678";
                                msghead[0] = 0x08;
                                msghead[1] = 0x00;
                                msghead[2] = 0x00;
                                msghead[3] = 0x00;
                                msghead[4] = 0x2F;
                                msghead[5] = 0x1F;
				msghead[6] = 0x5D;
				msghead[7] = 0x9E;
				string msg = msghead + "\\C0\\S0xc.0xf0\\FArial\\TFrom CWWSimulator,In perf test";
				reqSendimmessage.SetMessage(msg);
				reqSendimmessage.PackData(pack,m_strkey);
				SendPack(pack);
				//cout << "send IM_REQ_SENDIMMESSAGE" << endl;
				break;
			}
		case IM_REQ_CHAT_CHKVER:
			{
				CImReqChatChkver reqchatcver;
				reqchatcver.SetVersion(m_version);
				reqchatcver.m_scHead.m_encrypt=0;
				string pack;
				reqchatcver.PackData(pack,"");
				SendPack(pack,m_tpfsFD);
				//cout << "send IM_REQ_CHAT_CHKVER" << endl;
				break;
			}
		case IM_REQ_CHAT_IDENTIFY:
			{
				CImReqChatIdentify reqchatidf;
				reqchatidf.m_scHead.m_reserved = 1;
				reqchatidf.m_scHead.m_extdata = m_username;
				reqchatidf.SetUid(m_username);
				reqchatidf.SetVersion(m_version);
				reqchatidf.SetSessionkey(m_sessionno);
				//reqchatidf.SetSessionkey("AAATESTSESSIONKEY");

				string randStr("xxxxxx");
				m_usermd5str = Md5Hash::GetMD5(m_username + m_password + randStr, true);
				CDesEncrypt enc;
				m_strkey = enc.SetKey(m_usermd5str);

				reqchatidf.PackData(m_tpfs_identifystr,m_strkey);
				break;
			}
		case IM_REQ_CHAT_PREIDENTIFY:
			{
				Commander(IM_REQ_CHAT_IDENTIFY);
				CImReqChatPreidentify reqchatpreidf;
				string strRsaResult;
				int nRet = RSA_PublicEncrypt(m_tpfs_pubkey.c_str(),  m_tpfs_pubkey.size(),
						m_usermd5str.c_str(), m_usermd5str.size(), strRsaResult);
				reqchatpreidf.SetWorkKey(strRsaResult);
				reqchatpreidf.SetConnectNo(m_tpfs_connectNO); 
				reqchatpreidf.SetStrlogin(m_tpfs_identifystr);
				reqchatpreidf.m_scHead.m_encrypt = 0;
				string pack;
				reqchatpreidf.PackData(pack, m_strkey);
				if(!SendPack(pack,m_tpfsFD))
					cout << "send IM_REQ_CHAT_PREIDENTIFY failed" << endl;
				break;
			}
		case IM_REQ_CHAT_PUTPIC:
			{
				string pack;
				string picdata = "111111111111111111112222222222222222222222333333333333333";
				//string picdata(va_arg(ap,char*));
				char cpicname[256] = {0};
				sprintf(cpicname,"%s_%d",Md5Hash::GetMD5(picdata).c_str(),picdata.length());
				string picname(cpicname);
				CImReqChatPutpic reqChatPutpic;

				m_verb_sessionid = GetUUID();

				reqChatPutpic.SetSessionid(m_verb_sessionid );

				//reqChatPutpic.SetPickey("cc4d71902b6aea00782bb1e033cdba73_57");
				reqChatPutpic.SetPickey(picname);
				reqChatPutpic.SetData(picdata);
				reqChatPutpic.SetSize(picdata.size());
				reqChatPutpic.SetOffset(0);
				reqChatPutpic.PackData(pack,m_strkey);
				SendPack(pack,m_tpfsFD);
				//cout << "send IM_REQ_CHAT_PUTPIC" << endl;
				break;
			}
		case IM_REQ_CHAT_GETPIC:
			{
				char *cpicName = va_arg(ap,char *);

				string picName(cpicName);
				string pack;

				CImReqChatGetpic reqChatGetpic;
				m_verb_sessionid = GetUUID();

				reqChatGetpic.SetSessionid(m_verb_sessionid);
				//reqChatGetpic.SetPickey("cc4d71902b6aea00782bb1e033cdba73_57");
				reqChatGetpic.SetPickey(picName);
				reqChatGetpic.PackData(pack,m_strkey);

				if(!SendPack(pack,m_tpfsFD))
					cout << "send IM_REQ_CHAT_GETPIC failed" << endl;
				break;
			}
		case IM_REQ_CHAT_GETCAL:
			{
				string fromid(va_arg(ap,char*));
				string toid(va_arg(ap,char*));
				string startDate(va_arg(ap,char*));
				string endDate(va_arg(ap,char*));
				string pack;

				CImReqChatGetcal reqChatGetcal;

				m_verb_sessionid = GetUUID();
				reqChatGetcal.SetSessionid(m_verb_sessionid);
				reqChatGetcal.SetUid(fromid);
				reqChatGetcal.SetToid(toid);
				reqChatGetcal.SetStartdate(startDate);
				reqChatGetcal.SetEnddate(endDate);
				//reqChatGetcal.SetToid("cntaobaoabc1999");
				//reqChatGetcal.SetStartdate("20110101");
				//reqChatGetcal.SetEnddate("20111111");
				reqChatGetcal.PackData(pack,m_strkey);
				SendPack(pack,m_tpfsFD);
				//cout << "send IM_REQ_CHAT_GETCAL" << endl;
				break;
			}
		case IM_REQ_CHAT_GETTXT:
			{
				string fromid(va_arg(ap,char*));
				string toid(va_arg(ap, char*));

				m_verb_sessionid = GetUUID();

				CImReqChatGettxt reqchatgt;
				reqchatgt.SetSessionid(m_verb_sessionid);

				reqchatgt.SetFromid(fromid);
				reqchatgt.SetToid(toid);
				reqchatgt.SetBegtime(va_arg(ap, uint64_t));
				reqchatgt.SetEndtime(va_arg(ap, uint64_t));
				reqchatgt.SetMsgnum(va_arg(ap, int));
				string pack;
				reqchatgt.PackData(pack,m_strkey);
				SendPack(pack, m_tpfsFD);

				//cout << "send IM_REQ_CHAT_GETTXT" << endl;
				break;
			}
		case IM_REQ_UPDATE_UDBPROFILE:
			{
				string bloodType(va_arg(ap,char*));
				string mobileno(va_arg(ap, char*));
				map< string,string > m_profilelist;
				m_profilelist.insert(map< string,string >::value_type("bloodType",bloodType));
				m_profilelist.insert(map< string,string >::value_type("mobileno",mobileno));
				CImReqUpdateUdbprofile req;
				req.SetProfilelist(m_profilelist);
				string pack;
				req.PackData(pack, m_strkey);
				SendPack(pack);
				break;	
			}
		default:
			string cmdStr = IMSC_cmd2STR::IMSC_CMD_2STR(cmd);
			//cout<< "There is no action for command:" << cmdStr << endl; 
	}
	return ;
}

uint16_t CWWSimulator::HandlePack(string& pack, void** p)
{
	void* pPack;
	uint16_t ret = -1;

	CScHead hdr;
	if(PACK_RIGHT != hdr.UnpackData(pack))
	{
		//cout << "hdr Unpack failed,In HandlePack" << endl;
	}
	uint32_t cmd = hdr.m_cmd;

	string cmdStr = IMSC_cmd2STR::IMSC_CMD_2STR(cmd); 
	//cout << "cmd received: " << cmdStr <<endl;
	//cout << "received pack size : " << pack.size() << endl;
	switch(cmd)
	{
		case IM_RSP_CHECKVERSION:
			{
				//cout << "get IM_RSP_CHECKVERSION" << endl;
				CImRspCheckversion *pRspPack = new(CImRspCheckversion);
				if(PACK_RIGHT != pRspPack->UnpackData(pack))
				{
					//cout<<"CImRspCheckversion.UnpackData fail" << endl;
					delete(pRspPack);
					break;
				}
				//cout << "IM_RSP_CHECKVERSION retcode: " << pRspPack->GetRetcode() << endl;
				m_connectNO = pRspPack->GetConnectNo();
				m_pubkey = pRspPack->GetPubkey();

				ret = pRspPack->GetRetcode();
				delete(pRspPack);
				break;
			}
		case IM_RSP_LOGIN:
			{
				//cout << "get IM_RSP_LOGIN " << endl;
				CImRspLogin *pRspPack = new(CImRspLogin) ;
				if(PACK_RIGHT != pRspPack->UnpackData(pack,m_strkey))
				{
					//cout<<"CImRspLogin.UnpackData fail" << endl;
					delete(pRspPack);
					break;
				}
				//cout << "IM_RSP_LOGIN retcode: " << pRspPack->GetRetcode() << endl;
				m_retcode = pRspPack->GetRetcode();
				m_dwTimeStampsFlag = pRspPack->GetTimestampFlag();
				m_strkey = pRspPack->GetWorkKey();
				CDesEncrypt enc;
				m_strkey = enc.SetKey(m_strkey);
				m_pwtoken = pRspPack->GetPwtoken();
				m_rid = pRspPack->GetRid();
				m_packRemark = pRspPack->GetRemark();				
				ret = pRspPack->GetRetcode();
				delete(pRspPack);
				break;	
			}
		case IM_RSP_GETUSERINFO:
			{
				//cout << "get IM_RSP_GETUSERINFO" << endl;
				ret = 0;
				break;
			}
		case IM_RSP_GETGROUP:
			{
				//cout << "get IM_RSP_GETGROUP " << endl;
				CImRspGetgroup *pRspPack = new(CImRspGetgroup) ;
				if(PACK_RIGHT != pRspPack->UnpackData(pack,m_strkey))
				{
					//cout<<"CImRspGetgroup.UnpackData fail" << endl;
					delete(pRspPack);
					break;
				}
				pRspPack->GetRetcode();
				pRspPack->GetGroupList();
				ret = pRspPack->GetRetcode();
				delete(pRspPack);
				break;
			}
		case IM_RSP_GETCONTACT:
			{
				cout << "get IM_RSP_GETCONTACT " << endl;
				CImRspGetcontact *pRspPack = new(CImRspGetcontact) ;
				if(PACK_RIGHT != pRspPack->UnpackData(pack,m_strkey))
				{
					cout<<"CImRspGetcontact.UnpackData fail" << endl;
					delete(pRspPack);
					break;
				}
				pRspPack->GetRetcode();
				VECTOR<SContactInfo > m_contactList = pRspPack->GetContactList(); 

				cout <<" get contact count:"<< m_contactList.size() <<endl;
				ret = pRspPack->GetRetcode();
				break;
			}
		case IM_NTF_STATUS:
			{
				cout << "get IM_NTF_STATUS " << endl;
				CImNtfStatus *pRspPack = new(CImNtfStatus) ;
				if(PACK_RIGHT != pRspPack->UnpackData(pack,m_strkey))
				{
					cout<<"CImNtfStatus.UnpackData fail" << endl;
					delete(pRspPack);
					break;
				}
				VECTOR< SUserStatus > m_userStatusList = pRspPack->GetUserStatusList(); 

				cout <<" get contact count:"<< m_userStatusList.size() <<endl;
				break;
			}
		case IM_RSP_LOGOFF:
			{
				//cout << "get IM_RSP_LOGOFF " << endl;
				CImRspLogoff *pRspPack = new(CImRspLogoff);
				if(PACK_RIGHT != pRspPack->UnpackData(pack,m_strkey))
				{
					//cout<<"CImRspLogoff.UnpackData fail" << endl;
					delete(pRspPack);
					break;
				}
				//cout << "IM_RSP_LOGOFF retcode: " << pRspPack->GetRetcode()<<endl;
				ret = pRspPack->GetRetcode();
				delete(pRspPack);
				break;
			}
		case IM_RSP_CHAT_IDENTIFY:
			{
				//cout << "get IM_RSP_CHAT_IDENTIFY " << endl;
				CImRspChatIdentify *pRspPack = new(CImRspChatIdentify);
				if(PACK_RIGHT != pRspPack->UnpackData(pack,m_strkey))
				{
					//cout<<"CImRspChatIdentify.UnpackData fail" << endl;
					delete(pRspPack);
					break;
				}
				//cout << "IM_RSP_CHAT_IDENTIFY retcode: " << pRspPack->GetRetcode() << endl;
				ret = pRspPack->GetRetcode();
				delete(pRspPack);
				break;
			}
		case IM_RSP_GETWEB_SESSION:
			{
				//cout << "get IM_RSP_GETWEB_SESSION" << endl;
				CImRspGetwebSession *pRspPack = new(CImRspGetwebSession);
				if(PACK_RIGHT != pRspPack->UnpackData(pack,m_strkey))
				{
					//cout<<"CImRspGetwebSession.UnpackData fail" << endl;
					delete(pRspPack);
					break;
				}
				//cout << "IM_RSP_GETWEB_SESSION retcode: " << pRspPack->GetRetcode() << endl;
				//cout << "Get session NO : " << pRspPack->GetSessionNo() << endl;
				m_sessionno = pRspPack->GetSessionNo();
				ret = pRspPack->GetRetcode();
				delete(pRspPack);
				break;
			}
		case IM_RSP_CHAT_CHKVER:
			{
				//cout << "get IM_RSP_CHAT_CHKVER " << endl;
				CImRspChatChkver *pRspPack = new(CImRspChatChkver);
				if(PACK_RIGHT != pRspPack->UnpackData(pack,m_strkey))
				{
					//cout<<"CImRspChatChkver.UnpackData fail" << endl;
					delete(pRspPack);
					break;
				}
				//cout << "IM_RSP_CHAT_CHKVER retcode: " << pRspPack->GetRetcode() << endl;
				m_tpfs_connectNO = pRspPack->GetConnectNo();
				m_tpfs_pubkey = pRspPack->GetPubkey();
				ret = pRspPack->GetRetcode();
				delete(pRspPack);
				break;
			}
		case IM_RSP_CHAT_PUTPIC:
			{
				//cout << "get IM_RSP_CHAT_PUTPIC" << endl;
				CImRspChatPutpic *pRspPack=new(CImRspChatPutpic);
				if(PACK_RIGHT != pRspPack->UnpackData(pack,m_strkey))
				{
					//cout<<"CImRspChatPutpic.UnpackData fail" << endl;
					delete(pRspPack);
					break;
				}
				//cout << "IM_RSP_CHAT_PUTPIC retcode: " << pRspPack->GetRetcode() << endl;
				ret = pRspPack->GetRetcode();
				delete(pRspPack);
				break;
			}
		case IM_RSP_CHAT_GETPIC:
			{
				//cout << "get IM_RSP_CHAT_GETPIC " << endl;
				CImRspChatGetpic *pRspPack = new(CImRspChatGetpic);
				if(PACK_RIGHT != pRspPack->UnpackData(pack,m_strkey))
				{
					cout<<"CImRspChatGetpic.UnpackData fail" << endl;
					delete(pRspPack);
					break;
				}
				//cout << "IM_RSP_CHAT_GETPIC retcode: " << pRspPack->GetRetcode() << endl;

				ret = pRspPack->GetRetcode();
				delete(pRspPack);
				break;
			}
		case IM_RSP_CHAT_GETCAL:
			{
				//cout << "get IM_RSP_CHAT_GETCAL " << endl;
				CImRspChatGetcal *pRspPack = new(CImRspChatGetcal);
				if(PACK_RIGHT != pRspPack->UnpackData(pack,m_strkey))
				{
					//cout<<"CImRspChatGetcal.UnpackData fail" << endl;
					delete(pRspPack);
					break;
				}
				//cout << "IM_RSP_CHAT_GETCAL retcode: " << pRspPack->GetRetcode() << endl;

				ret = pRspPack->GetRetcode();
				delete(pRspPack);
				break;
			}
		case IM_RSP_GETBLACK:
			{
				ret = 0;
				break;
			}
		case IM_RSP_GETREVBLACK:
			{
				ret = 0;
				break;
			}
		case IM_RSP_CHAT_GETTXT:
			{
				//cout << "get IM_RSP_CHAT_GETTXT " << endl;
				CImRspChatGettxt *pRspPack = new(CImRspChatGettxt);
				if(PACK_RIGHT != pRspPack->UnpackData(pack,m_strkey))
				{
					//cout<<"CImRspChatGettxt.UnpackData fail" << endl;
					delete(pRspPack);
					break;
				}
				//cout << "IM_RSP_CHAT_GETTXT retcode: " << pRspPack->GetRetcode() << endl;
				ret = pRspPack->GetRetcode();
				delete(pRspPack);
				break;
			}
		case IM_RSP_UPDATE_UDBPROFILE:
			{
				//cout << "get IM_RSP_LOGOFF " << endl;
				CImRspUpdateUdbprofile *pRspPack = new(CImRspUpdateUdbprofile);
				if(PACK_RIGHT != pRspPack->UnpackData(pack,m_strkey))
				{
					//cout<<"CImRspUpdateUdbprofile.UnpackData fail" << endl;
					delete(pRspPack);
					break;
				}
				ret = pRspPack->GetRetcode();
				delete(pRspPack);
				break;
			}
		default:
			//cout << "There is no Handler for command: " << cmdStr << endl;
			//cout << "username:" << m_username << " password:" << m_password << endl;
			break;
	}
	//*p = pPack;
	return ret;
}

string  CWWSimulator::ReceivePack()
{
	return ReceivePack(m_socketFD);
}

string  CWWSimulator::ReceivePack(uint32_t fd)
{	
	if(fd == 0) 
	{
		cout << "recv,but fd = 0" << endl;
		return "error";
	}
	char *recvBuf=new char[MAXDATASIZE];

	string strPack;
	string strTemp;

	uint32_t recvLen = 0;
	uint32_t totalLen = 0;
	uint32_t packSize = 0;
	uint32_t storageLen;
	storageLen = m_strStorage.size();

	if(storageLen > 0)
	{
		packSize = UnPackhdr(m_strStorage);
		if(packSize<=0)
		{
			fprintf(stderr,"UnPackhdr failed fd == %d\n",fd);
			close(fd);
			delete[] recvBuf;recvBuf=NULL;
			return "error";

		}

		if(packSize <= storageLen)
		{
			strPack = m_strStorage.substr(0,packSize);
			m_strStorage = m_strStorage.substr(packSize);
			delete[] recvBuf;recvBuf=NULL;
			return strPack;
		}
	}

	m_bIsReceiving = true;

	while(m_bIsReceiving)
	{
    		do   
    		{    
			recvLen = recv(fd, recvBuf, MAXDATASIZE, 0);
    		}    
    		while(recvLen== -1 && errno == EINTR);

		if(recvLen == 0)
		{
			fprintf(stderr,"fd closed by peer! recv ret == 0, fd == %d sessionid == %s - %m\n",fd,m_verb_sessionid.c_str());
			close(fd);
			//m_bIsReceiving = false;
			break;
		}
		else if(recvLen == -1)
		{
			fprintf(stderr,"recv error!recvLen == -1, fd == %d - %m\n",fd);
			close(fd);
			//Detach();
			//m_bIsReceiving = false;
			//fprintf(stderr,"recv error! - %m");
			break;
		}

		strTemp.assign(recvBuf, recvLen);
		strTemp = m_strStorage + strTemp;

		totalLen = strTemp.size();
		packSize = UnPackhdr(strTemp);

		if(packSize == -1)//包头没有接收完整
		{
			m_strStorage = strTemp;
			strTemp.erase();
			continue;
		}

		totalLen = strTemp.size();
		if(totalLen == packSize)
		{
			strPack = strTemp;
			strTemp.erase();
			m_strStorage.erase();
		}
		else if(totalLen < packSize)
		{
			m_strStorage = strTemp;
			strTemp.erase();
			continue;
		}
		else //totalLen > packSize
		{
			strPack = strTemp.substr(0, packSize);
			m_strStorage = strTemp.substr(packSize);
			strTemp.erase();
		}
		delete[] recvBuf;recvBuf=NULL;
		return strPack;		
		//HandlePack(strPack);
	}
	delete[] recvBuf;recvBuf=NULL;
}
uint32_t CWWSimulator::UnPackhdr(string& pack)
{

	CScHead hdr;
	if(PACK_RIGHT != hdr.UnpackData(pack))
	{
		//cout << "hdr Unpack data error,In ReceivePack" << endl;
		return -1;
	}

	uint32_t packSize = hdr.SizeExt() + hdr.m_len;
	return packSize;

}

uint16_t CWWSimulator::login(string& msg)
{	
	char *cmsg = (char*)malloc(1024);
	string recvPack;
	void *ppPack;
	Connect();

	Commander(IM_REQ_CHECKVERSION);	
	//cout << "==============after send IM_REQ_CHECKVERSION get 1st pack " << endl;
	recvPack = ReceivePack();
	uint16_t ret = HandlePack(recvPack, &ppPack);
	if(ret != 0 ){
		sprintf(cmsg,"IM_REQ_CHECKVERSION failed.\nret:%d,username:%s,password:%s",ret,m_username.c_str(),m_password.c_str());
		msg = cmsg;
		free(cmsg);
		return ret;
	}

	Commander(IM_REQ_PRELOGIN);
	//cout << "==============after send IM_REQ_PRELOGIN get 1st pack " << endl;
	recvPack = ReceivePack();
	ret = HandlePack(recvPack, &ppPack);
	if(ret != 0 ){
		sprintf(cmsg,"IM_REQ_POSTLOGIN failed.\nret:%d,username:%s,password:%s",ret,m_username.c_str(),m_password.c_str());
		msg = cmsg;
		free(cmsg);
		return ret;
	}
	//cout << "==============after send IM_REQ_PRELOGIN get 2nd pack " << endl;
	recvPack = ReceivePack();
	ret = HandlePack(recvPack, &ppPack);
	if(ret != 0 ){
		sprintf(cmsg,"IM_REQ_POSTLOGIN failed.\nret:%d,username:%s,password:%s",ret,m_username.c_str(),m_password.c_str());
		msg = cmsg;
		free(cmsg);
		return ret;
	}
	//cout << "==============after send IM_REQ_PRELOGIN get 3rd pack " << endl;
	recvPack = ReceivePack();
	ret = HandlePack(recvPack, &ppPack);
	if(ret != 0 ){
		sprintf(cmsg,"IM_REQ_POSTLOGIN failed.\nret:%d,username:%s,password:%s",ret,m_username.c_str(),m_password.c_str());
		msg = cmsg;
		free(cmsg);
		return ret;
	}
	//cout << "==============after send IM_REQ_PRELOGIN get 4th pack " << endl;
	recvPack = ReceivePack();
	ret = HandlePack(recvPack, &ppPack);
	if(ret != 0 ){
		sprintf(cmsg,"IM_REQ_POSTLOGIN failed.\nret:%d,username:%s,password:%s",ret,m_username.c_str(),m_password.c_str());
		msg = cmsg;
		free(cmsg);
		return ret;
	}

	Commander(IM_REQ_POSTLOGIN);
	//cout << "==============after send IM_REQ_POSTLOGIN get 1st pack " << endl;
	recvPack = ReceivePack();
	ret = HandlePack(recvPack, &ppPack);
	if(ret != 0 ){
		sprintf(cmsg,"IM_REQ_POSTLOGIN failed.\nret:%d,username:%s,password:%s",ret,m_username.c_str(),m_password.c_str());
		msg = cmsg;
		free(cmsg);
		return ret;
	}
	//cout << "==============after send IM_REQ_POSTLOGIN get 2nd pack " << endl;
	recvPack = ReceivePack();
	ret = HandlePack(recvPack, &ppPack);
	if(ret != 0 ){
		sprintf(cmsg,"IM_REQ_POSTLOGIN failed.\nret:%d,username:%s,password:%s",ret,m_username.c_str(),m_password.c_str());
		msg = cmsg;
		free(cmsg);
		return ret;
	}
	free(cmsg);
	return ret;
}

uint16_t CWWSimulator::sendIMMessage(string& msg)
{
	char *cmsg = (char*)malloc(1024);
	void* ppPack;
	string recvPack;
	Commander(IM_REQ_SENDIMMESSAGE);
	//cout << "==============after send IM_REQ_SENDIMMESSAGE get 1st pack " << endl;
	recvPack = ReceivePack();
	
	uint16_t ret = HandlePack(recvPack, &ppPack);
	if(ret != 0 ){
		sprintf(cmsg,"IM_REQ_SENDIMMESSAGE failed.\nret:%d,username:%s,password:%s",ret,m_username.c_str(),m_password.c_str());
		msg = cmsg;
		free(cmsg);
		return ret;
	}
	free(cmsg);
	return ret;
}
/*
   变更用户状态，如隐身，参数详细定义见服务器端代码/imconstdef.h
	BaseLib/public/include
*/
uint16_t CWWSimulator::chgStatus(int basicstatus,int predefstatus,string& msg)
{
	void* ppPack;
	Commander(IM_REQ_CHGSTATUS,basicstatus,predefstatus);
	//cout << "==============after send IM_REQ_CHGSTATUS get 1st pack " << endl;
	return 0;
}
uint16_t CWWSimulator::chgStatus_recieve(string& msg)
{
	char *cmsg = (char*)malloc(1024);
	string recvPack;
	void* ppPack;
	recvPack = ReceivePack();
	uint16_t ret = HandlePack(recvPack, &ppPack);
	if(ret != 0 ){
		sprintf(cmsg,"chgstatus rsp failed.\nret:%d,username:%s,password:%s",ret,m_username.c_str(),m_password.c_str());
		msg = cmsg;
		free(cmsg);
		return ret;
	}
	free(cmsg);
	return ret;
}

uint16_t CWWSimulator::createSession(string& msg)
{
	char *cmsg = (char*)malloc(1024);
	if(!m_bIsConnected)
	{
		//cout << "before getwebsession must be login on" << endl;
	}

	void* ppPack;
	string recvPack;
	Commander(IM_REQ_GETWEB_SESSION);
	//cout << "==============after send IM_REQ_GETWEB_SESSION get 1st pack " << endl;
	recvPack = ReceivePack();
	
	uint16_t ret = HandlePack(recvPack, &ppPack);
	if(ret != 0 ){
		sprintf(cmsg,"IM_REQ_GETWEB_SESSION failed.\nret:%d,username:%s,password:%s",ret,m_username.c_str(),m_password.c_str());
		msg = cmsg;
		free(cmsg);
		return ret;
	}
	free(cmsg);
	return ret;
}

uint16_t CWWSimulator::chatPidfy(string& msg)
{
	char cmsg[512];
	void* ppPack;
	string recvPack;
	Commander(IM_REQ_CHAT_CHKVER);
	//cout << "==============after send IM_REQ_CHAT_CHKVER get 1st pack " << endl;
	recvPack = ReceivePack(m_tpfsFD);

	uint16_t ret = HandlePack(recvPack, &ppPack);
	if(ret != 0 ){
		sprintf(cmsg,"IM_REQ_POSTLOGIN failed.\nret:%d,username:%s,password:%s",ret,m_username.c_str(),m_password.c_str());
		msg = cmsg;
		return ret;
	}
	Commander(IM_REQ_CHAT_PREIDENTIFY);
	//cout << "==============after send IM_REQ_CHAT_PREIDENTIFY get 1st pack " << endl;
	recvPack = ReceivePack(m_tpfsFD);
	
	ret = HandlePack(recvPack, &ppPack);
	if(ret != 0 )
	{
		sprintf(cmsg,"IM_REQ_CHAT_CHKVER failed.\nret:%d,username:%s,password:%s",ret,m_username.c_str(),m_password.c_str());
		msg = cmsg;
		return ret;
	}
	return ret;
}

uint16_t CWWSimulator::chatPutpic(const char* picdata, string& msg)
{
	void* ppPack;
	Commander(IM_REQ_CHAT_PUTPIC, picdata);
	//cout << "==============after send IM_REQ_CHAT_PUTPIC get 1st pack " << endl;
	string recvPack = ReceivePack(m_tpfsFD);
	
	uint16_t ret = HandlePack(recvPack, &ppPack);
	if(ret != 0 ){
		char cmsg[1024];
		sprintf(cmsg,"IM_REQ_CHAT_PUTPIC failed.\nret:%d,username:%s,password:%s",ret,m_username.c_str(),m_password.c_str());
		msg = cmsg;
	}
	return ret;
}

uint16_t CWWSimulator::chatGetpic(const char* picName, string& msg)
{
	void* ppPack;
	string recvPack;
	Commander(IM_REQ_CHAT_GETPIC, picName);
	//cout << "==============after send IM_REQ_CHAT_GETPIC get 1st pack " << endl;
	recvPack = ReceivePack(m_tpfsFD);
	if(recvPack.size()<24)
	{
	  return -1;
	}
	
	uint16_t ret = HandlePack(recvPack, &ppPack);
	/*
		辛树对这个接口的返回值处理过，如果图片没找到会返回8091
		这个错误代码只针对性能测试，性能测试认为8091和0一样算成功
	*/

	if(ret != 0 && ret != 8091 )
	{
		char cmsg[1024];
	sprintf(cmsg,"IM_REQ_CHAT_GETPIC failed.\nret:%d,username:%s,password:%s",ret,m_username.c_str(),m_password.c_str());
		msg = cmsg;
		return ret;
	}
	return ret;
}

uint16_t CWWSimulator::chatGetcal(const char* fromid, const char* toid, const char* startDate, const char* endDate, string& msg)
{
	void* ppPack;
	string recvPack;
	Commander(IM_REQ_CHAT_GETCAL,fromid,toid,startDate,endDate);
	//cout << "==============after send IM_REQ_CHAT_GETCAL get 1st pack " << endl;
	recvPack = ReceivePack(m_tpfsFD);
	
	uint16_t ret = HandlePack(recvPack, &ppPack);
	if(ret != 0 )
	{
		char cmsg[256];
		sprintf(cmsg,"IM_REQ_CHAT_GETCAL failed,ret:%d,username:%s,toid:%s\n",ret,fromid,toid);
		msg = cmsg;
		return ret;
	}
	return ret;
}

uint16_t CWWSimulator::chatGettxt(const char* fromid, const char* toid, uint64_t startTime, uint64_t endTime, string& msg)
{
	char cmsg[512];
	void* ppPack;
	Commander(IM_REQ_CHAT_GETTXT, fromid, toid, startTime, endTime, 100);
	//cout << "==============after send IM_REQ_CHAT_GETTXT get 1st pack " << endl;
	string recvPack;
	recvPack = ReceivePack(m_tpfsFD);
	
	uint16_t ret = HandlePack(recvPack, &ppPack);
	if(ret != 0 ){
		sprintf(cmsg,"IM_REQ_CHAT_GETTXT failed.\nret:%d,username:%s,password:%s",ret,m_username.c_str(),m_password.c_str());
		msg = cmsg;
		return ret;
	}
	/*
	   CImRspChatGettxt *pPack;
	   do{
	   recvPack = ReceivePack(m_tpfsFD);
	   pPack = (CImRspChatGettxt *)HandlePack(recvPack);
	   }while(pPack->GetIslast() == 0);
	 */
	return ret;
}
uint16_t CWWSimulator::updateUserprofile(const char * bloodType,const char * mobileno,string& msg)
{
	char *cmsg = (char*)malloc(1024);
	void* ppPack;
	string recvPack;
	Commander(IM_RSP_UPDATE_UDBPROFILE,bloodType,mobileno);
	recvPack = ReceivePack();
	
	uint16_t ret = HandlePack(recvPack, &ppPack);
	if(ret != 0 ){
		sprintf(cmsg,"IM_RSP_UPDATE_UDBPROFILE failed.\nret:%d,username:%s,password:%s",ret,m_username.c_str(),m_password.c_str());
		msg = cmsg;
		free(cmsg);
		return ret;
	}
	free(cmsg);
	return ret;
}

void CWWSimulator::Detach(void)
{
	//char *cmsg = (char*)malloc(1024);
	//void* ppPack;
	//Commander(IM_REQ_LOGOFF);
	//string recvPack;
	//recvPack = ReceivePack();
	//uint16_t ret = HandlePack(recvPack, &ppPack);
	if(m_socketFD != -1)
	{
		close(m_socketFD);
		m_socketFD = -1;
		m_bIsConnected = false;
	}
	//if(m_tpfsFD)
	{
		close(m_tpfsFD);
	}
	//free(cmsg);
}

/*
   void CWWSimulator::StopReceiving(void)
   {
   if(m_bIsReceiving)
   {
   Detach();
   pthread_join(m_recvThreadID, NULL);
   }
   }
 */
