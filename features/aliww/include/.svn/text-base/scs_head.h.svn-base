/*---------------------------------------------------------------------------
// Filename:        scs_head.h
// Date:            2011-01-30 12:50:13
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __SCS_HEAD_H__
#define __SCS_HEAD_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"

using namespace std;

class CScsHead : public CPackData
{
public:
    ~CScsHead() { }
    CScsHead(const uint8_t&  chStarter= 0xDA, const uint16_t&  wVersion= 0x0600, const uint8_t&  chFlag= 0, const uint32_t&  dwCmd= 0, const uint32_t&  dwSeq= 0, const uint16_t&  wCc= 0, const uint32_t&  dwLen= 0, const uint16_t&  wReserved= 0)
    {
        m_starter = chStarter;
        m_version = wVersion;
        m_flag = chFlag;
        m_cmd = dwCmd;
        m_seq = dwSeq;
        m_cc = wCc;
        m_len = dwLen;
        m_reserved = wReserved;
    }
    CScsHead&  operator=( const CScsHead&  cScsHead )
    {
        m_starter = cScsHead.m_starter;
        m_version = cScsHead.m_version;
        m_flag = cScsHead.m_flag;
        m_cmd = cScsHead.m_cmd;
        m_seq = cScsHead.m_seq;
        m_cc = cScsHead.m_cc;
        m_len = cScsHead.m_len;
        m_reserved = cScsHead.m_reserved;
        return *this;
    }

public:
    uint8_t m_starter;
    uint16_t m_version;
    uint8_t m_flag;
    uint32_t m_cmd;
    uint32_t m_seq;
    uint16_t m_cc;
    uint32_t m_len;
    uint16_t m_reserved;

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
    uint32_t PeekCmd()
    {
        uint32_t dwCmd;
        SetInCursor(4);
        *this >> dwCmd;
        return dwCmd;
    }
    uint32_t PeekSeq()
    {
        uint32_t dwSeq;
        SetInCursor(8);
        *this >> dwSeq;
        return dwSeq;
    }
    uint16_t PeekCc()
    {
        uint16_t wCc;
        SetInCursor(12);
        *this >> wCc;
        return wCc;
    }
    uint32_t PeekLen()
    {
        uint32_t dwLen;
        SetInCursor(14);
        *this >> dwLen;
        return dwLen;
    }
    uint16_t PeekReserved()
    {
        uint16_t wReserved;
        SetInCursor(18);
        *this >> wReserved;
        return wReserved;
    }
};

#endif
