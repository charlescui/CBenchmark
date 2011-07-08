/*---------------------------------------------------------------------------
// Filename:        imsc_pack.cpp
// Date:            2011-04-27 13:35:59
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#include "imsc_pack.h"

void CImHelthCheck::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_HELTH_CHECK;
    m_scHead.PackData(strData);
}

void CImHelthCheck::PackBody(string& strData)
{
}

void CImHelthCheck::PackData(string& strData, const string& strKey)
{
    PackHead(strData);
}

PACKRETCODE CImHelthCheck::UnpackBody(string& strData)
{
    return PACK_RIGHT;
}

PACKRETCODE CImHelthCheck::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    return PACK_RIGHT;
}

void CImReqCheckversion::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_CHECKVERSION;
    m_scHead.PackData(strData);
}

void CImReqCheckversion::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        (*this) << m_version;
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

void CImReqCheckversion::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqCheckversion::UnpackBody(string& strData)
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
        (*this) >> m_version;
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

PACKRETCODE CImReqCheckversion::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspCheckversion::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_CHECKVERSION;
    m_scHead.PackData(strData);
}

void CImRspCheckversion::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)4;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_remark;
        (*this) << FT_UINT32;
        (*this) << m_connectNo;
        (*this) << FT_STRING;
        (*this) << m_pubkey;
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

void CImRspCheckversion::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspCheckversion::UnpackBody(string& strData)
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
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_remark;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_connectNo;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_pubkey;
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

PACKRETCODE CImRspCheckversion::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqPrelogin::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_PRELOGIN;
    m_scHead.PackData(strData);
}

void CImReqPrelogin::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_connectNo;
        (*this) << FT_STRING;
        (*this) << m_workKey;
        (*this) << FT_STRING;
        (*this) << m_strlogin;
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

void CImReqPrelogin::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqPrelogin::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_connectNo;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_workKey;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_strlogin;
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

PACKRETCODE CImReqPrelogin::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqLogin::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_LOGIN;
    m_scHead.PackData(strData);
}

void CImReqLogin::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)10;
        (*this) << FT_UINT8;
        (*this) << m_tokenFlag;
        (*this) << FT_UINT32;
        (*this) << m_connectNo;
        (*this) << FT_STRING;
        (*this) << m_password;
        (*this) << FT_STRING;
        (*this) << m_version;
        (*this) << FT_UINT32;
        (*this) << m_language;
        (*this) << FT_UINT32;
        (*this) << m_timestampFlag;
        (*this) << FT_VECTOR;
        (*this) << FT_UINT32;
        {
            uint32_t nLen = m_timestampList.size();
            (*this) << nLen;
            VECTOR< uint32_t >::const_iterator itr;
            for(itr = m_timestampList.cbegin(); itr != m_timestampList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        (*this) << FT_VECTOR;
        (*this) << FT_STRING;
        {
            uint32_t nLen = m_hardcode.size();
            (*this) << nLen;
            VECTOR< string >::const_iterator itr;
            for(itr = m_hardcode.cbegin(); itr != m_hardcode.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        (*this) << FT_STRING;
        (*this) << m_hardcheck;
        (*this) << FT_STRING;
        (*this) << m_rid;
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

void CImReqLogin::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqLogin::UnpackBody(string& strData)
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
        if(num < 9) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_tokenFlag;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_connectNo;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_password;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_version;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_language;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestampFlag;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_timestampList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                uint32_t tmpVal;
                (*this) >> tmpVal;
                m_timestampList.push_back(tmpVal);
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_hardcode.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                string tmpVal;
                (*this) >> tmpVal;
                m_hardcode.push_back(tmpVal);
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_hardcheck;
        try
        {
            if(num < 10) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_rid;
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

PACKRETCODE CImReqLogin::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqPrelogin1::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_PRELOGIN1;
    m_scHead.PackData(strData);
}

void CImReqPrelogin1::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_connectNo;
        (*this) << FT_STRING;
        (*this) << m_workKey;
        (*this) << FT_STRING;
        (*this) << m_strlogin;
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

void CImReqPrelogin1::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqPrelogin1::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_connectNo;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_workKey;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_strlogin;
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

PACKRETCODE CImReqPrelogin1::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspLogin::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_LOGIN;
    m_scHead.PackData(strData);
}

void CImRspLogin::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)12;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_UINT32;
        (*this) << m_timestampFlag;
        (*this) << FT_UINT32;
        (*this) << m_clientIp;
        (*this) << FT_UINT32;
        (*this) << m_serverTime;
        (*this) << FT_STRING;
        (*this) << m_workKey;
        (*this) << FT_STRING;
        (*this) << m_pwtoken;
        (*this) << FT_STRING;
        (*this) << m_remark;
        (*this) << FT_STRING;
        (*this) << m_webmd5pw;
        (*this) << FT_UINT32;
        (*this) << m_lastClientip;
        (*this) << FT_STRING;
        (*this) << m_bindid;
        (*this) << FT_STRING;
        (*this) << m_rid;
        (*this) << FT_UINT32;
        (*this) << m_lastLogintime;
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

void CImRspLogin::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspLogin::UnpackBody(string& strData)
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
        if(num < 11) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestampFlag;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_clientIp;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_serverTime;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_workKey;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_pwtoken;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_remark;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_webmd5pw;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_lastClientip;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_bindid;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_rid;
        try
        {
            if(num < 12) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_lastLogintime;
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

PACKRETCODE CImRspLogin::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqLogin2::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_LOGIN2;
    m_scHead.PackData(strData);
}

void CImReqLogin2::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_timestampFlag;
        (*this) << FT_VECTOR;
        (*this) << FT_UINT32;
        {
            uint32_t nLen = m_timestampList.size();
            (*this) << nLen;
            VECTOR< uint32_t >::const_iterator itr;
            for(itr = m_timestampList.cbegin(); itr != m_timestampList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        (*this) << FT_STRING;
        (*this) << m_loginToken;
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

void CImReqLogin2::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqLogin2::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestampFlag;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_timestampList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                uint32_t tmpVal;
                (*this) >> tmpVal;
                m_timestampList.push_back(tmpVal);
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_loginToken;
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

PACKRETCODE CImReqLogin2::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspLogin2::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_LOGIN2;
    m_scHead.PackData(strData);
}

void CImRspLogin2::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_UINT32;
        (*this) << m_timestampFlag;
        (*this) << FT_STRING;
        (*this) << m_remark;
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

void CImRspLogin2::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspLogin2::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestampFlag;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_remark;
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

PACKRETCODE CImRspLogin2::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqPreloginAgain::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_PRELOGIN_AGAIN;
    m_scHead.PackData(strData);
}

void CImReqPreloginAgain::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_connectNo;
        (*this) << FT_STRING;
        (*this) << m_workKey;
        (*this) << FT_STRING;
        (*this) << m_strloginagin;
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

void CImReqPreloginAgain::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqPreloginAgain::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_connectNo;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_workKey;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_strloginagin;
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

PACKRETCODE CImReqPreloginAgain::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqLoginAgain::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_LOGIN_AGAIN;
    m_scHead.PackData(strData);
}

void CImReqLoginAgain::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)10;
        (*this) << FT_UINT8;
        (*this) << m_tokenFlag;
        (*this) << FT_UINT32;
        (*this) << m_connectNo;
        (*this) << FT_STRING;
        (*this) << m_password;
        (*this) << FT_STRING;
        (*this) << m_version;
        (*this) << FT_UINT32;
        (*this) << m_language;
        (*this) << FT_VECTOR;
        (*this) << FT_STRING;
        {
            uint32_t nLen = m_hardcode.size();
            (*this) << nLen;
            VECTOR< string >::const_iterator itr;
            for(itr = m_hardcode.cbegin(); itr != m_hardcode.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        (*this) << FT_STRING;
        (*this) << m_hardcheck;
        (*this) << FT_UINT8;
        (*this) << m_basicStatus;
        (*this) << FT_UINT8;
        (*this) << m_predefStatus;
        (*this) << FT_STRING;
        (*this) << m_pwcode;
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

void CImReqLoginAgain::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqLoginAgain::UnpackBody(string& strData)
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
        if(num < 10) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_tokenFlag;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_connectNo;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_password;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_version;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_language;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_hardcode.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                string tmpVal;
                (*this) >> tmpVal;
                m_hardcode.push_back(tmpVal);
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_hardcheck;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_basicStatus;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_predefStatus;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_pwcode;
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

PACKRETCODE CImReqLoginAgain::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspLoginAgain::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_LOGIN_AGAIN;
    m_scHead.PackData(strData);
}

void CImRspLoginAgain::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_workKey;
        (*this) << FT_STRING;
        (*this) << m_remark;
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

void CImRspLoginAgain::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspLoginAgain::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_workKey;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_remark;
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

PACKRETCODE CImRspLoginAgain::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImNtfLoginAgain::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_NTF_LOGIN_AGAIN;
    m_scHead.PackData(strData);
}

void CImNtfLoginAgain::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        (*this) << m_pwcode;
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

void CImNtfLoginAgain::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImNtfLoginAgain::UnpackBody(string& strData)
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
        (*this) >> m_pwcode;
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

PACKRETCODE CImNtfLoginAgain::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqPostlogin::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_POSTLOGIN;
    m_scHead.PackData(strData);
}

void CImReqPostlogin::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT8;
        (*this) << m_basicStatus;
        (*this) << FT_UINT8;
        (*this) << m_predefStatus;
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

void CImReqPostlogin::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqPostlogin::UnpackBody(string& strData)
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
        (*this) >> m_basicStatus;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_predefStatus;
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

PACKRETCODE CImReqPostlogin::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqRelogin::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_RELOGIN;
    m_scHead.PackData(strData);
}

void CImReqRelogin::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)5;
        (*this) << FT_STRING;
        (*this) << m_password;
        (*this) << FT_STRING;
        (*this) << m_version;
        (*this) << FT_UINT32;
        (*this) << m_connectNo;
        (*this) << FT_UINT8;
        (*this) << m_basicStatus;
        (*this) << FT_UINT8;
        (*this) << m_predefStatus;
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

void CImReqRelogin::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqRelogin::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_password;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_version;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_connectNo;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_basicStatus;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_predefStatus;
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

PACKRETCODE CImReqRelogin::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspRelogin::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_RELOGIN;
    m_scHead.PackData(strData);
}

void CImRspRelogin::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_UINT32;
        (*this) << m_connectNo;
        (*this) << FT_STRING;
        (*this) << m_remark;
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

void CImRspRelogin::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspRelogin::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_connectNo;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_remark;
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

PACKRETCODE CImRspRelogin::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqLogoff::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_LOGOFF;
    m_scHead.PackData(strData);
}

void CImReqLogoff::PackBody(string& strData)
{
}

void CImReqLogoff::PackData(string& strData, const string& strKey)
{
    PackHead(strData);
}

PACKRETCODE CImReqLogoff::UnpackBody(string& strData)
{
    return PACK_RIGHT;
}

PACKRETCODE CImReqLogoff::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    return PACK_RIGHT;
}

void CImRspLogoff::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_LOGOFF;
    m_scHead.PackData(strData);
}

void CImRspLogoff::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_remark;
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

void CImRspLogoff::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspLogoff::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_remark;
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

PACKRETCODE CImRspLogoff::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImNtfForcedisconnect::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_NTF_FORCEDISCONNECT;
    m_scHead.PackData(strData);
}

void CImNtfForcedisconnect::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT8;
        (*this) << m_type;
        (*this) << FT_STRING;
        (*this) << m_remark;
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

void CImNtfForcedisconnect::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImNtfForcedisconnect::UnpackBody(string& strData)
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
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_remark;
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

PACKRETCODE CImNtfForcedisconnect::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

CPackData& operator<< ( CPackData& cPackData, const SUserGroup&  sUserGroup )
{
    uint8_t nFieldNum = 3;
    cPackData << nFieldNum;
    cPackData << FT_INT64;
    cPackData << sUserGroup.m_groupId;
    cPackData << FT_INT64;
    cPackData << sUserGroup.m_parentId;
    cPackData << FT_STRING;
    cPackData << sUserGroup.m_groupName;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SUserGroup&  sUserGroup )
{
    uint8_t num;
    cPackData >> num;
    if(num < 3) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_INT64) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sUserGroup.m_groupId;
    cPackData >> field;
    if(field.m_baseType != FT_INT64) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sUserGroup.m_parentId;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sUserGroup.m_groupName;
    for(int i = 3; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CImReqGetgroup::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_GETGROUP;
    m_scHead.PackData(strData);
}

void CImReqGetgroup::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
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

void CImReqGetgroup::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqGetgroup::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
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

PACKRETCODE CImReqGetgroup::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspGetgroup::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_GETGROUP;
    m_scHead.PackData(strData);
}

void CImRspGetgroup::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_groupList.size();
            (*this) << nLen;
            VECTOR< SUserGroup >::const_iterator itr;
            for(itr = m_groupList.cbegin(); itr != m_groupList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
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

void CImRspGetgroup::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspGetgroup::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_groupList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SUserGroup tmpVal;
                (*this) >> tmpVal;
                m_groupList.push_back(tmpVal);
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
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

PACKRETCODE CImRspGetgroup::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqAddgroup::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_ADDGROUP;
    m_scHead.PackData(strData);
}

void CImReqAddgroup::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        (*this) << m_groupName;
        (*this) << FT_INT64;
        (*this) << m_parentId;
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

void CImReqAddgroup::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqAddgroup::UnpackBody(string& strData)
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
        (*this) >> m_groupName;
        (*this) >> field;
        if(field.m_baseType != FT_INT64) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_parentId;
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

PACKRETCODE CImReqAddgroup::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspAddgroup::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_ADDGROUP;
    m_scHead.PackData(strData);
}

void CImRspAddgroup::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_STRUCT;
        (*this) << m_groupInfo;
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
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

void CImRspAddgroup::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspAddgroup::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRUCT) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_groupInfo;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
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

PACKRETCODE CImRspAddgroup::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

CPackData& operator<< ( CPackData& cPackData, const SUserChggroup&  sUserChggroup )
{
    uint8_t nFieldNum = 4;
    cPackData << nFieldNum;
    cPackData << FT_UINT64;
    cPackData << sUserChggroup.m_mask;
    cPackData << FT_INT64;
    cPackData << sUserChggroup.m_groupId;
    cPackData << FT_INT64;
    cPackData << sUserChggroup.m_parentId;
    cPackData << FT_STRING;
    cPackData << sUserChggroup.m_groupName;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SUserChggroup&  sUserChggroup )
{
    uint8_t num;
    cPackData >> num;
    if(num < 4) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_UINT64) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sUserChggroup.m_mask;
    cPackData >> field;
    if(field.m_baseType != FT_INT64) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sUserChggroup.m_groupId;
    cPackData >> field;
    if(field.m_baseType != FT_INT64) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sUserChggroup.m_parentId;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sUserChggroup.m_groupName;
    for(int i = 4; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CImReqChggroup::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_CHGGROUP;
    m_scHead.PackData(strData);
}

void CImReqChggroup::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_groupInfo.size();
            (*this) << nLen;
            VECTOR< SUserChggroup >::const_iterator itr;
            for(itr = m_groupInfo.cbegin(); itr != m_groupInfo.cend(); ++itr)
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

void CImReqChggroup::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqChggroup::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_groupInfo.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SUserChggroup tmpVal;
                (*this) >> tmpVal;
                m_groupInfo.push_back(tmpVal);
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

PACKRETCODE CImReqChggroup::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspChggroup::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_CHGGROUP;
    m_scHead.PackData(strData);
}

void CImRspChggroup::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_groupInfo.size();
            (*this) << nLen;
            VECTOR< SUserChggroup >::const_iterator itr;
            for(itr = m_groupInfo.cbegin(); itr != m_groupInfo.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
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

void CImRspChggroup::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspChggroup::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_groupInfo.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SUserChggroup tmpVal;
                (*this) >> tmpVal;
                m_groupInfo.push_back(tmpVal);
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
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

PACKRETCODE CImRspChggroup::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqDelgroup::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_DELGROUP;
    m_scHead.PackData(strData);
}

void CImReqDelgroup::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_VECTOR;
        (*this) << FT_INT64;
        {
            uint32_t nLen = m_groupId.size();
            (*this) << nLen;
            VECTOR< int64_t >::const_iterator itr;
            for(itr = m_groupId.cbegin(); itr != m_groupId.cend(); ++itr)
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

void CImReqDelgroup::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqDelgroup::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_groupId.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                int64_t tmpVal;
                (*this) >> tmpVal;
                m_groupId.push_back(tmpVal);
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

PACKRETCODE CImReqDelgroup::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

CPackData& operator<< ( CPackData& cPackData, const SDelGroup&  sDelGroup )
{
    uint8_t nFieldNum = 2;
    cPackData << nFieldNum;
    cPackData << FT_UINT32;
    cPackData << sDelGroup.m_retcode;
    cPackData << FT_INT64;
    cPackData << sDelGroup.m_groupId;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SDelGroup&  sDelGroup )
{
    uint8_t num;
    cPackData >> num;
    if(num < 2) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sDelGroup.m_retcode;
    cPackData >> field;
    if(field.m_baseType != FT_INT64) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sDelGroup.m_groupId;
    for(int i = 2; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CImRspDelgroup::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_DELGROUP;
    m_scHead.PackData(strData);
}

void CImRspDelgroup::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_groupInfo.size();
            (*this) << nLen;
            VECTOR< SDelGroup >::const_iterator itr;
            for(itr = m_groupInfo.cbegin(); itr != m_groupInfo.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
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

void CImRspDelgroup::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspDelgroup::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_groupInfo.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SDelGroup tmpVal;
                (*this) >> tmpVal;
                m_groupInfo.push_back(tmpVal);
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
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

PACKRETCODE CImRspDelgroup::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqChguserverify::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_CHGUSERVERIFY;
    m_scHead.PackData(strData);
}

void CImReqChguserverify::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)5;
        (*this) << FT_UINT8;
        (*this) << m_addcontactFlag;
        (*this) << FT_UINT8;
        (*this) << m_sendmsgFlag;
        (*this) << FT_UINT8;
        (*this) << m_enableSearch;
        (*this) << FT_STRING;
        (*this) << m_question;
        (*this) << FT_STRING;
        (*this) << m_answer;
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

void CImReqChguserverify::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqChguserverify::UnpackBody(string& strData)
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
        (*this) >> m_addcontactFlag;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_sendmsgFlag;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_enableSearch;
        try
        {
            if(num < 4) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_question;
            if(num < 5) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_answer;
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

PACKRETCODE CImReqChguserverify::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspChguserverify::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_CHGUSERVERIFY;
    m_scHead.PackData(strData);
}

void CImRspChguserverify::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)6;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_UINT8;
        (*this) << m_addcontactFlag;
        (*this) << FT_UINT8;
        (*this) << m_sendmsgFlag;
        (*this) << FT_UINT8;
        (*this) << m_enableSearch;
        (*this) << FT_STRING;
        (*this) << m_question;
        (*this) << FT_STRING;
        (*this) << m_answer;
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

void CImRspChguserverify::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspChguserverify::UnpackBody(string& strData)
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
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_addcontactFlag;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_sendmsgFlag;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_enableSearch;
        try
        {
            if(num < 5) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_question;
            if(num < 6) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_answer;
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

PACKRETCODE CImRspChguserverify::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

CPackData& operator<< ( CPackData& cPackData, const SChgContactInfo&  sChgContactInfo )
{
    uint8_t nFieldNum = 5;
    cPackData << nFieldNum;
    cPackData << FT_INT64;
    cPackData << sChgContactInfo.m_mask;
    cPackData << FT_STRING;
    cPackData << sChgContactInfo.m_contactId;
    cPackData << FT_STRING;
    cPackData << sChgContactInfo.m_nickName;
    cPackData << FT_STRING;
    cPackData << sChgContactInfo.m_importance;
    cPackData << FT_INT64;
    cPackData << sChgContactInfo.m_groupId;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SChgContactInfo&  sChgContactInfo )
{
    uint8_t num;
    cPackData >> num;
    if(num < 5) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_INT64) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sChgContactInfo.m_mask;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sChgContactInfo.m_contactId;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sChgContactInfo.m_nickName;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sChgContactInfo.m_importance;
    cPackData >> field;
    if(field.m_baseType != FT_INT64) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sChgContactInfo.m_groupId;
    for(int i = 5; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const SContactInfo&  sContactInfo )
{
    uint8_t nFieldNum = 4;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sContactInfo.m_contactId;
    cPackData << FT_STRING;
    cPackData << sContactInfo.m_nickName;
    cPackData << FT_STRING;
    cPackData << sContactInfo.m_importance;
    cPackData << FT_INT64;
    cPackData << sContactInfo.m_groupId;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SContactInfo&  sContactInfo )
{
    uint8_t num;
    cPackData >> num;
    if(num < 4) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sContactInfo.m_contactId;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sContactInfo.m_nickName;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sContactInfo.m_importance;
    cPackData >> field;
    if(field.m_baseType != FT_INT64) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sContactInfo.m_groupId;
    for(int i = 4; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CImReqGetcontact::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_GETCONTACT;
    m_scHead.PackData(strData);
}

void CImReqGetcontact::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
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

void CImReqGetcontact::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqGetcontact::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
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

PACKRETCODE CImReqGetcontact::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspGetcontact::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_GETCONTACT;
    m_scHead.PackData(strData);
}

void CImRspGetcontact::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_contactList.size();
            (*this) << nLen;
            VECTOR< SContactInfo >::const_iterator itr;
            for(itr = m_contactList.cbegin(); itr != m_contactList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
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

void CImRspGetcontact::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspGetcontact::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_contactList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SContactInfo tmpVal;
                (*this) >> tmpVal;
                m_contactList.push_back(tmpVal);
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
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

PACKRETCODE CImRspGetcontact::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqAddcontact::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_ADDCONTACT;
    m_scHead.PackData(strData);
}

void CImReqAddcontact::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRUCT;
        (*this) << m_contact;
        (*this) << FT_UINT8;
        (*this) << m_type;
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

void CImReqAddcontact::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqAddcontact::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_STRUCT) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_contact;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
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

PACKRETCODE CImReqAddcontact::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspAddcontact::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_ADDCONTACT;
    m_scHead.PackData(strData);
}

void CImRspAddcontact::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)5;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_UINT8;
        (*this) << m_type;
        (*this) << FT_STRUCT;
        (*this) << m_contact;
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
        (*this) << FT_STRING;
        (*this) << m_companyname;
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

void CImRspAddcontact::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspAddcontact::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_STRUCT) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_contact;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_companyname;
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

PACKRETCODE CImRspAddcontact::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqChgcontact::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_CHGCONTACT;
    m_scHead.PackData(strData);
}

void CImReqChgcontact::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_contactList.size();
            (*this) << nLen;
            VECTOR< SChgContactInfo >::const_iterator itr;
            for(itr = m_contactList.cbegin(); itr != m_contactList.cend(); ++itr)
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

void CImReqChgcontact::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqChgcontact::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_contactList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SChgContactInfo tmpVal;
                (*this) >> tmpVal;
                m_contactList.push_back(tmpVal);
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

PACKRETCODE CImReqChgcontact::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspChgcontact::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_CHGCONTACT;
    m_scHead.PackData(strData);
}

void CImRspChgcontact::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_contactList.size();
            (*this) << nLen;
            VECTOR< SChgContactInfo >::const_iterator itr;
            for(itr = m_contactList.cbegin(); itr != m_contactList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
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

void CImRspChgcontact::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspChgcontact::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_contactList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SChgContactInfo tmpVal;
                (*this) >> tmpVal;
                m_contactList.push_back(tmpVal);
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
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

PACKRETCODE CImRspChgcontact::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqDelcontact::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_DELCONTACT;
    m_scHead.PackData(strData);
}

void CImReqDelcontact::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_VECTOR;
        (*this) << FT_STRING;
        {
            uint32_t nLen = m_contactList.size();
            (*this) << nLen;
            VECTOR< string >::const_iterator itr;
            for(itr = m_contactList.cbegin(); itr != m_contactList.cend(); ++itr)
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

void CImReqDelcontact::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqDelcontact::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_contactList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                string tmpVal;
                (*this) >> tmpVal;
                m_contactList.push_back(tmpVal);
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

PACKRETCODE CImReqDelcontact::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspDelcontact::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_DELCONTACT;
    m_scHead.PackData(strData);
}

void CImRspDelcontact::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_VECTOR;
        (*this) << FT_STRING;
        {
            uint32_t nLen = m_contactList.size();
            (*this) << nLen;
            VECTOR< string >::const_iterator itr;
            for(itr = m_contactList.cbegin(); itr != m_contactList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
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

void CImRspDelcontact::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspDelcontact::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_contactList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                string tmpVal;
                (*this) >> tmpVal;
                m_contactList.push_back(tmpVal);
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
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

PACKRETCODE CImRspDelcontact::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqAddcntack::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_ADDCNTACK;
    m_scHead.PackData(strData);
}

void CImReqAddcntack::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT8;
        (*this) << m_opcode;
        (*this) << FT_STRING;
        (*this) << m_contactId;
        (*this) << FT_INT64;
        (*this) << m_groupId;
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

void CImReqAddcntack::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqAddcntack::UnpackBody(string& strData)
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
        (*this) >> m_opcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_contactId;
        (*this) >> field;
        if(field.m_baseType != FT_INT64) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_groupId;
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

PACKRETCODE CImReqAddcntack::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspAddcntack::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_ADDCNTACK;
    m_scHead.PackData(strData);
}

void CImRspAddcntack::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)5;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_UINT8;
        (*this) << m_opcode;
        (*this) << FT_INT64;
        (*this) << m_groupId;
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
        (*this) << FT_STRING;
        (*this) << m_contactId;
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

void CImRspAddcntack::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspAddcntack::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_opcode;
        (*this) >> field;
        if(field.m_baseType != FT_INT64) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_groupId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_contactId;
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

PACKRETCODE CImRspAddcntack::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

CPackData& operator<< ( CPackData& cPackData, const SContactDetailGetter&  sContactDetailGetter )
{
    uint8_t nFieldNum = 2;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sContactDetailGetter.m_contactId;
    cPackData << FT_UINT32;
    cPackData << sContactDetailGetter.m_timestamp;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SContactDetailGetter&  sContactDetailGetter )
{
    uint8_t num;
    cPackData >> num;
    if(num < 2) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sContactDetailGetter.m_contactId;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sContactDetailGetter.m_timestamp;
    for(int i = 2; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CImReqGetcntdetail::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_GETCNTDETAIL;
    m_scHead.PackData(strData);
}

void CImReqGetcntdetail::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_contacts.size();
            (*this) << nLen;
            VECTOR< SContactDetailGetter >::const_iterator itr;
            for(itr = m_contacts.cbegin(); itr != m_contacts.cend(); ++itr)
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

void CImReqGetcntdetail::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqGetcntdetail::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_contacts.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SContactDetailGetter tmpVal;
                (*this) >> tmpVal;
                m_contacts.push_back(tmpVal);
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

PACKRETCODE CImReqGetcntdetail::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

CPackData& operator<< ( CPackData& cPackData, const SContactDetail&  sContactDetail )
{
    uint8_t nFieldNum = 2;
    cPackData << nFieldNum;
    cPackData << FT_MAP;
    cPackData << FT_STRING;
    cPackData << FT_STRING;
    {
        uint8_t nSize = sContactDetail.m_contactDetail.size();
        cPackData << nSize;
        map< string,string >::const_iterator itr;
        for(itr = sContactDetail.m_contactDetail.begin(); itr != sContactDetail.m_contactDetail.end(); ++itr)
        {
            cPackData << itr->first;
            cPackData << itr->second;
        }
    }
    cPackData << FT_UINT32;
    cPackData << sContactDetail.m_timestamp;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SContactDetail&  sContactDetail )
{
    uint8_t num;
    cPackData >> num;
    if(num < 2) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_MAP) throw PACK_TYPEMATCH_ERROR;
    {
        uint8_t nSize;
        cPackData >> nSize;
        for(uint32_t i = 0; i < nSize; i++)
        {
            string key;
            string value;
            cPackData >> key;
            cPackData >> value;
            sContactDetail.m_contactDetail[key] = value;
        }
    }
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sContactDetail.m_timestamp;
    for(int i = 2; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CImRspGetcntdetail::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_GETCNTDETAIL;
    m_scHead.PackData(strData);
}

void CImRspGetcntdetail::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_detailList.size();
            (*this) << nLen;
            VECTOR< SContactDetail >::const_iterator itr;
            for(itr = m_detailList.cbegin(); itr != m_detailList.cend(); ++itr)
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

void CImRspGetcntdetail::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspGetcntdetail::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_detailList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SContactDetail tmpVal;
                (*this) >> tmpVal;
                m_detailList.push_back(tmpVal);
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

PACKRETCODE CImRspGetcntdetail::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqChguserdetail::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_CHGUSERDETAIL;
    m_scHead.PackData(strData);
}

void CImReqChguserdetail::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_MAP;
        (*this) << FT_STRING;
        (*this) << FT_STRING;
        {
            uint8_t nSize = m_userDetail.size();
            (*this) << nSize;
            map< string,string >::const_iterator itr;
            for(itr = m_userDetail.begin(); itr != m_userDetail.end(); ++itr)
            {
                (*this) << itr->first;
                (*this) << itr->second;
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

void CImReqChguserdetail::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqChguserdetail::UnpackBody(string& strData)
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
                m_userDetail[key] = value;
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

PACKRETCODE CImReqChguserdetail::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspChguserdetail::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_CHGUSERDETAIL;
    m_scHead.PackData(strData);
}

void CImRspChguserdetail::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
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

void CImRspChguserdetail::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspChguserdetail::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
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

PACKRETCODE CImRspChguserdetail::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqGetcntmemo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_GETCNTMEMO;
    m_scHead.PackData(strData);
}

void CImReqGetcntmemo::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        (*this) << m_contactId;
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

void CImReqGetcntmemo::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqGetcntmemo::UnpackBody(string& strData)
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
        (*this) >> m_contactId;
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

PACKRETCODE CImReqGetcntmemo::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspGetcntmemo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_GETCNTMEMO;
    m_scHead.PackData(strData);
}

void CImRspGetcntmemo::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_contactId;
        (*this) << FT_STRING;
        (*this) << m_memo;
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

void CImRspGetcntmemo::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspGetcntmemo::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_contactId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_memo;
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

PACKRETCODE CImRspGetcntmemo::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqChgcntmemo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_CHGCNTMEMO;
    m_scHead.PackData(strData);
}

void CImReqChgcntmemo::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        (*this) << m_contactId;
        (*this) << FT_STRING;
        (*this) << m_memo;
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

void CImReqChgcntmemo::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqChgcntmemo::UnpackBody(string& strData)
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
        (*this) >> m_contactId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_memo;
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

PACKRETCODE CImReqChgcntmemo::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspChgcntmemo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_CHGCNTMEMO;
    m_scHead.PackData(strData);
}

void CImRspChgcntmemo::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_contactId;
        (*this) << FT_STRING;
        (*this) << m_memo;
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

void CImRspChgcntmemo::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspChgcntmemo::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_contactId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_memo;
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

PACKRETCODE CImRspChgcntmemo::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspGetblack::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_GETBLACK;
    m_scHead.PackData(strData);
}

void CImRspGetblack::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_VECTOR;
        (*this) << FT_STRING;
        {
            uint32_t nLen = m_blackList.size();
            (*this) << nLen;
            VECTOR< string >::const_iterator itr;
            for(itr = m_blackList.cbegin(); itr != m_blackList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
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

void CImRspGetblack::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspGetblack::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_blackList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                string tmpVal;
                (*this) >> tmpVal;
                m_blackList.push_back(tmpVal);
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
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

PACKRETCODE CImRspGetblack::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqAddblack::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_ADDBLACK;
    m_scHead.PackData(strData);
}

void CImReqAddblack::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        (*this) << m_blackId;
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

void CImReqAddblack::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqAddblack::UnpackBody(string& strData)
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
        (*this) >> m_blackId;
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

PACKRETCODE CImReqAddblack::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspAddblack::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_ADDBLACK;
    m_scHead.PackData(strData);
}

void CImRspAddblack::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_blackId;
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
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

void CImRspAddblack::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspAddblack::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_blackId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
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

PACKRETCODE CImRspAddblack::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspDelblack::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_DELBLACK;
    m_scHead.PackData(strData);
}

void CImRspDelblack::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_blackId;
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
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

void CImRspDelblack::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspDelblack::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_blackId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
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

PACKRETCODE CImRspDelblack::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqDelblack::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_DELBLACK;
    m_scHead.PackData(strData);
}

void CImReqDelblack::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_blackId;
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
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

void CImReqDelblack::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqDelblack::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_blackId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
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

PACKRETCODE CImReqDelblack::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspGetrevblack::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_GETREVBLACK;
    m_scHead.PackData(strData);
}

void CImRspGetrevblack::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_VECTOR;
        (*this) << FT_STRING;
        {
            uint32_t nLen = m_blackList.size();
            (*this) << nLen;
            VECTOR< string >::const_iterator itr;
            for(itr = m_blackList.cbegin(); itr != m_blackList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
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

void CImRspGetrevblack::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspGetrevblack::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_blackList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                string tmpVal;
                (*this) >> tmpVal;
                m_blackList.push_back(tmpVal);
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
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

PACKRETCODE CImRspGetrevblack::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspGetuserinfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_GETUSERINFO;
    m_scHead.PackData(strData);
}

void CImRspGetuserinfo::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)11;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_UINT8;
        (*this) << m_addcontactFlag;
        (*this) << FT_UINT8;
        (*this) << m_sendmsgFlag;
        (*this) << FT_UINT32;
        (*this) << m_activity;
        (*this) << FT_UINT8;
        (*this) << m_actLevel;
        (*this) << FT_UINT32;
        (*this) << m_needNextlevel;
        (*this) << FT_UINT8;
        (*this) << m_imlevel;
        (*this) << FT_UINT8;
        (*this) << m_mulsendflag;
        (*this) << FT_UINT32;
        (*this) << m_webinfo;
        (*this) << FT_STRING;
        (*this) << m_question;
        (*this) << FT_STRING;
        (*this) << m_answer;
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

void CImRspGetuserinfo::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspGetuserinfo::UnpackBody(string& strData)
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
        if(num < 9) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_addcontactFlag;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_sendmsgFlag;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_activity;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_actLevel;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_needNextlevel;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_imlevel;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_mulsendflag;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_webinfo;
        try
        {
            if(num < 10) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_question;
            if(num < 11) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_answer;
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

PACKRETCODE CImRspGetuserinfo::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

CPackData& operator<< ( CPackData& cPackData, const SUserStatus&  sUserStatus )
{
    uint8_t nFieldNum = 3;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sUserStatus.m_userId;
    cPackData << FT_UINT8;
    cPackData << sUserStatus.m_basicStatus;
    cPackData << FT_UINT8;
    cPackData << sUserStatus.m_predefStatus;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SUserStatus&  sUserStatus )
{
    uint8_t num;
    cPackData >> num;
    if(num < 3) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sUserStatus.m_userId;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sUserStatus.m_basicStatus;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sUserStatus.m_predefStatus;
    for(int i = 3; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CImRspGetcntstatus::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_GETCNTSTATUS;
    m_scHead.PackData(strData);
}

void CImRspGetcntstatus::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_contactStatus.size();
            (*this) << nLen;
            VECTOR< SUserStatus >::const_iterator itr;
            for(itr = m_contactStatus.cbegin(); itr != m_contactStatus.cend(); ++itr)
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

void CImRspGetcntstatus::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspGetcntstatus::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_contactStatus.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SUserStatus tmpVal;
                (*this) >> tmpVal;
                m_contactStatus.push_back(tmpVal);
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

PACKRETCODE CImRspGetcntstatus::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqChgstatus::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_CHGSTATUS;
    m_scHead.PackData(strData);
}

void CImReqChgstatus::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT8;
        (*this) << m_basicStatus;
        (*this) << FT_UINT8;
        (*this) << m_predefStatus;
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

void CImReqChgstatus::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqChgstatus::UnpackBody(string& strData)
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
        (*this) >> m_basicStatus;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_predefStatus;
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

PACKRETCODE CImReqChgstatus::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImNtfStatus::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_NTF_STATUS;
    m_scHead.PackData(strData);
}

void CImNtfStatus::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_userStatusList.size();
            (*this) << nLen;
            VECTOR< SUserStatus >::const_iterator itr;
            for(itr = m_userStatusList.cbegin(); itr != m_userStatusList.cend(); ++itr)
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

void CImNtfStatus::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImNtfStatus::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_userStatusList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SUserStatus tmpVal;
                (*this) >> tmpVal;
                m_userStatusList.push_back(tmpVal);
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

PACKRETCODE CImNtfStatus::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

CPackData& operator<< ( CPackData& cPackData, const SOfflineMessage&  sOfflineMessage )
{
    uint8_t nFieldNum = 5;
    do {
        if(sOfflineMessage.m_serverType == 0)
            nFieldNum--;
        else
            break;
    } while(0);
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sOfflineMessage.m_fromId;
    cPackData << FT_UINT8;
    cPackData << sOfflineMessage.m_type;
    cPackData << FT_UINT32;
    cPackData << sOfflineMessage.m_sendTime;
    cPackData << FT_STRING;
    cPackData << sOfflineMessage.m_message;
    if(nFieldNum == 4)
        return cPackData;
    cPackData << FT_UINT8;
    cPackData << sOfflineMessage.m_serverType;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SOfflineMessage&  sOfflineMessage )
{
    uint8_t num;
    cPackData >> num;
    if(num < 4) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sOfflineMessage.m_fromId;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sOfflineMessage.m_type;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sOfflineMessage.m_sendTime;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sOfflineMessage.m_message;
    try
    {
        if(num < 5) return cPackData;
        cPackData >> field;
        if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
        cPackData >> sOfflineMessage.m_serverType;
    }
    catch(PACKRETCODE)
    {
        return cPackData;
    }
    for(int i = 5; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CImRspGetofflinemsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_GETOFFLINEMSG;
    m_scHead.PackData(strData);
}

void CImRspGetofflinemsg::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_messageList.size();
            (*this) << nLen;
            VECTOR< SOfflineMessage >::const_iterator itr;
            for(itr = m_messageList.cbegin(); itr != m_messageList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
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

void CImRspGetofflinemsg::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspGetofflinemsg::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_messageList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SOfflineMessage tmpVal;
                (*this) >> tmpVal;
                m_messageList.push_back(tmpVal);
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
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

PACKRETCODE CImRspGetofflinemsg::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqAddofflinemsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_ADDOFFLINEMSG;
    m_scHead.PackData(strData);
}

void CImReqAddofflinemsg::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_messageList.size();
            (*this) << nLen;
            VECTOR< SOfflineMessage >::const_iterator itr;
            for(itr = m_messageList.cbegin(); itr != m_messageList.cend(); ++itr)
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

void CImReqAddofflinemsg::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqAddofflinemsg::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_messageList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SOfflineMessage tmpVal;
                (*this) >> tmpVal;
                m_messageList.push_back(tmpVal);
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

PACKRETCODE CImReqAddofflinemsg::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqDelofflinemsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_DELOFFLINEMSG;
    m_scHead.PackData(strData);
}

void CImReqDelofflinemsg::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_UINT32;
        (*this) << m_lastTime;
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

void CImReqDelofflinemsg::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqDelofflinemsg::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_lastTime;
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

PACKRETCODE CImReqDelofflinemsg::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspGetsystemmsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_GETSYSTEMMSG;
    m_scHead.PackData(strData);
}

void CImRspGetsystemmsg::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_VECTOR;
        (*this) << FT_STRING;
        {
            uint32_t nLen = m_messageList.size();
            (*this) << nLen;
            VECTOR< string >::const_iterator itr;
            for(itr = m_messageList.cbegin(); itr != m_messageList.cend(); ++itr)
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

void CImRspGetsystemmsg::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspGetsystemmsg::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_messageList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                string tmpVal;
                (*this) >> tmpVal;
                m_messageList.push_back(tmpVal);
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

PACKRETCODE CImRspGetsystemmsg::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqSendimmessage::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_SENDIMMESSAGE;
    m_scHead.PackData(strData);
}

void CImReqSendimmessage::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_STRING;
        (*this) << m_targetId;
        (*this) << FT_UINT8;
        (*this) << m_type;
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

void CImReqSendimmessage::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqSendimmessage::UnpackBody(string& strData)
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
        (*this) >> m_targetId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
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

PACKRETCODE CImReqSendimmessage::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqSendmultiusermsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_SENDMULTIUSERMSG;
    m_scHead.PackData(strData);
}

void CImReqSendmultiusermsg::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_VECTOR;
        (*this) << FT_STRING;
        {
            uint32_t nLen = m_targetList.size();
            (*this) << nLen;
            VECTOR< string >::const_iterator itr;
            for(itr = m_targetList.cbegin(); itr != m_targetList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        (*this) << FT_UINT8;
        (*this) << m_type;
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

void CImReqSendmultiusermsg::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqSendmultiusermsg::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_targetList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                string tmpVal;
                (*this) >> tmpVal;
                m_targetList.push_back(tmpVal);
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
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

PACKRETCODE CImReqSendmultiusermsg::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImNtfImmessage::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_NTF_IMMESSAGE;
    m_scHead.PackData(strData);
}

void CImNtfImmessage::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)5;
        (*this) << FT_STRING;
        (*this) << m_sendId;
        (*this) << FT_UINT32;
        (*this) << m_sendTime;
        (*this) << FT_STRING;
        (*this) << m_message;
        (*this) << FT_UINT8;
        (*this) << m_serverType;
        (*this) << FT_UINT8;
        (*this) << m_mShiftflag;
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

void CImNtfImmessage::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImNtfImmessage::UnpackBody(string& strData)
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
        (*this) >> m_sendId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_sendTime;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_message;
        try
        {
            if(num < 4) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_serverType;
            if(num < 5) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_mShiftflag;
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

PACKRETCODE CImNtfImmessage::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImNtfSystemmessage::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_NTF_SYSTEMMESSAGE;
    m_scHead.PackData(strData);
}

void CImNtfSystemmessage::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT16;
        (*this) << m_cmdId;
        (*this) << FT_STRING;
        (*this) << m_style;
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

void CImNtfSystemmessage::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImNtfSystemmessage::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT16) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_cmdId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_style;
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

PACKRETCODE CImNtfSystemmessage::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImNtfSubcribeMsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_NTF_SUBCRIBE_MSG;
    m_scHead.PackData(strData);
}

void CImNtfSubcribeMsg::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        (*this) << m_message;
        (*this) << FT_MAP;
        (*this) << FT_STRING;
        (*this) << FT_STRING;
        {
            uint8_t nSize = m_htmlMsg.size();
            (*this) << nSize;
            map< string,string >::const_iterator itr;
            for(itr = m_htmlMsg.begin(); itr != m_htmlMsg.end(); ++itr)
            {
                (*this) << itr->first;
                (*this) << itr->second;
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

void CImNtfSubcribeMsg::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImNtfSubcribeMsg::UnpackBody(string& strData)
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
        (*this) >> m_message;
        try
        {
            if(num < 2) return PACK_RIGHT;
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
                    m_htmlMsg[key] = value;
                }
            }
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

PACKRETCODE CImNtfSubcribeMsg::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImNtfExtinfoMsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_NTF_EXTINFO_MSG;
    m_scHead.PackData(strData);
}

void CImNtfExtinfoMsg::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT16;
        (*this) << m_type;
        (*this) << FT_STRING;
        (*this) << m_contactId;
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

void CImNtfExtinfoMsg::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImNtfExtinfoMsg::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT16) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_contactId;
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

PACKRETCODE CImNtfExtinfoMsg::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqGettoolsprofile::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_GETTOOLSPROFILE;
    m_scHead.PackData(strData);
}

void CImReqGettoolsprofile::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_VECTOR;
        (*this) << FT_UINT8;
        {
            uint32_t nLen = m_toolTypes.size();
            (*this) << nLen;
            VECTOR< uint8_t >::const_iterator itr;
            for(itr = m_toolTypes.cbegin(); itr != m_toolTypes.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
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

void CImReqGettoolsprofile::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqGettoolsprofile::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_toolTypes.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                uint8_t tmpVal;
                (*this) >> tmpVal;
                m_toolTypes.push_back(tmpVal);
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
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

PACKRETCODE CImReqGettoolsprofile::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

CPackData& operator<< ( CPackData& cPackData, const SToolProfile&  sToolProfile )
{
    uint8_t nFieldNum = 2;
    cPackData << nFieldNum;
    cPackData << FT_UINT8;
    cPackData << sToolProfile.m_toolType;
    cPackData << FT_STRING;
    cPackData << sToolProfile.m_profile;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SToolProfile&  sToolProfile )
{
    uint8_t num;
    cPackData >> num;
    if(num < 2) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sToolProfile.m_toolType;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sToolProfile.m_profile;
    for(int i = 2; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CImRspGettoolsprofile::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_GETTOOLSPROFILE;
    m_scHead.PackData(strData);
}

void CImRspGettoolsprofile::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_profileList.size();
            (*this) << nLen;
            VECTOR< SToolProfile >::const_iterator itr;
            for(itr = m_profileList.cbegin(); itr != m_profileList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
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

void CImRspGettoolsprofile::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspGettoolsprofile::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_profileList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SToolProfile tmpVal;
                (*this) >> tmpVal;
                m_profileList.push_back(tmpVal);
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
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

PACKRETCODE CImRspGettoolsprofile::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqChgtoolsprofile::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_CHGTOOLSPROFILE;
    m_scHead.PackData(strData);
}

void CImReqChgtoolsprofile::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_profileList.size();
            (*this) << nLen;
            VECTOR< SToolProfile >::const_iterator itr;
            for(itr = m_profileList.cbegin(); itr != m_profileList.cend(); ++itr)
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

void CImReqChgtoolsprofile::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqChgtoolsprofile::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_profileList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SToolProfile tmpVal;
                (*this) >> tmpVal;
                m_profileList.push_back(tmpVal);
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

PACKRETCODE CImReqChgtoolsprofile::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspChgtoolsprofile::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_CHGTOOLSPROFILE;
    m_scHead.PackData(strData);
}

void CImRspChgtoolsprofile::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_VECTOR;
        (*this) << FT_UINT8;
        {
            uint32_t nLen = m_toolTypes.size();
            (*this) << nLen;
            VECTOR< uint8_t >::const_iterator itr;
            for(itr = m_toolTypes.cbegin(); itr != m_toolTypes.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
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

void CImRspChgtoolsprofile::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspChgtoolsprofile::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_toolTypes.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                uint8_t tmpVal;
                (*this) >> tmpVal;
                m_toolTypes.push_back(tmpVal);
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
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

PACKRETCODE CImRspChgtoolsprofile::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqPeerinfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_PEERINFO;
    m_scHead.PackData(strData);
}

void CImReqPeerinfo::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        (*this) << m_targetId;
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

void CImReqPeerinfo::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqPeerinfo::UnpackBody(string& strData)
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
        (*this) >> m_targetId;
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

PACKRETCODE CImReqPeerinfo::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspPeerinfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_PEERINFO;
    m_scHead.PackData(strData);
}

void CImRspPeerinfo::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)9;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_targetId;
        (*this) << FT_UINT32;
        (*this) << m_clinetip;
        (*this) << FT_STRING;
        (*this) << m_version;
        (*this) << FT_UINT8;
        (*this) << m_basicStatus;
        (*this) << FT_UINT8;
        (*this) << m_predefStatus;
        (*this) << FT_UINT8;
        (*this) << m_addcontactFlag;
        (*this) << FT_UINT8;
        (*this) << m_sendmsgFlag;
        (*this) << FT_UINT8;
        (*this) << m_reverseContact;
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

void CImRspPeerinfo::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspPeerinfo::UnpackBody(string& strData)
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
        if(num < 9) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_targetId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_clinetip;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_version;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_basicStatus;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_predefStatus;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_addcontactFlag;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_sendmsgFlag;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_reverseContact;
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

PACKRETCODE CImRspPeerinfo::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqSubscribeInfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_SUBSCRIBE_INFO;
    m_scHead.PackData(strData);
}

void CImReqSubscribeInfo::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_VECTOR;
        (*this) << FT_STRING;
        {
            uint32_t nLen = m_targetList.size();
            (*this) << nLen;
            VECTOR< string >::const_iterator itr;
            for(itr = m_targetList.cbegin(); itr != m_targetList.cend(); ++itr)
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

void CImReqSubscribeInfo::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqSubscribeInfo::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_targetList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                string tmpVal;
                (*this) >> tmpVal;
                m_targetList.push_back(tmpVal);
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

PACKRETCODE CImReqSubscribeInfo::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspSubscribeInfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_SUBSCRIBE_INFO;
    m_scHead.PackData(strData);
}

void CImRspSubscribeInfo::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_statusList.size();
            (*this) << nLen;
            VECTOR< SUserStatus >::const_iterator itr;
            for(itr = m_statusList.cbegin(); itr != m_statusList.cend(); ++itr)
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

void CImRspSubscribeInfo::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspSubscribeInfo::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_statusList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SUserStatus tmpVal;
                (*this) >> tmpVal;
                m_statusList.push_back(tmpVal);
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

PACKRETCODE CImRspSubscribeInfo::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqDisubscribeInfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_DISUBSCRIBE_INFO;
    m_scHead.PackData(strData);
}

void CImReqDisubscribeInfo::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_VECTOR;
        (*this) << FT_STRING;
        {
            uint32_t nLen = m_targets.size();
            (*this) << nLen;
            VECTOR< string >::const_iterator itr;
            for(itr = m_targets.cbegin(); itr != m_targets.cend(); ++itr)
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

void CImReqDisubscribeInfo::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqDisubscribeInfo::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_targets.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                string tmpVal;
                (*this) >> tmpVal;
                m_targets.push_back(tmpVal);
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

PACKRETCODE CImReqDisubscribeInfo::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqGetftsaddr::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_GETFTSADDR;
    m_scHead.PackData(strData);
}

void CImReqGetftsaddr::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        (*this) << m_sessionId;
        (*this) << FT_UINT16;
        (*this) << m_type;
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

void CImReqGetftsaddr::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqGetftsaddr::UnpackBody(string& strData)
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
        (*this) >> m_sessionId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT16) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
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

PACKRETCODE CImReqGetftsaddr::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqGetappaddr::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_GETAPPADDR;
    m_scHead.PackData(strData);
}

void CImReqGetappaddr::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)4;
        (*this) << FT_STRING;
        (*this) << m_sessionId;
        (*this) << FT_UINT16;
        (*this) << m_appType;
        (*this) << FT_UINT16;
        (*this) << m_subType;
        (*this) << FT_UINT64;
        (*this) << m_objId;
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

void CImReqGetappaddr::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqGetappaddr::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_sessionId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT16) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_appType;
        (*this) >> field;
        if(field.m_baseType != FT_UINT16) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_subType;
        (*this) >> field;
        if(field.m_baseType != FT_UINT64) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_objId;
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

PACKRETCODE CImReqGetappaddr::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspGetappaddr::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_GETAPPADDR;
    m_scHead.PackData(strData);
}

void CImRspGetappaddr::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)7;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_serverAddr;
        (*this) << FT_UINT16;
        (*this) << m_serverPort;
        (*this) << FT_STRING;
        (*this) << m_sessionId;
        (*this) << FT_UINT16;
        (*this) << m_appType;
        (*this) << FT_UINT16;
        (*this) << m_subType;
        (*this) << FT_UINT64;
        (*this) << m_objId;
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

void CImRspGetappaddr::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspGetappaddr::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_serverAddr;
        (*this) >> field;
        if(field.m_baseType != FT_UINT16) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_serverPort;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_sessionId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT16) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_appType;
        (*this) >> field;
        if(field.m_baseType != FT_UINT16) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_subType;
        (*this) >> field;
        if(field.m_baseType != FT_UINT64) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_objId;
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

PACKRETCODE CImRspGetappaddr::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspGetftsaddr::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_GETFTSADDR;
    m_scHead.PackData(strData);
}

void CImRspGetftsaddr::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)6;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_serverIp;
        (*this) << FT_UINT16;
        (*this) << m_serverPort;
        (*this) << FT_STRING;
        (*this) << m_sessionId;
        (*this) << FT_UINT16;
        (*this) << m_type;
        (*this) << FT_UINT32;
        (*this) << m_sessionsum;
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

void CImRspGetftsaddr::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspGetftsaddr::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_serverIp;
        (*this) >> field;
        if(field.m_baseType != FT_UINT16) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_serverPort;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_sessionId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT16) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_sessionsum;
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

PACKRETCODE CImRspGetftsaddr::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqChgportrait::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_CHGPORTRAIT;
    m_scHead.PackData(strData);
}

void CImReqChgportrait::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        (*this) << m_portraitid;
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

void CImReqChgportrait::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqChgportrait::UnpackBody(string& strData)
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
        (*this) >> m_portraitid;
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

PACKRETCODE CImReqChgportrait::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqChgsignature::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_CHGSIGNATURE;
    m_scHead.PackData(strData);
}

void CImReqChgsignature::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        (*this) << m_signature;
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

void CImReqChgsignature::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqChgsignature::UnpackBody(string& strData)
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
        (*this) >> m_signature;
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

PACKRETCODE CImReqChgsignature::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspChgsignature::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_CHGSIGNATURE;
    m_scHead.PackData(strData);
}

void CImRspChgsignature::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        (*this) << m_signature;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
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

void CImRspChgsignature::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspChgsignature::UnpackBody(string& strData)
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
        (*this) >> m_signature;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
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

PACKRETCODE CImRspChgsignature::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImNtfOperationtip::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_NTF_OPERATIONTIP;
    m_scHead.PackData(strData);
}

void CImNtfOperationtip::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_STRING;
        (*this) << m_contactId;
        (*this) << FT_STRING;
        (*this) << m_ntfmessage;
        (*this) << FT_UINT32;
        (*this) << m_ntftime;
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

void CImNtfOperationtip::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImNtfOperationtip::UnpackBody(string& strData)
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
        (*this) >> m_contactId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_ntfmessage;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_ntftime;
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

PACKRETCODE CImNtfOperationtip::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

CPackData& operator<< ( CPackData& cPackData, const SBindingInfo&  sBindingInfo )
{
    uint8_t nFieldNum = 2;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sBindingInfo.m_userId;
    cPackData << FT_STRING;
    cPackData << sBindingInfo.m_password;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SBindingInfo&  sBindingInfo )
{
    uint8_t num;
    cPackData >> num;
    if(num < 2) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBindingInfo.m_userId;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sBindingInfo.m_password;
    for(int i = 2; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CImReqAddbinding::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_ADDBINDING;
    m_scHead.PackData(strData);
}

void CImReqAddbinding::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT32;
        (*this) << m_addflag;
        (*this) << FT_STRUCT;
        (*this) << m_binding;
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

void CImReqAddbinding::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqAddbinding::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_addflag;
        (*this) >> field;
        if(field.m_baseType != FT_STRUCT) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_binding;
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

PACKRETCODE CImReqAddbinding::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspAddbinding::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_ADDBINDING;
    m_scHead.PackData(strData);
}

void CImRspAddbinding::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_uid;
        (*this) << FT_STRING;
        (*this) << m_webmd5pw;
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

void CImRspAddbinding::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspAddbinding::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_uid;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_webmd5pw;
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

PACKRETCODE CImRspAddbinding::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqChgbinding::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_CHGBINDING;
    m_scHead.PackData(strData);
}

void CImReqChgbinding::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRUCT;
        (*this) << m_binding;
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

void CImReqChgbinding::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqChgbinding::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_STRUCT) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_binding;
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

PACKRETCODE CImReqChgbinding::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspChgbinding::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_CHGBINDING;
    m_scHead.PackData(strData);
}

void CImRspChgbinding::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_webmd5pw;
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

void CImRspChgbinding::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspChgbinding::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_webmd5pw;
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

PACKRETCODE CImRspChgbinding::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqDelbinding::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_DELBINDING;
    m_scHead.PackData(strData);
}

void CImReqDelbinding::PackBody(string& strData)
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

void CImReqDelbinding::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqDelbinding::UnpackBody(string& strData)
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

PACKRETCODE CImReqDelbinding::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspDelbinding::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_DELBINDING;
    m_scHead.PackData(strData);
}

void CImRspDelbinding::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
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

void CImRspDelbinding::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspDelbinding::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
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

PACKRETCODE CImRspDelbinding::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqGetbinding::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_GETBINDING;
    m_scHead.PackData(strData);
}

void CImReqGetbinding::PackBody(string& strData)
{
}

void CImReqGetbinding::PackData(string& strData, const string& strKey)
{
    PackHead(strData);
}

PACKRETCODE CImReqGetbinding::UnpackBody(string& strData)
{
    return PACK_RIGHT;
}

PACKRETCODE CImReqGetbinding::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    return PACK_RIGHT;
}

void CImRspGetbinding::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_GETBINDING;
    m_scHead.PackData(strData);
}

void CImRspGetbinding::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_bindingList.size();
            (*this) << nLen;
            VECTOR< SBindingInfo >::const_iterator itr;
            for(itr = m_bindingList.cbegin(); itr != m_bindingList.cend(); ++itr)
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

void CImRspGetbinding::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspGetbinding::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_bindingList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SBindingInfo tmpVal;
                (*this) >> tmpVal;
                m_bindingList.push_back(tmpVal);
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

PACKRETCODE CImRspGetbinding::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqGetPwdtoken::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_GET_PWDTOKEN;
    m_scHead.PackData(strData);
}

void CImReqGetPwdtoken::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        (*this) << m_uid;
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

void CImReqGetPwdtoken::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqGetPwdtoken::UnpackBody(string& strData)
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
        (*this) >> m_uid;
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

PACKRETCODE CImReqGetPwdtoken::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspGetPwdtoken::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_GET_PWDTOKEN;
    m_scHead.PackData(strData);
}

void CImRspGetPwdtoken::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_uid;
        (*this) << FT_STRING;
        (*this) << m_token;
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

void CImRspGetPwdtoken::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspGetPwdtoken::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_uid;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_token;
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

PACKRETCODE CImRspGetPwdtoken::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqCankeysearch::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_CANKEYSEARCH;
    m_scHead.PackData(strData);
}

void CImReqCankeysearch::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_UINT8;
        (*this) << m_enabled;
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

void CImReqCankeysearch::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqCankeysearch::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_enabled;
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

PACKRETCODE CImReqCankeysearch::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqGetwebSession::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_GETWEB_SESSION;
    m_scHead.PackData(strData);
}

void CImReqGetwebSession::PackBody(string& strData)
{
}

void CImReqGetwebSession::PackData(string& strData, const string& strKey)
{
    PackHead(strData);
}

PACKRETCODE CImReqGetwebSession::UnpackBody(string& strData)
{
    return PACK_RIGHT;
}

PACKRETCODE CImReqGetwebSession::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    return PACK_RIGHT;
}

void CImRspGetwebSession::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_GETWEB_SESSION;
    m_scHead.PackData(strData);
}

void CImRspGetwebSession::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_UINT32;
        (*this) << m_expiretime;
        (*this) << FT_STRING;
        (*this) << m_sessionNo;
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

void CImRspGetwebSession::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspGetwebSession::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_expiretime;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_sessionNo;
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

PACKRETCODE CImRspGetwebSession::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImNtfUpdateUsrextinfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_NTF_UPDATE_USREXTINFO;
    m_scHead.PackData(strData);
}

void CImNtfUpdateUsrextinfo::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_STRING;
        (*this) << m_contactId;
        (*this) << FT_STRING;
        (*this) << m_type;
        (*this) << FT_STRING;
        (*this) << m_value;
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

void CImNtfUpdateUsrextinfo::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImNtfUpdateUsrextinfo::UnpackBody(string& strData)
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
        (*this) >> m_contactId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_value;
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

PACKRETCODE CImNtfUpdateUsrextinfo::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqUserudbprofile::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_USERUDBPROFILE;
    m_scHead.PackData(strData);
}

void CImReqUserudbprofile::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        (*this) << m_uid;
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

void CImReqUserudbprofile::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqUserudbprofile::UnpackBody(string& strData)
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
        try
        {
            uint8_t num;
            (*this) >> num;
            CFieldType field;
            if(num < 1) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_uid;
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

PACKRETCODE CImReqUserudbprofile::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspUserudbprofile::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_USERUDBPROFILE;
    m_scHead.PackData(strData);
}

void CImRspUserudbprofile::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_MAP;
        (*this) << FT_STRING;
        (*this) << FT_STRING;
        {
            uint8_t nSize = m_profilelist.size();
            (*this) << nSize;
            map< string,string >::const_iterator itr;
            for(itr = m_profilelist.begin(); itr != m_profilelist.end(); ++itr)
            {
                (*this) << itr->first;
                (*this) << itr->second;
            }
        }
        (*this) << FT_STRING;
        (*this) << m_uid;
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

void CImRspUserudbprofile::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspUserudbprofile::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
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
                m_profilelist[key] = value;
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_uid;
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

PACKRETCODE CImRspUserudbprofile::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqUpdateUdbprofile::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_UPDATE_UDBPROFILE;
    m_scHead.PackData(strData);
}

void CImReqUpdateUdbprofile::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_MAP;
        (*this) << FT_STRING;
        (*this) << FT_STRING;
        {
            uint8_t nSize = m_profilelist.size();
            (*this) << nSize;
            map< string,string >::const_iterator itr;
            for(itr = m_profilelist.begin(); itr != m_profilelist.end(); ++itr)
            {
                (*this) << itr->first;
                (*this) << itr->second;
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

void CImReqUpdateUdbprofile::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqUpdateUdbprofile::UnpackBody(string& strData)
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
                m_profilelist[key] = value;
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

PACKRETCODE CImReqUpdateUdbprofile::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspUpdateUdbprofile::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_UPDATE_UDBPROFILE;
    m_scHead.PackData(strData);
}

void CImRspUpdateUdbprofile::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_uid;
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

void CImRspUpdateUdbprofile::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspUpdateUdbprofile::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_uid;
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

PACKRETCODE CImRspUpdateUdbprofile::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqGetDegree::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_GET_DEGREE;
    m_scHead.PackData(strData);
}

void CImReqGetDegree::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        WriteData(m_uid, 0, 64);
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

void CImReqGetDegree::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqGetDegree::UnpackBody(string& strData)
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
        ReadData(m_uid, 64, 0);
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

PACKRETCODE CImReqGetDegree::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspGetDegree::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_GET_DEGREE;
    m_scHead.PackData(strData);
}

void CImRspGetDegree::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)6;
        (*this) << FT_STRING;
        (*this) << m_uid;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_UINT32;
        (*this) << m_userLevel;
        (*this) << FT_UINT32;
        (*this) << m_totalDegree;
        (*this) << FT_UINT32;
        (*this) << m_needDegree;
        (*this) << FT_VECTOR;
        (*this) << FT_UINT8;
        {
            uint32_t nLen = m_showCount.size();
            (*this) << nLen;
            VECTOR< uint8_t >::const_iterator itr;
            for(itr = m_showCount.cbegin(); itr != m_showCount.cend(); ++itr)
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

void CImRspGetDegree::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspGetDegree::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_uid;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_userLevel;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_totalDegree;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_needDegree;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_showCount.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                uint8_t tmpVal;
                (*this) >> tmpVal;
                m_showCount.push_back(tmpVal);
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

PACKRETCODE CImRspGetDegree::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqPeerVerifyConfig::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_PEER_VERIFY_CONFIG;
    m_scHead.PackData(strData);
}

void CImReqPeerVerifyConfig::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT8;
        (*this) << m_clientid;
        (*this) << FT_STRING;
        (*this) << m_contactId;
        (*this) << FT_UINT32;
        (*this) << m_supportFlag;
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

void CImReqPeerVerifyConfig::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqPeerVerifyConfig::UnpackBody(string& strData)
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
        (*this) >> m_clientid;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_contactId;
        try
        {
            if(num < 3) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_supportFlag;
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

PACKRETCODE CImReqPeerVerifyConfig::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspPeerVerifyConfig::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_PEER_VERIFY_CONFIG;
    m_scHead.PackData(strData);
}

void CImRspPeerVerifyConfig::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)6;
        (*this) << FT_UINT8;
        (*this) << m_clientid;
        (*this) << FT_STRING;
        (*this) << m_contactId;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_retlongid;
        (*this) << FT_STRING;
        (*this) << m_retshowname;
        (*this) << FT_STRING;
        (*this) << m_question;
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

void CImRspPeerVerifyConfig::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspPeerVerifyConfig::UnpackBody(string& strData)
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
        (*this) >> m_clientid;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_contactId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retlongid;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retshowname;
        try
        {
            if(num < 6) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_question;
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

PACKRETCODE CImRspPeerVerifyConfig::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqCheckAuthcode::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_CHECK_AUTHCODE;
    m_scHead.PackData(strData);
}

void CImReqCheckAuthcode::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_STRING;
        (*this) << m_sessionId;
        (*this) << FT_STRING;
        (*this) << m_authCode;
        (*this) << FT_UINT8;
        (*this) << m_mode;
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

void CImReqCheckAuthcode::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqCheckAuthcode::UnpackBody(string& strData)
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
        (*this) >> m_sessionId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_authCode;
        try
        {
            if(num < 3) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_mode;
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

PACKRETCODE CImReqCheckAuthcode::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspCheckAuthcode::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_CHECK_AUTHCODE;
    m_scHead.PackData(strData);
}

void CImRspCheckAuthcode::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT8;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_sessionId;
        (*this) << FT_STRING;
        (*this) << m_authCode;
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

void CImRspCheckAuthcode::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspCheckAuthcode::UnpackBody(string& strData)
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
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_sessionId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_authCode;
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

PACKRETCODE CImRspCheckAuthcode::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImNtfNeedAuthcode::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_NTF_NEED_AUTHCODE;
    m_scHead.PackData(strData);
}

void CImNtfNeedAuthcode::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        (*this) << m_origPacket;
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

void CImNtfNeedAuthcode::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImNtfNeedAuthcode::UnpackBody(string& strData)
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
        (*this) >> m_origPacket;
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

PACKRETCODE CImNtfNeedAuthcode::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqHelpLogin::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_HELP_LOGIN;
    m_scHead.PackData(strData);
}

void CImReqHelpLogin::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        WriteData(m_uid, 0, 64);
        (*this) << FT_UINT8;
        (*this) << m_status;
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

void CImReqHelpLogin::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqHelpLogin::UnpackBody(string& strData)
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
        ReadData(m_uid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_status;
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

PACKRETCODE CImReqHelpLogin::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

CPackData& operator<< ( CPackData& cPackData, const SRecChildId&  sRecChildId )
{
    uint8_t nFieldNum = 2;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData.WriteData(sRecChildId.m_childId, 0, 64);
    cPackData << FT_STRING;
    cPackData.WriteData(sRecChildId.m_childNick, 0, 32);

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SRecChildId&  sRecChildId )
{
    uint8_t num;
    cPackData >> num;
    if(num < 2) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData.ReadData(sRecChildId.m_childId, 64, 0);
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData.ReadData(sRecChildId.m_childNick, 32, 0);
    for(int i = 2; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CImRspHelpLogin::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_HELP_LOGIN;
    m_scHead.PackData(strData);
}

void CImRspHelpLogin::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)4;
        (*this) << FT_UINT8;
        (*this) << m_retcode;
        (*this) << FT_UINT8;
        (*this) << m_mulStatus;
        (*this) << FT_STRING;
        WriteData(m_parentUid, 0, 64);
        (*this) << (FIELDTYPE)(FT_VECTOR + 2);
        (*this) << FT_STRUCT;
        {
            uint16_t nLen = (uint16_t)m_childList.size();
            (*this) << nLen;
            VECTOR< SRecChildId >::const_iterator itr;
            for(itr = m_childList.cbegin(); itr != m_childList.cend(); ++itr)
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

void CImRspHelpLogin::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspHelpLogin::UnpackBody(string& strData)
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
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_mulStatus;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_parentUid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint16_t nSize;
            (*this) >> nSize;
            m_childList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SRecChildId tmpVal;
                (*this) >> tmpVal;
                m_childList.push_back(tmpVal);
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

PACKRETCODE CImRspHelpLogin::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqHelpChgSrvMode::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_HELP_CHG_SRV_MODE;
    m_scHead.PackData(strData);
}

void CImReqHelpChgSrvMode::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        WriteData(m_uid, 0, 64);
        (*this) << FT_UINT8;
        (*this) << m_status;
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

void CImReqHelpChgSrvMode::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqHelpChgSrvMode::UnpackBody(string& strData)
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
        ReadData(m_uid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_status;
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

PACKRETCODE CImReqHelpChgSrvMode::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspHelpChgSrvMode::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_HELP_CHG_SRV_MODE;
    m_scHead.PackData(strData);
}

void CImRspHelpChgSrvMode::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        WriteData(m_uid, 0, 64);
        (*this) << FT_UINT8;
        (*this) << m_retcode;
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

void CImRspHelpChgSrvMode::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspHelpChgSrvMode::UnpackBody(string& strData)
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
        ReadData(m_uid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
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

PACKRETCODE CImRspHelpChgSrvMode::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqHelpSetShareCid::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_HELP_SET_SHARE_CID;
    m_scHead.PackData(strData);
}

void CImReqHelpSetShareCid::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_STRING;
        WriteData(m_uid, 0, 64);
        (*this) << FT_STRING;
        WriteData(m_cid, 0, 64);
        (*this) << FT_UINT8;
        (*this) << m_type;
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

void CImReqHelpSetShareCid::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqHelpSetShareCid::UnpackBody(string& strData)
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
        ReadData(m_uid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_cid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
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

PACKRETCODE CImReqHelpSetShareCid::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspHelpSetShareCid::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_HELP_SET_SHARE_CID;
    m_scHead.PackData(strData);
}

void CImRspHelpSetShareCid::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        WriteData(m_uid, 0, 64);
        (*this) << FT_UINT8;
        (*this) << m_retcode;
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

void CImRspHelpSetShareCid::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspHelpSetShareCid::UnpackBody(string& strData)
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
        ReadData(m_uid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
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

PACKRETCODE CImRspHelpSetShareCid::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqHelpGetShareCid::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_HELP_GET_SHARE_CID;
    m_scHead.PackData(strData);
}

void CImReqHelpGetShareCid::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_STRING;
        WriteData(m_uid, 0, 64);
        (*this) << FT_STRING;
        WriteData(m_cid, 0, 64);
        (*this) << FT_UINT8;
        (*this) << m_type;
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

void CImReqHelpGetShareCid::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqHelpGetShareCid::UnpackBody(string& strData)
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
        ReadData(m_uid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_cid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
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

PACKRETCODE CImReqHelpGetShareCid::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspHelpGetShareCid::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_HELP_GET_SHARE_CID;
    m_scHead.PackData(strData);
}

void CImRspHelpGetShareCid::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)4;
        (*this) << FT_STRING;
        WriteData(m_uid, 0, 64);
        (*this) << FT_STRING;
        WriteData(m_cid, 0, 64);
        (*this) << FT_UINT8;
        (*this) << m_retcode;
        (*this) << FT_UINT8;
        (*this) << m_shared;
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

void CImRspHelpGetShareCid::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspHelpGetShareCid::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_uid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_cid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_shared;
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

PACKRETCODE CImRspHelpGetShareCid::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqHelpGetChildOnline::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_HELP_GET_CHILD_ONLINE;
    m_scHead.PackData(strData);
}

void CImReqHelpGetChildOnline::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        WriteData(m_uid, 0, 64);
        (*this) << FT_STRING;
        WriteData(m_cid, 0, 64);
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

void CImReqHelpGetChildOnline::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqHelpGetChildOnline::UnpackBody(string& strData)
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
        ReadData(m_uid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_cid, 64, 0);
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

PACKRETCODE CImReqHelpGetChildOnline::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspHelpGetChildOnline::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_HELP_GET_CHILD_ONLINE;
    m_scHead.PackData(strData);
}

void CImRspHelpGetChildOnline::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)5;
        (*this) << FT_STRING;
        WriteData(m_uid, 0, 64);
        (*this) << FT_STRING;
        WriteData(m_cid, 0, 64);
        (*this) << FT_UINT8;
        (*this) << m_retcode;
        (*this) << FT_UINT8;
        (*this) << m_basic;
        (*this) << FT_STRING;
        WriteData(m_statusdef, 0, 64);
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

void CImRspHelpGetChildOnline::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspHelpGetChildOnline::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_uid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_cid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_basic;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_statusdef, 64, 0);
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

PACKRETCODE CImRspHelpGetChildOnline::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqHelpGetOnlinechilds::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_HELP_GET_ONLINECHILDS;
    m_scHead.PackData(strData);
}

void CImReqHelpGetOnlinechilds::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        WriteData(m_uid, 0, 64);
        (*this) << FT_UINT8;
        (*this) << m_status;
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

void CImReqHelpGetOnlinechilds::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqHelpGetOnlinechilds::UnpackBody(string& strData)
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
        ReadData(m_uid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_status;
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

PACKRETCODE CImReqHelpGetOnlinechilds::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspHelpGetOnlinechilds::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_HELP_GET_ONLINECHILDS;
    m_scHead.PackData(strData);
}

void CImRspHelpGetOnlinechilds::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT8;
        (*this) << m_retcode;
        (*this) << (FIELDTYPE)(FT_VECTOR + 2);
        (*this) << FT_STRUCT;
        {
            uint16_t nLen = (uint16_t)m_childList.size();
            (*this) << nLen;
            VECTOR< SRecChildId >::const_iterator itr;
            for(itr = m_childList.cbegin(); itr != m_childList.cend(); ++itr)
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

void CImRspHelpGetOnlinechilds::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspHelpGetOnlinechilds::UnpackBody(string& strData)
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
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint16_t nSize;
            (*this) >> nSize;
            m_childList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SRecChildId tmpVal;
                (*this) >> tmpVal;
                m_childList.push_back(tmpVal);
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

PACKRETCODE CImRspHelpGetOnlinechilds::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqHelpGetServices::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_HELP_GET_SERVICES;
    m_scHead.PackData(strData);
}

void CImReqHelpGetServices::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        WriteData(m_uid, 0, 64);
        (*this) << FT_STRING;
        WriteData(m_fid, 0, 64);
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

void CImReqHelpGetServices::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqHelpGetServices::UnpackBody(string& strData)
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
        ReadData(m_uid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_fid, 64, 0);
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

PACKRETCODE CImReqHelpGetServices::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspHelpGetServices::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_HELP_GET_SERVICES;
    m_scHead.PackData(strData);
}

void CImRspHelpGetServices::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT8;
        (*this) << m_retcode;
        (*this) << FT_VECTOR;
        (*this) << FT_UINT32;
        {
            uint32_t nLen = m_serviceList.size();
            (*this) << nLen;
            VECTOR< uint32_t >::const_iterator itr;
            for(itr = m_serviceList.cbegin(); itr != m_serviceList.cend(); ++itr)
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

void CImRspHelpGetServices::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspHelpGetServices::UnpackBody(string& strData)
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
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_serviceList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                uint32_t tmpVal;
                (*this) >> tmpVal;
                m_serviceList.push_back(tmpVal);
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

PACKRETCODE CImRspHelpGetServices::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqHelpGetBindTo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_HELP_GET_BIND_TO;
    m_scHead.PackData(strData);
}

void CImReqHelpGetBindTo::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        WriteData(m_uid, 0, 64);
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

void CImReqHelpGetBindTo::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqHelpGetBindTo::UnpackBody(string& strData)
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
        ReadData(m_uid, 64, 0);
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

PACKRETCODE CImReqHelpGetBindTo::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspHelpGetBindTo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_HELP_GET_BIND_TO;
    m_scHead.PackData(strData);
}

void CImRspHelpGetBindTo::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT8;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        WriteData(m_uidBinded, 0, 64);
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

void CImRspHelpGetBindTo::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspHelpGetBindTo::UnpackBody(string& strData)
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
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_uidBinded, 64, 0);
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

PACKRETCODE CImRspHelpGetBindTo::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqHelpChgServiceNum::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_HELP_CHG_SERVICE_NUM;
    m_scHead.PackData(strData);
}

void CImReqHelpChgServiceNum::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)6;
        (*this) << FT_STRING;
        WriteData(m_uid, 0, 64);
        (*this) << FT_STRING;
        WriteData(m_childId, 0, 64);
        (*this) << FT_STRING;
        WriteData(m_contactId, 0, 64);
        (*this) << FT_UINT8;
        (*this) << m_type;
        (*this) << FT_UINT8;
        (*this) << m_localNum;
        (*this) << FT_UINT32;
        (*this) << m_localTime;
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

void CImReqHelpChgServiceNum::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqHelpChgServiceNum::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_uid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_childId, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_contactId, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_localNum;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_localTime;
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

PACKRETCODE CImReqHelpChgServiceNum::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspHelpChgServiceNum::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_HELP_CHG_SERVICE_NUM;
    m_scHead.PackData(strData);
}

void CImRspHelpChgServiceNum::PackBody(string& strData)
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
        (*this) << m_message;
        (*this) << FT_STRING;
        WriteData(m_uid, 0, 64);
        (*this) << FT_STRING;
        WriteData(m_childId, 0, 64);
        (*this) << FT_STRING;
        WriteData(m_contactId, 0, 64);
        (*this) << FT_UINT8;
        (*this) << m_serviceNum;
        (*this) << FT_UINT32;
        (*this) << m_serviceTime;
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

void CImRspHelpChgServiceNum::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspHelpChgServiceNum::UnpackBody(string& strData)
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
        (*this) >> m_message;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_uid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_childId, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_contactId, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_serviceNum;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_serviceTime;
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

PACKRETCODE CImRspHelpChgServiceNum::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqSendWatchInfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_SEND_WATCH_INFO;
    m_scHead.PackData(strData);
}

void CImReqSendWatchInfo::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT8;
        (*this) << m_type;
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

void CImReqSendWatchInfo::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqSendWatchInfo::UnpackBody(string& strData)
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
        (*this) >> m_type;
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

PACKRETCODE CImReqSendWatchInfo::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImNtfWatchInfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_NTF_WATCH_INFO;
    m_scHead.PackData(strData);
}

void CImNtfWatchInfo::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_STRING;
        (*this) << m_userId;
        (*this) << FT_UINT8;
        (*this) << m_type;
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

void CImNtfWatchInfo::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImNtfWatchInfo::UnpackBody(string& strData)
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
        (*this) >> m_userId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
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

PACKRETCODE CImNtfWatchInfo::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImNtfRefreshContact::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_NTF_REFRESH_CONTACT;
    m_scHead.PackData(strData);
}

void CImNtfRefreshContact::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)4;
        (*this) << FT_UINT8;
        (*this) << m_type;
        (*this) << FT_STRING;
        (*this) << m_contactId;
        (*this) << FT_STRING;
        (*this) << m_nickName;
        (*this) << FT_INT64;
        (*this) << m_groupId;
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

void CImNtfRefreshContact::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImNtfRefreshContact::UnpackBody(string& strData)
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
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_contactId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_nickName;
        try
        {
            if(num < 4) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_INT64) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_groupId;
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

PACKRETCODE CImNtfRefreshContact::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImNtfFeeds::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_NTF_FEEDS;
    m_scHead.PackData(strData);
}

void CImNtfFeeds::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)4;
        (*this) << FT_STRING;
        WriteData(m_site, 0, 8);
        (*this) << FT_STRING;
        (*this) << m_fromId;
        (*this) << FT_UINT32;
        (*this) << m_createTime;
        (*this) << FT_STRING;
        (*this) << m_content;
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

void CImNtfFeeds::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImNtfFeeds::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_site, 8, 0);
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_fromId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_createTime;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_content;
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

PACKRETCODE CImNtfFeeds::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImNtfUserSnsinfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_NTF_USER_SNSINFO;
    m_scHead.PackData(strData);
}

void CImNtfUserSnsinfo::PackBody(string& strData)
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
        (*this) << FT_UINT8;
        (*this) << m_type;
        (*this) << FT_MAP;
        (*this) << FT_STRING;
        (*this) << FT_STRING;
        {
            uint8_t nSize = m_info.size();
            (*this) << nSize;
            map< string,string >::const_iterator itr;
            for(itr = m_info.begin(); itr != m_info.end(); ++itr)
            {
                (*this) << itr->first;
                (*this) << itr->second;
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

void CImNtfUserSnsinfo::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImNtfUserSnsinfo::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
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
                m_info[key] = value;
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

PACKRETCODE CImNtfUserSnsinfo::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqGetSipSessionid::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_GET_SIP_SESSIONID;
    m_scHead.PackData(strData);
}

void CImReqGetSipSessionid::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        (*this) << m_appId;
        (*this) << FT_STRING;
        (*this) << m_type;
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

void CImReqGetSipSessionid::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqGetSipSessionid::UnpackBody(string& strData)
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
        (*this) >> m_appId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
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

PACKRETCODE CImReqGetSipSessionid::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspGetSipSessionid::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_GET_SIP_SESSIONID;
    m_scHead.PackData(strData);
}

void CImRspGetSipSessionid::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)5;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_appId;
        (*this) << FT_STRING;
        (*this) << m_type;
        (*this) << FT_STRING;
        (*this) << m_userId;
        (*this) << FT_STRING;
        (*this) << m_sessionId;
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

void CImRspGetSipSessionid::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspGetSipSessionid::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_appId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_userId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_sessionId;
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

PACKRETCODE CImRspGetSipSessionid::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqHelpGetBuddyStatus::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_HELP_GET_BUDDY_STATUS;
    m_scHead.PackData(strData);
}

void CImReqHelpGetBuddyStatus::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        WriteData(m_uid, 0, 64);
        (*this) << FT_UINT8;
        (*this) << m_status;
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

void CImReqHelpGetBuddyStatus::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqHelpGetBuddyStatus::UnpackBody(string& strData)
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
        ReadData(m_uid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_status;
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

PACKRETCODE CImReqHelpGetBuddyStatus::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

CPackData& operator<< ( CPackData& cPackData, const SRecChildIdStatus&  sRecChildIdStatus )
{
    uint8_t nFieldNum = 6;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData.WriteData(sRecChildIdStatus.m_childId, 0, 64);
    cPackData << FT_UINT8;
    cPackData << sRecChildIdStatus.m_onlineStatus;
    cPackData << FT_UINT8;
    cPackData << sRecChildIdStatus.m_serviceStatus;
    cPackData << FT_UINT16;
    cPackData << sRecChildIdStatus.m_reserved1;
    cPackData << FT_UINT16;
    cPackData << sRecChildIdStatus.m_reserved2;
    cPackData << FT_UINT16;
    cPackData << sRecChildIdStatus.m_reserved3;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SRecChildIdStatus&  sRecChildIdStatus )
{
    uint8_t num;
    cPackData >> num;
    if(num < 6) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData.ReadData(sRecChildIdStatus.m_childId, 64, 0);
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sRecChildIdStatus.m_onlineStatus;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sRecChildIdStatus.m_serviceStatus;
    cPackData >> field;
    if(field.m_baseType != FT_UINT16) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sRecChildIdStatus.m_reserved1;
    cPackData >> field;
    if(field.m_baseType != FT_UINT16) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sRecChildIdStatus.m_reserved2;
    cPackData >> field;
    if(field.m_baseType != FT_UINT16) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sRecChildIdStatus.m_reserved3;
    for(int i = 6; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CImRspHelpGetBuddyStatus::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_HELP_GET_BUDDY_STATUS;
    m_scHead.PackData(strData);
}

void CImRspHelpGetBuddyStatus::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT8;
        (*this) << m_retcode;
        (*this) << (FIELDTYPE)(FT_VECTOR + 2);
        (*this) << FT_STRUCT;
        {
            uint16_t nLen = (uint16_t)m_childList.size();
            (*this) << nLen;
            VECTOR< SRecChildIdStatus >::const_iterator itr;
            for(itr = m_childList.cbegin(); itr != m_childList.cend(); ++itr)
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

void CImRspHelpGetBuddyStatus::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspHelpGetBuddyStatus::UnpackBody(string& strData)
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
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint16_t nSize;
            (*this) >> nSize;
            m_childList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SRecChildIdStatus tmpVal;
                (*this) >> tmpVal;
                m_childList.push_back(tmpVal);
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

PACKRETCODE CImRspHelpGetBuddyStatus::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

CPackData& operator<< ( CPackData& cPackData, const SRecentNode&  sRecentNode )
{
    uint8_t nFieldNum = 5;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sRecentNode.m_contactId;
    cPackData << FT_UINT32;
    cPackData << sRecentNode.m_sendTime;
    cPackData << FT_UINT32;
    cPackData << sRecentNode.m_recvTime;
    cPackData << FT_UINT32;
    cPackData << sRecentNode.m_recvFlag;
    cPackData << FT_UINT32;
    cPackData << sRecentNode.m_sendFlag;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SRecentNode&  sRecentNode )
{
    uint8_t num;
    cPackData >> num;
    if(num < 5) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sRecentNode.m_contactId;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sRecentNode.m_sendTime;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sRecentNode.m_recvTime;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sRecentNode.m_recvFlag;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sRecentNode.m_sendFlag;
    for(int i = 5; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CImNtfRecent::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_NTF_RECENT;
    m_scHead.PackData(strData);
}

void CImNtfRecent::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_timeStamp;
        (*this) << FT_UINT32;
        (*this) << m_opType;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_recentList.size();
            (*this) << nLen;
            VECTOR< SRecentNode >::const_iterator itr;
            for(itr = m_recentList.cbegin(); itr != m_recentList.cend(); ++itr)
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

void CImNtfRecent::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImNtfRecent::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timeStamp;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_opType;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_recentList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SRecentNode tmpVal;
                (*this) >> tmpVal;
                m_recentList.push_back(tmpVal);
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

PACKRETCODE CImNtfRecent::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqAddcontactNew::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_ADDCONTACT_NEW;
    m_scHead.PackData(strData);
}

void CImReqAddcontactNew::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)4;
        (*this) << FT_STRUCT;
        (*this) << m_contact;
        (*this) << FT_UINT8;
        (*this) << m_type;
        (*this) << FT_STRING;
        (*this) << m_message;
        (*this) << FT_UINT32;
        (*this) << m_supportFlag;
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

void CImReqAddcontactNew::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqAddcontactNew::UnpackBody(string& strData)
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
        (*this) >> m_contact;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_message;
        try
        {
            if(num < 4) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_supportFlag;
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

PACKRETCODE CImReqAddcontactNew::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspAddcontactNew::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_ADDCONTACT_NEW;
    m_scHead.PackData(strData);
}

void CImRspAddcontactNew::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)7;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_UINT8;
        (*this) << m_type;
        (*this) << FT_STRUCT;
        (*this) << m_contact;
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
        (*this) << FT_STRING;
        (*this) << m_companyname;
        (*this) << FT_STRING;
        (*this) << m_question;
        (*this) << FT_STRING;
        (*this) << m_answer;
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

void CImRspAddcontactNew::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspAddcontactNew::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_STRUCT) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_contact;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_companyname;
        try
        {
            if(num < 6) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_question;
            if(num < 7) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_answer;
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

PACKRETCODE CImRspAddcontactNew::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqAddcntackNew::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_ADDCNTACK_NEW;
    m_scHead.PackData(strData);
}

void CImReqAddcntackNew::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)5;
        (*this) << FT_UINT8;
        (*this) << m_opcode;
        (*this) << FT_STRING;
        (*this) << m_contactId;
        (*this) << FT_INT64;
        (*this) << m_groupId;
        (*this) << FT_STRING;
        (*this) << m_nickName;
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

void CImReqAddcntackNew::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqAddcntackNew::UnpackBody(string& strData)
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
        (*this) >> m_opcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_contactId;
        (*this) >> field;
        if(field.m_baseType != FT_INT64) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_groupId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_nickName;
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

PACKRETCODE CImReqAddcntackNew::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspAddcntackNew::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_ADDCNTACK_NEW;
    m_scHead.PackData(strData);
}

void CImRspAddcntackNew::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)5;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_UINT8;
        (*this) << m_opcode;
        (*this) << FT_INT64;
        (*this) << m_groupId;
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
        (*this) << FT_STRING;
        (*this) << m_contactId;
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

void CImRspAddcntackNew::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspAddcntackNew::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_opcode;
        (*this) >> field;
        if(field.m_baseType != FT_INT64) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_groupId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_contactId;
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

PACKRETCODE CImRspAddcntackNew::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqSearchuser::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_SEARCHUSER;
    m_scHead.PackData(strData);
}

void CImReqSearchuser::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)5;
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
        (*this) << FT_UINT8;
        (*this) << m_type;
        (*this) << FT_STRING;
        (*this) << m_uid;
        (*this) << FT_UINT8;
        (*this) << m_syncacc;
        (*this) << FT_STRING;
        (*this) << m_reserve;
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

void CImReqSearchuser::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqSearchuser::UnpackBody(string& strData)
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
        (*this) >> m_timestamp;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_uid;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_syncacc;
        try
        {
            if(num < 5) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_reserve;
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

PACKRETCODE CImReqSearchuser::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

CPackData& operator<< ( CPackData& cPackData, const SSearchUserinfo&  sSearchUserinfo )
{
    uint8_t nFieldNum = 6;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sSearchUserinfo.m_contactId;
    cPackData << FT_STRING;
    cPackData << sSearchUserinfo.m_nickName;
    cPackData << FT_UINT8;
    cPackData << sSearchUserinfo.m_age;
    cPackData << FT_UINT8;
    cPackData << sSearchUserinfo.m_gender;
    cPackData << FT_STRING;
    cPackData << sSearchUserinfo.m_city;
    cPackData << FT_UINT8;
    cPackData << sSearchUserinfo.m_basicStatus;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SSearchUserinfo&  sSearchUserinfo )
{
    uint8_t num;
    cPackData >> num;
    if(num < 6) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sSearchUserinfo.m_contactId;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sSearchUserinfo.m_nickName;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sSearchUserinfo.m_age;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sSearchUserinfo.m_gender;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sSearchUserinfo.m_city;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sSearchUserinfo.m_basicStatus;
    for(int i = 6; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CImRspSearchuser::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_SEARCHUSER;
    m_scHead.PackData(strData);
}

void CImRspSearchuser::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_userList.size();
            (*this) << nLen;
            VECTOR< SSearchUserinfo >::const_iterator itr;
            for(itr = m_userList.cbegin(); itr != m_userList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
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

void CImRspSearchuser::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspSearchuser::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_userList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SSearchUserinfo tmpVal;
                (*this) >> tmpVal;
                m_userList.push_back(tmpVal);
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
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

PACKRETCODE CImRspSearchuser::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqSearchuserex::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_SEARCHUSEREX;
    m_scHead.PackData(strData);
}

void CImReqSearchuserex::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)8;
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
        (*this) << FT_STRING;
        (*this) << m_site;
        (*this) << FT_STRING;
        (*this) << m_country;
        (*this) << FT_STRING;
        (*this) << m_province;
        (*this) << FT_STRING;
        (*this) << m_city;
        (*this) << FT_UINT8;
        (*this) << m_gender;
        (*this) << FT_UINT32;
        (*this) << m_age;
        (*this) << FT_STRING;
        (*this) << m_job;
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

void CImReqSearchuserex::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqSearchuserex::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_site;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_country;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_province;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_city;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_gender;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_age;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_job;
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

PACKRETCODE CImReqSearchuserex::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

CPackData& operator<< ( CPackData& cPackData, const SEChildId&  sEChildId )
{
    uint8_t nFieldNum = 8;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData.WriteData(sEChildId.m_childId, 0, 64);
    cPackData << FT_STRING;
    cPackData.WriteData(sEChildId.m_childNick, 0, 32);
    cPackData << FT_UINT8;
    cPackData << sEChildId.m_basicStatus;
    cPackData << FT_UINT8;
    cPackData << sEChildId.m_predefStatus;
    cPackData << FT_UINT8;
    cPackData << sEChildId.m_onServer;
    cPackData << FT_UINT16;
    cPackData << sEChildId.m_maxService;
    cPackData << FT_UINT16;
    cPackData << sEChildId.m_curService;
    cPackData << FT_UINT16;
    cPackData << sEChildId.m_reserved;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SEChildId&  sEChildId )
{
    uint8_t num;
    cPackData >> num;
    if(num < 8) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData.ReadData(sEChildId.m_childId, 64, 0);
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData.ReadData(sEChildId.m_childNick, 32, 0);
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sEChildId.m_basicStatus;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sEChildId.m_predefStatus;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sEChildId.m_onServer;
    cPackData >> field;
    if(field.m_baseType != FT_UINT16) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sEChildId.m_maxService;
    cPackData >> field;
    if(field.m_baseType != FT_UINT16) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sEChildId.m_curService;
    cPackData >> field;
    if(field.m_baseType != FT_UINT16) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sEChildId.m_reserved;
    for(int i = 8; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CImReqEhelpLogin::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_EHELP_LOGIN;
    m_scHead.PackData(strData);
}

void CImReqEhelpLogin::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)4;
        (*this) << FT_STRING;
        WriteData(m_uid, 0, 64);
        (*this) << FT_STRING;
        WriteData(m_fid, 0, 64);
        (*this) << FT_UINT8;
        (*this) << m_reserved;
        (*this) << FT_UINT8;
        (*this) << m_status;
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

void CImReqEhelpLogin::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqEhelpLogin::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_uid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_fid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_reserved;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_status;
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

PACKRETCODE CImReqEhelpLogin::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspEhelpLogin::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_EHELP_LOGIN;
    m_scHead.PackData(strData);
}

void CImRspEhelpLogin::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT8;
        (*this) << m_retcode;
        (*this) << FT_UINT8;
        (*this) << m_mulStatus;
        (*this) << FT_STRING;
        WriteData(m_parentUid, 0, 64);
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

void CImRspEhelpLogin::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspEhelpLogin::UnpackBody(string& strData)
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
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_mulStatus;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_parentUid, 64, 0);
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

PACKRETCODE CImRspEhelpLogin::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqEhelpGetBuddys::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_EHELP_GET_BUDDYS;
    m_scHead.PackData(strData);
}

void CImReqEhelpGetBuddys::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        WriteData(m_uid, 0, 64);
        (*this) << FT_STRING;
        WriteData(m_fid, 0, 64);
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

void CImReqEhelpGetBuddys::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqEhelpGetBuddys::UnpackBody(string& strData)
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
        ReadData(m_uid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_fid, 64, 0);
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

PACKRETCODE CImReqEhelpGetBuddys::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspEhelpGetBuddys::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_EHELP_GET_BUDDYS;
    m_scHead.PackData(strData);
}

void CImRspEhelpGetBuddys::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT8;
        (*this) << m_retcode;
        (*this) << (FIELDTYPE)(FT_VECTOR + 2);
        (*this) << FT_STRUCT;
        {
            uint16_t nLen = (uint16_t)m_childList.size();
            (*this) << nLen;
            VECTOR< SEChildId >::const_iterator itr;
            for(itr = m_childList.cbegin(); itr != m_childList.cend(); ++itr)
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

void CImRspEhelpGetBuddys::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspEhelpGetBuddys::UnpackBody(string& strData)
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
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint16_t nSize;
            (*this) >> nSize;
            m_childList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SEChildId tmpVal;
                (*this) >> tmpVal;
                m_childList.push_back(tmpVal);
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

PACKRETCODE CImRspEhelpGetBuddys::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqEhelpSendMsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_EHELP_SEND_MSG;
    m_scHead.PackData(strData);
}

void CImReqEhelpSendMsg::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)7;
        (*this) << FT_STRING;
        WriteData(m_uid, 0, 64);
        (*this) << FT_STRING;
        WriteData(m_fid, 0, 64);
        (*this) << FT_STRING;
        WriteData(m_targetId, 0, 64);
        (*this) << FT_UINT8;
        (*this) << m_type;
        (*this) << FT_STRING;
        (*this) << m_message;
        (*this) << FT_UINT16;
        (*this) << m_cmdType;
        (*this) << FT_UINT32;
        (*this) << m_servNum;
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

void CImReqEhelpSendMsg::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqEhelpSendMsg::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_uid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_fid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_targetId, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_message;
        (*this) >> field;
        if(field.m_baseType != FT_UINT16) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_cmdType;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_servNum;
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

PACKRETCODE CImReqEhelpSendMsg::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspEhelpSendMsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_EHELP_SEND_MSG;
    m_scHead.PackData(strData);
}

void CImRspEhelpSendMsg::PackBody(string& strData)
{
}

void CImRspEhelpSendMsg::PackData(string& strData, const string& strKey)
{
    PackHead(strData);
}

PACKRETCODE CImRspEhelpSendMsg::UnpackBody(string& strData)
{
    return PACK_RIGHT;
}

PACKRETCODE CImRspEhelpSendMsg::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    return PACK_RIGHT;
}

void CImReqEhelpSendCmd::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_EHELP_SEND_CMD;
    m_scHead.PackData(strData);
}

void CImReqEhelpSendCmd::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)6;
        (*this) << FT_STRING;
        WriteData(m_uid, 0, 64);
        (*this) << FT_STRING;
        WriteData(m_fid, 0, 64);
        (*this) << FT_STRING;
        WriteData(m_targetId, 0, 64);
        (*this) << FT_UINT8;
        (*this) << m_type;
        (*this) << FT_UINT8;
        (*this) << m_cmdId;
        (*this) << FT_STRING;
        (*this) << m_xmlCmd;
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

void CImReqEhelpSendCmd::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqEhelpSendCmd::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_uid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_fid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_targetId, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_cmdId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_xmlCmd;
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

PACKRETCODE CImReqEhelpSendCmd::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspEhelpSendCmd::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_EHELP_SEND_CMD;
    m_scHead.PackData(strData);
}

void CImRspEhelpSendCmd::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_UINT8;
        (*this) << m_retcode;
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

void CImRspEhelpSendCmd::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspEhelpSendCmd::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
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

PACKRETCODE CImRspEhelpSendCmd::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqEhelpChgSrvMode::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_EHELP_CHG_SRV_MODE;
    m_scHead.PackData(strData);
}

void CImReqEhelpChgSrvMode::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_STRING;
        WriteData(m_uid, 0, 64);
        (*this) << FT_STRING;
        WriteData(m_fid, 0, 64);
        (*this) << FT_UINT8;
        (*this) << m_status;
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

void CImReqEhelpChgSrvMode::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqEhelpChgSrvMode::UnpackBody(string& strData)
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
        ReadData(m_uid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_fid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_status;
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

PACKRETCODE CImReqEhelpChgSrvMode::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspEhelpChgSrvMode::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_EHELP_CHG_SRV_MODE;
    m_scHead.PackData(strData);
}

void CImRspEhelpChgSrvMode::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_STRING;
        WriteData(m_uid, 0, 64);
        (*this) << FT_STRING;
        WriteData(m_fid, 0, 64);
        (*this) << FT_UINT8;
        (*this) << m_retcode;
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

void CImRspEhelpChgSrvMode::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspEhelpChgSrvMode::UnpackBody(string& strData)
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
        ReadData(m_uid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_fid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
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

PACKRETCODE CImRspEhelpChgSrvMode::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqEhelpForwardUser::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_EHELP_FORWARD_USER;
    m_scHead.PackData(strData);
}

void CImReqEhelpForwardUser::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)5;
        (*this) << FT_STRING;
        WriteData(m_uid, 0, 64);
        (*this) << FT_STRING;
        WriteData(m_fid, 0, 64);
        (*this) << FT_STRING;
        WriteData(m_contactId, 0, 64);
        (*this) << FT_STRING;
        WriteData(m_toChildId, 0, 64);
        (*this) << FT_UINT8;
        (*this) << m_type;
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

void CImReqEhelpForwardUser::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqEhelpForwardUser::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_uid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_fid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_contactId, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_toChildId, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
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

PACKRETCODE CImReqEhelpForwardUser::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspEhelpForwardUser::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_EHELP_FORWARD_USER;
    m_scHead.PackData(strData);
}

void CImRspEhelpForwardUser::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_UINT8;
        (*this) << m_retcode;
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

void CImRspEhelpForwardUser::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspEhelpForwardUser::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
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

PACKRETCODE CImRspEhelpForwardUser::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqEhelpCloseSession::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_EHELP_CLOSE_SESSION;
    m_scHead.PackData(strData);
}

void CImReqEhelpCloseSession::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)6;
        (*this) << FT_STRING;
        WriteData(m_uid, 0, 64);
        (*this) << FT_STRING;
        WriteData(m_fid, 0, 64);
        (*this) << FT_STRING;
        WriteData(m_contactId, 0, 64);
        (*this) << FT_UINT8;
        (*this) << m_type;
        (*this) << FT_UINT8;
        (*this) << m_localNum;
        (*this) << FT_UINT32;
        (*this) << m_localTime;
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

void CImReqEhelpCloseSession::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqEhelpCloseSession::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_uid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_fid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_contactId, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_localNum;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_localTime;
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

PACKRETCODE CImReqEhelpCloseSession::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspEhelpCloseSession::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_EHELP_CLOSE_SESSION;
    m_scHead.PackData(strData);
}

void CImRspEhelpCloseSession::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)7;
        (*this) << FT_UINT8;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_message;
        (*this) << FT_STRING;
        WriteData(m_uid, 0, 64);
        (*this) << FT_STRING;
        WriteData(m_fid, 0, 64);
        (*this) << FT_STRING;
        WriteData(m_contactId, 0, 64);
        (*this) << FT_UINT8;
        (*this) << m_serviceNum;
        (*this) << FT_UINT32;
        (*this) << m_serviceTime;
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

void CImRspEhelpCloseSession::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspEhelpCloseSession::UnpackBody(string& strData)
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
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_message;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_uid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_fid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_contactId, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_serviceNum;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_serviceTime;
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

PACKRETCODE CImRspEhelpCloseSession::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImReqEhelpGetForward::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_EHELP_GET_FORWARD;
    m_scHead.PackData(strData);
}

void CImReqEhelpGetForward::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        WriteData(m_uid, 0, 64);
        (*this) << FT_STRING;
        WriteData(m_fid, 0, 64);
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

void CImReqEhelpGetForward::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImReqEhelpGetForward::UnpackBody(string& strData)
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
        ReadData(m_uid, 64, 0);
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        ReadData(m_fid, 64, 0);
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

PACKRETCODE CImReqEhelpGetForward::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspEhelpGetForward::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_EHELP_GET_FORWARD;
    m_scHead.PackData(strData);
}

void CImRspEhelpGetForward::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT8;
        (*this) << m_retcode;
        (*this) << (FIELDTYPE)(FT_VECTOR + 2);
        (*this) << FT_STRUCT;
        {
            uint16_t nLen = (uint16_t)m_childList.size();
            (*this) << nLen;
            VECTOR< SEChildId >::const_iterator itr;
            for(itr = m_childList.cbegin(); itr != m_childList.cend(); ++itr)
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

void CImRspEhelpGetForward::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspEhelpGetForward::UnpackBody(string& strData)
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
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint16_t nSize;
            (*this) >> nSize;
            m_childList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SEChildId tmpVal;
                (*this) >> tmpVal;
                m_childList.push_back(tmpVal);
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

PACKRETCODE CImRspEhelpGetForward::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImRspEhelpNotifyMsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_EHELP_NOTIFY_MSG;
    m_scHead.PackData(strData);
}

void CImRspEhelpNotifyMsg::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)6;
        (*this) << FT_STRING;
        (*this) << m_fId;
        (*this) << FT_STRING;
        (*this) << m_sendId;
        (*this) << FT_UINT32;
        (*this) << m_sendTime;
        (*this) << FT_STRING;
        (*this) << m_message;
        (*this) << FT_UINT8;
        (*this) << m_serverType;
        (*this) << FT_UINT16;
        (*this) << m_cmdType;
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

void CImRspEhelpNotifyMsg::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspEhelpNotifyMsg::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_fId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_sendId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_sendTime;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_message;
        try
        {
            if(num < 5) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_serverType;
            if(num < 6) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_UINT16) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_cmdType;
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

PACKRETCODE CImRspEhelpNotifyMsg::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CImNtfSystemmapmessage::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_NTF_SYSTEMMAPMESSAGE;
    m_scHead.PackData(strData);
}

void CImNtfSystemmapmessage::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_sysId;
        (*this) << FT_MAP;
        (*this) << FT_STRING;
        (*this) << FT_STRING;
        {
            uint8_t nSize = m_message.size();
            (*this) << nSize;
            map< string,string >::const_iterator itr;
            for(itr = m_message.begin(); itr != m_message.end(); ++itr)
            {
                (*this) << itr->first;
                (*this) << itr->second;
            }
        }
        (*this) << FT_STRING;
        (*this) << m_extmessage;
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

void CImNtfSystemmapmessage::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImNtfSystemmapmessage::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_sysId;
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
                m_message[key] = value;
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_extmessage;
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

PACKRETCODE CImNtfSystemmapmessage::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

