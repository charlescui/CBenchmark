/*---------------------------------------------------------------------------
// Filename:        smsa_pack.h
// Date:            2011-01-30 12:49:59
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __SMSA_PACK_H__
#define __SMSA_PACK_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"
#include "msc_head.h"

using namespace std;

#ifndef UID_LENGTH
#define UID_LENGTH 64
#endif 

#ifndef MOBILE_LENGTH
#define MOBILE_LENGTH 16
#endif 

enum SMSA_CMD
{
    SC_SMS_NOTIFY_UPLOADMSG = 0x2000,
    SC_REQ_SMS_SEND_MESSAGE = 0x2001,
    SC_RSP_SMS_SEND_MESSAGE = 0x2002,
    SC_NOTIFY_SMS_MOBILEONLINE = 0x2003,
    SC_RSP_SMS_MOBILEONLINE = 0x2004,
    SC_NOTIFY_SMS_MOBILEBIND = 0x2005,
    SC_CONFIRM_SMS_MOBILEBIND = 0x2006,
    SC_NOTIFY_SMS_MODIFYBLACKLIST = 0x2007,
};

struct SWebSmsUser
{
public:
    SWebSmsUser()
    {
    }

    ~SWebSmsUser() { }
    SWebSmsUser(const string&  strUserId, const string&  strMobileNo)
    {
        m_userId = strUserId;
        m_mobileNo = strMobileNo;
    }
    SWebSmsUser&  operator=( const SWebSmsUser&  sWebSmsUser )
    {
        m_userId = sWebSmsUser.m_userId;
        m_mobileNo = sWebSmsUser.m_mobileNo;
        return *this;
    }

    string m_userId;
    string m_mobileNo;

public:
    uint32_t Size() const;
};

inline uint32_t SWebSmsUser::Size() const
{
    return 80;
}
CPackData& operator<< ( CPackData& cPackData, const SWebSmsUser&  sWebSmsUser );
CPackData& operator>> ( CPackData& cPackData, SWebSmsUser&  sWebSmsUser );

class CScNotifySmsModifyblacklist : public CPackData
{
public:
    enum
    {
        CMD_ID = SC_NOTIFY_SMS_MODIFYBLACKLIST
    };
    CScNotifySmsModifyblacklist()
    {
    }

    ~CScNotifySmsModifyblacklist() { }
    CScNotifySmsModifyblacklist(const uint8_t&  chFlag, const VECTOR< SWebSmsUser >&  vecUserList)
    {
        m_flag = chFlag;
        m_userList = vecUserList;
    }
    CScNotifySmsModifyblacklist&  operator=( const CScNotifySmsModifyblacklist&  cScNotifySmsModifyblacklist )
    {
        m_flag = cScNotifySmsModifyblacklist.m_flag;
        m_userList = cScNotifySmsModifyblacklist.m_userList;
        return *this;
    }

    const uint8_t&  GetFlag () const { return m_flag; }
    bool SetFlag ( const uint8_t&  chFlag )
    {
        m_flag = chFlag;
        return true;
    }
    const VECTOR< SWebSmsUser >&  GetUserList () const { return m_userList; }
    bool SetUserList ( const VECTOR< SWebSmsUser >&  vecUserList )
    {
        m_userList = vecUserList;
        return true;
    }
private:
    uint8_t m_flag;
    VECTOR< SWebSmsUser > m_userList;

public:
    CMscHead m_mscHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CScNotifySmsModifyblacklist::Size() const
{
    uint32_t nSize = 5;
    for(uint32_t i = 0; i < m_userList.size(); i++)
    {
        nSize += m_userList[i].Size();
    }
    return nSize;
}

class CScSmsNotifyUploadmsg : public CPackData
{
public:
    enum
    {
        CMD_ID = SC_SMS_NOTIFY_UPLOADMSG
    };
    CScSmsNotifyUploadmsg()
    {
    }

    ~CScSmsNotifyUploadmsg() { }
    CScSmsNotifyUploadmsg(const string&  strFromId, const string&  strFromMobile, const uint8_t&  chBindFlag, const string&  strToId, const string&  strToMobile, const uint8_t&  chCmd, const string&  strMessage)
    {
        m_fromId = strFromId;
        m_fromMobile = strFromMobile;
        m_bindFlag = chBindFlag;
        m_toId = strToId;
        m_toMobile = strToMobile;
        m_cmd = chCmd;
        m_message = strMessage;
    }
    CScSmsNotifyUploadmsg&  operator=( const CScSmsNotifyUploadmsg&  cScSmsNotifyUploadmsg )
    {
        m_fromId = cScSmsNotifyUploadmsg.m_fromId;
        m_fromMobile = cScSmsNotifyUploadmsg.m_fromMobile;
        m_bindFlag = cScSmsNotifyUploadmsg.m_bindFlag;
        m_toId = cScSmsNotifyUploadmsg.m_toId;
        m_toMobile = cScSmsNotifyUploadmsg.m_toMobile;
        m_cmd = cScSmsNotifyUploadmsg.m_cmd;
        m_message = cScSmsNotifyUploadmsg.m_message;
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
    const string&  GetFromMobile () const { return m_fromMobile; }
    bool SetFromMobile ( const string&  strFromMobile )
    {
        if(strFromMobile.size() > 16)
            return false;
        m_fromMobile = strFromMobile;
        return true;
    }
    const uint8_t&  GetBindFlag () const { return m_bindFlag; }
    bool SetBindFlag ( const uint8_t&  chBindFlag )
    {
        m_bindFlag = chBindFlag;
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
    const string&  GetToMobile () const { return m_toMobile; }
    bool SetToMobile ( const string&  strToMobile )
    {
        if(strToMobile.size() > 16)
            return false;
        m_toMobile = strToMobile;
        return true;
    }
    const uint8_t&  GetCmd () const { return m_cmd; }
    bool SetCmd ( const uint8_t&  chCmd )
    {
        m_cmd = chCmd;
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
    string m_fromMobile;
    uint8_t m_bindFlag;
    string m_toId;
    string m_toMobile;
    uint8_t m_cmd;
    string m_message;

public:
    CMscHead m_mscHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CScSmsNotifyUploadmsg::Size() const
{
    uint32_t nSize = 154;
    nSize += m_fromMobile.length();
    nSize += m_message.length();
    return nSize;
}

class CScReqSmsSendMessage : public CPackData
{
public:
    enum
    {
        CMD_ID = SC_REQ_SMS_SEND_MESSAGE
    };
    CScReqSmsSendMessage()
    {
    }

    ~CScReqSmsSendMessage() { }
    CScReqSmsSendMessage(const string&  strFromId, const string&  strToId, const string&  strToMobile, const string&  strMessage, const uint8_t&  chType)
    {
        m_fromId = strFromId;
        m_toId = strToId;
        m_toMobile = strToMobile;
        m_message = strMessage;
        m_type = chType;
    }
    CScReqSmsSendMessage&  operator=( const CScReqSmsSendMessage&  cScReqSmsSendMessage )
    {
        m_fromId = cScReqSmsSendMessage.m_fromId;
        m_toId = cScReqSmsSendMessage.m_toId;
        m_toMobile = cScReqSmsSendMessage.m_toMobile;
        m_message = cScReqSmsSendMessage.m_message;
        m_type = cScReqSmsSendMessage.m_type;
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
    const string&  GetToId () const { return m_toId; }
    bool SetToId ( const string&  strToId )
    {
        if(strToId.size() > 64)
            return false;
        m_toId = strToId;
        return true;
    }
    const string&  GetToMobile () const { return m_toMobile; }
    bool SetToMobile ( const string&  strToMobile )
    {
        if(strToMobile.size() > 16)
            return false;
        m_toMobile = strToMobile;
        return true;
    }
    const string&  GetMessage () const { return m_message; }
    bool SetMessage ( const string&  strMessage )
    {
        m_message = strMessage;
        return true;
    }
    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
private:
    string m_fromId;
    string m_toId;
    string m_toMobile;
    string m_message;
    uint8_t m_type;

public:
    CMscHead m_mscHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CScReqSmsSendMessage::Size() const
{
    uint32_t nSize = 149;
    nSize += m_message.length();
    return nSize;
}

class CScRspSmsSendMessage : public CPackData
{
public:
    enum
    {
        CMD_ID = SC_RSP_SMS_SEND_MESSAGE
    };
    CScRspSmsSendMessage()
    {
    }

    ~CScRspSmsSendMessage() { }
    CScRspSmsSendMessage(const uint8_t&  chStatus, const string&  strFromId, const string&  strToId, const string&  strToMobile, const string&  strMessage, const uint8_t&  chType)
    {
        m_status = chStatus;
        m_fromId = strFromId;
        m_toId = strToId;
        m_toMobile = strToMobile;
        m_message = strMessage;
        m_type = chType;
    }
    CScRspSmsSendMessage&  operator=( const CScRspSmsSendMessage&  cScRspSmsSendMessage )
    {
        m_status = cScRspSmsSendMessage.m_status;
        m_fromId = cScRspSmsSendMessage.m_fromId;
        m_toId = cScRspSmsSendMessage.m_toId;
        m_toMobile = cScRspSmsSendMessage.m_toMobile;
        m_message = cScRspSmsSendMessage.m_message;
        m_type = cScRspSmsSendMessage.m_type;
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
    const string&  GetToId () const { return m_toId; }
    bool SetToId ( const string&  strToId )
    {
        if(strToId.size() > 64)
            return false;
        m_toId = strToId;
        return true;
    }
    const string&  GetToMobile () const { return m_toMobile; }
    bool SetToMobile ( const string&  strToMobile )
    {
        if(strToMobile.size() > 16)
            return false;
        m_toMobile = strToMobile;
        return true;
    }
    const string&  GetMessage () const { return m_message; }
    bool SetMessage ( const string&  strMessage )
    {
        m_message = strMessage;
        return true;
    }
    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
private:
    uint8_t m_status;
    string m_fromId;
    string m_toId;
    string m_toMobile;
    string m_message;
    uint8_t m_type;

public:
    CMscHead m_mscHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CScRspSmsSendMessage::Size() const
{
    uint32_t nSize = 150;
    nSize += m_message.length();
    return nSize;
}

class CScNotifySmsMobileonline : public CPackData
{
public:
    enum
    {
        CMD_ID = SC_NOTIFY_SMS_MOBILEONLINE
    };
    CScNotifySmsMobileonline()
    {
    }

    ~CScNotifySmsMobileonline() { }
    CScNotifySmsMobileonline(const string&  strUserId, const uint8_t&  chOnlineFlag, const uint8_t&  chRevFlag)
    {
        m_userId = strUserId;
        m_onlineFlag = chOnlineFlag;
        m_revFlag = chRevFlag;
    }
    CScNotifySmsMobileonline&  operator=( const CScNotifySmsMobileonline&  cScNotifySmsMobileonline )
    {
        m_userId = cScNotifySmsMobileonline.m_userId;
        m_onlineFlag = cScNotifySmsMobileonline.m_onlineFlag;
        m_revFlag = cScNotifySmsMobileonline.m_revFlag;
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
    CMscHead m_mscHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CScNotifySmsMobileonline::Size() const
{
    return 66;
}
class CScRspSmsMobileonline : public CPackData
{
public:
    enum
    {
        CMD_ID = SC_RSP_SMS_MOBILEONLINE
    };
    CScRspSmsMobileonline()
    {
    }

    ~CScRspSmsMobileonline() { }
    CScRspSmsMobileonline(const uint8_t&  chStatus, const string&  strUserId, const uint8_t&  chOnlineFlag, const uint8_t&  chRevFlag)
    {
        m_status = chStatus;
        m_userId = strUserId;
        m_onlineFlag = chOnlineFlag;
        m_revFlag = chRevFlag;
    }
    CScRspSmsMobileonline&  operator=( const CScRspSmsMobileonline&  cScRspSmsMobileonline )
    {
        m_status = cScRspSmsMobileonline.m_status;
        m_userId = cScRspSmsMobileonline.m_userId;
        m_onlineFlag = cScRspSmsMobileonline.m_onlineFlag;
        m_revFlag = cScRspSmsMobileonline.m_revFlag;
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
    uint8_t m_onlineFlag;
    uint8_t m_revFlag;

public:
    CMscHead m_mscHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CScRspSmsMobileonline::Size() const
{
    return 67;
}
class CScNotifySmsMobilebind : public CPackData
{
public:
    enum
    {
        CMD_ID = SC_NOTIFY_SMS_MOBILEBIND
    };
    CScNotifySmsMobilebind()
    {
    }

    ~CScNotifySmsMobilebind() { }
    CScNotifySmsMobilebind(const string&  strUserId, const uint8_t&  chBindFlag)
    {
        m_userId = strUserId;
        m_bindFlag = chBindFlag;
    }
    CScNotifySmsMobilebind&  operator=( const CScNotifySmsMobilebind&  cScNotifySmsMobilebind )
    {
        m_userId = cScNotifySmsMobilebind.m_userId;
        m_bindFlag = cScNotifySmsMobilebind.m_bindFlag;
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
    CMscHead m_mscHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CScNotifySmsMobilebind::Size() const
{
    return 65;
}
class CScConfirmSmsMobilebind : public CPackData
{
public:
    enum
    {
        CMD_ID = SC_CONFIRM_SMS_MOBILEBIND
    };
    CScConfirmSmsMobilebind()
    {
    }

    ~CScConfirmSmsMobilebind() { }
    CScConfirmSmsMobilebind(const uint8_t&  chStatus, const string&  strUserId, const uint8_t&  chBindFlag)
    {
        m_status = chStatus;
        m_userId = strUserId;
        m_bindFlag = chBindFlag;
    }
    CScConfirmSmsMobilebind&  operator=( const CScConfirmSmsMobilebind&  cScConfirmSmsMobilebind )
    {
        m_status = cScConfirmSmsMobilebind.m_status;
        m_userId = cScConfirmSmsMobilebind.m_userId;
        m_bindFlag = cScConfirmSmsMobilebind.m_bindFlag;
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
private:
    uint8_t m_status;
    string m_userId;
    uint8_t m_bindFlag;

public:
    CMscHead m_mscHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CScConfirmSmsMobilebind::Size() const
{
    return 66;
}
#endif
