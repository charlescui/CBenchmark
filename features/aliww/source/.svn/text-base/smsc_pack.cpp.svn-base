/*---------------------------------------------------------------------------
// Filename:        smsc_pack.cpp
// Date:            2011-01-30 12:48:52
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#include "smsc_pack.h"

void CImReqSmsSendmsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_SMS_SENDMSG;
    m_scHead.PackData(strData);
}

void CImReqSmsSendmsg::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_STRING;
        (*this) << m_fromId;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_toUserList.size();
            (*this) << nLen;
            VECTOR< SSmsUser >::const_iterator itr;
            for(itr = m_toUserList.cbegin(); itr != m_toUserList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        (*this) << FT_STRING;
        (*this) << m_message;
        uLongf falllen = strData.size() - nHeadLen;
        if(falllen > COMPRESS_THRESHOLD)
        {
            if(CompressData2(strData, nHeadLen))
                m_scHead.m_compress = 1;
        }

        FormData( nHeadLen );
        m_scHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImReqSmsSendmsg::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqSmsSendmsg::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint32_t nHeadLen = m_scHead.PeekSize();
        m_scHead.ResetInBuff(strData);
        uint16_t checkCode = CalcCheckCode(strData, nHeadLen);
        if(checkCode != m_scHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        if(m_scHead.PeekCompress() == 1)
        {
            if(UncompressData2(strData, nHeadLen) == false)
                return PACK_SYSTEM_ERROR;
        }
        SetInCursor( nHeadLen );
        uint8_t num;
        (*this) >> num;
        if(num < 3) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_fromId;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_toUserList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SSmsUser tmpVal;
                (*this) >> tmpVal;
                m_toUserList.push_back(tmpVal);
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
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

PACKRETCODE CImReqSmsSendmsg::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspSmsSendmsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_SMS_SENDMSG;
    m_scHead.PackData(strData);
}

void CImRspSmsSendmsg::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)4;
        (*this) << FT_UINT8;
        (*this) << m_status;
        (*this) << FT_STRING;
        (*this) << m_fromId;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_toUserList.size();
            (*this) << nLen;
            VECTOR< SSmsUser >::const_iterator itr;
            for(itr = m_toUserList.cbegin(); itr != m_toUserList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        (*this) << FT_STRING;
        (*this) << m_message;
        uLongf falllen = strData.size() - nHeadLen;
        if(falllen > COMPRESS_THRESHOLD)
        {
            if(CompressData2(strData, nHeadLen))
                m_scHead.m_compress = 1;
        }

        FormData( nHeadLen );
        m_scHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImRspSmsSendmsg::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspSmsSendmsg::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint32_t nHeadLen = m_scHead.PeekSize();
        m_scHead.ResetInBuff(strData);
        uint16_t checkCode = CalcCheckCode(strData, nHeadLen);
        if(checkCode != m_scHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        if(m_scHead.PeekCompress() == 1)
        {
            if(UncompressData2(strData, nHeadLen) == false)
                return PACK_SYSTEM_ERROR;
        }
        SetInCursor( nHeadLen );
        uint8_t num;
        (*this) >> num;
        if(num < 4) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_status;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_fromId;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_toUserList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SSmsUser tmpVal;
                (*this) >> tmpVal;
                m_toUserList.push_back(tmpVal);
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
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

PACKRETCODE CImRspSmsSendmsg::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImNtfSmsSendstatus::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_NTF_SMS_SENDSTATUS;
    m_scHead.PackData(strData);
}

void CImNtfSmsSendstatus::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)5;
        (*this) << FT_UINT8;
        (*this) << m_status;
        (*this) << FT_STRING;
        (*this) << m_fromId;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_toUserList.size();
            (*this) << nLen;
            VECTOR< SSmsUser >::const_iterator itr;
            for(itr = m_toUserList.cbegin(); itr != m_toUserList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        (*this) << FT_STRING;
        (*this) << m_message;
        (*this) << FT_STRING;
        (*this) << m_errorDesc;
        uLongf falllen = strData.size() - nHeadLen;
        if(falllen > COMPRESS_THRESHOLD)
        {
            if(CompressData2(strData, nHeadLen))
                m_scHead.m_compress = 1;
        }

        FormData( nHeadLen );
        m_scHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImNtfSmsSendstatus::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImNtfSmsSendstatus::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint32_t nHeadLen = m_scHead.PeekSize();
        m_scHead.ResetInBuff(strData);
        uint16_t checkCode = CalcCheckCode(strData, nHeadLen);
        if(checkCode != m_scHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        if(m_scHead.PeekCompress() == 1)
        {
            if(UncompressData2(strData, nHeadLen) == false)
                return PACK_SYSTEM_ERROR;
        }
        SetInCursor( nHeadLen );
        uint8_t num;
        (*this) >> num;
        if(num < 5) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_status;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_fromId;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_toUserList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SSmsUser tmpVal;
                (*this) >> tmpVal;
                m_toUserList.push_back(tmpVal);
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_message;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_errorDesc;
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

PACKRETCODE CImNtfSmsSendstatus::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImNtfSmsRcvmsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_NTF_SMS_RCVMSG;
    m_scHead.PackData(strData);
}

void CImNtfSmsRcvmsg::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_STRUCT;
        (*this) << m_fromUser;
        (*this) << FT_STRING;
        (*this) << m_toId;
        (*this) << FT_STRING;
        (*this) << m_message;
        uLongf falllen = strData.size() - nHeadLen;
        if(falllen > COMPRESS_THRESHOLD)
        {
            if(CompressData2(strData, nHeadLen))
                m_scHead.m_compress = 1;
        }

        FormData( nHeadLen );
        m_scHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImNtfSmsRcvmsg::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImNtfSmsRcvmsg::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint32_t nHeadLen = m_scHead.PeekSize();
        m_scHead.ResetInBuff(strData);
        uint16_t checkCode = CalcCheckCode(strData, nHeadLen);
        if(checkCode != m_scHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        if(m_scHead.PeekCompress() == 1)
        {
            if(UncompressData2(strData, nHeadLen) == false)
                return PACK_SYSTEM_ERROR;
        }
        SetInCursor( nHeadLen );
        uint8_t num;
        (*this) >> num;
        if(num < 3) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRUCT) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_fromUser;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_toId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
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

PACKRETCODE CImNtfSmsRcvmsg::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImNtfSmsChargestatus::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_NTF_SMS_CHARGESTATUS;
    m_scHead.PackData(strData);
}

void CImNtfSmsChargestatus::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)7;
        (*this) << FT_UINT8;
        (*this) << m_status;
        (*this) << FT_STRING;
        (*this) << m_userId;
        (*this) << FT_STRING;
        (*this) << m_chargeId;
        (*this) << FT_UINT8;
        (*this) << m_chargeType;
        (*this) << FT_UINT32;
        (*this) << m_denomination;
        (*this) << FT_UINT32;
        (*this) << m_balance;
        (*this) << FT_UINT32;
        (*this) << m_count;
        uLongf falllen = strData.size() - nHeadLen;
        if(falllen > COMPRESS_THRESHOLD)
        {
            if(CompressData2(strData, nHeadLen))
                m_scHead.m_compress = 1;
        }

        FormData( nHeadLen );
        m_scHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImNtfSmsChargestatus::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImNtfSmsChargestatus::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint32_t nHeadLen = m_scHead.PeekSize();
        m_scHead.ResetInBuff(strData);
        uint16_t checkCode = CalcCheckCode(strData, nHeadLen);
        if(checkCode != m_scHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        if(m_scHead.PeekCompress() == 1)
        {
            if(UncompressData2(strData, nHeadLen) == false)
                return PACK_SYSTEM_ERROR;
        }
        SetInCursor( nHeadLen );
        uint8_t num;
        (*this) >> num;
        if(num < 7) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_status;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_userId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_chargeId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_chargeType;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_denomination;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_balance;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_count;
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

PACKRETCODE CImNtfSmsChargestatus::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImNtfSmsMobileonline::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_NTF_SMS_MOBILEONLINE;
    m_scHead.PackData(strData);
}

void CImNtfSmsMobileonline::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        (*this) << m_userId;
        (*this) << FT_UINT8;
        (*this) << m_onlineFlag;
        uLongf falllen = strData.size() - nHeadLen;
        if(falllen > COMPRESS_THRESHOLD)
        {
            if(CompressData2(strData, nHeadLen))
                m_scHead.m_compress = 1;
        }

        FormData( nHeadLen );
        m_scHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImNtfSmsMobileonline::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImNtfSmsMobileonline::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint32_t nHeadLen = m_scHead.PeekSize();
        m_scHead.ResetInBuff(strData);
        uint16_t checkCode = CalcCheckCode(strData, nHeadLen);
        if(checkCode != m_scHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        if(m_scHead.PeekCompress() == 1)
        {
            if(UncompressData2(strData, nHeadLen) == false)
                return PACK_SYSTEM_ERROR;
        }
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

PACKRETCODE CImNtfSmsMobileonline::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqSmsGetusermsginfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_SMS_GETUSERMSGINFO;
    m_scHead.PackData(strData);
}

void CImReqSmsGetusermsginfo::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        (*this) << m_userId;
        uLongf falllen = strData.size() - nHeadLen;
        if(falllen > COMPRESS_THRESHOLD)
        {
            if(CompressData2(strData, nHeadLen))
                m_scHead.m_compress = 1;
        }

        FormData( nHeadLen );
        m_scHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImReqSmsGetusermsginfo::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqSmsGetusermsginfo::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint32_t nHeadLen = m_scHead.PeekSize();
        m_scHead.ResetInBuff(strData);
        uint16_t checkCode = CalcCheckCode(strData, nHeadLen);
        if(checkCode != m_scHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        if(m_scHead.PeekCompress() == 1)
        {
            if(UncompressData2(strData, nHeadLen) == false)
                return PACK_SYSTEM_ERROR;
        }
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

PACKRETCODE CImReqSmsGetusermsginfo::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspSmsGetusermsginfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_SMS_GETUSERMSGINFO;
    m_scHead.PackData(strData);
}

void CImRspSmsGetusermsginfo::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)8;
        (*this) << FT_UINT8;
        (*this) << m_status;
        (*this) << FT_UINT32;
        (*this) << m_yesterdayMsgCount;
        (*this) << FT_UINT32;
        (*this) << m_todayMsgCount;
        (*this) << FT_UINT32;
        (*this) << m_maxMsgCount;
        (*this) << FT_UINT32;
        (*this) << m_balance;
        (*this) << FT_UINT32;
        (*this) << m_price;
        (*this) << FT_UINT32;
        (*this) << m_count;
        (*this) << FT_UINT32;
        (*this) << m_msgMaxLen;
        uLongf falllen = strData.size() - nHeadLen;
        if(falllen > COMPRESS_THRESHOLD)
        {
            if(CompressData2(strData, nHeadLen))
                m_scHead.m_compress = 1;
        }

        FormData( nHeadLen );
        m_scHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImRspSmsGetusermsginfo::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspSmsGetusermsginfo::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint32_t nHeadLen = m_scHead.PeekSize();
        m_scHead.ResetInBuff(strData);
        uint16_t checkCode = CalcCheckCode(strData, nHeadLen);
        if(checkCode != m_scHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        if(m_scHead.PeekCompress() == 1)
        {
            if(UncompressData2(strData, nHeadLen) == false)
                return PACK_SYSTEM_ERROR;
        }
        SetInCursor( nHeadLen );
        uint8_t num;
        (*this) >> num;
        if(num < 8) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_status;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_yesterdayMsgCount;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_todayMsgCount;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_maxMsgCount;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_balance;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_price;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_count;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_msgMaxLen;
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

PACKRETCODE CImRspSmsGetusermsginfo::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqSmsGetAccount::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_SMS_GET_ACCOUNT;
    m_scHead.PackData(strData);
}

void CImReqSmsGetAccount::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        (*this) << m_userId;
        uLongf falllen = strData.size() - nHeadLen;
        if(falllen > COMPRESS_THRESHOLD)
        {
            if(CompressData2(strData, nHeadLen))
                m_scHead.m_compress = 1;
        }

        FormData( nHeadLen );
        m_scHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImReqSmsGetAccount::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqSmsGetAccount::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint32_t nHeadLen = m_scHead.PeekSize();
        m_scHead.ResetInBuff(strData);
        uint16_t checkCode = CalcCheckCode(strData, nHeadLen);
        if(checkCode != m_scHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        if(m_scHead.PeekCompress() == 1)
        {
            if(UncompressData2(strData, nHeadLen) == false)
                return PACK_SYSTEM_ERROR;
        }
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

PACKRETCODE CImReqSmsGetAccount::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspSmsGetAccount::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_SMS_GET_ACCOUNT;
    m_scHead.PackData(strData);
}

void CImRspSmsGetAccount::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)6;
        (*this) << FT_UINT8;
        (*this) << m_status;
        (*this) << FT_STRING;
        (*this) << m_userId;
        (*this) << FT_UINT8;
        (*this) << m_bindFlag;
        (*this) << FT_UINT8;
        (*this) << m_onlineFlag;
        (*this) << FT_STRING;
        (*this) << m_mobileNo;
        (*this) << FT_UINT8;
        (*this) << m_revFlag;
        uLongf falllen = strData.size() - nHeadLen;
        if(falllen > COMPRESS_THRESHOLD)
        {
            if(CompressData2(strData, nHeadLen))
                m_scHead.m_compress = 1;
        }

        FormData( nHeadLen );
        m_scHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImRspSmsGetAccount::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspSmsGetAccount::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint32_t nHeadLen = m_scHead.PeekSize();
        m_scHead.ResetInBuff(strData);
        uint16_t checkCode = CalcCheckCode(strData, nHeadLen);
        if(checkCode != m_scHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        if(m_scHead.PeekCompress() == 1)
        {
            if(UncompressData2(strData, nHeadLen) == false)
                return PACK_SYSTEM_ERROR;
        }
        SetInCursor( nHeadLen );
        uint8_t num;
        (*this) >> num;
        if(num < 6) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_status;
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
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_mobileNo;
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

PACKRETCODE CImRspSmsGetAccount::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqSmsGetAccount2::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_SMS_GET_ACCOUNT2;
    m_scHead.PackData(strData);
}

void CImReqSmsGetAccount2::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        (*this) << m_userId;
        uLongf falllen = strData.size() - nHeadLen;
        if(falllen > COMPRESS_THRESHOLD)
        {
            if(CompressData2(strData, nHeadLen))
                m_scHead.m_compress = 1;
        }

        FormData( nHeadLen );
        m_scHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImReqSmsGetAccount2::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqSmsGetAccount2::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint32_t nHeadLen = m_scHead.PeekSize();
        m_scHead.ResetInBuff(strData);
        uint16_t checkCode = CalcCheckCode(strData, nHeadLen);
        if(checkCode != m_scHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        if(m_scHead.PeekCompress() == 1)
        {
            if(UncompressData2(strData, nHeadLen) == false)
                return PACK_SYSTEM_ERROR;
        }
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

PACKRETCODE CImReqSmsGetAccount2::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspSmsGetAccount2::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_SMS_GET_ACCOUNT2;
    m_scHead.PackData(strData);
}

void CImRspSmsGetAccount2::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)5;
        (*this) << FT_UINT8;
        (*this) << m_status;
        (*this) << FT_STRING;
        (*this) << m_userId;
        (*this) << FT_UINT8;
        (*this) << m_bindFlag;
        (*this) << FT_UINT8;
        (*this) << m_onlineFlag;
        (*this) << FT_UINT8;
        (*this) << m_revFlag;
        uLongf falllen = strData.size() - nHeadLen;
        if(falllen > COMPRESS_THRESHOLD)
        {
            if(CompressData2(strData, nHeadLen))
                m_scHead.m_compress = 1;
        }

        FormData( nHeadLen );
        m_scHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImRspSmsGetAccount2::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspSmsGetAccount2::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint32_t nHeadLen = m_scHead.PeekSize();
        m_scHead.ResetInBuff(strData);
        uint16_t checkCode = CalcCheckCode(strData, nHeadLen);
        if(checkCode != m_scHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        if(m_scHead.PeekCompress() == 1)
        {
            if(UncompressData2(strData, nHeadLen) == false)
                return PACK_SYSTEM_ERROR;
        }
        SetInCursor( nHeadLen );
        uint8_t num;
        (*this) >> num;
        if(num < 5) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_status;
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

PACKRETCODE CImRspSmsGetAccount2::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImNtfSmsMobilebind::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_NTF_SMS_MOBILEBIND;
    m_scHead.PackData(strData);
}

void CImNtfSmsMobilebind::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        (*this) << m_userId;
        (*this) << FT_UINT8;
        (*this) << m_bindFlag;
        uLongf falllen = strData.size() - nHeadLen;
        if(falllen > COMPRESS_THRESHOLD)
        {
            if(CompressData2(strData, nHeadLen))
                m_scHead.m_compress = 1;
        }

        FormData( nHeadLen );
        m_scHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImNtfSmsMobilebind::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImNtfSmsMobilebind::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint32_t nHeadLen = m_scHead.PeekSize();
        m_scHead.ResetInBuff(strData);
        uint16_t checkCode = CalcCheckCode(strData, nHeadLen);
        if(checkCode != m_scHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        if(m_scHead.PeekCompress() == 1)
        {
            if(UncompressData2(strData, nHeadLen) == false)
                return PACK_SYSTEM_ERROR;
        }
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
        (*this) >> m_bindFlag;
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

PACKRETCODE CImNtfSmsMobilebind::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImNtfSmsRevflag::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_NTF_SMS_REVFLAG;
    m_scHead.PackData(strData);
}

void CImNtfSmsRevflag::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        (*this) << m_userId;
        (*this) << FT_UINT8;
        (*this) << m_revFlag;
        uLongf falllen = strData.size() - nHeadLen;
        if(falllen > COMPRESS_THRESHOLD)
        {
            if(CompressData2(strData, nHeadLen))
                m_scHead.m_compress = 1;
        }

        FormData( nHeadLen );
        m_scHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImNtfSmsRevflag::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImNtfSmsRevflag::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint32_t nHeadLen = m_scHead.PeekSize();
        m_scHead.ResetInBuff(strData);
        uint16_t checkCode = CalcCheckCode(strData, nHeadLen);
        if(checkCode != m_scHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        if(m_scHead.PeekCompress() == 1)
        {
            if(UncompressData2(strData, nHeadLen) == false)
                return PACK_SYSTEM_ERROR;
        }
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

PACKRETCODE CImNtfSmsRevflag::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqSmsGetBlacklist::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_SMS_GET_BLACKLIST;
    m_scHead.PackData(strData);
}

void CImReqSmsGetBlacklist::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        WriteData(m_userId, 0, 64);
        uLongf falllen = strData.size() - nHeadLen;
        if(falllen > COMPRESS_THRESHOLD)
        {
            if(CompressData2(strData, nHeadLen))
                m_scHead.m_compress = 1;
        }

        FormData( nHeadLen );
        m_scHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImReqSmsGetBlacklist::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqSmsGetBlacklist::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint32_t nHeadLen = m_scHead.PeekSize();
        m_scHead.ResetInBuff(strData);
        uint16_t checkCode = CalcCheckCode(strData, nHeadLen);
        if(checkCode != m_scHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        if(m_scHead.PeekCompress() == 1)
        {
            if(UncompressData2(strData, nHeadLen) == false)
                return PACK_SYSTEM_ERROR;
        }
        SetInCursor( nHeadLen );
        uint8_t num;
        (*this) >> num;
        if(num < 1) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_userId, 64, 0);
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

PACKRETCODE CImReqSmsGetBlacklist::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspSmsGetBlacklist::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_SMS_GET_BLACKLIST;
    m_scHead.PackData(strData);
}

void CImRspSmsGetBlacklist::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT8;
        (*this) << m_status;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_blackList.size();
            (*this) << nLen;
            VECTOR< SSmsUser >::const_iterator itr;
            for(itr = m_blackList.cbegin(); itr != m_blackList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        uLongf falllen = strData.size() - nHeadLen;
        if(falllen > COMPRESS_THRESHOLD)
        {
            if(CompressData2(strData, nHeadLen))
                m_scHead.m_compress = 1;
        }

        FormData( nHeadLen );
        m_scHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImRspSmsGetBlacklist::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspSmsGetBlacklist::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint32_t nHeadLen = m_scHead.PeekSize();
        m_scHead.ResetInBuff(strData);
        uint16_t checkCode = CalcCheckCode(strData, nHeadLen);
        if(checkCode != m_scHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        if(m_scHead.PeekCompress() == 1)
        {
            if(UncompressData2(strData, nHeadLen) == false)
                return PACK_SYSTEM_ERROR;
        }
        SetInCursor( nHeadLen );
        uint8_t num;
        (*this) >> num;
        if(num < 2) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_status;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_blackList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SSmsUser tmpVal;
                (*this) >> tmpVal;
                m_blackList.push_back(tmpVal);
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

PACKRETCODE CImRspSmsGetBlacklist::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspSmsGetuserconfig::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_SMS_GETUSERCONFIG;
    m_scHead.PackData(strData);
}

void CImRspSmsGetuserconfig::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT8;
        (*this) << m_status;
        (*this) << FT_UINT8;
        (*this) << m_onlineFlag;
        (*this) << FT_UINT8;
        (*this) << m_revFlag;
        uLongf falllen = strData.size() - nHeadLen;
        if(falllen > COMPRESS_THRESHOLD)
        {
            if(CompressData2(strData, nHeadLen))
                m_scHead.m_compress = 1;
        }

        FormData( nHeadLen );
        m_scHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImRspSmsGetuserconfig::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspSmsGetuserconfig::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint32_t nHeadLen = m_scHead.PeekSize();
        m_scHead.ResetInBuff(strData);
        uint16_t checkCode = CalcCheckCode(strData, nHeadLen);
        if(checkCode != m_scHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        if(m_scHead.PeekCompress() == 1)
        {
            if(UncompressData2(strData, nHeadLen) == false)
                return PACK_SYSTEM_ERROR;
        }
        SetInCursor( nHeadLen );
        uint8_t num;
        (*this) >> num;
        if(num < 3) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_status;
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

PACKRETCODE CImRspSmsGetuserconfig::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqSmsGetMultimsglen::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_SMS_GET_MULTIMSGLEN;
    m_scHead.PackData(strData);
}

void CImReqSmsGetMultimsglen::PackBody(string& strData)
{
}

void CImReqSmsGetMultimsglen::PackData(string& strData, const string& strKey)
{
    PackHead(strData);
}

PACKRETCODE CImReqSmsGetMultimsglen::UnpackBody(string& strData)
{
    return PACK_RIGHT;
}

PACKRETCODE CImReqSmsGetMultimsglen::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    return PACK_RIGHT;
}

void CImRspSmsGetMultimsglen::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_SMS_GET_MULTIMSGLEN;
    m_scHead.PackData(strData);
}

void CImRspSmsGetMultimsglen::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)4;
        (*this) << FT_UINT32;
        (*this) << m_msgLen;
        (*this) << FT_UINT32;
        (*this) << m_maxUser;
        (*this) << FT_UINT32;
        (*this) << m_u32Reserve;
        (*this) << FT_STRING;
        (*this) << m_strReserve;
        uLongf falllen = strData.size() - nHeadLen;
        if(falllen > COMPRESS_THRESHOLD)
        {
            if(CompressData2(strData, nHeadLen))
                m_scHead.m_compress = 1;
        }

        FormData( nHeadLen );
        m_scHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImRspSmsGetMultimsglen::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspSmsGetMultimsglen::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint32_t nHeadLen = m_scHead.PeekSize();
        m_scHead.ResetInBuff(strData);
        uint16_t checkCode = CalcCheckCode(strData, nHeadLen);
        if(checkCode != m_scHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        if(m_scHead.PeekCompress() == 1)
        {
            if(UncompressData2(strData, nHeadLen) == false)
                return PACK_SYSTEM_ERROR;
        }
        SetInCursor( nHeadLen );
        uint8_t num;
        (*this) >> num;
        if(num < 4) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_msgLen;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_maxUser;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_u32Reserve;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_strReserve;
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

PACKRETCODE CImRspSmsGetMultimsglen::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

