/*---------------------------------------------------------------------------
// Filename:        sdkss_head.cpp
// Date:            2011-01-30 12:49:54
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#include "sdkss_head.h"

void CSdkssHead::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        (*this) << m_starter;
        (*this) << m_cmd;
        (*this) << m_len;
        WriteData(m_serialNo, 0, 10);
        WriteData(m_account, 0, 10);
;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CSdkssHead::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        (*this) >> m_starter;
        (*this) >> m_cmd;
        (*this) >> m_len;
        ReadData(m_serialNo, 10, 0);
        ReadData(m_account, 10, 0);
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

