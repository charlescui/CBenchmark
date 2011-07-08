/*---------------------------------------------------------------------------
// Filename:        sdkss_head.h
// Date:            2011-01-30 12:49:54
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __SDKSS_HEAD_H__
#define __SDKSS_HEAD_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"

using namespace std;

class CSdkssHead : public CPackData
{
public:
    CSdkssHead() : m_starter(0x8f),
            m_cmd(0),
            m_len(0)
    {
    }

    ~CSdkssHead() { }
    CSdkssHead(const uint8_t&  chStarter, const uint16_t&  wCmd, const uint32_t&  dwLen, const string&  strSerialNo, const string&  strAccount)
    {
        m_starter = chStarter;
        m_cmd = wCmd;
        m_len = dwLen;
        m_serialNo = strSerialNo;
        m_account = strAccount;
    }
    CSdkssHead&  operator=( const CSdkssHead&  cSdkssHead )
    {
        m_starter = cSdkssHead.m_starter;
        m_cmd = cSdkssHead.m_cmd;
        m_len = cSdkssHead.m_len;
        m_serialNo = cSdkssHead.m_serialNo;
        m_account = cSdkssHead.m_account;
        return *this;
    }

public:
    uint8_t m_starter;
    uint16_t m_cmd;
    uint32_t m_len;
    string m_serialNo;
    string m_account;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const { return 27; }
    uint8_t PeekStarter()
    {
        uint8_t chStarter;
        SetInCursor(0);
        *this >> chStarter;
        return chStarter;
    }
    uint16_t PeekCmd()
    {
        uint16_t wCmd;
        SetInCursor(1);
        *this >> wCmd;
        return wCmd;
    }
    uint32_t PeekLen()
    {
        uint32_t dwLen;
        SetInCursor(3);
        *this >> dwLen;
        return dwLen;
    }
    string PeekSerialNo()
    {
        string strSerialNo;
        SetInCursor(7);
        *this >> strSerialNo;
        return strSerialNo;
    }
    string PeekAccount()
    {
        string strAccount;
        SetInCursor(17);
        *this >> strAccount;
        return strAccount;
    }
};

#endif
