#ifndef __IMSC_CMD_2STR_H__
#define __IMSC_CMD_2STR_H__

#include	<string>
#include        <sstream>

using namespace std;

namespace IMSC_cmd2STR
{
	inline string IMSC_REQUEST_2STR(uint32_t cmd)
	{
		switch(cmd)
		{
			case 0x1000001: return "IM_HELTH_CHECK               "; 
			case 0x1000002: return "IM_REQ_CHECKVERSION          "; 
			case 0x1000003: return "IM_REQ_LOGIN                 "; 
			case 0x1000004: return "IM_REQ_LOGIN_AGAIN           "; 
			case 0x1000005: return "IM_REQ_POSTLOGIN             "; 
			case 0x1000006: return "IM_REQ_RELOGIN               "; 
			case 0x1000007: return "IM_REQ_LOGOFF                "; 
			case 0x1000008: return "IM_REQ_GETGROUP              "; 
			case 0x1000009: return "IM_REQ_ADDGROUP              "; 
			case 0x100000a: return "IM_REQ_CHGGROUP              "; 
			case 0x100000b: return "IM_REQ_DELGROUP              "; 
			case 0x100000c: return "IM_REQ_CHGUSERVERIFY         "; 
			case 0x100000d: return "IM_REQ_GETCONTACT            "; 
			case 0x100000e: return "IM_REQ_ADDCONTACT            "; 
			case 0x100000f: return "IM_REQ_CHGCONTACT            "; 
			case 0x1000010: return "IM_REQ_DELCONTACT            "; 
			case 0x1000011: return "IM_REQ_ADDCNTACK             "; 
			case 0x1000012: return "IM_REQ_GETCNTDETAIL          "; 
			case 0x1000013: return "IM_REQ_CHGUSERDETAIL         "; 
			case 0x1000014: return "IM_REQ_GETCNTMEMO            "; 
			case 0x1000015: return "IM_REQ_CHGCNTMEMO            "; 
			case 0x1000016: return "IM_REQ_GETBLACK              "; 
			case 0x1000017: return "IM_REQ_ADDBLACK              "; 
			case 0x1000018: return "IM_REQ_DELBLACK              "; 
			case 0x1000019: return "IM_REQ_GETREVBLACK           "; 
			case 0x100001a: return "IM_REQ_GETUSERINFO           "; 
			case 0x100001b: return "IM_REQ_GETCNTSTATUS          "; 
			case 0x100001c: return "IM_REQ_CHGSTATUS             "; 
			case 0x100001d: return "IM_REQ_GETOFFLINEMSG         "; 
			case 0x100001e: return "IM_REQ_ADDOFFLINEMSG         "; 
			case 0x100001f: return "IM_REQ_DELOFFLINEMSG         "; 
			case 0x1000020: return "IM_REQ_GETSYSTEMMSG          "; 
			case 0x1000021: return "IM_REQ_SENDIMMESSAGE         "; 
			case 0x1000022: return "IM_REQ_SENDMULTIUSERMSG      "; 
			case 0x1000023: return "IM_REQ_UPGGENERALCONTACT     "; 
			case 0x1000024: return "IM_REQ_GETTOOLSPROFILE       "; 
			case 0x1000025: return "IM_REQ_CHGTOOLSPROFILE       "; 
			case 0x1000026: return "IM_REQ_PEERINFO              "; 
			case 0x1000027: return "IM_REQ_SUBSCRIBE_INFO        "; 
			case 0x1000028: return "IM_REQ_DISUBSCRIBE_INFO      "; 
			case 0x1000029: return "IM_REQ_CHGPORTRAIT           "; 
			case 0x100002a: return "IM_REQ_CHGSIGNATURE          "; 
			case 0x100002b: return "IM_REQ_ADDBINDING            "; 
			case 0x100002c: return "IM_REQ_CHGBINDING            "; 
			case 0x100002d: return "IM_REQ_DELBINDING            "; 
			case 0x100002e: return "IM_REQ_GETBINDING            "; 
			case 0x100002f: return "IM_REQ_CANKEYSEARCH          "; 
			case 0x1000030: return "IM_REQ_GETFTSADDR            "; 
			case 0x1000031: return "IM_REQ_GETUSERSSTATUS        "; 
			case 0x1000032: return "IM_REQ_PRELOGIN              "; 
			case 0x1000033: return "IM_REQ_PRELOGIN_AGAIN        "; 
			case 0x1000034: return "IM_REQ_GETWEB_SESSION        "; 
			case 0x1000035: return "IM_REQ_USERUDBPROFILE        "; 
			case 0x1000036: return "IM_REQ_PEER_VERIFY_CONFIG    "; 
			case 0x1000037: return "IM_REQ_GET_PWDTOKEN          "; 
			case 0x1000038: return "IM_REQ_UPDATE_UDBPROFILE     "; 
			case 0x1000039: return "IM_REQ_GET_DEGREE            "; 
			case 0x1000040: return "IM_REQ_CHECK_AUTHCODE        "; 
			case 0x1000041: return "IM_REQ_PRELOGIN1	     ";
			case 0x1000042: return "IM_REQ_LOGIN2		     "; 
			case 0x1000050: return "IM_REQ_ADDCONTACT_NEW        "; 
			case 0x1000051: return "IM_REQ_ADDCNTACK_NEW         "; 
			case 0x1001001: return "IM_REQ_HELP_LOGIN_V5         "; 
			case 0x1001002: return "IM_REQ_HELP_CHG_SRV_MODE_V5  "; 
			case 0x1001006: return "IM_REQ_HELP_GET_CHILDS_V5    "; 
			case 0x1001041: return "IM_REQ_HELP_LOGIN            "; 
			case 0x1001042: return "IM_REQ_HELP_CHG_SRV_MODE     "; 
			case 0x1001043: return "IM_REQ_HELP_SET_SHARE_CID    "; 
			case 0x1001044: return "IM_REQ_HELP_GET_SHARE_CID    "; 
			case 0x1001045: return "IM_REQ_HELP_GET_CHILD_ONLINE "; 
			case 0x1001046: return "IM_REQ_HELP_GET_ONLINECHILDS "; 
			case 0x1001047: return "IM_REQ_HELP_GET_SERVICES     "; 
			case 0x1001048: return "IM_REQ_HELP_GET_BIND_TO      "; 
			case 0x1001049: return "IM_REQ_HELP_CHG_SERVICE_NUM  "; 
			case 0x1001050: return "IM_REQ_HELP_GET_BUDDY_STATUS "; 
			case 0x100005e: return "IM_REQ_SEND_WATCH_INFO       "; 
			case 0x1000060: return "IM_REQ_GET_SIP_SESSIONID     "; 
			case 0x1000061: return "IM_REQ_SEARCHUSER            "; 
			case 0x1000062: return "IM_REQ_SEARCHUSEREX          "; 
			case 0x1200000: return "CASC_REQ_GOODSSEARCH         "; 
			case 0x1000070: return "IM_REQ_EHELP_LOGIN           "; 
			case 0x1000071: return "IM_REQ_EHELP_GET_BUDDYS      "; 
			case 0x1000072: return "IM_REQ_EHELP_SEND_MSG        "; 
			case 0x1000073: return "IM_REQ_EHELP_SEND_CMD        "; 
			case 0x1000074: return "IM_REQ_EHELP_CHG_SRV_MODE    "; 
			case 0x1000075: return "IM_REQ_EHELP_FORWARD_USER    "; 
			case 0x1000076: return "IM_REQ_EHELP_CLOSE_SESSION   "; 
			case 0x1000077: return "IM_REQ_EHELP_MSG_LOG         "; 
			case 0x1000078: return "IM_REQ_EHELP_GET_FORWARD     "; 
			case 0x1000079: return "IM_REQ_EHELP_DUNNY           "; 
			case 0x1000090: return "IM_REQ_GETAPPADDR	     ";
			case 0x1000100: return "IM_REQ_GETWEBBINDING         ";
			case 0x1000101: return "IM_REQ_LOGIN_OPENIM          ";
			case 0x1000102: return "IM_REQ_SETBINDING            ";
			case 0x1000103: return "IM_REQ_UNBIND                ";
			case 0x1000200: return "IM_REQ_CHAT_IDENTIFY	     ";
			case 0x1000201:	return "IM_REQ_CHAT_CLOSE            ";
			case 0x1000202:	return "IM_REQ_CHAT_DELTEXT          ";
			case 0x1000203:	return "IM_REQ_CHAT_GETTXT           ";
			case 0x1000204:	return "IM_REQ_CHAT_QUERYPICS        ";
			case 0x1000205:	return "IM_REQ_CHAT_PUTPIC           ";
			case 0x1000206:	return "IM_REQ_CHAT_GETPIC           ";
			case 0x1000207:	return "IM_REQ_CHAT_GETCAL           ";
			case 0x1000208:	return "IM_REQ_CHAT_SETTXT           ";
			case 0x1000209:	return "IM_REQ_CHAT_CHKVER           ";
			case 0x1000210:	return "IM_REQ_CHAT_PREIDENTIFY      ";
			default:	return "";
		
		}
	}

	inline string IMSC_RESPONSE_2STR(uint32_t cmd)
	{
		switch(cmd)
		{
			case 0x1010002: return "IM_RSP_CHECKVERSION         "; 
			case 0x1010003: return "IM_RSP_LOGIN                ";
			case 0x1010004: return "IM_RSP_LOGIN_AGAIN          ";
			case 0x1010006: return "IM_RSP_RELOGIN              ";
			case 0x1010007: return "IM_RSP_LOGOFF               ";
			case 0x1010008: return "IM_RSP_GETGROUP             ";
			case 0x1010009: return "IM_RSP_ADDGROUP             ";
			case 0x101000a: return "IM_RSP_CHGGROUP             ";
			case 0x101000b: return "IM_RSP_DELGROUP             ";
			case 0x101000c: return "IM_RSP_CHGUSERVERIFY        ";
			case 0x101000d: return "IM_RSP_GETCONTACT           ";
			case 0x101000e: return "IM_RSP_ADDCONTACT           ";
			case 0x101000f: return "IM_RSP_CHGCONTACT           ";
			case 0x1010010: return "IM_RSP_DELCONTACT           ";
			case 0x1010011: return "IM_RSP_ADDCNTACK            ";
			case 0x1010012: return "IM_RSP_GETCNTDETAIL         ";
			case 0x1010013: return "IM_RSP_CHGUSERDETAIL        ";
			case 0x1010014: return "IM_RSP_GETCNTMEMO           ";
			case 0x1010015: return "IM_RSP_CHGCNTMEMO           ";
			case 0x1010016: return "IM_RSP_GETBLACK             ";
			case 0x1010017: return "IM_RSP_ADDBLACK             ";
			case 0x1010018: return "IM_RSP_DELBLACK             ";
			case 0x1010019: return "IM_RSP_GETREVBLACK          ";
			case 0x101001a: return "IM_RSP_GETUSERINFO          ";
			case 0x101001b: return "IM_RSP_GETCNTSTATUS         ";
			case 0x101001d: return "IM_RSP_GETOFFLINEMSG        ";
			case 0x101001f: return "IM_RSP_DELOFFLINEMSG        ";
			case 0x1010020: return "IM_RSP_GETSYSTEMMSG         ";
			case 0x1010023: return "IM_RSP_UPGGENERALCONTACT    ";
			case 0x1010024: return "IM_RSP_GETTOOLSPROFILE      ";
			case 0x1010025: return "IM_RSP_CHGTOOLSPROFILE      ";
			case 0x1010026: return "IM_RSP_PEERINFO             ";
			case 0x1010027: return "IM_RSP_SUBSCRIBE_INFO       ";
			case 0x101002a: return "IM_RSP_CHGSIGNATURE         ";
			case 0x101002b: return "IM_RSP_ADDBINDING           ";
			case 0x101002c: return "IM_RSP_CHGBINDING           ";
			case 0x101002d: return "IM_RSP_DELBINDING           ";
			case 0x101002e: return "IM_RSP_GETBINDING           ";
			case 0x1010030: return "IM_RSP_GETFTSADDR           ";
			case 0x1010031: return "IM_RSP_GETUSERSSTATUS       ";
			case 0x1010034: return "IM_RSP_GETWEB_SESSION       ";
			case 0x1010035: return "IM_RSP_USERUDBPROFILE       ";
			case 0x1010036: return "IM_RSP_PEER_VERIFY_CONFIG   ";
			case 0x1010037: return "IM_RSP_GET_PWDTOKEN         ";
			case 0x1010038: return "IM_RSP_UPDATE_UDBPROFILE    ";
			case 0x1010039: return "IM_RSP_GET_DEGREE           ";
			case 0x1010040: return "IM_RSP_CHECK_AUTHCODE       ";
			case 0x1010042: return "IM_RSP_LOGIN2		    ";
			case 0x1010050: return "IM_RSP_ADDCONTACT_NEW       ";
			case 0x1010051: return "IM_RSP_ADDCNTACK_NEW        ";
			case 0x1010001: return "IM_RSP_HELP_LOGIN_V5        ";
			//case 0x1010002: return "IM_RSP_HELP_CHG_SRV_MODE_V5 ";
			//case 0x1010006: return "IM_RSP_HELP_GET_CHILDS_V5   ";
			case 0x1010041: return "IM_RSP_HELP_LOGIN           ";
			//case 0x1010042: return "IM_RSP_HELP_CHG_SRV_MODE    ";
			case 0x1010043: return "IM_RSP_HELP_SET_SHARE_CID   ";
			case 0x1010044: return "IM_RSP_HELP_GET_SHARE_CID   ";
			case 0x1010045: return "IM_RSP_HELP_GET_CHILD_ONLINE";
			case 0x1010046: return "IM_RSP_HELP_GET_ONLINECHILDS";
			case 0x1010047: return "IM_RSP_HELP_GET_SERVICES    ";
			case 0x1010048: return "IM_RSP_HELP_GET_BIND_TO     ";
			case 0x1010049: return "IM_RSP_HELP_CHG_SERVICE_NUM ";
			//case 0x1010050: return "IM_RSP_HELP_GET_BUDDY_STATUS";
			case 0x1010060: return "IM_RSP_GET_SIP_SESSIONID    ";
			case 0x1010061: return "IM_RSP_SEARCHUSER           ";
			case 0x1010062: return "IM_RSP_SEARCHUSEREX         ";
			case 0x1201000: return "CASC_RSP_GOODSSEARCH        ";
			case 0x1010070: return "IM_RSP_EHELP_LOGIN          ";
			case 0x1010071: return "IM_RSP_EHELP_GET_BUDDYS     ";
			case 0x1010072: return "IM_RSP_EHELP_SEND_MSG       ";
			case 0x1010073: return "IM_RSP_EHELP_SEND_CMD       ";
			case 0x1010074: return "IM_RSP_EHELP_CHG_SRV_MODE   ";
			case 0x1010075: return "IM_RSP_EHELP_FORWARD_USER   ";
			case 0x1010076: return "IM_RSP_EHELP_CLOSE_SESSION  ";
			case 0x1010077: return "IM_RSP_EHELP_MSG_LOG        ";
			case 0x1010078: return "IM_RSP_EHELP_GET_FORWARD    ";
			case 0x1010079: return "IM_RSP_EHELP_NOTIFY_MSG     ";
			case 0x1010090: return "IM_RSP_GETAPPADDR	    ";
			case 0x1010100: return "IM_RSP_GETWEBBINDING        ";
			case 0x1010101: return "IM_RSP_LOGIN_OPENIM         ";
			case 0x1010102: return "IM_RSP_SETBINDING           ";
			case 0x1010103: return "IM_RSP_UNBIND               ";
			case 0x1010200: return "IM_RSP_CHAT_IDENTIFY        ";
			case 0x1010201: return "IM_RSP_CHAT_CLOSE           ";
			case 0x1010202: return "IM_RSP_CHAT_DELTEXT         ";
			case 0x1010203: return "IM_RSP_CHAT_GETTXT          ";
			case 0x1010204: return "IM_RSP_CHAT_QUERYPICS       ";
			case 0x1010205: return "IM_RSP_CHAT_PUTPIC          ";
			case 0x1010206: return "IM_RSP_CHAT_GETPIC          ";
			case 0x1010207: return "IM_RSP_CHAT_GETCAL          ";
			case 0x1010208: return "IM_RSP_CHAT_SETTXT          ";
			case 0x1010209: return "IM_RSP_CHAT_CHKVER          ";
			case 0x1010210: return "IM_RSP_CHAT_PREIDENTIFY     ";
			default:	return "";
		}
	}

	inline string IMSC_NOTIF_2STR(uint32_t cmd)
	{
		switch(cmd)
		{
			case 0x1020004: return "IM_NTF_LOGIN_AGAIN      "; 
			case 0x1020005: return "IM_NTF_FORCEDISCONNECT  ";
			case 0x102000f: return "IM_NTF_STATUS           ";
			case 0x1020010: return "IM_NTF_IMMESSAGE        ";
			case 0x1020011: return "IM_NTF_SYSTEMMESSAGE    ";
			case 0x102002b: return "IM_NTF_OPERATIONTIP     ";
			case 0x102002c: return "IM_NTF_UPDATE_USREXTINFO";
			case 0x102002d: return "IM_NTF_SUBCRIBE_MSG     ";
			case 0x1020030: return "IM_NTF_REFRESH_CONTACT  ";
			case 0x1020031: return "IM_NTF_FEEDS            ";
			case 0x1020032: return "IM_NTF_USER_SNSINFO     ";
			case 0x1020033: return "IM_NTF_RECENT           ";
			case 0x1020040: return "IM_NTF_NEED_AUTHCODE    ";
			case 0x102005d: return "IM_NTF_EXTINFO_MSG      ";
			case 0x102005e: return "IM_NTF_WATCH_INFO       ";
			case 0x1020012: return "IM_NTF_SYSTEMMAPMESSAGE ";
			case 0x1020100: return "IM_NTF_WEBSYSMESSAGE    ";
			case 0x1020101: return "IM_NTF_WEBUSERMESSAGE   ";
			case 0x1020105: return "IM_NTF_UNBIND_DISCONNECT";
			case 0x1020106: return "IM_NTF_TAOBAOID_KICKED  ";

			default: return "";
		}
	}

	inline string ALI_IM_P2P_MSG_TYPE_2STR(uint32_t cmd)
	{
		switch(cmd)
		{
			case 0  : return "ALI_IM_TEXT           "; 
			case 0x1: return "ALI_IM_BUZZ           ";		
			case 0x2: return "ALI_IM_P2P            ";
			case 0x3: return "ALI_IM_AUTO_REPLY     ";
			case 0x4: return "ALI_IM_MSG_ACK        ";
			case 0x5: return "ALI_IM_CONTACT        ";
			case 0x6: return "ALI_IM_TYPING_NOTIFY  ";
			case 0x7: return "ALI_IM_GROUP_BROADCAST";
			default: return "";
		}
	}


	inline string ADDCONTACT_OPERATE_2STR(uint32_t cmd)
	{
		switch(cmd)
		{
			case 0x301: return "IMM_CONTACT_ADDED           "; 
			case 0x302: return "IMM_CONTACT_IGNOREUSER_ADDED";
			case 0x303: return "IMM_CONTACT_IGNOREUSER_DELED";
			case 0x310: return "IMM_CONTACT_ASKADD_REQ      ";
			case 0x311: return "IMM_CONTACT_ASKADD_NO       ";
			case 0x312: return "IMM_CONTACT_ASKADD_YES      ";
			default: return "";
		}
	}

	inline string IMSC_CMD_2STR(uint32_t cmd)
	{
		string str;
		str = IMSC_REQUEST_2STR(cmd);
		if(!str.empty()) return str;
		str = IMSC_RESPONSE_2STR(cmd);
		if(!str.empty()) return str;
		str = IMSC_NOTIF_2STR(cmd);
		if(!str.empty()) return str;
		str = ALI_IM_P2P_MSG_TYPE_2STR(cmd);
		if(!str.empty()) return str;
		str = ADDCONTACT_OPERATE_2STR(cmd);
		if(!str.empty()) 
		{
			return str;
		}
		else
		{
			ostringstream ss;
			ss << std::hex<< std::showbase<< cmd;
			string strcmd  = ss.str();
			return strcmd;
		}
	}
}
#endif
