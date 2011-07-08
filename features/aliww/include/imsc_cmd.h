/*---------------------------------------------------------------------------
// Filename:        imsc_cmd.h
// Date:            2011-04-27 13:36:21
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __IMSC_CMD_H__
#define __IMSC_CMD_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"

using namespace std;

enum IMSC_REQUEST
{
    IM_HELTH_CHECK              = 0x1000001,
    IM_REQ_CHECKVERSION         = 0x1000002,
    IM_REQ_LOGIN                = 0x1000003,
    IM_REQ_LOGIN_AGAIN          = 0x1000004,
    IM_REQ_POSTLOGIN            = 0x1000005,
    IM_REQ_RELOGIN              = 0x1000006,
    IM_REQ_LOGOFF               = 0x1000007,
    IM_REQ_GETGROUP             = 0x1000008,
    IM_REQ_ADDGROUP             = 0x1000009,
    IM_REQ_CHGGROUP             = 0x100000a,
    IM_REQ_DELGROUP             = 0x100000b,
    IM_REQ_CHGUSERVERIFY        = 0x100000c,
    IM_REQ_GETCONTACT           = 0x100000d,
    IM_REQ_ADDCONTACT           = 0x100000e,
    IM_REQ_CHGCONTACT           = 0x100000f,
    IM_REQ_DELCONTACT           = 0x1000010,
    IM_REQ_ADDCNTACK            = 0x1000011,
    IM_REQ_GETCNTDETAIL         = 0x1000012,
    IM_REQ_CHGUSERDETAIL        = 0x1000013,
    IM_REQ_GETCNTMEMO           = 0x1000014,
    IM_REQ_CHGCNTMEMO           = 0x1000015,
    IM_REQ_GETBLACK             = 0x1000016,
    IM_REQ_ADDBLACK             = 0x1000017,
    IM_REQ_DELBLACK             = 0x1000018,
    IM_REQ_GETREVBLACK          = 0x1000019,
    IM_REQ_GETUSERINFO          = 0x100001a,
    IM_REQ_GETCNTSTATUS         = 0x100001b,
    IM_REQ_CHGSTATUS            = 0x100001c,
    IM_REQ_GETOFFLINEMSG        = 0x100001d,
    IM_REQ_ADDOFFLINEMSG        = 0x100001e,
    IM_REQ_DELOFFLINEMSG        = 0x100001f,
    IM_REQ_GETSYSTEMMSG         = 0x1000020,
    IM_REQ_SENDIMMESSAGE        = 0x1000021,
    IM_REQ_SENDMULTIUSERMSG     = 0x1000022,
    IM_REQ_UPGGENERALCONTACT    = 0x1000023,
    IM_REQ_GETTOOLSPROFILE      = 0x1000024,
    IM_REQ_CHGTOOLSPROFILE      = 0x1000025,
    IM_REQ_PEERINFO             = 0x1000026,
    IM_REQ_SUBSCRIBE_INFO       = 0x1000027,
    IM_REQ_DISUBSCRIBE_INFO     = 0x1000028,
    IM_REQ_CHGPORTRAIT          = 0x1000029,
    IM_REQ_CHGSIGNATURE         = 0x100002a,
    IM_REQ_ADDBINDING           = 0x100002b,
    IM_REQ_CHGBINDING           = 0x100002c,
    IM_REQ_DELBINDING           = 0x100002d,
    IM_REQ_GETBINDING           = 0x100002e,
    IM_REQ_CANKEYSEARCH         = 0x100002f,
    IM_REQ_GETFTSADDR           = 0x1000030,
    IM_REQ_GETUSERSSTATUS       = 0x1000031,
    IM_REQ_PRELOGIN             = 0x1000032,
    IM_REQ_PRELOGIN_AGAIN       = 0x1000033,
    IM_REQ_GETWEB_SESSION       = 0x1000034,
    IM_REQ_USERUDBPROFILE       = 0x1000035,
    IM_REQ_PEER_VERIFY_CONFIG   = 0x1000036,
    IM_REQ_GET_PWDTOKEN         = 0x1000037,
    IM_REQ_UPDATE_UDBPROFILE    = 0x1000038,
    IM_REQ_GET_DEGREE           = 0x1000039,
    IM_REQ_CHECK_AUTHCODE       = 0x1000040,
    IM_REQ_PRELOGIN1            = 0x1000041,
    IM_REQ_LOGIN2               = 0x1000042,
    IM_REQ_ADDCONTACT_NEW       = 0x1000050,
    IM_REQ_ADDCNTACK_NEW        = 0x1000051,
    IM_REQ_HELP_LOGIN_V5        = 0x1001001,
    IM_REQ_HELP_CHG_SRV_MODE_V5 = 0x1001002,
    IM_REQ_HELP_GET_CHILDS_V5   = 0x1001006,
    IM_REQ_HELP_LOGIN           = 0x1001041,
    IM_REQ_HELP_CHG_SRV_MODE    = 0x1001042,
    IM_REQ_HELP_SET_SHARE_CID   = 0x1001043,
    IM_REQ_HELP_GET_SHARE_CID   = 0x1001044,
    IM_REQ_HELP_GET_CHILD_ONLINE= 0x1001045,
    IM_REQ_HELP_GET_ONLINECHILDS= 0x1001046,
    IM_REQ_HELP_GET_SERVICES    = 0x1001047,
    IM_REQ_HELP_GET_BIND_TO     = 0x1001048,
    IM_REQ_HELP_CHG_SERVICE_NUM = 0x1001049,
    IM_REQ_HELP_GET_BUDDY_STATUS= 0x1001050,
    IM_REQ_SEND_WATCH_INFO      = 0x100005e,
    IM_REQ_GET_SIP_SESSIONID    = 0x1000060,
    IM_REQ_SEARCHUSER           = 0x1000061,
    IM_REQ_SEARCHUSEREX         = 0x1000062,
    CASC_REQ_GOODSSEARCH        = 0x12000001,
    CASC_REQ_GOODSSEARCHEX      = 0x12000002,
    CASC_REQ_WW_MAINSEARCH      = 0x12000003,
    CASC_REQ_ESEXPANDTAB        = 0x12000101,
    CASC_REQ_SEND_ESEVAL        = 0x12000102,
    CASC_REQ_GETCNTLIST         = 0x12000103,
    CASC_REQ_WWCARD_INFO        = 0x12000201,
    CASC_REQ_WWCARD_LEVEL       = 0x12000202,
    CASC_REQ_WWCARD_SNS         = 0x12000203,
    CASC_REQ_WWCARD_EVALUATE    = 0x12000204,
    CASC_REQ_WWCARD_FAVORITE    = 0x12000205,
    CASC_REQ_WWCARD_XML         = 0x12000206,
    CASC_REQ_TRADE_LIST         = 0x12000301,
    CASC_REQ_TRADE_INFO         = 0x12000302,
    CASC_REQ_AUTH_SHELLCMD      = 0x12000401,
    CASC_REQ_SITE_APP           = 0x12000601,
    CASC_REQ_GET_USERCRINFO     = 0x12000701,
    CASC_REQ_SET_USERCRINFO     = 0x12000702,
    IM_REQ_EHELP_LOGIN          = 0x1000070,
    IM_REQ_EHELP_GET_BUDDYS     = 0x1000071,
    IM_REQ_EHELP_SEND_MSG       = 0x1000072,
    IM_REQ_EHELP_SEND_CMD       = 0x1000073,
    IM_REQ_EHELP_CHG_SRV_MODE   = 0x1000074,
    IM_REQ_EHELP_FORWARD_USER   = 0x1000075,
    IM_REQ_EHELP_CLOSE_SESSION  = 0x1000076,
    IM_REQ_EHELP_MSG_LOG        = 0x1000077,
    IM_REQ_EHELP_GET_FORWARD    = 0x1000078,
    IM_REQ_EHELP_DUNNY          = 0x1000079,
    IM_REQ_GETAPPADDR           = 0x1000090,
    IM_REQ_CHAT_IDENTIFY        = 0x1000200,
    IM_REQ_CHAT_CLOSE           = 0x1000201,
    IM_REQ_CHAT_DELTEXT         = 0x1000202,
    IM_REQ_CHAT_GETTXT          = 0x1000203,
    IM_REQ_CHAT_QUERYPICS       = 0x1000204,
    IM_REQ_CHAT_PUTPIC          = 0x1000205,
    IM_REQ_CHAT_GETPIC          = 0x1000206,
    IM_REQ_CHAT_GETCAL          = 0x1000207,
    IM_REQ_CHAT_SETTXT          = 0x1000208,
    IM_REQ_CHAT_CHKVER          = 0x1000209,
    IM_REQ_CHAT_PREIDENTIFY     = 0x1000210,

};

enum IMSC_RESPONSE
{
    IM_RSP_CHECKVERSION         = 0x1010002,
    IM_RSP_LOGIN                = 0x1010003,
    IM_RSP_LOGIN_AGAIN          = 0x1010004,
    IM_RSP_RELOGIN              = 0x1010006,
    IM_RSP_LOGOFF               = 0x1010007,
    IM_RSP_GETGROUP             = 0x1010008,
    IM_RSP_ADDGROUP             = 0x1010009,
    IM_RSP_CHGGROUP             = 0x101000a,
    IM_RSP_DELGROUP             = 0x101000b,
    IM_RSP_CHGUSERVERIFY        = 0x101000c,
    IM_RSP_GETCONTACT           = 0x101000d,
    IM_RSP_ADDCONTACT           = 0x101000e,
    IM_RSP_CHGCONTACT           = 0x101000f,
    IM_RSP_DELCONTACT           = 0x1010010,
    IM_RSP_ADDCNTACK            = 0x1010011,
    IM_RSP_GETCNTDETAIL         = 0x1010012,
    IM_RSP_CHGUSERDETAIL        = 0x1010013,
    IM_RSP_GETCNTMEMO           = 0x1010014,
    IM_RSP_CHGCNTMEMO           = 0x1010015,
    IM_RSP_GETBLACK             = 0x1010016,
    IM_RSP_ADDBLACK             = 0x1010017,
    IM_RSP_DELBLACK             = 0x1010018,
    IM_RSP_GETREVBLACK          = 0x1010019,
    IM_RSP_GETUSERINFO          = 0x101001a,
    IM_RSP_GETCNTSTATUS         = 0x101001b,
    IM_RSP_GETOFFLINEMSG        = 0x101001d,
    IM_RSP_DELOFFLINEMSG        = 0x101001f,
    IM_RSP_GETSYSTEMMSG         = 0x1010020,
    IM_RSP_UPGGENERALCONTACT    = 0x1010023,
    IM_RSP_GETTOOLSPROFILE      = 0x1010024,
    IM_RSP_CHGTOOLSPROFILE      = 0x1010025,
    IM_RSP_PEERINFO             = 0x1010026,
    IM_RSP_SUBSCRIBE_INFO       = 0x1010027,
    IM_RSP_CHGSIGNATURE         = 0x101002a,
    IM_RSP_ADDBINDING           = 0x101002b,
    IM_RSP_CHGBINDING           = 0x101002c,
    IM_RSP_DELBINDING           = 0x101002d,
    IM_RSP_GETBINDING           = 0x101002e,
    IM_RSP_GETFTSADDR           = 0x1010030,
    IM_RSP_GETUSERSSTATUS       = 0x1010031,
    IM_RSP_GETWEB_SESSION       = 0x1010034,
    IM_RSP_USERUDBPROFILE       = 0x1010035,
    IM_RSP_PEER_VERIFY_CONFIG   = 0x1010036,
    IM_RSP_GET_PWDTOKEN         = 0x1010037,
    IM_RSP_UPDATE_UDBPROFILE    = 0x1010038,
    IM_RSP_GET_DEGREE           = 0x1010039,
    IM_RSP_CHECK_AUTHCODE       = 0x1010040,
    IM_RSP_LOGIN2               = 0x1010042,
    IM_RSP_ADDCONTACT_NEW       = 0x1010050,
    IM_RSP_ADDCNTACK_NEW        = 0x1010051,
    IM_RSP_HELP_LOGIN_V5        = 0x1010001,
    IM_RSP_HELP_CHG_SRV_MODE_V5 = 0x1010002,
    IM_RSP_HELP_GET_CHILDS_V5   = 0x1010006,
    IM_RSP_HELP_LOGIN           = 0x1010041,
    IM_RSP_HELP_CHG_SRV_MODE    = 0x1010042,
    IM_RSP_HELP_SET_SHARE_CID   = 0x1010043,
    IM_RSP_HELP_GET_SHARE_CID   = 0x1010044,
    IM_RSP_HELP_GET_CHILD_ONLINE= 0x1010045,
    IM_RSP_HELP_GET_ONLINECHILDS= 0x1010046,
    IM_RSP_HELP_GET_SERVICES    = 0x1010047,
    IM_RSP_HELP_GET_BIND_TO     = 0x1010048,
    IM_RSP_HELP_CHG_SERVICE_NUM = 0x1010049,
    IM_RSP_HELP_GET_BUDDY_STATUS= 0x1010050,
    IM_RSP_GET_SIP_SESSIONID    = 0x1010060,
    IM_RSP_SEARCHUSER           = 0x1010061,
    IM_RSP_SEARCHUSEREX         = 0x1010062,
    CASC_RSP_GOODSSEARCH        = 0x12010001,
    CASC_RSP_GOODSSEARCHEX      = 0x12010002,
    CASC_RSP_WW_MAINSEARCH      = 0x12010003,
    CASC_RSP_ESEXPANDTAB        = 0x12010101,
    CASC_RSP_SEND_ESEVAL        = 0x12010102,
    CASC_RSP_GETCNTLIST         = 0x12010103,
    CASC_RSP_WWCARD_INFO        = 0x12010201,
    CASC_RSP_WWCARD_LEVEL       = 0x12010202,
    CASC_RSP_WWCARD_SNS         = 0x12010203,
    CASC_RSP_WWCARD_EVALUATE    = 0x12010204,
    CASC_RSP_WWCARD_FAVORITE    = 0x12010205,
    CASC_RSP_WWCARD_XML         = 0x12010206,
    CASC_RSP_TRADE_LIST         = 0x12010301,
    CASC_RSP_TRADE_INFO         = 0x12010302,
    CASC_RSP_AUTH_SHELLCMD      = 0x12010401,
    CASC_RSP_SITE_APP           = 0x12010601,
    CASC_RSP_GET_USERCRINFO     = 0x12010701,
    CASC_RSP_SET_USERCRINFO     = 0x12010702,
    IM_RSP_EHELP_LOGIN          = 0x1010070,
    IM_RSP_EHELP_GET_BUDDYS     = 0x1010071,
    IM_RSP_EHELP_SEND_MSG       = 0x1010072,
    IM_RSP_EHELP_SEND_CMD       = 0x1010073,
    IM_RSP_EHELP_CHG_SRV_MODE   = 0x1010074,
    IM_RSP_EHELP_FORWARD_USER   = 0x1010075,
    IM_RSP_EHELP_CLOSE_SESSION  = 0x1010076,
    IM_RSP_EHELP_MSG_LOG        = 0x1010077,
    IM_RSP_EHELP_GET_FORWARD    = 0x1010078,
    IM_RSP_EHELP_NOTIFY_MSG     = 0x1010079,
    IM_RSP_GETAPPADDR           = 0x1010090,
    IM_RSP_CHAT_IDENTIFY        = 0x1010200,
    IM_RSP_CHAT_CLOSE           = 0x1010201,
    IM_RSP_CHAT_DELTEXT         = 0x1010202,
    IM_RSP_CHAT_GETTXT          = 0x1010203,
    IM_RSP_CHAT_QUERYPICS       = 0x1010204,
    IM_RSP_CHAT_PUTPIC          = 0x1010205,
    IM_RSP_CHAT_GETPIC          = 0x1010206,
    IM_RSP_CHAT_GETCAL          = 0x1010207,
    IM_RSP_CHAT_SETTXT          = 0x1010208,
    IM_RSP_CHAT_CHKVER          = 0x1010209,
    IM_RSP_CHAT_PREIDENTIFY     = 0x1010210,

};

enum IMSC_NOTIFY
{
    IM_NTF_LOGIN_AGAIN          = 0x1020004,
    IM_NTF_FORCEDISCONNECT      = 0x1020005,
    IM_NTF_STATUS               = 0x102000f,
    IM_NTF_IMMESSAGE            = 0x1020010,
    IM_NTF_SYSTEMMESSAGE        = 0x1020011,
    IM_NTF_OPERATIONTIP         = 0x102002b,
    IM_NTF_UPDATE_USREXTINFO    = 0x102002c,
    IM_NTF_SUBCRIBE_MSG         = 0x102002d,
    IM_NTF_REFRESH_CONTACT      = 0x1020030,
    IM_NTF_FEEDS                = 0x1020031,
    IM_NTF_USER_SNSINFO         = 0x1020032,
    IM_NTF_RECENT               = 0x1020033,
    IM_NTF_NEED_AUTHCODE        = 0x1020040,
    IM_NTF_EXTINFO_MSG          = 0x102005d,
    IM_NTF_WATCH_INFO           = 0x102005e,
    IM_NTF_SYSTEMMAPMESSAGE     = 0x1020012,

};

enum ALI_IM_P2P_MSG_TYPE
{
    ALI_IM_TEXT                 = 0,
    ALI_IM_BUZZ                 = 0x1,
    ALI_IM_P2P                  = 0x2,
    ALI_IM_AUTO_REPLY           = 0x3,
    ALI_IM_MSG_ACK              = 0x4,
    ALI_IM_CONTACT              = 0x5,
    ALI_IM_TYPING_NOTIFY        = 0x6,
    ALI_IM_GROUP_BROADCAST      = 0x7,

};

enum ADDCONTACT_OPERATE
{
    IMM_CONTACT_ADDED           = 0x301,
    IMM_CONTACT_IGNOREUSER_ADDED= 0x302,
    IMM_CONTACT_IGNOREUSER_DELED= 0x303,
    IMM_CONTACT_ASKADD_REQ      = 0x310,
    IMM_CONTACT_ASKADD_NO       = 0x311,
    IMM_CONTACT_ASKADD_YES      = 0x312,

};

#endif