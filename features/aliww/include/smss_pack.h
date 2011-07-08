/*---------------------------------------------------------------------------
// Filename:        smss_pack.h
// Date:            2011-01-30 12:49:34
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __SMSS_PACK_H__
#define __SMSS_PACK_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"
#include "ss_head.h"
#include "const_macro.h"
#include "smss_cmd.h"
#include "smsstrc_pack.h"

using namespace std;

class CSsSmsSendmsg : public CPackData
{
public:
    enum
    {
        CMD_ID = SS_SMS_SENDMSG
    };
    CSsSmsSendmsg()
    {
    }

    ~CSsSmsSendmsg() { }
    CSsSmsSendmsg(const uint8_t&  chType, const SSmsUser&  sFromUser, const string&  strAccount, const string&  strPassword, const VECTOR< SSmsUser >&  vecToUserList, const string&  strMessage)
    {
        m_type = chType;
        m_fromUser = sFromUser;
        m_account = strAccount;
        m_password = strPassword;
        m_toUserList = vecToUserList;
        m_message = strMessage;
    }
    CSsSmsSendmsg&  operator=( const CSsSmsSendmsg&  cSsSmsSendmsg )
    {
        m_type = cSsSmsSendmsg.m_type;
        m_fromUser = cSsSmsSendmsg.m_fromUser;
        m_account = cSsSmsSendmsg.m_account;
        m_password = cSsSmsSendmsg.m_password;
        m_toUserList = cSsSmsSendmsg.m_toUserList;
        m_message = cSsSmsSendmsg.m_message;
        return *this;
    }

    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const SSmsUser&  GetFromUser () const { return m_fromUser; }
    bool SetFromUser ( const SSmsUser&  sFromUser )
    {
        m_fromUser = sFromUser;
        return true;
    }
    const string&  GetAccount () const { return m_account; }
    bool SetAccount ( const string&  strAccount )
    {
        if(strAccount.size() > 64)
            return false;
        m_account = strAccount;
        return true;
    }
    const string&  GetPassword () const { return m_password; }
    bool SetPassword ( const string&  strPassword )
    {
        if(strPassword.size() > 16)
            return false;
        m_password = strPassword;
        return true;
    }
    const VECTOR< SSmsUser >&  GetToUserList () const { return m_toUserList; }
    bool SetToUserList ( const VECTOR< SSmsUser >&  vecToUserList )
    {
        m_toUserList = vecToUserList;
        return true;
    }
    const string&  GetMessage () const { return m_message; }
    bool SetMessage ( const string&  strMessage )
    {
        m_message = strMessage;
        return true;
    }
private:
    uint8_t m_type;
    SSmsUser m_fromUser;
    string m_account;
    string m_password;
    VECTOR< SSmsUser > m_toUserList;
    string m_message;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSsSmsSendmsg::Size() const
{
    uint32_t nSize = 25;
    nSize += m_fromUser.Size();
    nSize += m_account.length();
    nSize += m_password.length();
    for(uint32_t i = 0; i < m_toUserList.size(); i++)
    {
        nSize += m_toUserList[i].Size();
    }
    nSize += m_message.length();
    return nSize;
}

class CSsReqSmsGetusermsginfo : public CPackData
{
public:
    enum
    {
        CMD_ID = SS_REQ_SMS_GETUSERMSGINFO
    };
    CSsReqSmsGetusermsginfo()
    {
    }

    ~CSsReqSmsGetusermsginfo() { }
    CSsReqSmsGetusermsginfo(const string&  strUserId)
    {
        m_userId = strUserId;
    }
    CSsReqSmsGetusermsginfo&  operator=( const CSsReqSmsGetusermsginfo&  cSsReqSmsGetusermsginfo )
    {
        m_userId = cSsReqSmsGetusermsginfo.m_userId;
        return *this;
    }

    const string&  GetUserId () const { return m_userId; }
    bool SetUserId ( const string&  strUserId )
    {
        if(strUserId.size() > 64)
            return false;
        m_userId = strUserId;
        return true;
    }
private:
    string m_userId;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSsReqSmsGetusermsginfo::Size() const
{
    uint32_t nSize = 6;
    nSize += m_userId.length();
    return nSize;
}

class CSsRspSmsGetusermsginfo : public CPackData
{
public:
    enum
    {
        CMD_ID = SS_RSP_SMS_GETUSERMSGINFO
    };
    CSsRspSmsGetusermsginfo()
    {
    }

    ~CSsRspSmsGetusermsginfo() { }
    CSsRspSmsGetusermsginfo(const uint8_t&  chStatus, const string&  strUserId, const uint32_t&  dwYesterdayMsgCount, const uint32_t&  dwTodayMsgCount, const uint32_t&  dwMaxMsgCount, const uint32_t&  dwBalance, const uint32_t&  dwPrice, const uint32_t&  dwCount, const uint32_t&  dwMsgMaxLen)
    {
        m_status = chStatus;
        m_userId = strUserId;
        m_yesterdayMsgCount = dwYesterdayMsgCount;
        m_todayMsgCount = dwTodayMsgCount;
        m_maxMsgCount = dwMaxMsgCount;
        m_balance = dwBalance;
        m_price = dwPrice;
        m_count = dwCount;
        m_msgMaxLen = dwMsgMaxLen;
    }
    CSsRspSmsGetusermsginfo&  operator=( const CSsRspSmsGetusermsginfo&  cSsRspSmsGetusermsginfo )
    {
        m_status = cSsRspSmsGetusermsginfo.m_status;
        m_userId = cSsRspSmsGetusermsginfo.m_userId;
        m_yesterdayMsgCount = cSsRspSmsGetusermsginfo.m_yesterdayMsgCount;
        m_todayMsgCount = cSsRspSmsGetusermsginfo.m_todayMsgCount;
        m_maxMsgCount = cSsRspSmsGetusermsginfo.m_maxMsgCount;
        m_balance = cSsRspSmsGetusermsginfo.m_balance;
        m_price = cSsRspSmsGetusermsginfo.m_price;
        m_count = cSsRspSmsGetusermsginfo.m_count;
        m_msgMaxLen = cSsRspSmsGetusermsginfo.m_msgMaxLen;
        return *this;
    }

    const uint8_t&  GetStatus () const { return m_status; }
    bool SetStatus ( const uint8_t&  chStatus )
    {
        m_status = chStatus;
        return true;
    }
    const string&  GetUserId () const { return m_userId; }
    bool SetUserId ( const string&  strUserId )
    {
        if(strUserId.size() > 64)
            return false;
        m_userId = strUserId;
        return true;
    }
    const uint32_t&  GetYesterdayMsgCount () const { return m_yesterdayMsgCount; }
    bool SetYesterdayMsgCount ( const uint32_t&  dwYesterdayMsgCount )
    {
        m_yesterdayMsgCount = dwYesterdayMsgCount;
        return true;
    }
    const uint32_t&  GetTodayMsgCount () const { return m_todayMsgCount; }
    bool SetTodayMsgCount ( const uint32_t&  dwTodayMsgCount )
    {
        m_todayMsgCount = dwTodayMsgCount;
        return true;
    }
    const uint32_t&  GetMaxMsgCount () const { return m_maxMsgCount; }
    bool SetMaxMsgCount ( const uint32_t&  dwMaxMsgCount )
    {
        m_maxMsgCount = dwMaxMsgCount;
        return true;
    }
    const uint32_t&  GetBalance () const { return m_balance; }
    bool SetBalance ( const uint32_t&  dwBalance )
    {
        m_balance = dwBalance;
        return true;
    }
    const uint32_t&  GetPrice () const { return m_price; }
    bool SetPrice ( const uint32_t&  dwPrice )
    {
        m_price = dwPrice;
        return true;
    }
    const uint32_t&  GetCount () const { return m_count; }
    bool SetCount ( const uint32_t&  dwCount )
    {
        m_count = dwCount;
        return true;
    }
    const uint32_t&  GetMsgMaxLen () const { return m_msgMaxLen; }
    bool SetMsgMaxLen ( const uint32_t&  dwMsgMaxLen )
    {
        m_msgMaxLen = dwMsgMaxLen;
        return true;
    }
private:
    uint8_t m_status;
    string m_userId;
    uint32_t m_yesterdayMsgCount;
    uint32_t m_todayMsgCount;
    uint32_t m_maxMsgCount;
    uint32_t m_balance;
    uint32_t m_price;
    uint32_t m_count;
    uint32_t m_msgMaxLen;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSsRspSmsGetusermsginfo::Size() const
{
    uint32_t nSize = 43;
    nSize += m_userId.length();
    return nSize;
}

class CBcNotifySmsSendstatus : public CPackData
{
public:
    enum
    {
        CMD_ID = BC_NOTIFY_SMS_SENDSTATUS
    };
    CBcNotifySmsSendstatus()
    {
    }

    ~CBcNotifySmsSendstatus() { }
    CBcNotifySmsSendstatus(const uint8_t&  chStatus, const string&  strFromId, const VECTOR< SSmsUser >&  vecToUserList, const string&  strMessage, const string&  strErrorDesc)
    {
        m_status = chStatus;
        m_fromId = strFromId;
        m_toUserList = vecToUserList;
        m_message = strMessage;
        m_errorDesc = strErrorDesc;
    }
    CBcNotifySmsSendstatus&  operator=( const CBcNotifySmsSendstatus&  cBcNotifySmsSendstatus )
    {
        m_status = cBcNotifySmsSendstatus.m_status;
        m_fromId = cBcNotifySmsSendstatus.m_fromId;
        m_toUserList = cBcNotifySmsSendstatus.m_toUserList;
        m_message = cBcNotifySmsSendstatus.m_message;
        m_errorDesc = cBcNotifySmsSendstatus.m_errorDesc;
        return *this;
    }

    const uint8_t&  GetStatus () const { return m_status; }
    bool SetStatus ( const uint8_t&  chStatus )
    {
        m_status = chStatus;
        return true;
    }
    const string&  GetFromId () const { return m_fromId; }
    bool SetFromId ( const string&  strFromId )
    {
        if(strFromId.size() > 64)
            return false;
        m_fromId = strFromId;
        return true;
    }
    const VECTOR< SSmsUser >&  GetToUserList () const { return m_toUserList; }
    bool SetToUserList ( const VECTOR< SSmsUser >&  vecToUserList )
    {
        m_toUserList = vecToUserList;
        return true;
    }
    const string&  GetMessage () const { return m_message; }
    bool SetMessage ( const string&  strMessage )
    {
        m_message = strMessage;
        return true;
    }
    const string&  GetErrorDesc () const { return m_errorDesc; }
    bool SetErrorDesc ( const string&  strErrorDesc )
    {
        m_errorDesc = strErrorDesc;
        return true;
    }
private:
    uint8_t m_status;
    string m_fromId;
    VECTOR< SSmsUser > m_toUserList;
    string m_message;
    string m_errorDesc;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CBcNotifySmsSendstatus::Size() const
{
    uint32_t nSize = 24;
    nSize += m_fromId.length();
    for(uint32_t i = 0; i < m_toUserList.size(); i++)
    {
        nSize += m_toUserList[i].Size();
    }
    nSize += m_message.length();
    nSize += m_errorDesc.length();
    return nSize;
}

class CBcNotifySmsMessage : public CPackData
{
public:
    enum
    {
        CMD_ID = BC_NOTIFY_SMS_MESSAGE
    };
    CBcNotifySmsMessage()
    {
    }

    ~CBcNotifySmsMessage() { }
    CBcNotifySmsMessage(const SSmsUser&  sFromUser, const string&  strToId, const string&  strMessage)
    {
        m_fromUser = sFromUser;
        m_toId = strToId;
        m_message = strMessage;
    }
    CBcNotifySmsMessage&  operator=( const CBcNotifySmsMessage&  cBcNotifySmsMessage )
    {
        m_fromUser = cBcNotifySmsMessage.m_fromUser;
        m_toId = cBcNotifySmsMessage.m_toId;
        m_message = cBcNotifySmsMessage.m_message;
        return *this;
    }

    const SSmsUser&  GetFromUser () const { return m_fromUser; }
    bool SetFromUser ( const SSmsUser&  sFromUser )
    {
        m_fromUser = sFromUser;
        return true;
    }
    const string&  GetToId () const { return m_toId; }
    bool SetToId ( const string&  strToId )
    {
        if(strToId.size() > 64)
            return false;
        m_toId = strToId;
        return true;
    }
    const string&  GetMessage () const { return m_message; }
    bool SetMessage ( const string&  strMessage )
    {
        m_message = strMessage;
        return true;
    }
private:
    SSmsUser m_fromUser;
    string m_toId;
    string m_message;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CBcNotifySmsMessage::Size() const
{
    uint32_t nSize = 12;
    nSize += m_fromUser.Size();
    nSize += m_toId.length();
    nSize += m_message.length();
    return nSize;
}

class CBcNotifySmsChargestatus : public CPackData
{
public:
    enum
    {
        CMD_ID = BC_NOTIFY_SMS_CHARGESTATUS
    };
    CBcNotifySmsChargestatus()
    {
    }

    ~CBcNotifySmsChargestatus() { }
    CBcNotifySmsChargestatus(const string&  strUserId, const string&  strChargeId, const uint8_t&  chChargeStatus, const uint8_t&  chChargeType, const uint32_t&  dwDenomination, const uint32_t&  dwBalance, const uint32_t&  dwCount)
    {
        m_userId = strUserId;
        m_chargeId = strChargeId;
        m_chargeStatus = chChargeStatus;
        m_chargeType = chChargeType;
        m_denomination = dwDenomination;
        m_balance = dwBalance;
        m_count = dwCount;
    }
    CBcNotifySmsChargestatus&  operator=( const CBcNotifySmsChargestatus&  cBcNotifySmsChargestatus )
    {
        m_userId = cBcNotifySmsChargestatus.m_userId;
        m_chargeId = cBcNotifySmsChargestatus.m_chargeId;
        m_chargeStatus = cBcNotifySmsChargestatus.m_chargeStatus;
        m_chargeType = cBcNotifySmsChargestatus.m_chargeType;
        m_denomination = cBcNotifySmsChargestatus.m_denomination;
        m_balance = cBcNotifySmsChargestatus.m_balance;
        m_count = cBcNotifySmsChargestatus.m_count;
        return *this;
    }

    const string&  GetUserId () const { return m_userId; }
    bool SetUserId ( const string&  strUserId )
    {
        if(strUserId.size() > 64)
            return false;
        m_userId = strUserId;
        return true;
    }
    const string&  GetChargeId () const { return m_chargeId; }
    bool SetChargeId ( const string&  strChargeId )
    {
        if(strChargeId.size() > 20)
            return false;
        m_chargeId = strChargeId;
        return true;
    }
    const uint8_t&  GetChargeStatus () const { return m_chargeStatus; }
    bool SetChargeStatus ( const uint8_t&  chChargeStatus )
    {
        m_chargeStatus = chChargeStatus;
        return true;
    }
    const uint8_t&  GetChargeType () const { return m_chargeType; }
    bool SetChargeType ( const uint8_t&  chChargeType )
    {
        m_chargeType = chChargeType;
        return true;
    }
    const uint32_t&  GetDenomination () const { return m_denomination; }
    bool SetDenomination ( const uint32_t&  dwDenomination )
    {
        m_denomination = dwDenomination;
        return true;
    }
    const uint32_t&  GetBalance () const { return m_balance; }
    bool SetBalance ( const uint32_t&  dwBalance )
    {
        m_balance = dwBalance;
        return true;
    }
    const uint32_t&  GetCount () const { return m_count; }
    bool SetCount ( const uint32_t&  dwCount )
    {
        m_count = dwCount;
        return true;
    }
private:
    string m_userId;
    string m_chargeId;
    uint8_t m_chargeStatus;
    uint8_t m_chargeType;
    uint32_t m_denomination;
    uint32_t m_balance;
    uint32_t m_count;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CBcNotifySmsChargestatus::Size() const
{
    uint32_t nSize = 30;
    nSize += m_userId.length();
    nSize += m_chargeId.length();
    return nSize;
}

class CBcNotifySmsRevflag : public CPackData
{
public:
    enum
    {
        CMD_ID = BC_NOTIFY_SMS_REVFLAG
    };
    CBcNotifySmsRevflag()
    {
    }

    ~CBcNotifySmsRevflag() { }
    CBcNotifySmsRevflag(const string&  strUserId, const uint8_t&  chRevFlag)
    {
        m_userId = strUserId;
        m_revFlag = chRevFlag;
    }
    CBcNotifySmsRevflag&  operator=( const CBcNotifySmsRevflag&  cBcNotifySmsRevflag )
    {
        m_userId = cBcNotifySmsRevflag.m_userId;
        m_revFlag = cBcNotifySmsRevflag.m_revFlag;
        return *this;
    }

    const string&  GetUserId () const { return m_userId; }
    bool SetUserId ( const string&  strUserId )
    {
        if(strUserId.size() > 64)
            return false;
        m_userId = strUserId;
        return true;
    }
    const uint8_t&  GetRevFlag () const { return m_revFlag; }
    bool SetRevFlag ( const uint8_t&  chRevFlag )
    {
        m_revFlag = chRevFlag;
        return true;
    }
private:
    string m_userId;
    uint8_t m_revFlag;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CBcNotifySmsRevflag::Size() const
{
    uint32_t nSize = 8;
    nSize += m_userId.length();
    return nSize;
}

class CSsReqSmsGetMultimsglen : public CPackData
{
public:
    enum
    {
        CMD_ID = SS_REQ_SMS_GET_MULTIMSGLEN
    };
    CSsReqSmsGetMultimsglen()
    {
    }

    ~CSsReqSmsGetMultimsglen() { }
    CSsReqSmsGetMultimsglen(const string&  strUserId)
    {
        m_userId = strUserId;
    }
    CSsReqSmsGetMultimsglen&  operator=( const CSsReqSmsGetMultimsglen&  cSsReqSmsGetMultimsglen )
    {
        m_userId = cSsReqSmsGetMultimsglen.m_userId;
        return *this;
    }

    const string&  GetUserId () const { return m_userId; }
    bool SetUserId ( const string&  strUserId )
    {
        if(strUserId.size() > 64)
            return false;
        m_userId = strUserId;
        return true;
    }
private:
    string m_userId;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSsReqSmsGetMultimsglen::Size() const
{
    uint32_t nSize = 6;
    nSize += m_userId.length();
    return nSize;
}

class CSsRspSmsGetMultimsglen : public CPackData
{
public:
    enum
    {
        CMD_ID = SS_RSP_SMS_GET_MULTIMSGLEN
    };
    CSsRspSmsGetMultimsglen()
    {
    }

    ~CSsRspSmsGetMultimsglen() { }
    CSsRspSmsGetMultimsglen(const uint32_t&  dwMsgLen, const uint32_t&  dwMaxUser, const string&  strUserId, const uint32_t&  dwU32Reserve, const string&  strStrReserve)
    {
        m_msgLen = dwMsgLen;
        m_maxUser = dwMaxUser;
        m_userId = strUserId;
        m_u32Reserve = dwU32Reserve;
        m_strReserve = strStrReserve;
    }
    CSsRspSmsGetMultimsglen&  operator=( const CSsRspSmsGetMultimsglen&  cSsRspSmsGetMultimsglen )
    {
        m_msgLen = cSsRspSmsGetMultimsglen.m_msgLen;
        m_maxUser = cSsRspSmsGetMultimsglen.m_maxUser;
        m_userId = cSsRspSmsGetMultimsglen.m_userId;
        m_u32Reserve = cSsRspSmsGetMultimsglen.m_u32Reserve;
        m_strReserve = cSsRspSmsGetMultimsglen.m_strReserve;
        return *this;
    }

    const uint32_t&  GetMsgLen () const { return m_msgLen; }
    bool SetMsgLen ( const uint32_t&  dwMsgLen )
    {
        m_msgLen = dwMsgLen;
        return true;
    }
    const uint32_t&  GetMaxUser () const { return m_maxUser; }
    bool SetMaxUser ( const uint32_t&  dwMaxUser )
    {
        m_maxUser = dwMaxUser;
        return true;
    }
    const string&  GetUserId () const { return m_userId; }
    bool SetUserId ( const string&  strUserId )
    {
        if(strUserId.size() > 64)
            return false;
        m_userId = strUserId;
        return true;
    }
    const uint32_t&  GetU32Reserve () const { return m_u32Reserve; }
    bool SetU32Reserve ( const uint32_t&  dwU32Reserve )
    {
        m_u32Reserve = dwU32Reserve;
        return true;
    }
    const string&  GetStrReserve () const { return m_strReserve; }
    bool SetStrReserve ( const string&  strStrReserve )
    {
        if(strStrReserve.size() > 256)
            return false;
        m_strReserve = strStrReserve;
        return true;
    }
private:
    uint32_t m_msgLen;
    uint32_t m_maxUser;
    string m_userId;
    uint32_t m_u32Reserve;
    string m_strReserve;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSsRspSmsGetMultimsglen::Size() const
{
    uint32_t nSize = 26;
    nSize += m_userId.length();
    nSize += m_strReserve.length();
    return nSize;
}

#endif
