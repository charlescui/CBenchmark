/*---------------------------------------------------------------------------
// Filename:        fdbrecent_pack.cpp
// Date:            2011-01-30 12:48:58
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#include "fdbrecent_pack.h"

CPackData& operator<< ( CPackData& cPackData, const SFdbRecentNode&  sFdbRecentNode )
{
    uint8_t nFieldNum = 6;
    do {
        if(sFdbRecentNode.m_strangerflag == 0)
            nFieldNum--;
        else
            break;
        if(sFdbRecentNode.m_recvFlag == 0)
            nFieldNum--;
        else
            break;
        if(sFdbRecentNode.m_sendFlag == 0)
            nFieldNum--;
        else
            break;
        if(sFdbRecentNode.m_validTime == 0)
            nFieldNum--;
        else
            break;
        if(sFdbRecentNode.m_recvTime == 0)
            nFieldNum--;
        else
            break;
        if(sFdbRecentNode.m_sendTime == 0)
            nFieldNum--;
        else
            break;
    } while(0);
    cPackData << nFieldNum;
    if(nFieldNum == 0)
        return cPackData;
    cPackData << FT_UINT32;
    cPackData << sFdbRecentNode.m_sendTime;
    if(nFieldNum == 1)
        return cPackData;
    cPackData << FT_UINT32;
    cPackData << sFdbRecentNode.m_recvTime;
    if(nFieldNum == 2)
        return cPackData;
    cPackData << FT_UINT32;
    cPackData << sFdbRecentNode.m_validTime;
    if(nFieldNum == 3)
        return cPackData;
    cPackData << FT_UINT32;
    cPackData << sFdbRecentNode.m_sendFlag;
    if(nFieldNum == 4)
        return cPackData;
    cPackData << FT_UINT32;
    cPackData << sFdbRecentNode.m_recvFlag;
    if(nFieldNum == 5)
        return cPackData;
    cPackData << FT_UINT32;
    cPackData << sFdbRecentNode.m_strangerflag;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SFdbRecentNode&  sFdbRecentNode )
{
    uint8_t num;
    try
    {
        cPackData >> num;
        CFieldType field;
        if(num < 1) return cPackData;
        cPackData >> field;
        if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
        cPackData >> sFdbRecentNode.m_sendTime;
        if(num < 2) return cPackData;
        cPackData >> field;
        if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
        cPackData >> sFdbRecentNode.m_recvTime;
        if(num < 3) return cPackData;
        cPackData >> field;
        if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
        cPackData >> sFdbRecentNode.m_validTime;
        if(num < 4) return cPackData;
        cPackData >> field;
        if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
        cPackData >> sFdbRecentNode.m_sendFlag;
        if(num < 5) return cPackData;
        cPackData >> field;
        if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
        cPackData >> sFdbRecentNode.m_recvFlag;
        if(num < 6) return cPackData;
        cPackData >> field;
        if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
        cPackData >> sFdbRecentNode.m_strangerflag;
    }
    catch(PACKRETCODE)
    {
        return cPackData;
    }
    for(int i = 6; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const SFdbRecentMap&  sFdbRecentMap )
{
    uint8_t nFieldNum = 5;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sFdbRecentMap.m_pcid;
    cPackData << FT_UINT32;
    cPackData << sFdbRecentMap.m_ip;
    cPackData << FT_UINT32;
    cPackData << sFdbRecentMap.m_chgTime;
    cPackData << FT_UINT32;
    cPackData << sFdbRecentMap.m_loadTime;
    cPackData << FT_MAP;
    cPackData << FT_STRING;
    cPackData << FT_STRUCT;
    {
        uint8_t nSize = sFdbRecentMap.m_nodes.size();
        cPackData << nSize;
        map< string,SFdbRecentNode >::const_iterator itr;
        for(itr = sFdbRecentMap.m_nodes.begin(); itr != sFdbRecentMap.m_nodes.end(); ++itr)
        {
            cPackData << itr->first;
            cPackData << itr->second;
        }
    }

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SFdbRecentMap&  sFdbRecentMap )
{
    uint8_t num;
    cPackData >> num;
    if(num < 5) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sFdbRecentMap.m_pcid;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sFdbRecentMap.m_ip;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sFdbRecentMap.m_chgTime;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sFdbRecentMap.m_loadTime;
    cPackData >> field;
    if(field.m_baseType != FT_MAP) throw PACK_TYPEMATCH_ERROR;
    {
        uint8_t nSize;
        cPackData >> nSize;
        for(uint32_t i = 0; i < nSize; i++)
        {
            string key;
            SFdbRecentNode value;
            cPackData >> key;
            cPackData >> value;
            sFdbRecentMap.m_nodes[key] = value;
        }
    }
    for(int i = 5; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

