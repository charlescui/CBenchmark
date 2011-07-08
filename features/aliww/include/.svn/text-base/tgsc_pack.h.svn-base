/*---------------------------------------------------------------------------
// Filename:        tgsc_pack.h
// Date:            2011-01-30 12:49:42
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __TGSC_PACK_H__
#define __TGSC_PACK_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"
#include "const_macro.h"
#include "scs_head.h"
#include "tgsstrc_pack.h"
#include "tbsstrc_pack.h"

using namespace std;

enum TGSC_REQUEST
{
    TBSC_REQ_GET_ONLINEINFO     = 0x6300001,
    TBSC_REQ_NTF_MODIFYTRIBE    = 0x6300002,
    TBSC_REQ_GET_TRIBEMEMBER    = 0x6300003,
    TBSC_REQ_GET_MEMBERINFO     = 0x6300004,
    TBSC_REQ_GET_TRIBEMANAGER   = 0x6300005,
    TBSC_REQ_GET_USERTRIBE      = 0x6300006,
    TBSC_REQ_SEND_TRIBEMSG      = 0x6300007,
    TBSC_REQ_GET_TRIBEINFO      = 0x6300008,
    TBSC_REQ_GET_ACTLEVEL       = 0x6300009,
    TBSC_REQ_UNLOADTRIBE        = 0x6300010,
    TBSC_REQ_ACTIVE_USER        = 0x6300100,
    TBSC_REQ_DISACTIVE_USER     = 0x6300101,
    TBSC_REQ_STOP_TRIBE         = 0x6300102,
    TBSC_REQ_MODIFY_TRIBE       = 0x6300103,
    TBSC_REQ_ADD_TRIBE_MEMBER   = 0x6300104,
    TBSC_REQ_DEL_TRIBE_MEMBER   = 0x6300105,
    TBSC_REQ_QUIT_TRIBE         = 0x6300106,

};

enum TGSC_RESPONSE
{
    TBSC_RSP_GET_ONLINEINFO     = 0x6310001,
    TBSC_RSP_NTF_MODIFYTRIBE    = 0x6310002,
    TBSC_RSP_GET_TRIBEMEMBER    = 0x6310003,
    TBSC_RSP_GET_MEMBERINFO     = 0x6310004,
    TBSC_RSP_GET_TRIBEMANAGER   = 0x6310005,
    TBSC_RSP_GET_USERTRIBE      = 0x6310006,
    TBSC_RSP_SEND_TRIBEMSG      = 0x6310007,
    TBSC_RSP_GET_TRIBEINFO      = 0x6310008,
    TBSC_RSP_GET_ACTLEVEL       = 0x6310009,
    TBSC_RSP_UNLOADTRIBE        = 0x6310010,
    TBSC_RSP_ACTIVE_USER        = 0x6310100,
    TBSC_RSP_DISACTIVE_USER     = 0x6310101,
    TBSC_RSP_STOP_TRIBE         = 0x6310102,
    TBSC_RSP_MODIFY_TRIBE       = 0x6310103,
    TBSC_RSP_ADD_TRIBE_MEMBER   = 0x6310104,
    TBSC_RSP_DEL_TRIBE_MEMBER   = 0x6310105,
    TBSC_RSP_QUIT_TRIBE         = 0x6310106,

};

class CTbscReqGetOnlineinfo : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_REQ_GET_ONLINEINFO
    };
    CTbscReqGetOnlineinfo()
    {
    }

    ~CTbscReqGetOnlineinfo() { }
    CTbscReqGetOnlineinfo(const string&  strTribeId)
    {
        m_tribeId = strTribeId;
    }
    CTbscReqGetOnlineinfo&  operator=( const CTbscReqGetOnlineinfo&  cTbscReqGetOnlineinfo )
    {
        m_tribeId = cTbscReqGetOnlineinfo.m_tribeId;
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

inline uint32_t CTbscReqGetOnlineinfo::Size() const
{
    uint32_t nSize = 6;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbscRspGetOnlineinfo : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_RSP_GET_ONLINEINFO
    };
    CTbscRspGetOnlineinfo()
    {
    }

    ~CTbscRspGetOnlineinfo() { }
    CTbscRspGetOnlineinfo(const uint8_t&  chRetcode, const string&  strTribeId, const uint32_t&  dwMemberNum, const uint32_t&  dwVisitorNum)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_memberNum = dwMemberNum;
        m_visitorNum = dwVisitorNum;
    }
    CTbscRspGetOnlineinfo&  operator=( const CTbscRspGetOnlineinfo&  cTbscRspGetOnlineinfo )
    {
        m_retcode = cTbscRspGetOnlineinfo.m_retcode;
        m_tribeId = cTbscRspGetOnlineinfo.m_tribeId;
        m_memberNum = cTbscRspGetOnlineinfo.m_memberNum;
        m_visitorNum = cTbscRspGetOnlineinfo.m_visitorNum;
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
    const uint32_t&  GetMemberNum () const { return m_memberNum; }
    bool SetMemberNum ( const uint32_t&  dwMemberNum )
    {
        m_memberNum = dwMemberNum;
        return true;
    }
    const uint32_t&  GetVisitorNum () const { return m_visitorNum; }
    bool SetVisitorNum ( const uint32_t&  dwVisitorNum )
    {
        m_visitorNum = dwVisitorNum;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    uint32_t m_memberNum;
    uint32_t m_visitorNum;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscRspGetOnlineinfo::Size() const
{
    uint32_t nSize = 18;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbscReqNtfModifytribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_REQ_NTF_MODIFYTRIBE
    };
    CTbscReqNtfModifytribe()
    {
    }

    ~CTbscReqNtfModifytribe() { }
    CTbscReqNtfModifytribe(const string&  strTribeId, const string&  strUserId, const VECTOR< SModifyItem >&  vecItemList)
    {
        m_tribeId = strTribeId;
        m_userId = strUserId;
        m_itemList = vecItemList;
    }
    CTbscReqNtfModifytribe&  operator=( const CTbscReqNtfModifytribe&  cTbscReqNtfModifytribe )
    {
        m_tribeId = cTbscReqNtfModifytribe.m_tribeId;
        m_userId = cTbscReqNtfModifytribe.m_userId;
        m_itemList = cTbscReqNtfModifytribe.m_itemList;
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
    const VECTOR< SModifyItem >&  GetItemList () const { return m_itemList; }
    bool SetItemList ( const VECTOR< SModifyItem >&  vecItemList )
    {
        m_itemList = vecItemList;
        return true;
    }
private:
    string m_tribeId;
    string m_userId;
    VECTOR< SModifyItem > m_itemList;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscReqNtfModifytribe::Size() const
{
    uint32_t nSize = 17;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    for(uint32_t i = 0; i < m_itemList.size(); i++)
    {
        nSize += m_itemList[i].Size();
    }
    return nSize;
}

class CTbscRspNtfModifytribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_RSP_NTF_MODIFYTRIBE
    };
    CTbscRspNtfModifytribe()
    {
    }

    ~CTbscRspNtfModifytribe() { }
    CTbscRspNtfModifytribe(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strUserId, const VECTOR< SModifyItem >&  vecItemList)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_userId = strUserId;
        m_itemList = vecItemList;
    }
    CTbscRspNtfModifytribe&  operator=( const CTbscRspNtfModifytribe&  cTbscRspNtfModifytribe )
    {
        m_retcode = cTbscRspNtfModifytribe.m_retcode;
        m_tribeId = cTbscRspNtfModifytribe.m_tribeId;
        m_userId = cTbscRspNtfModifytribe.m_userId;
        m_itemList = cTbscRspNtfModifytribe.m_itemList;
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
    const VECTOR< SModifyItem >&  GetItemList () const { return m_itemList; }
    bool SetItemList ( const VECTOR< SModifyItem >&  vecItemList )
    {
        m_itemList = vecItemList;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    string m_userId;
    VECTOR< SModifyItem > m_itemList;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscRspNtfModifytribe::Size() const
{
    uint32_t nSize = 19;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    for(uint32_t i = 0; i < m_itemList.size(); i++)
    {
        nSize += m_itemList[i].Size();
    }
    return nSize;
}

class CTbscReqGetTribemember : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_REQ_GET_TRIBEMEMBER
    };
    CTbscReqGetTribemember()
    {
    }

    ~CTbscReqGetTribemember() { }
    CTbscReqGetTribemember(const string&  strTribeId)
    {
        m_tribeId = strTribeId;
    }
    CTbscReqGetTribemember&  operator=( const CTbscReqGetTribemember&  cTbscReqGetTribemember )
    {
        m_tribeId = cTbscReqGetTribemember.m_tribeId;
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

inline uint32_t CTbscReqGetTribemember::Size() const
{
    uint32_t nSize = 6;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbscRspGetTribemember : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_RSP_GET_TRIBEMEMBER
    };
    CTbscRspGetTribemember()
    {
    }

    ~CTbscRspGetTribemember() { }
    CTbscRspGetTribemember(const uint8_t&  chRetcode, const string&  strTribeId, const VECTOR< STmInfo >&  vecMemberList)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_memberList = vecMemberList;
    }
    CTbscRspGetTribemember&  operator=( const CTbscRspGetTribemember&  cTbscRspGetTribemember )
    {
        m_retcode = cTbscRspGetTribemember.m_retcode;
        m_tribeId = cTbscRspGetTribemember.m_tribeId;
        m_memberList = cTbscRspGetTribemember.m_memberList;
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
    const VECTOR< STmInfo >&  GetMemberList () const { return m_memberList; }
    bool SetMemberList ( const VECTOR< STmInfo >&  vecMemberList )
    {
        m_memberList = vecMemberList;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    VECTOR< STmInfo > m_memberList;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscRspGetTribemember::Size() const
{
    uint32_t nSize = 14;
    nSize += m_tribeId.length();
    for(uint32_t i = 0; i < m_memberList.size(); i++)
    {
        nSize += m_memberList[i].Size();
    }
    return nSize;
}

class CTbscReqGetMemberinfo : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_REQ_GET_MEMBERINFO
    };
    CTbscReqGetMemberinfo()
    {
    }

    ~CTbscReqGetMemberinfo() { }
    CTbscReqGetMemberinfo(const string&  strTribeId, const string&  strUserId)
    {
        m_tribeId = strTribeId;
        m_userId = strUserId;
    }
    CTbscReqGetMemberinfo&  operator=( const CTbscReqGetMemberinfo&  cTbscReqGetMemberinfo )
    {
        m_tribeId = cTbscReqGetMemberinfo.m_tribeId;
        m_userId = cTbscReqGetMemberinfo.m_userId;
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
private:
    string m_tribeId;
    string m_userId;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscReqGetMemberinfo::Size() const
{
    uint32_t nSize = 11;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    return nSize;
}

class CTbscRspGetMemberinfo : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_RSP_GET_MEMBERINFO
    };
    CTbscRspGetMemberinfo()
    {
    }

    ~CTbscRspGetMemberinfo() { }
    CTbscRspGetMemberinfo(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strUserId, const STmInfo&  sMemberInfo)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_userId = strUserId;
        m_memberInfo = sMemberInfo;
    }
    CTbscRspGetMemberinfo&  operator=( const CTbscRspGetMemberinfo&  cTbscRspGetMemberinfo )
    {
        m_retcode = cTbscRspGetMemberinfo.m_retcode;
        m_tribeId = cTbscRspGetMemberinfo.m_tribeId;
        m_userId = cTbscRspGetMemberinfo.m_userId;
        m_memberInfo = cTbscRspGetMemberinfo.m_memberInfo;
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
    const STmInfo&  GetMemberInfo () const { return m_memberInfo; }
    bool SetMemberInfo ( const STmInfo&  sMemberInfo )
    {
        m_memberInfo = sMemberInfo;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    string m_userId;
    STmInfo m_memberInfo;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscRspGetMemberinfo::Size() const
{
    uint32_t nSize = 14;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    nSize += m_memberInfo.Size();
    return nSize;
}

class CTbscReqGetTribemanager : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_REQ_GET_TRIBEMANAGER
    };
    CTbscReqGetTribemanager()
    {
    }

    ~CTbscReqGetTribemanager() { }
    CTbscReqGetTribemanager(const string&  strTribeId)
    {
        m_tribeId = strTribeId;
    }
    CTbscReqGetTribemanager&  operator=( const CTbscReqGetTribemanager&  cTbscReqGetTribemanager )
    {
        m_tribeId = cTbscReqGetTribemanager.m_tribeId;
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

inline uint32_t CTbscReqGetTribemanager::Size() const
{
    uint32_t nSize = 6;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbscRspGetTribemanager : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_RSP_GET_TRIBEMANAGER
    };
    CTbscRspGetTribemanager()
    {
    }

    ~CTbscRspGetTribemanager() { }
    CTbscRspGetTribemanager(const uint8_t&  chRetcode, const string&  strTribeId, const VECTOR< string >&  vecManagerList)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_managerList = vecManagerList;
    }
    CTbscRspGetTribemanager&  operator=( const CTbscRspGetTribemanager&  cTbscRspGetTribemanager )
    {
        m_retcode = cTbscRspGetTribemanager.m_retcode;
        m_tribeId = cTbscRspGetTribemanager.m_tribeId;
        m_managerList = cTbscRspGetTribemanager.m_managerList;
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
    const VECTOR< string >&  GetManagerList () const { return m_managerList; }
    bool SetManagerList ( const VECTOR< string >&  vecManagerList )
    {
        m_managerList = vecManagerList;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    VECTOR< string > m_managerList;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscRspGetTribemanager::Size() const
{
    uint32_t nSize = 14;
    nSize += m_tribeId.length();
    nSize += m_managerList.size() * 4;
    for(uint32_t i = 0; i < m_managerList.size(); i++)
    {
        nSize += m_managerList[i].length();
    }
    return nSize;
}

class CTbscReqGetUsertribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_REQ_GET_USERTRIBE
    };
    CTbscReqGetUsertribe()
    {
    }

    ~CTbscReqGetUsertribe() { }
    CTbscReqGetUsertribe(const string&  strUserId)
    {
        m_userId = strUserId;
    }
    CTbscReqGetUsertribe&  operator=( const CTbscReqGetUsertribe&  cTbscReqGetUsertribe )
    {
        m_userId = cTbscReqGetUsertribe.m_userId;
        return *this;
    }

    const string&  GetUserId () const { return m_userId; }
    bool SetUserId ( const string&  strUserId )
    {
        if(strUserId.size() > 64)
            return false;
        m_userId = strUserId;
        return true;
    }
private:
    string m_userId;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscReqGetUsertribe::Size() const
{
    uint32_t nSize = 6;
    nSize += m_userId.length();
    return nSize;
}

class CTbscRspGetUsertribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_RSP_GET_USERTRIBE
    };
    CTbscRspGetUsertribe()
    {
    }

    ~CTbscRspGetUsertribe() { }
    CTbscRspGetUsertribe(const uint8_t&  chRetcode, const string&  strUserId, const VECTOR< STribeId >&  vecTribeList)
    {
        m_retcode = chRetcode;
        m_userId = strUserId;
        m_tribeList = vecTribeList;
    }
    CTbscRspGetUsertribe&  operator=( const CTbscRspGetUsertribe&  cTbscRspGetUsertribe )
    {
        m_retcode = cTbscRspGetUsertribe.m_retcode;
        m_userId = cTbscRspGetUsertribe.m_userId;
        m_tribeList = cTbscRspGetUsertribe.m_tribeList;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
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
    const VECTOR< STribeId >&  GetTribeList () const { return m_tribeList; }
    bool SetTribeList ( const VECTOR< STribeId >&  vecTribeList )
    {
        m_tribeList = vecTribeList;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_userId;
    VECTOR< STribeId > m_tribeList;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscRspGetUsertribe::Size() const
{
    uint32_t nSize = 14;
    nSize += m_userId.length();
    for(uint32_t i = 0; i < m_tribeList.size(); i++)
    {
        nSize += m_tribeList[i].Size();
    }
    return nSize;
}

class CTbscReqSendTribemsg : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_REQ_SEND_TRIBEMSG
    };
    CTbscReqSendTribemsg() : m_msgType(1)
    {
    }

    ~CTbscReqSendTribemsg() { }
    CTbscReqSendTribemsg(const string&  strTribeId, const string&  strUserId, const string&  strMessage, const uint8_t&  chMsgType= 1)
    {
        m_tribeId = strTribeId;
        m_userId = strUserId;
        m_message = strMessage;
        m_msgType = chMsgType;
    }
    CTbscReqSendTribemsg&  operator=( const CTbscReqSendTribemsg&  cTbscReqSendTribemsg )
    {
        m_tribeId = cTbscReqSendTribemsg.m_tribeId;
        m_userId = cTbscReqSendTribemsg.m_userId;
        m_message = cTbscReqSendTribemsg.m_message;
        m_msgType = cTbscReqSendTribemsg.m_msgType;
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
    const string&  GetMessage () const { return m_message; }
    bool SetMessage ( const string&  strMessage )
    {
        m_message = strMessage;
        return true;
    }
    const uint8_t&  GetMsgType () const { return m_msgType; }
    bool SetMsgType ( const uint8_t&  chMsgType )
    {
        m_msgType = chMsgType;
        return true;
    }
private:
    string m_tribeId;
    string m_userId;
    string m_message;
    uint8_t m_msgType;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscReqSendTribemsg::Size() const
{
    uint32_t nSize = 18;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    nSize += m_message.length();
    return nSize;
}

class CTbscRspSendTribemsg : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_RSP_SEND_TRIBEMSG
    };
    CTbscRspSendTribemsg() : m_msgType(1)
    {
    }

    ~CTbscRspSendTribemsg() { }
    CTbscRspSendTribemsg(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strMessage, const uint8_t&  chMsgType= 1)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_message = strMessage;
        m_msgType = chMsgType;
    }
    CTbscRspSendTribemsg&  operator=( const CTbscRspSendTribemsg&  cTbscRspSendTribemsg )
    {
        m_retcode = cTbscRspSendTribemsg.m_retcode;
        m_tribeId = cTbscRspSendTribemsg.m_tribeId;
        m_message = cTbscRspSendTribemsg.m_message;
        m_msgType = cTbscRspSendTribemsg.m_msgType;
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
    const string&  GetMessage () const { return m_message; }
    bool SetMessage ( const string&  strMessage )
    {
        m_message = strMessage;
        return true;
    }
    const uint8_t&  GetMsgType () const { return m_msgType; }
    bool SetMsgType ( const uint8_t&  chMsgType )
    {
        m_msgType = chMsgType;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    string m_message;
    uint8_t m_msgType;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscRspSendTribemsg::Size() const
{
    uint32_t nSize = 15;
    nSize += m_tribeId.length();
    nSize += m_message.length();
    return nSize;
}

class CTbscReqGetTribeinfo : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_REQ_GET_TRIBEINFO
    };
    CTbscReqGetTribeinfo()
    {
    }

    ~CTbscReqGetTribeinfo() { }
    CTbscReqGetTribeinfo(const string&  strTribeId)
    {
        m_tribeId = strTribeId;
    }
    CTbscReqGetTribeinfo&  operator=( const CTbscReqGetTribeinfo&  cTbscReqGetTribeinfo )
    {
        m_tribeId = cTbscReqGetTribeinfo.m_tribeId;
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

inline uint32_t CTbscReqGetTribeinfo::Size() const
{
    uint32_t nSize = 6;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbscRspGetTribeinfo : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_RSP_GET_TRIBEINFO
    };
    CTbscRspGetTribeinfo()
    {
    }

    ~CTbscRspGetTribeinfo() { }
    CTbscRspGetTribeinfo(const uint8_t&  chRetcode, const string&  strTribeId, const STribeInfo&  sTribeInfo)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_tribeInfo = sTribeInfo;
    }
    CTbscRspGetTribeinfo&  operator=( const CTbscRspGetTribeinfo&  cTbscRspGetTribeinfo )
    {
        m_retcode = cTbscRspGetTribeinfo.m_retcode;
        m_tribeId = cTbscRspGetTribeinfo.m_tribeId;
        m_tribeInfo = cTbscRspGetTribeinfo.m_tribeInfo;
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
    const STribeInfo&  GetTribeInfo () const { return m_tribeInfo; }
    bool SetTribeInfo ( const STribeInfo&  sTribeInfo )
    {
        m_tribeInfo = sTribeInfo;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    STribeInfo m_tribeInfo;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscRspGetTribeinfo::Size() const
{
    uint32_t nSize = 9;
    nSize += m_tribeId.length();
    nSize += m_tribeInfo.Size();
    return nSize;
}

class CTbscReqGetActlevel : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_REQ_GET_ACTLEVEL
    };
    CTbscReqGetActlevel()
    {
    }

    ~CTbscReqGetActlevel() { }
    CTbscReqGetActlevel(const string&  strTribeId)
    {
        m_tribeId = strTribeId;
    }
    CTbscReqGetActlevel&  operator=( const CTbscReqGetActlevel&  cTbscReqGetActlevel )
    {
        m_tribeId = cTbscReqGetActlevel.m_tribeId;
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

inline uint32_t CTbscReqGetActlevel::Size() const
{
    uint32_t nSize = 6;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbscRspGetActlevel : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_RSP_GET_ACTLEVEL
    };
    CTbscRspGetActlevel()
    {
    }

    ~CTbscRspGetActlevel() { }
    CTbscRspGetActlevel(const uint8_t&  chRetcode, const string&  strTribeId, const uint32_t&  dwActiveLevel)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_activeLevel = dwActiveLevel;
    }
    CTbscRspGetActlevel&  operator=( const CTbscRspGetActlevel&  cTbscRspGetActlevel )
    {
        m_retcode = cTbscRspGetActlevel.m_retcode;
        m_tribeId = cTbscRspGetActlevel.m_tribeId;
        m_activeLevel = cTbscRspGetActlevel.m_activeLevel;
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
    const uint32_t&  GetActiveLevel () const { return m_activeLevel; }
    bool SetActiveLevel ( const uint32_t&  dwActiveLevel )
    {
        m_activeLevel = dwActiveLevel;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    uint32_t m_activeLevel;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscRspGetActlevel::Size() const
{
    uint32_t nSize = 13;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbscReqUnloadtribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_REQ_UNLOADTRIBE
    };
    CTbscReqUnloadtribe()
    {
    }

    ~CTbscReqUnloadtribe() { }
    CTbscReqUnloadtribe(const string&  strTribeId)
    {
        m_tribeId = strTribeId;
    }
    CTbscReqUnloadtribe&  operator=( const CTbscReqUnloadtribe&  cTbscReqUnloadtribe )
    {
        m_tribeId = cTbscReqUnloadtribe.m_tribeId;
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

inline uint32_t CTbscReqUnloadtribe::Size() const
{
    uint32_t nSize = 6;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbscRspUnloadtribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_RSP_UNLOADTRIBE
    };
    CTbscRspUnloadtribe()
    {
    }

    ~CTbscRspUnloadtribe() { }
    CTbscRspUnloadtribe(const uint8_t&  chRetcode, const string&  strTribeId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
    }
    CTbscRspUnloadtribe&  operator=( const CTbscRspUnloadtribe&  cTbscRspUnloadtribe )
    {
        m_retcode = cTbscRspUnloadtribe.m_retcode;
        m_tribeId = cTbscRspUnloadtribe.m_tribeId;
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
private:
    uint8_t m_retcode;
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

inline uint32_t CTbscRspUnloadtribe::Size() const
{
    uint32_t nSize = 8;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbscReqActiveUser : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_REQ_ACTIVE_USER
    };
    CTbscReqActiveUser()
    {
    }

    ~CTbscReqActiveUser() { }
    CTbscReqActiveUser(const string&  strUserId, const string&  strWebUid, const VECTOR< string >&  vecTribeList)
    {
        m_userId = strUserId;
        m_webUid = strWebUid;
        m_tribeList = vecTribeList;
    }
    CTbscReqActiveUser&  operator=( const CTbscReqActiveUser&  cTbscReqActiveUser )
    {
        m_userId = cTbscReqActiveUser.m_userId;
        m_webUid = cTbscReqActiveUser.m_webUid;
        m_tribeList = cTbscReqActiveUser.m_tribeList;
        return *this;
    }

    const string&  GetUserId () const { return m_userId; }
    bool SetUserId ( const string&  strUserId )
    {
        if(strUserId.size() > 64)
            return false;
        m_userId = strUserId;
        return true;
    }
    const string&  GetWebUid () const { return m_webUid; }
    bool SetWebUid ( const string&  strWebUid )
    {
        m_webUid = strWebUid;
        return true;
    }
    const VECTOR< string >&  GetTribeList () const { return m_tribeList; }
    bool SetTribeList ( const VECTOR< string >&  vecTribeList )
    {
        m_tribeList = vecTribeList;
        return true;
    }
private:
    string m_userId;
    string m_webUid;
    VECTOR< string > m_tribeList;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscReqActiveUser::Size() const
{
    uint32_t nSize = 17;
    nSize += m_userId.length();
    nSize += m_webUid.length();
    nSize += m_tribeList.size() * 4;
    for(uint32_t i = 0; i < m_tribeList.size(); i++)
    {
        nSize += m_tribeList[i].length();
    }
    return nSize;
}

class CTbscRspActiveUser : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_RSP_ACTIVE_USER
    };
    CTbscRspActiveUser()
    {
    }

    ~CTbscRspActiveUser() { }
    CTbscRspActiveUser(const uint8_t&  chRetcode, const string&  strUserId, const string&  strWebUid, const VECTOR< string >&  vecTribeList)
    {
        m_retcode = chRetcode;
        m_userId = strUserId;
        m_webUid = strWebUid;
        m_tribeList = vecTribeList;
    }
    CTbscRspActiveUser&  operator=( const CTbscRspActiveUser&  cTbscRspActiveUser )
    {
        m_retcode = cTbscRspActiveUser.m_retcode;
        m_userId = cTbscRspActiveUser.m_userId;
        m_webUid = cTbscRspActiveUser.m_webUid;
        m_tribeList = cTbscRspActiveUser.m_tribeList;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
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
    const string&  GetWebUid () const { return m_webUid; }
    bool SetWebUid ( const string&  strWebUid )
    {
        m_webUid = strWebUid;
        return true;
    }
    const VECTOR< string >&  GetTribeList () const { return m_tribeList; }
    bool SetTribeList ( const VECTOR< string >&  vecTribeList )
    {
        m_tribeList = vecTribeList;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_userId;
    string m_webUid;
    VECTOR< string > m_tribeList;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscRspActiveUser::Size() const
{
    uint32_t nSize = 19;
    nSize += m_userId.length();
    nSize += m_webUid.length();
    nSize += m_tribeList.size() * 4;
    for(uint32_t i = 0; i < m_tribeList.size(); i++)
    {
        nSize += m_tribeList[i].length();
    }
    return nSize;
}

class CTbscReqDisactiveUser : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_REQ_DISACTIVE_USER
    };
    CTbscReqDisactiveUser()
    {
    }

    ~CTbscReqDisactiveUser() { }
    CTbscReqDisactiveUser(const string&  strUserId, const string&  strWebUid, const VECTOR< string >&  vecTribeList)
    {
        m_userId = strUserId;
        m_webUid = strWebUid;
        m_tribeList = vecTribeList;
    }
    CTbscReqDisactiveUser&  operator=( const CTbscReqDisactiveUser&  cTbscReqDisactiveUser )
    {
        m_userId = cTbscReqDisactiveUser.m_userId;
        m_webUid = cTbscReqDisactiveUser.m_webUid;
        m_tribeList = cTbscReqDisactiveUser.m_tribeList;
        return *this;
    }

    const string&  GetUserId () const { return m_userId; }
    bool SetUserId ( const string&  strUserId )
    {
        if(strUserId.size() > 64)
            return false;
        m_userId = strUserId;
        return true;
    }
    const string&  GetWebUid () const { return m_webUid; }
    bool SetWebUid ( const string&  strWebUid )
    {
        m_webUid = strWebUid;
        return true;
    }
    const VECTOR< string >&  GetTribeList () const { return m_tribeList; }
    bool SetTribeList ( const VECTOR< string >&  vecTribeList )
    {
        m_tribeList = vecTribeList;
        return true;
    }
private:
    string m_userId;
    string m_webUid;
    VECTOR< string > m_tribeList;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscReqDisactiveUser::Size() const
{
    uint32_t nSize = 17;
    nSize += m_userId.length();
    nSize += m_webUid.length();
    nSize += m_tribeList.size() * 4;
    for(uint32_t i = 0; i < m_tribeList.size(); i++)
    {
        nSize += m_tribeList[i].length();
    }
    return nSize;
}

class CTbscRspDisactiveUser : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_RSP_DISACTIVE_USER
    };
    CTbscRspDisactiveUser()
    {
    }

    ~CTbscRspDisactiveUser() { }
    CTbscRspDisactiveUser(const uint8_t&  chRetcode, const string&  strUserId, const string&  strWebUid, const VECTOR< string >&  vecTribeList)
    {
        m_retcode = chRetcode;
        m_userId = strUserId;
        m_webUid = strWebUid;
        m_tribeList = vecTribeList;
    }
    CTbscRspDisactiveUser&  operator=( const CTbscRspDisactiveUser&  cTbscRspDisactiveUser )
    {
        m_retcode = cTbscRspDisactiveUser.m_retcode;
        m_userId = cTbscRspDisactiveUser.m_userId;
        m_webUid = cTbscRspDisactiveUser.m_webUid;
        m_tribeList = cTbscRspDisactiveUser.m_tribeList;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
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
    const string&  GetWebUid () const { return m_webUid; }
    bool SetWebUid ( const string&  strWebUid )
    {
        m_webUid = strWebUid;
        return true;
    }
    const VECTOR< string >&  GetTribeList () const { return m_tribeList; }
    bool SetTribeList ( const VECTOR< string >&  vecTribeList )
    {
        m_tribeList = vecTribeList;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_userId;
    string m_webUid;
    VECTOR< string > m_tribeList;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscRspDisactiveUser::Size() const
{
    uint32_t nSize = 19;
    nSize += m_userId.length();
    nSize += m_webUid.length();
    nSize += m_tribeList.size() * 4;
    for(uint32_t i = 0; i < m_tribeList.size(); i++)
    {
        nSize += m_tribeList[i].length();
    }
    return nSize;
}

class CTbscReqStopTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_REQ_STOP_TRIBE
    };
    CTbscReqStopTribe()
    {
    }

    ~CTbscReqStopTribe() { }
    CTbscReqStopTribe(const string&  strTribeId)
    {
        m_tribeId = strTribeId;
    }
    CTbscReqStopTribe&  operator=( const CTbscReqStopTribe&  cTbscReqStopTribe )
    {
        m_tribeId = cTbscReqStopTribe.m_tribeId;
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

inline uint32_t CTbscReqStopTribe::Size() const
{
    uint32_t nSize = 6;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbscRspStopTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_RSP_STOP_TRIBE
    };
    CTbscRspStopTribe()
    {
    }

    ~CTbscRspStopTribe() { }
    CTbscRspStopTribe(const uint8_t&  chRetcode, const string&  strTribeId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
    }
    CTbscRspStopTribe&  operator=( const CTbscRspStopTribe&  cTbscRspStopTribe )
    {
        m_retcode = cTbscRspStopTribe.m_retcode;
        m_tribeId = cTbscRspStopTribe.m_tribeId;
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
private:
    uint8_t m_retcode;
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

inline uint32_t CTbscRspStopTribe::Size() const
{
    uint32_t nSize = 8;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbscReqModifyTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_REQ_MODIFY_TRIBE
    };
    CTbscReqModifyTribe()
    {
    }

    ~CTbscReqModifyTribe() { }
    CTbscReqModifyTribe(const string&  strTribeId, const map< string,string >&  mapItems)
    {
        m_tribeId = strTribeId;
        m_items = mapItems;
    }
    CTbscReqModifyTribe&  operator=( const CTbscReqModifyTribe&  cTbscReqModifyTribe )
    {
        m_tribeId = cTbscReqModifyTribe.m_tribeId;
        m_items = cTbscReqModifyTribe.m_items;
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
    const map< string,string >&  GetItems () const { return m_items; }
    bool SetItems ( const map< string,string >&  mapItems )
    {
        m_items = mapItems;
        return true;
    }
private:
    string m_tribeId;
    map< string,string > m_items;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscReqModifyTribe::Size() const
{
    uint32_t nSize = 10;
    nSize += m_tribeId.length();
    nSize += m_items.size() * 8;
    {
        map< string,string >::const_iterator itr;
        for(itr = m_items.begin(); itr != m_items.end(); ++itr)
        {
            nSize += itr->first.length();
            nSize += itr->second.length();
        }
    }
    return nSize;
}

class CTbscRspModifyTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_RSP_MODIFY_TRIBE
    };
    CTbscRspModifyTribe()
    {
    }

    ~CTbscRspModifyTribe() { }
    CTbscRspModifyTribe(const uint8_t&  chRetcode, const string&  strTribeId, const map< string,string >&  mapItems)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_items = mapItems;
    }
    CTbscRspModifyTribe&  operator=( const CTbscRspModifyTribe&  cTbscRspModifyTribe )
    {
        m_retcode = cTbscRspModifyTribe.m_retcode;
        m_tribeId = cTbscRspModifyTribe.m_tribeId;
        m_items = cTbscRspModifyTribe.m_items;
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
    const map< string,string >&  GetItems () const { return m_items; }
    bool SetItems ( const map< string,string >&  mapItems )
    {
        m_items = mapItems;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    map< string,string > m_items;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscRspModifyTribe::Size() const
{
    uint32_t nSize = 12;
    nSize += m_tribeId.length();
    nSize += m_items.size() * 8;
    {
        map< string,string >::const_iterator itr;
        for(itr = m_items.begin(); itr != m_items.end(); ++itr)
        {
            nSize += itr->first.length();
            nSize += itr->second.length();
        }
    }
    return nSize;
}

class CTbscReqAddTribeMember : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_REQ_ADD_TRIBE_MEMBER
    };
    CTbscReqAddTribeMember()
    {
    }

    ~CTbscReqAddTribeMember() { }
    CTbscReqAddTribeMember(const string&  strTribeId, const uint8_t&  chTribeLevel, const string&  strUserId, const string&  strName)
    {
        m_tribeId = strTribeId;
        m_tribeLevel = chTribeLevel;
        m_userId = strUserId;
        m_name = strName;
    }
    CTbscReqAddTribeMember&  operator=( const CTbscReqAddTribeMember&  cTbscReqAddTribeMember )
    {
        m_tribeId = cTbscReqAddTribeMember.m_tribeId;
        m_tribeLevel = cTbscReqAddTribeMember.m_tribeLevel;
        m_userId = cTbscReqAddTribeMember.m_userId;
        m_name = cTbscReqAddTribeMember.m_name;
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
    const uint8_t&  GetTribeLevel () const { return m_tribeLevel; }
    bool SetTribeLevel ( const uint8_t&  chTribeLevel )
    {
        m_tribeLevel = chTribeLevel;
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
    const string&  GetName () const { return m_name; }
    bool SetName ( const string&  strName )
    {
        m_name = strName;
        return true;
    }
private:
    string m_tribeId;
    uint8_t m_tribeLevel;
    string m_userId;
    string m_name;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscReqAddTribeMember::Size() const
{
    uint32_t nSize = 18;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    nSize += m_name.length();
    return nSize;
}

class CTbscRspAddTribeMember : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_RSP_ADD_TRIBE_MEMBER
    };
    CTbscRspAddTribeMember()
    {
    }

    ~CTbscRspAddTribeMember() { }
    CTbscRspAddTribeMember(const uint8_t&  chRetcode, const string&  strTribeId, const uint8_t&  chTribeLevel, const string&  strUserId, const string&  strName)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_tribeLevel = chTribeLevel;
        m_userId = strUserId;
        m_name = strName;
    }
    CTbscRspAddTribeMember&  operator=( const CTbscRspAddTribeMember&  cTbscRspAddTribeMember )
    {
        m_retcode = cTbscRspAddTribeMember.m_retcode;
        m_tribeId = cTbscRspAddTribeMember.m_tribeId;
        m_tribeLevel = cTbscRspAddTribeMember.m_tribeLevel;
        m_userId = cTbscRspAddTribeMember.m_userId;
        m_name = cTbscRspAddTribeMember.m_name;
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
    const uint8_t&  GetTribeLevel () const { return m_tribeLevel; }
    bool SetTribeLevel ( const uint8_t&  chTribeLevel )
    {
        m_tribeLevel = chTribeLevel;
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
    const string&  GetName () const { return m_name; }
    bool SetName ( const string&  strName )
    {
        m_name = strName;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    uint8_t m_tribeLevel;
    string m_userId;
    string m_name;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscRspAddTribeMember::Size() const
{
    uint32_t nSize = 20;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    nSize += m_name.length();
    return nSize;
}

class CTbscReqDelTribeMember : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_REQ_DEL_TRIBE_MEMBER
    };
    CTbscReqDelTribeMember()
    {
    }

    ~CTbscReqDelTribeMember() { }
    CTbscReqDelTribeMember(const string&  strTribeId, const uint8_t&  chTribeLevel, const string&  strUserId, const string&  strOperId)
    {
        m_tribeId = strTribeId;
        m_tribeLevel = chTribeLevel;
        m_userId = strUserId;
        m_operId = strOperId;
    }
    CTbscReqDelTribeMember&  operator=( const CTbscReqDelTribeMember&  cTbscReqDelTribeMember )
    {
        m_tribeId = cTbscReqDelTribeMember.m_tribeId;
        m_tribeLevel = cTbscReqDelTribeMember.m_tribeLevel;
        m_userId = cTbscReqDelTribeMember.m_userId;
        m_operId = cTbscReqDelTribeMember.m_operId;
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
    const uint8_t&  GetTribeLevel () const { return m_tribeLevel; }
    bool SetTribeLevel ( const uint8_t&  chTribeLevel )
    {
        m_tribeLevel = chTribeLevel;
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
    const string&  GetOperId () const { return m_operId; }
    bool SetOperId ( const string&  strOperId )
    {
        m_operId = strOperId;
        return true;
    }
private:
    string m_tribeId;
    uint8_t m_tribeLevel;
    string m_userId;
    string m_operId;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscReqDelTribeMember::Size() const
{
    uint32_t nSize = 18;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    nSize += m_operId.length();
    return nSize;
}

class CTbscRspDelTribeMember : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_RSP_DEL_TRIBE_MEMBER
    };
    CTbscRspDelTribeMember()
    {
    }

    ~CTbscRspDelTribeMember() { }
    CTbscRspDelTribeMember(const uint8_t&  chRetcode, const string&  strTribeId, const uint8_t&  chTribeLevel, const string&  strUserId, const string&  strOperId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_tribeLevel = chTribeLevel;
        m_userId = strUserId;
        m_operId = strOperId;
    }
    CTbscRspDelTribeMember&  operator=( const CTbscRspDelTribeMember&  cTbscRspDelTribeMember )
    {
        m_retcode = cTbscRspDelTribeMember.m_retcode;
        m_tribeId = cTbscRspDelTribeMember.m_tribeId;
        m_tribeLevel = cTbscRspDelTribeMember.m_tribeLevel;
        m_userId = cTbscRspDelTribeMember.m_userId;
        m_operId = cTbscRspDelTribeMember.m_operId;
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
    const uint8_t&  GetTribeLevel () const { return m_tribeLevel; }
    bool SetTribeLevel ( const uint8_t&  chTribeLevel )
    {
        m_tribeLevel = chTribeLevel;
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
    const string&  GetOperId () const { return m_operId; }
    bool SetOperId ( const string&  strOperId )
    {
        m_operId = strOperId;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    uint8_t m_tribeLevel;
    string m_userId;
    string m_operId;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscRspDelTribeMember::Size() const
{
    uint32_t nSize = 20;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    nSize += m_operId.length();
    return nSize;
}

class CTbscReqQuitTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_REQ_QUIT_TRIBE
    };
    CTbscReqQuitTribe()
    {
    }

    ~CTbscReqQuitTribe() { }
    CTbscReqQuitTribe(const string&  strTribeId, const uint8_t&  chTribeLevel, const string&  strUserId)
    {
        m_tribeId = strTribeId;
        m_tribeLevel = chTribeLevel;
        m_userId = strUserId;
    }
    CTbscReqQuitTribe&  operator=( const CTbscReqQuitTribe&  cTbscReqQuitTribe )
    {
        m_tribeId = cTbscReqQuitTribe.m_tribeId;
        m_tribeLevel = cTbscReqQuitTribe.m_tribeLevel;
        m_userId = cTbscReqQuitTribe.m_userId;
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
    const uint8_t&  GetTribeLevel () const { return m_tribeLevel; }
    bool SetTribeLevel ( const uint8_t&  chTribeLevel )
    {
        m_tribeLevel = chTribeLevel;
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
private:
    string m_tribeId;
    uint8_t m_tribeLevel;
    string m_userId;

public:
    CScsHead m_scsHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbscReqQuitTribe::Size() const
{
    uint32_t nSize = 13;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    return nSize;
}

class CTbscRspQuitTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBSC_RSP_QUIT_TRIBE
    };
    CTbscRspQuitTribe()
    {
    }

    ~CTbscRspQuitTribe() { }
    CTbscRspQuitTribe(const uint8_t&  chRetcode, const string&  strTribeId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
    }
    CTbscRspQuitTribe&  operator=( const CTbscRspQuitTribe&  cTbscRspQuitTribe )
    {
        m_retcode = cTbscRspQuitTribe.m_retcode;
        m_tribeId = cTbscRspQuitTribe.m_tribeId;
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
private:
    uint8_t m_retcode;
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

inline uint32_t CTbscRspQuitTribe::Size() const
{
    uint32_t nSize = 8;
    nSize += m_tribeId.length();
    return nSize;
}

#endif
