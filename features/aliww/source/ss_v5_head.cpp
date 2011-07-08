/*---------------------------------------------------------------------------
// Filename:        ss_v5_head.cpp
// Date:            2011-01-30 12:50:03
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#include "ss_v5_head.h"

void CSsV5Head::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        (*this) << m_starter;
        (*this) << m_version;
        (*this) << m_reserved;
        (*this) << m_imsId;
        (*this) << m_cmd;
        (*this) << m_seq;
        (*this) << m_cc;
        (*this) << m_len;
;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CSsV5Head::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        (*this) >> m_starter;
        (*this) >> m_version;
        (*this) >> m_reserved;
        (*this) >> m_imsId;
        (*this) >> m_cmd;
        (*this) >> m_seq;
        (*this) >> m_cc;
        (*this) >> m_len;
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

