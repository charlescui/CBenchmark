/*---------------------------------------------------------------------------
// Filename:        tbsmsg_pack.cpp
// Date:            2011-01-30 12:50:13
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#include "tbsmsg_pack.h"

void CTbscReqLoadOfflinemsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_REQ_LOAD_OFFLINEMSG;
    m_scsHead.PackData(strData);
}

void CTbscReqLoadOfflinemsg::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scsHead.Size();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        (*this) << m_tribeId;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_tribeMsgList.size();
            (*this) << nLen;
            VECTOR< STribeMsg >::const_iterator itr;
            for(itr = m_tribeMsgList.cbegin(); itr != m_tribeMsgList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        FormData( nHeadLen );
        m_scsHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CTbscReqLoadOfflinemsg::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscReqLoadOfflinemsg::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint32_t nHeadLen = m_scsHead.Size();
        m_scsHead.ResetInBuff(strData);
        uint16_t checkCode = CalcCheckCode(strData, nHeadLen);
        if(checkCode != m_scsHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        SetInCursor( nHeadLen );
        uint8_t num;
        (*this) >> num;
        if(num < 2) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_tribeId;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_tribeMsgList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                STribeMsg tmpVal;
                (*this) >> tmpVal;
                m_tribeMsgList.push_back(tmpVal);
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

PACKRETCODE CTbscReqLoadOfflinemsg::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscReqUnloadOfflinemsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_REQ_UNLOAD_OFFLINEMSG;
    m_scsHead.PackData(strData);
}

void CTbscReqUnloadOfflinemsg::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scsHead.Size();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        (*this) << m_tribeId;
        FormData( nHeadLen );
        m_scsHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CTbscReqUnloadOfflinemsg::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscReqUnloadOfflinemsg::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint32_t nHeadLen = m_scsHead.Size();
        m_scsHead.ResetInBuff(strData);
        uint16_t checkCode = CalcCheckCode(strData, nHeadLen);
        if(checkCode != m_scsHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        SetInCursor( nHeadLen );
        uint8_t num;
        (*this) >> num;
        if(num < 1) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_tribeId;
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

PACKRETCODE CTbscReqUnloadOfflinemsg::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscRspUnloadOfflinemsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_RSP_UNLOAD_OFFLINEMSG;
    m_scsHead.PackData(strData);
}

void CTbscRspUnloadOfflinemsg::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scsHead.Size();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT8;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_tribeId;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_tribeMsgList.size();
            (*this) << nLen;
            VECTOR< STribeMsg >::const_iterator itr;
            for(itr = m_tribeMsgList.cbegin(); itr != m_tribeMsgList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        FormData( nHeadLen );
        m_scsHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CTbscRspUnloadOfflinemsg::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscRspUnloadOfflinemsg::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint32_t nHeadLen = m_scsHead.Size();
        m_scsHead.ResetInBuff(strData);
        uint16_t checkCode = CalcCheckCode(strData, nHeadLen);
        if(checkCode != m_scsHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        SetInCursor( nHeadLen );
        uint8_t num;
        (*this) >> num;
        if(num < 3) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_tribeId;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_tribeMsgList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                STribeMsg tmpVal;
                (*this) >> tmpVal;
                m_tribeMsgList.push_back(tmpVal);
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

PACKRETCODE CTbscRspUnloadOfflinemsg::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscReqAddOfflinemsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_REQ_ADD_OFFLINEMSG;
    m_scsHead.PackData(strData);
}

void CTbscReqAddOfflinemsg::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scsHead.Size();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        (*this) << m_tribeId;
        (*this) << FT_STRUCT;
        (*this) << m_tribeMsg;
        FormData( nHeadLen );
        m_scsHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CTbscReqAddOfflinemsg::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscReqAddOfflinemsg::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint32_t nHeadLen = m_scsHead.Size();
        m_scsHead.ResetInBuff(strData);
        uint16_t checkCode = CalcCheckCode(strData, nHeadLen);
        if(checkCode != m_scsHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        SetInCursor( nHeadLen );
        uint8_t num;
        (*this) >> num;
        if(num < 2) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_tribeId;
        (*this) >> field;
        if(field.m_baseType != FT_STRUCT) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_tribeMsg;
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

PACKRETCODE CTbscReqAddOfflinemsg::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscReqGetFiltermsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_REQ_GET_FILTERMSG;
    m_scsHead.PackData(strData);
}

void CTbscReqGetFiltermsg::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scsHead.Size();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_STRING;
        (*this) << m_tribeId;
        (*this) << FT_STRING;
        (*this) << m_userId;
        (*this) << FT_UINT32;
        (*this) << m_lastMsgid;
        FormData( nHeadLen );
        m_scsHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CTbscReqGetFiltermsg::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscReqGetFiltermsg::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint32_t nHeadLen = m_scsHead.Size();
        m_scsHead.ResetInBuff(strData);
        uint16_t checkCode = CalcCheckCode(strData, nHeadLen);
        if(checkCode != m_scsHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        SetInCursor( nHeadLen );
        uint8_t num;
        (*this) >> num;
        if(num < 3) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_tribeId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_userId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_lastMsgid;
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

PACKRETCODE CTbscReqGetFiltermsg::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscRspGetFiltermsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_RSP_GET_FILTERMSG;
    m_scsHead.PackData(strData);
}

void CTbscRspGetFiltermsg::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scsHead.Size();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)4;
        (*this) << FT_UINT8;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_tribeId;
        (*this) << FT_STRING;
        (*this) << m_userId;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_tribeMsgList.size();
            (*this) << nLen;
            VECTOR< STribeMsg >::const_iterator itr;
            for(itr = m_tribeMsgList.cbegin(); itr != m_tribeMsgList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        FormData( nHeadLen );
        m_scsHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CTbscRspGetFiltermsg::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscRspGetFiltermsg::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint32_t nHeadLen = m_scsHead.Size();
        m_scsHead.ResetInBuff(strData);
        uint16_t checkCode = CalcCheckCode(strData, nHeadLen);
        if(checkCode != m_scsHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        SetInCursor( nHeadLen );
        uint8_t num;
        (*this) >> num;
        if(num < 4) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_tribeId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_userId;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_tribeMsgList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                STribeMsg tmpVal;
                (*this) >> tmpVal;
                m_tribeMsgList.push_back(tmpVal);
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

PACKRETCODE CTbscRspGetFiltermsg::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

