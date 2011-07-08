/*---------------------------------------------------------------------------
// Filename:        imss_pack.h
// Date:            2011-01-30 12:49:14
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __IMSS_PACK_H__
#define __IMSS_PACK_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"
#include "ss_head.h"
#include "const_macro.h"
#include "imss_cmd.h"

using namespace std;

struct SImMsg
{
public:
    SImMsg() : m_len(8),
            m_flag(0),
            m_seqid(0)
    {
    }

    ~SImMsg() { }
    SImMsg(const uint8_t&  chLen, const uint8_t&  chFlag, const uint16_t&  wCmdid, const uint32_t&  dwSeqid, const string&  strMessage)
    {
        m_len = chLen;
        m_flag = chFlag;
        m_cmdid = wCmdid;
        m_seqid = dwSeqid;
        m_message = strMessage;
    }
    SImMsg&  operator=( const SImMsg&  sImMsg )
    {
        m_len = sImMsg.m_len;
        m_flag = sImMsg.m_flag;
        m_cmdid = sImMsg.m_cmdid;
        m_seqid = sImMsg.m_seqid;
        m_message = sImMsg.m_message;
        return *this;
    }

    uint8_t m_len;
    uint8_t m_flag;
    uint16_t m_cmdid;
    uint32_t m_seqid;
    string m_message;

public:
    uint32_t Size() const;
};

inline uint32_t SImMsg::Size() const
{
    uint32_t nSize = 8;
    nSize += m_message.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SImMsg&  sImMsg );
CPackData& operator>> ( CPackData& cPackData, SImMsg&  sImMsg );

struct SIpBlackSs
{
public:
    SIpBlackSs()
    {
    }

    ~SIpBlackSs() { }
    SIpBlackSs(const uint32_t&  dwIp, const uint32_t&  dwStarttime, const uint32_t&  dwLasttime, const uint32_t&  dwNetmask)
    {
        m_ip = dwIp;
        m_starttime = dwStarttime;
        m_lasttime = dwLasttime;
        m_netmask = dwNetmask;
    }
    SIpBlackSs&  operator=( const SIpBlackSs&  sIpBlackSs )
    {
        m_ip = sIpBlackSs.m_ip;
        m_starttime = sIpBlackSs.m_starttime;
        m_lasttime = sIpBlackSs.m_lasttime;
        m_netmask = sIpBlackSs.m_netmask;
        return *this;
    }

    uint32_t m_ip;
    uint32_t m_starttime;
    uint32_t m_lasttime;
    uint32_t m_netmask;

public:
    uint32_t Size() const;
};

inline uint32_t SIpBlackSs::Size() const
{
    return 21;
}
CPackData& operator<< ( CPackData& cPackData, const SIpBlackSs&  sIpBlackSs );
CPackData& operator>> ( CPackData& cPackData, SIpBlackSs&  sIpBlackSs );

struct SEhmsGroupStatus
{
public:
    SEhmsGroupStatus() : m_groupId(0),
            m_status(0),
            m_predefsts(0)
    {
    }

    ~SEhmsGroupStatus() { }
    SEhmsGroupStatus(const string&  strUserId, const string&  strGroupName, const uint32_t&  dwGroupId= 0, const uint8_t&  chStatus= 0, const uint8_t&  chPredefsts= 0)
    {
        m_userId = strUserId;
        m_groupName = strGroupName;
        m_groupId = dwGroupId;
        m_status = chStatus;
        m_predefsts = chPredefsts;
    }
    SEhmsGroupStatus&  operator=( const SEhmsGroupStatus&  sEhmsGroupStatus )
    {
        m_userId = sEhmsGroupStatus.m_userId;
        m_groupName = sEhmsGroupStatus.m_groupName;
        m_groupId = sEhmsGroupStatus.m_groupId;
        m_status = sEhmsGroupStatus.m_status;
        m_predefsts = sEhmsGroupStatus.m_predefsts;
        return *this;
    }

    string m_userId;
    string m_groupName;
    uint32_t m_groupId;
    uint8_t m_status;
    uint8_t m_predefsts;

public:
    uint32_t Size() const;
};

inline uint32_t SEhmsGroupStatus::Size() const
{
    uint32_t nSize = 20;
    nSize += m_userId.length();
    nSize += m_groupName.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SEhmsGroupStatus&  sEhmsGroupStatus );
CPackData& operator>> ( CPackData& cPackData, SEhmsGroupStatus&  sEhmsGroupStatus );

class CImSsSendimmsg : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_SS_SENDIMMSG
    };
    CImSsSendimmsg() : m_esshiftflag(0),
            m_relationship(0),
            m_uniqtime(0)
    {
    }

    ~CImSsSendimmsg() { }
    CImSsSendimmsg(const string&  strSenduid, const string&  strTouid, const uint8_t&  chType, const string&  strMessage, const uint8_t&  chEsshiftflag= 0, const uint8_t&  chRelationship= 0, const uint32_t&  dwUniqtime= 0)
    {
        m_senduid = strSenduid;
        m_touid = strTouid;
        m_type = chType;
        m_message = strMessage;
        m_esshiftflag = chEsshiftflag;
        m_relationship = chRelationship;
        m_uniqtime = dwUniqtime;
    }
    CImSsSendimmsg&  operator=( const CImSsSendimmsg&  cImSsSendimmsg )
    {
        m_senduid = cImSsSendimmsg.m_senduid;
        m_touid = cImSsSendimmsg.m_touid;
        m_type = cImSsSendimmsg.m_type;
        m_message = cImSsSendimmsg.m_message;
        m_esshiftflag = cImSsSendimmsg.m_esshiftflag;
        m_relationship = cImSsSendimmsg.m_relationship;
        m_uniqtime = cImSsSendimmsg.m_uniqtime;
        return *this;
    }

    const string&  GetSenduid () const { return m_senduid; }
    bool SetSenduid ( const string&  strSenduid )
    {
        m_senduid = strSenduid;
        return true;
    }
    const string&  GetTouid () const { return m_touid; }
    bool SetTouid ( const string&  strTouid )
    {
        m_touid = strTouid;
        return true;
    }
    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const string&  GetMessage () const { return m_message; }
    bool SetMessage ( const string&  strMessage )
    {
        m_message = strMessage;
        return true;
    }
    const uint8_t&  GetEsshiftflag () const { return m_esshiftflag; }
    bool SetEsshiftflag ( const uint8_t&  chEsshiftflag )
    {
        m_esshiftflag = chEsshiftflag;
        return true;
    }
    const uint8_t&  GetRelationship () const { return m_relationship; }
    bool SetRelationship ( const uint8_t&  chRelationship )
    {
        m_relationship = chRelationship;
        return true;
    }
    const uint32_t&  GetUniqtime () const { return m_uniqtime; }
    bool SetUniqtime ( const uint32_t&  dwUniqtime )
    {
        m_uniqtime = dwUniqtime;
        return true;
    }
private:
    string m_senduid;
    string m_touid;
    uint8_t m_type;
    string m_message;
    uint8_t m_esshiftflag;
    uint8_t m_relationship;
    uint32_t m_uniqtime;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CImSsSendimmsg::Size() const
{
    uint32_t nSize = 27;
    nSize += m_senduid.length();
    nSize += m_touid.length();
    nSize += m_message.length();
    return nSize;
}

class CImSsForcedisconnect : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_SS_FORCEDISCONNECT
    };
    CImSsForcedisconnect()
    {
    }

    ~CImSsForcedisconnect() { }
    CImSsForcedisconnect(const string&  strUid, const uint8_t&  chType)
    {
        m_uid = strUid;
        m_type = chType;
    }
    CImSsForcedisconnect&  operator=( const CImSsForcedisconnect&  cImSsForcedisconnect )
    {
        m_uid = cImSsForcedisconnect.m_uid;
        m_type = cImSsForcedisconnect.m_type;
        return *this;
    }

    const string&  GetUid () const { return m_uid; }
    bool SetUid ( const string&  strUid )
    {
        m_uid = strUid;
        return true;
    }
    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
private:
    string m_uid;
    uint8_t m_type;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CImSsForcedisconnect::Size() const
{
    uint32_t nSize = 8;
    nSize += m_uid.length();
    return nSize;
}

class CImSsNtfusrstatus : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_SS_NTFUSRSTATUS
    };
    CImSsNtfusrstatus()
    {
    }

    ~CImSsNtfusrstatus() { }
    CImSsNtfusrstatus(const string&  strUid, const uint8_t&  chBasicstatus, const uint8_t&  chPredefstatus, const uint32_t&  dwClinetip, const string&  strVersion)
    {
        m_uid = strUid;
        m_basicstatus = chBasicstatus;
        m_predefstatus = chPredefstatus;
        m_clinetip = dwClinetip;
        m_version = strVersion;
    }
    CImSsNtfusrstatus&  operator=( const CImSsNtfusrstatus&  cImSsNtfusrstatus )
    {
        m_uid = cImSsNtfusrstatus.m_uid;
        m_basicstatus = cImSsNtfusrstatus.m_basicstatus;
        m_predefstatus = cImSsNtfusrstatus.m_predefstatus;
        m_clinetip = cImSsNtfusrstatus.m_clinetip;
        m_version = cImSsNtfusrstatus.m_version;
        return *this;
    }

    const string&  GetUid () const { return m_uid; }
    bool SetUid ( const string&  strUid )
    {
        m_uid = strUid;
        return true;
    }
    const uint8_t&  GetBasicstatus () const { return m_basicstatus; }
    bool SetBasicstatus ( const uint8_t&  chBasicstatus )
    {
        m_basicstatus = chBasicstatus;
        return true;
    }
    const uint8_t&  GetPredefstatus () const { return m_predefstatus; }
    bool SetPredefstatus ( const uint8_t&  chPredefstatus )
    {
        m_predefstatus = chPredefstatus;
        return true;
    }
    const uint32_t&  GetClinetip () const { return m_clinetip; }
    bool SetClinetip ( const uint32_t&  dwClinetip )
    {
        m_clinetip = dwClinetip;
        return true;
    }
    const string&  GetVersion () const { return m_version; }
    bool SetVersion ( const string&  strVersion )
    {
        m_version = strVersion;
        return true;
    }
private:
    string m_uid;
    uint8_t m_basicstatus;
    uint8_t m_predefstatus;
    uint32_t m_clinetip;
    string m_version;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CImSsNtfusrstatus::Size() const
{
    uint32_t nSize = 20;
    nSize += m_uid.length();
    nSize += m_version.length();
    return nSize;
}

class CImSsReqPeerinfo : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_SS_REQ_PEERINFO
    };
    CImSsReqPeerinfo()
    {
    }

    ~CImSsReqPeerinfo() { }
    CImSsReqPeerinfo(const string&  strTargetUid)
    {
        m_targetUid = strTargetUid;
    }
    CImSsReqPeerinfo&  operator=( const CImSsReqPeerinfo&  cImSsReqPeerinfo )
    {
        m_targetUid = cImSsReqPeerinfo.m_targetUid;
        return *this;
    }

    const string&  GetTargetUid () const { return m_targetUid; }
    bool SetTargetUid ( const string&  strTargetUid )
    {
        m_targetUid = strTargetUid;
        return true;
    }
private:
    string m_targetUid;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CImSsReqPeerinfo::Size() const
{
    uint32_t nSize = 6;
    nSize += m_targetUid.length();
    return nSize;
}

class CImSsRspPeerinfo : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_SS_RSP_PEERINFO
    };
    CImSsRspPeerinfo()
    {
    }

    ~CImSsRspPeerinfo() { }
    CImSsRspPeerinfo(const uint8_t&  chRetcode, const string&  strTargetId, const uint32_t&  dwClinetip, const string&  strVersion, const uint8_t&  chBasicStatus, const uint8_t&  chPredefStatus, const uint8_t&  chAddcontactFlag, const uint8_t&  chSendmsgFlag, const uint8_t&  chReverseContact)
    {
        m_retcode = chRetcode;
        m_targetId = strTargetId;
        m_clinetip = dwClinetip;
        m_version = strVersion;
        m_basicStatus = chBasicStatus;
        m_predefStatus = chPredefStatus;
        m_addcontactFlag = chAddcontactFlag;
        m_sendmsgFlag = chSendmsgFlag;
        m_reverseContact = chReverseContact;
    }
    CImSsRspPeerinfo&  operator=( const CImSsRspPeerinfo&  cImSsRspPeerinfo )
    {
        m_retcode = cImSsRspPeerinfo.m_retcode;
        m_targetId = cImSsRspPeerinfo.m_targetId;
        m_clinetip = cImSsRspPeerinfo.m_clinetip;
        m_version = cImSsRspPeerinfo.m_version;
        m_basicStatus = cImSsRspPeerinfo.m_basicStatus;
        m_predefStatus = cImSsRspPeerinfo.m_predefStatus;
        m_addcontactFlag = cImSsRspPeerinfo.m_addcontactFlag;
        m_sendmsgFlag = cImSsRspPeerinfo.m_sendmsgFlag;
        m_reverseContact = cImSsRspPeerinfo.m_reverseContact;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const string&  GetTargetId () const { return m_targetId; }
    bool SetTargetId ( const string&  strTargetId )
    {
        if(strTargetId.size() > 64)
            return false;
        m_targetId = strTargetId;
        return true;
    }
    const uint32_t&  GetClinetip () const { return m_clinetip; }
    bool SetClinetip ( const uint32_t&  dwClinetip )
    {
        m_clinetip = dwClinetip;
        return true;
    }
    const string&  GetVersion () const { return m_version; }
    bool SetVersion ( const string&  strVersion )
    {
        if(strVersion.size() > 128)
            return false;
        m_version = strVersion;
        return true;
    }
    const uint8_t&  GetBasicStatus () const { return m_basicStatus; }
    bool SetBasicStatus ( const uint8_t&  chBasicStatus )
    {
        m_basicStatus = chBasicStatus;
        return true;
    }
    const uint8_t&  GetPredefStatus () const { return m_predefStatus; }
    bool SetPredefStatus ( const uint8_t&  chPredefStatus )
    {
        m_predefStatus = chPredefStatus;
        return true;
    }
    const uint8_t&  GetAddcontactFlag () const { return m_addcontactFlag; }
    bool SetAddcontactFlag ( const uint8_t&  chAddcontactFlag )
    {
        m_addcontactFlag = chAddcontactFlag;
        return true;
    }
    const uint8_t&  GetSendmsgFlag () const { return m_sendmsgFlag; }
    bool SetSendmsgFlag ( const uint8_t&  chSendmsgFlag )
    {
        m_sendmsgFlag = chSendmsgFlag;
        return true;
    }
    const uint8_t&  GetReverseContact () const { return m_reverseContact; }
    bool SetReverseContact ( const uint8_t&  chReverseContact )
    {
        m_reverseContact = chReverseContact;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_targetId;
    uint32_t m_clinetip;
    string m_version;
    uint8_t m_basicStatus;
    uint8_t m_predefStatus;
    uint8_t m_addcontactFlag;
    uint8_t m_sendmsgFlag;
    uint8_t m_reverseContact;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CImSsRspPeerinfo::Size() const
{
    uint32_t nSize = 28;
    nSize += m_targetId.length();
    nSize += m_version.length();
    return nSize;
}

class CImSsNtfusrextinfoup : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_SS_NTFUSREXTINFOUP
    };
    CImSsNtfusrextinfoup()
    {
    }

    ~CImSsNtfusrextinfoup() { }
    CImSsNtfusrextinfoup(const string&  strExtType, const string&  strExtInfo)
    {
        m_extType = strExtType;
        m_extInfo = strExtInfo;
    }
    CImSsNtfusrextinfoup&  operator=( const CImSsNtfusrextinfoup&  cImSsNtfusrextinfoup )
    {
        m_extType = cImSsNtfusrextinfoup.m_extType;
        m_extInfo = cImSsNtfusrextinfoup.m_extInfo;
        return *this;
    }

    const string&  GetExtType () const { return m_extType; }
    bool SetExtType ( const string&  strExtType )
    {
        m_extType = strExtType;
        return true;
    }
    const string&  GetExtInfo () const { return m_extInfo; }
    bool SetExtInfo ( const string&  strExtInfo )
    {
        m_extInfo = strExtInfo;
        return true;
    }
private:
    string m_extType;
    string m_extInfo;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CImSsNtfusrextinfoup::Size() const
{
    uint32_t nSize = 11;
    nSize += m_extType.length();
    nSize += m_extInfo.length();
    return nSize;
}

class CImSsReqFtsaddr : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_SS_REQ_FTSADDR
    };
    CImSsReqFtsaddr()
    {
    }

    ~CImSsReqFtsaddr() { }
    CImSsReqFtsaddr(const string&  strSessionId, const uint16_t&  wType)
    {
        m_sessionId = strSessionId;
        m_type = wType;
    }
    CImSsReqFtsaddr&  operator=( const CImSsReqFtsaddr&  cImSsReqFtsaddr )
    {
        m_sessionId = cImSsReqFtsaddr.m_sessionId;
        m_type = cImSsReqFtsaddr.m_type;
        return *this;
    }

    const string&  GetSessionId () const { return m_sessionId; }
    bool SetSessionId ( const string&  strSessionId )
    {
        if(strSessionId.size() > 64)
            return false;
        m_sessionId = strSessionId;
        return true;
    }
    const uint16_t&  GetType () const { return m_type; }
    bool SetType ( const uint16_t&  wType )
    {
        m_type = wType;
        return true;
    }
private:
    string m_sessionId;
    uint16_t m_type;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CImSsReqFtsaddr::Size() const
{
    uint32_t nSize = 9;
    nSize += m_sessionId.length();
    return nSize;
}

class CImSsRspFtsaddr : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_SS_RSP_FTSADDR
    };
    CImSsRspFtsaddr()
    {
    }

    ~CImSsRspFtsaddr() { }
    CImSsRspFtsaddr(const uint8_t&  chRetcode, const string&  strServerIp, const uint16_t&  wServerPort, const string&  strSessionId)
    {
        m_retcode = chRetcode;
        m_serverIp = strServerIp;
        m_serverPort = wServerPort;
        m_sessionId = strSessionId;
    }
    CImSsRspFtsaddr&  operator=( const CImSsRspFtsaddr&  cImSsRspFtsaddr )
    {
        m_retcode = cImSsRspFtsaddr.m_retcode;
        m_serverIp = cImSsRspFtsaddr.m_serverIp;
        m_serverPort = cImSsRspFtsaddr.m_serverPort;
        m_sessionId = cImSsRspFtsaddr.m_sessionId;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const string&  GetServerIp () const { return m_serverIp; }
    bool SetServerIp ( const string&  strServerIp )
    {
        if(strServerIp.size() > 15)
            return false;
        m_serverIp = strServerIp;
        return true;
    }
    const uint16_t&  GetServerPort () const { return m_serverPort; }
    bool SetServerPort ( const uint16_t&  wServerPort )
    {
        m_serverPort = wServerPort;
        return true;
    }
    const string&  GetSessionId () const { return m_sessionId; }
    bool SetSessionId ( const string&  strSessionId )
    {
        if(strSessionId.size() > 64)
            return false;
        m_sessionId = strSessionId;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_serverIp;
    uint16_t m_serverPort;
    string m_sessionId;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CImSsRspFtsaddr::Size() const
{
    uint32_t nSize = 16;
    nSize += m_serverIp.length();
    nSize += m_sessionId.length();
    return nSize;
}

class CImSsReqSubcribeMsg : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_SS_REQ_SUBCRIBE_MSG
    };
    CImSsReqSubcribeMsg()
    {
    }

    ~CImSsReqSubcribeMsg() { }
    CImSsReqSubcribeMsg(const string&  strMsg, const map< string,string >&  mapHtmlMsg)
    {
        m_msg = strMsg;
        m_htmlMsg = mapHtmlMsg;
    }
    CImSsReqSubcribeMsg&  operator=( const CImSsReqSubcribeMsg&  cImSsReqSubcribeMsg )
    {
        m_msg = cImSsReqSubcribeMsg.m_msg;
        m_htmlMsg = cImSsReqSubcribeMsg.m_htmlMsg;
        return *this;
    }

    const string&  GetMsg () const { return m_msg; }
    bool SetMsg ( const string&  strMsg )
    {
        m_msg = strMsg;
        return true;
    }
    const map< string,string >&  GetHtmlMsg () const { return m_htmlMsg; }
    bool SetHtmlMsg ( const map< string,string >&  mapHtmlMsg )
    {
        m_htmlMsg = mapHtmlMsg;
        return true;
    }
private:
    string m_msg;
    map< string,string > m_htmlMsg;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CImSsReqSubcribeMsg::Size() const
{
    uint32_t nSize = 10;
    nSize += m_msg.length();
    nSize += m_htmlMsg.size() * 8;
    {
        map< string,string >::const_iterator itr;
        for(itr = m_htmlMsg.begin(); itr != m_htmlMsg.end(); ++itr)
        {
            nSize += itr->first.length();
            nSize += itr->second.length();
        }
    }
    return nSize;
}

class CImSsRspSubcribeMsg : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_SS_RSP_SUBCRIBE_MSG
    };
    CImSsRspSubcribeMsg()
    {
    }

    ~CImSsRspSubcribeMsg() { }
    CImSsRspSubcribeMsg(const uint8_t&  chStatus)
    {
        m_status = chStatus;
    }
    CImSsRspSubcribeMsg&  operator=( const CImSsRspSubcribeMsg&  cImSsRspSubcribeMsg )
    {
        m_status = cImSsRspSubcribeMsg.m_status;
        return *this;
    }

    const uint8_t&  GetStatus () const { return m_status; }
    bool SetStatus ( const uint8_t&  chStatus )
    {
        m_status = chStatus;
        return true;
    }
private:
    uint8_t m_status;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CImSsRspSubcribeMsg::Size() const
{
    return 3;
}
class CImReqSystemmessage : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_SYSTEMMESSAGE
    };
    CImReqSystemmessage()
    {
    }

    ~CImReqSystemmessage() { }
    CImReqSystemmessage(const string&  strTouid, const uint8_t&  chSaveflag, const uint32_t&  dwSysid, const uint16_t&  wCmdId, const string&  strStyle, const string&  strMessage)
    {
        m_touid = strTouid;
        m_saveflag = chSaveflag;
        m_sysid = dwSysid;
        m_cmdId = wCmdId;
        m_style = strStyle;
        m_message = strMessage;
    }
    CImReqSystemmessage&  operator=( const CImReqSystemmessage&  cImReqSystemmessage )
    {
        m_touid = cImReqSystemmessage.m_touid;
        m_saveflag = cImReqSystemmessage.m_saveflag;
        m_sysid = cImReqSystemmessage.m_sysid;
        m_cmdId = cImReqSystemmessage.m_cmdId;
        m_style = cImReqSystemmessage.m_style;
        m_message = cImReqSystemmessage.m_message;
        return *this;
    }

    const string&  GetTouid () const { return m_touid; }
    bool SetTouid ( const string&  strTouid )
    {
        m_touid = strTouid;
        return true;
    }
    const uint8_t&  GetSaveflag () const { return m_saveflag; }
    bool SetSaveflag ( const uint8_t&  chSaveflag )
    {
        m_saveflag = chSaveflag;
        return true;
    }
    const uint32_t&  GetSysid () const { return m_sysid; }
    bool SetSysid ( const uint32_t&  dwSysid )
    {
        m_sysid = dwSysid;
        return true;
    }
    const uint16_t&  GetCmdId () const { return m_cmdId; }
    bool SetCmdId ( const uint16_t&  wCmdId )
    {
        m_cmdId = wCmdId;
        return true;
    }
    const string&  GetStyle () const { return m_style; }
    bool SetStyle ( const string&  strStyle )
    {
        m_style = strStyle;
        return true;
    }
    const string&  GetMessage () const { return m_message; }
    bool SetMessage ( const string&  strMessage )
    {
        m_message = strMessage;
        return true;
    }
private:
    string m_touid;
    uint8_t m_saveflag;
    uint32_t m_sysid;
    uint16_t m_cmdId;
    string m_style;
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

inline uint32_t CImReqSystemmessage::Size() const
{
    uint32_t nSize = 26;
    nSize += m_touid.length();
    nSize += m_style.length();
    nSize += m_message.length();
    return nSize;
}

class CImRspSystemmessage : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_SYSTEMMESSAGE
    };
    CImRspSystemmessage()
    {
    }

    ~CImRspSystemmessage() { }
    CImRspSystemmessage(const string&  strTouid)
    {
        m_touid = strTouid;
    }
    CImRspSystemmessage&  operator=( const CImRspSystemmessage&  cImRspSystemmessage )
    {
        m_touid = cImRspSystemmessage.m_touid;
        return *this;
    }

    const string&  GetTouid () const { return m_touid; }
    bool SetTouid ( const string&  strTouid )
    {
        m_touid = strTouid;
        return true;
    }
private:
    string m_touid;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CImRspSystemmessage::Size() const
{
    uint32_t nSize = 6;
    nSize += m_touid.length();
    return nSize;
}

class CImSsNtfaddaccept : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_SS_NTFADDACCEPT
    };
    CImSsNtfaddaccept()
    {
    }

    ~CImSsNtfaddaccept() { }
    CImSsNtfaddaccept(const string&  strLoginid, const string&  strContactid, const uint8_t&  chStatus)
    {
        m_loginid = strLoginid;
        m_contactid = strContactid;
        m_status = chStatus;
    }
    CImSsNtfaddaccept&  operator=( const CImSsNtfaddaccept&  cImSsNtfaddaccept )
    {
        m_loginid = cImSsNtfaddaccept.m_loginid;
        m_contactid = cImSsNtfaddaccept.m_contactid;
        m_status = cImSsNtfaddaccept.m_status;
        return *this;
    }

    const string&  GetLoginid () const { return m_loginid; }
    bool SetLoginid ( const string&  strLoginid )
    {
        m_loginid = strLoginid;
        return true;
    }
    const string&  GetContactid () const { return m_contactid; }
    bool SetContactid ( const string&  strContactid )
    {
        m_contactid = strContactid;
        return true;
    }
    const uint8_t&  GetStatus () const { return m_status; }
    bool SetStatus ( const uint8_t&  chStatus )
    {
        m_status = chStatus;
        return true;
    }
private:
    string m_loginid;
    string m_contactid;
    uint8_t m_status;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CImSsNtfaddaccept::Size() const
{
    uint32_t nSize = 13;
    nSize += m_loginid.length();
    nSize += m_contactid.length();
    return nSize;
}

class CImSsNtfforbidip : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_SS_NTFFORBIDIP
    };
    CImSsNtfforbidip()
    {
    }

    ~CImSsNtfforbidip() { }
    CImSsNtfforbidip(const uint8_t&  chType, const VECTOR< SIpBlackSs >&  vecBlackIpList)
    {
        m_type = chType;
        m_blackIpList = vecBlackIpList;
    }
    CImSsNtfforbidip&  operator=( const CImSsNtfforbidip&  cImSsNtfforbidip )
    {
        m_type = cImSsNtfforbidip.m_type;
        m_blackIpList = cImSsNtfforbidip.m_blackIpList;
        return *this;
    }

    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const VECTOR< SIpBlackSs >&  GetBlackIpList () const { return m_blackIpList; }
    bool SetBlackIpList ( const VECTOR< SIpBlackSs >&  vecBlackIpList )
    {
        m_blackIpList = vecBlackIpList;
        return true;
    }
private:
    uint8_t m_type;
    VECTOR< SIpBlackSs > m_blackIpList;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CImSsNtfforbidip::Size() const
{
    uint32_t nSize = 7;
    for(uint32_t i = 0; i < m_blackIpList.size(); i++)
    {
        nSize += m_blackIpList[i].Size();
    }
    return nSize;
}

class CImSsNtfWatchInfo : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_SS_NTF_WATCH_INFO
    };
    CImSsNtfWatchInfo() : m_site("")
    {
    }

    ~CImSsNtfWatchInfo() { }
    CImSsNtfWatchInfo(const uint8_t&  chType, const string&  strMessage, const string&  strSite= "")
    {
        m_type = chType;
        m_message = strMessage;
        m_site = strSite;
    }
    CImSsNtfWatchInfo&  operator=( const CImSsNtfWatchInfo&  cImSsNtfWatchInfo )
    {
        m_type = cImSsNtfWatchInfo.m_type;
        m_message = cImSsNtfWatchInfo.m_message;
        m_site = cImSsNtfWatchInfo.m_site;
        return *this;
    }

    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const string&  GetMessage () const { return m_message; }
    bool SetMessage ( const string&  strMessage )
    {
        m_message = strMessage;
        return true;
    }
    const string&  GetSite () const { return m_site; }
    bool SetSite ( const string&  strSite )
    {
        m_site = strSite;
        return true;
    }
private:
    uint8_t m_type;
    string m_message;
    string m_site;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CImSsNtfWatchInfo::Size() const
{
    uint32_t nSize = 13;
    nSize += m_message.length();
    nSize += m_site.length();
    return nSize;
}

class CSsNtfRefreshContact : public CPackData
{
public:
    enum
    {
        CMD_ID = SS_NTF_REFRESH_CONTACT
    };
    CSsNtfRefreshContact() : m_groupId(0)
    {
    }

    ~CSsNtfRefreshContact() { }
    CSsNtfRefreshContact(const uint8_t&  chType, const string&  strContactId, const string&  strNickName, const int64_t&  llGroupId= 0)
    {
        m_type = chType;
        m_contactId = strContactId;
        m_nickName = strNickName;
        m_groupId = llGroupId;
    }
    CSsNtfRefreshContact&  operator=( const CSsNtfRefreshContact&  cSsNtfRefreshContact )
    {
        m_type = cSsNtfRefreshContact.m_type;
        m_contactId = cSsNtfRefreshContact.m_contactId;
        m_nickName = cSsNtfRefreshContact.m_nickName;
        m_groupId = cSsNtfRefreshContact.m_groupId;
        return *this;
    }

    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const string&  GetContactId () const { return m_contactId; }
    bool SetContactId ( const string&  strContactId )
    {
        if(strContactId.size() > 64)
            return false;
        m_contactId = strContactId;
        return true;
    }
    const string&  GetNickName () const { return m_nickName; }
    bool SetNickName ( const string&  strNickName )
    {
        if(strNickName.size() > 32)
            return false;
        m_nickName = strNickName;
        return true;
    }
    const int64_t&  GetGroupId () const { return m_groupId; }
    bool SetGroupId ( const int64_t&  llGroupId )
    {
        m_groupId = llGroupId;
        return true;
    }
private:
    uint8_t m_type;
    string m_contactId;
    string m_nickName;
    int64_t m_groupId;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSsNtfRefreshContact::Size() const
{
    uint32_t nSize = 22;
    nSize += m_contactId.length();
    nSize += m_nickName.length();
    return nSize;
}

class CSsNtfFeeds : public CPackData
{
public:
    enum
    {
        CMD_ID = SS_NTF_FEEDS
    };
    CSsNtfFeeds()
    {
    }

    ~CSsNtfFeeds() { }
    CSsNtfFeeds(const string&  strSite, const string&  strFromId, const uint32_t&  dwCreateTime, const string&  strContent)
    {
        m_site = strSite;
        m_fromId = strFromId;
        m_createTime = dwCreateTime;
        m_content = strContent;
    }
    CSsNtfFeeds&  operator=( const CSsNtfFeeds&  cSsNtfFeeds )
    {
        m_site = cSsNtfFeeds.m_site;
        m_fromId = cSsNtfFeeds.m_fromId;
        m_createTime = cSsNtfFeeds.m_createTime;
        m_content = cSsNtfFeeds.m_content;
        return *this;
    }

    const string&  GetSite () const { return m_site; }
    bool SetSite ( const string&  strSite )
    {
        if(strSite.size() > 8)
            return false;
        m_site = strSite;
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
    const uint32_t&  GetCreateTime () const { return m_createTime; }
    bool SetCreateTime ( const uint32_t&  dwCreateTime )
    {
        m_createTime = dwCreateTime;
        return true;
    }
    const string&  GetContent () const { return m_content; }
    bool SetContent ( const string&  strContent )
    {
        m_content = strContent;
        return true;
    }
private:
    string m_site;
    string m_fromId;
    uint32_t m_createTime;
    string m_content;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSsNtfFeeds::Size() const
{
    uint32_t nSize = 25;
    nSize += m_fromId.length();
    nSize += m_content.length();
    return nSize;
}

class CSsNtfUserSnsinfo : public CPackData
{
public:
    enum
    {
        CMD_ID = SS_NTF_USER_SNSINFO
    };
    CSsNtfUserSnsinfo()
    {
    }

    ~CSsNtfUserSnsinfo() { }
    CSsNtfUserSnsinfo(const string&  strFromId, const uint8_t&  chType, const map< string,string >&  mapInfo)
    {
        m_fromId = strFromId;
        m_type = chType;
        m_info = mapInfo;
    }
    CSsNtfUserSnsinfo&  operator=( const CSsNtfUserSnsinfo&  cSsNtfUserSnsinfo )
    {
        m_fromId = cSsNtfUserSnsinfo.m_fromId;
        m_type = cSsNtfUserSnsinfo.m_type;
        m_info = cSsNtfUserSnsinfo.m_info;
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
    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const map< string,string >&  GetInfo () const { return m_info; }
    bool SetInfo ( const map< string,string >&  mapInfo )
    {
        m_info = mapInfo;
        return true;
    }
private:
    string m_fromId;
    uint8_t m_type;
    map< string,string > m_info;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSsNtfUserSnsinfo::Size() const
{
    uint32_t nSize = 12;
    nSize += m_fromId.length();
    nSize += m_info.size() * 8;
    {
        map< string,string >::const_iterator itr;
        for(itr = m_info.begin(); itr != m_info.end(); ++itr)
        {
            nSize += itr->first.length();
            nSize += itr->second.length();
        }
    }
    return nSize;
}

class CSsNtfAddRcnt : public CPackData
{
public:
    enum
    {
        CMD_ID = SS_NTF_ADD_RCNT
    };
    CSsNtfAddRcnt()
    {
    }

    ~CSsNtfAddRcnt() { }
    CSsNtfAddRcnt(const string&  strFromId, const string&  strContactId, const uint8_t&  chOptime, const uint8_t&  chType, const string&  strSite)
    {
        m_fromId = strFromId;
        m_contactId = strContactId;
        m_optime = chOptime;
        m_type = chType;
        m_site = strSite;
    }
    CSsNtfAddRcnt&  operator=( const CSsNtfAddRcnt&  cSsNtfAddRcnt )
    {
        m_fromId = cSsNtfAddRcnt.m_fromId;
        m_contactId = cSsNtfAddRcnt.m_contactId;
        m_optime = cSsNtfAddRcnt.m_optime;
        m_type = cSsNtfAddRcnt.m_type;
        m_site = cSsNtfAddRcnt.m_site;
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
    const string&  GetContactId () const { return m_contactId; }
    bool SetContactId ( const string&  strContactId )
    {
        if(strContactId.size() > 64)
            return false;
        m_contactId = strContactId;
        return true;
    }
    const uint8_t&  GetOptime () const { return m_optime; }
    bool SetOptime ( const uint8_t&  chOptime )
    {
        m_optime = chOptime;
        return true;
    }
    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const string&  GetSite () const { return m_site; }
    bool SetSite ( const string&  strSite )
    {
        m_site = strSite;
        return true;
    }
private:
    string m_fromId;
    string m_contactId;
    uint8_t m_optime;
    uint8_t m_type;
    string m_site;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSsNtfAddRcnt::Size() const
{
    uint32_t nSize = 20;
    nSize += m_fromId.length();
    nSize += m_contactId.length();
    nSize += m_site.length();
    return nSize;
}

class CImSsNtfOperationtip : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_SS_NTF_OPERATIONTIP
    };
    CImSsNtfOperationtip()
    {
    }

    ~CImSsNtfOperationtip() { }
    CImSsNtfOperationtip(const string&  strContactId, const string&  strNtfmessage, const uint32_t&  dwNtftime)
    {
        m_contactId = strContactId;
        m_ntfmessage = strNtfmessage;
        m_ntftime = dwNtftime;
    }
    CImSsNtfOperationtip&  operator=( const CImSsNtfOperationtip&  cImSsNtfOperationtip )
    {
        m_contactId = cImSsNtfOperationtip.m_contactId;
        m_ntfmessage = cImSsNtfOperationtip.m_ntfmessage;
        m_ntftime = cImSsNtfOperationtip.m_ntftime;
        return *this;
    }

    const string&  GetContactId () const { return m_contactId; }
    bool SetContactId ( const string&  strContactId )
    {
        m_contactId = strContactId;
        return true;
    }
    const string&  GetNtfmessage () const { return m_ntfmessage; }
    bool SetNtfmessage ( const string&  strNtfmessage )
    {
        m_ntfmessage = strNtfmessage;
        return true;
    }
    const uint32_t&  GetNtftime () const { return m_ntftime; }
    bool SetNtftime ( const uint32_t&  dwNtftime )
    {
        m_ntftime = dwNtftime;
        return true;
    }
private:
    string m_contactId;
    string m_ntfmessage;
    uint32_t m_ntftime;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CImSsNtfOperationtip::Size() const
{
    uint32_t nSize = 16;
    nSize += m_contactId.length();
    nSize += m_ntfmessage.length();
    return nSize;
}

class CSsNtfEhmsGroupsts : public CPackData
{
public:
    enum
    {
        CMD_ID = SS_NTF_EHMS_GROUPSTS
    };
    CSsNtfEhmsGroupsts()
    {
    }

    ~CSsNtfEhmsGroupsts() { }
    CSsNtfEhmsGroupsts(const SEhmsGroupStatus&  sGroupSts)
    {
        m_groupSts = sGroupSts;
    }
    CSsNtfEhmsGroupsts&  operator=( const CSsNtfEhmsGroupsts&  cSsNtfEhmsGroupsts )
    {
        m_groupSts = cSsNtfEhmsGroupsts.m_groupSts;
        return *this;
    }

    const SEhmsGroupStatus&  GetGroupSts () const { return m_groupSts; }
    bool SetGroupSts ( const SEhmsGroupStatus&  sGroupSts )
    {
        m_groupSts = sGroupSts;
        return true;
    }
private:
    SEhmsGroupStatus m_groupSts;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSsNtfEhmsGroupsts::Size() const
{
    uint32_t nSize = 2;
    nSize += m_groupSts.Size();
    return nSize;
}

class CSsNtfEhmsLogin : public CPackData
{
public:
    enum
    {
        CMD_ID = SS_NTF_EHMS_LOGIN
    };
    CSsNtfEhmsLogin()
    {
    }

    ~CSsNtfEhmsLogin() { }
    CSsNtfEhmsLogin(const string&  strUid)
    {
        m_uid = strUid;
    }
    CSsNtfEhmsLogin&  operator=( const CSsNtfEhmsLogin&  cSsNtfEhmsLogin )
    {
        m_uid = cSsNtfEhmsLogin.m_uid;
        return *this;
    }

    const string&  GetUid () const { return m_uid; }
    bool SetUid ( const string&  strUid )
    {
        m_uid = strUid;
        return true;
    }
private:
    string m_uid;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSsNtfEhmsLogin::Size() const
{
    uint32_t nSize = 6;
    nSize += m_uid.length();
    return nSize;
}

class CSsReqGetallehmsgrpsts : public CPackData
{
public:
    enum
    {
        CMD_ID = SS_REQ_GETALLEHMSGRPSTS
    };
    ~CSsReqGetallehmsgrpsts() { }
public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSsReqGetallehmsgrpsts::Size() const
{
    return 1;
}
class CSsRspGetallehmsgrpsts : public CPackData
{
public:
    enum
    {
        CMD_ID = SS_RSP_GETALLEHMSGRPSTS
    };
    CSsRspGetallehmsgrpsts()
    {
    }

    ~CSsRspGetallehmsgrpsts() { }
    CSsRspGetallehmsgrpsts(const uint8_t&  chRetcode, const VECTOR< SEhmsGroupStatus >&  vecGroupStsList)
    {
        m_retcode = chRetcode;
        m_groupStsList = vecGroupStsList;
    }
    CSsRspGetallehmsgrpsts&  operator=( const CSsRspGetallehmsgrpsts&  cSsRspGetallehmsgrpsts )
    {
        m_retcode = cSsRspGetallehmsgrpsts.m_retcode;
        m_groupStsList = cSsRspGetallehmsgrpsts.m_groupStsList;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const VECTOR< SEhmsGroupStatus >&  GetGroupStsList () const { return m_groupStsList; }
    bool SetGroupStsList ( const VECTOR< SEhmsGroupStatus >&  vecGroupStsList )
    {
        m_groupStsList = vecGroupStsList;
        return true;
    }
private:
    uint8_t m_retcode;
    VECTOR< SEhmsGroupStatus > m_groupStsList;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSsRspGetallehmsgrpsts::Size() const
{
    uint32_t nSize = 9;
    for(uint32_t i = 0; i < m_groupStsList.size(); i++)
    {
        nSize += m_groupStsList[i].Size();
    }
    return nSize;
}

class CImSsSendHmsmsg : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_SS_SEND_HMSMSG
    };
    CImSsSendHmsmsg() : m_cmdType(0)
    {
    }

    ~CImSsSendHmsmsg() { }
    CImSsSendHmsmsg(const string&  strSenduid, const string&  strTargetfid, const string&  strTouid, const uint8_t&  chType, const string&  strMessage, const uint16_t&  wActionType, const uint16_t&  wCmdType, const uint32_t&  dwReserved, const uint32_t&  dwUniqtime)
    {
        m_senduid = strSenduid;
        m_targetfid = strTargetfid;
        m_touid = strTouid;
        m_type = chType;
        m_message = strMessage;
        m_actionType = wActionType;
        m_cmdType = wCmdType;
        m_reserved = dwReserved;
        m_uniqtime = dwUniqtime;
    }
    CImSsSendHmsmsg&  operator=( const CImSsSendHmsmsg&  cImSsSendHmsmsg )
    {
        m_senduid = cImSsSendHmsmsg.m_senduid;
        m_targetfid = cImSsSendHmsmsg.m_targetfid;
        m_touid = cImSsSendHmsmsg.m_touid;
        m_type = cImSsSendHmsmsg.m_type;
        m_message = cImSsSendHmsmsg.m_message;
        m_actionType = cImSsSendHmsmsg.m_actionType;
        m_cmdType = cImSsSendHmsmsg.m_cmdType;
        m_reserved = cImSsSendHmsmsg.m_reserved;
        m_uniqtime = cImSsSendHmsmsg.m_uniqtime;
        return *this;
    }

    const string&  GetSenduid () const { return m_senduid; }
    bool SetSenduid ( const string&  strSenduid )
    {
        m_senduid = strSenduid;
        return true;
    }
    const string&  GetTargetfid () const { return m_targetfid; }
    bool SetTargetfid ( const string&  strTargetfid )
    {
        m_targetfid = strTargetfid;
        return true;
    }
    const string&  GetTouid () const { return m_touid; }
    bool SetTouid ( const string&  strTouid )
    {
        m_touid = strTouid;
        return true;
    }
    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const string&  GetMessage () const { return m_message; }
    bool SetMessage ( const string&  strMessage )
    {
        m_message = strMessage;
        return true;
    }
    const uint16_t&  GetActionType () const { return m_actionType; }
    bool SetActionType ( const uint16_t&  wActionType )
    {
        m_actionType = wActionType;
        return true;
    }
    const uint16_t&  GetCmdType () const { return m_cmdType; }
    bool SetCmdType ( const uint16_t&  wCmdType )
    {
        m_cmdType = wCmdType;
        return true;
    }
    const uint32_t&  GetReserved () const { return m_reserved; }
    bool SetReserved ( const uint32_t&  dwReserved )
    {
        m_reserved = dwReserved;
        return true;
    }
    const uint32_t&  GetUniqtime () const { return m_uniqtime; }
    bool SetUniqtime ( const uint32_t&  dwUniqtime )
    {
        m_uniqtime = dwUniqtime;
        return true;
    }
private:
    string m_senduid;
    string m_targetfid;
    string m_touid;
    uint8_t m_type;
    string m_message;
    uint16_t m_actionType;
    uint16_t m_cmdType;
    uint32_t m_reserved;
    uint32_t m_uniqtime;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CImSsSendHmsmsg::Size() const
{
    uint32_t nSize = 39;
    nSize += m_senduid.length();
    nSize += m_targetfid.length();
    nSize += m_touid.length();
    nSize += m_message.length();
    return nSize;
}

class CImReqSystemmapmessage : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_SYSTEMMAPMESSAGE
    };
    CImReqSystemmapmessage()
    {
    }

    ~CImReqSystemmapmessage() { }
    CImReqSystemmapmessage(const uint32_t&  dwSysId, const map< string,string >&  mapMapmessage, const string&  strExtmessage)
    {
        m_sysId = dwSysId;
        m_mapmessage = mapMapmessage;
        m_extmessage = strExtmessage;
    }
    CImReqSystemmapmessage&  operator=( const CImReqSystemmapmessage&  cImReqSystemmapmessage )
    {
        m_sysId = cImReqSystemmapmessage.m_sysId;
        m_mapmessage = cImReqSystemmapmessage.m_mapmessage;
        m_extmessage = cImReqSystemmapmessage.m_extmessage;
        return *this;
    }

    const uint32_t&  GetSysId () const { return m_sysId; }
    bool SetSysId ( const uint32_t&  dwSysId )
    {
        m_sysId = dwSysId;
        return true;
    }
    const map< string,string >&  GetMapmessage () const { return m_mapmessage; }
    bool SetMapmessage ( const map< string,string >&  mapMapmessage )
    {
        m_mapmessage = mapMapmessage;
        return true;
    }
    const string&  GetExtmessage () const { return m_extmessage; }
    bool SetExtmessage ( const string&  strExtmessage )
    {
        m_extmessage = strExtmessage;
        return true;
    }
private:
    uint32_t m_sysId;
    map< string,string > m_mapmessage;
    string m_extmessage;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CImReqSystemmapmessage::Size() const
{
    uint32_t nSize = 15;
    nSize += m_mapmessage.size() * 8;
    {
        map< string,string >::const_iterator itr;
        for(itr = m_mapmessage.begin(); itr != m_mapmessage.end(); ++itr)
        {
            nSize += itr->first.length();
            nSize += itr->second.length();
        }
    }
    nSize += m_extmessage.length();
    return nSize;
}

class CImRspSystemmapmessage : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_SYSTEMMAPMESSAGE
    };
    CImRspSystemmapmessage()
    {
    }

    ~CImRspSystemmapmessage() { }
    CImRspSystemmapmessage(const uint32_t&  dwSysId, const uint32_t&  dwStatus)
    {
        m_sysId = dwSysId;
        m_status = dwStatus;
    }
    CImRspSystemmapmessage&  operator=( const CImRspSystemmapmessage&  cImRspSystemmapmessage )
    {
        m_sysId = cImRspSystemmapmessage.m_sysId;
        m_status = cImRspSystemmapmessage.m_status;
        return *this;
    }

    const uint32_t&  GetSysId () const { return m_sysId; }
    bool SetSysId ( const uint32_t&  dwSysId )
    {
        m_sysId = dwSysId;
        return true;
    }
    const uint32_t&  GetStatus () const { return m_status; }
    bool SetStatus ( const uint32_t&  dwStatus )
    {
        m_status = dwStatus;
        return true;
    }
private:
    uint32_t m_sysId;
    uint32_t m_status;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CImRspSystemmapmessage::Size() const
{
    return 11;
}
class CImSsNtfWebsysmessage : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_SS_NTF_WEBSYSMESSAGE
    };
    CImSsNtfWebsysmessage()
    {
    }

    ~CImSsNtfWebsysmessage() { }
    CImSsNtfWebsysmessage(const string&  strCreateid, const int32_t&  lCmdid, const string&  strStyle, const string&  strMessage, const string&  strServiceid, const string&  strWebid, const uint16_t&  wSaveflag, const string&  strExpiretime)
    {
        m_createid = strCreateid;
        m_cmdid = lCmdid;
        m_style = strStyle;
        m_message = strMessage;
        m_serviceid = strServiceid;
        m_webid = strWebid;
        m_saveflag = wSaveflag;
        m_expiretime = strExpiretime;
    }
    CImSsNtfWebsysmessage&  operator=( const CImSsNtfWebsysmessage&  cImSsNtfWebsysmessage )
    {
        m_createid = cImSsNtfWebsysmessage.m_createid;
        m_cmdid = cImSsNtfWebsysmessage.m_cmdid;
        m_style = cImSsNtfWebsysmessage.m_style;
        m_message = cImSsNtfWebsysmessage.m_message;
        m_serviceid = cImSsNtfWebsysmessage.m_serviceid;
        m_webid = cImSsNtfWebsysmessage.m_webid;
        m_saveflag = cImSsNtfWebsysmessage.m_saveflag;
        m_expiretime = cImSsNtfWebsysmessage.m_expiretime;
        return *this;
    }

    const string&  GetCreateid () const { return m_createid; }
    bool SetCreateid ( const string&  strCreateid )
    {
        m_createid = strCreateid;
        return true;
    }
    const int32_t&  GetCmdid () const { return m_cmdid; }
    bool SetCmdid ( const int32_t&  lCmdid )
    {
        m_cmdid = lCmdid;
        return true;
    }
    const string&  GetStyle () const { return m_style; }
    bool SetStyle ( const string&  strStyle )
    {
        m_style = strStyle;
        return true;
    }
    const string&  GetMessage () const { return m_message; }
    bool SetMessage ( const string&  strMessage )
    {
        m_message = strMessage;
        return true;
    }
    const string&  GetServiceid () const { return m_serviceid; }
    bool SetServiceid ( const string&  strServiceid )
    {
        m_serviceid = strServiceid;
        return true;
    }
    const string&  GetWebid () const { return m_webid; }
    bool SetWebid ( const string&  strWebid )
    {
        m_webid = strWebid;
        return true;
    }
    const uint16_t&  GetSaveflag () const { return m_saveflag; }
    bool SetSaveflag ( const uint16_t&  wSaveflag )
    {
        m_saveflag = wSaveflag;
        return true;
    }
    const string&  GetExpiretime () const { return m_expiretime; }
    bool SetExpiretime ( const string&  strExpiretime )
    {
        m_expiretime = strExpiretime;
        return true;
    }
private:
    string m_createid;
    int32_t m_cmdid;
    string m_style;
    string m_message;
    string m_serviceid;
    string m_webid;
    uint16_t m_saveflag;
    string m_expiretime;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CImSsNtfWebsysmessage::Size() const
{
    uint32_t nSize = 39;
    nSize += m_createid.length();
    nSize += m_style.length();
    nSize += m_message.length();
    nSize += m_serviceid.length();
    nSize += m_webid.length();
    nSize += m_expiretime.length();
    return nSize;
}

class CImSsNtfWebusermessage : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_SS_NTF_WEBUSERMESSAGE
    };
    CImSsNtfWebusermessage()
    {
    }

    ~CImSsNtfWebusermessage() { }
    CImSsNtfWebusermessage(const string&  strFromId, const int32_t&  lCmdId, const map< string,string >&  mapInfo, const string&  strServiceid, const string&  strWebid)
    {
        m_fromId = strFromId;
        m_cmdId = lCmdId;
        m_info = mapInfo;
        m_serviceid = strServiceid;
        m_webid = strWebid;
    }
    CImSsNtfWebusermessage&  operator=( const CImSsNtfWebusermessage&  cImSsNtfWebusermessage )
    {
        m_fromId = cImSsNtfWebusermessage.m_fromId;
        m_cmdId = cImSsNtfWebusermessage.m_cmdId;
        m_info = cImSsNtfWebusermessage.m_info;
        m_serviceid = cImSsNtfWebusermessage.m_serviceid;
        m_webid = cImSsNtfWebusermessage.m_webid;
        return *this;
    }

    const string&  GetFromId () const { return m_fromId; }
    bool SetFromId ( const string&  strFromId )
    {
        m_fromId = strFromId;
        return true;
    }
    const int32_t&  GetCmdId () const { return m_cmdId; }
    bool SetCmdId ( const int32_t&  lCmdId )
    {
        m_cmdId = lCmdId;
        return true;
    }
    const map< string,string >&  GetInfo () const { return m_info; }
    bool SetInfo ( const map< string,string >&  mapInfo )
    {
        m_info = mapInfo;
        return true;
    }
    const string&  GetServiceid () const { return m_serviceid; }
    bool SetServiceid ( const string&  strServiceid )
    {
        m_serviceid = strServiceid;
        return true;
    }
    const string&  GetWebid () const { return m_webid; }
    bool SetWebid ( const string&  strWebid )
    {
        m_webid = strWebid;
        return true;
    }
private:
    string m_fromId;
    int32_t m_cmdId;
    map< string,string > m_info;
    string m_serviceid;
    string m_webid;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CImSsNtfWebusermessage::Size() const
{
    uint32_t nSize = 25;
    nSize += m_fromId.length();
    nSize += m_info.size() * 8;
    {
        map< string,string >::const_iterator itr;
        for(itr = m_info.begin(); itr != m_info.end(); ++itr)
        {
            nSize += itr->first.length();
            nSize += itr->second.length();
        }
    }
    nSize += m_serviceid.length();
    nSize += m_webid.length();
    return nSize;
}

class CSsNtfUnbindDisconnect : public CPackData
{
public:
    enum
    {
        CMD_ID = SS_NTF_UNBIND_DISCONNECT
    };
    CSsNtfUnbindDisconnect()
    {
    }

    ~CSsNtfUnbindDisconnect() { }
    CSsNtfUnbindDisconnect(const uint8_t&  chType, const string&  strRemark)
    {
        m_type = chType;
        m_remark = strRemark;
    }
    CSsNtfUnbindDisconnect&  operator=( const CSsNtfUnbindDisconnect&  cSsNtfUnbindDisconnect )
    {
        m_type = cSsNtfUnbindDisconnect.m_type;
        m_remark = cSsNtfUnbindDisconnect.m_remark;
        return *this;
    }

    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const string&  GetRemark () const { return m_remark; }
    bool SetRemark ( const string&  strRemark )
    {
        if(strRemark.size() > 256)
            return false;
        m_remark = strRemark;
        return true;
    }
private:
    uint8_t m_type;
    string m_remark;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSsNtfUnbindDisconnect::Size() const
{
    uint32_t nSize = 8;
    nSize += m_remark.length();
    return nSize;
}

#endif
