/*---------------------------------------------------------------------------
// Filename:        tgsstrc_pack.cpp
// Date:            2011-01-30 12:49:42
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#include "tgsstrc_pack.h"

CPackData& operator<< ( CPackData& cPackData, const SModifyItem&  sModifyItem )
{
    uint8_t nFieldNum = 2;
    cPackData << nFieldNum;
    cPackData << FT_UINT8;
    cPackData << sModifyItem.m_id;
    cPackData << FT_STRING;
    cPackData << sModifyItem.m_content;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SModifyItem&  sModifyItem )
{
    uint8_t num;
    cPackData >> num;
    if(num < 2) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sModifyItem.m_id;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sModifyItem.m_content;
    for(int i = 2; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

