/*---------------------------------------------------------------------------
// Filename:        smsc_pack.h
// Date:            2011-01-30 12:48:52
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __SMSC_PACK_H__
#define __SMSC_PACK_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"
#include "des.h"
#include <zlib.h>
#include "sc_head.h"
#include "const_macro.h"
#include "smsc_cmd.h"
#include "smsstrc_pack.h"

using namespace std;

class CImReqSmsSendmsg : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_SMS_SENDMSG
    };
    CImReqSmsSendmsg()
    {
    }

    ~CImReqSmsSendmsg() { }
    CImReqSmsSendmsg(const string&  strFromId, const VECTOR< SSmsUser >&  vecToUserList, const string&  strMessage)
    {
        m_fromId = strFromId;
        m_toUserList = vecToUserList;
        m_message = strMessage;
    }
    CImReqSmsSendmsg&  operator=( const CImReqSmsSendmsg&  cImReqSmsSendmsg )
    {
        m_fromId = cImReqSmsSendmsg.m_fromId;
        m_toUserList = cImReqSmsSendmsg.m_toUserList;
        m_message = cImReqSmsSendmsg.m_message;
        return *this;
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
private:
    string m_fromId;
    VECTOR< SSmsUser > m_toUserList;
    string m_message;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqSmsSendmsg::Size() const
{
    uint32_t nSize = 17;
    nSize += m_fromId.length();
    for(uint32_t i = 0; i < m_toUserList.size(); i++)
    {
        nSize += m_toUserList[i].Size();
    }
    nSize += m_message.length();
    return nSize;
}

class CImRspSmsSendmsg : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_SMS_SENDMSG
    };
    CImRspSmsSendmsg()
    {
    }

    ~CImRspSmsSendmsg() { }
    CImRspSmsSendmsg(const uint8_t&  chStatus, const string&  strFromId, const VECTOR< SSmsUser >&  vecToUserList, const string&  strMessage)
    {
        m_status = chStatus;
        m_fromId = strFromId;
        m_toUserList = vecToUserList;
        m_message = strMessage;
    }
    CImRspSmsSendmsg&  operator=( const CImRspSmsSendmsg&  cImRspSmsSendmsg )
    {
        m_status = cImRspSmsSendmsg.m_status;
        m_fromId = cImRspSmsSendmsg.m_fromId;
        m_toUserList = cImRspSmsSendmsg.m_toUserList;
        m_message = cImRspSmsSendmsg.m_message;
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
private:
    uint8_t m_status;
    string m_fromId;
    VECTOR< SSmsUser > m_toUserList;
    string m_message;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspSmsSendmsg::Size() const
{
    uint32_t nSize = 19;
    nSize += m_fromId.length();
    for(uint32_t i = 0; i < m_toUserList.size(); i++)
    {
        nSize += m_toUserList[i].Size();
    }
    nSize += m_message.length();
    return nSize;
}

class CImNtfSmsSendstatus : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_NTF_SMS_SENDSTATUS
    };
    CImNtfSmsSendstatus()
    {
    }

    ~CImNtfSmsSendstatus() { }
    CImNtfSmsSendstatus(const uint8_t&  chStatus, const string&  strFromId, const VECTOR< SSmsUser >&  vecToUserList, const string&  strMessage, const string&  strErrorDesc)
    {
        m_status = chStatus;
        m_fromId = strFromId;
        m_toUserList = vecToUserList;
        m_message = strMessage;
        m_errorDesc = strErrorDesc;
    }
    CImNtfSmsSendstatus&  operator=( const CImNtfSmsSendstatus&  cImNtfSmsSendstatus )
    {
        m_status = cImNtfSmsSendstatus.m_status;
        m_fromId = cImNtfSmsSendstatus.m_fromId;
        m_toUserList = cImNtfSmsSendstatus.m_toUserList;
        m_message = cImNtfSmsSendstatus.m_message;
        m_errorDesc = cImNtfSmsSendstatus.m_errorDesc;
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
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImNtfSmsSendstatus::Size() const
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

class CImNtfSmsRcvmsg : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_NTF_SMS_RCVMSG
    };
    CImNtfSmsRcvmsg()
    {
    }

    ~CImNtfSmsRcvmsg() { }
    CImNtfSmsRcvmsg(const SSmsUser&  sFromUser, const string&  strToId, const string&  strMessage)
    {
        m_fromUser = sFromUser;
        m_toId = strToId;
        m_message = strMessage;
    }
    CImNtfSmsRcvmsg&  operator=( const CImNtfSmsRcvmsg&  cImNtfSmsRcvmsg )
    {
        m_fromUser = cImNtfSmsRcvmsg.m_fromUser;
        m_toId = cImNtfSmsRcvmsg.m_toId;
        m_message = cImNtfSmsRcvmsg.m_message;
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
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImNtfSmsRcvmsg::Size() const
{
    uint32_t nSize = 12;
    nSize += m_fromUser.Size();
    nSize += m_toId.length();
    nSize += m_message.length();
    return nSize;
}

class CImNtfSmsChargestatus : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_NTF_SMS_CHARGESTATUS
    };
    CImNtfSmsChargestatus()
    {
    }

    ~CImNtfSmsChargestatus() { }
    CImNtfSmsChargestatus(const uint8_t&  chStatus, const string&  strUserId, const string&  strChargeId, const uint8_t&  chChargeType, const uint32_t&  dwDenomination, const uint32_t&  dwBalance, const uint32_t&  dwCount)
    {
        m_status = chStatus;
        m_userId = strUserId;
        m_chargeId = strChargeId;
        m_chargeType = chChargeType;
        m_denomination = dwDenomination;
        m_balance = dwBalance;
        m_count = dwCount;
    }
    CImNtfSmsChargestatus&  operator=( const CImNtfSmsChargestatus&  cImNtfSmsChargestatus )
    {
        m_status = cImNtfSmsChargestatus.m_status;
        m_userId = cImNtfSmsChargestatus.m_userId;
        m_chargeId = cImNtfSmsChargestatus.m_chargeId;
        m_chargeType = cImNtfSmsChargestatus.m_chargeType;
        m_denomination = cImNtfSmsChargestatus.m_denomination;
        m_balance = cImNtfSmsChargestatus.m_balance;
        m_count = cImNtfSmsChargestatus.m_count;
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
    const string&  GetChargeId () const { return m_chargeId; }
    bool SetChargeId ( const string&  strChargeId )
    {
        if(strChargeId.size() > 20)
            return false;
        m_chargeId = strChargeId;
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
    uint8_t m_status;
    string m_userId;
    string m_chargeId;
    uint8_t m_chargeType;
    uint32_t m_denomination;
    uint32_t m_balance;
    uint32_t m_count;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImNtfSmsChargestatus::Size() const
{
    uint32_t nSize = 30;
    nSize += m_userId.length();
    nSize += m_chargeId.length();
    return nSize;
}

class CImNtfSmsMobileonline : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_NTF_SMS_MOBILEONLINE
    };
    CImNtfSmsMobileonline()
    {
    }

    ~CImNtfSmsMobileonline() { }
    CImNtfSmsMobileonline(const string&  strUserId, const uint8_t&  chOnlineFlag)
    {
        m_userId = strUserId;
        m_onlineFlag = chOnlineFlag;
    }
    CImNtfSmsMobileonline&  operator=( const CImNtfSmsMobileonline&  cImNtfSmsMobileonline )
    {
        m_userId = cImNtfSmsMobileonline.m_userId;
        m_onlineFlag = cImNtfSmsMobileonline.m_onlineFlag;
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
    const uint8_t&  GetOnlineFlag () const { return m_onlineFlag; }
    bool SetOnlineFlag ( const uint8_t&  chOnlineFlag )
    {
        m_onlineFlag = chOnlineFlag;
        return true;
    }
private:
    string m_userId;
    uint8_t m_onlineFlag;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImNtfSmsMobileonline::Size() const
{
    uint32_t nSize = 8;
    nSize += m_userId.length();
    return nSize;
}

class CImReqSmsGetusermsginfo : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_SMS_GETUSERMSGINFO
    };
    CImReqSmsGetusermsginfo()
    {
    }

    ~CImReqSmsGetusermsginfo() { }
    CImReqSmsGetusermsginfo(const string&  strUserId)
    {
        m_userId = strUserId;
    }
    CImReqSmsGetusermsginfo&  operator=( const CImReqSmsGetusermsginfo&  cImReqSmsGetusermsginfo )
    {
        m_userId = cImReqSmsGetusermsginfo.m_userId;
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
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqSmsGetusermsginfo::Size() const
{
    uint32_t nSize = 6;
    nSize += m_userId.length();
    return nSize;
}

class CImRspSmsGetusermsginfo : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_SMS_GETUSERMSGINFO
    };
    CImRspSmsGetusermsginfo()
    {
    }

    ~CImRspSmsGetusermsginfo() { }
    CImRspSmsGetusermsginfo(const uint8_t&  chStatus, const uint32_t&  dwYesterdayMsgCount, const uint32_t&  dwTodayMsgCount, const uint32_t&  dwMaxMsgCount, const uint32_t&  dwBalance, const uint32_t&  dwPrice, const uint32_t&  dwCount, const uint32_t&  dwMsgMaxLen)
    {
        m_status = chStatus;
        m_yesterdayMsgCount = dwYesterdayMsgCount;
        m_todayMsgCount = dwTodayMsgCount;
        m_maxMsgCount = dwMaxMsgCount;
        m_balance = dwBalance;
        m_price = dwPrice;
        m_count = dwCount;
        m_msgMaxLen = dwMsgMaxLen;
    }
    CImRspSmsGetusermsginfo&  operator=( const CImRspSmsGetusermsginfo&  cImRspSmsGetusermsginfo )
    {
        m_status = cImRspSmsGetusermsginfo.m_status;
        m_yesterdayMsgCount = cImRspSmsGetusermsginfo.m_yesterdayMsgCount;
        m_todayMsgCount = cImRspSmsGetusermsginfo.m_todayMsgCount;
        m_maxMsgCount = cImRspSmsGetusermsginfo.m_maxMsgCount;
        m_balance = cImRspSmsGetusermsginfo.m_balance;
        m_price = cImRspSmsGetusermsginfo.m_price;
        m_count = cImRspSmsGetusermsginfo.m_count;
        m_msgMaxLen = cImRspSmsGetusermsginfo.m_msgMaxLen;
        return *this;
    }

    const uint8_t&  GetStatus () const { return m_status; }
    bool SetStatus ( const uint8_t&  chStatus )
    {
        m_status = chStatus;
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
    uint32_t m_yesterdayMsgCount;
    uint32_t m_todayMsgCount;
    uint32_t m_maxMsgCount;
    uint32_t m_balance;
    uint32_t m_price;
    uint32_t m_count;
    uint32_t m_msgMaxLen;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspSmsGetusermsginfo::Size() const
{
    return 38;
}
class CImReqSmsGetAccount : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_SMS_GET_ACCOUNT
    };
    CImReqSmsGetAccount()
    {
    }

    ~CImReqSmsGetAccount() { }
    CImReqSmsGetAccount(const string&  strUserId)
    {
        m_userId = strUserId;
    }
    CImReqSmsGetAccount&  operator=( const CImReqSmsGetAccount&  cImReqSmsGetAccount )
    {
        m_userId = cImReqSmsGetAccount.m_userId;
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
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqSmsGetAccount::Size() const
{
    uint32_t nSize = 6;
    nSize += m_userId.length();
    return nSize;
}

class CImRspSmsGetAccount : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_SMS_GET_ACCOUNT
    };
    CImRspSmsGetAccount()
    {
    }

    ~CImRspSmsGetAccount() { }
    CImRspSmsGetAccount(const uint8_t&  chStatus, const string&  strUserId, const uint8_t&  chBindFlag, const uint8_t&  chOnlineFlag, const string&  strMobileNo, const uint8_t&  chRevFlag)
    {
        m_status = chStatus;
        m_userId = strUserId;
        m_bindFlag = chBindFlag;
        m_onlineFlag = chOnlineFlag;
        m_mobileNo = strMobileNo;
        m_revFlag = chRevFlag;
    }
    CImRspSmsGetAccount&  operator=( const CImRspSmsGetAccount&  cImRspSmsGetAccount )
    {
        m_status = cImRspSmsGetAccount.m_status;
        m_userId = cImRspSmsGetAccount.m_userId;
        m_bindFlag = cImRspSmsGetAccount.m_bindFlag;
        m_onlineFlag = cImRspSmsGetAccount.m_onlineFlag;
        m_mobileNo = cImRspSmsGetAccount.m_mobileNo;
        m_revFlag = cImRspSmsGetAccount.m_revFlag;
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
    const uint8_t&  GetBindFlag () const { return m_bindFlag; }
    bool SetBindFlag ( const uint8_t&  chBindFlag )
    {
        m_bindFlag = chBindFlag;
        return true;
    }
    const uint8_t&  GetOnlineFlag () const { return m_onlineFlag; }
    bool SetOnlineFlag ( const uint8_t&  chOnlineFlag )
    {
        m_onlineFlag = chOnlineFlag;
        return true;
    }
    const string&  GetMobileNo () const { return m_mobileNo; }
    bool SetMobileNo ( const string&  strMobileNo )
    {
        if(strMobileNo.size() > 16)
            return false;
        m_mobileNo = strMobileNo;
        return true;
    }
    const uint8_t&  GetRevFlag () const { return m_revFlag; }
    bool SetRevFlag ( const uint8_t&  chRevFlag )
    {
        m_revFlag = chRevFlag;
        return true;
    }
private:
    uint8_t m_status;
    string m_userId;
    uint8_t m_bindFlag;
    uint8_t m_onlineFlag;
    string m_mobileNo;
    uint8_t m_revFlag;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspSmsGetAccount::Size() const
{
    uint32_t nSize = 19;
    nSize += m_userId.length();
    nSize += m_mobileNo.length();
    return nSize;
}

class CImReqSmsGetAccount2 : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_SMS_GET_ACCOUNT2
    };
    CImReqSmsGetAccount2()
    {
    }

    ~CImReqSmsGetAccount2() { }
    CImReqSmsGetAccount2(const string&  strUserId)
    {
        m_userId = strUserId;
    }
    CImReqSmsGetAccount2&  operator=( const CImReqSmsGetAccount2&  cImReqSmsGetAccount2 )
    {
        m_userId = cImReqSmsGetAccount2.m_userId;
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
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqSmsGetAccount2::Size() const
{
    uint32_t nSize = 6;
    nSize += m_userId.length();
    return nSize;
}

class CImRspSmsGetAccount2 : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_SMS_GET_ACCOUNT2
    };
    CImRspSmsGetAccount2()
    {
    }

    ~CImRspSmsGetAccount2() { }
    CImRspSmsGetAccount2(const uint8_t&  chStatus, const string&  strUserId, const uint8_t&  chBindFlag, const uint8_t&  chOnlineFlag, const uint8_t&  chRevFlag)
    {
        m_status = chStatus;
        m_userId = strUserId;
        m_bindFlag = chBindFlag;
        m_onlineFlag = chOnlineFlag;
        m_revFlag = chRevFlag;
    }
    CImRspSmsGetAccount2&  operator=( const CImRspSmsGetAccount2&  cImRspSmsGetAccount2 )
    {
        m_status = cImRspSmsGetAccount2.m_status;
        m_userId = cImRspSmsGetAccount2.m_userId;
        m_bindFlag = cImRspSmsGetAccount2.m_bindFlag;
        m_onlineFlag = cImRspSmsGetAccount2.m_onlineFlag;
        m_revFlag = cImRspSmsGetAccount2.m_revFlag;
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
    const uint8_t&  GetBindFlag () const { return m_bindFlag; }
    bool SetBindFlag ( const uint8_t&  chBindFlag )
    {
        m_bindFlag = chBindFlag;
        return true;
    }
    const uint8_t&  GetOnlineFlag () const { return m_onlineFlag; }
    bool SetOnlineFlag ( const uint8_t&  chOnlineFlag )
    {
        m_onlineFlag = chOnlineFlag;
        return true;
    }
    const uint8_t&  GetRevFlag () const { return m_revFlag; }
    bool SetRevFlag ( const uint8_t&  chRevFlag )
    {
        m_revFlag = chRevFlag;
        return true;
    }
private:
    uint8_t m_status;
    string m_userId;
    uint8_t m_bindFlag;
    uint8_t m_onlineFlag;
    uint8_t m_revFlag;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspSmsGetAccount2::Size() const
{
    uint32_t nSize = 14;
    nSize += m_userId.length();
    return nSize;
}

class CImNtfSmsMobilebind : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_NTF_SMS_MOBILEBIND
    };
    CImNtfSmsMobilebind()
    {
    }

    ~CImNtfSmsMobilebind() { }
    CImNtfSmsMobilebind(const string&  strUserId, const uint8_t&  chBindFlag)
    {
        m_userId = strUserId;
        m_bindFlag = chBindFlag;
    }
    CImNtfSmsMobilebind&  operator=( const CImNtfSmsMobilebind&  cImNtfSmsMobilebind )
    {
        m_userId = cImNtfSmsMobilebind.m_userId;
        m_bindFlag = cImNtfSmsMobilebind.m_bindFlag;
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
    const uint8_t&  GetBindFlag () const { return m_bindFlag; }
    bool SetBindFlag ( const uint8_t&  chBindFlag )
    {
        m_bindFlag = chBindFlag;
        return true;
    }
private:
    string m_userId;
    uint8_t m_bindFlag;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImNtfSmsMobilebind::Size() const
{
    uint32_t nSize = 8;
    nSize += m_userId.length();
    return nSize;
}

class CImNtfSmsRevflag : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_NTF_SMS_REVFLAG
    };
    CImNtfSmsRevflag()
    {
    }

    ~CImNtfSmsRevflag() { }
    CImNtfSmsRevflag(const string&  strUserId, const uint8_t&  chRevFlag)
    {
        m_userId = strUserId;
        m_revFlag = chRevFlag;
    }
    CImNtfSmsRevflag&  operator=( const CImNtfSmsRevflag&  cImNtfSmsRevflag )
    {
        m_userId = cImNtfSmsRevflag.m_userId;
        m_revFlag = cImNtfSmsRevflag.m_revFlag;
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
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImNtfSmsRevflag::Size() const
{
    uint32_t nSize = 8;
    nSize += m_userId.length();
    return nSize;
}

class CImReqSmsGetBlacklist : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_SMS_GET_BLACKLIST
    };
    CImReqSmsGetBlacklist()
    {
    }

    ~CImReqSmsGetBlacklist() { }
    CImReqSmsGetBlacklist(const string&  strUserId)
    {
        m_userId = strUserId;
    }
    CImReqSmsGetBlacklist&  operator=( const CImReqSmsGetBlacklist&  cImReqSmsGetBlacklist )
    {
        m_userId = cImReqSmsGetBlacklist.m_userId;
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
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqSmsGetBlacklist::Size() const
{
    return 66;
}
class CImRspSmsGetBlacklist : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_SMS_GET_BLACKLIST
    };
    CImRspSmsGetBlacklist()
    {
    }

    ~CImRspSmsGetBlacklist() { }
    CImRspSmsGetBlacklist(const uint8_t&  chStatus, const VECTOR< SSmsUser >&  vecBlackList)
    {
        m_status = chStatus;
        m_blackList = vecBlackList;
    }
    CImRspSmsGetBlacklist&  operator=( const CImRspSmsGetBlacklist&  cImRspSmsGetBlacklist )
    {
        m_status = cImRspSmsGetBlacklist.m_status;
        m_blackList = cImRspSmsGetBlacklist.m_blackList;
        return *this;
    }

    const uint8_t&  GetStatus () const { return m_status; }
    bool SetStatus ( const uint8_t&  chStatus )
    {
        m_status = chStatus;
        return true;
    }
    const VECTOR< SSmsUser >&  GetBlackList () const { return m_blackList; }
    bool SetBlackList ( const VECTOR< SSmsUser >&  vecBlackList )
    {
        m_blackList = vecBlackList;
        return true;
    }
private:
    uint8_t m_status;
    VECTOR< SSmsUser > m_blackList;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspSmsGetBlacklist::Size() const
{
    uint32_t nSize = 9;
    for(uint32_t i = 0; i < m_blackList.size(); i++)
    {
        nSize += m_blackList[i].Size();
    }
    return nSize;
}

class CImRspSmsGetuserconfig : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_SMS_GETUSERCONFIG
    };
    CImRspSmsGetuserconfig()
    {
    }

    ~CImRspSmsGetuserconfig() { }
    CImRspSmsGetuserconfig(const uint8_t&  chStatus, const uint8_t&  chOnlineFlag, const uint8_t&  chRevFlag)
    {
        m_status = chStatus;
        m_onlineFlag = chOnlineFlag;
        m_revFlag = chRevFlag;
    }
    CImRspSmsGetuserconfig&  operator=( const CImRspSmsGetuserconfig&  cImRspSmsGetuserconfig )
    {
        m_status = cImRspSmsGetuserconfig.m_status;
        m_onlineFlag = cImRspSmsGetuserconfig.m_onlineFlag;
        m_revFlag = cImRspSmsGetuserconfig.m_revFlag;
        return *this;
    }

    const uint8_t&  GetStatus () const { return m_status; }
    bool SetStatus ( const uint8_t&  chStatus )
    {
        m_status = chStatus;
        return true;
    }
    const uint8_t&  GetOnlineFlag () const { return m_onlineFlag; }
    bool SetOnlineFlag ( const uint8_t&  chOnlineFlag )
    {
        m_onlineFlag = chOnlineFlag;
        return true;
    }
    const uint8_t&  GetRevFlag () const { return m_revFlag; }
    bool SetRevFlag ( const uint8_t&  chRevFlag )
    {
        m_revFlag = chRevFlag;
        return true;
    }
private:
    uint8_t m_status;
    uint8_t m_onlineFlag;
    uint8_t m_revFlag;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspSmsGetuserconfig::Size() const
{
    return 7;
}
class CImReqSmsGetMultimsglen : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_SMS_GET_MULTIMSGLEN
    };
    ~CImReqSmsGetMultimsglen() { }
public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqSmsGetMultimsglen::Size() const
{
    return 1;
}
class CImRspSmsGetMultimsglen : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_SMS_GET_MULTIMSGLEN
    };
    CImRspSmsGetMultimsglen()
    {
    }

    ~CImRspSmsGetMultimsglen() { }
    CImRspSmsGetMultimsglen(const uint32_t&  dwMsgLen, const uint32_t&  dwMaxUser, const uint32_t&  dwU32Reserve, const string&  strStrReserve)
    {
        m_msgLen = dwMsgLen;
        m_maxUser = dwMaxUser;
        m_u32Reserve = dwU32Reserve;
        m_strReserve = strStrReserve;
    }
    CImRspSmsGetMultimsglen&  operator=( const CImRspSmsGetMultimsglen&  cImRspSmsGetMultimsglen )
    {
        m_msgLen = cImRspSmsGetMultimsglen.m_msgLen;
        m_maxUser = cImRspSmsGetMultimsglen.m_maxUser;
        m_u32Reserve = cImRspSmsGetMultimsglen.m_u32Reserve;
        m_strReserve = cImRspSmsGetMultimsglen.m_strReserve;
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
    uint32_t m_u32Reserve;
    string m_strReserve;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspSmsGetMultimsglen::Size() const
{
    uint32_t nSize = 21;
    nSize += m_strReserve.length();
    return nSize;
}

#endif
