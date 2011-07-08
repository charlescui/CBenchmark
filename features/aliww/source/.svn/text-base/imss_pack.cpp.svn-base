/*---------------------------------------------------------------------------
// Filename:        imss_pack.cpp
// Date:            2011-01-30 12:49:14
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#include "imss_pack.h"

CPackData& operator<< ( CPackData& cPackData, const SImMsg&  sImMsg )
{
    cPackData << sImMsg.m_len;
    cPackData << sImMsg.m_flag;
    cPackData << sImMsg.m_cmdid;
    cPackData << sImMsg.m_seqid;
    cPackData.WriteData(sImMsg.m_message, 0, sImMsg.m_message.length());

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SImMsg&  sImMsg )
{
    cPackData >> sImMsg.m_len;
    cPackData >> sImMsg.m_flag;
    cPackData >> sImMsg.m_cmdid;
    cPackData >> sImMsg.m_seqid;
    cPackData.ReadData(sImMsg.m_message, 0, 0);
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const SIpBlackSs&  sIpBlackSs )
{
    uint8_t nFieldNum = 4;
    cPackData << nFieldNum;
    cPackData << FT_UINT32;
    cPackData << sIpBlackSs.m_ip;
    cPackData << FT_UINT32;
    cPackData << sIpBlackSs.m_starttime;
    cPackData << FT_UINT32;
    cPackData << sIpBlackSs.m_lasttime;
    cPackData << FT_UINT32;
    cPackData << sIpBlackSs.m_netmask;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SIpBlackSs&  sIpBlackSs )
{
    uint8_t num;
    cPackData >> num;
    if(num < 4) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sIpBlackSs.m_ip;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sIpBlackSs.m_starttime;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sIpBlackSs.m_lasttime;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sIpBlackSs.m_netmask;
    for(int i = 4; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const SEhmsGroupStatus&  sEhmsGroupStatus )
{
    uint8_t nFieldNum = 5;
    do {
        if(sEhmsGroupStatus.m_predefsts == 0)
            nFieldNum--;
        else
            break;
        if(sEhmsGroupStatus.m_status == 0)
            nFieldNum--;
        else
            break;
        if(sEhmsGroupStatus.m_groupId == 0)
            nFieldNum--;
        else
            break;
    } while(0);
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sEhmsGroupStatus.m_userId;
    cPackData << FT_STRING;
    cPackData << sEhmsGroupStatus.m_groupName;
    if(nFieldNum == 2)
        return cPackData;
    cPackData << FT_UINT32;
    cPackData << sEhmsGroupStatus.m_groupId;
    if(nFieldNum == 3)
        return cPackData;
    cPackData << FT_UINT8;
    cPackData << sEhmsGroupStatus.m_status;
    if(nFieldNum == 4)
        return cPackData;
    cPackData << FT_UINT8;
    cPackData << sEhmsGroupStatus.m_predefsts;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SEhmsGroupStatus&  sEhmsGroupStatus )
{
    uint8_t num;
    cPackData >> num;
    if(num < 2) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sEhmsGroupStatus.m_userId;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sEhmsGroupStatus.m_groupName;
    try
    {
        if(num < 3) return cPackData;
        cPackData >> field;
        if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
        cPackData >> sEhmsGroupStatus.m_groupId;
        if(num < 4) return cPackData;
        cPackData >> field;
        if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
        cPackData >> sEhmsGroupStatus.m_status;
        if(num < 5) return cPackData;
        cPackData >> field;
        if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
        cPackData >> sEhmsGroupStatus.m_predefsts;
    }
    catch(PACKRETCODE)
    {
        return cPackData;
    }
    for(int i = 5; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CImSsSendimmsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = IM_SS_SENDIMMSG;
    m_ssHead.PackData(strData);
}

void CImSsSendimmsg::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)7;
        (*this) << FT_STRING;
        (*this) << m_senduid;
        (*this) << FT_STRING;
        (*this) << m_touid;
        (*this) << FT_UINT8;
        (*this) << m_type;
        (*this) << FT_STRING;
        (*this) << m_message;
        (*this) << FT_UINT8;
        (*this) << m_esshiftflag;
        (*this) << FT_UINT8;
        (*this) << m_relationship;
        (*this) << FT_UINT32;
        (*this) << m_uniqtime;
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImSsSendimmsg::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CImSsSendimmsg::UnpackBody(string& strData)
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
        if(num < 4) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_senduid;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_touid;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_message;
        try
        {
            if(num < 5) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_esshiftflag;
            if(num < 6) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_relationship;
            if(num < 7) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_uniqtime;
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

PACKRETCODE CImSsSendimmsg::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CImSsForcedisconnect::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = IM_SS_FORCEDISCONNECT;
    m_ssHead.PackData(strData);
}

void CImSsForcedisconnect::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        (*this) << m_uid;
        (*this) << FT_UINT8;
        (*this) << m_type;
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImSsForcedisconnect::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CImSsForcedisconnect::UnpackBody(string& strData)
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
        (*this) >> m_uid;
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

PACKRETCODE CImSsForcedisconnect::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CImSsNtfusrstatus::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = IM_SS_NTFUSRSTATUS;
    m_ssHead.PackData(strData);
}

void CImSsNtfusrstatus::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)5;
        (*this) << FT_STRING;
        (*this) << m_uid;
        (*this) << FT_UINT8;
        (*this) << m_basicstatus;
        (*this) << FT_UINT8;
        (*this) << m_predefstatus;
        (*this) << FT_UINT32;
        (*this) << m_clinetip;
        (*this) << FT_STRING;
        (*this) << m_version;
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImSsNtfusrstatus::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CImSsNtfusrstatus::UnpackBody(string& strData)
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
        if(num < 5) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_uid;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_basicstatus;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_predefstatus;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_clinetip;
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

PACKRETCODE CImSsNtfusrstatus::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CImSsReqPeerinfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = IM_SS_REQ_PEERINFO;
    m_ssHead.PackData(strData);
}

void CImSsReqPeerinfo::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        (*this) << m_targetUid;
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImSsReqPeerinfo::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CImSsReqPeerinfo::UnpackBody(string& strData)
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
        if(num < 1) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_targetUid;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

PACKRETCODE CImSsReqPeerinfo::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CImSsRspPeerinfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = IM_SS_RSP_PEERINFO;
    m_ssHead.PackData(strData);
}

void CImSsRspPeerinfo::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)9;
        (*this) << FT_UINT8;
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
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImSsRspPeerinfo::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CImSsRspPeerinfo::UnpackBody(string& strData)
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
        if(num < 9) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
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

PACKRETCODE CImSsRspPeerinfo::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CImSsNtfusrextinfoup::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = IM_SS_NTFUSREXTINFOUP;
    m_ssHead.PackData(strData);
}

void CImSsNtfusrextinfoup::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        (*this) << m_extType;
        (*this) << FT_STRING;
        (*this) << m_extInfo;
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImSsNtfusrextinfoup::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CImSsNtfusrextinfoup::UnpackBody(string& strData)
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
        (*this) >> m_extType;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_extInfo;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

PACKRETCODE CImSsNtfusrextinfoup::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CImSsReqFtsaddr::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = IM_SS_REQ_FTSADDR;
    m_ssHead.PackData(strData);
}

void CImSsReqFtsaddr::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        (*this) << m_sessionId;
        (*this) << FT_UINT16;
        (*this) << m_type;
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImSsReqFtsaddr::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CImSsReqFtsaddr::UnpackBody(string& strData)
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

PACKRETCODE CImSsReqFtsaddr::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CImSsRspFtsaddr::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = IM_SS_RSP_FTSADDR;
    m_ssHead.PackData(strData);
}

void CImSsRspFtsaddr::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)4;
        (*this) << FT_UINT8;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_serverIp;
        (*this) << FT_UINT16;
        (*this) << m_serverPort;
        (*this) << FT_STRING;
        (*this) << m_sessionId;
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImSsRspFtsaddr::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CImSsRspFtsaddr::UnpackBody(string& strData)
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
        if(num < 4) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
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
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

PACKRETCODE CImSsRspFtsaddr::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CImSsReqSubcribeMsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = IM_SS_REQ_SUBCRIBE_MSG;
    m_ssHead.PackData(strData);
}

void CImSsReqSubcribeMsg::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        (*this) << m_msg;
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
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImSsReqSubcribeMsg::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CImSsReqSubcribeMsg::UnpackBody(string& strData)
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
        if(num < 1) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_msg;
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

PACKRETCODE CImSsReqSubcribeMsg::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CImSsRspSubcribeMsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = IM_SS_RSP_SUBCRIBE_MSG;
    m_ssHead.PackData(strData);
}

void CImSsRspSubcribeMsg::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_UINT8;
        (*this) << m_status;
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImSsRspSubcribeMsg::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CImSsRspSubcribeMsg::UnpackBody(string& strData)
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
        if(num < 1) return PACK_LENGTH_ERROR;
        CFieldType field;
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

PACKRETCODE CImSsRspSubcribeMsg::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CImReqSystemmessage::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = IM_REQ_SYSTEMMESSAGE;
    m_ssHead.PackData(strData);
}

void CImReqSystemmessage::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)6;
        (*this) << FT_STRING;
        (*this) << m_touid;
        (*this) << FT_UINT8;
        (*this) << m_saveflag;
        (*this) << FT_UINT32;
        (*this) << m_sysid;
        (*this) << FT_UINT16;
        (*this) << m_cmdId;
        (*this) << FT_STRING;
        (*this) << m_style;
        (*this) << FT_STRING;
        (*this) << m_message;
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImReqSystemmessage::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CImReqSystemmessage::UnpackBody(string& strData)
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
        if(num < 6) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_touid;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_saveflag;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_sysid;
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

PACKRETCODE CImReqSystemmessage::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CImRspSystemmessage::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = IM_RSP_SYSTEMMESSAGE;
    m_ssHead.PackData(strData);
}

void CImRspSystemmessage::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        (*this) << m_touid;
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImRspSystemmessage::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CImRspSystemmessage::UnpackBody(string& strData)
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
        if(num < 1) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_touid;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

PACKRETCODE CImRspSystemmessage::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CImSsNtfaddaccept::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = IM_SS_NTFADDACCEPT;
    m_ssHead.PackData(strData);
}

void CImSsNtfaddaccept::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_STRING;
        (*this) << m_loginid;
        (*this) << FT_STRING;
        (*this) << m_contactid;
        (*this) << FT_UINT8;
        (*this) << m_status;
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImSsNtfaddaccept::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CImSsNtfaddaccept::UnpackBody(string& strData)
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
        (*this) >> m_loginid;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_contactid;
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

PACKRETCODE CImSsNtfaddaccept::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CImSsNtfforbidip::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = IM_SS_NTFFORBIDIP;
    m_ssHead.PackData(strData);
}

void CImSsNtfforbidip::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT8;
        (*this) << m_type;
        (*this) << (FIELDTYPE)(FT_VECTOR + 2);
        (*this) << FT_STRUCT;
        {
            uint16_t nLen = (uint16_t)m_blackIpList.size();
            (*this) << nLen;
            VECTOR< SIpBlackSs >::const_iterator itr;
            for(itr = m_blackIpList.cbegin(); itr != m_blackIpList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImSsNtfforbidip::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CImSsNtfforbidip::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint16_t nSize;
            (*this) >> nSize;
            m_blackIpList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SIpBlackSs tmpVal;
                (*this) >> tmpVal;
                m_blackIpList.push_back(tmpVal);
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

PACKRETCODE CImSsNtfforbidip::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CImSsNtfWatchInfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = IM_SS_NTF_WATCH_INFO;
    m_ssHead.PackData(strData);
}

void CImSsNtfWatchInfo::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT8;
        (*this) << m_type;
        (*this) << FT_STRING;
        (*this) << m_message;
        (*this) << FT_STRING;
        (*this) << m_site;
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImSsNtfWatchInfo::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CImSsNtfWatchInfo::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_message;
        try
        {
            if(num < 3) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_site;
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

PACKRETCODE CImSsNtfWatchInfo::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CSsNtfRefreshContact::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = SS_NTF_REFRESH_CONTACT;
    m_ssHead.PackData(strData);
}

void CSsNtfRefreshContact::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
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
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CSsNtfRefreshContact::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CSsNtfRefreshContact::UnpackBody(string& strData)
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

PACKRETCODE CSsNtfRefreshContact::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CSsNtfFeeds::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = SS_NTF_FEEDS;
    m_ssHead.PackData(strData);
}

void CSsNtfFeeds::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
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
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CSsNtfFeeds::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CSsNtfFeeds::UnpackBody(string& strData)
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

PACKRETCODE CSsNtfFeeds::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CSsNtfUserSnsinfo::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = SS_NTF_USER_SNSINFO;
    m_ssHead.PackData(strData);
}

void CSsNtfUserSnsinfo::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
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
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CSsNtfUserSnsinfo::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CSsNtfUserSnsinfo::UnpackBody(string& strData)
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

PACKRETCODE CSsNtfUserSnsinfo::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CSsNtfAddRcnt::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = SS_NTF_ADD_RCNT;
    m_ssHead.PackData(strData);
}

void CSsNtfAddRcnt::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)5;
        (*this) << FT_STRING;
        (*this) << m_fromId;
        (*this) << FT_STRING;
        (*this) << m_contactId;
        (*this) << FT_UINT8;
        (*this) << m_optime;
        (*this) << FT_UINT8;
        (*this) << m_type;
        (*this) << FT_STRING;
        (*this) << m_site;
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CSsNtfAddRcnt::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CSsNtfAddRcnt::UnpackBody(string& strData)
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
        if(num < 5) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_fromId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_contactId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_optime;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_site;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

PACKRETCODE CSsNtfAddRcnt::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CImSsNtfOperationtip::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = IM_SS_NTF_OPERATIONTIP;
    m_ssHead.PackData(strData);
}

void CImSsNtfOperationtip::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_STRING;
        (*this) << m_contactId;
        (*this) << FT_STRING;
        (*this) << m_ntfmessage;
        (*this) << FT_UINT32;
        (*this) << m_ntftime;
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImSsNtfOperationtip::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CImSsNtfOperationtip::UnpackBody(string& strData)
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

PACKRETCODE CImSsNtfOperationtip::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CSsNtfEhmsGroupsts::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = SS_NTF_EHMS_GROUPSTS;
    m_ssHead.PackData(strData);
}

void CSsNtfEhmsGroupsts::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRUCT;
        (*this) << m_groupSts;
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CSsNtfEhmsGroupsts::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CSsNtfEhmsGroupsts::UnpackBody(string& strData)
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
        if(num < 1) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRUCT) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_groupSts;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

PACKRETCODE CSsNtfEhmsGroupsts::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CSsNtfEhmsLogin::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = SS_NTF_EHMS_LOGIN;
    m_ssHead.PackData(strData);
}

void CSsNtfEhmsLogin::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        (*this) << m_uid;
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CSsNtfEhmsLogin::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CSsNtfEhmsLogin::UnpackBody(string& strData)
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

PACKRETCODE CSsNtfEhmsLogin::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CSsReqGetallehmsgrpsts::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = SS_REQ_GETALLEHMSGRPSTS;
    m_ssHead.PackData(strData);
}

void CSsReqGetallehmsgrpsts::PackBody(string& strData)
{
}

void CSsReqGetallehmsgrpsts::PackData(string& strData)
{
    PackHead(strData);
}

PACKRETCODE CSsReqGetallehmsgrpsts::UnpackBody(string& strData)
{
    return PACK_RIGHT;
}

PACKRETCODE CSsReqGetallehmsgrpsts::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CSsRspGetallehmsgrpsts::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = SS_RSP_GETALLEHMSGRPSTS;
    m_ssHead.PackData(strData);
}

void CSsRspGetallehmsgrpsts::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT8;
        (*this) << m_retcode;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_groupStsList.size();
            (*this) << nLen;
            VECTOR< SEhmsGroupStatus >::const_iterator itr;
            for(itr = m_groupStsList.cbegin(); itr != m_groupStsList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CSsRspGetallehmsgrpsts::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CSsRspGetallehmsgrpsts::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_groupStsList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SEhmsGroupStatus tmpVal;
                (*this) >> tmpVal;
                m_groupStsList.push_back(tmpVal);
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

PACKRETCODE CSsRspGetallehmsgrpsts::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CImSsSendHmsmsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = IM_SS_SEND_HMSMSG;
    m_ssHead.PackData(strData);
}

void CImSsSendHmsmsg::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)9;
        (*this) << FT_STRING;
        (*this) << m_senduid;
        (*this) << FT_STRING;
        (*this) << m_targetfid;
        (*this) << FT_STRING;
        (*this) << m_touid;
        (*this) << FT_UINT8;
        (*this) << m_type;
        (*this) << FT_STRING;
        (*this) << m_message;
        (*this) << FT_UINT16;
        (*this) << m_actionType;
        (*this) << FT_UINT16;
        (*this) << m_cmdType;
        (*this) << FT_UINT32;
        (*this) << m_reserved;
        (*this) << FT_UINT32;
        (*this) << m_uniqtime;
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImSsSendHmsmsg::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CImSsSendHmsmsg::UnpackBody(string& strData)
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
        if(num < 9) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_senduid;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_targetfid;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_touid;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_message;
        (*this) >> field;
        if(field.m_baseType != FT_UINT16) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_actionType;
        (*this) >> field;
        if(field.m_baseType != FT_UINT16) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_cmdType;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_reserved;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_uniqtime;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

PACKRETCODE CImSsSendHmsmsg::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CImReqSystemmapmessage::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = IM_REQ_SYSTEMMAPMESSAGE;
    m_ssHead.PackData(strData);
}

void CImReqSystemmapmessage::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_sysId;
        (*this) << FT_MAP;
        (*this) << FT_STRING;
        (*this) << FT_STRING;
        {
            uint8_t nSize = m_mapmessage.size();
            (*this) << nSize;
            map< string,string >::const_iterator itr;
            for(itr = m_mapmessage.begin(); itr != m_mapmessage.end(); ++itr)
            {
                (*this) << itr->first;
                (*this) << itr->second;
            }
        }
        (*this) << FT_STRING;
        (*this) << m_extmessage;
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImReqSystemmapmessage::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CImReqSystemmapmessage::UnpackBody(string& strData)
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
                m_mapmessage[key] = value;
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

PACKRETCODE CImReqSystemmapmessage::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CImRspSystemmapmessage::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = IM_RSP_SYSTEMMAPMESSAGE;
    m_ssHead.PackData(strData);
}

void CImRspSystemmapmessage::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT32;
        (*this) << m_sysId;
        (*this) << FT_UINT32;
        (*this) << m_status;
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImRspSystemmapmessage::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CImRspSystemmapmessage::UnpackBody(string& strData)
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
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_sysId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
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

PACKRETCODE CImRspSystemmapmessage::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CImSsNtfWebsysmessage::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = IM_SS_NTF_WEBSYSMESSAGE;
    m_ssHead.PackData(strData);
}

void CImSsNtfWebsysmessage::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)8;
        (*this) << FT_STRING;
        (*this) << m_createid;
        (*this) << FT_INT32;
        (*this) << m_cmdid;
        (*this) << FT_STRING;
        (*this) << m_style;
        (*this) << FT_STRING;
        (*this) << m_message;
        (*this) << FT_STRING;
        (*this) << m_serviceid;
        (*this) << FT_STRING;
        (*this) << m_webid;
        (*this) << FT_UINT16;
        (*this) << m_saveflag;
        (*this) << FT_STRING;
        (*this) << m_expiretime;
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImSsNtfWebsysmessage::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CImSsNtfWebsysmessage::UnpackBody(string& strData)
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
        if(num < 8) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_createid;
        (*this) >> field;
        if(field.m_baseType != FT_INT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_cmdid;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_style;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_message;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_serviceid;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_webid;
        (*this) >> field;
        if(field.m_baseType != FT_UINT16) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_saveflag;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_expiretime;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

PACKRETCODE CImSsNtfWebsysmessage::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CImSsNtfWebusermessage::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = IM_SS_NTF_WEBUSERMESSAGE;
    m_ssHead.PackData(strData);
}

void CImSsNtfWebusermessage::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)5;
        (*this) << FT_STRING;
        (*this) << m_fromId;
        (*this) << FT_INT32;
        (*this) << m_cmdId;
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
        (*this) << FT_STRING;
        (*this) << m_serviceid;
        (*this) << FT_STRING;
        (*this) << m_webid;
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CImSsNtfWebusermessage::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CImSsNtfWebusermessage::UnpackBody(string& strData)
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
        if(num < 5) return PACK_LENGTH_ERROR;
        CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_fromId;
        (*this) >> field;
        if(field.m_baseType != FT_INT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_cmdId;
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
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_serviceid;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_webid;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

PACKRETCODE CImSsNtfWebusermessage::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CSsNtfUnbindDisconnect::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_ssHead.Size())
        m_ssHead.m_len = m_ssHead.SizeExt() - m_ssHead.Size();
    else
        m_ssHead.m_len = strData.size() - m_ssHead.Size();
    if(m_ssHead.m_cmd == 0) m_ssHead.m_cmd = SS_NTF_UNBIND_DISCONNECT;
    m_ssHead.PackData(strData);
}

void CSsNtfUnbindDisconnect::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        uint32_t nHeadLen = m_ssHead.SizeExt();
        strData.reserve(Size() + nHeadLen + 7);
        SetOutCursor(nHeadLen);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT8;
        (*this) << m_type;
        (*this) << FT_STRING;
        (*this) << m_remark;
        FormData( nHeadLen );
        m_ssHead.m_cc = CalcCheckCode(strData, nHeadLen);
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CSsNtfUnbindDisconnect::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CSsNtfUnbindDisconnect::UnpackBody(string& strData)
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

PACKRETCODE CSsNtfUnbindDisconnect::UnpackData(string& strData)
{
    m_ssHead.UnpackData(strData);
    return UnpackBody(strData);
}

