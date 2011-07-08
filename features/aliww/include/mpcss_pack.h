/*---------------------------------------------------------------------------
// Filename:        mpcss_pack.h
// Date:            2011-01-30 12:50:24
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __MPCSS_PACK_H__
#define __MPCSS_PACK_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"
#include "ss_head.h"
#include "const_macro.h"

using namespace std;

enum MPCSS_REQUEST
{
    MPCS_SS_REQ_CREATECHATROOM  = 0xd100001,
    MPCS_SS_REQ_TRANSMSG        = 0xd100010,

};

enum MPCSS_RESPONSE
{
    MPCS_SS_RSP_CREATECHATROOM  = 0xd110001,
    MPCS_SS_RSP_TRANSMSG        = 0xd110010,

};

enum MPCSS_NOTIFY
{
    MPCS_SS_NTF_EXITCHATROOM    = 0xd110003,
    MPCS_SS_NTF_FORCEDISCONNECT = 0xd110007,
    MPCS_SS_NTF_ROOMUSERINFO    = 0xd110008,

};

class CMpcsSsReqCreatechatroom : public CPackData
{
public:
    enum
    {
        CMD_ID = MPCS_SS_REQ_CREATECHATROOM
    };
    ~CMpcsSsReqCreatechatroom() { }
public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CMpcsSsReqCreatechatroom::Size() const
{
    return 1;
}
class CMpcsSsRspCreatechatroom : public CPackData
{
public:
    enum
    {
        CMD_ID = MPCS_SS_RSP_CREATECHATROOM
    };
    CMpcsSsRspCreatechatroom()
    {
    }

    ~CMpcsSsRspCreatechatroom() { }
    CMpcsSsRspCreatechatroom(const uint8_t&  chRetcode, const uint32_t&  dwRoomId, const string&  strPassword, const string&  strMpcsIp, const uint16_t&  wPort)
    {
        m_retcode = chRetcode;
        m_roomId = dwRoomId;
        m_password = strPassword;
        m_mpcsIp = strMpcsIp;
        m_port = wPort;
    }
    CMpcsSsRspCreatechatroom&  operator=( const CMpcsSsRspCreatechatroom&  cMpcsSsRspCreatechatroom )
    {
        m_retcode = cMpcsSsRspCreatechatroom.m_retcode;
        m_roomId = cMpcsSsRspCreatechatroom.m_roomId;
        m_password = cMpcsSsRspCreatechatroom.m_password;
        m_mpcsIp = cMpcsSsRspCreatechatroom.m_mpcsIp;
        m_port = cMpcsSsRspCreatechatroom.m_port;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CMpcsSsRspCreatechatroom::Size() const
{
    uint32_t nSize = 21;
    nSize += m_password.length();
    nSize += m_mpcsIp.length();
    return nSize;
}

class CMpcsSsNtfExitchatroom : public CPackData
{
public:
    enum
    {
        CMD_ID = MPCS_SS_NTF_EXITCHATROOM
    };
    CMpcsSsNtfExitchatroom()
    {
    }

    ~CMpcsSsNtfExitchatroom() { }
    CMpcsSsNtfExitchatroom(const string&  strUserId, const VECTOR< uint32_t >&  vecRoomList)
    {
        m_userId = strUserId;
        m_roomList = vecRoomList;
    }
    CMpcsSsNtfExitchatroom&  operator=( const CMpcsSsNtfExitchatroom&  cMpcsSsNtfExitchatroom )
    {
        m_userId = cMpcsSsNtfExitchatroom.m_userId;
        m_roomList = cMpcsSsNtfExitchatroom.m_roomList;
        return *this;
    }

    const string&  GetUserId () const { return m_userId; }
    bool SetUserId ( const string&  strUserId )
    {
        m_userId = strUserId;
        return true;
    }
    const VECTOR< uint32_t >&  GetRoomList () const { return m_roomList; }
    bool SetRoomList ( const VECTOR< uint32_t >&  vecRoomList )
    {
        m_roomList = vecRoomList;
        return true;
    }
private:
    string m_userId;
    VECTOR< uint32_t > m_roomList;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CMpcsSsNtfExitchatroom::Size() const
{
    uint32_t nSize = 12;
    nSize += m_userId.length();
    nSize += m_roomList.size() * 4;
    return nSize;
}

class CMpcsSsReqTransmsg : public CPackData
{
public:
    enum
    {
        CMD_ID = MPCS_SS_REQ_TRANSMSG
    };
    CMpcsSsReqTransmsg()
    {
    }

    ~CMpcsSsReqTransmsg() { }
    CMpcsSsReqTransmsg(const uint32_t&  dwRoomId, const int32_t&  lFd, const string&  strPacket)
    {
        m_roomId = dwRoomId;
        m_fd = lFd;
        m_packet = strPacket;
    }
    CMpcsSsReqTransmsg&  operator=( const CMpcsSsReqTransmsg&  cMpcsSsReqTransmsg )
    {
        m_roomId = cMpcsSsReqTransmsg.m_roomId;
        m_fd = cMpcsSsReqTransmsg.m_fd;
        m_packet = cMpcsSsReqTransmsg.m_packet;
        return *this;
    }

    const uint32_t&  GetRoomId () const { return m_roomId; }
    bool SetRoomId ( const uint32_t&  dwRoomId )
    {
        m_roomId = dwRoomId;
        return true;
    }
    const int32_t&  GetFd () const { return m_fd; }
    bool SetFd ( const int32_t&  lFd )
    {
        m_fd = lFd;
        return true;
    }
    const string&  GetPacket () const { return m_packet; }
    bool SetPacket ( const string&  strPacket )
    {
        m_packet = strPacket;
        return true;
    }
private:
    uint32_t m_roomId;
    int32_t m_fd;
    string m_packet;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CMpcsSsReqTransmsg::Size() const
{
    uint32_t nSize = 16;
    nSize += m_packet.length();
    return nSize;
}

class CMpcsSsRspTransmsg : public CPackData
{
public:
    enum
    {
        CMD_ID = MPCS_SS_RSP_TRANSMSG
    };
    CMpcsSsRspTransmsg()
    {
    }

    ~CMpcsSsRspTransmsg() { }
    CMpcsSsRspTransmsg(const string&  strUserId, const string&  strDeskey, const string&  strPacket)
    {
        m_userId = strUserId;
        m_deskey = strDeskey;
        m_packet = strPacket;
    }
    CMpcsSsRspTransmsg&  operator=( const CMpcsSsRspTransmsg&  cMpcsSsRspTransmsg )
    {
        m_userId = cMpcsSsRspTransmsg.m_userId;
        m_deskey = cMpcsSsRspTransmsg.m_deskey;
        m_packet = cMpcsSsRspTransmsg.m_packet;
        return *this;
    }

    const string&  GetUserId () const { return m_userId; }
    bool SetUserId ( const string&  strUserId )
    {
        m_userId = strUserId;
        return true;
    }
    const string&  GetDeskey () const { return m_deskey; }
    bool SetDeskey ( const string&  strDeskey )
    {
        m_deskey = strDeskey;
        return true;
    }
    const string&  GetPacket () const { return m_packet; }
    bool SetPacket ( const string&  strPacket )
    {
        m_packet = strPacket;
        return true;
    }
private:
    string m_userId;
    string m_deskey;
    string m_packet;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CMpcsSsRspTransmsg::Size() const
{
    uint32_t nSize = 16;
    nSize += m_userId.length();
    nSize += m_deskey.length();
    nSize += m_packet.length();
    return nSize;
}

class CMpcsSsNtfForcedisconnect : public CPackData
{
public:
    enum
    {
        CMD_ID = MPCS_SS_NTF_FORCEDISCONNECT
    };
    CMpcsSsNtfForcedisconnect()
    {
    }

    ~CMpcsSsNtfForcedisconnect() { }
    CMpcsSsNtfForcedisconnect(const string&  strUserId)
    {
        m_userId = strUserId;
    }
    CMpcsSsNtfForcedisconnect&  operator=( const CMpcsSsNtfForcedisconnect&  cMpcsSsNtfForcedisconnect )
    {
        m_userId = cMpcsSsNtfForcedisconnect.m_userId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CMpcsSsNtfForcedisconnect::Size() const
{
    uint32_t nSize = 6;
    nSize += m_userId.length();
    return nSize;
}

class CMpcsSsNtfRoomuserinfo : public CPackData
{
public:
    enum
    {
        CMD_ID = MPCS_SS_NTF_ROOMUSERINFO
    };
    CMpcsSsNtfRoomuserinfo()
    {
    }

    ~CMpcsSsNtfRoomuserinfo() { }
    CMpcsSsNtfRoomuserinfo(const string&  strUserId, const uint32_t&  dwRoomId, const int32_t&  lFd, const string&  strVersion)
    {
        m_userId = strUserId;
        m_roomId = dwRoomId;
        m_fd = lFd;
        m_version = strVersion;
    }
    CMpcsSsNtfRoomuserinfo&  operator=( const CMpcsSsNtfRoomuserinfo&  cMpcsSsNtfRoomuserinfo )
    {
        m_userId = cMpcsSsNtfRoomuserinfo.m_userId;
        m_roomId = cMpcsSsNtfRoomuserinfo.m_roomId;
        m_fd = cMpcsSsNtfRoomuserinfo.m_fd;
        m_version = cMpcsSsNtfRoomuserinfo.m_version;
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
    const int32_t&  GetFd () const { return m_fd; }
    bool SetFd ( const int32_t&  lFd )
    {
        m_fd = lFd;
        return true;
    }
    const string&  GetVersion () const { return m_version; }
    bool SetVersion ( const string&  strVersion )
    {
        m_version = strVersion;
        return true;
    }
private:
    string m_userId;
    uint32_t m_roomId;
    int32_t m_fd;
    string m_version;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CMpcsSsNtfRoomuserinfo::Size() const
{
    uint32_t nSize = 21;
    nSize += m_userId.length();
    nSize += m_version.length();
    return nSize;
}

#endif
