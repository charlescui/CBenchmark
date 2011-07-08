/*---------------------------------------------------------------------------
// Filename:        dbss_v5_pack.cpp
// Date:            2011-01-30 12:50:05
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#include "dbss_v5_pack.h"

void CSsReqSmsRevimmsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssV5Head.Size())
        m_ssV5Head.m_len = 0;
    else
        m_ssV5Head.m_len = strData.size() - m_ssV5Head.Size();
    if(m_ssV5Head.m_cmd == 0) m_ssV5Head.m_cmd = SS_REQ_SMS_REVIMMSG;
    m_ssV5Head.PackData(strData);
}

void CSsReqSmsRevimmsg::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + m_ssV5Head.Size() + 7);
        SetOutCursor( m_ssV5Head.Size() );
        (*this) << m_fromId;
        (*this) << m_toId;
        (*this) << m_message;
        m_ssV5Head.m_cc = CalcCheckCode(strData, m_ssV5Head.Size());
        FormData(m_ssV5Head.Size());
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CSsReqSmsRevimmsg::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CSsReqSmsRevimmsg::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        SetInCursor(m_ssV5Head.Size());
        uLongf nHeadLen = m_ssV5Head.Size();
        uint16_t checkCode = CalcCheckCode(strData, m_ssV5Head.Size());
        m_ssV5Head.ResetInBuff(strData);
        if(checkCode != m_ssV5Head.PeekCc()) return PACK_CHECKCODE_ERROR;
        SetInCursor(nHeadLen);
        (*this) >> m_fromId;
        (*this) >> m_toId;
        (*this) >> m_message;
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

PACKRETCODE CSsReqSmsRevimmsg::UnpackData(string& strData)
{
    m_ssV5Head.UnpackData(strData);
    return UnpackBody(strData);
}

