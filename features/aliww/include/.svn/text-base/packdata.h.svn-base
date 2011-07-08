#ifndef __PACKDATA_H
#define __PACKDATA_H

#include <string>
#include <vector>
#include <map>
#ifdef _WIN32
#include <WINSOCK.H>
#include "zlib.h"
#else
#include <netinet/in.h>
#include <zlib.h>
#endif
#include "datatype.h"
#include "cow_container"

#define MAX_RECORD_SIZE (10 * 1024 * 1024)
enum PACKRETCODE
{
    PACK_RIGHT=0,
        
    PACK_STARTER_ERROR,
    PACK_VERSION_ERROR,
    PACK_LENGTH_ERROR,
    PACK_CHECKCODE_ERROR,
    PACK_TYPEMATCH_ERROR,
    PACK_INVALID,
    PACK_SYSTEM_ERROR
};

enum FIELDTYPE
{
    FT_PACK = 0,
    FT_INT8,
    FT_UINT8,
    FT_INT16,
    FT_UINT16,
    FT_INT32,
    FT_UINT32,
    FT_INT64,
    FT_UINT64,
    FT_STRUCT,
    FT_MAP,
    FT_STRING = 0x40,
    FT_VECTOR = 0x50,
};

struct CFieldType
{
    FIELDTYPE               m_baseType;
    int                     m_packMode;
    std::vector<CFieldType> m_subType;
};

class CPackData
{
public:
    uint8_t CalcLrc(const std::string& data, uint32_t len)
    {
        if(data.length() < len) throw PACK_LENGTH_ERROR;
        uint8_t lrc = 0;
        for (std::string::size_type i = 0; i < len; i++)
        {
            lrc ^= (uint8_t)data[i];
        }
        return lrc;
    }

    static bool CompressData1(std::string& strData, uint32_t nHeadLen)
    {
        uLongf falllen = strData.size() - nHeadLen;
        Bytef *buffer = new Bytef[falllen];
        uLongf bufflen = falllen;
        bool ret = false;
        const Bytef *src = (const Bytef *)(strData.data() + nHeadLen);
        int zret = compress(buffer, &bufflen, src, falllen);
        if(zret == Z_OK)
        {
            strData.resize(nHeadLen + bufflen);
            strData.replace(nHeadLen, bufflen, (char *)buffer, bufflen);
            ret = true;
        }

        delete[] buffer;
        return ret;
    }

    static bool UncompressData1(std::string& strData, uint32_t nHeadLen, uint32_t offset)
    {
        uLongf bufflen = 8 * (strData.size() - nHeadLen);
        const Bytef *src = (const Bytef *)strData.data() + nHeadLen;
        uLongf srcLen = strData.size() - nHeadLen - offset;
        int zret;
        bool ret = false;
    do{
        Bytef *buffer = new Bytef[bufflen];
        zret = uncompress(buffer, &bufflen, src, srcLen);
        if(zret == Z_OK) 
        {
            strData.resize(nHeadLen + bufflen);
            strData.replace(nHeadLen, bufflen, (char *)buffer, bufflen);
            ret = true;
        }
        bufflen <<= 1;
        delete[] buffer;
    }
    while(zret == -5);
        return ret;
    }

    static bool CompressData2(std::string& strData, uint32_t nHeadLen)
    {
        uLongf falllen = strData.size() - nHeadLen;
        Bytef *buffer = new Bytef[falllen];
        uLongf bufflen = falllen;
        bool ret = false;
        const Bytef *src = (const Bytef *)(strData.data() + nHeadLen);
        int zret = compress(buffer, &bufflen, src, falllen);
        if(zret == Z_OK)
        {
            strData.resize(nHeadLen + 4 + bufflen);
            uint32_t nTmp = htonl((uint32_t)falllen);
            strData.replace(nHeadLen, 4, (char *)&nTmp, 4);
            strData.replace(nHeadLen + 4, bufflen, (char *)buffer, bufflen);
            ret = true;
        }
    
        delete[] buffer;
        return ret;
    }

    static bool UncompressData2(std::string& strData, uint32_t nHeadLen)
    {
        uint32_t nSize = ntohl(*(uint32_t *)(strData.c_str() + nHeadLen));
        uLongf buffLen = nSize + 100;
        Bytef *buffer = new Bytef[buffLen];
        bool ret = false;
        const Bytef *src = (const Bytef *)strData.data() + nHeadLen + 4;
        uLongf srcLen = strData.size() - nHeadLen - 4;
        int zret = uncompress(buffer, &buffLen, src, srcLen);
        if(zret == Z_OK)
        {
            strData.replace(nHeadLen, buffLen, (char *)buffer, buffLen);
            ret = true;
        }
        delete[] buffer;
        return ret;
    }

    static uint16_t CalcCheckCode(const std::string& data, uint32_t begin)
    {
        uint16_t nCheckCode = 0;
        for (std::string::size_type i=begin; i < data.length(); i++)
        {
            nCheckCode += (uint8_t)data[i];
        }
        return nCheckCode;
    }

protected:
    uint32_t PeekField(CFieldType field)
    {
        switch(field.m_baseType)
        {
        case FT_INT8:
        case FT_UINT8:
            if (m_inCursor + 1 <= m_inPtr->length())
                m_inCursor++;
            else
                throw PACK_LENGTH_ERROR;
            return 1;
        case FT_INT16:
        case FT_UINT16:
            if (m_inCursor + 2 <= m_inPtr->length())
                m_inCursor += 2;
            else
                throw PACK_LENGTH_ERROR;
            return 2;
        case FT_INT32:
        case FT_UINT32:
            if (m_inCursor + 4 <= m_inPtr->length())
                m_inCursor += 4;
            else
                throw PACK_LENGTH_ERROR;
            return 4;
        case FT_INT64:
        case FT_UINT64:
            if (m_inCursor + 8 <= m_inPtr->length())
                m_inCursor += 8;
            else
                throw PACK_LENGTH_ERROR;
            return 8;
        case FT_STRING:
        {
            uint32_t nLen, nFieldLen;
            if(field.m_packMode == 1)
            {
                uint8_t len;
                (*this) >> len;
                nLen = len;
                nFieldLen = nLen + 1;
            }
            else if(field.m_packMode == 2)
            {
                uint16_t len;
                (*this) >> len;
                nLen = len;
                nFieldLen = nLen + 2;
            }
            else
            {
                (*this) >> nLen;
                nFieldLen = nLen + 4;
            }
            if (m_inCursor + nLen <= m_inPtr->length())
                m_inCursor += nLen;
            else
                throw PACK_LENGTH_ERROR;
            return nFieldLen;
        }
        case FT_VECTOR:
        {
            if(field.m_subType.size() != 1) throw PACK_INVALID;
            uint32_t nLen, nFieldLen;
            if(field.m_packMode == 1)
            {
                uint8_t len;
                (*this) >> len;
                nLen = len;
                nFieldLen = 1;
            }
            else if(field.m_packMode == 2)
            {
                uint16_t len;
                (*this) >> len;
                nLen = len;
                nFieldLen = 2;
            }
            else
            {
                (*this) >> nLen;
                nFieldLen = 4;
            }
            for(uint32_t i = 0; i < nLen; i++)
                nFieldLen += PeekField(field.m_subType[0]);
            return nFieldLen;
        }
        case FT_MAP:
        {
            if(field.m_subType.size() != 2) throw PACK_INVALID;
            uint8_t nLen;
            uint32_t nFieldLen = 1;
            (*this) >> nLen;
            for(int i = 0; i < nLen; i++)
            {
                nFieldLen += PeekField(field.m_subType[0]);
                nFieldLen += PeekField(field.m_subType[1]);
            }
            return nFieldLen;
        }
        case FT_STRUCT:
        {
            uint8_t nLen;
            (*this) >> nLen;
            for(int i = 0; i < nLen; i++)
                PeekField();
            return 0;
        }
        default:
            throw PACK_INVALID;
        }
    }

public:
    void PeekField()
    {
        CFieldType field;
        (*this) >> field;
        PeekField(field);
    }

    CPackData() : m_inCursor(0),m_inPtr(&m_in), m_outCursor(0), m_outPtr(&m_out) { }
    void ResetInBuff(const std::string& data)
    {
        m_inPtr = &data;
        m_inCursor = 0;
    }

    void SetInCursor(uint32_t cursor = 0)
    {
        m_inCursor = cursor;
    }

    CPackData &operator >> (char& chVal)
    {
        if (m_inCursor + 1 <= m_inPtr->length())
        {
            chVal = (*m_inPtr)[m_inCursor++];
        }
        else
        {
            throw PACK_LENGTH_ERROR;
        }
        return *this;
    }

    CPackData &operator >> (uint8_t& chVal)
    {
        if (m_inCursor + 1 <= m_inPtr->length())
        {
            chVal = (*m_inPtr)[m_inCursor++];
        }
        else
        {
            throw PACK_LENGTH_ERROR;
        }
        return *this;
    }

    CPackData &operator >> (CFieldType& field)
    {
        uint8_t type;
        (*this) >> type;
        if(type >= 0x40)
        {
            field.m_baseType = (FIELDTYPE)(type & 0xf0);
            field.m_packMode = type & 0x0f;
        }
        else
        {
            field.m_baseType = (FIELDTYPE)(type);
            field.m_packMode = 0;
        }
        switch(field.m_baseType)
        {
        case FT_VECTOR:
        {
            field.m_subType.clear();
            CFieldType subtype;
            (*this) >> subtype;
            field.m_subType.push_back(subtype);
            break;
        }
        case FT_MAP:
        {
            field.m_subType.clear();
            CFieldType subtype;
            (*this) >> subtype;
            field.m_subType.push_back(subtype);
            (*this) >> subtype;
            field.m_subType.push_back(subtype);
            break;
        }
        default:
            break;
        }
        return *this;
    }

    CPackData &operator >> (int16_t& nVal)
    {
        if (m_inCursor + 2 <= m_inPtr->length())
        {
            int16_t nTmp;
            m_inPtr->copy((char *)&nTmp, 2, m_inCursor);
            m_inCursor += 2;
            nVal = ntohs(nTmp);
        }
        else
        {
            throw PACK_LENGTH_ERROR;
        }
        return *this;
    }

    CPackData &operator >> (uint16_t& wVal)
    {
        if (m_inCursor + 2 <= m_inPtr->length())
        {
            uint16_t nTmp;
            m_inPtr->copy((char *)&nTmp, 2, m_inCursor);
            m_inCursor += 2;
            wVal = ntohs(nTmp);
        }
        else
        {
            throw PACK_LENGTH_ERROR;
        }
        return *this;
    }

    CPackData &operator >> (int32_t& lVal)
    {
        if (m_inCursor + 4 <= m_inPtr->length())
        {
            int32_t lTmp;
            m_inPtr->copy((char *)&lTmp, 4, m_inCursor);
            m_inCursor += 4;
            lVal = ntohl(lTmp);
        }
        else
        {
            throw PACK_LENGTH_ERROR;
        }
        return *this;
    }

    CPackData &operator >> (uint32_t& dwVal)
    {
        if (m_inCursor + 4 <= m_inPtr->length())
        {
            int32_t dwTmp;
            m_inPtr->copy((char *)&dwTmp, 4, m_inCursor);
            m_inCursor += 4;
            dwVal = ntohl(dwTmp);
        }
        else
        {
            throw PACK_LENGTH_ERROR;
        }
        return *this;
    }

    CPackData &operator >> (int64_t& llVal)
    {
        if (m_inCursor + 8 <= m_inPtr->length())
        {
            uint32_t dwTmp;
            m_inPtr->copy((char *)&dwTmp, 4, m_inCursor);
            m_inCursor += 4;
            llVal = ntohl(dwTmp);
            m_inPtr->copy((char *)&dwTmp, 4, m_inCursor);
            m_inCursor += 4;
            llVal = (llVal << 32) + ntohl(dwTmp);
        }
        else
        {
            throw PACK_LENGTH_ERROR;
        }
        return *this;
    }

    CPackData &operator >> (uint64_t& ullVal)
    {
        if (m_inCursor + 8 <= m_inPtr->length())
        {
            uint32_t dwTmp;
            m_inPtr->copy((char *)&dwTmp, 4, m_inCursor);
            m_inCursor += 4;
            ullVal = ntohl(dwTmp);
            m_inPtr->copy((char *)&dwTmp, 4, m_inCursor);
            ullVal = (ullVal << 32) + ntohl(dwTmp);
            m_inCursor += 4;
        }
        else
        {
            throw PACK_LENGTH_ERROR;
        }
        return *this;
    }

    CPackData &operator >> (std::string& strVal)
    {
        uint32_t dwLen;
        (*this) >> dwLen;
        if (m_inCursor + dwLen <= m_inPtr->length())
        {
            strVal.assign(*m_inPtr, m_inCursor, dwLen);
            m_inCursor += dwLen;
        }
        else
        {
            throw PACK_LENGTH_ERROR;
        }
        return *this;
    }

    bool ReadData (std::string& strVal, uint32_t nMaxLen, int nMode)
    {
        uint32_t nLen, nSize;
        switch(nMode)
        {
            case 0:
                if(nMaxLen == 0)
                {
                    nSize = nMaxLen = nLen = m_inPtr->length() - m_inCursor;
                    break;
                }
                if(m_inCursor + nMaxLen > m_inPtr->length())
                    throw PACK_LENGTH_ERROR;
                for(nLen = 0; nLen < nMaxLen && (*m_inPtr)[m_inCursor + nLen] != 0; nLen++);
                nSize = nMaxLen;
                break;
            case 1:
                {
                    uint8_t len;
                    *this >> len;
                    nSize = nLen = len;
                    if(nMaxLen == 0) nMaxLen = len;
                }
                break;
            case 2:
                {
                    uint16_t len;
                    *this >> len;
                    nSize = nLen = len;
                    if(nMaxLen == 0) nMaxLen = len;
                }
                break;
            default:
                {
                    uint32_t len;
                    *this >> len;
                    nSize = nLen = len;
                    if(nMaxLen == 0) nMaxLen = len;
                }
        }
        if(nSize <= nMaxLen && m_inCursor + nLen <= m_inPtr->length())
        {
            strVal.assign(*m_inPtr, m_inCursor, nLen);
            m_inCursor += nSize;
        }
        else
        {
            throw PACK_LENGTH_ERROR;
        }
        return true;
    }

    template<typename _Tp>
    CPackData &operator>> (std::vector<_Tp>& aryVal)
    {
        uint32_t dwLen;
        *this >> dwLen;

        _Tp tmpVal;
        aryVal.reserve(dwLen);
        for(uint32_t i=0; i < dwLen; i++)
        {
            *this >> tmpVal;
            aryVal.push_back(tmpVal);
        }
        return *this;
    }

    template<typename _Tp>
    bool ReadData (std::vector<_Tp>& aryVal, int nMode)
    {
        uint32_t nLen;
        switch(nMode) {
            case 1:
                {
                    uint8_t len;
                    *this >> len;
                    nLen = len;
                }
                break;
            case 2:
                {
                    uint16_t len;
                    *this >> len;
                    nLen = len;
                }
                break;
            default:
                {
                    *this >> aryVal;
                    return true;
                }
        }
        aryVal.reserve(nLen);
        _Tp tmpVal;
        for(uint32_t i=0; i < nLen; i++)
        {
            *this >> tmpVal;
            aryVal.push_back(tmpVal);
        }
        return true;
    }

    void ResetOutBuff()
    {
        m_outCursor = 0;
    }

    void ResetOutBuff(std::string& strData)
    {
        m_outPtr = &strData;
        m_outCursor = 0;
    }

    void SetOutCursor(uint32_t cursor = 0)
    {
        if(m_outPtr->length() < cursor)
            m_outPtr->resize(cursor);
        m_outCursor = cursor;
    }

    CPackData &operator << (const char chVal)
    {
        if(m_outCursor < m_outPtr->length())
            (*m_outPtr)[m_outCursor] = chVal;
        else
            (*m_outPtr) += chVal;
        m_outCursor++;
        return *this;
    }

    CPackData &operator << (const uint8_t chVal)
    {
        if(m_outCursor < m_outPtr->length())
            (*m_outPtr)[m_outCursor] = (char)chVal;
        else
            (*m_outPtr) += (char)chVal;
        m_outCursor++;
        return *this;
    }

    CPackData &operator << (FIELDTYPE ftType)
    {
        uint8_t type = (uint8_t)ftType;
        (*this) << type;
        return *this;
    }

    CPackData &operator << (const CFieldType& field)
    {
        uint8_t type;
        if(field.m_baseType >= 0x40)
        {
            if(field.m_packMode == 1 || field.m_packMode == 2)
                type = (uint8_t)(field.m_baseType + field.m_packMode);
            else
                type = field.m_baseType;
        }
        (*this) << type;
        switch(field.m_baseType)
        {
        case FT_VECTOR:
        {
            (*this) << field.m_subType[0];
            break;
        }
        case FT_MAP:
        {
            (*this) << field.m_subType[0];
            (*this) << field.m_subType[1];
            break;
        }
        default:
            break;
        }
        return *this;
    }

    CPackData &operator << (const int16_t nVal)
    {
        uint16_t nTmp = htons(nVal);
        (*m_outPtr).replace(m_outCursor, 2, (char *)&nTmp, 2);
        m_outCursor += 2;
        return *this;
    }

    CPackData &operator << (const uint16_t wVal)
    {
        uint16_t nTmp = htons(wVal);
        m_outPtr->replace(m_outCursor, 2, (char *)&nTmp, 2);
        m_outCursor += 2;
        return *this;
    }

    CPackData &operator << (const int32_t lVal)
    {
        uint32_t nTmp = htonl(lVal);
        m_outPtr->replace(m_outCursor, 4, (char *)&nTmp, 4);
        m_outCursor += 4;
        return *this;
    }

    CPackData &operator << (const uint32_t dwVal)
    {
        uint32_t nTmp = htonl(dwVal);
        m_outPtr->replace(m_outCursor, 4, (char *)&nTmp, 4);
        m_outCursor += 4;
        return *this;
    }

    CPackData &operator << (const int64_t llVal)
    {
        uint32_t dwTmp = (uint32_t)((uint64_t) llVal >> 32);
        (*this) << dwTmp;
        dwTmp = (uint32_t)((uint64_t) llVal & 0xffffffff);
        (*this) << dwTmp;
        return *this;
    }

    CPackData &operator << (const uint64_t ullVal)
    {
        uint32_t dwTmp = (uint32_t)(ullVal >> 32);
        (*this) << dwTmp;
        dwTmp = (uint32_t)(ullVal & 0xffffffff);
        (*this) << dwTmp;
        return *this;
    }

    CPackData &operator << (const std::string& strVal)
    {
        (*this) << (uint32_t) strVal.length();
        m_outPtr->replace(m_outCursor, strVal.length(), strVal);
        m_outCursor += strVal.length();
        return *this;
    }

    bool WriteData (const std::string& strVal, int nMode, uint32_t nMaxLen = 0, char chFill = 0)
    {
        switch(nMode) {
            case 0:
                if(strVal.length() < nMaxLen)
                {
                    m_outPtr->replace(m_outCursor, strVal.length(), strVal);
                    m_outPtr->replace(m_outCursor + strVal.length(), nMaxLen - strVal.length(), nMaxLen - strVal.length(), chFill);
                }
                else
                    m_outPtr->replace(m_outCursor, nMaxLen, strVal);
                m_outCursor += nMaxLen;
                return true;
            case 1:
            {
                uint8_t len = (uint8_t) strVal.length();
                (*this) << len;
                break;
            }
            case 2:
            {
                uint16_t len = (uint16_t) strVal.length();
                (*this) << len;
                break;
            }
            default:
            {
                uint32_t len = (uint32_t) strVal.length();
                (*this) << len;
                break;
            }
        }
        m_outPtr->replace(m_outCursor, strVal.length(), strVal);
        m_outCursor += strVal.length();
        return true;
    }

    bool WriteRawData(const uint8_t* pBuffer, uint32_t nLen)
    {
        m_outPtr->replace(m_outCursor, nLen, (const char*)pBuffer, nLen);
        m_outCursor += nLen;
        return true;
    }

    template<typename _Tp>
    CPackData &operator<< (const std::vector<_Tp>& aryVal)
    {
        uint32_t dwLen = aryVal.size();
        (*this) << dwLen;

        for(uint32_t i=0; i < dwLen; i++)
            *this << aryVal[i];

        return *this;
    }
	CPackData &operator<< (const std::map<std::string,std::string>& attrs)
	{
		(*this) << FT_MAP;
        (*this) << FT_STRING;
        (*this) << FT_STRING;
        {
            uint8_t nSize = attrs.size();
            (*this) << nSize;
            std::map< std::string,std::string >::const_iterator itr;
            for(itr = attrs.begin(); itr != attrs.end(); ++itr)
            {
                (*this) << itr->first;
                (*this) << itr->second;
            }
        }	
        return *this;
	}
	CPackData &operator>> (std::map<std::string,std::string>& attrs)
	{
		CFieldType field;
		(*this) >> field;
        if(field.m_baseType != FT_MAP) throw PACK_TYPEMATCH_ERROR;
        {
            uint8_t nSize;
            (*this) >> nSize;
            for(uint32_t i = 0; i < nSize; i++)
            {
                std::string key;
                std::string value;
                (*this) >> key;
                (*this) >> value;
                attrs[key] = value;
            }
        }
        return *this;
	}
    template<typename _Tp>
    bool WriteData (const std::vector<_Tp>& aryVal, int nMode)
    {
        switch(nMode) {
            case 1:
            {
                uint8_t len = aryVal.size();
                (*this) << len;
                break;
            }
            case 2:
            {
                uint16_t len = aryVal.size();
                (*this) << len;
                break;
            }
            default:
            {
                uint32_t len = aryVal.size();
                (*this) << len;
                break;
            }
        }
        for(uint32_t i=0; i < aryVal.size(); i++)
            (*this) << aryVal[i];

        return true;
    }

    void FormData(uint32_t offset)
    {
        uint32_t len = m_outPtr->length() - offset;
        if(len % 8 != 0)
        {
            m_outPtr->append(8 - len % 8, '\0');
        }
    }

    const std::string& GetData() const
    {
        return *m_outPtr;
    }
private:
    std::string             m_in;
    std::string::size_type  m_inCursor;
    const std::string      *m_inPtr;
    std::string             m_out;
    std::string::size_type  m_outCursor;
    std::string            *m_outPtr;
};

#endif    //__PACKDATA_H
