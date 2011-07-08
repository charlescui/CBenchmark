/*---------------------------------------------------------------------------
// Filename:        cachss_pack.cpp
// Date:            2011-01-30 12:50:08
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#include "cachss_pack.h"

void CSsCaNotify::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = SS_CA_NOTIFY;
    m_ssHead.PackData(strData);
}

void CSsCaNotify::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        (*this) << m_opname;
        (*this) << FT_MAP;
        (*this) << FT_STRING;
        (*this) << FT_STRING;
        {
            uint8_t nSize = m_attrs.size();
            (*this) << nSize;
            map< string,string >::const_iterator itr;
            for(itr = m_attrs.begin(); itr != m_attrs.end(); ++itr)
            {
                (*this) << itr->first;
                (*this) << itr->second;
            }
        }
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CSsCaNotify::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CSsCaNotify::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint32_t nHeadLen = m_ssHead.PeekSize();
        m_ssHead.ResetInBuff(strData);
        uint16_t checkCode = CalcCheckCode(strData, nHeadLen);
        if(checkCode != m_ssHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        SetInCursor( nHeadLen );
        uint8_t num;
        (*this) >> num;
        if(num < 2) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_opname;
        (*this) >> field;
        if(field.m_baseType != FT_MAP) return PACK_TYPEMATCH_ERROR;
        {
            uint8_t nSize;
            (*this) >> nSize;
            for(uint32_t i = 0; i < nSize; i++)
            {
                string key;
                string value;
                (*this) >> key;
                (*this) >> value;
                m_attrs[key] = value;
            }
        }
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

PACKRETCODE CSsCaNotify::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

