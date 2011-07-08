/*---------------------------------------------------------------------------
// Filename:        monitorsc_pack.h
// Date:            2011-01-30 12:49:47
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __MONITORSC_PACK_H__
#define __MONITORSC_PACK_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"
#include "des.h"
#include <zlib.h>
#include "sc_head.h"
#include "const_macro.h"

using namespace std;

enum MONITOR_CMD
{
    SC_REQ_REGISTER             = 0x1,
    SC_RSP_REGISTER             = 0x2,
    SC_REQ_CANCEL_REGISTER      = 0x3,
    SC_RSP_CANCEL_REGISTER      = 0x4,
    SC_REQ_SVR_STATUS           = 0x5,

};

struct SAppServerInfo
{
public:
    SAppServerInfo()
    {
    }

    ~SAppServerInfo() { }
    SAppServerInfo(const uint32_t&  dwId, const string&  strIdcname, const string&  strIp, const string&  strApptype, const string&  strProcessname, const string&  strMachineinfo, const string&  strMonitortype, const uint32_t&  dwInterval, const string&  strVersion)
    {
        m_id = dwId;
        m_idcname = strIdcname;
        m_ip = strIp;
        m_apptype = strApptype;
        m_processname = strProcessname;
        m_machineinfo = strMachineinfo;
        m_monitortype = strMonitortype;
        m_interval = dwInterval;
        m_version = strVersion;
    }
    SAppServerInfo&  operator=( const SAppServerInfo&  sAppServerInfo )
    {
        m_id = sAppServerInfo.m_id;
        m_idcname = sAppServerInfo.m_idcname;
        m_ip = sAppServerInfo.m_ip;
        m_apptype = sAppServerInfo.m_apptype;
        m_processname = sAppServerInfo.m_processname;
        m_machineinfo = sAppServerInfo.m_machineinfo;
        m_monitortype = sAppServerInfo.m_monitortype;
        m_interval = sAppServerInfo.m_interval;
        m_version = sAppServerInfo.m_version;
        return *this;
    }

    uint32_t m_id;
    string m_idcname;
    string m_ip;
    string m_apptype;
    string m_processname;
    string m_machineinfo;
    string m_monitortype;
    uint32_t m_interval;
    string m_version;

public:
    uint32_t Size() const;
};

inline uint32_t SAppServerInfo::Size() const
{
    uint32_t nSize = 46;
    nSize += m_idcname.length();
    nSize += m_ip.length();
    nSize += m_apptype.length();
    nSize += m_processname.length();
    nSize += m_machineinfo.length();
    nSize += m_monitortype.length();
    nSize += m_version.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SAppServerInfo&  sAppServerInfo );
CPackData& operator>> ( CPackData& cPackData, SAppServerInfo&  sAppServerInfo );

class CScReqRegister : public CPackData
{
public:
    enum
    {
        CMD_ID = SC_REQ_REGISTER
    };
    CScReqRegister()
    {
    }

    ~CScReqRegister() { }
    CScReqRegister(const SAppServerInfo&  sInfo)
    {
        m_info = sInfo;
    }
    CScReqRegister&  operator=( const CScReqRegister&  cScReqRegister )
    {
        m_info = cScReqRegister.m_info;
        return *this;
    }

    const SAppServerInfo&  GetInfo () const { return m_info; }
    bool SetInfo ( const SAppServerInfo&  sInfo )
    {
        m_info = sInfo;
        return true;
    }
private:
    SAppServerInfo m_info;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CScReqRegister::Size() const
{
    uint32_t nSize = 2;
    nSize += m_info.Size();
    return nSize;
}

class CScRspRegister : public CPackData
{
public:
    enum
    {
        CMD_ID = SC_RSP_REGISTER
    };
    CScRspRegister()
    {
    }

    ~CScRspRegister() { }
    CScRspRegister(const uint32_t&  dwRetcode, const uint32_t&  dwId)
    {
        m_retcode = dwRetcode;
        m_id = dwId;
    }
    CScRspRegister&  operator=( const CScRspRegister&  cScRspRegister )
    {
        m_retcode = cScRspRegister.m_retcode;
        m_id = cScRspRegister.m_id;
        return *this;
    }

    const uint32_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint32_t&  dwRetcode )
    {
        m_retcode = dwRetcode;
        return true;
    }
    const uint32_t&  GetId () const { return m_id; }
    bool SetId ( const uint32_t&  dwId )
    {
        m_id = dwId;
        return true;
    }
private:
    uint32_t m_retcode;
    uint32_t m_id;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CScRspRegister::Size() const
{
    return 11;
}
class CScReqCancelRegister : public CPackData
{
public:
    enum
    {
        CMD_ID = SC_REQ_CANCEL_REGISTER
    };
    CScReqCancelRegister()
    {
    }

    ~CScReqCancelRegister() { }
    CScReqCancelRegister(const SAppServerInfo&  sInfo)
    {
        m_info = sInfo;
    }
    CScReqCancelRegister&  operator=( const CScReqCancelRegister&  cScReqCancelRegister )
    {
        m_info = cScReqCancelRegister.m_info;
        return *this;
    }

    const SAppServerInfo&  GetInfo () const { return m_info; }
    bool SetInfo ( const SAppServerInfo&  sInfo )
    {
        m_info = sInfo;
        return true;
    }
private:
    SAppServerInfo m_info;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CScReqCancelRegister::Size() const
{
    uint32_t nSize = 2;
    nSize += m_info.Size();
    return nSize;
}

class CScRspCancelRegister : public CPackData
{
public:
    enum
    {
        CMD_ID = SC_RSP_CANCEL_REGISTER
    };
    CScRspCancelRegister()
    {
    }

    ~CScRspCancelRegister() { }
    CScRspCancelRegister(const uint32_t&  dwRetcode)
    {
        m_retcode = dwRetcode;
    }
    CScRspCancelRegister&  operator=( const CScRspCancelRegister&  cScRspCancelRegister )
    {
        m_retcode = cScRspCancelRegister.m_retcode;
        return *this;
    }

    const uint32_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint32_t&  dwRetcode )
    {
        m_retcode = dwRetcode;
        return true;
    }
private:
    uint32_t m_retcode;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CScRspCancelRegister::Size() const
{
    return 6;
}
class CScReqSvrStatus : public CPackData
{
public:
    enum
    {
        CMD_ID = SC_REQ_SVR_STATUS
    };
    CScReqSvrStatus()
    {
    }

    ~CScReqSvrStatus() { }
    CScReqSvrStatus(const uint32_t&  dwId, const uint32_t&  dwStatus, const string&  strDetail, const string&  strExt, const uint32_t&  dwTimeelapsed)
    {
        m_id = dwId;
        m_status = dwStatus;
        m_detail = strDetail;
        m_ext = strExt;
        m_timeelapsed = dwTimeelapsed;
    }
    CScReqSvrStatus&  operator=( const CScReqSvrStatus&  cScReqSvrStatus )
    {
        m_id = cScReqSvrStatus.m_id;
        m_status = cScReqSvrStatus.m_status;
        m_detail = cScReqSvrStatus.m_detail;
        m_ext = cScReqSvrStatus.m_ext;
        m_timeelapsed = cScReqSvrStatus.m_timeelapsed;
        return *this;
    }

    const uint32_t&  GetId () const { return m_id; }
    bool SetId ( const uint32_t&  dwId )
    {
        m_id = dwId;
        return true;
    }
    const uint32_t&  GetStatus () const { return m_status; }
    bool SetStatus ( const uint32_t&  dwStatus )
    {
        m_status = dwStatus;
        return true;
    }
    const string&  GetDetail () const { return m_detail; }
    bool SetDetail ( const string&  strDetail )
    {
        m_detail = strDetail;
        return true;
    }
    const string&  GetExt () const { return m_ext; }
    bool SetExt ( const string&  strExt )
    {
        m_ext = strExt;
        return true;
    }
    const uint32_t&  GetTimeelapsed () const { return m_timeelapsed; }
    bool SetTimeelapsed ( const uint32_t&  dwTimeelapsed )
    {
        m_timeelapsed = dwTimeelapsed;
        return true;
    }
private:
    uint32_t m_id;
    uint32_t m_status;
    string m_detail;
    string m_ext;
    uint32_t m_timeelapsed;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CScReqSvrStatus::Size() const
{
    uint32_t nSize = 26;
    nSize += m_detail.length();
    nSize += m_ext.length();
    return nSize;
}

#endif
