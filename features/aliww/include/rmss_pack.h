/*---------------------------------------------------------------------------
// Filename:        rmss_pack.h
// Date:            2011-01-30 12:49:21
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __RMSS_PACK_H__
#define __RMSS_PACK_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"
#include "ss_head.h"
#include "const_macro.h"

using namespace std;

enum RMSS_REQUEST
{
    SS_REQ_RGSREGISTER          = 0x2,

};

enum RMSS_RESPONSE
{
    SS_RSP_RGSREGISTER          = 0x10002,

};

struct SServerInfo
{
public:
    SServerInfo()
    {
    }

    ~SServerInfo() { }
    SServerInfo(const uint16_t&  wServId, const string&  strHostIp, const uint16_t&  wHostPort)
    {
        m_servId = wServId;
        m_hostIp = strHostIp;
        m_hostPort = wHostPort;
    }
    SServerInfo&  operator=( const SServerInfo&  sServerInfo )
    {
        m_servId = sServerInfo.m_servId;
        m_hostIp = sServerInfo.m_hostIp;
        m_hostPort = sServerInfo.m_hostPort;
        return *this;
    }

    uint16_t m_servId;
    string m_hostIp;
    uint16_t m_hostPort;

public:
    uint32_t Size() const;
};

inline uint32_t SServerInfo::Size() const
{
    uint32_t nSize = 12;
    nSize += m_hostIp.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SServerInfo&  sServerInfo );
CPackData& operator>> ( CPackData& cPackData, SServerInfo&  sServerInfo );

class CSsReqRgsregister : public CPackData
{
public:
    enum
    {
        CMD_ID = SS_REQ_RGSREGISTER
    };
    CSsReqRgsregister()
    {
    }

    ~CSsReqRgsregister() { }
    CSsReqRgsregister(const SServerInfo&  sHostInfo)
    {
        m_hostInfo = sHostInfo;
    }
    CSsReqRgsregister&  operator=( const CSsReqRgsregister&  cSsReqRgsregister )
    {
        m_hostInfo = cSsReqRgsregister.m_hostInfo;
        return *this;
    }

    const SServerInfo&  GetHostInfo () const { return m_hostInfo; }
    bool SetHostInfo ( const SServerInfo&  sHostInfo )
    {
        m_hostInfo = sHostInfo;
        return true;
    }
private:
    SServerInfo m_hostInfo;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSsReqRgsregister::Size() const
{
    uint32_t nSize = 2;
    nSize += m_hostInfo.Size();
    return nSize;
}

class CSsRspRgsregister : public CPackData
{
public:
    enum
    {
        CMD_ID = SS_RSP_RGSREGISTER
    };
    CSsRspRgsregister()
    {
    }

    ~CSsRspRgsregister() { }
    CSsRspRgsregister(const uint8_t&  chRetcode, const VECTOR< SServerInfo >&  vecRgsList)
    {
        m_retcode = chRetcode;
        m_rgsList = vecRgsList;
    }
    CSsRspRgsregister&  operator=( const CSsRspRgsregister&  cSsRspRgsregister )
    {
        m_retcode = cSsRspRgsregister.m_retcode;
        m_rgsList = cSsRspRgsregister.m_rgsList;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const VECTOR< SServerInfo >&  GetRgsList () const { return m_rgsList; }
    bool SetRgsList ( const VECTOR< SServerInfo >&  vecRgsList )
    {
        m_rgsList = vecRgsList;
        return true;
    }
private:
    uint8_t m_retcode;
    VECTOR< SServerInfo > m_rgsList;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSsRspRgsregister::Size() const
{
    uint32_t nSize = 9;
    for(uint32_t i = 0; i < m_rgsList.size(); i++)
    {
        nSize += m_rgsList[i].Size();
    }
    return nSize;
}

#endif
