/*---------------------------------------------------------------------------
// Filename:        imss_cmd.h
// Date:            2011-01-30 12:49:18
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __IMSS_CMD_H__
#define __IMSS_CMD_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"

using namespace std;

enum IMSS_REQUEST
{
    SS_HELTH_CHECK              = 0x1,
    SS_REQ_GETALLUSERSTS        = 0x2,
    SS_REQ_GETUSERSTATUS        = 0x1000001,
    IM_SS_SENDIMMSG             = 0x1000002,
    IM_SS_REQ_PEERINFO          = 0x1000003,
    IM_SS_REQ_FTSADDR           = 0x1000005,
    IM_SS_REQ_SUBCRIBE_MSG      = 0x1000006,
    IM_REQ_SYSTEMMESSAGE        = 0x1000007,
    SS_REQ_GETALLEHMSGRPSTS     = 0x1000008,
    IM_SS_SEND_HMSMSG           = 0x1000011,
    CASS_REQ_GOODSSEARCH        = 0x12100001,
    CASS_REQ_GOODSSEARCHEX      = 0x12100002,
    CASS_REQ_WW_MAINSEARCH      = 0x12100003,
    IM_REQ_SYSTEMMAPMESSAGE     = 0x1120012,
    CASS_REQ_ESEXPANDTAB        = 0x12100101,
    CASS_REQ_SEND_ESEVAL        = 0x12100102,
    CASS_REQ_GETCNTLIST         = 0x12100103,
    CASS_REQ_WWCARD_INFO        = 0x12100201,
    CASS_REQ_WWCARD_LEVEL       = 0x12100202,
    CASS_REQ_WWCARD_SNS         = 0x12100203,
    CASS_REQ_WWCARD_EVALUATE    = 0x12100204,
    CASS_REQ_WWCARD_FAVORITE    = 0x12100205,
    CASS_REQ_TRADE_LIST         = 0x12100301,
    CASS_REQ_TRADE_INFO         = 0x12100302,
    CASS_REQ_AUTH_SHELLCMD      = 0x12100401,
    CASS_REQ_CHECK_LOGINIP      = 0x12000501,
    CASS_REQ_GET_USERCRINFO     = 0x12100701,
    CASS_REQ_SET_USERCRINFO     = 0x12100702,

};

enum IMSS_RESPONSE
{
    SS_RSP_GETALLUSERSTS        = 0x10002,
    SS_RSP_GETUSERSTATUS        = 0x1010001,
    IM_SS_RSP_PEERINFO          = 0x1010003,
    SS_RSP_REPORTUSERPOS        = 0x1010004,
    IM_SS_RSP_FTSADDR           = 0x1010005,
    IM_SS_RSP_SUBCRIBE_MSG      = 0x1010006,
    IM_RSP_SYSTEMMESSAGE        = 0x1010007,
    SS_RSP_GETALLEHMSGRPSTS     = 0x1010008,
    CASS_RSP_GOODSSEARCH        = 0x12110001,
    CASS_RSP_GOODSSEARCHEX      = 0x12110002,
    CASS_RSP_WW_MAINSEARCH      = 0x12110003,
    IM_RSP_SYSTEMMAPMESSAGE     = 0x1110012,
    CASS_RSP_ESEXPANDTAB        = 0x12110101,
    CASS_RSP_SEND_ESEVAL        = 0x12110102,
    CASS_RSP_GETCNTLIST         = 0x12110103,
    CASS_RSP_WWCARD_INFO        = 0x12110201,
    CASS_RSP_WWCARD_LEVEL       = 0x12110202,
    CASS_RSP_WWCARD_SNS         = 0x12110203,
    CASS_RSP_WWCARD_EVALUATE    = 0x12110204,
    CASS_RSP_WWCARD_FAVORITE    = 0x12110205,
    CASS_RSP_TRADE_LIST         = 0x12110301,
    CASS_RSP_TRADE_INFO         = 0x12110302,
    CASS_RSP_AUTH_SHELLCMD      = 0x12110401,
    CASS_RSP_CHECK_LOGINIP      = 0x12110501,
    CASS_RSP_GET_USERCRINFO     = 0x12110701,
    CASS_RSP_SET_USERCRINFO     = 0x12110702,

};

enum IMSS_NOTIFY
{
    IM_SS_FORCEDISCONNECT       = 0x1020001,
    IM_SS_NTFUSRSTATUS          = 0x1020002,
    IM_SS_NTFUSERPOS_ERROR      = 0x1020003,
    IM_SS_NTFUSREXTINFOUP       = 0x1020004,
    EXT_SS_NTFUSERINFOUP        = 0x1020005,
    IM_RSP_SIGNATURE            = 0x1020006,
    IM_SS_NTFADDACCEPT          = 0x1020007,
    IM_SS_NTFFORBIDIP           = 0x1020008,
    IM_SS_NTF_OPERATIONTIP      = 0x112002b,
    IM_SS_NTF_WATCH_INFO        = 0x102005e,
    SS_NTF_REFRESH_CONTACT      = 0x1120030,
    SS_NTF_FEEDS                = 0x1120031,
    SS_NTF_USER_SNSINFO         = 0x1120032,
    SS_NTF_ADD_RCNT             = 0x1120033,
    SS_NTF_EHMS_GROUPSTS        = 0x1120040,
    SS_NTF_EHMS_LOGIN           = 0x1120041,
    SS_NTF_VERSION_MESSAGE      = 0x11200ff,
    IM_SS_NTF_WEBSYSMESSAGE     = 0x1020101,
    IM_SS_NTF_WEBUSERMESSAGE    = 0x1020102,
    SS_NTF_UNBIND_DISCONNECT    = 0x1120105,

};

#endif