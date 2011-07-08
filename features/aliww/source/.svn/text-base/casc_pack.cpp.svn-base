/*---------------------------------------------------------------------------
// Filename:        casc_pack.cpp
// Date:            2011-02-22 11:43:08
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#include "casc_pack.h"

CPackData& operator<< ( CPackData& cPackData, const SGoodsInfo&  sGoodsInfo )
{
    uint8_t nFieldNum = 2;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sGoodsInfo.m_name;
    cPackData << FT_UINT32;
    cPackData << sGoodsInfo.m_count;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SGoodsInfo&  sGoodsInfo )
{
    uint8_t num;
    cPackData >> num;
    if(num < 2) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sGoodsInfo.m_name;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sGoodsInfo.m_count;
    for(int i = 2; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const SGoodsInfoEx&  sGoodsInfoEx )
{
    uint8_t nFieldNum = 3;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sGoodsInfoEx.m_name;
    cPackData << FT_STRING;
    cPackData << sGoodsInfoEx.m_info;
    cPackData << FT_STRING;
    cPackData << sGoodsInfoEx.m_url;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SGoodsInfoEx&  sGoodsInfoEx )
{
    uint8_t num;
    cPackData >> num;
    if(num < 3) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sGoodsInfoEx.m_name;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sGoodsInfoEx.m_info;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sGoodsInfoEx.m_url;
    for(int i = 3; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CCascReqGoodssearch::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_REQ_GOODSSEARCH;
    m_scHead.PackData(strData);
}

void CCascReqGoodssearch::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        (*this) << m_keyword;
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

void CCascReqGoodssearch::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascReqGoodssearch::UnpackBody(string& strData)
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
        (*this) >> m_keyword;
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

PACKRETCODE CCascReqGoodssearch::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CCascRspGoodssearch::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_RSP_GOODSSEARCH;
    m_scHead.PackData(strData);
}

void CCascRspGoodssearch::PackBody(string& strData)
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
        (*this) << m_keyword;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_goods.size();
            (*this) << nLen;
            VECTOR< SGoodsInfo >::const_iterator itr;
            for(itr = m_goods.cbegin(); itr != m_goods.cend(); ++itr)
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

void CCascRspGoodssearch::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascRspGoodssearch::UnpackBody(string& strData)
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
        (*this) >> m_keyword;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_goods.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SGoodsInfo tmpVal;
                (*this) >> tmpVal;
                m_goods.push_back(tmpVal);
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

PACKRETCODE CCascRspGoodssearch::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CCascReqGoodssearchex::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_REQ_GOODSSEARCHEX;
    m_scHead.PackData(strData);
}

void CCascReqGoodssearchex::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        (*this) << m_keyword;
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

void CCascReqGoodssearchex::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascReqGoodssearchex::UnpackBody(string& strData)
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
        (*this) >> m_keyword;
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

PACKRETCODE CCascReqGoodssearchex::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CCascRspGoodssearchex::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_RSP_GOODSSEARCHEX;
    m_scHead.PackData(strData);
}

void CCascRspGoodssearchex::PackBody(string& strData)
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
        (*this) << m_keyword;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_goods.size();
            (*this) << nLen;
            VECTOR< SGoodsInfoEx >::const_iterator itr;
            for(itr = m_goods.cbegin(); itr != m_goods.cend(); ++itr)
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

void CCascRspGoodssearchex::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascRspGoodssearchex::UnpackBody(string& strData)
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
        (*this) >> m_keyword;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_goods.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SGoodsInfoEx tmpVal;
                (*this) >> tmpVal;
                m_goods.push_back(tmpVal);
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

PACKRETCODE CCascRspGoodssearchex::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CCascReqWwcardInfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_REQ_WWCARD_INFO;
    m_scHead.PackData(strData);
}

void CCascReqWwcardInfo::PackBody(string& strData)
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

void CCascReqWwcardInfo::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascReqWwcardInfo::UnpackBody(string& strData)
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

PACKRETCODE CCascReqWwcardInfo::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CCascRspWwcardInfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_RSP_WWCARD_INFO;
    m_scHead.PackData(strData);
}

void CCascRspWwcardInfo::PackBody(string& strData)
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
        (*this) << FT_STRING;
        (*this) << m_uid;
        (*this) << FT_UINT8;
        (*this) << m_type;
        (*this) << FT_STRING;
        (*this) << m_xmlstring;
        (*this) << FT_STRING;
        (*this) << m_extinfo;
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

void CCascRspWwcardInfo::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascRspWwcardInfo::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_uid;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_xmlstring;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_extinfo;
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

PACKRETCODE CCascRspWwcardInfo::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CCascReqWwcardLevel::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_REQ_WWCARD_LEVEL;
    m_scHead.PackData(strData);
}

void CCascReqWwcardLevel::PackBody(string& strData)
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

void CCascReqWwcardLevel::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascReqWwcardLevel::UnpackBody(string& strData)
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

PACKRETCODE CCascReqWwcardLevel::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CCascRspWwcardLevel::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_RSP_WWCARD_LEVEL;
    m_scHead.PackData(strData);
}

void CCascRspWwcardLevel::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)6;
        (*this) << FT_UINT8;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_uid;
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

void CCascRspWwcardLevel::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascRspWwcardLevel::UnpackBody(string& strData)
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
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_uid;
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

PACKRETCODE CCascRspWwcardLevel::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CCascReqWwcardSns::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_REQ_WWCARD_SNS;
    m_scHead.PackData(strData);
}

void CCascReqWwcardSns::PackBody(string& strData)
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

void CCascReqWwcardSns::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascReqWwcardSns::UnpackBody(string& strData)
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

PACKRETCODE CCascReqWwcardSns::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CCascRspWwcardSns::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_RSP_WWCARD_SNS;
    m_scHead.PackData(strData);
}

void CCascRspWwcardSns::PackBody(string& strData)
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
        (*this) << m_uid;
        (*this) << FT_STRING;
        (*this) << m_xmlstring;
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

void CCascRspWwcardSns::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascRspWwcardSns::UnpackBody(string& strData)
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
        (*this) >> m_uid;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_xmlstring;
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

PACKRETCODE CCascRspWwcardSns::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CCascReqWwcardEvaluate::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_REQ_WWCARD_EVALUATE;
    m_scHead.PackData(strData);
}

void CCascReqWwcardEvaluate::PackBody(string& strData)
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

void CCascReqWwcardEvaluate::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascReqWwcardEvaluate::UnpackBody(string& strData)
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

PACKRETCODE CCascReqWwcardEvaluate::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CCascRspWwcardEvaluate::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_RSP_WWCARD_EVALUATE;
    m_scHead.PackData(strData);
}

void CCascRspWwcardEvaluate::PackBody(string& strData)
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
        (*this) << FT_STRING;
        (*this) << m_uid;
        (*this) << FT_STRING;
        (*this) << m_xmlstring;
        (*this) << FT_STRING;
        (*this) << m_ext;
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

void CCascRspWwcardEvaluate::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascRspWwcardEvaluate::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_uid;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_xmlstring;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_ext;
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

PACKRETCODE CCascRspWwcardEvaluate::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CCascReqWwcardFavorite::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_REQ_WWCARD_FAVORITE;
    m_scHead.PackData(strData);
}

void CCascReqWwcardFavorite::PackBody(string& strData)
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

void CCascReqWwcardFavorite::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascReqWwcardFavorite::UnpackBody(string& strData)
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

PACKRETCODE CCascReqWwcardFavorite::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CCascRspWwcardFavorite::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_RSP_WWCARD_FAVORITE;
    m_scHead.PackData(strData);
}

void CCascRspWwcardFavorite::PackBody(string& strData)
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
        (*this) << m_uid;
        (*this) << FT_STRING;
        (*this) << m_xmlstring;
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

void CCascRspWwcardFavorite::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascRspWwcardFavorite::UnpackBody(string& strData)
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
        (*this) >> m_uid;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_xmlstring;
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

PACKRETCODE CCascRspWwcardFavorite::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CCascReqTradeList::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_REQ_TRADE_LIST;
    m_scHead.PackData(strData);
}

void CCascReqTradeList::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        (*this) << m_reqstring;
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

void CCascReqTradeList::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascReqTradeList::UnpackBody(string& strData)
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
        (*this) >> m_reqstring;
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

PACKRETCODE CCascReqTradeList::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CCascRspTradeList::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_RSP_TRADE_LIST;
    m_scHead.PackData(strData);
}

void CCascRspTradeList::PackBody(string& strData)
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
        (*this) << m_xmlstring;
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

void CCascRspTradeList::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascRspTradeList::UnpackBody(string& strData)
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
        (*this) >> m_xmlstring;
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

PACKRETCODE CCascRspTradeList::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CCascRspTradeInfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_RSP_TRADE_INFO;
    m_scHead.PackData(strData);
}

void CCascRspTradeInfo::PackBody(string& strData)
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
        (*this) << m_xmlstring;
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

void CCascRspTradeInfo::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascRspTradeInfo::UnpackBody(string& strData)
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
        (*this) >> m_xmlstring;
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

PACKRETCODE CCascRspTradeInfo::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CCascReqEsexpandtab::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_REQ_ESEXPANDTAB;
    m_scHead.PackData(strData);
}

void CCascReqEsexpandtab::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
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

void CCascReqEsexpandtab::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascReqEsexpandtab::UnpackBody(string& strData)
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
        (*this) >> m_reserve;
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

PACKRETCODE CCascReqEsexpandtab::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

CPackData& operator<< ( CPackData& cPackData, const SExpandinfo&  sExpandinfo )
{
    uint8_t nFieldNum = 3;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sExpandinfo.m_name;
    cPackData << FT_STRING;
    cPackData << sExpandinfo.m_url;
    cPackData << FT_STRING;
    cPackData << sExpandinfo.m_picpath;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SExpandinfo&  sExpandinfo )
{
    uint8_t num;
    cPackData >> num;
    if(num < 3) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sExpandinfo.m_name;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sExpandinfo.m_url;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sExpandinfo.m_picpath;
    for(int i = 3; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CCascRspEsexpandtab::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_RSP_ESEXPANDTAB;
    m_scHead.PackData(strData);
}

void CCascRspEsexpandtab::PackBody(string& strData)
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
            uint32_t nLen = m_expandtabs.size();
            (*this) << nLen;
            VECTOR< SExpandinfo >::const_iterator itr;
            for(itr = m_expandtabs.cbegin(); itr != m_expandtabs.cend(); ++itr)
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

void CCascRspEsexpandtab::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascRspEsexpandtab::UnpackBody(string& strData)
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
            m_expandtabs.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SExpandinfo tmpVal;
                (*this) >> tmpVal;
                m_expandtabs.push_back(tmpVal);
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

PACKRETCODE CCascRspEsexpandtab::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CCascReqSendEseval::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_REQ_SEND_ESEVAL;
    m_scHead.PackData(strData);
}

void CCascReqSendEseval::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        (*this) << m_targetuid;
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

void CCascReqSendEseval::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascReqSendEseval::UnpackBody(string& strData)
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
        (*this) >> m_targetuid;
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

PACKRETCODE CCascReqSendEseval::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CCascRspSendEseval::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_RSP_SEND_ESEVAL;
    m_scHead.PackData(strData);
}

void CCascRspSendEseval::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_STRING;
        (*this) << m_targetuid;
        (*this) << FT_UINT8;
        (*this) << m_ret;
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

void CCascRspSendEseval::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascRspSendEseval::UnpackBody(string& strData)
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
        (*this) >> m_targetuid;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_ret;
        try
        {
            if(num < 3) return PACK_RIGHT;
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

PACKRETCODE CCascRspSendEseval::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CCascReqGetcntlist::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_REQ_GETCNTLIST;
    m_scHead.PackData(strData);
}

void CCascReqGetcntlist::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
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

void CCascReqGetcntlist::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascReqGetcntlist::UnpackBody(string& strData)
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

PACKRETCODE CCascReqGetcntlist::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

CPackData& operator<< ( CPackData& cPackData, const SCntinfo&  sCntinfo )
{
    uint8_t nFieldNum = 5;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sCntinfo.m_contactid;
    cPackData << FT_STRING;
    cPackData << sCntinfo.m_nickname;
    cPackData << FT_STRING;
    cPackData << sCntinfo.m_groupname;
    cPackData << FT_STRING;
    cPackData << sCntinfo.m_prelogintime;
    cPackData << FT_STRING;
    cPackData << sCntinfo.m_createtime;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SCntinfo&  sCntinfo )
{
    uint8_t num;
    cPackData >> num;
    if(num < 5) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sCntinfo.m_contactid;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sCntinfo.m_nickname;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sCntinfo.m_groupname;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sCntinfo.m_prelogintime;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sCntinfo.m_createtime;
    for(int i = 5; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CCascRspGetcntlist::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_RSP_GETCNTLIST;
    m_scHead.PackData(strData);
}

void CCascRspGetcntlist::PackBody(string& strData)
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
            uint32_t nLen = m_cntlist.size();
            (*this) << nLen;
            VECTOR< SCntinfo >::const_iterator itr;
            for(itr = m_cntlist.cbegin(); itr != m_cntlist.cend(); ++itr)
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

void CCascRspGetcntlist::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascRspGetcntlist::UnpackBody(string& strData)
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
            m_cntlist.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SCntinfo tmpVal;
                (*this) >> tmpVal;
                m_cntlist.push_back(tmpVal);
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

PACKRETCODE CCascRspGetcntlist::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CCascReqAuthShellcmd::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_REQ_AUTH_SHELLCMD;
    m_scHead.PackData(strData);
}

void CCascReqAuthShellcmd::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        (*this) << m_cmdData;
        (*this) << FT_STRING;
        (*this) << m_sign;
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

void CCascReqAuthShellcmd::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascReqAuthShellcmd::UnpackBody(string& strData)
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
        (*this) >> m_cmdData;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_sign;
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

PACKRETCODE CCascReqAuthShellcmd::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CCascRspAuthShellcmd::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_RSP_AUTH_SHELLCMD;
    m_scHead.PackData(strData);
}

void CCascRspAuthShellcmd::PackBody(string& strData)
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
        (*this) << m_cmdData;
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

void CCascRspAuthShellcmd::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascRspAuthShellcmd::UnpackBody(string& strData)
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
        (*this) >> m_cmdData;
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

PACKRETCODE CCascRspAuthShellcmd::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CCascReqWwMainsearch::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_REQ_WW_MAINSEARCH;
    m_scHead.PackData(strData);
}

void CCascReqWwMainsearch::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        (*this) << m_reqData;
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

void CCascReqWwMainsearch::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascReqWwMainsearch::UnpackBody(string& strData)
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
        (*this) >> m_reqData;
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

PACKRETCODE CCascReqWwMainsearch::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CCascRspWwMainsearch::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_RSP_WW_MAINSEARCH;
    m_scHead.PackData(strData);
}

void CCascRspWwMainsearch::PackBody(string& strData)
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
        (*this) << m_rspData;
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

void CCascRspWwMainsearch::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascRspWwMainsearch::UnpackBody(string& strData)
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
        (*this) >> m_rspData;
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

PACKRETCODE CCascRspWwMainsearch::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CCascReqGetUsercrinfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_REQ_GET_USERCRINFO;
    m_scHead.PackData(strData);
}

void CCascReqGetUsercrinfo::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        (*this) << m_uid;
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

void CCascReqGetUsercrinfo::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascReqGetUsercrinfo::UnpackBody(string& strData)
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
        (*this) >> m_uid;
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

PACKRETCODE CCascReqGetUsercrinfo::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CCascRspGetUsercrinfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_RSP_GET_USERCRINFO;
    m_scHead.PackData(strData);
}

void CCascRspGetUsercrinfo::PackBody(string& strData)
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
        (*this) << m_crstate;
        (*this) << FT_UINT32;
        (*this) << m_begtime;
        (*this) << FT_UINT32;
        (*this) << m_crdays;
        (*this) << FT_STRING;
        (*this) << m_extmsg;
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

void CCascRspGetUsercrinfo::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascRspGetUsercrinfo::UnpackBody(string& strData)
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
        (*this) >> m_crstate;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_begtime;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_crdays;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_extmsg;
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

PACKRETCODE CCascRspGetUsercrinfo::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CCascReqSetUsercrinfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_REQ_SET_USERCRINFO;
    m_scHead.PackData(strData);
}

void CCascReqSetUsercrinfo::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_scHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_STRING;
        (*this) << m_uid;
        (*this) << FT_STRING;
        (*this) << m_version;
        (*this) << FT_UINT8;
        (*this) << m_crstate;
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

void CCascReqSetUsercrinfo::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascReqSetUsercrinfo::UnpackBody(string& strData)
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
        (*this) >> m_uid;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_version;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_crstate;
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

PACKRETCODE CCascReqSetUsercrinfo::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

void CCascRspSetUsercrinfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_scHead.Size())
        m_scHead.m_len = m_scHead.SizeExt() - m_scHead.Size();
    else
        m_scHead.m_len = strData.size() - m_scHead.Size();
    if(m_scHead.m_cmd == 0) m_scHead.m_cmd = CASC_RSP_SET_USERCRINFO;
    m_scHead.PackData(strData);
}

void CCascRspSetUsercrinfo::PackBody(string& strData)
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
        (*this) << m_crstate;
        (*this) << FT_UINT32;
        (*this) << m_begtime;
        (*this) << FT_UINT32;
        (*this) << m_crdays;
        (*this) << FT_STRING;
        (*this) << m_extmsg;
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

void CCascRspSetUsercrinfo::PackData(string& strData, const string& strKey)
{
    PackBody(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Encrypt(strData, strKey, m_scHead.SizeExt());
    }
    PackHead(strData);
}

PACKRETCODE CCascRspSetUsercrinfo::UnpackBody(string& strData)
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
        (*this) >> m_crstate;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_begtime;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_crdays;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_extmsg;
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

PACKRETCODE CCascRspSetUsercrinfo::UnpackData(string& strData, const string& strKey)
{
    m_scHead.UnpackData(strData);
    if(m_scHead.m_encrypt == 1 && !strKey.empty())
    {
        CDesEncrypt des;
        des.Decrypt(strData, strKey, m_scHead.PeekSize());
    }
    return UnpackBody(strData);
}

