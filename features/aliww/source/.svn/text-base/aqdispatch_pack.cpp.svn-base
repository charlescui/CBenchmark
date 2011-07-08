/*---------------------------------------------------------------------------
// Filename:        aqdispatch_pack.cpp
// Date:            2011-01-30 12:50:19
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#include "aqdispatch_pack.h"

CPackData& operator<< ( CPackData& cPackData, const SAqkvpair&  sAqkvpair )
{
    cPackData.WriteData(sAqkvpair.m_key, 1);
    cPackData << sAqkvpair.m_value;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SAqkvpair&  sAqkvpair )
{
    cPackData.ReadData(sAqkvpair.m_key, 0, 1);
    cPackData >> sAqkvpair.m_value;
    return cPackData;
}

void CAqscNotifyData::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_aqscHead.Size())
        m_aqscHead.m_len = 0;
    else
        m_aqscHead.m_len = strData.size() - m_aqscHead.Size();
    if(m_aqscHead.m_cmd == 0) m_aqscHead.m_cmd = AQSC_NOTIFY_DATA;
    m_aqscHead.PackData(strData);
}

void CAqscNotifyData::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + m_aqscHead.Size() + 7);
        SetOutCursor( m_aqscHead.Size() );
        (*this) << m_serverId;
        (*this) << m_dataType;
        {
            uint32_t nLen = m_kvList.size();
            (*this) << nLen;
            VECTOR< SAqkvpair >::const_iterator itr;
            for(itr = m_kvList.cbegin(); itr != m_kvList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        m_aqscHead.m_cc = CalcCheckCode(strData, m_aqscHead.Size());
        FormData(m_aqscHead.Size());
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CAqscNotifyData::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CAqscNotifyData::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        SetInCursor(m_aqscHead.Size());
        uLongf nHeadLen = m_aqscHead.Size();
        uint16_t checkCode = CalcCheckCode(strData, m_aqscHead.Size());
        m_aqscHead.ResetInBuff(strData);
        if(checkCode != m_aqscHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        SetInCursor(nHeadLen);
        (*this) >> m_serverId;
        (*this) >> m_dataType;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_kvList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SAqkvpair tmpVal;
                (*this) >> tmpVal;
                m_kvList.push_back(tmpVal);
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

PACKRETCODE CAqscNotifyData::UnpackData(string& strData)
{
    m_aqscHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CAqscReqSubscribeData::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_aqscHead.Size())
        m_aqscHead.m_len = 0;
    else
        m_aqscHead.m_len = strData.size() - m_aqscHead.Size();
    if(m_aqscHead.m_cmd == 0) m_aqscHead.m_cmd = AQSC_REQ_SUBSCRIBE_DATA;
    m_aqscHead.PackData(strData);
}

void CAqscReqSubscribeData::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + m_aqscHead.Size() + 7);
        SetOutCursor( m_aqscHead.Size() );
        (*this) << m_appid;
        {
            uint32_t nLen = m_subscribeList.size();
            (*this) << nLen;
            VECTOR< uint16_t >::const_iterator itr;
            for(itr = m_subscribeList.cbegin(); itr != m_subscribeList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        m_aqscHead.m_cc = CalcCheckCode(strData, m_aqscHead.Size());
        FormData(m_aqscHead.Size());
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CAqscReqSubscribeData::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CAqscReqSubscribeData::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        SetInCursor(m_aqscHead.Size());
        uLongf nHeadLen = m_aqscHead.Size();
        uint16_t checkCode = CalcCheckCode(strData, m_aqscHead.Size());
        m_aqscHead.ResetInBuff(strData);
        if(checkCode != m_aqscHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        SetInCursor(nHeadLen);
        (*this) >> m_appid;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_subscribeList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                uint16_t tmpVal;
                (*this) >> tmpVal;
                m_subscribeList.push_back(tmpVal);
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

PACKRETCODE CAqscReqSubscribeData::UnpackData(string& strData)
{
    m_aqscHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CAqscRspSubscribeData::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_aqscHead.Size())
        m_aqscHead.m_len = 0;
    else
        m_aqscHead.m_len = strData.size() - m_aqscHead.Size();
    if(m_aqscHead.m_cmd == 0) m_aqscHead.m_cmd = AQSC_RSP_SUBSCRIBE_DATA;
    m_aqscHead.PackData(strData);
}

void CAqscRspSubscribeData::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + m_aqscHead.Size() + 7);
        SetOutCursor( m_aqscHead.Size() );
        (*this) << m_status;
        (*this) << m_errorCode;
        m_aqscHead.m_cc = CalcCheckCode(strData, m_aqscHead.Size());
        FormData(m_aqscHead.Size());
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CAqscRspSubscribeData::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CAqscRspSubscribeData::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        SetInCursor(m_aqscHead.Size());
        uLongf nHeadLen = m_aqscHead.Size();
        uint16_t checkCode = CalcCheckCode(strData, m_aqscHead.Size());
        m_aqscHead.ResetInBuff(strData);
        if(checkCode != m_aqscHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        SetInCursor(nHeadLen);
        (*this) >> m_status;
        (*this) >> m_errorCode;
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

PACKRETCODE CAqscRspSubscribeData::UnpackData(string& strData)
{
    m_aqscHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CAqscReqUnsubscribeData::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_aqscHead.Size())
        m_aqscHead.m_len = 0;
    else
        m_aqscHead.m_len = strData.size() - m_aqscHead.Size();
    if(m_aqscHead.m_cmd == 0) m_aqscHead.m_cmd = AQSC_REQ_UNSUBSCRIBE_DATA;
    m_aqscHead.PackData(strData);
}

void CAqscReqUnsubscribeData::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + m_aqscHead.Size() + 7);
        SetOutCursor( m_aqscHead.Size() );
        (*this) << m_appid;
        {
            uint32_t nLen = m_unsubscribeList.size();
            (*this) << nLen;
            VECTOR< uint16_t >::const_iterator itr;
            for(itr = m_unsubscribeList.cbegin(); itr != m_unsubscribeList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        m_aqscHead.m_cc = CalcCheckCode(strData, m_aqscHead.Size());
        FormData(m_aqscHead.Size());
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CAqscReqUnsubscribeData::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CAqscReqUnsubscribeData::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        SetInCursor(m_aqscHead.Size());
        uLongf nHeadLen = m_aqscHead.Size();
        uint16_t checkCode = CalcCheckCode(strData, m_aqscHead.Size());
        m_aqscHead.ResetInBuff(strData);
        if(checkCode != m_aqscHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        SetInCursor(nHeadLen);
        (*this) >> m_appid;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_unsubscribeList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                uint16_t tmpVal;
                (*this) >> tmpVal;
                m_unsubscribeList.push_back(tmpVal);
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

PACKRETCODE CAqscReqUnsubscribeData::UnpackData(string& strData)
{
    m_aqscHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CAqscRspUnsubscribeData::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_aqscHead.Size())
        m_aqscHead.m_len = 0;
    else
        m_aqscHead.m_len = strData.size() - m_aqscHead.Size();
    if(m_aqscHead.m_cmd == 0) m_aqscHead.m_cmd = AQSC_RSP_UNSUBSCRIBE_DATA;
    m_aqscHead.PackData(strData);
}

void CAqscRspUnsubscribeData::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + m_aqscHead.Size() + 7);
        SetOutCursor( m_aqscHead.Size() );
        (*this) << m_status;
        (*this) << m_errorCode;
        m_aqscHead.m_cc = CalcCheckCode(strData, m_aqscHead.Size());
        FormData(m_aqscHead.Size());
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CAqscRspUnsubscribeData::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CAqscRspUnsubscribeData::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        SetInCursor(m_aqscHead.Size());
        uLongf nHeadLen = m_aqscHead.Size();
        uint16_t checkCode = CalcCheckCode(strData, m_aqscHead.Size());
        m_aqscHead.ResetInBuff(strData);
        if(checkCode != m_aqscHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        SetInCursor(nHeadLen);
        (*this) >> m_status;
        (*this) >> m_errorCode;
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

PACKRETCODE CAqscRspUnsubscribeData::UnpackData(string& strData)
{
    m_aqscHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CAqscReqHealthCheck::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_aqscHead.Size())
        m_aqscHead.m_len = 0;
    else
        m_aqscHead.m_len = strData.size() - m_aqscHead.Size();
    if(m_aqscHead.m_cmd == 0) m_aqscHead.m_cmd = AQSC_REQ_HEALTH_CHECK;
    m_aqscHead.PackData(strData);
}

void CAqscReqHealthCheck::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + m_aqscHead.Size() + 7);
        SetOutCursor( m_aqscHead.Size() );
        (*this) << m_appid;
        m_aqscHead.m_cc = CalcCheckCode(strData, m_aqscHead.Size());
        FormData(m_aqscHead.Size());
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CAqscReqHealthCheck::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CAqscReqHealthCheck::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        SetInCursor(m_aqscHead.Size());
        uLongf nHeadLen = m_aqscHead.Size();
        uint16_t checkCode = CalcCheckCode(strData, m_aqscHead.Size());
        m_aqscHead.ResetInBuff(strData);
        if(checkCode != m_aqscHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        SetInCursor(nHeadLen);
        (*this) >> m_appid;
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

PACKRETCODE CAqscReqHealthCheck::UnpackData(string& strData)
{
    m_aqscHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CAqscRspHealthCheck::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_aqscHead.Size())
        m_aqscHead.m_len = 0;
    else
        m_aqscHead.m_len = strData.size() - m_aqscHead.Size();
    if(m_aqscHead.m_cmd == 0) m_aqscHead.m_cmd = AQSC_RSP_HEALTH_CHECK;
    m_aqscHead.PackData(strData);
}

void CAqscRspHealthCheck::PackBody(string& strData)
{
}

void CAqscRspHealthCheck::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CAqscRspHealthCheck::UnpackBody(string& strData)
{
    return PACK_RIGHT;
}

PACKRETCODE CAqscRspHealthCheck::UnpackData(string& strData)
{
    m_aqscHead.UnpackData(strData);
    return UnpackBody(strData);
}

