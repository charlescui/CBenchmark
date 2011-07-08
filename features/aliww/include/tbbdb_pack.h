/*---------------------------------------------------------------------------
// Filename:        tbbdb_pack.h
// Date:            2011-01-30 12:50:11
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __TBBDB_PACK_H__
#define __TBBDB_PACK_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"

using namespace std;

struct SBdbtribe
{
public:
    SBdbtribe() : m_webTid(""),
            m_groupId(0),
            m_memberLimit(200)
    {
    }

    ~SBdbtribe() { }
    SBdbtribe(const uint32_t&  dwTribeid, const uint32_t&  dwCatid, const uint32_t&  dwMembertimes, const uint16_t&  wCheckmode, const uint8_t&  chAllowvisitor, const uint8_t&  chForbidsearch, const uint32_t&  dwGroupstamp, const uint32_t&  dwBlackstamp, const uint32_t&  dwBlacknum, const uint32_t&  dwOnlinetime, const uint32_t&  dwOnlineactdegree, const uint32_t&  dwChatactdegree, const uint32_t&  dwRewardactdegree, const uint32_t&  dwTotalactdegree, const string&  strName, const string&  strOwner, const string&  strDesc, const string&  strBulletin, const string&  strPassword, const string&  strValidcode, const string&  strKeyword, const string&  strExtsign, const string&  strWebTid= "", const uint32_t&  dwGroupId= 0, const uint32_t&  dwMemberLimit= 200)
    {
        m_tribeid = dwTribeid;
        m_catid = dwCatid;
        m_membertimes = dwMembertimes;
        m_checkmode = wCheckmode;
        m_allowvisitor = chAllowvisitor;
        m_forbidsearch = chForbidsearch;
        m_groupstamp = dwGroupstamp;
        m_blackstamp = dwBlackstamp;
        m_blacknum = dwBlacknum;
        m_onlinetime = dwOnlinetime;
        m_onlineactdegree = dwOnlineactdegree;
        m_chatactdegree = dwChatactdegree;
        m_rewardactdegree = dwRewardactdegree;
        m_totalactdegree = dwTotalactdegree;
        m_name = strName;
        m_owner = strOwner;
        m_desc = strDesc;
        m_bulletin = strBulletin;
        m_password = strPassword;
        m_validcode = strValidcode;
        m_keyword = strKeyword;
        m_extsign = strExtsign;
        m_webTid = strWebTid;
        m_groupId = dwGroupId;
        m_memberLimit = dwMemberLimit;
    }
    SBdbtribe&  operator=( const SBdbtribe&  sBdbtribe )
    {
        m_tribeid = sBdbtribe.m_tribeid;
        m_catid = sBdbtribe.m_catid;
        m_membertimes = sBdbtribe.m_membertimes;
        m_checkmode = sBdbtribe.m_checkmode;
        m_allowvisitor = sBdbtribe.m_allowvisitor;
        m_forbidsearch = sBdbtribe.m_forbidsearch;
        m_groupstamp = sBdbtribe.m_groupstamp;
        m_blackstamp = sBdbtribe.m_blackstamp;
        m_blacknum = sBdbtribe.m_blacknum;
        m_onlinetime = sBdbtribe.m_onlinetime;
        m_onlineactdegree = sBdbtribe.m_onlineactdegree;
        m_chatactdegree = sBdbtribe.m_chatactdegree;
        m_rewardactdegree = sBdbtribe.m_rewardactdegree;
        m_totalactdegree = sBdbtribe.m_totalactdegree;
        m_name = sBdbtribe.m_name;
        m_owner = sBdbtribe.m_owner;
        m_desc = sBdbtribe.m_desc;
        m_bulletin = sBdbtribe.m_bulletin;
        m_password = sBdbtribe.m_password;
        m_validcode = sBdbtribe.m_validcode;
        m_keyword = sBdbtribe.m_keyword;
        m_extsign = sBdbtribe.m_extsign;
        m_webTid = sBdbtribe.m_webTid;
        m_groupId = sBdbtribe.m_groupId;
        m_memberLimit = sBdbtribe.m_memberLimit;
        return *this;
    }

    uint32_t m_tribeid;
    uint32_t m_catid;
    uint32_t m_membertimes;
    uint16_t m_checkmode;
    uint8_t m_allowvisitor;
    uint8_t m_forbidsearch;
    uint32_t m_groupstamp;
    uint32_t m_blackstamp;
    uint32_t m_blacknum;
    uint32_t m_onlinetime;
    uint32_t m_onlineactdegree;
    uint32_t m_chatactdegree;
    uint32_t m_rewardactdegree;
    uint32_t m_totalactdegree;
    string m_name;
    string m_owner;
    string m_desc;
    string m_bulletin;
    string m_password;
    string m_validcode;
    string m_keyword;
    string m_extsign;
    string m_webTid;
    uint32_t m_groupId;
    uint32_t m_memberLimit;

public:
    uint32_t Size() const;
};

inline uint32_t SBdbtribe::Size() const
{
    uint32_t nSize = 118;
    nSize += m_name.length();
    nSize += m_owner.length();
    nSize += m_desc.length();
    nSize += m_bulletin.length();
    nSize += m_password.length();
    nSize += m_validcode.length();
    nSize += m_keyword.length();
    nSize += m_extsign.length();
    nSize += m_webTid.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SBdbtribe&  sBdbtribe );
CPackData& operator>> ( CPackData& cPackData, SBdbtribe&  sBdbtribe );

struct SBdbtribemembernode
{
public:
    SBdbtribemembernode() : m_popupflag(0)
    {
    }

    ~SBdbtribemembernode() { }
    SBdbtribemembernode(const uint8_t&  chTribelevel, const uint8_t&  chTrbstatus, const uint32_t&  dwLastmsgid, const uint32_t&  dwLogontime, const string&  strUserid, const string&  strUsername, const uint8_t&  chMobilebindflag, const string&  strMobileno, const string&  strBindmobile, const uint32_t&  dwLastchattime, const uint32_t&  dwOnlinetime, const uint32_t&  dwOnlineactive, const uint32_t&  dwChatactive, const uint32_t&  dwRewardactive, const uint32_t&  dwTotalactive, const uint32_t&  dwAddtimes, const string&  strVersion, const uint64_t&  ullGroupid, const uint8_t&  chStarmember, const uint8_t&  chOpenflag, const uint8_t&  chPopupflag= 0)
    {
        m_tribelevel = chTribelevel;
        m_trbstatus = chTrbstatus;
        m_lastmsgid = dwLastmsgid;
        m_logontime = dwLogontime;
        m_userid = strUserid;
        m_username = strUsername;
        m_mobilebindflag = chMobilebindflag;
        m_mobileno = strMobileno;
        m_bindmobile = strBindmobile;
        m_lastchattime = dwLastchattime;
        m_onlinetime = dwOnlinetime;
        m_onlineactive = dwOnlineactive;
        m_chatactive = dwChatactive;
        m_rewardactive = dwRewardactive;
        m_totalactive = dwTotalactive;
        m_addtimes = dwAddtimes;
        m_version = strVersion;
        m_groupid = ullGroupid;
        m_starmember = chStarmember;
        m_openflag = chOpenflag;
        m_popupflag = chPopupflag;
    }
    SBdbtribemembernode&  operator=( const SBdbtribemembernode&  sBdbtribemembernode )
    {
        m_tribelevel = sBdbtribemembernode.m_tribelevel;
        m_trbstatus = sBdbtribemembernode.m_trbstatus;
        m_lastmsgid = sBdbtribemembernode.m_lastmsgid;
        m_logontime = sBdbtribemembernode.m_logontime;
        m_userid = sBdbtribemembernode.m_userid;
        m_username = sBdbtribemembernode.m_username;
        m_mobilebindflag = sBdbtribemembernode.m_mobilebindflag;
        m_mobileno = sBdbtribemembernode.m_mobileno;
        m_bindmobile = sBdbtribemembernode.m_bindmobile;
        m_lastchattime = sBdbtribemembernode.m_lastchattime;
        m_onlinetime = sBdbtribemembernode.m_onlinetime;
        m_onlineactive = sBdbtribemembernode.m_onlineactive;
        m_chatactive = sBdbtribemembernode.m_chatactive;
        m_rewardactive = sBdbtribemembernode.m_rewardactive;
        m_totalactive = sBdbtribemembernode.m_totalactive;
        m_addtimes = sBdbtribemembernode.m_addtimes;
        m_version = sBdbtribemembernode.m_version;
        m_groupid = sBdbtribemembernode.m_groupid;
        m_starmember = sBdbtribemembernode.m_starmember;
        m_openflag = sBdbtribemembernode.m_openflag;
        m_popupflag = sBdbtribemembernode.m_popupflag;
        return *this;
    }

    uint8_t m_tribelevel;
    uint8_t m_trbstatus;
    uint32_t m_lastmsgid;
    uint32_t m_logontime;
    string m_userid;
    string m_username;
    uint8_t m_mobilebindflag;
    string m_mobileno;
    string m_bindmobile;
    uint32_t m_lastchattime;
    uint32_t m_onlinetime;
    uint32_t m_onlineactive;
    uint32_t m_chatactive;
    uint32_t m_rewardactive;
    uint32_t m_totalactive;
    uint32_t m_addtimes;
    string m_version;
    uint64_t m_groupid;
    uint8_t m_starmember;
    uint8_t m_openflag;
    uint8_t m_popupflag;

public:
    uint32_t Size() const;
};

inline uint32_t SBdbtribemembernode::Size() const
{
    uint32_t nSize = 92;
    nSize += m_userid.length();
    nSize += m_username.length();
    nSize += m_mobileno.length();
    nSize += m_bindmobile.length();
    nSize += m_version.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SBdbtribemembernode&  sBdbtribemembernode );
CPackData& operator>> ( CPackData& cPackData, SBdbtribemembernode&  sBdbtribemembernode );

struct SBdbtribemembernodevector
{
public:
    SBdbtribemembernodevector()
    {
    }

    ~SBdbtribemembernodevector() { }
    SBdbtribemembernodevector(const VECTOR< SBdbtribemembernode >&  vecNodes)
    {
        m_nodes = vecNodes;
    }
    SBdbtribemembernodevector&  operator=( const SBdbtribemembernodevector&  sBdbtribemembernodevector )
    {
        m_nodes = sBdbtribemembernodevector.m_nodes;
        return *this;
    }

    VECTOR< SBdbtribemembernode > m_nodes;

public:
    uint32_t Size() const;
};

inline uint32_t SBdbtribemembernodevector::Size() const
{
    uint32_t nSize = 7;
    for(uint32_t i = 0; i < m_nodes.size(); i++)
    {
        nSize += m_nodes[i].Size();
    }
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SBdbtribemembernodevector&  sBdbtribemembernodevector );
CPackData& operator>> ( CPackData& cPackData, SBdbtribemembernodevector&  sBdbtribemembernodevector );

#endif
