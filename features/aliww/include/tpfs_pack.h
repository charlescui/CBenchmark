/*---------------------------------------------------------------------------
// Filename:        tpfs_pack.h
// Date:            2011-03-09 14:14:03
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __TPFS_PACK_H__
#define __TPFS_PACK_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"
#include "des.h"
#include <zlib.h>
#include "sc_head.h"
#include "const_macro.h"
#include "imsc_cmd.h"

using namespace std;

class CImReqChatChkver : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_CHAT_CHKVER
    };
    CImReqChatChkver()
    {
    }

    ~CImReqChatChkver() { }
    CImReqChatChkver(const string&  strVersion)
    {
        m_version = strVersion;
    }
    CImReqChatChkver&  operator=( const CImReqChatChkver&  cImReqChatChkver )
    {
        m_version = cImReqChatChkver.m_version;
        return *this;
    }

    const string&  GetVersion () const { return m_version; }
    bool SetVersion ( const string&  strVersion )
    {
        if(strVersion.size() > 128)
            return false;
        m_version = strVersion;
        return true;
    }
private:
    string m_version;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqChatChkver::Size() const
{
    uint32_t nSize = 6;
    nSize += m_version.length();
    return nSize;
}

class CImRspChatChkver : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_CHAT_CHKVER
    };
    CImRspChatChkver()
    {
    }

    ~CImRspChatChkver() { }
    CImRspChatChkver(const uint32_t&  dwRetcode, const string&  strRemark, const uint32_t&  dwConnectNo, const string&  strPubkey)
    {
        m_retcode = dwRetcode;
        m_remark = strRemark;
        m_connectNo = dwConnectNo;
        m_pubkey = strPubkey;
    }
    CImRspChatChkver&  operator=( const CImRspChatChkver&  cImRspChatChkver )
    {
        m_retcode = cImRspChatChkver.m_retcode;
        m_remark = cImRspChatChkver.m_remark;
        m_connectNo = cImRspChatChkver.m_connectNo;
        m_pubkey = cImRspChatChkver.m_pubkey;
        return *this;
    }

    const uint32_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint32_t&  dwRetcode )
    {
        m_retcode = dwRetcode;
        return true;
    }
    const string&  GetRemark () const { return m_remark; }
    bool SetRemark ( const string&  strRemark )
    {
        if(strRemark.size() > 256)
            return false;
        m_remark = strRemark;
        return true;
    }
    const uint32_t&  GetConnectNo () const { return m_connectNo; }
    bool SetConnectNo ( const uint32_t&  dwConnectNo )
    {
        m_connectNo = dwConnectNo;
        return true;
    }
    const string&  GetPubkey () const { return m_pubkey; }
    bool SetPubkey ( const string&  strPubkey )
    {
        m_pubkey = strPubkey;
        return true;
    }
private:
    uint32_t m_retcode;
    string m_remark;
    uint32_t m_connectNo;
    string m_pubkey;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspChatChkver::Size() const
{
    uint32_t nSize = 21;
    nSize += m_remark.length();
    nSize += m_pubkey.length();
    return nSize;
}

class CImReqChatPreidentify : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_CHAT_PREIDENTIFY
    };
    CImReqChatPreidentify()
    {
    }

    ~CImReqChatPreidentify() { }
    CImReqChatPreidentify(const uint32_t&  dwConnectNo, const string&  strWorkKey, const string&  strStrlogin)
    {
        m_connectNo = dwConnectNo;
        m_workKey = strWorkKey;
        m_strlogin = strStrlogin;
    }
    CImReqChatPreidentify&  operator=( const CImReqChatPreidentify&  cImReqChatPreidentify )
    {
        m_connectNo = cImReqChatPreidentify.m_connectNo;
        m_workKey = cImReqChatPreidentify.m_workKey;
        m_strlogin = cImReqChatPreidentify.m_strlogin;
        return *this;
    }

    const uint32_t&  GetConnectNo () const { return m_connectNo; }
    bool SetConnectNo ( const uint32_t&  dwConnectNo )
    {
        m_connectNo = dwConnectNo;
        return true;
    }
    const string&  GetWorkKey () const { return m_workKey; }
    bool SetWorkKey ( const string&  strWorkKey )
    {
        if(strWorkKey.size() > 128)
            return false;
        m_workKey = strWorkKey;
        return true;
    }
    const string&  GetStrlogin () const { return m_strlogin; }
    bool SetStrlogin ( const string&  strStrlogin )
    {
        m_strlogin = strStrlogin;
        return true;
    }
private:
    uint32_t m_connectNo;
    string m_workKey;
    string m_strlogin;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqChatPreidentify::Size() const
{
    uint32_t nSize = 16;
    nSize += m_workKey.length();
    nSize += m_strlogin.length();
    return nSize;
}

class CImReqChatIdentify : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_CHAT_IDENTIFY
    };
    CImReqChatIdentify()
    {
    }

    ~CImReqChatIdentify() { }
    CImReqChatIdentify(const string&  strUid, const string&  strSessionkey, const string&  strVersion)
    {
        m_uid = strUid;
        m_sessionkey = strSessionkey;
        m_version = strVersion;
    }
    CImReqChatIdentify&  operator=( const CImReqChatIdentify&  cImReqChatIdentify )
    {
        m_uid = cImReqChatIdentify.m_uid;
        m_sessionkey = cImReqChatIdentify.m_sessionkey;
        m_version = cImReqChatIdentify.m_version;
        return *this;
    }

    const string&  GetUid () const { return m_uid; }
    bool SetUid ( const string&  strUid )
    {
        if(strUid.size() > 64)
            return false;
        m_uid = strUid;
        return true;
    }
    const string&  GetSessionkey () const { return m_sessionkey; }
    bool SetSessionkey ( const string&  strSessionkey )
    {
        m_sessionkey = strSessionkey;
        return true;
    }
    const string&  GetVersion () const { return m_version; }
    bool SetVersion ( const string&  strVersion )
    {
        m_version = strVersion;
        return true;
    }
private:
    string m_uid;
    string m_sessionkey;
    string m_version;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqChatIdentify::Size() const
{
    uint32_t nSize = 16;
    nSize += m_uid.length();
    nSize += m_sessionkey.length();
    nSize += m_version.length();
    return nSize;
}

class CImRspChatIdentify : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_CHAT_IDENTIFY
    };
    CImRspChatIdentify()
    {
    }

    ~CImRspChatIdentify() { }
    CImRspChatIdentify(const string&  strVersion, const uint16_t&  wRetcode, const string&  strMsg, const string&  strSessionid)
    {
        m_version = strVersion;
        m_retcode = wRetcode;
        m_msg = strMsg;
        m_sessionid = strSessionid;
    }
    CImRspChatIdentify&  operator=( const CImRspChatIdentify&  cImRspChatIdentify )
    {
        m_version = cImRspChatIdentify.m_version;
        m_retcode = cImRspChatIdentify.m_retcode;
        m_msg = cImRspChatIdentify.m_msg;
        m_sessionid = cImRspChatIdentify.m_sessionid;
        return *this;
    }

    const string&  GetVersion () const { return m_version; }
    bool SetVersion ( const string&  strVersion )
    {
        m_version = strVersion;
        return true;
    }
    const uint16_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint16_t&  wRetcode )
    {
        m_retcode = wRetcode;
        return true;
    }
    const string&  GetMsg () const { return m_msg; }
    bool SetMsg ( const string&  strMsg )
    {
        m_msg = strMsg;
        return true;
    }
    const string&  GetSessionid () const { return m_sessionid; }
    bool SetSessionid ( const string&  strSessionid )
    {
        m_sessionid = strSessionid;
        return true;
    }
private:
    string m_version;
    uint16_t m_retcode;
    string m_msg;
    string m_sessionid;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspChatIdentify::Size() const
{
    uint32_t nSize = 19;
    nSize += m_version.length();
    nSize += m_msg.length();
    nSize += m_sessionid.length();
    return nSize;
}

class CImReqChatClose : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_CHAT_CLOSE
    };
    CImReqChatClose()
    {
    }

    ~CImReqChatClose() { }
    CImReqChatClose(const string&  strSessionid)
    {
        m_sessionid = strSessionid;
    }
    CImReqChatClose&  operator=( const CImReqChatClose&  cImReqChatClose )
    {
        m_sessionid = cImReqChatClose.m_sessionid;
        return *this;
    }

    const string&  GetSessionid () const { return m_sessionid; }
    bool SetSessionid ( const string&  strSessionid )
    {
        m_sessionid = strSessionid;
        return true;
    }
private:
    string m_sessionid;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqChatClose::Size() const
{
    uint32_t nSize = 6;
    nSize += m_sessionid.length();
    return nSize;
}

class CImRspChatClose : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_CHAT_CLOSE
    };
    CImRspChatClose()
    {
    }

    ~CImRspChatClose() { }
    CImRspChatClose(const string&  strSessionid, const uint16_t&  wType, const uint16_t&  wRetcode, const string&  strMsg)
    {
        m_sessionid = strSessionid;
        m_type = wType;
        m_retcode = wRetcode;
        m_msg = strMsg;
    }
    CImRspChatClose&  operator=( const CImRspChatClose&  cImRspChatClose )
    {
        m_sessionid = cImRspChatClose.m_sessionid;
        m_type = cImRspChatClose.m_type;
        m_retcode = cImRspChatClose.m_retcode;
        m_msg = cImRspChatClose.m_msg;
        return *this;
    }

    const string&  GetSessionid () const { return m_sessionid; }
    bool SetSessionid ( const string&  strSessionid )
    {
        m_sessionid = strSessionid;
        return true;
    }
    const uint16_t&  GetType () const { return m_type; }
    bool SetType ( const uint16_t&  wType )
    {
        m_type = wType;
        return true;
    }
    const uint16_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint16_t&  wRetcode )
    {
        m_retcode = wRetcode;
        return true;
    }
    const string&  GetMsg () const { return m_msg; }
    bool SetMsg ( const string&  strMsg )
    {
        m_msg = strMsg;
        return true;
    }
private:
    string m_sessionid;
    uint16_t m_type;
    uint16_t m_retcode;
    string m_msg;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspChatClose::Size() const
{
    uint32_t nSize = 17;
    nSize += m_sessionid.length();
    nSize += m_msg.length();
    return nSize;
}

struct SCchatindexid
{
public:
    SCchatindexid()
    {
    }

    ~SCchatindexid() { }
    SCchatindexid(const string&  strUserid, const string&  strPeeruid, const uint64_t&  ullTm, const uint64_t&  ullSeq, const uint8_t&  chDir)
    {
        m_userid = strUserid;
        m_peeruid = strPeeruid;
        m_tm = ullTm;
        m_seq = ullSeq;
        m_dir = chDir;
    }
    SCchatindexid&  operator=( const SCchatindexid&  sCchatindexid )
    {
        m_userid = sCchatindexid.m_userid;
        m_peeruid = sCchatindexid.m_peeruid;
        m_tm = sCchatindexid.m_tm;
        m_seq = sCchatindexid.m_seq;
        m_dir = sCchatindexid.m_dir;
        return *this;
    }

    string m_userid;
    string m_peeruid;
    uint64_t m_tm;
    uint64_t m_seq;
    uint8_t m_dir;

public:
    uint32_t Size() const;
};

inline uint32_t SCchatindexid::Size() const
{
    uint32_t nSize = 31;
    nSize += m_userid.length();
    nSize += m_peeruid.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SCchatindexid&  sCchatindexid );
CPackData& operator>> ( CPackData& cPackData, SCchatindexid&  sCchatindexid );

class CImReqChatDeltext : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_CHAT_DELTEXT
    };
    CImReqChatDeltext()
    {
    }

    ~CImReqChatDeltext() { }
    CImReqChatDeltext(const string&  strSessionid, const VECTOR< SCchatindexid >&  vecKeyseq)
    {
        m_sessionid = strSessionid;
        m_keyseq = vecKeyseq;
    }
    CImReqChatDeltext&  operator=( const CImReqChatDeltext&  cImReqChatDeltext )
    {
        m_sessionid = cImReqChatDeltext.m_sessionid;
        m_keyseq = cImReqChatDeltext.m_keyseq;
        return *this;
    }

    const string&  GetSessionid () const { return m_sessionid; }
    bool SetSessionid ( const string&  strSessionid )
    {
        m_sessionid = strSessionid;
        return true;
    }
    const VECTOR< SCchatindexid >&  GetKeyseq () const { return m_keyseq; }
    bool SetKeyseq ( const VECTOR< SCchatindexid >&  vecKeyseq )
    {
        m_keyseq = vecKeyseq;
        return true;
    }
private:
    string m_sessionid;
    VECTOR< SCchatindexid > m_keyseq;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqChatDeltext::Size() const
{
    uint32_t nSize = 12;
    nSize += m_sessionid.length();
    for(uint32_t i = 0; i < m_keyseq.size(); i++)
    {
        nSize += m_keyseq[i].Size();
    }
    return nSize;
}

class CImRspChatDeltext : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_CHAT_DELTEXT
    };
    CImRspChatDeltext()
    {
    }

    ~CImRspChatDeltext() { }
    CImRspChatDeltext(const string&  strSessionid, const VECTOR< SCchatindexid >&  vecKeyseq, const uint16_t&  wRetcode, const string&  strMsg)
    {
        m_sessionid = strSessionid;
        m_keyseq = vecKeyseq;
        m_retcode = wRetcode;
        m_msg = strMsg;
    }
    CImRspChatDeltext&  operator=( const CImRspChatDeltext&  cImRspChatDeltext )
    {
        m_sessionid = cImRspChatDeltext.m_sessionid;
        m_keyseq = cImRspChatDeltext.m_keyseq;
        m_retcode = cImRspChatDeltext.m_retcode;
        m_msg = cImRspChatDeltext.m_msg;
        return *this;
    }

    const string&  GetSessionid () const { return m_sessionid; }
    bool SetSessionid ( const string&  strSessionid )
    {
        m_sessionid = strSessionid;
        return true;
    }
    const VECTOR< SCchatindexid >&  GetKeyseq () const { return m_keyseq; }
    bool SetKeyseq ( const VECTOR< SCchatindexid >&  vecKeyseq )
    {
        m_keyseq = vecKeyseq;
        return true;
    }
    const uint16_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint16_t&  wRetcode )
    {
        m_retcode = wRetcode;
        return true;
    }
    const string&  GetMsg () const { return m_msg; }
    bool SetMsg ( const string&  strMsg )
    {
        m_msg = strMsg;
        return true;
    }
private:
    string m_sessionid;
    VECTOR< SCchatindexid > m_keyseq;
    uint16_t m_retcode;
    string m_msg;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspChatDeltext::Size() const
{
    uint32_t nSize = 20;
    nSize += m_sessionid.length();
    for(uint32_t i = 0; i < m_keyseq.size(); i++)
    {
        nSize += m_keyseq[i].Size();
    }
    nSize += m_msg.length();
    return nSize;
}

class CImReqChatGettxt : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_CHAT_GETTXT
    };
    CImReqChatGettxt()
    {
    }

    ~CImReqChatGettxt() { }
    CImReqChatGettxt(const string&  strSessionid, const string&  strFromid, const string&  strToid, const uint64_t&  ullBegtime, const uint64_t&  ullEndtime, const uint64_t&  ullMinbegtime, const uint32_t&  dwMsgnum, const uint8_t&  chGetall)
    {
        m_sessionid = strSessionid;
        m_fromid = strFromid;
        m_toid = strToid;
        m_begtime = ullBegtime;
        m_endtime = ullEndtime;
        m_minbegtime = ullMinbegtime;
        m_msgnum = dwMsgnum;
        m_getall = chGetall;
    }
    CImReqChatGettxt&  operator=( const CImReqChatGettxt&  cImReqChatGettxt )
    {
        m_sessionid = cImReqChatGettxt.m_sessionid;
        m_fromid = cImReqChatGettxt.m_fromid;
        m_toid = cImReqChatGettxt.m_toid;
        m_begtime = cImReqChatGettxt.m_begtime;
        m_endtime = cImReqChatGettxt.m_endtime;
        m_minbegtime = cImReqChatGettxt.m_minbegtime;
        m_msgnum = cImReqChatGettxt.m_msgnum;
        m_getall = cImReqChatGettxt.m_getall;
        return *this;
    }

    const string&  GetSessionid () const { return m_sessionid; }
    bool SetSessionid ( const string&  strSessionid )
    {
        m_sessionid = strSessionid;
        return true;
    }
    const string&  GetFromid () const { return m_fromid; }
    bool SetFromid ( const string&  strFromid )
    {
        if(strFromid.size() > 64)
            return false;
        m_fromid = strFromid;
        return true;
    }
    const string&  GetToid () const { return m_toid; }
    bool SetToid ( const string&  strToid )
    {
        if(strToid.size() > 64)
            return false;
        m_toid = strToid;
        return true;
    }
    const uint64_t&  GetBegtime () const { return m_begtime; }
    bool SetBegtime ( const uint64_t&  ullBegtime )
    {
        m_begtime = ullBegtime;
        return true;
    }
    const uint64_t&  GetEndtime () const { return m_endtime; }
    bool SetEndtime ( const uint64_t&  ullEndtime )
    {
        m_endtime = ullEndtime;
        return true;
    }
    const uint64_t&  GetMinbegtime () const { return m_minbegtime; }
    bool SetMinbegtime ( const uint64_t&  ullMinbegtime )
    {
        m_minbegtime = ullMinbegtime;
        return true;
    }
    const uint32_t&  GetMsgnum () const { return m_msgnum; }
    bool SetMsgnum ( const uint32_t&  dwMsgnum )
    {
        m_msgnum = dwMsgnum;
        return true;
    }
    const uint8_t&  GetGetall () const { return m_getall; }
    bool SetGetall ( const uint8_t&  chGetall )
    {
        m_getall = chGetall;
        return true;
    }
private:
    string m_sessionid;
    string m_fromid;
    string m_toid;
    uint64_t m_begtime;
    uint64_t m_endtime;
    uint64_t m_minbegtime;
    uint32_t m_msgnum;
    uint8_t m_getall;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqChatGettxt::Size() const
{
    uint32_t nSize = 50;
    nSize += m_sessionid.length();
    nSize += m_fromid.length();
    nSize += m_toid.length();
    return nSize;
}

struct STextlogitem
{
public:
    STextlogitem()
    {
    }

    ~STextlogitem() { }
    STextlogitem(const uint8_t&  chDir, const uint64_t&  ullSeq, const uint64_t&  ullTm, const string&  strMsg)
    {
        m_dir = chDir;
        m_seq = ullSeq;
        m_tm = ullTm;
        m_msg = strMsg;
    }
    STextlogitem&  operator=( const STextlogitem&  sTextlogitem )
    {
        m_dir = sTextlogitem.m_dir;
        m_seq = sTextlogitem.m_seq;
        m_tm = sTextlogitem.m_tm;
        m_msg = sTextlogitem.m_msg;
        return *this;
    }

    uint8_t m_dir;
    uint64_t m_seq;
    uint64_t m_tm;
    string m_msg;

public:
    uint32_t Size() const;
};

inline uint32_t STextlogitem::Size() const
{
    uint32_t nSize = 26;
    nSize += m_msg.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const STextlogitem&  sTextlogitem );
CPackData& operator>> ( CPackData& cPackData, STextlogitem&  sTextlogitem );

class CImRspChatGettxt : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_CHAT_GETTXT
    };
    CImRspChatGettxt()
    {
    }

    ~CImRspChatGettxt() { }
    CImRspChatGettxt(const string&  strSessionid, const string&  strFromid, const string&  strToid, const VECTOR< STextlogitem >&  vecMsgseq, const uint64_t&  ullNewbegtime, const uint64_t&  ullNewendtime, const uint64_t&  ullNextbegtime, const uint8_t&  chGetall, const uint8_t&  chIslast, const uint16_t&  wRetcode, const string&  strMsg)
    {
        m_sessionid = strSessionid;
        m_fromid = strFromid;
        m_toid = strToid;
        m_msgseq = vecMsgseq;
        m_newbegtime = ullNewbegtime;
        m_newendtime = ullNewendtime;
        m_nextbegtime = ullNextbegtime;
        m_getall = chGetall;
        m_islast = chIslast;
        m_retcode = wRetcode;
        m_msg = strMsg;
    }
    CImRspChatGettxt&  operator=( const CImRspChatGettxt&  cImRspChatGettxt )
    {
        m_sessionid = cImRspChatGettxt.m_sessionid;
        m_fromid = cImRspChatGettxt.m_fromid;
        m_toid = cImRspChatGettxt.m_toid;
        m_msgseq = cImRspChatGettxt.m_msgseq;
        m_newbegtime = cImRspChatGettxt.m_newbegtime;
        m_newendtime = cImRspChatGettxt.m_newendtime;
        m_nextbegtime = cImRspChatGettxt.m_nextbegtime;
        m_getall = cImRspChatGettxt.m_getall;
        m_islast = cImRspChatGettxt.m_islast;
        m_retcode = cImRspChatGettxt.m_retcode;
        m_msg = cImRspChatGettxt.m_msg;
        return *this;
    }

    const string&  GetSessionid () const { return m_sessionid; }
    bool SetSessionid ( const string&  strSessionid )
    {
        m_sessionid = strSessionid;
        return true;
    }
    const string&  GetFromid () const { return m_fromid; }
    bool SetFromid ( const string&  strFromid )
    {
        if(strFromid.size() > 64)
            return false;
        m_fromid = strFromid;
        return true;
    }
    const string&  GetToid () const { return m_toid; }
    bool SetToid ( const string&  strToid )
    {
        if(strToid.size() > 64)
            return false;
        m_toid = strToid;
        return true;
    }
    const VECTOR< STextlogitem >&  GetMsgseq () const { return m_msgseq; }
    bool SetMsgseq ( const VECTOR< STextlogitem >&  vecMsgseq )
    {
        m_msgseq = vecMsgseq;
        return true;
    }
    const uint64_t&  GetNewbegtime () const { return m_newbegtime; }
    bool SetNewbegtime ( const uint64_t&  ullNewbegtime )
    {
        m_newbegtime = ullNewbegtime;
        return true;
    }
    const uint64_t&  GetNewendtime () const { return m_newendtime; }
    bool SetNewendtime ( const uint64_t&  ullNewendtime )
    {
        m_newendtime = ullNewendtime;
        return true;
    }
    const uint64_t&  GetNextbegtime () const { return m_nextbegtime; }
    bool SetNextbegtime ( const uint64_t&  ullNextbegtime )
    {
        m_nextbegtime = ullNextbegtime;
        return true;
    }
    const uint8_t&  GetGetall () const { return m_getall; }
    bool SetGetall ( const uint8_t&  chGetall )
    {
        m_getall = chGetall;
        return true;
    }
    const uint8_t&  GetIslast () const { return m_islast; }
    bool SetIslast ( const uint8_t&  chIslast )
    {
        m_islast = chIslast;
        return true;
    }
    const uint16_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint16_t&  wRetcode )
    {
        m_retcode = wRetcode;
        return true;
    }
    const string&  GetMsg () const { return m_msg; }
    bool SetMsg ( const string&  strMsg )
    {
        m_msg = strMsg;
        return true;
    }
private:
    string m_sessionid;
    string m_fromid;
    string m_toid;
    VECTOR< STextlogitem > m_msgseq;
    uint64_t m_newbegtime;
    uint64_t m_newendtime;
    uint64_t m_nextbegtime;
    uint8_t m_getall;
    uint8_t m_islast;
    uint16_t m_retcode;
    string m_msg;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspChatGettxt::Size() const
{
    uint32_t nSize = 61;
    nSize += m_sessionid.length();
    nSize += m_fromid.length();
    nSize += m_toid.length();
    for(uint32_t i = 0; i < m_msgseq.size(); i++)
    {
        nSize += m_msgseq[i].Size();
    }
    nSize += m_msg.length();
    return nSize;
}

class CImReqChatSettxt : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_CHAT_SETTXT
    };
    CImReqChatSettxt()
    {
    }

    ~CImReqChatSettxt() { }
    CImReqChatSettxt(const string&  strSessionid, const string&  strFromid, const string&  strToid, const uint64_t&  ullTm, const uint64_t&  ullSeq, const uint8_t&  chDir, const string&  strChatmsg)
    {
        m_sessionid = strSessionid;
        m_fromid = strFromid;
        m_toid = strToid;
        m_tm = ullTm;
        m_seq = ullSeq;
        m_dir = chDir;
        m_chatmsg = strChatmsg;
    }
    CImReqChatSettxt&  operator=( const CImReqChatSettxt&  cImReqChatSettxt )
    {
        m_sessionid = cImReqChatSettxt.m_sessionid;
        m_fromid = cImReqChatSettxt.m_fromid;
        m_toid = cImReqChatSettxt.m_toid;
        m_tm = cImReqChatSettxt.m_tm;
        m_seq = cImReqChatSettxt.m_seq;
        m_dir = cImReqChatSettxt.m_dir;
        m_chatmsg = cImReqChatSettxt.m_chatmsg;
        return *this;
    }

    const string&  GetSessionid () const { return m_sessionid; }
    bool SetSessionid ( const string&  strSessionid )
    {
        m_sessionid = strSessionid;
        return true;
    }
    const string&  GetFromid () const { return m_fromid; }
    bool SetFromid ( const string&  strFromid )
    {
        if(strFromid.size() > 64)
            return false;
        m_fromid = strFromid;
        return true;
    }
    const string&  GetToid () const { return m_toid; }
    bool SetToid ( const string&  strToid )
    {
        if(strToid.size() > 64)
            return false;
        m_toid = strToid;
        return true;
    }
    const uint64_t&  GetTm () const { return m_tm; }
    bool SetTm ( const uint64_t&  ullTm )
    {
        m_tm = ullTm;
        return true;
    }
    const uint64_t&  GetSeq () const { return m_seq; }
    bool SetSeq ( const uint64_t&  ullSeq )
    {
        m_seq = ullSeq;
        return true;
    }
    const uint8_t&  GetDir () const { return m_dir; }
    bool SetDir ( const uint8_t&  chDir )
    {
        m_dir = chDir;
        return true;
    }
    const string&  GetChatmsg () const { return m_chatmsg; }
    bool SetChatmsg ( const string&  strChatmsg )
    {
        m_chatmsg = strChatmsg;
        return true;
    }
private:
    string m_sessionid;
    string m_fromid;
    string m_toid;
    uint64_t m_tm;
    uint64_t m_seq;
    uint8_t m_dir;
    string m_chatmsg;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqChatSettxt::Size() const
{
    uint32_t nSize = 41;
    nSize += m_sessionid.length();
    nSize += m_fromid.length();
    nSize += m_toid.length();
    nSize += m_chatmsg.length();
    return nSize;
}

class CImRspChatSettxt : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_CHAT_SETTXT
    };
    CImRspChatSettxt()
    {
    }

    ~CImRspChatSettxt() { }
    CImRspChatSettxt(const string&  strSessionid, const string&  strFromid, const string&  strToid, const uint64_t&  ullTm, const uint64_t&  ullSeq, const uint8_t&  chDir, const uint16_t&  wRetcode, const string&  strMsg)
    {
        m_sessionid = strSessionid;
        m_fromid = strFromid;
        m_toid = strToid;
        m_tm = ullTm;
        m_seq = ullSeq;
        m_dir = chDir;
        m_retcode = wRetcode;
        m_msg = strMsg;
    }
    CImRspChatSettxt&  operator=( const CImRspChatSettxt&  cImRspChatSettxt )
    {
        m_sessionid = cImRspChatSettxt.m_sessionid;
        m_fromid = cImRspChatSettxt.m_fromid;
        m_toid = cImRspChatSettxt.m_toid;
        m_tm = cImRspChatSettxt.m_tm;
        m_seq = cImRspChatSettxt.m_seq;
        m_dir = cImRspChatSettxt.m_dir;
        m_retcode = cImRspChatSettxt.m_retcode;
        m_msg = cImRspChatSettxt.m_msg;
        return *this;
    }

    const string&  GetSessionid () const { return m_sessionid; }
    bool SetSessionid ( const string&  strSessionid )
    {
        m_sessionid = strSessionid;
        return true;
    }
    const string&  GetFromid () const { return m_fromid; }
    bool SetFromid ( const string&  strFromid )
    {
        if(strFromid.size() > 64)
            return false;
        m_fromid = strFromid;
        return true;
    }
    const string&  GetToid () const { return m_toid; }
    bool SetToid ( const string&  strToid )
    {
        if(strToid.size() > 64)
            return false;
        m_toid = strToid;
        return true;
    }
    const uint64_t&  GetTm () const { return m_tm; }
    bool SetTm ( const uint64_t&  ullTm )
    {
        m_tm = ullTm;
        return true;
    }
    const uint64_t&  GetSeq () const { return m_seq; }
    bool SetSeq ( const uint64_t&  ullSeq )
    {
        m_seq = ullSeq;
        return true;
    }
    const uint8_t&  GetDir () const { return m_dir; }
    bool SetDir ( const uint8_t&  chDir )
    {
        m_dir = chDir;
        return true;
    }
    const uint16_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint16_t&  wRetcode )
    {
        m_retcode = wRetcode;
        return true;
    }
    const string&  GetMsg () const { return m_msg; }
    bool SetMsg ( const string&  strMsg )
    {
        m_msg = strMsg;
        return true;
    }
private:
    string m_sessionid;
    string m_fromid;
    string m_toid;
    uint64_t m_tm;
    uint64_t m_seq;
    uint8_t m_dir;
    uint16_t m_retcode;
    string m_msg;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspChatSettxt::Size() const
{
    uint32_t nSize = 44;
    nSize += m_sessionid.length();
    nSize += m_fromid.length();
    nSize += m_toid.length();
    nSize += m_msg.length();
    return nSize;
}

class CImReqChatQuerypics : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_CHAT_QUERYPICS
    };
    CImReqChatQuerypics()
    {
    }

    ~CImReqChatQuerypics() { }
    CImReqChatQuerypics(const string&  strSessionid, const VECTOR< string >&  vecFilenameseq)
    {
        m_sessionid = strSessionid;
        m_filenameseq = vecFilenameseq;
    }
    CImReqChatQuerypics&  operator=( const CImReqChatQuerypics&  cImReqChatQuerypics )
    {
        m_sessionid = cImReqChatQuerypics.m_sessionid;
        m_filenameseq = cImReqChatQuerypics.m_filenameseq;
        return *this;
    }

    const string&  GetSessionid () const { return m_sessionid; }
    bool SetSessionid ( const string&  strSessionid )
    {
        m_sessionid = strSessionid;
        return true;
    }
    const VECTOR< string >&  GetFilenameseq () const { return m_filenameseq; }
    bool SetFilenameseq ( const VECTOR< string >&  vecFilenameseq )
    {
        m_filenameseq = vecFilenameseq;
        return true;
    }
private:
    string m_sessionid;
    VECTOR< string > m_filenameseq;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqChatQuerypics::Size() const
{
    uint32_t nSize = 12;
    nSize += m_sessionid.length();
    nSize += m_filenameseq.size() * 4;
    for(uint32_t i = 0; i < m_filenameseq.size(); i++)
    {
        nSize += m_filenameseq[i].length();
    }
    return nSize;
}

struct SKeypicseqidex
{
public:
    SKeypicseqidex()
    {
    }

    ~SKeypicseqidex() { }
    SKeypicseqidex(const string&  strKey, const uint8_t&  chCode)
    {
        m_key = strKey;
        m_code = chCode;
    }
    SKeypicseqidex&  operator=( const SKeypicseqidex&  sKeypicseqidex )
    {
        m_key = sKeypicseqidex.m_key;
        m_code = sKeypicseqidex.m_code;
        return *this;
    }

    string m_key;
    uint8_t m_code;

public:
    uint32_t Size() const;
};

inline uint32_t SKeypicseqidex::Size() const
{
    uint32_t nSize = 8;
    nSize += m_key.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SKeypicseqidex&  sKeypicseqidex );
CPackData& operator>> ( CPackData& cPackData, SKeypicseqidex&  sKeypicseqidex );

class CImRspChatQuerypics : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_CHAT_QUERYPICS
    };
    CImRspChatQuerypics()
    {
    }

    ~CImRspChatQuerypics() { }
    CImRspChatQuerypics(const string&  strSessionid, const VECTOR< SKeypicseqidex >&  vecFilenameseq, const uint16_t&  wRetcode, const string&  strMsg, const uint8_t&  chIslast)
    {
        m_sessionid = strSessionid;
        m_filenameseq = vecFilenameseq;
        m_retcode = wRetcode;
        m_msg = strMsg;
        m_islast = chIslast;
    }
    CImRspChatQuerypics&  operator=( const CImRspChatQuerypics&  cImRspChatQuerypics )
    {
        m_sessionid = cImRspChatQuerypics.m_sessionid;
        m_filenameseq = cImRspChatQuerypics.m_filenameseq;
        m_retcode = cImRspChatQuerypics.m_retcode;
        m_msg = cImRspChatQuerypics.m_msg;
        m_islast = cImRspChatQuerypics.m_islast;
        return *this;
    }

    const string&  GetSessionid () const { return m_sessionid; }
    bool SetSessionid ( const string&  strSessionid )
    {
        m_sessionid = strSessionid;
        return true;
    }
    const VECTOR< SKeypicseqidex >&  GetFilenameseq () const { return m_filenameseq; }
    bool SetFilenameseq ( const VECTOR< SKeypicseqidex >&  vecFilenameseq )
    {
        m_filenameseq = vecFilenameseq;
        return true;
    }
    const uint16_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint16_t&  wRetcode )
    {
        m_retcode = wRetcode;
        return true;
    }
    const string&  GetMsg () const { return m_msg; }
    bool SetMsg ( const string&  strMsg )
    {
        m_msg = strMsg;
        return true;
    }
    const uint8_t&  GetIslast () const { return m_islast; }
    bool SetIslast ( const uint8_t&  chIslast )
    {
        m_islast = chIslast;
        return true;
    }
private:
    string m_sessionid;
    VECTOR< SKeypicseqidex > m_filenameseq;
    uint16_t m_retcode;
    string m_msg;
    uint8_t m_islast;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspChatQuerypics::Size() const
{
    uint32_t nSize = 22;
    nSize += m_sessionid.length();
    for(uint32_t i = 0; i < m_filenameseq.size(); i++)
    {
        nSize += m_filenameseq[i].Size();
    }
    nSize += m_msg.length();
    return nSize;
}

class CImReqChatPutpic : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_CHAT_PUTPIC
    };
    CImReqChatPutpic()
    {
    }

    ~CImReqChatPutpic() { }
    CImReqChatPutpic(const string&  strSessionid, const string&  strPickey, const string&  strData, const uint64_t&  ullSize, const uint64_t&  ullOffset)
    {
        m_sessionid = strSessionid;
        m_pickey = strPickey;
        m_data = strData;
        m_size = ullSize;
        m_offset = ullOffset;
    }
    CImReqChatPutpic&  operator=( const CImReqChatPutpic&  cImReqChatPutpic )
    {
        m_sessionid = cImReqChatPutpic.m_sessionid;
        m_pickey = cImReqChatPutpic.m_pickey;
        m_data = cImReqChatPutpic.m_data;
        m_size = cImReqChatPutpic.m_size;
        m_offset = cImReqChatPutpic.m_offset;
        return *this;
    }

    const string&  GetSessionid () const { return m_sessionid; }
    bool SetSessionid ( const string&  strSessionid )
    {
        m_sessionid = strSessionid;
        return true;
    }
    const string&  GetPickey () const { return m_pickey; }
    bool SetPickey ( const string&  strPickey )
    {
        m_pickey = strPickey;
        return true;
    }
    const string&  GetData () const { return m_data; }
    bool SetData ( const string&  strData )
    {
        m_data = strData;
        return true;
    }
    const uint64_t&  GetSize () const { return m_size; }
    bool SetSize ( const uint64_t&  ullSize )
    {
        m_size = ullSize;
        return true;
    }
    const uint64_t&  GetOffset () const { return m_offset; }
    bool SetOffset ( const uint64_t&  ullOffset )
    {
        m_offset = ullOffset;
        return true;
    }
private:
    string m_sessionid;
    string m_pickey;
    string m_data;
    uint64_t m_size;
    uint64_t m_offset;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqChatPutpic::Size() const
{
    uint32_t nSize = 34;
    nSize += m_sessionid.length();
    nSize += m_pickey.length();
    nSize += m_data.length();
    return nSize;
}

class CImRspChatPutpic : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_CHAT_PUTPIC
    };
    CImRspChatPutpic()
    {
    }

    ~CImRspChatPutpic() { }
    CImRspChatPutpic(const string&  strSessionid, const string&  strPickey, const uint64_t&  ullSize, const uint64_t&  ullOffset, const uint16_t&  wRetcode, const string&  strMsg)
    {
        m_sessionid = strSessionid;
        m_pickey = strPickey;
        m_size = ullSize;
        m_offset = ullOffset;
        m_retcode = wRetcode;
        m_msg = strMsg;
    }
    CImRspChatPutpic&  operator=( const CImRspChatPutpic&  cImRspChatPutpic )
    {
        m_sessionid = cImRspChatPutpic.m_sessionid;
        m_pickey = cImRspChatPutpic.m_pickey;
        m_size = cImRspChatPutpic.m_size;
        m_offset = cImRspChatPutpic.m_offset;
        m_retcode = cImRspChatPutpic.m_retcode;
        m_msg = cImRspChatPutpic.m_msg;
        return *this;
    }

    const string&  GetSessionid () const { return m_sessionid; }
    bool SetSessionid ( const string&  strSessionid )
    {
        m_sessionid = strSessionid;
        return true;
    }
    const string&  GetPickey () const { return m_pickey; }
    bool SetPickey ( const string&  strPickey )
    {
        m_pickey = strPickey;
        return true;
    }
    const uint64_t&  GetSize () const { return m_size; }
    bool SetSize ( const uint64_t&  ullSize )
    {
        m_size = ullSize;
        return true;
    }
    const uint64_t&  GetOffset () const { return m_offset; }
    bool SetOffset ( const uint64_t&  ullOffset )
    {
        m_offset = ullOffset;
        return true;
    }
    const uint16_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint16_t&  wRetcode )
    {
        m_retcode = wRetcode;
        return true;
    }
    const string&  GetMsg () const { return m_msg; }
    bool SetMsg ( const string&  strMsg )
    {
        m_msg = strMsg;
        return true;
    }
private:
    string m_sessionid;
    string m_pickey;
    uint64_t m_size;
    uint64_t m_offset;
    uint16_t m_retcode;
    string m_msg;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspChatPutpic::Size() const
{
    uint32_t nSize = 37;
    nSize += m_sessionid.length();
    nSize += m_pickey.length();
    nSize += m_msg.length();
    return nSize;
}

struct SKeypicseq
{
public:
    SKeypicseq()
    {
    }

    ~SKeypicseq() { }
    SKeypicseq(const string&  strKey, const string&  strContent)
    {
        m_key = strKey;
        m_content = strContent;
    }
    SKeypicseq&  operator=( const SKeypicseq&  sKeypicseq )
    {
        m_key = sKeypicseq.m_key;
        m_content = sKeypicseq.m_content;
        return *this;
    }

    string m_key;
    string m_content;

public:
    uint32_t Size() const;
};

inline uint32_t SKeypicseq::Size() const
{
    uint32_t nSize = 11;
    nSize += m_key.length();
    nSize += m_content.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SKeypicseq&  sKeypicseq );
CPackData& operator>> ( CPackData& cPackData, SKeypicseq&  sKeypicseq );

class CImReqChatGetpic : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_CHAT_GETPIC
    };
    CImReqChatGetpic()
    {
    }

    ~CImReqChatGetpic() { }
    CImReqChatGetpic(const string&  strSessionid, const string&  strPickey)
    {
        m_sessionid = strSessionid;
        m_pickey = strPickey;
    }
    CImReqChatGetpic&  operator=( const CImReqChatGetpic&  cImReqChatGetpic )
    {
        m_sessionid = cImReqChatGetpic.m_sessionid;
        m_pickey = cImReqChatGetpic.m_pickey;
        return *this;
    }

    const string&  GetSessionid () const { return m_sessionid; }
    bool SetSessionid ( const string&  strSessionid )
    {
        m_sessionid = strSessionid;
        return true;
    }
    const string&  GetPickey () const { return m_pickey; }
    bool SetPickey ( const string&  strPickey )
    {
        m_pickey = strPickey;
        return true;
    }
private:
    string m_sessionid;
    string m_pickey;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqChatGetpic::Size() const
{
    uint32_t nSize = 11;
    nSize += m_sessionid.length();
    nSize += m_pickey.length();
    return nSize;
}

class CImRspChatGetpic : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_CHAT_GETPIC
    };
    CImRspChatGetpic()
    {
    }

    ~CImRspChatGetpic() { }
    CImRspChatGetpic(const string&  strSessionid, const string&  strPickey, const string&  strData, const uint64_t&  ullSize, const uint64_t&  ullOffset, const uint16_t&  wRetcode, const string&  strMsg)
    {
        m_sessionid = strSessionid;
        m_pickey = strPickey;
        m_data = strData;
        m_size = ullSize;
        m_offset = ullOffset;
        m_retcode = wRetcode;
        m_msg = strMsg;
    }
    CImRspChatGetpic&  operator=( const CImRspChatGetpic&  cImRspChatGetpic )
    {
        m_sessionid = cImRspChatGetpic.m_sessionid;
        m_pickey = cImRspChatGetpic.m_pickey;
        m_data = cImRspChatGetpic.m_data;
        m_size = cImRspChatGetpic.m_size;
        m_offset = cImRspChatGetpic.m_offset;
        m_retcode = cImRspChatGetpic.m_retcode;
        m_msg = cImRspChatGetpic.m_msg;
        return *this;
    }

    const string&  GetSessionid () const { return m_sessionid; }
    bool SetSessionid ( const string&  strSessionid )
    {
        m_sessionid = strSessionid;
        return true;
    }
    const string&  GetPickey () const { return m_pickey; }
    bool SetPickey ( const string&  strPickey )
    {
        m_pickey = strPickey;
        return true;
    }
    const string&  GetData () const { return m_data; }
    bool SetData ( const string&  strData )
    {
        m_data = strData;
        return true;
    }
    const uint64_t&  GetSize () const { return m_size; }
    bool SetSize ( const uint64_t&  ullSize )
    {
        m_size = ullSize;
        return true;
    }
    const uint64_t&  GetOffset () const { return m_offset; }
    bool SetOffset ( const uint64_t&  ullOffset )
    {
        m_offset = ullOffset;
        return true;
    }
    const uint16_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint16_t&  wRetcode )
    {
        m_retcode = wRetcode;
        return true;
    }
    const string&  GetMsg () const { return m_msg; }
    bool SetMsg ( const string&  strMsg )
    {
        m_msg = strMsg;
        return true;
    }
private:
    string m_sessionid;
    string m_pickey;
    string m_data;
    uint64_t m_size;
    uint64_t m_offset;
    uint16_t m_retcode;
    string m_msg;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspChatGetpic::Size() const
{
    uint32_t nSize = 42;
    nSize += m_sessionid.length();
    nSize += m_pickey.length();
    nSize += m_data.length();
    nSize += m_msg.length();
    return nSize;
}

class CImReqChatGetcal : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_CHAT_GETCAL
    };
    CImReqChatGetcal()
    {
    }

    ~CImReqChatGetcal() { }
    CImReqChatGetcal(const string&  strSessionid, const string&  strUid, const string&  strToid, const string&  strStartdate, const string&  strEnddate)
    {
        m_sessionid = strSessionid;
        m_uid = strUid;
        m_toid = strToid;
        m_startdate = strStartdate;
        m_enddate = strEnddate;
    }
    CImReqChatGetcal&  operator=( const CImReqChatGetcal&  cImReqChatGetcal )
    {
        m_sessionid = cImReqChatGetcal.m_sessionid;
        m_uid = cImReqChatGetcal.m_uid;
        m_toid = cImReqChatGetcal.m_toid;
        m_startdate = cImReqChatGetcal.m_startdate;
        m_enddate = cImReqChatGetcal.m_enddate;
        return *this;
    }

    const string&  GetSessionid () const { return m_sessionid; }
    bool SetSessionid ( const string&  strSessionid )
    {
        m_sessionid = strSessionid;
        return true;
    }
    const string&  GetUid () const { return m_uid; }
    bool SetUid ( const string&  strUid )
    {
        if(strUid.size() > 64)
            return false;
        m_uid = strUid;
        return true;
    }
    const string&  GetToid () const { return m_toid; }
    bool SetToid ( const string&  strToid )
    {
        if(strToid.size() > 64)
            return false;
        m_toid = strToid;
        return true;
    }
    const string&  GetStartdate () const { return m_startdate; }
    bool SetStartdate ( const string&  strStartdate )
    {
        m_startdate = strStartdate;
        return true;
    }
    const string&  GetEnddate () const { return m_enddate; }
    bool SetEnddate ( const string&  strEnddate )
    {
        m_enddate = strEnddate;
        return true;
    }
private:
    string m_sessionid;
    string m_uid;
    string m_toid;
    string m_startdate;
    string m_enddate;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqChatGetcal::Size() const
{
    uint32_t nSize = 26;
    nSize += m_sessionid.length();
    nSize += m_uid.length();
    nSize += m_toid.length();
    nSize += m_startdate.length();
    nSize += m_enddate.length();
    return nSize;
}

class CImRspChatGetcal : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_CHAT_GETCAL
    };
    CImRspChatGetcal()
    {
    }

    ~CImRspChatGetcal() { }
    CImRspChatGetcal(const string&  strSessionid, const string&  strUid, const string&  strToid, const VECTOR< string >&  vecDateseq, const uint16_t&  wRetcode, const string&  strMsg)
    {
        m_sessionid = strSessionid;
        m_uid = strUid;
        m_toid = strToid;
        m_dateseq = vecDateseq;
        m_retcode = wRetcode;
        m_msg = strMsg;
    }
    CImRspChatGetcal&  operator=( const CImRspChatGetcal&  cImRspChatGetcal )
    {
        m_sessionid = cImRspChatGetcal.m_sessionid;
        m_uid = cImRspChatGetcal.m_uid;
        m_toid = cImRspChatGetcal.m_toid;
        m_dateseq = cImRspChatGetcal.m_dateseq;
        m_retcode = cImRspChatGetcal.m_retcode;
        m_msg = cImRspChatGetcal.m_msg;
        return *this;
    }

    const string&  GetSessionid () const { return m_sessionid; }
    bool SetSessionid ( const string&  strSessionid )
    {
        m_sessionid = strSessionid;
        return true;
    }
    const string&  GetUid () const { return m_uid; }
    bool SetUid ( const string&  strUid )
    {
        if(strUid.size() > 64)
            return false;
        m_uid = strUid;
        return true;
    }
    const string&  GetToid () const { return m_toid; }
    bool SetToid ( const string&  strToid )
    {
        if(strToid.size() > 64)
            return false;
        m_toid = strToid;
        return true;
    }
    const VECTOR< string >&  GetDateseq () const { return m_dateseq; }
    bool SetDateseq ( const VECTOR< string >&  vecDateseq )
    {
        m_dateseq = vecDateseq;
        return true;
    }
    const uint16_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint16_t&  wRetcode )
    {
        m_retcode = wRetcode;
        return true;
    }
    const string&  GetMsg () const { return m_msg; }
    bool SetMsg ( const string&  strMsg )
    {
        m_msg = strMsg;
        return true;
    }
private:
    string m_sessionid;
    string m_uid;
    string m_toid;
    VECTOR< string > m_dateseq;
    uint16_t m_retcode;
    string m_msg;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspChatGetcal::Size() const
{
    uint32_t nSize = 30;
    nSize += m_sessionid.length();
    nSize += m_uid.length();
    nSize += m_toid.length();
    nSize += m_dateseq.size() * 4;
    for(uint32_t i = 0; i < m_dateseq.size(); i++)
    {
        nSize += m_dateseq[i].length();
    }
    nSize += m_msg.length();
    return nSize;
}

#endif
