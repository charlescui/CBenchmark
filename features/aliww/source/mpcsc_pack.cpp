/*---------------------------------------------------------------------------
// Filename:        mpcsc_pack.cpp
// Date:            2011-01-30 12:50:22
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#include "mpcsc_pack.h"

void CImReqCreatechatroom::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_REQ_CREATECHATROOM;
    m_scHead.PackData(strData);
}

void CImReqCreatechatroom::PackBody(string& strData)
{
}

void CImReqCreatechatroom::PackData(string& strData, const string& strKey)
{
    PackHead(strData);
}

PACKRETCODE CImReqCreatechatroom::UnpackBody(string& strData)
{
    return PACK_RIGHT;
}

PACKRETCODE CImReqCreatechatroom::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    return PACK_RIGHT;
}

void CImRspCreatechatroom::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = IM_RSP_CREATECHATROOM;
    m_scHead.PackData(strData);
}

void CImRspCreatechatroom::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)5;
        (*this) << FT_UINT8;
        (*this) << m_retcode;
        (*this) << FT_UINT32;
        (*this) << m_roomId;
        (*this) << FT_STRING;
        (*this) << m_password;
        (*this) << FT_STRING;
        (*this) << m_mpcsIp;
        (*this) << FT_UINT16;
        (*this) << m_port;
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

void CImRspCreatechatroom::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CImRspCreatechatroom::UnpackBody(string& strData)
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
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_roomId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_password;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_mpcsIp;
        (*this) >> field;
        if(field.m_baseType != FT_UINT16) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_port;
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

PACKRETCODE CImRspCreatechatroom::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CMpcsReqJoinchatroom::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = MPCS_REQ_JOINCHATROOM;
    m_scHead.PackData(strData);
}

void CMpcsReqJoinchatroom::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)4;
        (*this) << FT_STRING;
        (*this) << m_userId;
        (*this) << FT_STRING;
        (*this) << m_password;
        (*this) << FT_STRING;
        (*this) << m_version;
        (*this) << FT_STRING;
        (*this) << m_fromId;
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

void CMpcsReqJoinchatroom::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CMpcsReqJoinchatroom::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_password;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_version;
        try
        {
            if(num < 4) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_fromId;
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

PACKRETCODE CMpcsReqJoinchatroom::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CMpcsRspJoinchatroom::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = MPCS_RSP_JOINCHATROOM;
    m_scHead.PackData(strData);
}

void CMpcsRspJoinchatroom::PackBody(string& strData)
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
        (*this) << FT_UINT32;
        (*this) << m_roomId;
        (*this) << FT_UINT32;
        (*this) << m_maxMember;
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

void CMpcsRspJoinchatroom::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CMpcsRspJoinchatroom::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_roomId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_maxMember;
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

PACKRETCODE CMpcsRspJoinchatroom::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CMpcsReqExitchatroom::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = MPCS_REQ_EXITCHATROOM;
    m_scHead.PackData(strData);
}

void CMpcsReqExitchatroom::PackBody(string& strData)
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

void CMpcsReqExitchatroom::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CMpcsReqExitchatroom::UnpackBody(string& strData)
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

PACKRETCODE CMpcsReqExitchatroom::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CMpcsRspExitchatroom::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = MPCS_RSP_EXITCHATROOM;
    m_scHead.PackData(strData);
}

void CMpcsRspExitchatroom::PackBody(string& strData)
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
        (*this) << FT_UINT32;
        (*this) << m_roomId;
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

void CMpcsRspExitchatroom::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CMpcsRspExitchatroom::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_roomId;
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

PACKRETCODE CMpcsRspExitchatroom::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CMpcsReqGetchatroomusers::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = MPCS_REQ_GETCHATROOMUSERS;
    m_scHead.PackData(strData);
}

void CMpcsReqGetchatroomusers::PackBody(string& strData)
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

void CMpcsReqGetchatroomusers::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CMpcsReqGetchatroomusers::UnpackBody(string& strData)
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

PACKRETCODE CMpcsReqGetchatroomusers::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CMpcsRspGetchatroomusers::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = MPCS_RSP_GETCHATROOMUSERS;
    m_scHead.PackData(strData);
}

void CMpcsRspGetchatroomusers::PackBody(string& strData)
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
        (*this) << FT_UINT32;
        (*this) << m_roomId;
        (*this) << FT_VECTOR;
        (*this) << FT_STRING;
        {
            uint32_t nLen = m_userList.size();
            (*this) << nLen;
            VECTOR< string >::const_iterator itr;
            for(itr = m_userList.cbegin(); itr != m_userList.cend(); ++itr)
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

void CMpcsRspGetchatroomusers::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CMpcsRspGetchatroomusers::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_roomId;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_userList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                string tmpVal;
                (*this) >> tmpVal;
                m_userList.push_back(tmpVal);
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

PACKRETCODE CMpcsRspGetchatroomusers::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CMpcsReqSendMpcmsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = MPCS_REQ_SEND_MPCMSG;
    m_scHead.PackData(strData);
}

void CMpcsReqSendMpcmsg::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)4;
        (*this) << FT_STRING;
        (*this) << m_userId;
        (*this) << FT_UINT8;
        (*this) << m_type;
        (*this) << FT_STRING;
        (*this) << m_targetId;
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

void CMpcsReqSendMpcmsg::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CMpcsReqSendMpcmsg::UnpackBody(string& strData)
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
        (*this) >> m_userId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_targetId;
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

PACKRETCODE CMpcsReqSendMpcmsg::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CMpcsRspSendMpcmsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = MPCS_RSP_SEND_MPCMSG;
    m_scHead.PackData(strData);
}

void CMpcsRspSendMpcmsg::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)5;
        (*this) << FT_UINT8;
        (*this) << m_retcode;
        (*this) << FT_UINT32;
        (*this) << m_roomId;
        (*this) << FT_UINT8;
        (*this) << m_type;
        (*this) << FT_STRING;
        (*this) << m_targetId;
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

void CMpcsRspSendMpcmsg::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CMpcsRspSendMpcmsg::UnpackBody(string& strData)
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
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_roomId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_targetId;
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

PACKRETCODE CMpcsRspSendMpcmsg::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CMpcsNtfMpcmsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = MPCS_NTF_MPCMSG;
    m_scHead.PackData(strData);
}

void CMpcsNtfMpcmsg::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)5;
        (*this) << FT_STRING;
        (*this) << m_userId;
        (*this) << FT_UINT32;
        (*this) << m_roomId;
        (*this) << FT_UINT8;
        (*this) << m_type;
        (*this) << FT_STRING;
        (*this) << m_targetId;
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

void CMpcsNtfMpcmsg::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CMpcsNtfMpcmsg::UnpackBody(string& strData)
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
        (*this) >> m_userId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_roomId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_targetId;
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

PACKRETCODE CMpcsNtfMpcmsg::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CMpcsNtfChatroomstatus::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = MPCS_NTF_CHATROOMSTATUS;
    m_scHead.PackData(strData);
}

void CMpcsNtfChatroomstatus::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_roomId;
        (*this) << FT_UINT8;
        (*this) << m_type;
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

void CMpcsNtfChatroomstatus::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CMpcsNtfChatroomstatus::UnpackBody(string& strData)
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
        (*this) >> m_roomId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
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

PACKRETCODE CMpcsNtfChatroomstatus::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CMpcsNtfForcedisconnect::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = MPCS_NTF_FORCEDISCONNECT;
    m_scHead.PackData(strData);
}

void CMpcsNtfForcedisconnect::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_roomId;
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

void CMpcsNtfForcedisconnect::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CMpcsNtfForcedisconnect::UnpackBody(string& strData)
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
        (*this) >> m_roomId;
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

PACKRETCODE CMpcsNtfForcedisconnect::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

