/*---------------------------------------------------------------------------
// Filename:        smsstrc_pack.cpp
// Date:            2011-01-30 12:49:34
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#include "smsstrc_pack.h"

CPackData& operator<< ( CPackData& cPackData, const SSmsUser&  sSmsUser )
{
    uint8_t nFieldNum = 2;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sSmsUser.m_userId;
    cPackData << FT_STRING;
    cPackData << sSmsUser.m_mobileNo;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SSmsUser&  sSmsUser )
{
    uint8_t num;
    cPackData >> num;
    if(num < 2) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sSmsUser.m_userId;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sSmsUser.m_mobileNo;
    for(int i = 2; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CBcNotifySmsMobileonline::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = BC_NOTIFY_SMS_MOBILEONLINE;
    m_ssHead.PackData(strData);
}

void CBcNotifySmsMobileonline::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        (*this) << m_userId;
        (*this) << FT_UINT8;
        (*this) << m_onlineFlag;
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CBcNotifySmsMobileonline::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CBcNotifySmsMobileonline::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_userId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_onlineFlag;
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

PACKRETCODE CBcNotifySmsMobileonline::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CBcNotifySmsUserinfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = BC_NOTIFY_SMS_USERINFO;
    m_ssHead.PackData(strData);
}

void CBcNotifySmsUserinfo::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)7;
        (*this) << FT_STRING;
        (*this) << m_userId;
        (*this) << FT_UINT8;
        (*this) << m_bindFlag;
        (*this) << FT_UINT8;
        (*this) << m_onlineFlag;
        (*this) << FT_UINT8;
        (*this) << m_revFlag;
        (*this) << FT_STRING;
        (*this) << m_mobileNo;
        (*this) << FT_UINT32;
        (*this) << m_balance;
        (*this) << FT_UINT32;
        (*this) << m_price;
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CBcNotifySmsUserinfo::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CBcNotifySmsUserinfo::UnpackBody(string& strData)
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
        if(num < 7) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_userId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_bindFlag;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_onlineFlag;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_revFlag;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_mobileNo;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_balance;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_price;
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

PACKRETCODE CBcNotifySmsUserinfo::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CBcNotifySmsUserconfig::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = BC_NOTIFY_SMS_USERCONFIG;
    m_ssHead.PackData(strData);
}

void CBcNotifySmsUserconfig::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_STRING;
        (*this) << m_userId;
        (*this) << FT_UINT8;
        (*this) << m_onlineFlag;
        (*this) << FT_UINT8;
        (*this) << m_revFlag;
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CBcNotifySmsUserconfig::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CBcNotifySmsUserconfig::UnpackBody(string& strData)
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
        if(num < 3) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_userId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_onlineFlag;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_revFlag;
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

PACKRETCODE CBcNotifySmsUserconfig::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

