/*---------------------------------------------------------------------------
// Filename:        smsa_pack.cpp
// Date:            2011-01-30 12:49:59
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#include "smsa_pack.h"

CPackData& operator<< ( CPackData& cPackData, const SWebSmsUser&  sWebSmsUser )
{
    cPackData.WriteData(sWebSmsUser.m_userId, 0, 64);
    cPackData.WriteData(sWebSmsUser.m_mobileNo, 0, 16);

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SWebSmsUser&  sWebSmsUser )
{
    cPackData.ReadData(sWebSmsUser.m_userId, 64, 0);
    cPackData.ReadData(sWebSmsUser.m_mobileNo, 16, 0);
    return cPackData;
}

void CScNotifySmsModifyblacklist::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_mscHead.Size())
        m_mscHead.m_len = 0;
    else
        m_mscHead.m_len = strData.size() - m_mscHead.Size();
    if(m_mscHead.m_cmd == 0) m_mscHead.m_cmd = SC_NOTIFY_SMS_MODIFYBLACKLIST;
    m_mscHead.PackData(strData);
}

void CScNotifySmsModifyblacklist::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + m_mscHead.Size() + 7);
        SetOutCursor( m_mscHead.Size() );
        (*this) << m_flag;
        {
            uint32_t nLen = m_userList.size();
            (*this) << nLen;
            VECTOR< SWebSmsUser >::const_iterator itr;
            for(itr = m_userList.cbegin(); itr != m_userList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        m_mscHead.m_cc = CalcCheckCode(strData, m_mscHead.Size());
        FormData(m_mscHead.Size());
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CScNotifySmsModifyblacklist::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CScNotifySmsModifyblacklist::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        SetInCursor(m_mscHead.Size());
        uLongf nHeadLen = m_mscHead.Size();
        uint16_t checkCode = CalcCheckCode(strData, m_mscHead.Size());
        m_mscHead.ResetInBuff(strData);
        if(checkCode != m_mscHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        SetInCursor(nHeadLen);
        (*this) >> m_flag;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_userList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SWebSmsUser tmpVal;
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

PACKRETCODE CScNotifySmsModifyblacklist::UnpackData(string& strData)
{
    m_mscHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CScSmsNotifyUploadmsg::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_mscHead.Size())
        m_mscHead.m_len = 0;
    else
        m_mscHead.m_len = strData.size() - m_mscHead.Size();
    if(m_mscHead.m_cmd == 0) m_mscHead.m_cmd = SC_SMS_NOTIFY_UPLOADMSG;
    m_mscHead.PackData(strData);
}

void CScSmsNotifyUploadmsg::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + m_mscHead.Size() + 7);
        SetOutCursor( m_mscHead.Size() );
        WriteData(m_fromId, 0, 64);
        (*this) << m_fromMobile;
        (*this) << m_bindFlag;
        WriteData(m_toId, 0, 64);
        WriteData(m_toMobile, 0, 16);
        (*this) << m_cmd;
        (*this) << m_message;
        m_mscHead.m_cc = CalcCheckCode(strData, m_mscHead.Size());
        FormData(m_mscHead.Size());
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CScSmsNotifyUploadmsg::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CScSmsNotifyUploadmsg::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        SetInCursor(m_mscHead.Size());
        uLongf nHeadLen = m_mscHead.Size();
        uint16_t checkCode = CalcCheckCode(strData, m_mscHead.Size());
        m_mscHead.ResetInBuff(strData);
        if(checkCode != m_mscHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        SetInCursor(nHeadLen);
        ReadData(m_fromId, 64, 0);
        (*this) >> m_fromMobile;
        (*this) >> m_bindFlag;
        ReadData(m_toId, 64, 0);
        ReadData(m_toMobile, 16, 0);
        (*this) >> m_cmd;
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

PACKRETCODE CScSmsNotifyUploadmsg::UnpackData(string& strData)
{
    m_mscHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CScReqSmsSendMessage::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_mscHead.Size())
        m_mscHead.m_len = 0;
    else
        m_mscHead.m_len = strData.size() - m_mscHead.Size();
    if(m_mscHead.m_cmd == 0) m_mscHead.m_cmd = SC_REQ_SMS_SEND_MESSAGE;
    m_mscHead.PackData(strData);
}

void CScReqSmsSendMessage::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + m_mscHead.Size() + 7);
        SetOutCursor( m_mscHead.Size() );
        WriteData(m_fromId, 0, 64);
        WriteData(m_toId, 0, 64);
        WriteData(m_toMobile, 0, 16);
        (*this) << m_message;
        (*this) << m_type;
        m_mscHead.m_cc = CalcCheckCode(strData, m_mscHead.Size());
        FormData(m_mscHead.Size());
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CScReqSmsSendMessage::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CScReqSmsSendMessage::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        SetInCursor(m_mscHead.Size());
        uLongf nHeadLen = m_mscHead.Size();
        uint16_t checkCode = CalcCheckCode(strData, m_mscHead.Size());
        m_mscHead.ResetInBuff(strData);
        if(checkCode != m_mscHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        SetInCursor(nHeadLen);
        ReadData(m_fromId, 64, 0);
        ReadData(m_toId, 64, 0);
        ReadData(m_toMobile, 16, 0);
        (*this) >> m_message;
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

PACKRETCODE CScReqSmsSendMessage::UnpackData(string& strData)
{
    m_mscHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CScRspSmsSendMessage::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_mscHead.Size())
        m_mscHead.m_len = 0;
    else
        m_mscHead.m_len = strData.size() - m_mscHead.Size();
    if(m_mscHead.m_cmd == 0) m_mscHead.m_cmd = SC_RSP_SMS_SEND_MESSAGE;
    m_mscHead.PackData(strData);
}

void CScRspSmsSendMessage::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + m_mscHead.Size() + 7);
        SetOutCursor( m_mscHead.Size() );
        (*this) << m_status;
        WriteData(m_fromId, 0, 64);
        WriteData(m_toId, 0, 64);
        WriteData(m_toMobile, 0, 16);
        (*this) << m_message;
        (*this) << m_type;
        m_mscHead.m_cc = CalcCheckCode(strData, m_mscHead.Size());
        FormData(m_mscHead.Size());
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CScRspSmsSendMessage::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CScRspSmsSendMessage::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        SetInCursor(m_mscHead.Size());
        uLongf nHeadLen = m_mscHead.Size();
        uint16_t checkCode = CalcCheckCode(strData, m_mscHead.Size());
        m_mscHead.ResetInBuff(strData);
        if(checkCode != m_mscHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        SetInCursor(nHeadLen);
        (*this) >> m_status;
        ReadData(m_fromId, 64, 0);
        ReadData(m_toId, 64, 0);
        ReadData(m_toMobile, 16, 0);
        (*this) >> m_message;
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

PACKRETCODE CScRspSmsSendMessage::UnpackData(string& strData)
{
    m_mscHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CScNotifySmsMobileonline::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_mscHead.Size())
        m_mscHead.m_len = 0;
    else
        m_mscHead.m_len = strData.size() - m_mscHead.Size();
    if(m_mscHead.m_cmd == 0) m_mscHead.m_cmd = SC_NOTIFY_SMS_MOBILEONLINE;
    m_mscHead.PackData(strData);
}

void CScNotifySmsMobileonline::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + m_mscHead.Size() + 7);
        SetOutCursor( m_mscHead.Size() );
        WriteData(m_userId, 0, 64);
        (*this) << m_onlineFlag;
        (*this) << m_revFlag;
        m_mscHead.m_cc = CalcCheckCode(strData, m_mscHead.Size());
        FormData(m_mscHead.Size());
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CScNotifySmsMobileonline::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CScNotifySmsMobileonline::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        SetInCursor(m_mscHead.Size());
        uLongf nHeadLen = m_mscHead.Size();
        uint16_t checkCode = CalcCheckCode(strData, m_mscHead.Size());
        m_mscHead.ResetInBuff(strData);
        if(checkCode != m_mscHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        SetInCursor(nHeadLen);
        ReadData(m_userId, 64, 0);
        (*this) >> m_onlineFlag;
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

PACKRETCODE CScNotifySmsMobileonline::UnpackData(string& strData)
{
    m_mscHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CScRspSmsMobileonline::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_mscHead.Size())
        m_mscHead.m_len = 0;
    else
        m_mscHead.m_len = strData.size() - m_mscHead.Size();
    if(m_mscHead.m_cmd == 0) m_mscHead.m_cmd = SC_RSP_SMS_MOBILEONLINE;
    m_mscHead.PackData(strData);
}

void CScRspSmsMobileonline::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + m_mscHead.Size() + 7);
        SetOutCursor( m_mscHead.Size() );
        (*this) << m_status;
        WriteData(m_userId, 0, 64);
        (*this) << m_onlineFlag;
        (*this) << m_revFlag;
        m_mscHead.m_cc = CalcCheckCode(strData, m_mscHead.Size());
        FormData(m_mscHead.Size());
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CScRspSmsMobileonline::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CScRspSmsMobileonline::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        SetInCursor(m_mscHead.Size());
        uLongf nHeadLen = m_mscHead.Size();
        uint16_t checkCode = CalcCheckCode(strData, m_mscHead.Size());
        m_mscHead.ResetInBuff(strData);
        if(checkCode != m_mscHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        SetInCursor(nHeadLen);
        (*this) >> m_status;
        ReadData(m_userId, 64, 0);
        (*this) >> m_onlineFlag;
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

PACKRETCODE CScRspSmsMobileonline::UnpackData(string& strData)
{
    m_mscHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CScNotifySmsMobilebind::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_mscHead.Size())
        m_mscHead.m_len = 0;
    else
        m_mscHead.m_len = strData.size() - m_mscHead.Size();
    if(m_mscHead.m_cmd == 0) m_mscHead.m_cmd = SC_NOTIFY_SMS_MOBILEBIND;
    m_mscHead.PackData(strData);
}

void CScNotifySmsMobilebind::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + m_mscHead.Size() + 7);
        SetOutCursor( m_mscHead.Size() );
        WriteData(m_userId, 0, 64);
        (*this) << m_bindFlag;
        m_mscHead.m_cc = CalcCheckCode(strData, m_mscHead.Size());
        FormData(m_mscHead.Size());
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CScNotifySmsMobilebind::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CScNotifySmsMobilebind::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        SetInCursor(m_mscHead.Size());
        uLongf nHeadLen = m_mscHead.Size();
        uint16_t checkCode = CalcCheckCode(strData, m_mscHead.Size());
        m_mscHead.ResetInBuff(strData);
        if(checkCode != m_mscHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        SetInCursor(nHeadLen);
        ReadData(m_userId, 64, 0);
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

PACKRETCODE CScNotifySmsMobilebind::UnpackData(string& strData)
{
    m_mscHead.UnpackData(strData);
    return UnpackBody(strData);
}

void CScConfirmSmsMobilebind::PackHead(string& strData)
{
    ResetOutBuff(strData);
    if(strData.size() < m_mscHead.Size())
        m_mscHead.m_len = 0;
    else
        m_mscHead.m_len = strData.size() - m_mscHead.Size();
    if(m_mscHead.m_cmd == 0) m_mscHead.m_cmd = SC_CONFIRM_SMS_MOBILEBIND;
    m_mscHead.PackData(strData);
}

void CScConfirmSmsMobilebind::PackBody(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + m_mscHead.Size() + 7);
        SetOutCursor( m_mscHead.Size() );
        (*this) << m_status;
        WriteData(m_userId, 0, 64);
        (*this) << m_bindFlag;
        m_mscHead.m_cc = CalcCheckCode(strData, m_mscHead.Size());
        FormData(m_mscHead.Size());
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

void CScConfirmSmsMobilebind::PackData(string& strData)
{
    PackBody(strData);
    PackHead(strData);
}

PACKRETCODE CScConfirmSmsMobilebind::UnpackBody(string& strData)
{
    try
    {
        ResetInBuff(strData);
        SetInCursor(m_mscHead.Size());
        uLongf nHeadLen = m_mscHead.Size();
        uint16_t checkCode = CalcCheckCode(strData, m_mscHead.Size());
        m_mscHead.ResetInBuff(strData);
        if(checkCode != m_mscHead.PeekCc()) return PACK_CHECKCODE_ERROR;
        SetInCursor(nHeadLen);
        (*this) >> m_status;
        ReadData(m_userId, 64, 0);
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

PACKRETCODE CScConfirmSmsMobilebind::UnpackData(string& strData)
{
    m_mscHead.UnpackData(strData);
    return UnpackBody(strData);
}

