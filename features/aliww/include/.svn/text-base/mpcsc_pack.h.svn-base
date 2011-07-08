/*---------------------------------------------------------------------------
// Filename:        mpcsc_pack.h
// Date:            2011-01-30 12:50:22
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __MPCSC_PACK_H__
#define __MPCSC_PACK_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"
#include "des.h"
#include <zlib.h>
#include "sc_head.h"
#include "const_macro.h"

using namespace std;

enum MPCSC_REQUEST
{
    IM_REQ_CREATECHATROOM       = 0xd000001,
    MPCS_REQ_JOINCHATROOM       = 0xd000002,
    MPCS_REQ_EXITCHATROOM       = 0xd000003,
    MPCS_REQ_GETCHATROOMUSERS   = 0xd000004,
    MPCS_REQ_SEND_MPCMSG        = 0xd000005,

};

enum MPCSC_RESPONSE
{
    IM_RSP_CREATECHATROOM       = 0xd010001,
    MPCS_RSP_JOINCHATROOM       = 0xd010002,
    MPCS_RSP_EXITCHATROOM       = 0xd010003,
    MPCS_RSP_GETCHATROOMUSERS   = 0xd010004,
    MPCS_RSP_SEND_MPCMSG        = 0xd010005,

};

enum MPCSC_NOTIFY
{
    MPCS_NTF_MPCMSG             = 0xd020005,
    MPCS_NTF_CHATROOMSTATUS     = 0xd020006,
    MPCS_NTF_FORCEDISCONNECT    = 0xd020007,

};

class CImReqCreatechatroom : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_CREATECHATROOM
    };
    ~CImReqCreatechatroom() { }
public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqCreatechatroom::Size() const
{
    return 1;
}
class CImRspCreatechatroom : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_CREATECHATROOM
    };
    CImRspCreatechatroom()
    {
    }

    ~CImRspCreatechatroom() { }
    CImRspCreatechatroom(const uint8_t&  chRetcode, const uint32_t&  dwRoomId, const string&  strPassword, const string&  strMpcsIp, const uint16_t&  wPort)
    {
        m_retcode = chRetcode;
        m_roomId = dwRoomId;
        m_password = strPassword;
        m_mpcsIp = strMpcsIp;
        m_port = wPort;
    }
    CImRspCreatechatroom&  operator=( const CImRspCreatechatroom&  cImRspCreatechatroom )
    {
        m_retcode = cImRspCreatechatroom.m_retcode;
        m_roomId = cImRspCreatechatroom.m_roomId;
        m_password = cImRspCreatechatroom.m_password;
        m_mpcsIp = cImRspCreatechatroom.m_mpcsIp;
        m_port = cImRspCreatechatroom.m_port;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const uint32_t&  GetRoomId () const { return m_roomId; }
    bool SetRoomId ( const uint32_t&  dwRoomId )
    {
        m_roomId = dwRoomId;
        return true;
    }
    const string&  GetPassword () const { return m_password; }
    bool SetPassword ( const string&  strPassword )
    {
        m_password = strPassword;
        return true;
    }
    const string&  GetMpcsIp () const { return m_mpcsIp; }
    bool SetMpcsIp ( const string&  strMpcsIp )
    {
        m_mpcsIp = strMpcsIp;
        return true;
    }
    const uint16_t&  GetPort () const { return m_port; }
    bool SetPort ( const uint16_t&  wPort )
    {
        m_port = wPort;
        return true;
    }
private:
    uint8_t m_retcode;
    uint32_t m_roomId;
    string m_password;
    string m_mpcsIp;
    uint16_t m_port;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspCreatechatroom::Size() const
{
    uint32_t nSize = 21;
    nSize += m_password.length();
    nSize += m_mpcsIp.length();
    return nSize;
}

class CMpcsReqJoinchatroom : public CPackData
{
public:
    enum
    {
        CMD_ID = MPCS_REQ_JOINCHATROOM
    };
    CMpcsReqJoinchatroom() : m_fromId("")
    {
    }

    ~CMpcsReqJoinchatroom() { }
    CMpcsReqJoinchatroom(const string&  strUserId, const string&  strPassword, const string&  strVersion, const string&  strFromId= "")
    {
        m_userId = strUserId;
        m_password = strPassword;
        m_version = strVersion;
        m_fromId = strFromId;
    }
    CMpcsReqJoinchatroom&  operator=( const CMpcsReqJoinchatroom&  cMpcsReqJoinchatroom )
    {
        m_userId = cMpcsReqJoinchatroom.m_userId;
        m_password = cMpcsReqJoinchatroom.m_password;
        m_version = cMpcsReqJoinchatroom.m_version;
        m_fromId = cMpcsReqJoinchatroom.m_fromId;
        return *this;
    }

    const string&  GetUserId () const { return m_userId; }
    bool SetUserId ( const string&  strUserId )
    {
        m_userId = strUserId;
        return true;
    }
    const string&  GetPassword () const { return m_password; }
    bool SetPassword ( const string&  strPassword )
    {
        m_password = strPassword;
        return true;
    }
    const string&  GetVersion () const { return m_version; }
    bool SetVersion ( const string&  strVersion )
    {
        m_version = strVersion;
        return true;
    }
    const string&  GetFromId () const { return m_fromId; }
    bool SetFromId ( const string&  strFromId )
    {
        m_fromId = strFromId;
        return true;
    }
private:
    string m_userId;
    string m_password;
    string m_version;
    string m_fromId;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CMpcsReqJoinchatroom::Size() const
{
    uint32_t nSize = 21;
    nSize += m_userId.length();
    nSize += m_password.length();
    nSize += m_version.length();
    nSize += m_fromId.length();
    return nSize;
}

class CMpcsRspJoinchatroom : public CPackData
{
public:
    enum
    {
        CMD_ID = MPCS_RSP_JOINCHATROOM
    };
    CMpcsRspJoinchatroom()
    {
    }

    ~CMpcsRspJoinchatroom() { }
    CMpcsRspJoinchatroom(const uint8_t&  chRetcode, const uint32_t&  dwRoomId, const uint32_t&  dwMaxMember)
    {
        m_retcode = chRetcode;
        m_roomId = dwRoomId;
        m_maxMember = dwMaxMember;
    }
    CMpcsRspJoinchatroom&  operator=( const CMpcsRspJoinchatroom&  cMpcsRspJoinchatroom )
    {
        m_retcode = cMpcsRspJoinchatroom.m_retcode;
        m_roomId = cMpcsRspJoinchatroom.m_roomId;
        m_maxMember = cMpcsRspJoinchatroom.m_maxMember;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const uint32_t&  GetRoomId () const { return m_roomId; }
    bool SetRoomId ( const uint32_t&  dwRoomId )
    {
        m_roomId = dwRoomId;
        return true;
    }
    const uint32_t&  GetMaxMember () const { return m_maxMember; }
    bool SetMaxMember ( const uint32_t&  dwMaxMember )
    {
        m_maxMember = dwMaxMember;
        return true;
    }
private:
    uint8_t m_retcode;
    uint32_t m_roomId;
    uint32_t m_maxMember;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CMpcsRspJoinchatroom::Size() const
{
    return 13;
}
class CMpcsReqExitchatroom : public CPackData
{
public:
    enum
    {
        CMD_ID = MPCS_REQ_EXITCHATROOM
    };
    CMpcsReqExitchatroom()
    {
    }

    ~CMpcsReqExitchatroom() { }
    CMpcsReqExitchatroom(const string&  strUserId)
    {
        m_userId = strUserId;
    }
    CMpcsReqExitchatroom&  operator=( const CMpcsReqExitchatroom&  cMpcsReqExitchatroom )
    {
        m_userId = cMpcsReqExitchatroom.m_userId;
        return *this;
    }

    const string&  GetUserId () const { return m_userId; }
    bool SetUserId ( const string&  strUserId )
    {
        m_userId = strUserId;
        return true;
    }
private:
    string m_userId;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CMpcsReqExitchatroom::Size() const
{
    uint32_t nSize = 6;
    nSize += m_userId.length();
    return nSize;
}

class CMpcsRspExitchatroom : public CPackData
{
public:
    enum
    {
        CMD_ID = MPCS_RSP_EXITCHATROOM
    };
    CMpcsRspExitchatroom()
    {
    }

    ~CMpcsRspExitchatroom() { }
    CMpcsRspExitchatroom(const uint8_t&  chRetcode, const uint32_t&  dwRoomId)
    {
        m_retcode = chRetcode;
        m_roomId = dwRoomId;
    }
    CMpcsRspExitchatroom&  operator=( const CMpcsRspExitchatroom&  cMpcsRspExitchatroom )
    {
        m_retcode = cMpcsRspExitchatroom.m_retcode;
        m_roomId = cMpcsRspExitchatroom.m_roomId;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const uint32_t&  GetRoomId () const { return m_roomId; }
    bool SetRoomId ( const uint32_t&  dwRoomId )
    {
        m_roomId = dwRoomId;
        return true;
    }
private:
    uint8_t m_retcode;
    uint32_t m_roomId;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CMpcsRspExitchatroom::Size() const
{
    return 8;
}
class CMpcsReqGetchatroomusers : public CPackData
{
public:
    enum
    {
        CMD_ID = MPCS_REQ_GETCHATROOMUSERS
    };
    CMpcsReqGetchatroomusers()
    {
    }

    ~CMpcsReqGetchatroomusers() { }
    CMpcsReqGetchatroomusers(const string&  strUserId)
    {
        m_userId = strUserId;
    }
    CMpcsReqGetchatroomusers&  operator=( const CMpcsReqGetchatroomusers&  cMpcsReqGetchatroomusers )
    {
        m_userId = cMpcsReqGetchatroomusers.m_userId;
        return *this;
    }

    const string&  GetUserId () const { return m_userId; }
    bool SetUserId ( const string&  strUserId )
    {
        m_userId = strUserId;
        return true;
    }
private:
    string m_userId;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CMpcsReqGetchatroomusers::Size() const
{
    uint32_t nSize = 6;
    nSize += m_userId.length();
    return nSize;
}

class CMpcsRspGetchatroomusers : public CPackData
{
public:
    enum
    {
        CMD_ID = MPCS_RSP_GETCHATROOMUSERS
    };
    CMpcsRspGetchatroomusers()
    {
    }

    ~CMpcsRspGetchatroomusers() { }
    CMpcsRspGetchatroomusers(const uint8_t&  chRetcode, const uint32_t&  dwRoomId, const VECTOR< string >&  vecUserList)
    {
        m_retcode = chRetcode;
        m_roomId = dwRoomId;
        m_userList = vecUserList;
    }
    CMpcsRspGetchatroomusers&  operator=( const CMpcsRspGetchatroomusers&  cMpcsRspGetchatroomusers )
    {
        m_retcode = cMpcsRspGetchatroomusers.m_retcode;
        m_roomId = cMpcsRspGetchatroomusers.m_roomId;
        m_userList = cMpcsRspGetchatroomusers.m_userList;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const uint32_t&  GetRoomId () const { return m_roomId; }
    bool SetRoomId ( const uint32_t&  dwRoomId )
    {
        m_roomId = dwRoomId;
        return true;
    }
    const VECTOR< string >&  GetUserList () const { return m_userList; }
    bool SetUserList ( const VECTOR< string >&  vecUserList )
    {
        m_userList = vecUserList;
        return true;
    }
private:
    uint8_t m_retcode;
    uint32_t m_roomId;
    VECTOR< string > m_userList;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CMpcsRspGetchatroomusers::Size() const
{
    uint32_t nSize = 14;
    nSize += m_userList.size() * 4;
    for(uint32_t i = 0; i < m_userList.size(); i++)
    {
        nSize += m_userList[i].length();
    }
    return nSize;
}

class CMpcsReqSendMpcmsg : public CPackData
{
public:
    enum
    {
        CMD_ID = MPCS_REQ_SEND_MPCMSG
    };
    CMpcsReqSendMpcmsg()
    {
    }

    ~CMpcsReqSendMpcmsg() { }
    CMpcsReqSendMpcmsg(const string&  strUserId, const uint8_t&  chType, const string&  strTargetId, const string&  strMessage)
    {
        m_userId = strUserId;
        m_type = chType;
        m_targetId = strTargetId;
        m_message = strMessage;
    }
    CMpcsReqSendMpcmsg&  operator=( const CMpcsReqSendMpcmsg&  cMpcsReqSendMpcmsg )
    {
        m_userId = cMpcsReqSendMpcmsg.m_userId;
        m_type = cMpcsReqSendMpcmsg.m_type;
        m_targetId = cMpcsReqSendMpcmsg.m_targetId;
        m_message = cMpcsReqSendMpcmsg.m_message;
        return *this;
    }

    const string&  GetUserId () const { return m_userId; }
    bool SetUserId ( const string&  strUserId )
    {
        m_userId = strUserId;
        return true;
    }
    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const string&  GetTargetId () const { return m_targetId; }
    bool SetTargetId ( const string&  strTargetId )
    {
        m_targetId = strTargetId;
        return true;
    }
    const string&  GetMessage () const { return m_message; }
    bool SetMessage ( const string&  strMessage )
    {
        m_message = strMessage;
        return true;
    }
private:
    string m_userId;
    uint8_t m_type;
    string m_targetId;
    string m_message;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CMpcsReqSendMpcmsg::Size() const
{
    uint32_t nSize = 18;
    nSize += m_userId.length();
    nSize += m_targetId.length();
    nSize += m_message.length();
    return nSize;
}

class CMpcsRspSendMpcmsg : public CPackData
{
public:
    enum
    {
        CMD_ID = MPCS_RSP_SEND_MPCMSG
    };
    CMpcsRspSendMpcmsg()
    {
    }

    ~CMpcsRspSendMpcmsg() { }
    CMpcsRspSendMpcmsg(const uint8_t&  chRetcode, const uint32_t&  dwRoomId, const uint8_t&  chType, const string&  strTargetId, const string&  strMessage)
    {
        m_retcode = chRetcode;
        m_roomId = dwRoomId;
        m_type = chType;
        m_targetId = strTargetId;
        m_message = strMessage;
    }
    CMpcsRspSendMpcmsg&  operator=( const CMpcsRspSendMpcmsg&  cMpcsRspSendMpcmsg )
    {
        m_retcode = cMpcsRspSendMpcmsg.m_retcode;
        m_roomId = cMpcsRspSendMpcmsg.m_roomId;
        m_type = cMpcsRspSendMpcmsg.m_type;
        m_targetId = cMpcsRspSendMpcmsg.m_targetId;
        m_message = cMpcsRspSendMpcmsg.m_message;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const uint32_t&  GetRoomId () const { return m_roomId; }
    bool SetRoomId ( const uint32_t&  dwRoomId )
    {
        m_roomId = dwRoomId;
        return true;
    }
    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const string&  GetTargetId () const { return m_targetId; }
    bool SetTargetId ( const string&  strTargetId )
    {
        m_targetId = strTargetId;
        return true;
    }
    const string&  GetMessage () const { return m_message; }
    bool SetMessage ( const string&  strMessage )
    {
        m_message = strMessage;
        return true;
    }
private:
    uint8_t m_retcode;
    uint32_t m_roomId;
    uint8_t m_type;
    string m_targetId;
    string m_message;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CMpcsRspSendMpcmsg::Size() const
{
    uint32_t nSize = 20;
    nSize += m_targetId.length();
    nSize += m_message.length();
    return nSize;
}

class CMpcsNtfMpcmsg : public CPackData
{
public:
    enum
    {
        CMD_ID = MPCS_NTF_MPCMSG
    };
    CMpcsNtfMpcmsg()
    {
    }

    ~CMpcsNtfMpcmsg() { }
    CMpcsNtfMpcmsg(const string&  strUserId, const uint32_t&  dwRoomId, const uint8_t&  chType, const string&  strTargetId, const string&  strMessage)
    {
        m_userId = strUserId;
        m_roomId = dwRoomId;
        m_type = chType;
        m_targetId = strTargetId;
        m_message = strMessage;
    }
    CMpcsNtfMpcmsg&  operator=( const CMpcsNtfMpcmsg&  cMpcsNtfMpcmsg )
    {
        m_userId = cMpcsNtfMpcmsg.m_userId;
        m_roomId = cMpcsNtfMpcmsg.m_roomId;
        m_type = cMpcsNtfMpcmsg.m_type;
        m_targetId = cMpcsNtfMpcmsg.m_targetId;
        m_message = cMpcsNtfMpcmsg.m_message;
        return *this;
    }

    const string&  GetUserId () const { return m_userId; }
    bool SetUserId ( const string&  strUserId )
    {
        m_userId = strUserId;
        return true;
    }
    const uint32_t&  GetRoomId () const { return m_roomId; }
    bool SetRoomId ( const uint32_t&  dwRoomId )
    {
        m_roomId = dwRoomId;
        return true;
    }
    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const string&  GetTargetId () const { return m_targetId; }
    bool SetTargetId ( const string&  strTargetId )
    {
        m_targetId = strTargetId;
        return true;
    }
    const string&  GetMessage () const { return m_message; }
    bool SetMessage ( const string&  strMessage )
    {
        m_message = strMessage;
        return true;
    }
private:
    string m_userId;
    uint32_t m_roomId;
    uint8_t m_type;
    string m_targetId;
    string m_message;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CMpcsNtfMpcmsg::Size() const
{
    uint32_t nSize = 23;
    nSize += m_userId.length();
    nSize += m_targetId.length();
    nSize += m_message.length();
    return nSize;
}

class CMpcsNtfChatroomstatus : public CPackData
{
public:
    enum
    {
        CMD_ID = MPCS_NTF_CHATROOMSTATUS
    };
    CMpcsNtfChatroomstatus()
    {
    }

    ~CMpcsNtfChatroomstatus() { }
    CMpcsNtfChatroomstatus(const uint32_t&  dwRoomId, const uint8_t&  chType, const string&  strUserId)
    {
        m_roomId = dwRoomId;
        m_type = chType;
        m_userId = strUserId;
    }
    CMpcsNtfChatroomstatus&  operator=( const CMpcsNtfChatroomstatus&  cMpcsNtfChatroomstatus )
    {
        m_roomId = cMpcsNtfChatroomstatus.m_roomId;
        m_type = cMpcsNtfChatroomstatus.m_type;
        m_userId = cMpcsNtfChatroomstatus.m_userId;
        return *this;
    }

    const uint32_t&  GetRoomId () const { return m_roomId; }
    bool SetRoomId ( const uint32_t&  dwRoomId )
    {
        m_roomId = dwRoomId;
        return true;
    }
    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const string&  GetUserId () const { return m_userId; }
    bool SetUserId ( const string&  strUserId )
    {
        m_userId = strUserId;
        return true;
    }
private:
    uint32_t m_roomId;
    uint8_t m_type;
    string m_userId;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CMpcsNtfChatroomstatus::Size() const
{
    uint32_t nSize = 13;
    nSize += m_userId.length();
    return nSize;
}

class CMpcsNtfForcedisconnect : public CPackData
{
public:
    enum
    {
        CMD_ID = MPCS_NTF_FORCEDISCONNECT
    };
    CMpcsNtfForcedisconnect()
    {
    }

    ~CMpcsNtfForcedisconnect() { }
    CMpcsNtfForcedisconnect(const uint32_t&  dwRoomId, const uint8_t&  chType, const string&  strRemark)
    {
        m_roomId = dwRoomId;
        m_type = chType;
        m_remark = strRemark;
    }
    CMpcsNtfForcedisconnect&  operator=( const CMpcsNtfForcedisconnect&  cMpcsNtfForcedisconnect )
    {
        m_roomId = cMpcsNtfForcedisconnect.m_roomId;
        m_type = cMpcsNtfForcedisconnect.m_type;
        m_remark = cMpcsNtfForcedisconnect.m_remark;
        return *this;
    }

    const uint32_t&  GetRoomId () const { return m_roomId; }
    bool SetRoomId ( const uint32_t&  dwRoomId )
    {
        m_roomId = dwRoomId;
        return true;
    }
    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const string&  GetRemark () const { return m_remark; }
    bool SetRemark ( const string&  strRemark )
    {
        m_remark = strRemark;
        return true;
    }
private:
    uint32_t m_roomId;
    uint8_t m_type;
    string m_remark;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CMpcsNtfForcedisconnect::Size() const
{
    uint32_t nSize = 13;
    nSize += m_remark.length();
    return nSize;
}

#endif
