/*---------------------------------------------------------------------------
// Filename:        ss_head.h
// Date:            2011-01-30 12:50:24
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __SS_HEAD_H__
#define __SS_HEAD_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"

using namespace std;

struct SUserSid
{
public:
    SUserSid()
    {
    }

    ~SUserSid() { }
    SUserSid(const string&  strUserId, const uint16_t&  wServId)
    {
        m_userId = strUserId;
        m_servId = wServId;
    }
    SUserSid&  operator=( const SUserSid&  sUserSid )
    {
        m_userId = sUserSid.m_userId;
        m_servId = sUserSid.m_servId;
        return *this;
    }

    string m_userId;
    uint16_t m_servId;

public:
    uint32_t Size() const;
};

inline uint32_t SUserSid::Size() const
{
    uint32_t nSize = 6;
    nSize += m_userId.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SUserSid&  sUserSid );
CPackData& operator>> ( CPackData& cPackData, SUserSid&  sUserSid );

struct SUserCommInfo
{
public:
    SUserCommInfo()
    {
    }

    ~SUserCommInfo() { }
    SUserCommInfo(const string&  strFromId, const VECTOR< SUserSid >&  vecReceiverList)
    {
        m_fromId = strFromId;
        m_receiverList = vecReceiverList;
    }
    SUserCommInfo&  operator=( const SUserCommInfo&  sUserCommInfo )
    {
        m_fromId = sUserCommInfo.m_fromId;
        m_receiverList = sUserCommInfo.m_receiverList;
        return *this;
    }

    string m_fromId;
    VECTOR< SUserSid > m_receiverList;

public:
    uint32_t Size() const;
};

inline uint32_t SUserCommInfo::Size() const
{
    uint32_t nSize = 8;
    nSize += m_fromId.length();
    for(uint32_t i = 0; i < m_receiverList.size(); i++)
    {
        nSize += m_receiverList[i].Size();
    }
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SUserCommInfo&  sUserCommInfo );
CPackData& operator>> ( CPackData& cPackData, SUserCommInfo&  sUserCommInfo );

class CSsHead : public CPackData
{
public:
    CSsHead() : m_starter(0xDA),
            m_msgtype(0),
            m_ttl(64),
            m_lrc(0),
            m_version(0x0600),
            m_cmd(0),
            m_seq(0),
            m_len(0),
            m_cc(0),
            m_reserved(1)
    {
    }

    ~CSsHead() { }
    CSsHead(const uint8_t&  chStarter, const uint8_t&  chMsgtype, const uint8_t&  chTtl, const uint8_t&  chLrc, const uint16_t&  wVersion, const uint16_t&  wOrigsid, const uint32_t&  dwCmd, const uint32_t&  dwSeq, const uint32_t&  dwLen, const uint16_t&  wCc, const uint16_t&  wReserved, const SUserCommInfo&  sUserInfo)
    {
        m_starter = chStarter;
        m_msgtype = chMsgtype;
        m_ttl = chTtl;
        m_lrc = chLrc;
        m_version = wVersion;
        m_origsid = wOrigsid;
        m_cmd = dwCmd;
        m_seq = dwSeq;
        m_len = dwLen;
        m_cc = wCc;
        m_reserved = wReserved;
        m_userInfo = sUserInfo;
    }
    CSsHead&  operator=( const CSsHead&  cSsHead )
    {
        m_starter = cSsHead.m_starter;
        m_msgtype = cSsHead.m_msgtype;
        m_ttl = cSsHead.m_ttl;
        m_lrc = cSsHead.m_lrc;
        m_version = cSsHead.m_version;
        m_origsid = cSsHead.m_origsid;
        m_cmd = cSsHead.m_cmd;
        m_seq = cSsHead.m_seq;
        m_len = cSsHead.m_len;
        m_cc = cSsHead.m_cc;
        m_reserved = cSsHead.m_reserved;
        m_userInfo = cSsHead.m_userInfo;
        return *this;
    }

public:
    uint8_t m_starter;
    uint8_t m_msgtype;
    uint8_t m_ttl;
    uint8_t m_lrc;
    uint16_t m_version;
    uint16_t m_origsid;
    uint32_t m_cmd;
    uint32_t m_seq;
    uint32_t m_len;
    uint16_t m_cc;
    uint16_t m_reserved;
    SUserCommInfo m_userInfo;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t SizeExt() const
    {
        if((m_reserved & 0x01) == 1)
        {
            uint32_t nSize = 24;
            nSize += m_userInfo.Size();
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
            {
                SetInCursor(nSize);
                uint32_t len;
                (*this) >> len;
                nSize += 4;
                for(uint32_t i = 0; i < len; i++)
                {
                    SetInCursor(nSize);
                    {
                        SetInCursor(nSize);
                        uint32_t len;
                        (*this) >> len;
                        nSize += len + 4;
                    }
                    nSize += 2;
                }
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
    uint8_t PeekMsgtype()
    {
        uint8_t chMsgtype;
        SetInCursor(1);
        *this >> chMsgtype;
        return chMsgtype;
    }
    uint8_t PeekTtl()
    {
        uint8_t chTtl;
        SetInCursor(2);
        *this >> chTtl;
        return chTtl;
    }
    uint8_t PeekLrc()
    {
        uint8_t chLrc;
        SetInCursor(3);
        *this >> chLrc;
        return chLrc;
    }
    uint16_t PeekVersion()
    {
        uint16_t wVersion;
        SetInCursor(4);
        *this >> wVersion;
        return wVersion;
    }
    uint16_t PeekOrigsid()
    {
        uint16_t wOrigsid;
        SetInCursor(6);
        *this >> wOrigsid;
        return wOrigsid;
    }
    uint32_t PeekCmd()
    {
        uint32_t dwCmd;
        SetInCursor(8);
        *this >> dwCmd;
        return dwCmd;
    }
    uint32_t PeekSeq()
    {
        uint32_t dwSeq;
        SetInCursor(12);
        *this >> dwSeq;
        return dwSeq;
    }
    uint32_t PeekLen()
    {
        uint32_t dwLen;
        SetInCursor(16);
        *this >> dwLen;
        return dwLen;
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
