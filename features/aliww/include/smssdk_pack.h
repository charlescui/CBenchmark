/*---------------------------------------------------------------------------
// Filename:        smssdk_pack.h
// Date:            2011-01-30 12:49:55
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __SMSSDK_PACK_H__
#define __SMSSDK_PACK_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"
#include "sdkss_head.h"

using namespace std;

#ifndef SEQID_LENGTH
#define SEQID_LENGTH 16
#endif 

#ifndef ERRDESC_LENGTH
#define ERRDESC_LENGTH 64
#endif 

#ifndef MOBILE_LENGTH
#define MOBILE_LENGTH 32
#endif 

#ifndef ACCOUNT_LENGTH
#define ACCOUNT_LENGTH 64
#endif 

#ifndef TRANSID_LENGTH
#define TRANSID_LENGTH 32
#endif 

#ifndef CONTENT_LENGTH
#define CONTENT_LENGTH 256
#endif 

#ifndef TIME_MAX_LENGTH
#define TIME_MAX_LENGTH 20
#endif 

enum SMSSDK_CMD
{
    SMS_UPLOAD_MESSAGE = 0x1,
    SMS_REPORT_ERROR = 0x2,
};

class CSmsUploadMessage : public CPackData
{
public:
    enum
    {
        CMD_ID = SMS_UPLOAD_MESSAGE
    };
    CSmsUploadMessage()
    {
    }

    ~CSmsUploadMessage() { }
    CSmsUploadMessage(const string&  strTransId, const string&  strFromMobile, const string&  strToAccount, const string&  strSendTime, const string&  strMessage)
    {
        m_transId = strTransId;
        m_fromMobile = strFromMobile;
        m_toAccount = strToAccount;
        m_sendTime = strSendTime;
        m_message = strMessage;
    }
    CSmsUploadMessage&  operator=( const CSmsUploadMessage&  cSmsUploadMessage )
    {
        m_transId = cSmsUploadMessage.m_transId;
        m_fromMobile = cSmsUploadMessage.m_fromMobile;
        m_toAccount = cSmsUploadMessage.m_toAccount;
        m_sendTime = cSmsUploadMessage.m_sendTime;
        m_message = cSmsUploadMessage.m_message;
        return *this;
    }

    const string&  GetTransId () const { return m_transId; }
    bool SetTransId ( const string&  strTransId )
    {
        if(strTransId.size() > 32)
            return false;
        m_transId = strTransId;
        return true;
    }
    const string&  GetFromMobile () const { return m_fromMobile; }
    bool SetFromMobile ( const string&  strFromMobile )
    {
        if(strFromMobile.size() > 32)
            return false;
        m_fromMobile = strFromMobile;
        return true;
    }
    const string&  GetToAccount () const { return m_toAccount; }
    bool SetToAccount ( const string&  strToAccount )
    {
        if(strToAccount.size() > 64)
            return false;
        m_toAccount = strToAccount;
        return true;
    }
    const string&  GetSendTime () const { return m_sendTime; }
    bool SetSendTime ( const string&  strSendTime )
    {
        if(strSendTime.size() > 20)
            return false;
        m_sendTime = strSendTime;
        return true;
    }
    const string&  GetMessage () const { return m_message; }
    bool SetMessage ( const string&  strMessage )
    {
        if(strMessage.size() > 256)
            return false;
        m_message = strMessage;
        return true;
    }
private:
    string m_transId;
    string m_fromMobile;
    string m_toAccount;
    string m_sendTime;
    string m_message;

public:
    CSdkssHead m_sdkssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSmsUploadMessage::Size() const
{
    uint32_t nSize = 20;
    nSize += m_transId.length();
    nSize += m_fromMobile.length();
    nSize += m_toAccount.length();
    nSize += m_sendTime.length();
    nSize += m_message.length();
    return nSize;
}

class CSmsReportError : public CPackData
{
public:
    enum
    {
        CMD_ID = SMS_REPORT_ERROR
    };
    CSmsReportError()
    {
    }

    ~CSmsReportError() { }
    CSmsReportError(const uint32_t&  dwStatus, const string&  strTransId, const string&  strDesc)
    {
        m_status = dwStatus;
        m_transId = strTransId;
        m_desc = strDesc;
    }
    CSmsReportError&  operator=( const CSmsReportError&  cSmsReportError )
    {
        m_status = cSmsReportError.m_status;
        m_transId = cSmsReportError.m_transId;
        m_desc = cSmsReportError.m_desc;
        return *this;
    }

    const uint32_t&  GetStatus () const { return m_status; }
    bool SetStatus ( const uint32_t&  dwStatus )
    {
        m_status = dwStatus;
        return true;
    }
    const string&  GetTransId () const { return m_transId; }
    bool SetTransId ( const string&  strTransId )
    {
        if(strTransId.size() > 32)
            return false;
        m_transId = strTransId;
        return true;
    }
    const string&  GetDesc () const { return m_desc; }
    bool SetDesc ( const string&  strDesc )
    {
        if(strDesc.size() > 64)
            return false;
        m_desc = strDesc;
        return true;
    }
private:
    uint32_t m_status;
    string m_transId;
    string m_desc;

public:
    CSdkssHead m_sdkssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSmsReportError::Size() const
{
    uint32_t nSize = 12;
    nSize += m_transId.length();
    nSize += m_desc.length();
    return nSize;
}

#endif
