/*---------------------------------------------------------------------------
// Filename:        msc_head.h
// Date:            2011-01-30 12:49:57
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __MSC_HEAD_H__
#define __MSC_HEAD_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"

using namespace std;

class CMscHead : public CPackData
{
public:
    ~CMscHead() { }
    CMscHead(const uint8_t&  chStarter= 0x8f, const uint16_t&  wVersion= 0x0101, const uint8_t&  chFlag= 0, const uint16_t&  wCmd= 0, const uint32_t&  dwSeq= 0, const uint16_t&  wCc= 0, const uint32_t&  dwLen= 0, const uint32_t&  dwReserved= 0)
    {
        m_starter = chStarter;
        m_version = wVersion;
        m_flag = chFlag;
        m_cmd = wCmd;
        m_seq = dwSeq;
        m_cc = wCc;
        m_len = dwLen;
        m_reserved = dwReserved;
    }
    CMscHead&  operator=( const CMscHead&  cMscHead )
    {
        m_starter = cMscHead.m_starter;
        m_version = cMscHead.m_version;
        m_flag = cMscHead.m_flag;
        m_cmd = cMscHead.m_cmd;
        m_seq = cMscHead.m_seq;
        m_cc = cMscHead.m_cc;
        m_len = cMscHead.m_len;
        m_reserved = cMscHead.m_reserved;
        return *this;
    }

public:
    uint8_t m_starter;
    uint16_t m_version;
    uint8_t m_flag;
    uint16_t m_cmd;
    uint32_t m_seq;
    uint16_t m_cc;
    uint32_t m_len;
    uint32_t m_reserved;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const { return 20; }
    uint8_t PeekStarter()
    {
        uint8_t chStarter;
        SetInCursor(0);
        *this >> chStarter;
        return chStarter;
    }
    uint16_t PeekVersion()
    {
        uint16_t wVersion;
        SetInCursor(1);
        *this >> wVersion;
        return wVersion;
    }
    uint8_t PeekFlag()
    {
        uint8_t chFlag;
        SetInCursor(3);
        *this >> chFlag;
        return chFlag;
    }
    uint16_t PeekCmd()
    {
        uint16_t wCmd;
        SetInCursor(4);
        *this >> wCmd;
        return wCmd;
    }
    uint32_t PeekSeq()
    {
        uint32_t dwSeq;
        SetInCursor(6);
        *this >> dwSeq;
        return dwSeq;
    }
    uint16_t PeekCc()
    {
        uint16_t wCc;
        SetInCursor(10);
        *this >> wCc;
        return wCc;
    }
    uint32_t PeekLen()
    {
        uint32_t dwLen;
        SetInCursor(12);
        *this >> dwLen;
        return dwLen;
    }
    uint32_t PeekReserved()
    {
        uint32_t dwReserved;
        SetInCursor(16);
        *this >> dwReserved;
        return dwReserved;
    }
};

#endif
