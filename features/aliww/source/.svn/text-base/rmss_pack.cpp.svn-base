/*---------------------------------------------------------------------------
// Filename:        rmss_pack.cpp
// Date:            2011-01-30 12:49:21
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#include "rmss_pack.h"

CPackData& operator<< ( CPackData& cPackData, const SServerInfo&  sServerInfo )
{
    uint8_t nFieldNum = 3;
    cPackData << nFieldNum;
    cPackData << FT_UINT16;
    cPackData << sServerInfo.m_servId;
    cPackData << FT_STRING;
    cPackData << sServerInfo.m_hostIp;
    cPackData << FT_UINT16;
    cPackData << sServerInfo.m_hostPort;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SServerInfo&  sServerInfo )
{
    uint8_t num;
    cPackData >> num;
    if(num < 3) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_UINT16) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sServerInfo.m_servId;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sServerInfo.m_hostIp;
    cPackData >> field;
    if(field.m_baseType != FT_UINT16) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sServerInfo.m_hostPort;
    for(int i = 3; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CSsReqRgsregister::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = SS_REQ_RGSREGISTER;
    m_ssHead.PackData(strData);
}

void CSsReqRgsregister::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRUCT;
        (*this) << m_hostInfo;
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CSsReqRgsregister::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CSsReqRgsregister::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_STRUCT) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_hostInfo;
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

PACKRETCODE CSsReqRgsregister::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CSsRspRgsregister::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = SS_RSP_RGSREGISTER;
    m_ssHead.PackData(strData);
}

void CSsRspRgsregister::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT8;
        (*this) << m_retcode;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_rgsList.size();
            (*this) << nLen;
            VECTOR< SServerInfo >::const_iterator itr;
            for(itr = m_rgsList.cbegin(); itr != m_rgsList.cend(); ++itr)
            {
                (*this) << (*itr);
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

void CSsRspRgsregister::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CSsRspRgsregister::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_rgsList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SServerInfo tmpVal;
                (*this) >> tmpVal;
                m_rgsList.push_back(tmpVal);
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

PACKRETCODE CSsRspRgsregister::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

