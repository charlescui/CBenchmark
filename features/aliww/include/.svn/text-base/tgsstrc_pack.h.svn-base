/*---------------------------------------------------------------------------
// Filename:        tgsstrc_pack.h
// Date:            2011-01-30 12:49:42
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __TGSSTRC_PACK_H__
#define __TGSSTRC_PACK_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"
#include "const_macro.h"

using namespace std;

struct SModifyItem
{
public:
    SModifyItem()
    {
    }

    ~SModifyItem() { }
    SModifyItem(const uint8_t&  chId, const string&  strContent)
    {
        m_id = chId;
        m_content = strContent;
    }
    SModifyItem&  operator=( const SModifyItem&  sModifyItem )
    {
        m_id = sModifyItem.m_id;
        m_content = sModifyItem.m_content;
        return *this;
    }

    uint8_t m_id;
    string m_content;

public:
    uint32_t Size() const;
};

inline uint32_t SModifyItem::Size() const
{
    uint32_t nSize = 8;
    nSize += m_content.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SModifyItem&  sModifyItem );
CPackData& operator>> ( CPackData& cPackData, SModifyItem&  sModifyItem );

#endif
