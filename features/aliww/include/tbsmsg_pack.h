/*---------------------------------------------------------------------------
// Filename:        tbsmsg_pack.h
// Date:            2011-01-30 12:50:13
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __TBSMSG_PACK_H__
#define __TBSMSG_PACK_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"
#include "const_macro.h"
#include "scs_head.h"
#include "tbsstrc_pack.h"

using namespace std;

enum TBSMSG_REQUEST
{
    TBSC_REQ_LOAD_OFFLINEMSG    = 0x6300031,
    TBSC_REQ_UNLOAD_OFFLINEMSG  = 0x6300032,
    TBSC_REQ_ADD_OFFLINEMSG     = 0x6300033,
    TBSC_REQ_GET_FILTERMSG      = 0x6300034,

};

enum TBSMSG_RESPONSE
{
    TBSC_RSP_UNLOAD_OFFLINEMSG  = 0x6310031,
    TBSC_RSP_GET_FILTERMSG      = 0x6300034,

};

class CTbscReqLoadOfflinemsg : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_REQ_LOAD_OFFLINEMSG
    };
    CTbscReqLoadOfflinemsg()
    {
    }

    ~CTbscReqLoadOfflinemsg() { }
    CTbscReqLoadOfflinemsg(const string&  strTribeId, const VECTOR< STribeMsg >&  vecTribeMsgList)
    {
        m_tribeId = strTribeId;
        m_tribeMsgList = vecTribeMsgList;
    }
    CTbscReqLoadOfflinemsg&  operator=( const CTbscReqLoadOfflinemsg&  cTbscReqLoadOfflinemsg )
    {
        m_tribeId = cTbscReqLoadOfflinemsg.m_tribeId;
        m_tribeMsgList = cTbscReqLoadOfflinemsg.m_tribeMsgList;
        return *this;
    }

    const string&  GetTribeId () const { return m_tribeId; }
    bool SetTribeId ( const string&  strTribeId )
    {
        if(strTribeId.size() > 20)
            return false;
        m_tribeId = strTribeId;
        return true;
    }
    const VECTOR< STribeMsg >&  GetTribeMsgList () const { return m_tribeMsgList; }
    bool SetTribeMsgList ( const VECTOR< STribeMsg >&  vecTribeMsgList )
    {
        m_tribeMsgList = vecTribeMsgList;
        return true;
    }
private:
    string m_tribeId;
    VECTOR< STribeMsg > m_tribeMsgList;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscReqLoadOfflinemsg::Size() const
{
    uint32_t nSize = 12;
    nSize += m_tribeId.length();
    for(uint32_t i = 0; i < m_tribeMsgList.size(); i++)
    {
        nSize += m_tribeMsgList[i].Size();
    }
    return nSize;
}

class CTbscReqUnloadOfflinemsg : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_REQ_UNLOAD_OFFLINEMSG
    };
    CTbscReqUnloadOfflinemsg()
    {
    }

    ~CTbscReqUnloadOfflinemsg() { }
    CTbscReqUnloadOfflinemsg(const string&  strTribeId)
    {
        m_tribeId = strTribeId;
    }
    CTbscReqUnloadOfflinemsg&  operator=( const CTbscReqUnloadOfflinemsg&  cTbscReqUnloadOfflinemsg )
    {
        m_tribeId = cTbscReqUnloadOfflinemsg.m_tribeId;
        return *this;
    }

    const string&  GetTribeId () const { return m_tribeId; }
    bool SetTribeId ( const string&  strTribeId )
    {
        if(strTribeId.size() > 20)
            return false;
        m_tribeId = strTribeId;
        return true;
    }
private:
    string m_tribeId;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscReqUnloadOfflinemsg::Size() const
{
    uint32_t nSize = 6;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbscRspUnloadOfflinemsg : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_RSP_UNLOAD_OFFLINEMSG
    };
    CTbscRspUnloadOfflinemsg()
    {
    }

    ~CTbscRspUnloadOfflinemsg() { }
    CTbscRspUnloadOfflinemsg(const uint8_t&  chRetcode, const string&  strTribeId, const VECTOR< STribeMsg >&  vecTribeMsgList)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_tribeMsgList = vecTribeMsgList;
    }
    CTbscRspUnloadOfflinemsg&  operator=( const CTbscRspUnloadOfflinemsg&  cTbscRspUnloadOfflinemsg )
    {
        m_retcode = cTbscRspUnloadOfflinemsg.m_retcode;
        m_tribeId = cTbscRspUnloadOfflinemsg.m_tribeId;
        m_tribeMsgList = cTbscRspUnloadOfflinemsg.m_tribeMsgList;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const string&  GetTribeId () const { return m_tribeId; }
    bool SetTribeId ( const string&  strTribeId )
    {
        if(strTribeId.size() > 20)
            return false;
        m_tribeId = strTribeId;
        return true;
    }
    const VECTOR< STribeMsg >&  GetTribeMsgList () const { return m_tribeMsgList; }
    bool SetTribeMsgList ( const VECTOR< STribeMsg >&  vecTribeMsgList )
    {
        m_tribeMsgList = vecTribeMsgList;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    VECTOR< STribeMsg > m_tribeMsgList;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscRspUnloadOfflinemsg::Size() const
{
    uint32_t nSize = 14;
    nSize += m_tribeId.length();
    for(uint32_t i = 0; i < m_tribeMsgList.size(); i++)
    {
        nSize += m_tribeMsgList[i].Size();
    }
    return nSize;
}

class CTbscReqAddOfflinemsg : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_REQ_ADD_OFFLINEMSG
    };
    CTbscReqAddOfflinemsg()
    {
    }

    ~CTbscReqAddOfflinemsg() { }
    CTbscReqAddOfflinemsg(const string&  strTribeId, const STribeMsg&  sTribeMsg)
    {
        m_tribeId = strTribeId;
        m_tribeMsg = sTribeMsg;
    }
    CTbscReqAddOfflinemsg&  operator=( const CTbscReqAddOfflinemsg&  cTbscReqAddOfflinemsg )
    {
        m_tribeId = cTbscReqAddOfflinemsg.m_tribeId;
        m_tribeMsg = cTbscReqAddOfflinemsg.m_tribeMsg;
        return *this;
    }

    const string&  GetTribeId () const { return m_tribeId; }
    bool SetTribeId ( const string&  strTribeId )
    {
        if(strTribeId.size() > 20)
            return false;
        m_tribeId = strTribeId;
        return true;
    }
    const STribeMsg&  GetTribeMsg () const { return m_tribeMsg; }
    bool SetTribeMsg ( const STribeMsg&  sTribeMsg )
    {
        m_tribeMsg = sTribeMsg;
        return true;
    }
private:
    string m_tribeId;
    STribeMsg m_tribeMsg;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscReqAddOfflinemsg::Size() const
{
    uint32_t nSize = 7;
    nSize += m_tribeId.length();
    nSize += m_tribeMsg.Size();
    return nSize;
}

class CTbscReqGetFiltermsg : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_REQ_GET_FILTERMSG
    };
    CTbscReqGetFiltermsg()
    {
    }

    ~CTbscReqGetFiltermsg() { }
    CTbscReqGetFiltermsg(const string&  strTribeId, const string&  strUserId, const uint32_t&  dwLastMsgid)
    {
        m_tribeId = strTribeId;
        m_userId = strUserId;
        m_lastMsgid = dwLastMsgid;
    }
    CTbscReqGetFiltermsg&  operator=( const CTbscReqGetFiltermsg&  cTbscReqGetFiltermsg )
    {
        m_tribeId = cTbscReqGetFiltermsg.m_tribeId;
        m_userId = cTbscReqGetFiltermsg.m_userId;
        m_lastMsgid = cTbscReqGetFiltermsg.m_lastMsgid;
        return *this;
    }

    const string&  GetTribeId () const { return m_tribeId; }
    bool SetTribeId ( const string&  strTribeId )
    {
        if(strTribeId.size() > 20)
            return false;
        m_tribeId = strTribeId;
        return true;
    }
    const string&  GetUserId () const { return m_userId; }
    bool SetUserId ( const string&  strUserId )
    {
        if(strUserId.size() > 64)
            return false;
        m_userId = strUserId;
        return true;
    }
    const uint32_t&  GetLastMsgid () const { return m_lastMsgid; }
    bool SetLastMsgid ( const uint32_t&  dwLastMsgid )
    {
        m_lastMsgid = dwLastMsgid;
        return true;
    }
private:
    string m_tribeId;
    string m_userId;
    uint32_t m_lastMsgid;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscReqGetFiltermsg::Size() const
{
    uint32_t nSize = 16;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    return nSize;
}

class CTbscRspGetFiltermsg : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_RSP_GET_FILTERMSG
    };
    CTbscRspGetFiltermsg()
    {
    }

    ~CTbscRspGetFiltermsg() { }
    CTbscRspGetFiltermsg(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strUserId, const VECTOR< STribeMsg >&  vecTribeMsgList)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_userId = strUserId;
        m_tribeMsgList = vecTribeMsgList;
    }
    CTbscRspGetFiltermsg&  operator=( const CTbscRspGetFiltermsg&  cTbscRspGetFiltermsg )
    {
        m_retcode = cTbscRspGetFiltermsg.m_retcode;
        m_tribeId = cTbscRspGetFiltermsg.m_tribeId;
        m_userId = cTbscRspGetFiltermsg.m_userId;
        m_tribeMsgList = cTbscRspGetFiltermsg.m_tribeMsgList;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const string&  GetTribeId () const { return m_tribeId; }
    bool SetTribeId ( const string&  strTribeId )
    {
        if(strTribeId.size() > 20)
            return false;
        m_tribeId = strTribeId;
        return true;
    }
    const string&  GetUserId () const { return m_userId; }
    bool SetUserId ( const string&  strUserId )
    {
        if(strUserId.size() > 64)
            return false;
        m_userId = strUserId;
        return true;
    }
    const VECTOR< STribeMsg >&  GetTribeMsgList () const { return m_tribeMsgList; }
    bool SetTribeMsgList ( const VECTOR< STribeMsg >&  vecTribeMsgList )
    {
        m_tribeMsgList = vecTribeMsgList;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    string m_userId;
    VECTOR< STribeMsg > m_tribeMsgList;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscRspGetFiltermsg::Size() const
{
    uint32_t nSize = 19;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    for(uint32_t i = 0; i < m_tribeMsgList.size(); i++)
    {
        nSize += m_tribeMsgList[i].Size();
    }
    return nSize;
}

#endif
