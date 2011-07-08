/*---------------------------------------------------------------------------
// Filename:        aqsc_head.h
// Date:            2011-01-30 12:50:18
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __AQSC_HEAD_H__
#define __AQSC_HEAD_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"

using namespace std;

#ifndef COMPRESS_THRESHOLD
#define COMPRESS_THRESHOLD 10240
#endif 

class CAqscHead : public CPackData
{
public:
    ~CAqscHead() { }
    CAqscHead(const uint8_t&  chStarter= 0x88, const uint8_t&  chVersion= 0x01, const uint32_t&  dwSeq= 0, const uint32_t&  dwLen= 0, const uint32_t&  dwCmd= 0, const uint16_t&  wCc= 0)
    {
        m_starter = chStarter;
        m_version = chVersion;
        m_seq = dwSeq;
        m_len = dwLen;
        m_cmd = dwCmd;
        m_cc = wCc;
    }
    CAqscHead&  operator=( const CAqscHead&  cAqscHead )
    {
        m_starter = cAqscHead.m_starter;
        m_version = cAqscHead.m_version;
        m_seq = cAqscHead.m_seq;
        m_len = cAqscHead.m_len;
        m_cmd = cAqscHead.m_cmd;
        m_cc = cAqscHead.m_cc;
        return *this;
    }

public:
    uint8_t m_starter;
    uint8_t m_version;
    uint32_t m_seq;
    uint32_t m_len;
    uint32_t m_cmd;
    uint16_t m_cc;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const { return 16; }
    uint8_t PeekStarter()
    {
        uint8_t chStarter;
        SetInCursor(0);
        *this >> chStarter;
        return chStarter;
    }
    uint8_t PeekVersion()
    {
        uint8_t chVersion;
        SetInCursor(1);
        *this >> chVersion;
        return chVersion;
    }
    uint32_t PeekSeq()
    {
        uint32_t dwSeq;
        SetInCursor(2);
        *this >> dwSeq;
        return dwSeq;
    }
    uint32_t PeekLen()
    {
        uint32_t dwLen;
        SetInCursor(6);
        *this >> dwLen;
        return dwLen;
    }
    uint32_t PeekCmd()
    {
        uint32_t dwCmd;
        SetInCursor(10);
        *this >> dwCmd;
        return dwCmd;
    }
    uint16_t PeekCc()
    {
        uint16_t wCc;
        SetInCursor(14);
        *this >> wCc;
        return wCc;
    }
};

#endif
