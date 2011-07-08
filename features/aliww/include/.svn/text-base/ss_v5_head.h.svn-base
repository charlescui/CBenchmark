/*---------------------------------------------------------------------------
// Filename:        ss_v5_head.h
// Date:            2011-01-30 12:50:03
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __SS_V5_HEAD_H__
#define __SS_V5_HEAD_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"

using namespace std;

#ifndef UID_LENGTH
#define UID_LENGTH 64
#endif 

#ifndef TID_LENGTH
#define TID_LENGTH 20
#endif 

#ifndef TBS_NAME_LENGTH
#define TBS_NAME_LENGTH 64
#endif 

#ifndef TBS_MSG_LENGTH
#define TBS_MSG_LENGTH 512
#endif 

#ifndef TBS_DATE_LEN
#define TBS_DATE_LEN 20
#endif 

#ifndef TBS_VALID_LEN
#define TBS_VALID_LEN 32
#endif 

#ifndef TBS_PASS_LEN
#define TBS_PASS_LEN 20
#endif 

#ifndef STATUSDEF_LENGTH
#define STATUSDEF_LENGTH 64
#endif 

#ifndef MOBILENO_LEN
#define MOBILENO_LEN 20
#endif 

#ifndef VERSION_LENGTH
#define VERSION_LENGTH 128
#endif 

#ifndef TBS_KEYWORD_LEN
#define TBS_KEYWORD_LEN 64
#endif 

#ifndef SESSION_LENGTH
#define SESSION_LENGTH 16
#endif 

#ifndef IPADDR_LENGTH
#define IPADDR_LENGTH 15
#endif 

class CSsV5Head : public CPackData
{
public:
    ~CSsV5Head() { }
    CSsV5Head(const uint8_t&  chStarter= 0x8f, const uint16_t&  wVersion= 0x0100, const uint32_t&  dwReserved= 0, const uint8_t&  chImsId= 0, const uint16_t&  wCmd= 0, const uint32_t&  dwSeq= 0, const uint16_t&  wCc= 0, const uint32_t&  dwLen= 0)
    {
        m_starter = chStarter;
        m_version = wVersion;
        m_reserved = dwReserved;
        m_imsId = chImsId;
        m_cmd = wCmd;
        m_seq = dwSeq;
        m_cc = wCc;
        m_len = dwLen;
    }
    CSsV5Head&  operator=( const CSsV5Head&  cSsV5Head )
    {
        m_starter = cSsV5Head.m_starter;
        m_version = cSsV5Head.m_version;
        m_reserved = cSsV5Head.m_reserved;
        m_imsId = cSsV5Head.m_imsId;
        m_cmd = cSsV5Head.m_cmd;
        m_seq = cSsV5Head.m_seq;
        m_cc = cSsV5Head.m_cc;
        m_len = cSsV5Head.m_len;
        return *this;
    }

public:
    uint8_t m_starter;
    uint16_t m_version;
    uint32_t m_reserved;
    uint8_t m_imsId;
    uint16_t m_cmd;
    uint32_t m_seq;
    uint16_t m_cc;
    uint32_t m_len;

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
    uint32_t PeekReserved()
    {
        uint32_t dwReserved;
        SetInCursor(3);
        *this >> dwReserved;
        return dwReserved;
    }
    uint8_t PeekImsId()
    {
        uint8_t chImsId;
        SetInCursor(7);
        *this >> chImsId;
        return chImsId;
    }
    uint16_t PeekCmd()
    {
        uint16_t wCmd;
        SetInCursor(8);
        *this >> wCmd;
        return wCmd;
    }
    uint32_t PeekSeq()
    {
        uint32_t dwSeq;
        SetInCursor(10);
        *this >> dwSeq;
        return dwSeq;
    }
    uint16_t PeekCc()
    {
        uint16_t wCc;
        SetInCursor(14);
        *this >> wCc;
        return wCc;
    }
    uint32_t PeekLen()
    {
        uint32_t dwLen;
        SetInCursor(16);
        *this >> dwLen;
        return dwLen;
    }
};

#endif
