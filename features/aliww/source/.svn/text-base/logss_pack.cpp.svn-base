/*---------------------------------------------------------------------------
// Filename:        logss_pack.cpp
// Date:            2011-01-30 12:49:51
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#include "logss_pack.h"

CPackData& operator<< ( CPackData& cPackData, const SLogServerInfo&  sLogServerInfo )
{
    uint8_t nFieldNum = 2;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sLogServerInfo.m_machineInfo;
    cPackData << FT_STRING;
    cPackData << sLogServerInfo.m_type;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SLogServerInfo&  sLogServerInfo )
{
    uint8_t num;
    cPackData >> num;
    if(num < 2) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sLogServerInfo.m_machineInfo;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sLogServerInfo.m_type;
    for(int i = 2; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CSsReqLog::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = SS_REQ_LOG;
    m_ssHead.PackData(strData);
}

void CSsReqLog::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRUCT;
        (*this) << m_hostInfo;
        (*this) << FT_STRING;
        (*this) << m_warnInfo;
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CSsReqLog::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CSsReqLog::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_STRUCT) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_hostInfo;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_warnInfo;
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

PACKRETCODE CSsReqLog::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CSsRspLog::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = SS_RSP_LOG;
    m_ssHead.PackData(strData);
}

void CSsRspLog::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        (*this) << m_info;
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CSsRspLog::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CSsRspLog::UnpackBody(string& strData)
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
        if(num < 1) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_info;
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

PACKRETCODE CSsRspLog::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

