/*---------------------------------------------------------------------------
// Filename:        msc_head.cpp
// Date:            2011-01-30 12:49:57
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#include "msc_head.h"

void CMscHead::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        (*this) << m_starter;
        (*this) << m_version;
        (*this) << m_flag;
        (*this) << m_cmd;
        (*this) << m_seq;
        (*this) << m_cc;
        (*this) << m_len;
        (*this) << m_reserved;
;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CMscHead::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        (*this) >> m_starter;
        (*this) >> m_version;
        (*this) >> m_flag;
        (*this) >> m_cmd;
        (*this) >> m_seq;
        (*this) >> m_cc;
        (*this) >> m_len;
        (*this) >> m_reserved;
;
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

