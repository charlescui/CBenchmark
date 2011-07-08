/*---------------------------------------------------------------------------
// Filename:        rgss_pack.h
// Date:            2011-01-30 12:49:18
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __RGSS_PACK_H__
#define __RGSS_PACK_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"
#include "ss_head.h"
#include "const_macro.h"
#include "imss_cmd.h"

using namespace std;

struct SSsuserStatus
{
public:
    SSsuserStatus()
    {
    }

    ~SSsuserStatus() { }
    SSsuserStatus(const string&  strUserId, const uint16_t&  wServId, const uint8_t&  chBasicStatus, const uint8_t&  chPredefStatus, const uint32_t&  dwIp, const string&  strVersion)
    {
        m_userId = strUserId;
        m_servId = wServId;
        m_basicStatus = chBasicStatus;
        m_predefStatus = chPredefStatus;
        m_ip = dwIp;
        m_version = strVersion;
    }
    SSsuserStatus&  operator=( const SSsuserStatus&  sSsuserStatus )
    {
        m_userId = sSsuserStatus.m_userId;
        m_servId = sSsuserStatus.m_servId;
        m_basicStatus = sSsuserStatus.m_basicStatus;
        m_predefStatus = sSsuserStatus.m_predefStatus;
        m_ip = sSsuserStatus.m_ip;
        m_version = sSsuserStatus.m_version;
        return *this;
    }

    string m_userId;
    uint16_t m_servId;
    uint8_t m_basicStatus;
    uint8_t m_predefStatus;
    uint32_t m_ip;
    string m_version;

public:
    uint32_t Size() const;
};

inline uint32_t SSsuserStatus::Size() const
{
    uint32_t nSize = 23;
    nSize += m_userId.length();
    nSize += m_version.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SSsuserStatus&  sSsuserStatus );
CPackData& operator>> ( CPackData& cPackData, SSsuserStatus&  sSsuserStatus );

class CSsReqGetallusersts : public CPackData
{
public:
    enum
    {
        CMD_ID = SS_REQ_GETALLUSERSTS
    };
    ~CSsReqGetallusersts() { }
public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSsReqGetallusersts::Size() const
{
    return 1;
}
class CSsRspGetallusersts : public CPackData
{
public:
    enum
    {
        CMD_ID = SS_RSP_GETALLUSERSTS
    };
    CSsRspGetallusersts()
    {
    }

    ~CSsRspGetallusersts() { }
    CSsRspGetallusersts(const VECTOR< SSsuserStatus >&  vecUserStsList)
    {
        m_userStsList = vecUserStsList;
    }
    CSsRspGetallusersts&  operator=( const CSsRspGetallusersts&  cSsRspGetallusersts )
    {
        m_userStsList = cSsRspGetallusersts.m_userStsList;
        return *this;
    }

    const VECTOR< SSsuserStatus >&  GetUserStsList () const { return m_userStsList; }
    bool SetUserStsList ( const VECTOR< SSsuserStatus >&  vecUserStsList )
    {
        m_userStsList = vecUserStsList;
        return true;
    }
private:
    VECTOR< SSsuserStatus > m_userStsList;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSsRspGetallusersts::Size() const
{
    uint32_t nSize = 7;
    for(uint32_t i = 0; i < m_userStsList.size(); i++)
    {
        nSize += m_userStsList[i].Size();
    }
    return nSize;
}

class CSsReqGetuserstatus : public CPackData
{
public:
    enum
    {
        CMD_ID = SS_REQ_GETUSERSTATUS
    };
    CSsReqGetuserstatus()
    {
    }

    ~CSsReqGetuserstatus() { }
    CSsReqGetuserstatus(const uint8_t&  chType, const VECTOR< string >&  vecUserList)
    {
        m_type = chType;
        m_userList = vecUserList;
    }
    CSsReqGetuserstatus&  operator=( const CSsReqGetuserstatus&  cSsReqGetuserstatus )
    {
        m_type = cSsReqGetuserstatus.m_type;
        m_userList = cSsReqGetuserstatus.m_userList;
        return *this;
    }

    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const VECTOR< string >&  GetUserList () const { return m_userList; }
    bool SetUserList ( const VECTOR< string >&  vecUserList )
    {
        m_userList = vecUserList;
        return true;
    }
private:
    uint8_t m_type;
    VECTOR< string > m_userList;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSsReqGetuserstatus::Size() const
{
    uint32_t nSize = 9;
    nSize += m_userList.size() * 4;
    for(uint32_t i = 0; i < m_userList.size(); i++)
    {
        nSize += m_userList[i].length();
    }
    return nSize;
}

class CSsRspGetuserstatus : public CPackData
{
public:
    enum
    {
        CMD_ID = SS_RSP_GETUSERSTATUS
    };
    CSsRspGetuserstatus()
    {
    }

    ~CSsRspGetuserstatus() { }
    CSsRspGetuserstatus(const uint8_t&  chType, const VECTOR< SSsuserStatus >&  vecUserStsList)
    {
        m_type = chType;
        m_userStsList = vecUserStsList;
    }
    CSsRspGetuserstatus&  operator=( const CSsRspGetuserstatus&  cSsRspGetuserstatus )
    {
        m_type = cSsRspGetuserstatus.m_type;
        m_userStsList = cSsRspGetuserstatus.m_userStsList;
        return *this;
    }

    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const VECTOR< SSsuserStatus >&  GetUserStsList () const { return m_userStsList; }
    bool SetUserStsList ( const VECTOR< SSsuserStatus >&  vecUserStsList )
    {
        m_userStsList = vecUserStsList;
        return true;
    }
private:
    uint8_t m_type;
    VECTOR< SSsuserStatus > m_userStsList;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSsRspGetuserstatus::Size() const
{
    uint32_t nSize = 9;
    for(uint32_t i = 0; i < m_userStsList.size(); i++)
    {
        nSize += m_userStsList[i].Size();
    }
    return nSize;
}

class CImSsNtfuserposError : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_SS_NTFUSERPOS_ERROR
    };
    ~CImSsNtfuserposError() { }
public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CImSsNtfuserposError::Size() const
{
    return 1;
}
class CSsRspReportuserpos : public CPackData
{
public:
    enum
    {
        CMD_ID = SS_RSP_REPORTUSERPOS
    };
    CSsRspReportuserpos()
    {
    }

    ~CSsRspReportuserpos() { }
    CSsRspReportuserpos(const SSsuserStatus&  sUserSts)
    {
        m_userSts = sUserSts;
    }
    CSsRspReportuserpos&  operator=( const CSsRspReportuserpos&  cSsRspReportuserpos )
    {
        m_userSts = cSsRspReportuserpos.m_userSts;
        return *this;
    }

    const SSsuserStatus&  GetUserSts () const { return m_userSts; }
    bool SetUserSts ( const SSsuserStatus&  sUserSts )
    {
        m_userSts = sUserSts;
        return true;
    }
private:
    SSsuserStatus m_userSts;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSsRspReportuserpos::Size() const
{
    uint32_t nSize = 2;
    nSize += m_userSts.Size();
    return nSize;
}

class CSsNtfVersionMessage : public CPackData
{
public:
    enum
    {
        CMD_ID = SS_NTF_VERSION_MESSAGE
    };
    CSsNtfVersionMessage()
    {
    }

    ~CSsNtfVersionMessage() { }
    CSsNtfVersionMessage(const uint8_t&  chType, const string&  strVersion, const string&  strPacket)
    {
        m_type = chType;
        m_version = strVersion;
        m_packet = strPacket;
    }
    CSsNtfVersionMessage&  operator=( const CSsNtfVersionMessage&  cSsNtfVersionMessage )
    {
        m_type = cSsNtfVersionMessage.m_type;
        m_version = cSsNtfVersionMessage.m_version;
        m_packet = cSsNtfVersionMessage.m_packet;
        return *this;
    }

    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const string&  GetVersion () const { return m_version; }
    bool SetVersion ( const string&  strVersion )
    {
        m_version = strVersion;
        return true;
    }
    const string&  GetPacket () const { return m_packet; }
    bool SetPacket ( const string&  strPacket )
    {
        m_packet = strPacket;
        return true;
    }
private:
    uint8_t m_type;
    string m_version;
    string m_packet;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSsNtfVersionMessage::Size() const
{
    uint32_t nSize = 13;
    nSize += m_version.length();
    nSize += m_packet.length();
    return nSize;
}

#endif
