/*---------------------------------------------------------------------------
// Filename:        sc_head.h
// Date:            2011-04-27 13:36:55
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __SC_HEAD_H__
#define __SC_HEAD_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"

using namespace std;

#ifndef COMPRESS_THRESHOLD
#define COMPRESS_THRESHOLD 10240
#endif 

class CScHead : public CPackData
{
public:
    CScHead() : m_starter(0x88),
            m_major(0x06),
            m_minor(0x00),
            m_msgtype(0),
            m_encrypt(0x01),
            m_compress(0),
            m_encode(0),
            m_lrc(0),
            m_seq(0),
            m_len(0),
            m_cmd(0),
            m_cc(0),
            m_reserved(0)
    {
    }

    ~CScHead() { }
    CScHead(const uint8_t&  chStarter, const uint8_t&  chMajor, const uint8_t&  chMinor, const uint8_t&  chMsgtype, const uint8_t&  chEncrypt, const uint8_t&  chCompress, const uint8_t&  chEncode, const uint8_t&  chLrc, const uint32_t&  dwSeq, const uint32_t&  dwLen, const uint32_t&  dwCmd, const uint16_t&  wCc, const uint16_t&  wReserved, const string&  strExtdata)
    {
        m_starter = chStarter;
        m_major = chMajor;
        m_minor = chMinor;
        m_msgtype = chMsgtype;
        m_encrypt = chEncrypt;
        m_compress = chCompress;
        m_encode = chEncode;
        m_lrc = chLrc;
        m_seq = dwSeq;
        m_len = dwLen;
        m_cmd = dwCmd;
        m_cc = wCc;
        m_reserved = wReserved;
        m_extdata = strExtdata;
    }
    CScHead&  operator=( const CScHead&  cScHead )
    {
        m_starter = cScHead.m_starter;
        m_major = cScHead.m_major;
        m_minor = cScHead.m_minor;
        m_msgtype = cScHead.m_msgtype;
        m_encrypt = cScHead.m_encrypt;
        m_compress = cScHead.m_compress;
        m_encode = cScHead.m_encode;
        m_lrc = cScHead.m_lrc;
        m_seq = cScHead.m_seq;
        m_len = cScHead.m_len;
        m_cmd = cScHead.m_cmd;
        m_cc = cScHead.m_cc;
        m_reserved = cScHead.m_reserved;
        m_extdata = cScHead.m_extdata;
        return *this;
    }

public:
    uint8_t m_starter;
    uint8_t m_major;
    uint8_t m_minor;
    uint8_t m_msgtype;
    uint8_t m_encrypt;
    uint8_t m_compress;
    uint8_t m_encode;
    uint8_t m_lrc;
    uint32_t m_seq;
    uint32_t m_len;
    uint32_t m_cmd;
    uint16_t m_cc;
    uint16_t m_reserved;
    string m_extdata;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t SizeExt() const
    {
        if((m_reserved & 0x01) == 1)
        {
            uint32_t nSize = 28;
            nSize += m_extdata.length();
            return nSize;
        }
        else
            return 24;
    }
    uint32_t PeekSize()
    {
        uint32_t nSize = 24;
        if((PeekReserved() & 0x01) == 1)
        {
            {
                SetInCursor(nSize);
                uint32_t len;
                (*this) >> len;
                nSize += len + 4;
            }
        }
        return nSize;
    }
    uint32_t Size() const { return 24; }
    uint8_t PeekStarter()
    {
        uint8_t chStarter;
        SetInCursor(0);
        *this >> chStarter;
        return chStarter;
    }
    uint8_t PeekMajor()
    {
        uint8_t chMajor;
        SetInCursor(1);
        *this >> chMajor;
        return chMajor;
    }
    uint8_t PeekMinor()
    {
        uint8_t chMinor;
        SetInCursor(2);
        *this >> chMinor;
        return chMinor;
    }
    uint8_t PeekMsgtype()
    {
        uint8_t chMsgtype;
        SetInCursor(3);
        *this >> chMsgtype;
        return chMsgtype;
    }
    uint8_t PeekEncrypt()
    {
        uint8_t chEncrypt;
        SetInCursor(4);
        *this >> chEncrypt;
        return chEncrypt;
    }
    uint8_t PeekCompress()
    {
        uint8_t chCompress;
        SetInCursor(5);
        *this >> chCompress;
        return chCompress;
    }
    uint8_t PeekEncode()
    {
        uint8_t chEncode;
        SetInCursor(6);
        *this >> chEncode;
        return chEncode;
    }
    uint8_t PeekLrc()
    {
        uint8_t chLrc;
        SetInCursor(7);
        *this >> chLrc;
        return chLrc;
    }
    uint32_t PeekSeq()
    {
        uint32_t dwSeq;
        SetInCursor(8);
        *this >> dwSeq;
        return dwSeq;
    }
    uint32_t PeekLen()
    {
        uint32_t dwLen;
        SetInCursor(12);
        *this >> dwLen;
        return dwLen;
    }
    uint32_t PeekCmd()
    {
        uint32_t dwCmd;
        SetInCursor(16);
        *this >> dwCmd;
        return dwCmd;
    }
    uint16_t PeekCc()
    {
        uint16_t wCc;
        SetInCursor(20);
        *this >> wCc;
        return wCc;
    }
    uint16_t PeekReserved()
    {
        uint16_t wReserved;
        SetInCursor(22);
        *this >> wReserved;
        return wReserved;
    }
};

#endif
