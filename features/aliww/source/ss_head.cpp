/*---------------------------------------------------------------------------
// Filename:        ss_head.cpp
// Date:            2011-01-30 12:50:24
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#include "ss_head.h"

CPackData& operator<< ( CPackData& cPackData, const SUserSid&  sUserSid )
{
    cPackData << sUserSid.m_userId;
    cPackData << sUserSid.m_servId;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SUserSid&  sUserSid )
{
    cPackData >> sUserSid.m_userId;
    cPackData >> sUserSid.m_servId;
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const SUserCommInfo&  sUserCommInfo )
{
    cPackData << sUserCommInfo.m_fromId;
    {
        uint32_t nLen = sUserCommInfo.m_receiverList.size();
        cPackData << nLen;
        VECTOR< SUserSid >::const_iterator itr;
        for(itr = sUserCommInfo.m_receiverList.begin(); itr != sUserCommInfo.m_receiverList.end(); ++itr)
        {
            cPackData << (*itr);
        }
    }

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SUserCommInfo&  sUserCommInfo )
{
    cPackData >> sUserCommInfo.m_fromId;
    {
        uint32_t nSize;
        cPackData >> nSize;
        if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
        sUserCommInfo.m_receiverList.reserve(nSize);
        for(uint32_t i = 0; i < nSize; i++)
        {
            SUserSid tmpVal;
            cPackData >> tmpVal;
            sUserCommInfo.m_receiverList.push_back(tmpVal);
        }
    }
    return cPackData;
}

void CSsHead::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        m_lrc = 0;
        (*this) << m_starter;
        (*this) << m_msgtype;
        (*this) << m_ttl;
        (*this) << m_lrc;
        (*this) << m_version;
        (*this) << m_origsid;
        (*this) << m_cmd;
        (*this) << m_seq;
        (*this) << m_len;
        (*this) << m_cc;
        (*this) << m_reserved;
;
        if((m_reserved & 0x01) == 1)
            (*this) << m_userInfo;
        m_lrc = CalcLrc(strData, Size());
        SetOutCursor(3);
        (*this) << m_lrc;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CSsHead::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        if(CalcLrc(strData, Size()) != 0) return PACK_INVALID;
        (*this) >> m_starter;
        (*this) >> m_msgtype;
        (*this) >> m_ttl;
        (*this) >> m_lrc;
        (*this) >> m_version;
        (*this) >> m_origsid;
        (*this) >> m_cmd;
        (*this) >> m_seq;
        (*this) >> m_len;
        (*this) >> m_cc;
        (*this) >> m_reserved;
;
        if((m_reserved & 0x01) == 1)
            (*this) >> m_userInfo;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

