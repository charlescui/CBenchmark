/*---------------------------------------------------------------------------
// Filename:        scs_head.cpp
// Date:            2011-01-30 12:50:13
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#include "scs_head.h"

void CScsHead::PackData(string& strData)
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

PACKRETCODE CScsHead::UnpackData(const string& strData)
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

