/*---------------------------------------------------------------------------
// Filename:        tgsc_pack.cpp
// Date:            2011-01-30 12:49:42
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#include "tgsc_pack.h"

void CTbscReqGetOnlineinfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_REQ_GET_ONLINEINFO;
    m_scsHead.PackData(strData);
}

void CTbscReqGetOnlineinfo::PackBody(string& strData)
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

void CTbscReqGetOnlineinfo::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscReqGetOnlineinfo::UnpackBody(string& strData)
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

PACKRETCODE CTbscReqGetOnlineinfo::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscRspGetOnlineinfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_RSP_GET_ONLINEINFO;
    m_scsHead.PackData(strData);
}

void CTbscRspGetOnlineinfo::PackBody(string& strData)
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
        (*this) << FT_UINT32;
        (*this) << m_memberNum;
        (*this) << FT_UINT32;
        (*this) << m_visitorNum;
        FormData( nHeadLen );
        m_scsHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CTbscRspGetOnlineinfo::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscRspGetOnlineinfo::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_memberNum;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_visitorNum;
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

PACKRETCODE CTbscRspGetOnlineinfo::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscReqNtfModifytribe::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_REQ_NTF_MODIFYTRIBE;
    m_scsHead.PackData(strData);
}

void CTbscReqNtfModifytribe::PackBody(string& strData)
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
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_itemList.size();
            (*this) << nLen;
            VECTOR< SModifyItem >::const_iterator itr;
            for(itr = m_itemList.cbegin(); itr != m_itemList.cend(); ++itr)
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

void CTbscReqNtfModifytribe::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscReqNtfModifytribe::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_itemList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SModifyItem tmpVal;
                (*this) >> tmpVal;
                m_itemList.push_back(tmpVal);
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

PACKRETCODE CTbscReqNtfModifytribe::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscRspNtfModifytribe::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_RSP_NTF_MODIFYTRIBE;
    m_scsHead.PackData(strData);
}

void CTbscRspNtfModifytribe::PackBody(string& strData)
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
            uint32_t nLen = m_itemList.size();
            (*this) << nLen;
            VECTOR< SModifyItem >::const_iterator itr;
            for(itr = m_itemList.cbegin(); itr != m_itemList.cend(); ++itr)
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

void CTbscRspNtfModifytribe::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscRspNtfModifytribe::UnpackBody(string& strData)
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
            m_itemList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SModifyItem tmpVal;
                (*this) >> tmpVal;
                m_itemList.push_back(tmpVal);
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

PACKRETCODE CTbscRspNtfModifytribe::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscReqGetTribemember::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_REQ_GET_TRIBEMEMBER;
    m_scsHead.PackData(strData);
}

void CTbscReqGetTribemember::PackBody(string& strData)
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

void CTbscReqGetTribemember::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscReqGetTribemember::UnpackBody(string& strData)
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

PACKRETCODE CTbscReqGetTribemember::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscRspGetTribemember::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_RSP_GET_TRIBEMEMBER;
    m_scsHead.PackData(strData);
}

void CTbscRspGetTribemember::PackBody(string& strData)
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
            uint32_t nLen = m_memberList.size();
            (*this) << nLen;
            VECTOR< STmInfo >::const_iterator itr;
            for(itr = m_memberList.cbegin(); itr != m_memberList.cend(); ++itr)
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

void CTbscRspGetTribemember::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscRspGetTribemember::UnpackBody(string& strData)
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
            m_memberList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                STmInfo tmpVal;
                (*this) >> tmpVal;
                m_memberList.push_back(tmpVal);
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

PACKRETCODE CTbscRspGetTribemember::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscReqGetMemberinfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_REQ_GET_MEMBERINFO;
    m_scsHead.PackData(strData);
}

void CTbscReqGetMemberinfo::PackBody(string& strData)
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
        (*this) << FT_STRING;
        (*this) << m_userId;
        FormData( nHeadLen );
        m_scsHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CTbscReqGetMemberinfo::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscReqGetMemberinfo::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_userId;
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

PACKRETCODE CTbscReqGetMemberinfo::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscRspGetMemberinfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_RSP_GET_MEMBERINFO;
    m_scsHead.PackData(strData);
}

void CTbscRspGetMemberinfo::PackBody(string& strData)
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
        (*this) << FT_STRUCT;
        (*this) << m_memberInfo;
        FormData( nHeadLen );
        m_scsHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CTbscRspGetMemberinfo::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscRspGetMemberinfo::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_STRUCT) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_memberInfo;
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

PACKRETCODE CTbscRspGetMemberinfo::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscReqGetTribemanager::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_REQ_GET_TRIBEMANAGER;
    m_scsHead.PackData(strData);
}

void CTbscReqGetTribemanager::PackBody(string& strData)
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

void CTbscReqGetTribemanager::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscReqGetTribemanager::UnpackBody(string& strData)
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

PACKRETCODE CTbscReqGetTribemanager::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscRspGetTribemanager::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_RSP_GET_TRIBEMANAGER;
    m_scsHead.PackData(strData);
}

void CTbscRspGetTribemanager::PackBody(string& strData)
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
        (*this) << FT_STRING;
        {
            uint32_t nLen = m_managerList.size();
            (*this) << nLen;
            VECTOR< string >::const_iterator itr;
            for(itr = m_managerList.cbegin(); itr != m_managerList.cend(); ++itr)
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

void CTbscRspGetTribemanager::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscRspGetTribemanager::UnpackBody(string& strData)
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
            m_managerList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                string tmpVal;
                (*this) >> tmpVal;
                m_managerList.push_back(tmpVal);
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

PACKRETCODE CTbscRspGetTribemanager::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscReqGetUsertribe::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_REQ_GET_USERTRIBE;
    m_scsHead.PackData(strData);
}

void CTbscReqGetUsertribe::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scsHead.Size();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        (*this) << m_userId;
        FormData( nHeadLen );
        m_scsHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CTbscReqGetUsertribe::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscReqGetUsertribe::UnpackBody(string& strData)
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
        (*this) >> m_userId;
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

PACKRETCODE CTbscReqGetUsertribe::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscRspGetUsertribe::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_RSP_GET_USERTRIBE;
    m_scsHead.PackData(strData);
}

void CTbscRspGetUsertribe::PackBody(string& strData)
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
        (*this) << m_userId;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_tribeList.size();
            (*this) << nLen;
            VECTOR< STribeId >::const_iterator itr;
            for(itr = m_tribeList.cbegin(); itr != m_tribeList.cend(); ++itr)
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

void CTbscRspGetUsertribe::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscRspGetUsertribe::UnpackBody(string& strData)
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
        (*this) >> m_userId;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_tribeList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                STribeId tmpVal;
                (*this) >> tmpVal;
                m_tribeList.push_back(tmpVal);
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

PACKRETCODE CTbscRspGetUsertribe::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscReqSendTribemsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_REQ_SEND_TRIBEMSG;
    m_scsHead.PackData(strData);
}

void CTbscReqSendTribemsg::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scsHead.Size();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)4;
        (*this) << FT_STRING;
        (*this) << m_tribeId;
        (*this) << FT_STRING;
        (*this) << m_userId;
        (*this) << FT_STRING;
        (*this) << m_message;
        (*this) << FT_UINT8;
        (*this) << m_msgType;
        FormData( nHeadLen );
        m_scsHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CTbscReqSendTribemsg::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscReqSendTribemsg::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_message;
        try
        {
            if(num < 4) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_msgType;
        }
        catch(PACKRETCODE)
        {
            return PACK_RIGHT;
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

PACKRETCODE CTbscReqSendTribemsg::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscRspSendTribemsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_RSP_SEND_TRIBEMSG;
    m_scsHead.PackData(strData);
}

void CTbscRspSendTribemsg::PackBody(string& strData)
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
        (*this) << m_message;
        (*this) << FT_UINT8;
        (*this) << m_msgType;
        FormData( nHeadLen );
        m_scsHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CTbscRspSendTribemsg::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscRspSendTribemsg::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_message;
        try
        {
            if(num < 4) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_msgType;
        }
        catch(PACKRETCODE)
        {
            return PACK_RIGHT;
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

PACKRETCODE CTbscRspSendTribemsg::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscReqGetTribeinfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_REQ_GET_TRIBEINFO;
    m_scsHead.PackData(strData);
}

void CTbscReqGetTribeinfo::PackBody(string& strData)
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

void CTbscReqGetTribeinfo::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscReqGetTribeinfo::UnpackBody(string& strData)
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

PACKRETCODE CTbscReqGetTribeinfo::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscRspGetTribeinfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_RSP_GET_TRIBEINFO;
    m_scsHead.PackData(strData);
}

void CTbscRspGetTribeinfo::PackBody(string& strData)
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
        (*this) << FT_STRUCT;
        (*this) << m_tribeInfo;
        FormData( nHeadLen );
        m_scsHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CTbscRspGetTribeinfo::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscRspGetTribeinfo::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_STRUCT) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_tribeInfo;
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

PACKRETCODE CTbscRspGetTribeinfo::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscReqGetActlevel::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_REQ_GET_ACTLEVEL;
    m_scsHead.PackData(strData);
}

void CTbscReqGetActlevel::PackBody(string& strData)
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

void CTbscReqGetActlevel::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscReqGetActlevel::UnpackBody(string& strData)
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

PACKRETCODE CTbscReqGetActlevel::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscRspGetActlevel::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_RSP_GET_ACTLEVEL;
    m_scsHead.PackData(strData);
}

void CTbscRspGetActlevel::PackBody(string& strData)
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
        (*this) << FT_UINT32;
        (*this) << m_activeLevel;
        FormData( nHeadLen );
        m_scsHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CTbscRspGetActlevel::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscRspGetActlevel::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_activeLevel;
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

PACKRETCODE CTbscRspGetActlevel::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscReqUnloadtribe::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_REQ_UNLOADTRIBE;
    m_scsHead.PackData(strData);
}

void CTbscReqUnloadtribe::PackBody(string& strData)
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

void CTbscReqUnloadtribe::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscReqUnloadtribe::UnpackBody(string& strData)
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

PACKRETCODE CTbscReqUnloadtribe::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscRspUnloadtribe::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_RSP_UNLOADTRIBE;
    m_scsHead.PackData(strData);
}

void CTbscRspUnloadtribe::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scsHead.Size();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT8;
        (*this) << m_retcode;
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

void CTbscRspUnloadtribe::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscRspUnloadtribe::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
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

PACKRETCODE CTbscRspUnloadtribe::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscReqActiveUser::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_REQ_ACTIVE_USER;
    m_scsHead.PackData(strData);
}

void CTbscReqActiveUser::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scsHead.Size();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_STRING;
        (*this) << m_userId;
        (*this) << FT_STRING;
        (*this) << m_webUid;
        (*this) << FT_VECTOR;
        (*this) << FT_STRING;
        {
            uint32_t nLen = m_tribeList.size();
            (*this) << nLen;
            VECTOR< string >::const_iterator itr;
            for(itr = m_tribeList.cbegin(); itr != m_tribeList.cend(); ++itr)
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

void CTbscReqActiveUser::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscReqActiveUser::UnpackBody(string& strData)
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
        (*this) >> m_userId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_webUid;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_tribeList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                string tmpVal;
                (*this) >> tmpVal;
                m_tribeList.push_back(tmpVal);
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

PACKRETCODE CTbscReqActiveUser::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscRspActiveUser::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_RSP_ACTIVE_USER;
    m_scsHead.PackData(strData);
}

void CTbscRspActiveUser::PackBody(string& strData)
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
        (*this) << m_userId;
        (*this) << FT_STRING;
        (*this) << m_webUid;
        (*this) << FT_VECTOR;
        (*this) << FT_STRING;
        {
            uint32_t nLen = m_tribeList.size();
            (*this) << nLen;
            VECTOR< string >::const_iterator itr;
            for(itr = m_tribeList.cbegin(); itr != m_tribeList.cend(); ++itr)
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

void CTbscRspActiveUser::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscRspActiveUser::UnpackBody(string& strData)
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
        (*this) >> m_userId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_webUid;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_tribeList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                string tmpVal;
                (*this) >> tmpVal;
                m_tribeList.push_back(tmpVal);
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

PACKRETCODE CTbscRspActiveUser::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscReqDisactiveUser::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_REQ_DISACTIVE_USER;
    m_scsHead.PackData(strData);
}

void CTbscReqDisactiveUser::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scsHead.Size();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_STRING;
        (*this) << m_userId;
        (*this) << FT_STRING;
        (*this) << m_webUid;
        (*this) << FT_VECTOR;
        (*this) << FT_STRING;
        {
            uint32_t nLen = m_tribeList.size();
            (*this) << nLen;
            VECTOR< string >::const_iterator itr;
            for(itr = m_tribeList.cbegin(); itr != m_tribeList.cend(); ++itr)
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

void CTbscReqDisactiveUser::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscReqDisactiveUser::UnpackBody(string& strData)
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
        (*this) >> m_userId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_webUid;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_tribeList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                string tmpVal;
                (*this) >> tmpVal;
                m_tribeList.push_back(tmpVal);
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

PACKRETCODE CTbscReqDisactiveUser::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscRspDisactiveUser::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_RSP_DISACTIVE_USER;
    m_scsHead.PackData(strData);
}

void CTbscRspDisactiveUser::PackBody(string& strData)
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
        (*this) << m_userId;
        (*this) << FT_STRING;
        (*this) << m_webUid;
        (*this) << FT_VECTOR;
        (*this) << FT_STRING;
        {
            uint32_t nLen = m_tribeList.size();
            (*this) << nLen;
            VECTOR< string >::const_iterator itr;
            for(itr = m_tribeList.cbegin(); itr != m_tribeList.cend(); ++itr)
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

void CTbscRspDisactiveUser::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscRspDisactiveUser::UnpackBody(string& strData)
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
        (*this) >> m_userId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_webUid;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_tribeList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                string tmpVal;
                (*this) >> tmpVal;
                m_tribeList.push_back(tmpVal);
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

PACKRETCODE CTbscRspDisactiveUser::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscReqStopTribe::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_REQ_STOP_TRIBE;
    m_scsHead.PackData(strData);
}

void CTbscReqStopTribe::PackBody(string& strData)
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

void CTbscReqStopTribe::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscReqStopTribe::UnpackBody(string& strData)
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

PACKRETCODE CTbscReqStopTribe::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscRspStopTribe::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_RSP_STOP_TRIBE;
    m_scsHead.PackData(strData);
}

void CTbscRspStopTribe::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scsHead.Size();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT8;
        (*this) << m_retcode;
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

void CTbscRspStopTribe::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscRspStopTribe::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
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

PACKRETCODE CTbscRspStopTribe::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscReqModifyTribe::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_REQ_MODIFY_TRIBE;
    m_scsHead.PackData(strData);
}

void CTbscReqModifyTribe::PackBody(string& strData)
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
        (*this) << FT_MAP;
        (*this) << FT_STRING;
        (*this) << FT_STRING;
        {
            uint8_t nSize = m_items.size();
            (*this) << nSize;
            map< string,string >::const_iterator itr;
            for(itr = m_items.begin(); itr != m_items.end(); ++itr)
            {
                (*this) << itr->first;
                (*this) << itr->second;
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

void CTbscReqModifyTribe::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscReqModifyTribe::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_MAP) return PACK_TYPEMATCH_ERROR;
        {
            uint8_t nSize;
            (*this) >> nSize;
            for(uint32_t i = 0; i < nSize; i++)
            {
                string key;
                string value;
                (*this) >> key;
                (*this) >> value;
                m_items[key] = value;
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

PACKRETCODE CTbscReqModifyTribe::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscRspModifyTribe::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_RSP_MODIFY_TRIBE;
    m_scsHead.PackData(strData);
}

void CTbscRspModifyTribe::PackBody(string& strData)
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
        (*this) << FT_MAP;
        (*this) << FT_STRING;
        (*this) << FT_STRING;
        {
            uint8_t nSize = m_items.size();
            (*this) << nSize;
            map< string,string >::const_iterator itr;
            for(itr = m_items.begin(); itr != m_items.end(); ++itr)
            {
                (*this) << itr->first;
                (*this) << itr->second;
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

void CTbscRspModifyTribe::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscRspModifyTribe::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_MAP) return PACK_TYPEMATCH_ERROR;
        {
            uint8_t nSize;
            (*this) >> nSize;
            for(uint32_t i = 0; i < nSize; i++)
            {
                string key;
                string value;
                (*this) >> key;
                (*this) >> value;
                m_items[key] = value;
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

PACKRETCODE CTbscRspModifyTribe::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscReqAddTribeMember::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_REQ_ADD_TRIBE_MEMBER;
    m_scsHead.PackData(strData);
}

void CTbscReqAddTribeMember::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scsHead.Size();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)4;
        (*this) << FT_STRING;
        (*this) << m_tribeId;
        (*this) << FT_UINT8;
        (*this) << m_tribeLevel;
        (*this) << FT_STRING;
        (*this) << m_userId;
        (*this) << FT_STRING;
        (*this) << m_name;
        FormData( nHeadLen );
        m_scsHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CTbscReqAddTribeMember::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscReqAddTribeMember::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_tribeId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_tribeLevel;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_userId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_name;
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

PACKRETCODE CTbscReqAddTribeMember::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscRspAddTribeMember::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_RSP_ADD_TRIBE_MEMBER;
    m_scsHead.PackData(strData);
}

void CTbscRspAddTribeMember::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scsHead.Size();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)5;
        (*this) << FT_UINT8;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_tribeId;
        (*this) << FT_UINT8;
        (*this) << m_tribeLevel;
        (*this) << FT_STRING;
        (*this) << m_userId;
        (*this) << FT_STRING;
        (*this) << m_name;
        FormData( nHeadLen );
        m_scsHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CTbscRspAddTribeMember::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscRspAddTribeMember::UnpackBody(string& strData)
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
        if(num < 5) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_tribeId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_tribeLevel;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_userId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_name;
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

PACKRETCODE CTbscRspAddTribeMember::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscReqDelTribeMember::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_REQ_DEL_TRIBE_MEMBER;
    m_scsHead.PackData(strData);
}

void CTbscReqDelTribeMember::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scsHead.Size();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)4;
        (*this) << FT_STRING;
        (*this) << m_tribeId;
        (*this) << FT_UINT8;
        (*this) << m_tribeLevel;
        (*this) << FT_STRING;
        (*this) << m_userId;
        (*this) << FT_STRING;
        (*this) << m_operId;
        FormData( nHeadLen );
        m_scsHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CTbscReqDelTribeMember::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscReqDelTribeMember::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_tribeId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_tribeLevel;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_userId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_operId;
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

PACKRETCODE CTbscReqDelTribeMember::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscRspDelTribeMember::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_RSP_DEL_TRIBE_MEMBER;
    m_scsHead.PackData(strData);
}

void CTbscRspDelTribeMember::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scsHead.Size();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)5;
        (*this) << FT_UINT8;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_tribeId;
        (*this) << FT_UINT8;
        (*this) << m_tribeLevel;
        (*this) << FT_STRING;
        (*this) << m_userId;
        (*this) << FT_STRING;
        (*this) << m_operId;
        FormData( nHeadLen );
        m_scsHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CTbscRspDelTribeMember::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscRspDelTribeMember::UnpackBody(string& strData)
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
        if(num < 5) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_tribeId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_tribeLevel;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_userId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_operId;
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

PACKRETCODE CTbscRspDelTribeMember::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscReqQuitTribe::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_REQ_QUIT_TRIBE;
    m_scsHead.PackData(strData);
}

void CTbscReqQuitTribe::PackBody(string& strData)
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
        (*this) << FT_UINT8;
        (*this) << m_tribeLevel;
        (*this) << FT_STRING;
        (*this) << m_userId;
        FormData( nHeadLen );
        m_scsHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CTbscReqQuitTribe::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscReqQuitTribe::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_tribeLevel;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_userId;
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

PACKRETCODE CTbscReqQuitTribe::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CTbscRspQuitTribe::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scsHead.Size())
        m_scsHead.m_len = 0;
    else
        m_scsHead.m_len = strData.size() - m_scsHead.Size();
    if(m_scsHead.m_cmd == 0) m_scsHead.m_cmd = TBSC_RSP_QUIT_TRIBE;
    m_scsHead.PackData(strData);
}

void CTbscRspQuitTribe::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scsHead.Size();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT8;
        (*this) << m_retcode;
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

void CTbscRspQuitTribe::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CTbscRspQuitTribe::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
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

PACKRETCODE CTbscRspQuitTribe::UnpackData(string& strData)
{
    m_scsHead.UnpackData(strData);
    return UnpackBody(strData);
}

