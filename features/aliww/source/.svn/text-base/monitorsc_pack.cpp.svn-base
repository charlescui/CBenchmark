/*---------------------------------------------------------------------------
// Filename:        monitorsc_pack.cpp
// Date:            2011-01-30 12:49:47
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#include "monitorsc_pack.h"

CPackData& operator<< ( CPackData& cPackData, const SAppServerInfo&  sAppServerInfo )
{
    uint8_t nFieldNum = 9;
    cPackData << nFieldNum;
    cPackData << FT_UINT32;
    cPackData << sAppServerInfo.m_id;
    cPackData << FT_STRING;
    cPackData << sAppServerInfo.m_idcname;
    cPackData << FT_STRING;
    cPackData << sAppServerInfo.m_ip;
    cPackData << FT_STRING;
    cPackData << sAppServerInfo.m_apptype;
    cPackData << FT_STRING;
    cPackData << sAppServerInfo.m_processname;
    cPackData << FT_STRING;
    cPackData << sAppServerInfo.m_machineinfo;
    cPackData << FT_STRING;
    cPackData << sAppServerInfo.m_monitortype;
    cPackData << FT_UINT32;
    cPackData << sAppServerInfo.m_interval;
    cPackData << FT_STRING;
    cPackData << sAppServerInfo.m_version;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SAppServerInfo&  sAppServerInfo )
{
    uint8_t num;
    cPackData >> num;
    if(num < 9) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sAppServerInfo.m_id;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sAppServerInfo.m_idcname;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sAppServerInfo.m_ip;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sAppServerInfo.m_apptype;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sAppServerInfo.m_processname;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sAppServerInfo.m_machineinfo;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sAppServerInfo.m_monitortype;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sAppServerInfo.m_interval;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sAppServerInfo.m_version;
    for(int i = 9; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CScReqRegister::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = SC_REQ_REGISTER;
    m_scHead.PackData(strData);
}

void CScReqRegister::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRUCT;
        (*this) << m_info;
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

void CScReqRegister::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CScReqRegister::UnpackBody(string& strData)
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

PACKRETCODE CScReqRegister::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CScRspRegister::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = SC_RSP_REGISTER;
    m_scHead.PackData(strData);
}

void CScRspRegister::PackBody(string& strData)
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
        (*this) << m_id;
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

void CScRspRegister::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CScRspRegister::UnpackBody(string& strData)
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
        (*this) >> m_id;
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

PACKRETCODE CScRspRegister::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CScReqCancelRegister::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = SC_REQ_CANCEL_REGISTER;
    m_scHead.PackData(strData);
}

void CScReqCancelRegister::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRUCT;
        (*this) << m_info;
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

void CScReqCancelRegister::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CScReqCancelRegister::UnpackBody(string& strData)
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

PACKRETCODE CScReqCancelRegister::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CScRspCancelRegister::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = SC_RSP_CANCEL_REGISTER;
    m_scHead.PackData(strData);
}

void CScRspCancelRegister::PackBody(string& strData)
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

void CScRspCancelRegister::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CScRspCancelRegister::UnpackBody(string& strData)
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

PACKRETCODE CScRspCancelRegister::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CScReqSvrStatus::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = SC_REQ_SVR_STATUS;
    m_scHead.PackData(strData);
}

void CScReqSvrStatus::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)5;
        (*this) << FT_UINT32;
        (*this) << m_id;
        (*this) << FT_UINT32;
        (*this) << m_status;
        (*this) << FT_STRING;
        (*this) << m_detail;
        (*this) << FT_STRING;
        (*this) << m_ext;
        (*this) << FT_UINT32;
        (*this) << m_timeelapsed;
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

void CScReqSvrStatus::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CScReqSvrStatus::UnpackBody(string& strData)
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
        (*this) >> m_id;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_status;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_detail;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_ext;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timeelapsed;
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

PACKRETCODE CScReqSvrStatus::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

