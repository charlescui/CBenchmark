/*---------------------------------------------------------------------------
// Filename:        chkss_pack.h
// Date:            2011-01-30 12:49:12
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __CHKSS_PACK_H__
#define __CHKSS_PACK_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"
#include "ss_head.h"
#include "const_macro.h"

using namespace std;

enum CHKSS_REQUEST
{
    SS_HEALTH_CHECK             = 0x1,

};

class CSsHealthCheck : public CPackData
{
public:
    enum
    {
        CMD_ID = SS_HEALTH_CHECK
    };
    CSsHealthCheck()
    {
    }

    ~CSsHealthCheck() { }
    CSsHealthCheck(const uint8_t&  chSrvstatus, const string&  strSrvip, const uint16_t&  wSrvport, const uint64_t&  ullAppBitmap)
    {
        m_srvstatus = chSrvstatus;
        m_srvip = strSrvip;
        m_srvport = wSrvport;
        m_appBitmap = ullAppBitmap;
    }
    CSsHealthCheck&  operator=( const CSsHealthCheck&  cSsHealthCheck )
    {
        m_srvstatus = cSsHealthCheck.m_srvstatus;
        m_srvip = cSsHealthCheck.m_srvip;
        m_srvport = cSsHealthCheck.m_srvport;
        m_appBitmap = cSsHealthCheck.m_appBitmap;
        return *this;
    }

    const uint8_t&  GetSrvstatus () const { return m_srvstatus; }
    bool SetSrvstatus ( const uint8_t&  chSrvstatus )
    {
        m_srvstatus = chSrvstatus;
        return true;
    }
    const string&  GetSrvip () const { return m_srvip; }
    bool SetSrvip ( const string&  strSrvip )
    {
        m_srvip = strSrvip;
        return true;
    }
    const uint16_t&  GetSrvport () const { return m_srvport; }
    bool SetSrvport ( const uint16_t&  wSrvport )
    {
        m_srvport = wSrvport;
        return true;
    }
    const uint64_t&  GetAppBitmap () const { return m_appBitmap; }
    bool SetAppBitmap ( const uint64_t&  ullAppBitmap )
    {
        m_appBitmap = ullAppBitmap;
        return true;
    }
private:
    uint8_t m_srvstatus;
    string m_srvip;
    uint16_t m_srvport;
    uint64_t m_appBitmap;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSsHealthCheck::Size() const
{
    uint32_t nSize = 20;
    nSize += m_srvip.length();
    return nSize;
}

#endif
