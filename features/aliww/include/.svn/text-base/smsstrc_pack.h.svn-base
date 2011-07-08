/*---------------------------------------------------------------------------
// Filename:        smsstrc_pack.h
// Date:            2011-01-30 12:49:34
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __SMSSTRC_PACK_H__
#define __SMSSTRC_PACK_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"
#include "const_macro.h"
#include "ss_head.h"
#include "smsstrc_cmd.h"

using namespace std;

struct SSmsUser
{
public:
    SSmsUser()
    {
    }

    ~SSmsUser() { }
    SSmsUser(const string&  strUserId, const string&  strMobileNo)
    {
        m_userId = strUserId;
        m_mobileNo = strMobileNo;
    }
    SSmsUser&  operator=( const SSmsUser&  sSmsUser )
    {
        m_userId = sSmsUser.m_userId;
        m_mobileNo = sSmsUser.m_mobileNo;
        return *this;
    }

    string m_userId;
    string m_mobileNo;

public:
    uint32_t Size() const;
};

inline uint32_t SSmsUser::Size() const
{
    uint32_t nSize = 11;
    nSize += m_userId.length();
    nSize += m_mobileNo.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SSmsUser&  sSmsUser );
CPackData& operator>> ( CPackData& cPackData, SSmsUser&  sSmsUser );

class CBcNotifySmsMobileonline : public CPackData
{
public:
    enum
    {
        CMD_ID = BC_NOTIFY_SMS_MOBILEONLINE
    };
    CBcNotifySmsMobileonline()
    {
    }

    ~CBcNotifySmsMobileonline() { }
    CBcNotifySmsMobileonline(const string&  strUserId, const uint8_t&  chOnlineFlag)
    {
        m_userId = strUserId;
        m_onlineFlag = chOnlineFlag;
    }
    CBcNotifySmsMobileonline&  operator=( const CBcNotifySmsMobileonline&  cBcNotifySmsMobileonline )
    {
        m_userId = cBcNotifySmsMobileonline.m_userId;
        m_onlineFlag = cBcNotifySmsMobileonline.m_onlineFlag;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CBcNotifySmsMobileonline::Size() const
{
    uint32_t nSize = 8;
    nSize += m_userId.length();
    return nSize;
}

class CBcNotifySmsUserinfo : public CPackData
{
public:
    enum
    {
        CMD_ID = BC_NOTIFY_SMS_USERINFO
    };
    CBcNotifySmsUserinfo()
    {
    }

    ~CBcNotifySmsUserinfo() { }
    CBcNotifySmsUserinfo(const string&  strUserId, const uint8_t&  chBindFlag, const uint8_t&  chOnlineFlag, const uint8_t&  chRevFlag, const string&  strMobileNo, const uint32_t&  dwBalance, const uint32_t&  dwPrice)
    {
        m_userId = strUserId;
        m_bindFlag = chBindFlag;
        m_onlineFlag = chOnlineFlag;
        m_revFlag = chRevFlag;
        m_mobileNo = strMobileNo;
        m_balance = dwBalance;
        m_price = dwPrice;
    }
    CBcNotifySmsUserinfo&  operator=( const CBcNotifySmsUserinfo&  cBcNotifySmsUserinfo )
    {
        m_userId = cBcNotifySmsUserinfo.m_userId;
        m_bindFlag = cBcNotifySmsUserinfo.m_bindFlag;
        m_onlineFlag = cBcNotifySmsUserinfo.m_onlineFlag;
        m_revFlag = cBcNotifySmsUserinfo.m_revFlag;
        m_mobileNo = cBcNotifySmsUserinfo.m_mobileNo;
        m_balance = cBcNotifySmsUserinfo.m_balance;
        m_price = cBcNotifySmsUserinfo.m_price;
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
    const string&  GetMobileNo () const { return m_mobileNo; }
    bool SetMobileNo ( const string&  strMobileNo )
    {
        if(strMobileNo.size() > 16)
            return false;
        m_mobileNo = strMobileNo;
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
private:
    string m_userId;
    uint8_t m_bindFlag;
    uint8_t m_onlineFlag;
    uint8_t m_revFlag;
    string m_mobileNo;
    uint32_t m_balance;
    uint32_t m_price;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CBcNotifySmsUserinfo::Size() const
{
    uint32_t nSize = 27;
    nSize += m_userId.length();
    nSize += m_mobileNo.length();
    return nSize;
}

class CBcNotifySmsUserconfig : public CPackData
{
public:
    enum
    {
        CMD_ID = BC_NOTIFY_SMS_USERCONFIG
    };
    CBcNotifySmsUserconfig()
    {
    }

    ~CBcNotifySmsUserconfig() { }
    CBcNotifySmsUserconfig(const string&  strUserId, const uint8_t&  chOnlineFlag, const uint8_t&  chRevFlag)
    {
        m_userId = strUserId;
        m_onlineFlag = chOnlineFlag;
        m_revFlag = chRevFlag;
    }
    CBcNotifySmsUserconfig&  operator=( const CBcNotifySmsUserconfig&  cBcNotifySmsUserconfig )
    {
        m_userId = cBcNotifySmsUserconfig.m_userId;
        m_onlineFlag = cBcNotifySmsUserconfig.m_onlineFlag;
        m_revFlag = cBcNotifySmsUserconfig.m_revFlag;
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
    const uint8_t&  GetRevFlag () const { return m_revFlag; }
    bool SetRevFlag ( const uint8_t&  chRevFlag )
    {
        m_revFlag = chRevFlag;
        return true;
    }
private:
    string m_userId;
    uint8_t m_onlineFlag;
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

inline uint32_t CBcNotifySmsUserconfig::Size() const
{
    uint32_t nSize = 10;
    nSize += m_userId.length();
    return nSize;
}

#endif
