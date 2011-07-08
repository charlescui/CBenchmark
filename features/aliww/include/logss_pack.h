/*---------------------------------------------------------------------------
// Filename:        logss_pack.h
// Date:            2011-01-30 12:49:51
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __LOGSS_PACK_H__
#define __LOGSS_PACK_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"
#include "ss_head.h"
#include "const_macro.h"

using namespace std;

enum LOG_REQUEST
{
    SS_REQ_LOG                  = 0x2,

};

enum LOG_RESPONSE
{
    SS_RSP_LOG                  = 0x1,

};

struct SLogServerInfo
{
public:
    SLogServerInfo()
    {
    }

    ~SLogServerInfo() { }
    SLogServerInfo(const string&  strMachineInfo, const string&  strType)
    {
        m_machineInfo = strMachineInfo;
        m_type = strType;
    }
    SLogServerInfo&  operator=( const SLogServerInfo&  sLogServerInfo )
    {
        m_machineInfo = sLogServerInfo.m_machineInfo;
        m_type = sLogServerInfo.m_type;
        return *this;
    }

    string m_machineInfo;
    string m_type;

public:
    uint32_t Size() const;
};

inline uint32_t SLogServerInfo::Size() const
{
    uint32_t nSize = 11;
    nSize += m_machineInfo.length();
    nSize += m_type.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SLogServerInfo&  sLogServerInfo );
CPackData& operator>> ( CPackData& cPackData, SLogServerInfo&  sLogServerInfo );

class CSsReqLog : public CPackData
{
public:
    enum
    {
        CMD_ID = SS_REQ_LOG
    };
    CSsReqLog()
    {
    }

    ~CSsReqLog() { }
    CSsReqLog(const SLogServerInfo&  sHostInfo, const string&  strWarnInfo)
    {
        m_hostInfo = sHostInfo;
        m_warnInfo = strWarnInfo;
    }
    CSsReqLog&  operator=( const CSsReqLog&  cSsReqLog )
    {
        m_hostInfo = cSsReqLog.m_hostInfo;
        m_warnInfo = cSsReqLog.m_warnInfo;
        return *this;
    }

    const SLogServerInfo&  GetHostInfo () const { return m_hostInfo; }
    bool SetHostInfo ( const SLogServerInfo&  sHostInfo )
    {
        m_hostInfo = sHostInfo;
        return true;
    }
    const string&  GetWarnInfo () const { return m_warnInfo; }
    bool SetWarnInfo ( const string&  strWarnInfo )
    {
        m_warnInfo = strWarnInfo;
        return true;
    }
private:
    SLogServerInfo m_hostInfo;
    string m_warnInfo;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSsReqLog::Size() const
{
    uint32_t nSize = 7;
    nSize += m_hostInfo.Size();
    nSize += m_warnInfo.length();
    return nSize;
}

class CSsRspLog : public CPackData
{
public:
    enum
    {
        CMD_ID = SS_RSP_LOG
    };
    CSsRspLog()
    {
    }

    ~CSsRspLog() { }
    CSsRspLog(const string&  strInfo)
    {
        m_info = strInfo;
    }
    CSsRspLog&  operator=( const CSsRspLog&  cSsRspLog )
    {
        m_info = cSsRspLog.m_info;
        return *this;
    }

    const string&  GetInfo () const { return m_info; }
    bool SetInfo ( const string&  strInfo )
    {
        m_info = strInfo;
        return true;
    }
private:
    string m_info;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSsRspLog::Size() const
{
    uint32_t nSize = 6;
    nSize += m_info.length();
    return nSize;
}

#endif
