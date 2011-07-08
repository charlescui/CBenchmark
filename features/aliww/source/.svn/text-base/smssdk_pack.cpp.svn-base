/*---------------------------------------------------------------------------
// Filename:        smssdk_pack.cpp
// Date:            2011-01-30 12:49:55
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#include "smssdk_pack.h"

void CSmsUploadMessage::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_sdkssHead.Size())
        m_sdkssHead.m_len = 0;
    else
        m_sdkssHead.m_len = strData.size() - m_sdkssHead.Size();
    if(m_sdkssHead.m_cmd == 0) m_sdkssHead.m_cmd = SMS_UPLOAD_MESSAGE;
    m_sdkssHead.PackData(strData);
}

void CSmsUploadMessage::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + m_sdkssHead.Size() + 7);
        SetOutCursor( m_sdkssHead.Size() );
        (*this) << m_transId;
        (*this) << m_fromMobile;
        (*this) << m_toAccount;
        (*this) << m_sendTime;
        (*this) << m_message;
        FormData(m_sdkssHead.Size());
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CSmsUploadMessage::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CSmsUploadMessage::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        SetInCursor(m_sdkssHead.Size());
        uLongf nHeadLen = m_sdkssHead.Size();
        SetInCursor(nHeadLen);
        (*this) >> m_transId;
        (*this) >> m_fromMobile;
        (*this) >> m_toAccount;
        (*this) >> m_sendTime;
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

PACKRETCODE CSmsUploadMessage::UnpackData(string& strData)
{
    m_sdkssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CSmsReportError::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_sdkssHead.Size())
        m_sdkssHead.m_len = 0;
    else
        m_sdkssHead.m_len = strData.size() - m_sdkssHead.Size();
    if(m_sdkssHead.m_cmd == 0) m_sdkssHead.m_cmd = SMS_REPORT_ERROR;
    m_sdkssHead.PackData(strData);
}

void CSmsReportError::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + m_sdkssHead.Size() + 7);
        SetOutCursor( m_sdkssHead.Size() );
        (*this) << m_status;
        (*this) << m_transId;
        (*this) << m_desc;
        FormData(m_sdkssHead.Size());
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CSmsReportError::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CSmsReportError::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        SetInCursor(m_sdkssHead.Size());
        uLongf nHeadLen = m_sdkssHead.Size();
        SetInCursor(nHeadLen);
        (*this) >> m_status;
        (*this) >> m_transId;
        (*this) >> m_desc;
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

PACKRETCODE CSmsReportError::UnpackData(string& strData)
{
    m_sdkssHead.UnpackData(strData);
    return UnpackBody(strData);
}

