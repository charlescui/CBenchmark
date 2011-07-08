/*---------------------------------------------------------------------------
// Filename:        smss_cmd.h
// Date:            2011-01-30 12:49:34
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __SMSS_CMD_H__
#define __SMSS_CMD_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"

using namespace std;

enum SMSS_REQUEST
{
    SS_SMS_SENDMSG              = 0x9000001,
    SS_REQ_SMS_GETUSERMSGINFO   = 0x9000002,
    SS_REQ_SMS_GET_MULTIMSGLEN  = 0x9000003,

};

enum SMSS_RESPONSE
{
    SS_RSP_SMS_GETUSERMSGINFO   = 0x9010001,
    SS_RSP_SMS_GET_MULTIMSGLEN  = 0x9010002,

};

enum SMSS_NOTIFY
{
    BC_NOTIFY_SMS_SENDSTATUS    = 0x9020001,
    BC_NOTIFY_SMS_MESSAGE       = 0x9020002,
    BC_NOTIFY_SMS_CHARGESTATUS  = 0x9020003,
    BC_NOTIFY_SMS_REVFLAG       = 0x9020004,

};

#endif
