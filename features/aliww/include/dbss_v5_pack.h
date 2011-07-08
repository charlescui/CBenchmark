/*---------------------------------------------------------------------------
// Filename:        dbss_v5_pack.h
// Date:            2011-01-30 12:50:05
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __DBSS_V5_PACK_H__
#define __DBSS_V5_PACK_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"
#include "ss_v5_head.h"

using namespace std;

#ifndef UID_LENGTH
#define UID_LENGTH 64
#endif 

enum DBSS_V5_CMD
{
    SS_REQ_SMS_REVIMMSG = 0x858,
};

class CSsReqSmsRevimmsg : public CPackData
{
public:
    enum
    {
        CMD_ID = SS_REQ_SMS_REVIMMSG
    };
    CSsReqSmsRevimmsg()
    {
    }

    ~CSsReqSmsRevimmsg() { }
    CSsReqSmsRevimmsg(const string&  strFromId, const string&  strToId, const string&  strMessage)
    {
        m_fromId = strFromId;
        m_toId = strToId;
        m_message = strMessage;
    }
    CSsReqSmsRevimmsg&  operator=( const CSsReqSmsRevimmsg&  cSsReqSmsRevimmsg )
    {
        m_fromId = cSsReqSmsRevimmsg.m_fromId;
        m_toId = cSsReqSmsRevimmsg.m_toId;
        m_message = cSsReqSmsRevimmsg.m_message;
        return *this;
    }

    const string&  GetFromId () const { return m_fromId; }
    bool SetFromId ( const string&  strFromId )
    {
        if(strFromId.size() > 64)
            return false;
        m_fromId = strFromId;
        return true;
    }
    const string&  GetToId () const { return m_toId; }
    bool SetToId ( const string&  strToId )
    {
        if(strToId.size() > 64)
            return false;
        m_toId = strToId;
        return true;
    }
    const string&  GetMessage () const { return m_message; }
    bool SetMessage ( const string&  strMessage )
    {
        m_message = strMessage;
        return true;
    }
private:
    string m_fromId;
    string m_toId;
    string m_message;

public:
    CSsV5Head m_ssV5Head;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSsReqSmsRevimmsg::Size() const
{
    uint32_t nSize = 12;
    nSize += m_fromId.length();
    nSize += m_toId.length();
    nSize += m_message.length();
    return nSize;
}

#endif
