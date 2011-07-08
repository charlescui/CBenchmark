/*---------------------------------------------------------------------------
// Filename:        fdbrecent_pack.h
// Date:            2011-01-30 12:48:58
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __FDBRECENT_PACK_H__
#define __FDBRECENT_PACK_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"
#include "ss_head.h"
#include "const_macro.h"

using namespace std;

struct SFdbRecentNode
{
public:
    ~SFdbRecentNode() { }
    SFdbRecentNode(const uint32_t&  dwSendTime= 0, const uint32_t&  dwRecvTime= 0, const uint32_t&  dwValidTime= 0, const uint32_t&  dwSendFlag= 0, const uint32_t&  dwRecvFlag= 0, const uint32_t&  dwStrangerflag= 0)
    {
        m_sendTime = dwSendTime;
        m_recvTime = dwRecvTime;
        m_validTime = dwValidTime;
        m_sendFlag = dwSendFlag;
        m_recvFlag = dwRecvFlag;
        m_strangerflag = dwStrangerflag;
    }
    SFdbRecentNode&  operator=( const SFdbRecentNode&  sFdbRecentNode )
    {
        m_sendTime = sFdbRecentNode.m_sendTime;
        m_recvTime = sFdbRecentNode.m_recvTime;
        m_validTime = sFdbRecentNode.m_validTime;
        m_sendFlag = sFdbRecentNode.m_sendFlag;
        m_recvFlag = sFdbRecentNode.m_recvFlag;
        m_strangerflag = sFdbRecentNode.m_strangerflag;
        return *this;
    }

    uint32_t m_sendTime;
    uint32_t m_recvTime;
    uint32_t m_validTime;
    uint32_t m_sendFlag;
    uint32_t m_recvFlag;
    uint32_t m_strangerflag;

public:
    uint32_t Size() const;
};

inline uint32_t SFdbRecentNode::Size() const
{
    return 31;
}
CPackData& operator<< ( CPackData& cPackData, const SFdbRecentNode&  sFdbRecentNode );
CPackData& operator>> ( CPackData& cPackData, SFdbRecentNode&  sFdbRecentNode );

struct SFdbRecentMap
{
public:
    SFdbRecentMap() : m_ip(0),
            m_chgTime(0),
            m_loadTime(0)
    {
    }

    ~SFdbRecentMap() { }
    SFdbRecentMap(const string&  strPcid, const uint32_t&  dwIp, const uint32_t&  dwChgTime, const uint32_t&  dwLoadTime, const map< string,SFdbRecentNode >&  mapNodes)
    {
        m_pcid = strPcid;
        m_ip = dwIp;
        m_chgTime = dwChgTime;
        m_loadTime = dwLoadTime;
        m_nodes = mapNodes;
    }
    SFdbRecentMap&  operator=( const SFdbRecentMap&  sFdbRecentMap )
    {
        m_pcid = sFdbRecentMap.m_pcid;
        m_ip = sFdbRecentMap.m_ip;
        m_chgTime = sFdbRecentMap.m_chgTime;
        m_loadTime = sFdbRecentMap.m_loadTime;
        m_nodes = sFdbRecentMap.m_nodes;
        return *this;
    }

    string m_pcid;
    uint32_t m_ip;
    uint32_t m_chgTime;
    uint32_t m_loadTime;
    map< string,SFdbRecentNode > m_nodes;

public:
    uint32_t Size() const;
};

inline uint32_t SFdbRecentMap::Size() const
{
    uint32_t nSize = 25;
    nSize += m_pcid.length();
    nSize += m_nodes.size() * 4;
    {
        map< string,SFdbRecentNode >::const_iterator itr;
        for(itr = m_nodes.begin(); itr != m_nodes.end(); ++itr)
        {
            nSize += itr->first.length();
            nSize += itr->second.Size();
        }
    }
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SFdbRecentMap&  sFdbRecentMap );
CPackData& operator>> ( CPackData& cPackData, SFdbRecentMap&  sFdbRecentMap );

#endif
