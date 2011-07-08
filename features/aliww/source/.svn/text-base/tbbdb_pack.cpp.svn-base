/*---------------------------------------------------------------------------
// Filename:        tbbdb_pack.cpp
// Date:            2011-01-30 12:50:11
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#include "tbbdb_pack.h"

CPackData& operator<< ( CPackData& cPackData, const SBdbtribe&  sBdbtribe )
{
    uint8_t nFieldNum = 25;
    do {
        if(sBdbtribe.m_memberLimit == 200)
            nFieldNum--;
        else
            break;
        if(sBdbtribe.m_groupId == 0)
            nFieldNum--;
        else
            break;
        if(sBdbtribe.m_webTid == "")
            nFieldNum--;
        else
            break;
    } while(0);
    cPackData << nFieldNum;
    cPackData << FT_UINT32;
    cPackData << sBdbtribe.m_tribeid;
    cPackData << FT_UINT32;
    cPackData << sBdbtribe.m_catid;
    cPackData << FT_UINT32;
    cPackData << sBdbtribe.m_membertimes;
    cPackData << FT_UINT16;
    cPackData << sBdbtribe.m_checkmode;
    cPackData << FT_UINT8;
    cPackData << sBdbtribe.m_allowvisitor;
    cPackData << FT_UINT8;
    cPackData << sBdbtribe.m_forbidsearch;
    cPackData << FT_UINT32;
    cPackData << sBdbtribe.m_groupstamp;
    cPackData << FT_UINT32;
    cPackData << sBdbtribe.m_blackstamp;
    cPackData << FT_UINT32;
    cPackData << sBdbtribe.m_blacknum;
    cPackData << FT_UINT32;
    cPackData << sBdbtribe.m_onlinetime;
    cPackData << FT_UINT32;
    cPackData << sBdbtribe.m_onlineactdegree;
    cPackData << FT_UINT32;
    cPackData << sBdbtribe.m_chatactdegree;
    cPackData << FT_UINT32;
    cPackData << sBdbtribe.m_rewardactdegree;
    cPackData << FT_UINT32;
    cPackData << sBdbtribe.m_totalactdegree;
    cPackData << FT_STRING;
    cPackData << sBdbtribe.m_name;
    cPackData << FT_STRING;
    cPackData << sBdbtribe.m_owner;
    cPackData << FT_STRING;
    cPackData << sBdbtribe.m_desc;
    cPackData << FT_STRING;
    cPackData << sBdbtribe.m_bulletin;
    cPackData << FT_STRING;
    cPackData << sBdbtribe.m_password;
    cPackData << FT_STRING;
    cPackData << sBdbtribe.m_validcode;
    cPackData << FT_STRING;
    cPackData << sBdbtribe.m_keyword;
    cPackData << FT_STRING;
    cPackData << sBdbtribe.m_extsign;
    if(nFieldNum == 22)
        return cPackData;
    cPackData << FT_STRING;
    cPackData << sBdbtribe.m_webTid;
    if(nFieldNum == 23)
        return cPackData;
    cPackData << FT_UINT32;
    cPackData << sBdbtribe.m_groupId;
    if(nFieldNum == 24)
        return cPackData;
    cPackData << FT_UINT32;
    cPackData << sBdbtribe.m_memberLimit;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SBdbtribe&  sBdbtribe )
{
    uint8_t num;
    cPackData >> num;
    if(num < 22) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribe.m_tribeid;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribe.m_catid;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribe.m_membertimes;
    cPackData >> field;
    if(field.m_baseType != FT_UINT16) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribe.m_checkmode;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribe.m_allowvisitor;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribe.m_forbidsearch;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribe.m_groupstamp;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribe.m_blackstamp;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribe.m_blacknum;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribe.m_onlinetime;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribe.m_onlineactdegree;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribe.m_chatactdegree;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribe.m_rewardactdegree;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribe.m_totalactdegree;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribe.m_name;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribe.m_owner;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribe.m_desc;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribe.m_bulletin;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribe.m_password;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribe.m_validcode;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribe.m_keyword;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribe.m_extsign;
    try
    {
        if(num < 23) return cPackData;
        cPackData >> field;
        if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
        cPackData >> sBdbtribe.m_webTid;
        if(num < 24) return cPackData;
        cPackData >> field;
        if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
        cPackData >> sBdbtribe.m_groupId;
        if(num < 25) return cPackData;
        cPackData >> field;
        if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
        cPackData >> sBdbtribe.m_memberLimit;
    }
    catch(PACKRETCODE)
    {
        return cPackData;
    }
    for(int i = 25; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const SBdbtribemembernode&  sBdbtribemembernode )
{
    uint8_t nFieldNum = 21;
    do {
        if(sBdbtribemembernode.m_popupflag == 0)
            nFieldNum--;
        else
            break;
    } while(0);
    cPackData << nFieldNum;
    cPackData << FT_UINT8;
    cPackData << sBdbtribemembernode.m_tribelevel;
    cPackData << FT_UINT8;
    cPackData << sBdbtribemembernode.m_trbstatus;
    cPackData << FT_UINT32;
    cPackData << sBdbtribemembernode.m_lastmsgid;
    cPackData << FT_UINT32;
    cPackData << sBdbtribemembernode.m_logontime;
    cPackData << FT_STRING;
    cPackData << sBdbtribemembernode.m_userid;
    cPackData << FT_STRING;
    cPackData << sBdbtribemembernode.m_username;
    cPackData << FT_UINT8;
    cPackData << sBdbtribemembernode.m_mobilebindflag;
    cPackData << FT_STRING;
    cPackData << sBdbtribemembernode.m_mobileno;
    cPackData << FT_STRING;
    cPackData << sBdbtribemembernode.m_bindmobile;
    cPackData << FT_UINT32;
    cPackData << sBdbtribemembernode.m_lastchattime;
    cPackData << FT_UINT32;
    cPackData << sBdbtribemembernode.m_onlinetime;
    cPackData << FT_UINT32;
    cPackData << sBdbtribemembernode.m_onlineactive;
    cPackData << FT_UINT32;
    cPackData << sBdbtribemembernode.m_chatactive;
    cPackData << FT_UINT32;
    cPackData << sBdbtribemembernode.m_rewardactive;
    cPackData << FT_UINT32;
    cPackData << sBdbtribemembernode.m_totalactive;
    cPackData << FT_UINT32;
    cPackData << sBdbtribemembernode.m_addtimes;
    cPackData << FT_STRING;
    cPackData << sBdbtribemembernode.m_version;
    cPackData << FT_UINT64;
    cPackData << sBdbtribemembernode.m_groupid;
    cPackData << FT_UINT8;
    cPackData << sBdbtribemembernode.m_starmember;
    cPackData << FT_UINT8;
    cPackData << sBdbtribemembernode.m_openflag;
    if(nFieldNum == 20)
        return cPackData;
    cPackData << FT_UINT8;
    cPackData << sBdbtribemembernode.m_popupflag;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SBdbtribemembernode&  sBdbtribemembernode )
{
    uint8_t num;
    cPackData >> num;
    if(num < 20) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribemembernode.m_tribelevel;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribemembernode.m_trbstatus;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribemembernode.m_lastmsgid;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribemembernode.m_logontime;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribemembernode.m_userid;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribemembernode.m_username;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribemembernode.m_mobilebindflag;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribemembernode.m_mobileno;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribemembernode.m_bindmobile;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribemembernode.m_lastchattime;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribemembernode.m_onlinetime;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribemembernode.m_onlineactive;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribemembernode.m_chatactive;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribemembernode.m_rewardactive;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribemembernode.m_totalactive;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribemembernode.m_addtimes;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribemembernode.m_version;
    cPackData >> field;
    if(field.m_baseType != FT_UINT64) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribemembernode.m_groupid;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribemembernode.m_starmember;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBdbtribemembernode.m_openflag;
    try
    {
        if(num < 21) return cPackData;
        cPackData >> field;
        if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
        cPackData >> sBdbtribemembernode.m_popupflag;
    }
    catch(PACKRETCODE)
    {
        return cPackData;
    }
    for(int i = 21; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const SBdbtribemembernodevector&  sBdbtribemembernodevector )
{
    uint8_t nFieldNum = 1;
    cPackData << nFieldNum;
    cPackData << FT_VECTOR;
    cPackData << FT_STRUCT;
    {
        uint32_t nLen = sBdbtribemembernodevector.m_nodes.size();
        cPackData << nLen;
        VECTOR< SBdbtribemembernode >::const_iterator itr;
        for(itr = sBdbtribemembernodevector.m_nodes.begin(); itr != sBdbtribemembernodevector.m_nodes.end(); ++itr)
        {
            cPackData << (*itr);
        }
    }

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SBdbtribemembernodevector&  sBdbtribemembernodevector )
{
    uint8_t num;
    cPackData >> num;
    if(num < 1) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_VECTOR) throw PACK_TYPEMATCH_ERROR;
    {
        uint32_t nSize;
        cPackData >> nSize;
        if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
        sBdbtribemembernodevector.m_nodes.reserve(nSize);
        for(uint32_t i = 0; i < nSize; i++)
        {
            SBdbtribemembernode tmpVal;
            cPackData >> tmpVal;
            sBdbtribemembernodevector.m_nodes.push_back(tmpVal);
        }
    }
    for(int i = 1; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

