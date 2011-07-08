/*---------------------------------------------------------------------------
// Filename:        aqsc_head.cpp
// Date:            2011-01-30 12:50:18
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#include "aqsc_head.h"

void CAqscHead::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        (*this) << m_starter;
        (*this) << m_version;
        (*this) << m_seq;
        (*this) << m_len;
        (*this) << m_cmd;
        (*this) << m_cc;
;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CAqscHead::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        (*this) >> m_starter;
        (*this) >> m_version;
        (*this) >> m_seq;
        (*this) >> m_len;
        (*this) >> m_cmd;
        (*this) >> m_cc;
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

