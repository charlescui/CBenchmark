/*---------------------------------------------------------------------------
// Filename:        tbsc_pack.h
// Date:            2011-01-30 12:48:44
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __TBSC_PACK_H__
#define __TBSC_PACK_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"
#include "des.h"
#include <zlib.h>
#include "sc_head.h"
#include "const_macro.h"
#include "tbsc_cmd.h"
#include "tbsstrc_pack.h"

using namespace std;

class CImReqGetTribegroup : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_GET_TRIBEGROUP
    };
    CImReqGetTribegroup()
    {
    }

    ~CImReqGetTribegroup() { }
    CImReqGetTribegroup(const VECTOR< string >&  vecTribeIdList)
    {
        m_tribeIdList = vecTribeIdList;
    }
    CImReqGetTribegroup&  operator=( const CImReqGetTribegroup&  cImReqGetTribegroup )
    {
        m_tribeIdList = cImReqGetTribegroup.m_tribeIdList;
        return *this;
    }

    const VECTOR< string >&  GetTribeIdList () const { return m_tribeIdList; }
    bool SetTribeIdList ( const VECTOR< string >&  vecTribeIdList )
    {
        m_tribeIdList = vecTribeIdList;
        return true;
    }
private:
    VECTOR< string > m_tribeIdList;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqGetTribegroup::Size() const
{
    uint32_t nSize = 7;
    nSize += m_tribeIdList.size() * 4;
    for(uint32_t i = 0; i < m_tribeIdList.size(); i++)
    {
        nSize += m_tribeIdList[i].length();
    }
    return nSize;
}

class CImRspGetTribegroup : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_GET_TRIBEGROUP
    };
    CImRspGetTribegroup()
    {
    }

    ~CImRspGetTribegroup() { }
    CImRspGetTribegroup(const uint8_t&  chRetcode, const VECTOR< SMemberGroup >&  vecMemberGroupList)
    {
        m_retcode = chRetcode;
        m_memberGroupList = vecMemberGroupList;
    }
    CImRspGetTribegroup&  operator=( const CImRspGetTribegroup&  cImRspGetTribegroup )
    {
        m_retcode = cImRspGetTribegroup.m_retcode;
        m_memberGroupList = cImRspGetTribegroup.m_memberGroupList;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const VECTOR< SMemberGroup >&  GetMemberGroupList () const { return m_memberGroupList; }
    bool SetMemberGroupList ( const VECTOR< SMemberGroup >&  vecMemberGroupList )
    {
        m_memberGroupList = vecMemberGroupList;
        return true;
    }
private:
    uint8_t m_retcode;
    VECTOR< SMemberGroup > m_memberGroupList;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspGetTribegroup::Size() const
{
    uint32_t nSize = 9;
    for(uint32_t i = 0; i < m_memberGroupList.size(); i++)
    {
        nSize += m_memberGroupList[i].Size();
    }
    return nSize;
}

class CImReqAddTribegroup : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_ADD_TRIBEGROUP
    };
    CImReqAddTribegroup()
    {
    }

    ~CImReqAddTribegroup() { }
    CImReqAddTribegroup(const string&  strTribeId, const string&  strGroupName, const int64_t&  llParentId)
    {
        m_tribeId = strTribeId;
        m_groupName = strGroupName;
        m_parentId = llParentId;
    }
    CImReqAddTribegroup&  operator=( const CImReqAddTribegroup&  cImReqAddTribegroup )
    {
        m_tribeId = cImReqAddTribegroup.m_tribeId;
        m_groupName = cImReqAddTribegroup.m_groupName;
        m_parentId = cImReqAddTribegroup.m_parentId;
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
    const string&  GetGroupName () const { return m_groupName; }
    bool SetGroupName ( const string&  strGroupName )
    {
        m_groupName = strGroupName;
        return true;
    }
    const int64_t&  GetParentId () const { return m_parentId; }
    bool SetParentId ( const int64_t&  llParentId )
    {
        m_parentId = llParentId;
        return true;
    }
private:
    string m_tribeId;
    string m_groupName;
    int64_t m_parentId;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqAddTribegroup::Size() const
{
    uint32_t nSize = 20;
    nSize += m_tribeId.length();
    nSize += m_groupName.length();
    return nSize;
}

class CImRspAddTribegroup : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_ADD_TRIBEGROUP
    };
    CImRspAddTribegroup()
    {
    }

    ~CImRspAddTribegroup() { }
    CImRspAddTribegroup(const uint8_t&  chRetcode, const string&  strTribeId, const SGroupInfo&  sMemberGroup, const uint32_t&  dwGroupStamp)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_memberGroup = sMemberGroup;
        m_groupStamp = dwGroupStamp;
    }
    CImRspAddTribegroup&  operator=( const CImRspAddTribegroup&  cImRspAddTribegroup )
    {
        m_retcode = cImRspAddTribegroup.m_retcode;
        m_tribeId = cImRspAddTribegroup.m_tribeId;
        m_memberGroup = cImRspAddTribegroup.m_memberGroup;
        m_groupStamp = cImRspAddTribegroup.m_groupStamp;
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
    const SGroupInfo&  GetMemberGroup () const { return m_memberGroup; }
    bool SetMemberGroup ( const SGroupInfo&  sMemberGroup )
    {
        m_memberGroup = sMemberGroup;
        return true;
    }
    const uint32_t&  GetGroupStamp () const { return m_groupStamp; }
    bool SetGroupStamp ( const uint32_t&  dwGroupStamp )
    {
        m_groupStamp = dwGroupStamp;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    SGroupInfo m_memberGroup;
    uint32_t m_groupStamp;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspAddTribegroup::Size() const
{
    uint32_t nSize = 14;
    nSize += m_tribeId.length();
    nSize += m_memberGroup.Size();
    return nSize;
}

class CImReqUpdateTribegroup : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_UPDATE_TRIBEGROUP
    };
    CImReqUpdateTribegroup()
    {
    }

    ~CImReqUpdateTribegroup() { }
    CImReqUpdateTribegroup(const string&  strTribeId, const int64_t&  llGroupId, const string&  strGroupName)
    {
        m_tribeId = strTribeId;
        m_groupId = llGroupId;
        m_groupName = strGroupName;
    }
    CImReqUpdateTribegroup&  operator=( const CImReqUpdateTribegroup&  cImReqUpdateTribegroup )
    {
        m_tribeId = cImReqUpdateTribegroup.m_tribeId;
        m_groupId = cImReqUpdateTribegroup.m_groupId;
        m_groupName = cImReqUpdateTribegroup.m_groupName;
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
    const int64_t&  GetGroupId () const { return m_groupId; }
    bool SetGroupId ( const int64_t&  llGroupId )
    {
        m_groupId = llGroupId;
        return true;
    }
    const string&  GetGroupName () const { return m_groupName; }
    bool SetGroupName ( const string&  strGroupName )
    {
        m_groupName = strGroupName;
        return true;
    }
private:
    string m_tribeId;
    int64_t m_groupId;
    string m_groupName;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqUpdateTribegroup::Size() const
{
    uint32_t nSize = 20;
    nSize += m_tribeId.length();
    nSize += m_groupName.length();
    return nSize;
}

class CImRspUpdateTribegroup : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_UPDATE_TRIBEGROUP
    };
    CImRspUpdateTribegroup()
    {
    }

    ~CImRspUpdateTribegroup() { }
    CImRspUpdateTribegroup(const uint8_t&  chRetcode, const string&  strTribeId, const SGroupInfo&  sMemberGroup, const uint32_t&  dwGroupStamp)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_memberGroup = sMemberGroup;
        m_groupStamp = dwGroupStamp;
    }
    CImRspUpdateTribegroup&  operator=( const CImRspUpdateTribegroup&  cImRspUpdateTribegroup )
    {
        m_retcode = cImRspUpdateTribegroup.m_retcode;
        m_tribeId = cImRspUpdateTribegroup.m_tribeId;
        m_memberGroup = cImRspUpdateTribegroup.m_memberGroup;
        m_groupStamp = cImRspUpdateTribegroup.m_groupStamp;
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
    const SGroupInfo&  GetMemberGroup () const { return m_memberGroup; }
    bool SetMemberGroup ( const SGroupInfo&  sMemberGroup )
    {
        m_memberGroup = sMemberGroup;
        return true;
    }
    const uint32_t&  GetGroupStamp () const { return m_groupStamp; }
    bool SetGroupStamp ( const uint32_t&  dwGroupStamp )
    {
        m_groupStamp = dwGroupStamp;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    SGroupInfo m_memberGroup;
    uint32_t m_groupStamp;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspUpdateTribegroup::Size() const
{
    uint32_t nSize = 14;
    nSize += m_tribeId.length();
    nSize += m_memberGroup.Size();
    return nSize;
}

class CImReqDelTribegroup : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_DEL_TRIBEGROUP
    };
    CImReqDelTribegroup()
    {
    }

    ~CImReqDelTribegroup() { }
    CImReqDelTribegroup(const string&  strTribeId, const int64_t&  llGroupId)
    {
        m_tribeId = strTribeId;
        m_groupId = llGroupId;
    }
    CImReqDelTribegroup&  operator=( const CImReqDelTribegroup&  cImReqDelTribegroup )
    {
        m_tribeId = cImReqDelTribegroup.m_tribeId;
        m_groupId = cImReqDelTribegroup.m_groupId;
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
    const int64_t&  GetGroupId () const { return m_groupId; }
    bool SetGroupId ( const int64_t&  llGroupId )
    {
        m_groupId = llGroupId;
        return true;
    }
private:
    string m_tribeId;
    int64_t m_groupId;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqDelTribegroup::Size() const
{
    uint32_t nSize = 15;
    nSize += m_tribeId.length();
    return nSize;
}

class CImRspDelTribegroup : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_DEL_TRIBEGROUP
    };
    CImRspDelTribegroup()
    {
    }

    ~CImRspDelTribegroup() { }
    CImRspDelTribegroup(const uint8_t&  chRetcode, const string&  strTribeId, const int64_t&  llGroupId, const uint32_t&  dwGroupStamp)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_groupId = llGroupId;
        m_groupStamp = dwGroupStamp;
    }
    CImRspDelTribegroup&  operator=( const CImRspDelTribegroup&  cImRspDelTribegroup )
    {
        m_retcode = cImRspDelTribegroup.m_retcode;
        m_tribeId = cImRspDelTribegroup.m_tribeId;
        m_groupId = cImRspDelTribegroup.m_groupId;
        m_groupStamp = cImRspDelTribegroup.m_groupStamp;
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
    const int64_t&  GetGroupId () const { return m_groupId; }
    bool SetGroupId ( const int64_t&  llGroupId )
    {
        m_groupId = llGroupId;
        return true;
    }
    const uint32_t&  GetGroupStamp () const { return m_groupStamp; }
    bool SetGroupStamp ( const uint32_t&  dwGroupStamp )
    {
        m_groupStamp = dwGroupStamp;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    int64_t m_groupId;
    uint32_t m_groupStamp;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspDelTribegroup::Size() const
{
    uint32_t nSize = 22;
    nSize += m_tribeId.length();
    return nSize;
}

class CImReqShallowLogintribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_SHALLOW_LOGINTRIBE
    };
    ~CImReqShallowLogintribe() { }
public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqShallowLogintribe::Size() const
{
    return 1;
}
class CImRspShallowLogintribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_SHALLOW_LOGINTRIBE
    };
    CImRspShallowLogintribe()
    {
    }

    ~CImRspShallowLogintribe() { }
    CImRspShallowLogintribe(const uint8_t&  chRetcode, const VECTOR< STribeId >&  vecTribeIdList)
    {
        m_retcode = chRetcode;
        m_tribeIdList = vecTribeIdList;
    }
    CImRspShallowLogintribe&  operator=( const CImRspShallowLogintribe&  cImRspShallowLogintribe )
    {
        m_retcode = cImRspShallowLogintribe.m_retcode;
        m_tribeIdList = cImRspShallowLogintribe.m_tribeIdList;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const VECTOR< STribeId >&  GetTribeIdList () const { return m_tribeIdList; }
    bool SetTribeIdList ( const VECTOR< STribeId >&  vecTribeIdList )
    {
        m_tribeIdList = vecTribeIdList;
        return true;
    }
private:
    uint8_t m_retcode;
    VECTOR< STribeId > m_tribeIdList;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspShallowLogintribe::Size() const
{
    uint32_t nSize = 9;
    for(uint32_t i = 0; i < m_tribeIdList.size(); i++)
    {
        nSize += m_tribeIdList[i].Size();
    }
    return nSize;
}

class CImReqDeepLogintribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_DEEP_LOGINTRIBE
    };
    CImReqDeepLogintribe()
    {
    }

    ~CImReqDeepLogintribe() { }
    CImReqDeepLogintribe(const string&  strTribeId)
    {
        m_tribeId = strTribeId;
    }
    CImReqDeepLogintribe&  operator=( const CImReqDeepLogintribe&  cImReqDeepLogintribe )
    {
        m_tribeId = cImReqDeepLogintribe.m_tribeId;
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
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqDeepLogintribe::Size() const
{
    uint32_t nSize = 6;
    nSize += m_tribeId.length();
    return nSize;
}

class CImRspDeepLogintribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_DEEP_LOGINTRIBE
    };
    CImRspDeepLogintribe()
    {
    }

    ~CImRspDeepLogintribe() { }
    CImRspDeepLogintribe(const uint8_t&  chRetcode, const string&  strTribeId, const STribeInfo&  sTribeInfo, const VECTOR< STmStatus >&  vecTmStatusList, const uint32_t&  dwMemberStamp, const STribeExtInfo&  sExtInfo)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_tribeInfo = sTribeInfo;
        m_tmStatusList = vecTmStatusList;
        m_memberStamp = dwMemberStamp;
        m_extInfo = sExtInfo;
    }
    CImRspDeepLogintribe&  operator=( const CImRspDeepLogintribe&  cImRspDeepLogintribe )
    {
        m_retcode = cImRspDeepLogintribe.m_retcode;
        m_tribeId = cImRspDeepLogintribe.m_tribeId;
        m_tribeInfo = cImRspDeepLogintribe.m_tribeInfo;
        m_tmStatusList = cImRspDeepLogintribe.m_tmStatusList;
        m_memberStamp = cImRspDeepLogintribe.m_memberStamp;
        m_extInfo = cImRspDeepLogintribe.m_extInfo;
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
    const VECTOR< STmStatus >&  GetTmStatusList () const { return m_tmStatusList; }
    bool SetTmStatusList ( const VECTOR< STmStatus >&  vecTmStatusList )
    {
        m_tmStatusList = vecTmStatusList;
        return true;
    }
    const uint32_t&  GetMemberStamp () const { return m_memberStamp; }
    bool SetMemberStamp ( const uint32_t&  dwMemberStamp )
    {
        m_memberStamp = dwMemberStamp;
        return true;
    }
    const STribeExtInfo&  GetExtInfo () const { return m_extInfo; }
    bool SetExtInfo ( const STribeExtInfo&  sExtInfo )
    {
        m_extInfo = sExtInfo;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    STribeInfo m_tribeInfo;
    VECTOR< STmStatus > m_tmStatusList;
    uint32_t m_memberStamp;
    STribeExtInfo m_extInfo;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspDeepLogintribe::Size() const
{
    uint32_t nSize = 21;
    nSize += m_tribeId.length();
    nSize += m_tribeInfo.Size();
    for(uint32_t i = 0; i < m_tmStatusList.size(); i++)
    {
        nSize += m_tmStatusList[i].Size();
    }
    nSize += m_extInfo.Size();
    return nSize;
}

class CImReqInviteTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_INVITE_TRIBE
    };
    CImReqInviteTribe()
    {
    }

    ~CImReqInviteTribe() { }
    CImReqInviteTribe(const string&  strTribeId, const string&  strUserId, const string&  strMessage, const int64_t&  llGroupId)
    {
        m_tribeId = strTribeId;
        m_userId = strUserId;
        m_message = strMessage;
        m_groupId = llGroupId;
    }
    CImReqInviteTribe&  operator=( const CImReqInviteTribe&  cImReqInviteTribe )
    {
        m_tribeId = cImReqInviteTribe.m_tribeId;
        m_userId = cImReqInviteTribe.m_userId;
        m_message = cImReqInviteTribe.m_message;
        m_groupId = cImReqInviteTribe.m_groupId;
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
    const int64_t&  GetGroupId () const { return m_groupId; }
    bool SetGroupId ( const int64_t&  llGroupId )
    {
        m_groupId = llGroupId;
        return true;
    }
private:
    string m_tribeId;
    string m_userId;
    string m_message;
    int64_t m_groupId;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqInviteTribe::Size() const
{
    uint32_t nSize = 25;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    nSize += m_message.length();
    return nSize;
}

class CImRspInviteTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_INVITE_TRIBE
    };
    CImRspInviteTribe()
    {
    }

    ~CImRspInviteTribe() { }
    CImRspInviteTribe(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strUserId, const int64_t&  llGroupId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_userId = strUserId;
        m_groupId = llGroupId;
    }
    CImRspInviteTribe&  operator=( const CImRspInviteTribe&  cImRspInviteTribe )
    {
        m_retcode = cImRspInviteTribe.m_retcode;
        m_tribeId = cImRspInviteTribe.m_tribeId;
        m_userId = cImRspInviteTribe.m_userId;
        m_groupId = cImRspInviteTribe.m_groupId;
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
    const int64_t&  GetGroupId () const { return m_groupId; }
    bool SetGroupId ( const int64_t&  llGroupId )
    {
        m_groupId = llGroupId;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    string m_userId;
    int64_t m_groupId;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspInviteTribe::Size() const
{
    uint32_t nSize = 22;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    return nSize;
}

class CImNtfInviteTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_NTF_INVITE_TRIBE
    };
    CImNtfInviteTribe() : m_flag(0)
    {
    }

    ~CImNtfInviteTribe() { }
    CImNtfInviteTribe(const string&  strTribeId, const string&  strManagerId, const string&  strValidateCode, const string&  strName, const string&  strMessage, const int64_t&  llGroupId, const uint8_t&  chFlag= 0)
    {
        m_tribeId = strTribeId;
        m_managerId = strManagerId;
        m_validateCode = strValidateCode;
        m_name = strName;
        m_message = strMessage;
        m_groupId = llGroupId;
        m_flag = chFlag;
    }
    CImNtfInviteTribe&  operator=( const CImNtfInviteTribe&  cImNtfInviteTribe )
    {
        m_tribeId = cImNtfInviteTribe.m_tribeId;
        m_managerId = cImNtfInviteTribe.m_managerId;
        m_validateCode = cImNtfInviteTribe.m_validateCode;
        m_name = cImNtfInviteTribe.m_name;
        m_message = cImNtfInviteTribe.m_message;
        m_groupId = cImNtfInviteTribe.m_groupId;
        m_flag = cImNtfInviteTribe.m_flag;
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
    const string&  GetManagerId () const { return m_managerId; }
    bool SetManagerId ( const string&  strManagerId )
    {
        if(strManagerId.size() > 64)
            return false;
        m_managerId = strManagerId;
        return true;
    }
    const string&  GetValidateCode () const { return m_validateCode; }
    bool SetValidateCode ( const string&  strValidateCode )
    {
        if(strValidateCode.size() > 32)
            return false;
        m_validateCode = strValidateCode;
        return true;
    }
    const string&  GetName () const { return m_name; }
    bool SetName ( const string&  strName )
    {
        if(strName.size() > 64)
            return false;
        m_name = strName;
        return true;
    }
    const string&  GetMessage () const { return m_message; }
    bool SetMessage ( const string&  strMessage )
    {
        m_message = strMessage;
        return true;
    }
    const int64_t&  GetGroupId () const { return m_groupId; }
    bool SetGroupId ( const int64_t&  llGroupId )
    {
        m_groupId = llGroupId;
        return true;
    }
    const uint8_t&  GetFlag () const { return m_flag; }
    bool SetFlag ( const uint8_t&  chFlag )
    {
        m_flag = chFlag;
        return true;
    }
private:
    string m_tribeId;
    string m_managerId;
    string m_validateCode;
    string m_name;
    string m_message;
    int64_t m_groupId;
    uint8_t m_flag;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImNtfInviteTribe::Size() const
{
    uint32_t nSize = 37;
    nSize += m_tribeId.length();
    nSize += m_managerId.length();
    nSize += m_validateCode.length();
    nSize += m_name.length();
    nSize += m_message.length();
    return nSize;
}

class CImReqOninviteJointribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_ONINVITE_JOINTRIBE
    };
    CImReqOninviteJointribe() : m_type(0),
            m_recommendId("")
    {
    }

    ~CImReqOninviteJointribe() { }
    CImReqOninviteJointribe(const string&  strTribeId, const string&  strManagerId, const string&  strValidateCode, const int64_t&  llGroupId, const uint8_t&  chType= 0, const string&  strRecommendId= "")
    {
        m_tribeId = strTribeId;
        m_managerId = strManagerId;
        m_validateCode = strValidateCode;
        m_groupId = llGroupId;
        m_type = chType;
        m_recommendId = strRecommendId;
    }
    CImReqOninviteJointribe&  operator=( const CImReqOninviteJointribe&  cImReqOninviteJointribe )
    {
        m_tribeId = cImReqOninviteJointribe.m_tribeId;
        m_managerId = cImReqOninviteJointribe.m_managerId;
        m_validateCode = cImReqOninviteJointribe.m_validateCode;
        m_groupId = cImReqOninviteJointribe.m_groupId;
        m_type = cImReqOninviteJointribe.m_type;
        m_recommendId = cImReqOninviteJointribe.m_recommendId;
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
    const string&  GetManagerId () const { return m_managerId; }
    bool SetManagerId ( const string&  strManagerId )
    {
        if(strManagerId.size() > 64)
            return false;
        m_managerId = strManagerId;
        return true;
    }
    const string&  GetValidateCode () const { return m_validateCode; }
    bool SetValidateCode ( const string&  strValidateCode )
    {
        if(strValidateCode.size() > 32)
            return false;
        m_validateCode = strValidateCode;
        return true;
    }
    const int64_t&  GetGroupId () const { return m_groupId; }
    bool SetGroupId ( const int64_t&  llGroupId )
    {
        m_groupId = llGroupId;
        return true;
    }
    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const string&  GetRecommendId () const { return m_recommendId; }
    bool SetRecommendId ( const string&  strRecommendId )
    {
        if(strRecommendId.size() > 64)
            return false;
        m_recommendId = strRecommendId;
        return true;
    }
private:
    string m_tribeId;
    string m_managerId;
    string m_validateCode;
    int64_t m_groupId;
    uint8_t m_type;
    string m_recommendId;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqOninviteJointribe::Size() const
{
    uint32_t nSize = 32;
    nSize += m_tribeId.length();
    nSize += m_managerId.length();
    nSize += m_validateCode.length();
    nSize += m_recommendId.length();
    return nSize;
}

class CImRspOninviteJointribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_ONINVITE_JOINTRIBE
    };
    CImRspOninviteJointribe()
    {
    }

    ~CImRspOninviteJointribe() { }
    CImRspOninviteJointribe(const uint8_t&  chRetcode, const string&  strTribeId, const int64_t&  llGroupId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_groupId = llGroupId;
    }
    CImRspOninviteJointribe&  operator=( const CImRspOninviteJointribe&  cImRspOninviteJointribe )
    {
        m_retcode = cImRspOninviteJointribe.m_retcode;
        m_tribeId = cImRspOninviteJointribe.m_tribeId;
        m_groupId = cImRspOninviteJointribe.m_groupId;
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
    const int64_t&  GetGroupId () const { return m_groupId; }
    bool SetGroupId ( const int64_t&  llGroupId )
    {
        m_groupId = llGroupId;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    int64_t m_groupId;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspOninviteJointribe::Size() const
{
    uint32_t nSize = 17;
    nSize += m_tribeId.length();
    return nSize;
}

class CImReqAskJointribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_ASK_JOINTRIBE
    };
    CImReqAskJointribe()
    {
    }

    ~CImReqAskJointribe() { }
    CImReqAskJointribe(const string&  strTribeId, const uint8_t&  chType, const string&  strInfo)
    {
        m_tribeId = strTribeId;
        m_type = chType;
        m_info = strInfo;
    }
    CImReqAskJointribe&  operator=( const CImReqAskJointribe&  cImReqAskJointribe )
    {
        m_tribeId = cImReqAskJointribe.m_tribeId;
        m_type = cImReqAskJointribe.m_type;
        m_info = cImReqAskJointribe.m_info;
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
    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const string&  GetInfo () const { return m_info; }
    bool SetInfo ( const string&  strInfo )
    {
        m_info = strInfo;
        return true;
    }
private:
    string m_tribeId;
    uint8_t m_type;
    string m_info;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqAskJointribe::Size() const
{
    uint32_t nSize = 13;
    nSize += m_tribeId.length();
    nSize += m_info.length();
    return nSize;
}

class CImRspAskJointribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_ASK_JOINTRIBE
    };
    CImRspAskJointribe()
    {
    }

    ~CImRspAskJointribe() { }
    CImRspAskJointribe(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strTribeName, const string&  strExtSign, const int64_t&  llGroupId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_tribeName = strTribeName;
        m_extSign = strExtSign;
        m_groupId = llGroupId;
    }
    CImRspAskJointribe&  operator=( const CImRspAskJointribe&  cImRspAskJointribe )
    {
        m_retcode = cImRspAskJointribe.m_retcode;
        m_tribeId = cImRspAskJointribe.m_tribeId;
        m_tribeName = cImRspAskJointribe.m_tribeName;
        m_extSign = cImRspAskJointribe.m_extSign;
        m_groupId = cImRspAskJointribe.m_groupId;
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
    const string&  GetTribeName () const { return m_tribeName; }
    bool SetTribeName ( const string&  strTribeName )
    {
        m_tribeName = strTribeName;
        return true;
    }
    const string&  GetExtSign () const { return m_extSign; }
    bool SetExtSign ( const string&  strExtSign )
    {
        if(strExtSign.size() > 64)
            return false;
        m_extSign = strExtSign;
        return true;
    }
    const int64_t&  GetGroupId () const { return m_groupId; }
    bool SetGroupId ( const int64_t&  llGroupId )
    {
        m_groupId = llGroupId;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    string m_tribeName;
    string m_extSign;
    int64_t m_groupId;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspAskJointribe::Size() const
{
    uint32_t nSize = 27;
    nSize += m_tribeId.length();
    nSize += m_tribeName.length();
    nSize += m_extSign.length();
    return nSize;
}

class CImNtfAskJointribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_NTF_ASK_JOINTRIBE
    };
    CImNtfAskJointribe()
    {
    }

    ~CImNtfAskJointribe() { }
    CImNtfAskJointribe(const string&  strTribeId, const string&  strUserId, const uint8_t&  chType, const string&  strInfo)
    {
        m_tribeId = strTribeId;
        m_userId = strUserId;
        m_type = chType;
        m_info = strInfo;
    }
    CImNtfAskJointribe&  operator=( const CImNtfAskJointribe&  cImNtfAskJointribe )
    {
        m_tribeId = cImNtfAskJointribe.m_tribeId;
        m_userId = cImNtfAskJointribe.m_userId;
        m_type = cImNtfAskJointribe.m_type;
        m_info = cImNtfAskJointribe.m_info;
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
    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const string&  GetInfo () const { return m_info; }
    bool SetInfo ( const string&  strInfo )
    {
        m_info = strInfo;
        return true;
    }
private:
    string m_tribeId;
    string m_userId;
    uint8_t m_type;
    string m_info;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImNtfAskJointribe::Size() const
{
    uint32_t nSize = 18;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    nSize += m_info.length();
    return nSize;
}

class CImReqExamAskjointribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_EXAM_ASKJOINTRIBE
    };
    CImReqExamAskjointribe()
    {
    }

    ~CImReqExamAskjointribe() { }
    CImReqExamAskjointribe(const string&  strTribeId, const string&  strUserId, const uint8_t&  chType, const string&  strInfo, const int64_t&  llGroupId)
    {
        m_tribeId = strTribeId;
        m_userId = strUserId;
        m_type = chType;
        m_info = strInfo;
        m_groupId = llGroupId;
    }
    CImReqExamAskjointribe&  operator=( const CImReqExamAskjointribe&  cImReqExamAskjointribe )
    {
        m_tribeId = cImReqExamAskjointribe.m_tribeId;
        m_userId = cImReqExamAskjointribe.m_userId;
        m_type = cImReqExamAskjointribe.m_type;
        m_info = cImReqExamAskjointribe.m_info;
        m_groupId = cImReqExamAskjointribe.m_groupId;
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
    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const string&  GetInfo () const { return m_info; }
    bool SetInfo ( const string&  strInfo )
    {
        m_info = strInfo;
        return true;
    }
    const int64_t&  GetGroupId () const { return m_groupId; }
    bool SetGroupId ( const int64_t&  llGroupId )
    {
        m_groupId = llGroupId;
        return true;
    }
private:
    string m_tribeId;
    string m_userId;
    uint8_t m_type;
    string m_info;
    int64_t m_groupId;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqExamAskjointribe::Size() const
{
    uint32_t nSize = 27;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    nSize += m_info.length();
    return nSize;
}

class CImRspExamAskjointribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_EXAM_ASKJOINTRIBE
    };
    CImRspExamAskjointribe()
    {
    }

    ~CImRspExamAskjointribe() { }
    CImRspExamAskjointribe(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strUserId, const uint8_t&  chType, const int64_t&  llGroupId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_userId = strUserId;
        m_type = chType;
        m_groupId = llGroupId;
    }
    CImRspExamAskjointribe&  operator=( const CImRspExamAskjointribe&  cImRspExamAskjointribe )
    {
        m_retcode = cImRspExamAskjointribe.m_retcode;
        m_tribeId = cImRspExamAskjointribe.m_tribeId;
        m_userId = cImRspExamAskjointribe.m_userId;
        m_type = cImRspExamAskjointribe.m_type;
        m_groupId = cImRspExamAskjointribe.m_groupId;
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
    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const int64_t&  GetGroupId () const { return m_groupId; }
    bool SetGroupId ( const int64_t&  llGroupId )
    {
        m_groupId = llGroupId;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    string m_userId;
    uint8_t m_type;
    int64_t m_groupId;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspExamAskjointribe::Size() const
{
    uint32_t nSize = 24;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    return nSize;
}

class CImReqChglevelTribemember : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_CHGLEVEL_TRIBEMEMBER
    };
    CImReqChglevelTribemember()
    {
    }

    ~CImReqChglevelTribemember() { }
    CImReqChglevelTribemember(const string&  strTribeId, const string&  strMemberId, const uint8_t&  chLevel)
    {
        m_tribeId = strTribeId;
        m_memberId = strMemberId;
        m_level = chLevel;
    }
    CImReqChglevelTribemember&  operator=( const CImReqChglevelTribemember&  cImReqChglevelTribemember )
    {
        m_tribeId = cImReqChglevelTribemember.m_tribeId;
        m_memberId = cImReqChglevelTribemember.m_memberId;
        m_level = cImReqChglevelTribemember.m_level;
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
    const string&  GetMemberId () const { return m_memberId; }
    bool SetMemberId ( const string&  strMemberId )
    {
        if(strMemberId.size() > 64)
            return false;
        m_memberId = strMemberId;
        return true;
    }
    const uint8_t&  GetLevel () const { return m_level; }
    bool SetLevel ( const uint8_t&  chLevel )
    {
        m_level = chLevel;
        return true;
    }
private:
    string m_tribeId;
    string m_memberId;
    uint8_t m_level;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqChglevelTribemember::Size() const
{
    uint32_t nSize = 13;
    nSize += m_tribeId.length();
    nSize += m_memberId.length();
    return nSize;
}

class CImRspChglevelTribemember : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_CHGLEVEL_TRIBEMEMBER
    };
    CImRspChglevelTribemember()
    {
    }

    ~CImRspChglevelTribemember() { }
    CImRspChglevelTribemember(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strMemberId, const uint8_t&  chLevel)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_memberId = strMemberId;
        m_level = chLevel;
    }
    CImRspChglevelTribemember&  operator=( const CImRspChglevelTribemember&  cImRspChglevelTribemember )
    {
        m_retcode = cImRspChglevelTribemember.m_retcode;
        m_tribeId = cImRspChglevelTribemember.m_tribeId;
        m_memberId = cImRspChglevelTribemember.m_memberId;
        m_level = cImRspChglevelTribemember.m_level;
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
    const string&  GetMemberId () const { return m_memberId; }
    bool SetMemberId ( const string&  strMemberId )
    {
        if(strMemberId.size() > 64)
            return false;
        m_memberId = strMemberId;
        return true;
    }
    const uint8_t&  GetLevel () const { return m_level; }
    bool SetLevel ( const uint8_t&  chLevel )
    {
        m_level = chLevel;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    string m_memberId;
    uint8_t m_level;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspChglevelTribemember::Size() const
{
    uint32_t nSize = 15;
    nSize += m_tribeId.length();
    nSize += m_memberId.length();
    return nSize;
}

class CImReqChgTribegroup : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_CHG_TRIBEGROUP
    };
    CImReqChgTribegroup()
    {
    }

    ~CImReqChgTribegroup() { }
    CImReqChgTribegroup(const string&  strTribeId, const string&  strMemberId, const int64_t&  llGroupId)
    {
        m_tribeId = strTribeId;
        m_memberId = strMemberId;
        m_groupId = llGroupId;
    }
    CImReqChgTribegroup&  operator=( const CImReqChgTribegroup&  cImReqChgTribegroup )
    {
        m_tribeId = cImReqChgTribegroup.m_tribeId;
        m_memberId = cImReqChgTribegroup.m_memberId;
        m_groupId = cImReqChgTribegroup.m_groupId;
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
    const string&  GetMemberId () const { return m_memberId; }
    bool SetMemberId ( const string&  strMemberId )
    {
        if(strMemberId.size() > 64)
            return false;
        m_memberId = strMemberId;
        return true;
    }
    const int64_t&  GetGroupId () const { return m_groupId; }
    bool SetGroupId ( const int64_t&  llGroupId )
    {
        m_groupId = llGroupId;
        return true;
    }
private:
    string m_tribeId;
    string m_memberId;
    int64_t m_groupId;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqChgTribegroup::Size() const
{
    uint32_t nSize = 20;
    nSize += m_tribeId.length();
    nSize += m_memberId.length();
    return nSize;
}

class CImRspChgTribegroup : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_CHG_TRIBEGROUP
    };
    CImRspChgTribegroup()
    {
    }

    ~CImRspChgTribegroup() { }
    CImRspChgTribegroup(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strMemberId, const int64_t&  llGroupId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_memberId = strMemberId;
        m_groupId = llGroupId;
    }
    CImRspChgTribegroup&  operator=( const CImRspChgTribegroup&  cImRspChgTribegroup )
    {
        m_retcode = cImRspChgTribegroup.m_retcode;
        m_tribeId = cImRspChgTribegroup.m_tribeId;
        m_memberId = cImRspChgTribegroup.m_memberId;
        m_groupId = cImRspChgTribegroup.m_groupId;
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
    const string&  GetMemberId () const { return m_memberId; }
    bool SetMemberId ( const string&  strMemberId )
    {
        if(strMemberId.size() > 64)
            return false;
        m_memberId = strMemberId;
        return true;
    }
    const int64_t&  GetGroupId () const { return m_groupId; }
    bool SetGroupId ( const int64_t&  llGroupId )
    {
        m_groupId = llGroupId;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    string m_memberId;
    int64_t m_groupId;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspChgTribegroup::Size() const
{
    uint32_t nSize = 22;
    nSize += m_tribeId.length();
    nSize += m_memberId.length();
    return nSize;
}

class CImReqAddStarmember : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_ADD_STARMEMBER
    };
    CImReqAddStarmember()
    {
    }

    ~CImReqAddStarmember() { }
    CImReqAddStarmember(const string&  strTribeId, const string&  strMemberId)
    {
        m_tribeId = strTribeId;
        m_memberId = strMemberId;
    }
    CImReqAddStarmember&  operator=( const CImReqAddStarmember&  cImReqAddStarmember )
    {
        m_tribeId = cImReqAddStarmember.m_tribeId;
        m_memberId = cImReqAddStarmember.m_memberId;
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
    const string&  GetMemberId () const { return m_memberId; }
    bool SetMemberId ( const string&  strMemberId )
    {
        if(strMemberId.size() > 64)
            return false;
        m_memberId = strMemberId;
        return true;
    }
private:
    string m_tribeId;
    string m_memberId;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqAddStarmember::Size() const
{
    uint32_t nSize = 11;
    nSize += m_tribeId.length();
    nSize += m_memberId.length();
    return nSize;
}

class CImRspAddStarmember : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_ADD_STARMEMBER
    };
    CImRspAddStarmember()
    {
    }

    ~CImRspAddStarmember() { }
    CImRspAddStarmember(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strMemberId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_memberId = strMemberId;
    }
    CImRspAddStarmember&  operator=( const CImRspAddStarmember&  cImRspAddStarmember )
    {
        m_retcode = cImRspAddStarmember.m_retcode;
        m_tribeId = cImRspAddStarmember.m_tribeId;
        m_memberId = cImRspAddStarmember.m_memberId;
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
    const string&  GetMemberId () const { return m_memberId; }
    bool SetMemberId ( const string&  strMemberId )
    {
        if(strMemberId.size() > 64)
            return false;
        m_memberId = strMemberId;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    string m_memberId;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspAddStarmember::Size() const
{
    uint32_t nSize = 13;
    nSize += m_tribeId.length();
    nSize += m_memberId.length();
    return nSize;
}

class CImReqDelStarmember : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_DEL_STARMEMBER
    };
    CImReqDelStarmember()
    {
    }

    ~CImReqDelStarmember() { }
    CImReqDelStarmember(const string&  strTribeId, const string&  strMemberId)
    {
        m_tribeId = strTribeId;
        m_memberId = strMemberId;
    }
    CImReqDelStarmember&  operator=( const CImReqDelStarmember&  cImReqDelStarmember )
    {
        m_tribeId = cImReqDelStarmember.m_tribeId;
        m_memberId = cImReqDelStarmember.m_memberId;
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
    const string&  GetMemberId () const { return m_memberId; }
    bool SetMemberId ( const string&  strMemberId )
    {
        if(strMemberId.size() > 64)
            return false;
        m_memberId = strMemberId;
        return true;
    }
private:
    string m_tribeId;
    string m_memberId;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqDelStarmember::Size() const
{
    uint32_t nSize = 11;
    nSize += m_tribeId.length();
    nSize += m_memberId.length();
    return nSize;
}

class CImRspDelStarmember : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_DEL_STARMEMBER
    };
    CImRspDelStarmember()
    {
    }

    ~CImRspDelStarmember() { }
    CImRspDelStarmember(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strMemberId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_memberId = strMemberId;
    }
    CImRspDelStarmember&  operator=( const CImRspDelStarmember&  cImRspDelStarmember )
    {
        m_retcode = cImRspDelStarmember.m_retcode;
        m_tribeId = cImRspDelStarmember.m_tribeId;
        m_memberId = cImRspDelStarmember.m_memberId;
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
    const string&  GetMemberId () const { return m_memberId; }
    bool SetMemberId ( const string&  strMemberId )
    {
        if(strMemberId.size() > 64)
            return false;
        m_memberId = strMemberId;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    string m_memberId;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspDelStarmember::Size() const
{
    uint32_t nSize = 13;
    nSize += m_tribeId.length();
    nSize += m_memberId.length();
    return nSize;
}

class CImReqDelTribemember : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_DEL_TRIBEMEMBER
    };
    CImReqDelTribemember()
    {
    }

    ~CImReqDelTribemember() { }
    CImReqDelTribemember(const string&  strTribeId, const string&  strMemberId, const string&  strRemark)
    {
        m_tribeId = strTribeId;
        m_memberId = strMemberId;
        m_remark = strRemark;
    }
    CImReqDelTribemember&  operator=( const CImReqDelTribemember&  cImReqDelTribemember )
    {
        m_tribeId = cImReqDelTribemember.m_tribeId;
        m_memberId = cImReqDelTribemember.m_memberId;
        m_remark = cImReqDelTribemember.m_remark;
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
    const string&  GetMemberId () const { return m_memberId; }
    bool SetMemberId ( const string&  strMemberId )
    {
        if(strMemberId.size() > 64)
            return false;
        m_memberId = strMemberId;
        return true;
    }
    const string&  GetRemark () const { return m_remark; }
    bool SetRemark ( const string&  strRemark )
    {
        m_remark = strRemark;
        return true;
    }
private:
    string m_tribeId;
    string m_memberId;
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

inline uint32_t CImReqDelTribemember::Size() const
{
    uint32_t nSize = 16;
    nSize += m_tribeId.length();
    nSize += m_memberId.length();
    nSize += m_remark.length();
    return nSize;
}

class CImRspDelTribemember : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_DEL_TRIBEMEMBER
    };
    CImRspDelTribemember()
    {
    }

    ~CImRspDelTribemember() { }
    CImRspDelTribemember(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strMemberId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_memberId = strMemberId;
    }
    CImRspDelTribemember&  operator=( const CImRspDelTribemember&  cImRspDelTribemember )
    {
        m_retcode = cImRspDelTribemember.m_retcode;
        m_tribeId = cImRspDelTribemember.m_tribeId;
        m_memberId = cImRspDelTribemember.m_memberId;
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
    const string&  GetMemberId () const { return m_memberId; }
    bool SetMemberId ( const string&  strMemberId )
    {
        if(strMemberId.size() > 64)
            return false;
        m_memberId = strMemberId;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    string m_memberId;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspDelTribemember::Size() const
{
    uint32_t nSize = 13;
    nSize += m_tribeId.length();
    nSize += m_memberId.length();
    return nSize;
}

class CImReqGetTribeblack : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_GET_TRIBEBLACK
    };
    CImReqGetTribeblack()
    {
    }

    ~CImReqGetTribeblack() { }
    CImReqGetTribeblack(const string&  strTribeId, const uint32_t&  dwBlackStamp)
    {
        m_tribeId = strTribeId;
        m_blackStamp = dwBlackStamp;
    }
    CImReqGetTribeblack&  operator=( const CImReqGetTribeblack&  cImReqGetTribeblack )
    {
        m_tribeId = cImReqGetTribeblack.m_tribeId;
        m_blackStamp = cImReqGetTribeblack.m_blackStamp;
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
    const uint32_t&  GetBlackStamp () const { return m_blackStamp; }
    bool SetBlackStamp ( const uint32_t&  dwBlackStamp )
    {
        m_blackStamp = dwBlackStamp;
        return true;
    }
private:
    string m_tribeId;
    uint32_t m_blackStamp;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqGetTribeblack::Size() const
{
    uint32_t nSize = 11;
    nSize += m_tribeId.length();
    return nSize;
}

class CImRspGetTribeblack : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_GET_TRIBEBLACK
    };
    CImRspGetTribeblack()
    {
    }

    ~CImRspGetTribeblack() { }
    CImRspGetTribeblack(const uint8_t&  chRetcode, const string&  strTribeId, const VECTOR< STribeBlack >&  vecBlackIdList, const uint32_t&  dwBlackStamp)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_blackIdList = vecBlackIdList;
        m_blackStamp = dwBlackStamp;
    }
    CImRspGetTribeblack&  operator=( const CImRspGetTribeblack&  cImRspGetTribeblack )
    {
        m_retcode = cImRspGetTribeblack.m_retcode;
        m_tribeId = cImRspGetTribeblack.m_tribeId;
        m_blackIdList = cImRspGetTribeblack.m_blackIdList;
        m_blackStamp = cImRspGetTribeblack.m_blackStamp;
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
    const VECTOR< STribeBlack >&  GetBlackIdList () const { return m_blackIdList; }
    bool SetBlackIdList ( const VECTOR< STribeBlack >&  vecBlackIdList )
    {
        m_blackIdList = vecBlackIdList;
        return true;
    }
    const uint32_t&  GetBlackStamp () const { return m_blackStamp; }
    bool SetBlackStamp ( const uint32_t&  dwBlackStamp )
    {
        m_blackStamp = dwBlackStamp;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    VECTOR< STribeBlack > m_blackIdList;
    uint32_t m_blackStamp;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspGetTribeblack::Size() const
{
    uint32_t nSize = 19;
    nSize += m_tribeId.length();
    for(uint32_t i = 0; i < m_blackIdList.size(); i++)
    {
        nSize += m_blackIdList[i].Size();
    }
    return nSize;
}

class CImReqAddTribeblack : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_ADD_TRIBEBLACK
    };
    CImReqAddTribeblack()
    {
    }

    ~CImReqAddTribeblack() { }
    CImReqAddTribeblack(const string&  strTribeId, const string&  strBlackUid, const string&  strRemark)
    {
        m_tribeId = strTribeId;
        m_blackUid = strBlackUid;
        m_remark = strRemark;
    }
    CImReqAddTribeblack&  operator=( const CImReqAddTribeblack&  cImReqAddTribeblack )
    {
        m_tribeId = cImReqAddTribeblack.m_tribeId;
        m_blackUid = cImReqAddTribeblack.m_blackUid;
        m_remark = cImReqAddTribeblack.m_remark;
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
    const string&  GetBlackUid () const { return m_blackUid; }
    bool SetBlackUid ( const string&  strBlackUid )
    {
        if(strBlackUid.size() > 64)
            return false;
        m_blackUid = strBlackUid;
        return true;
    }
    const string&  GetRemark () const { return m_remark; }
    bool SetRemark ( const string&  strRemark )
    {
        m_remark = strRemark;
        return true;
    }
private:
    string m_tribeId;
    string m_blackUid;
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

inline uint32_t CImReqAddTribeblack::Size() const
{
    uint32_t nSize = 16;
    nSize += m_tribeId.length();
    nSize += m_blackUid.length();
    nSize += m_remark.length();
    return nSize;
}

class CImRspAddTribeblack : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_ADD_TRIBEBLACK
    };
    CImRspAddTribeblack()
    {
    }

    ~CImRspAddTribeblack() { }
    CImRspAddTribeblack(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strBlackUid, const uint32_t&  dwBlackStamp)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_blackUid = strBlackUid;
        m_blackStamp = dwBlackStamp;
    }
    CImRspAddTribeblack&  operator=( const CImRspAddTribeblack&  cImRspAddTribeblack )
    {
        m_retcode = cImRspAddTribeblack.m_retcode;
        m_tribeId = cImRspAddTribeblack.m_tribeId;
        m_blackUid = cImRspAddTribeblack.m_blackUid;
        m_blackStamp = cImRspAddTribeblack.m_blackStamp;
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
    const string&  GetBlackUid () const { return m_blackUid; }
    bool SetBlackUid ( const string&  strBlackUid )
    {
        if(strBlackUid.size() > 64)
            return false;
        m_blackUid = strBlackUid;
        return true;
    }
    const uint32_t&  GetBlackStamp () const { return m_blackStamp; }
    bool SetBlackStamp ( const uint32_t&  dwBlackStamp )
    {
        m_blackStamp = dwBlackStamp;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    string m_blackUid;
    uint32_t m_blackStamp;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspAddTribeblack::Size() const
{
    uint32_t nSize = 18;
    nSize += m_tribeId.length();
    nSize += m_blackUid.length();
    return nSize;
}

class CImReqDelTribeblack : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_DEL_TRIBEBLACK
    };
    CImReqDelTribeblack()
    {
    }

    ~CImReqDelTribeblack() { }
    CImReqDelTribeblack(const string&  strTribeId, const string&  strBlackUid, const string&  strRemark)
    {
        m_tribeId = strTribeId;
        m_blackUid = strBlackUid;
        m_remark = strRemark;
    }
    CImReqDelTribeblack&  operator=( const CImReqDelTribeblack&  cImReqDelTribeblack )
    {
        m_tribeId = cImReqDelTribeblack.m_tribeId;
        m_blackUid = cImReqDelTribeblack.m_blackUid;
        m_remark = cImReqDelTribeblack.m_remark;
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
    const string&  GetBlackUid () const { return m_blackUid; }
    bool SetBlackUid ( const string&  strBlackUid )
    {
        if(strBlackUid.size() > 64)
            return false;
        m_blackUid = strBlackUid;
        return true;
    }
    const string&  GetRemark () const { return m_remark; }
    bool SetRemark ( const string&  strRemark )
    {
        m_remark = strRemark;
        return true;
    }
private:
    string m_tribeId;
    string m_blackUid;
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

inline uint32_t CImReqDelTribeblack::Size() const
{
    uint32_t nSize = 16;
    nSize += m_tribeId.length();
    nSize += m_blackUid.length();
    nSize += m_remark.length();
    return nSize;
}

class CImRspDelTribeblack : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_DEL_TRIBEBLACK
    };
    CImRspDelTribeblack()
    {
    }

    ~CImRspDelTribeblack() { }
    CImRspDelTribeblack(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strBlackUid, const uint32_t&  dwBlackStamp)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_blackUid = strBlackUid;
        m_blackStamp = dwBlackStamp;
    }
    CImRspDelTribeblack&  operator=( const CImRspDelTribeblack&  cImRspDelTribeblack )
    {
        m_retcode = cImRspDelTribeblack.m_retcode;
        m_tribeId = cImRspDelTribeblack.m_tribeId;
        m_blackUid = cImRspDelTribeblack.m_blackUid;
        m_blackStamp = cImRspDelTribeblack.m_blackStamp;
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
    const string&  GetBlackUid () const { return m_blackUid; }
    bool SetBlackUid ( const string&  strBlackUid )
    {
        if(strBlackUid.size() > 64)
            return false;
        m_blackUid = strBlackUid;
        return true;
    }
    const uint32_t&  GetBlackStamp () const { return m_blackStamp; }
    bool SetBlackStamp ( const uint32_t&  dwBlackStamp )
    {
        m_blackStamp = dwBlackStamp;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    string m_blackUid;
    uint32_t m_blackStamp;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspDelTribeblack::Size() const
{
    uint32_t nSize = 18;
    nSize += m_tribeId.length();
    nSize += m_blackUid.length();
    return nSize;
}

class CImReqQuitTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_QUIT_TRIBE
    };
    CImReqQuitTribe()
    {
    }

    ~CImReqQuitTribe() { }
    CImReqQuitTribe(const string&  strTribeId, const string&  strRemark)
    {
        m_tribeId = strTribeId;
        m_remark = strRemark;
    }
    CImReqQuitTribe&  operator=( const CImReqQuitTribe&  cImReqQuitTribe )
    {
        m_tribeId = cImReqQuitTribe.m_tribeId;
        m_remark = cImReqQuitTribe.m_remark;
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
    const string&  GetRemark () const { return m_remark; }
    bool SetRemark ( const string&  strRemark )
    {
        m_remark = strRemark;
        return true;
    }
private:
    string m_tribeId;
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

inline uint32_t CImReqQuitTribe::Size() const
{
    uint32_t nSize = 11;
    nSize += m_tribeId.length();
    nSize += m_remark.length();
    return nSize;
}

class CImRspQuitTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_QUIT_TRIBE
    };
    CImRspQuitTribe()
    {
    }

    ~CImRspQuitTribe() { }
    CImRspQuitTribe(const uint8_t&  chRetcode, const string&  strTribeId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
    }
    CImRspQuitTribe&  operator=( const CImRspQuitTribe&  cImRspQuitTribe )
    {
        m_retcode = cImRspQuitTribe.m_retcode;
        m_tribeId = cImRspQuitTribe.m_tribeId;
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
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspQuitTribe::Size() const
{
    uint32_t nSize = 8;
    nSize += m_tribeId.length();
    return nSize;
}

class CImReqCloseTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_CLOSE_TRIBE
    };
    CImReqCloseTribe()
    {
    }

    ~CImReqCloseTribe() { }
    CImReqCloseTribe(const string&  strTribeId, const string&  strRemark)
    {
        m_tribeId = strTribeId;
        m_remark = strRemark;
    }
    CImReqCloseTribe&  operator=( const CImReqCloseTribe&  cImReqCloseTribe )
    {
        m_tribeId = cImReqCloseTribe.m_tribeId;
        m_remark = cImReqCloseTribe.m_remark;
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
    const string&  GetRemark () const { return m_remark; }
    bool SetRemark ( const string&  strRemark )
    {
        m_remark = strRemark;
        return true;
    }
private:
    string m_tribeId;
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

inline uint32_t CImReqCloseTribe::Size() const
{
    uint32_t nSize = 11;
    nSize += m_tribeId.length();
    nSize += m_remark.length();
    return nSize;
}

class CImRspCloseTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_CLOSE_TRIBE
    };
    CImRspCloseTribe()
    {
    }

    ~CImRspCloseTribe() { }
    CImRspCloseTribe(const uint8_t&  chRetcode, const string&  strTribeId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
    }
    CImRspCloseTribe&  operator=( const CImRspCloseTribe&  cImRspCloseTribe )
    {
        m_retcode = cImRspCloseTribe.m_retcode;
        m_tribeId = cImRspCloseTribe.m_tribeId;
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
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspCloseTribe::Size() const
{
    uint32_t nSize = 8;
    nSize += m_tribeId.length();
    return nSize;
}

class CImReqGetTribeinfo : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_GET_TRIBEINFO
    };
    CImReqGetTribeinfo()
    {
    }

    ~CImReqGetTribeinfo() { }
    CImReqGetTribeinfo(const string&  strTribeId)
    {
        m_tribeId = strTribeId;
    }
    CImReqGetTribeinfo&  operator=( const CImReqGetTribeinfo&  cImReqGetTribeinfo )
    {
        m_tribeId = cImReqGetTribeinfo.m_tribeId;
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
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqGetTribeinfo::Size() const
{
    uint32_t nSize = 6;
    nSize += m_tribeId.length();
    return nSize;
}

class CImRspGetTribeinfo : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_GET_TRIBEINFO
    };
    CImRspGetTribeinfo()
    {
    }

    ~CImRspGetTribeinfo() { }
    CImRspGetTribeinfo(const uint8_t&  chRetcode, const string&  strTribeId, const STribeInfo&  sTribeInfo, const STribeExtInfo&  sExtInfo)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_tribeInfo = sTribeInfo;
        m_extInfo = sExtInfo;
    }
    CImRspGetTribeinfo&  operator=( const CImRspGetTribeinfo&  cImRspGetTribeinfo )
    {
        m_retcode = cImRspGetTribeinfo.m_retcode;
        m_tribeId = cImRspGetTribeinfo.m_tribeId;
        m_tribeInfo = cImRspGetTribeinfo.m_tribeInfo;
        m_extInfo = cImRspGetTribeinfo.m_extInfo;
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
    const STribeExtInfo&  GetExtInfo () const { return m_extInfo; }
    bool SetExtInfo ( const STribeExtInfo&  sExtInfo )
    {
        m_extInfo = sExtInfo;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    STribeInfo m_tribeInfo;
    STribeExtInfo m_extInfo;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspGetTribeinfo::Size() const
{
    uint32_t nSize = 10;
    nSize += m_tribeId.length();
    nSize += m_tribeInfo.Size();
    nSize += m_extInfo.Size();
    return nSize;
}

class CImReqModifyTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_MODIFY_TRIBE
    };
    CImReqModifyTribe()
    {
    }

    ~CImReqModifyTribe() { }
    CImReqModifyTribe(const string&  strTribeId, const map< string,string >&  mapItems)
    {
        m_tribeId = strTribeId;
        m_items = mapItems;
    }
    CImReqModifyTribe&  operator=( const CImReqModifyTribe&  cImReqModifyTribe )
    {
        m_tribeId = cImReqModifyTribe.m_tribeId;
        m_items = cImReqModifyTribe.m_items;
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
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqModifyTribe::Size() const
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

class CImRspModifyTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_MODIFY_TRIBE
    };
    CImRspModifyTribe()
    {
    }

    ~CImRspModifyTribe() { }
    CImRspModifyTribe(const uint8_t&  chRetcode, const string&  strTribeId, const map< string,string >&  mapItems)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_items = mapItems;
    }
    CImRspModifyTribe&  operator=( const CImRspModifyTribe&  cImRspModifyTribe )
    {
        m_retcode = cImRspModifyTribe.m_retcode;
        m_tribeId = cImRspModifyTribe.m_tribeId;
        m_items = cImRspModifyTribe.m_items;
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
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspModifyTribe::Size() const
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

class CImReqGetTribememberinfo : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_GET_TRIBEMEMBERINFO
    };
    CImReqGetTribememberinfo()
    {
    }

    ~CImReqGetTribememberinfo() { }
    CImReqGetTribememberinfo(const string&  strTribeId)
    {
        m_tribeId = strTribeId;
    }
    CImReqGetTribememberinfo&  operator=( const CImReqGetTribememberinfo&  cImReqGetTribememberinfo )
    {
        m_tribeId = cImReqGetTribememberinfo.m_tribeId;
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
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqGetTribememberinfo::Size() const
{
    uint32_t nSize = 6;
    nSize += m_tribeId.length();
    return nSize;
}

class CImRspGetTribememberinfo : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_GET_TRIBEMEMBERINFO
    };
    CImRspGetTribememberinfo()
    {
    }

    ~CImRspGetTribememberinfo() { }
    CImRspGetTribememberinfo(const uint8_t&  chRetcode, const string&  strTribeId, const VECTOR< STmInfo >&  vecTmInfoList)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_tmInfoList = vecTmInfoList;
    }
    CImRspGetTribememberinfo&  operator=( const CImRspGetTribememberinfo&  cImRspGetTribememberinfo )
    {
        m_retcode = cImRspGetTribememberinfo.m_retcode;
        m_tribeId = cImRspGetTribememberinfo.m_tribeId;
        m_tmInfoList = cImRspGetTribememberinfo.m_tmInfoList;
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
    const VECTOR< STmInfo >&  GetTmInfoList () const { return m_tmInfoList; }
    bool SetTmInfoList ( const VECTOR< STmInfo >&  vecTmInfoList )
    {
        m_tmInfoList = vecTmInfoList;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    VECTOR< STmInfo > m_tmInfoList;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspGetTribememberinfo::Size() const
{
    uint32_t nSize = 14;
    nSize += m_tribeId.length();
    for(uint32_t i = 0; i < m_tmInfoList.size(); i++)
    {
        nSize += m_tmInfoList[i].Size();
    }
    return nSize;
}

class CImReqSendTribemsg : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_SEND_TRIBEMSG
    };
    CImReqSendTribemsg()
    {
    }

    ~CImReqSendTribemsg() { }
    CImReqSendTribemsg(const string&  strTribeId, const uint8_t&  chMsgType, const string&  strMessage)
    {
        m_tribeId = strTribeId;
        m_msgType = chMsgType;
        m_message = strMessage;
    }
    CImReqSendTribemsg&  operator=( const CImReqSendTribemsg&  cImReqSendTribemsg )
    {
        m_tribeId = cImReqSendTribemsg.m_tribeId;
        m_msgType = cImReqSendTribemsg.m_msgType;
        m_message = cImReqSendTribemsg.m_message;
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
    const uint8_t&  GetMsgType () const { return m_msgType; }
    bool SetMsgType ( const uint8_t&  chMsgType )
    {
        m_msgType = chMsgType;
        return true;
    }
    const string&  GetMessage () const { return m_message; }
    bool SetMessage ( const string&  strMessage )
    {
        m_message = strMessage;
        return true;
    }
private:
    string m_tribeId;
    uint8_t m_msgType;
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

inline uint32_t CImReqSendTribemsg::Size() const
{
    uint32_t nSize = 13;
    nSize += m_tribeId.length();
    nSize += m_message.length();
    return nSize;
}

class CImRspSendTribemsg : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_SEND_TRIBEMSG
    };
    CImRspSendTribemsg()
    {
    }

    ~CImRspSendTribemsg() { }
    CImRspSendTribemsg(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strMessage)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_message = strMessage;
    }
    CImRspSendTribemsg&  operator=( const CImRspSendTribemsg&  cImRspSendTribemsg )
    {
        m_retcode = cImRspSendTribemsg.m_retcode;
        m_tribeId = cImRspSendTribemsg.m_tribeId;
        m_message = cImRspSendTribemsg.m_message;
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
private:
    uint8_t m_retcode;
    string m_tribeId;
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

inline uint32_t CImRspSendTribemsg::Size() const
{
    uint32_t nSize = 13;
    nSize += m_tribeId.length();
    nSize += m_message.length();
    return nSize;
}

class CImNtfTribemsg : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_NTF_TRIBEMSG
    };
    CImNtfTribemsg()
    {
    }

    ~CImNtfTribemsg() { }
    CImNtfTribemsg(const string&  strTribeId, const uint8_t&  chOfflineFlag, const VECTOR< STribeMsg >&  vecTribeMsgList)
    {
        m_tribeId = strTribeId;
        m_offlineFlag = chOfflineFlag;
        m_tribeMsgList = vecTribeMsgList;
    }
    CImNtfTribemsg&  operator=( const CImNtfTribemsg&  cImNtfTribemsg )
    {
        m_tribeId = cImNtfTribemsg.m_tribeId;
        m_offlineFlag = cImNtfTribemsg.m_offlineFlag;
        m_tribeMsgList = cImNtfTribemsg.m_tribeMsgList;
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
    const uint8_t&  GetOfflineFlag () const { return m_offlineFlag; }
    bool SetOfflineFlag ( const uint8_t&  chOfflineFlag )
    {
        m_offlineFlag = chOfflineFlag;
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
    uint8_t m_offlineFlag;
    VECTOR< STribeMsg > m_tribeMsgList;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImNtfTribemsg::Size() const
{
    uint32_t nSize = 14;
    nSize += m_tribeId.length();
    for(uint32_t i = 0; i < m_tribeMsgList.size(); i++)
    {
        nSize += m_tribeMsgList[i].Size();
    }
    return nSize;
}

class CImNtfTribeSysmsg : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_NTF_TRIBE_SYSMSG
    };
    CImNtfTribeSysmsg()
    {
    }

    ~CImNtfTribeSysmsg() { }
    CImNtfTribeSysmsg(const string&  strTribeId, const uint8_t&  chOfflineFlag, const VECTOR< STribeSysmsg >&  vecTribeSysmsgList)
    {
        m_tribeId = strTribeId;
        m_offlineFlag = chOfflineFlag;
        m_tribeSysmsgList = vecTribeSysmsgList;
    }
    CImNtfTribeSysmsg&  operator=( const CImNtfTribeSysmsg&  cImNtfTribeSysmsg )
    {
        m_tribeId = cImNtfTribeSysmsg.m_tribeId;
        m_offlineFlag = cImNtfTribeSysmsg.m_offlineFlag;
        m_tribeSysmsgList = cImNtfTribeSysmsg.m_tribeSysmsgList;
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
    const uint8_t&  GetOfflineFlag () const { return m_offlineFlag; }
    bool SetOfflineFlag ( const uint8_t&  chOfflineFlag )
    {
        m_offlineFlag = chOfflineFlag;
        return true;
    }
    const VECTOR< STribeSysmsg >&  GetTribeSysmsgList () const { return m_tribeSysmsgList; }
    bool SetTribeSysmsgList ( const VECTOR< STribeSysmsg >&  vecTribeSysmsgList )
    {
        m_tribeSysmsgList = vecTribeSysmsgList;
        return true;
    }
private:
    string m_tribeId;
    uint8_t m_offlineFlag;
    VECTOR< STribeSysmsg > m_tribeSysmsgList;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImNtfTribeSysmsg::Size() const
{
    uint32_t nSize = 14;
    nSize += m_tribeId.length();
    for(uint32_t i = 0; i < m_tribeSysmsgList.size(); i++)
    {
        nSize += m_tribeSysmsgList[i].Size();
    }
    return nSize;
}

class CImReqGetTribeConfig : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_GET_TRIBE_CONFIG
    };
    ~CImReqGetTribeConfig() { }
public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqGetTribeConfig::Size() const
{
    return 1;
}
class CImRspGetTribeConfig : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_GET_TRIBE_CONFIG
    };
    CImRspGetTribeConfig()
    {
    }

    ~CImRspGetTribeConfig() { }
    CImRspGetTribeConfig(const uint8_t&  chRetcode, const uint8_t&  chAddTribeVerify)
    {
        m_retcode = chRetcode;
        m_addTribeVerify = chAddTribeVerify;
    }
    CImRspGetTribeConfig&  operator=( const CImRspGetTribeConfig&  cImRspGetTribeConfig )
    {
        m_retcode = cImRspGetTribeConfig.m_retcode;
        m_addTribeVerify = cImRspGetTribeConfig.m_addTribeVerify;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const uint8_t&  GetAddTribeVerify () const { return m_addTribeVerify; }
    bool SetAddTribeVerify ( const uint8_t&  chAddTribeVerify )
    {
        m_addTribeVerify = chAddTribeVerify;
        return true;
    }
private:
    uint8_t m_retcode;
    uint8_t m_addTribeVerify;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspGetTribeConfig::Size() const
{
    return 5;
}
class CImReqSetTribeConfig : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_SET_TRIBE_CONFIG
    };
    CImReqSetTribeConfig()
    {
    }

    ~CImReqSetTribeConfig() { }
    CImReqSetTribeConfig(const uint8_t&  chAddTribeVerify)
    {
        m_addTribeVerify = chAddTribeVerify;
    }
    CImReqSetTribeConfig&  operator=( const CImReqSetTribeConfig&  cImReqSetTribeConfig )
    {
        m_addTribeVerify = cImReqSetTribeConfig.m_addTribeVerify;
        return *this;
    }

    const uint8_t&  GetAddTribeVerify () const { return m_addTribeVerify; }
    bool SetAddTribeVerify ( const uint8_t&  chAddTribeVerify )
    {
        m_addTribeVerify = chAddTribeVerify;
        return true;
    }
private:
    uint8_t m_addTribeVerify;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqSetTribeConfig::Size() const
{
    return 3;
}
class CImRspSetTribeConfig : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_SET_TRIBE_CONFIG
    };
    CImRspSetTribeConfig()
    {
    }

    ~CImRspSetTribeConfig() { }
    CImRspSetTribeConfig(const uint8_t&  chRetcode, const uint8_t&  chAddTribeVerify)
    {
        m_retcode = chRetcode;
        m_addTribeVerify = chAddTribeVerify;
    }
    CImRspSetTribeConfig&  operator=( const CImRspSetTribeConfig&  cImRspSetTribeConfig )
    {
        m_retcode = cImRspSetTribeConfig.m_retcode;
        m_addTribeVerify = cImRspSetTribeConfig.m_addTribeVerify;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const uint8_t&  GetAddTribeVerify () const { return m_addTribeVerify; }
    bool SetAddTribeVerify ( const uint8_t&  chAddTribeVerify )
    {
        m_addTribeVerify = chAddTribeVerify;
        return true;
    }
private:
    uint8_t m_retcode;
    uint8_t m_addTribeVerify;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspSetTribeConfig::Size() const
{
    return 5;
}
class CImReqSetOpenTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_SET_OPEN_TRIBE
    };
    CImReqSetOpenTribe()
    {
    }

    ~CImReqSetOpenTribe() { }
    CImReqSetOpenTribe(const VECTOR< string >&  vecTribeIdList, const uint8_t&  chOpenTribe)
    {
        m_tribeIdList = vecTribeIdList;
        m_openTribe = chOpenTribe;
    }
    CImReqSetOpenTribe&  operator=( const CImReqSetOpenTribe&  cImReqSetOpenTribe )
    {
        m_tribeIdList = cImReqSetOpenTribe.m_tribeIdList;
        m_openTribe = cImReqSetOpenTribe.m_openTribe;
        return *this;
    }

    const VECTOR< string >&  GetTribeIdList () const { return m_tribeIdList; }
    bool SetTribeIdList ( const VECTOR< string >&  vecTribeIdList )
    {
        m_tribeIdList = vecTribeIdList;
        return true;
    }
    const uint8_t&  GetOpenTribe () const { return m_openTribe; }
    bool SetOpenTribe ( const uint8_t&  chOpenTribe )
    {
        m_openTribe = chOpenTribe;
        return true;
    }
private:
    VECTOR< string > m_tribeIdList;
    uint8_t m_openTribe;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqSetOpenTribe::Size() const
{
    uint32_t nSize = 9;
    nSize += m_tribeIdList.size() * 4;
    for(uint32_t i = 0; i < m_tribeIdList.size(); i++)
    {
        nSize += m_tribeIdList[i].length();
    }
    return nSize;
}

class CImRspSetOpenTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_SET_OPEN_TRIBE
    };
    CImRspSetOpenTribe()
    {
    }

    ~CImRspSetOpenTribe() { }
    CImRspSetOpenTribe(const uint8_t&  chRetcode, const VECTOR< string >&  vecTribeIdList, const uint8_t&  chOpenTribe)
    {
        m_retcode = chRetcode;
        m_tribeIdList = vecTribeIdList;
        m_openTribe = chOpenTribe;
    }
    CImRspSetOpenTribe&  operator=( const CImRspSetOpenTribe&  cImRspSetOpenTribe )
    {
        m_retcode = cImRspSetOpenTribe.m_retcode;
        m_tribeIdList = cImRspSetOpenTribe.m_tribeIdList;
        m_openTribe = cImRspSetOpenTribe.m_openTribe;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const VECTOR< string >&  GetTribeIdList () const { return m_tribeIdList; }
    bool SetTribeIdList ( const VECTOR< string >&  vecTribeIdList )
    {
        m_tribeIdList = vecTribeIdList;
        return true;
    }
    const uint8_t&  GetOpenTribe () const { return m_openTribe; }
    bool SetOpenTribe ( const uint8_t&  chOpenTribe )
    {
        m_openTribe = chOpenTribe;
        return true;
    }
private:
    uint8_t m_retcode;
    VECTOR< string > m_tribeIdList;
    uint8_t m_openTribe;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspSetOpenTribe::Size() const
{
    uint32_t nSize = 11;
    nSize += m_tribeIdList.size() * 4;
    for(uint32_t i = 0; i < m_tribeIdList.size(); i++)
    {
        nSize += m_tribeIdList[i].length();
    }
    return nSize;
}

class CImReqVisitTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_VISIT_TRIBE
    };
    CImReqVisitTribe()
    {
    }

    ~CImReqVisitTribe() { }
    CImReqVisitTribe(const string&  strTribeId)
    {
        m_tribeId = strTribeId;
    }
    CImReqVisitTribe&  operator=( const CImReqVisitTribe&  cImReqVisitTribe )
    {
        m_tribeId = cImReqVisitTribe.m_tribeId;
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
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqVisitTribe::Size() const
{
    uint32_t nSize = 6;
    nSize += m_tribeId.length();
    return nSize;
}

class CImRspVisitTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_VISIT_TRIBE
    };
    CImRspVisitTribe()
    {
    }

    ~CImRspVisitTribe() { }
    CImRspVisitTribe(const uint8_t&  chRetcode, const string&  strTribeId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
    }
    CImRspVisitTribe&  operator=( const CImRspVisitTribe&  cImRspVisitTribe )
    {
        m_retcode = cImRspVisitTribe.m_retcode;
        m_tribeId = cImRspVisitTribe.m_tribeId;
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
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspVisitTribe::Size() const
{
    uint32_t nSize = 8;
    nSize += m_tribeId.length();
    return nSize;
}

class CImReqClearVisitor : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_CLEAR_VISITOR
    };
    CImReqClearVisitor()
    {
    }

    ~CImReqClearVisitor() { }
    CImReqClearVisitor(const string&  strTribeId)
    {
        m_tribeId = strTribeId;
    }
    CImReqClearVisitor&  operator=( const CImReqClearVisitor&  cImReqClearVisitor )
    {
        m_tribeId = cImReqClearVisitor.m_tribeId;
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
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqClearVisitor::Size() const
{
    uint32_t nSize = 6;
    nSize += m_tribeId.length();
    return nSize;
}

class CImRspClearVisitor : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_CLEAR_VISITOR
    };
    CImRspClearVisitor()
    {
    }

    ~CImRspClearVisitor() { }
    CImRspClearVisitor(const uint8_t&  chRetcode, const string&  strTribeId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
    }
    CImRspClearVisitor&  operator=( const CImRspClearVisitor&  cImRspClearVisitor )
    {
        m_retcode = cImRspClearVisitor.m_retcode;
        m_tribeId = cImRspClearVisitor.m_tribeId;
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
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspClearVisitor::Size() const
{
    uint32_t nSize = 8;
    nSize += m_tribeId.length();
    return nSize;
}

class CImReqStartTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_START_TRIBE
    };
    CImReqStartTribe()
    {
    }

    ~CImReqStartTribe() { }
    CImReqStartTribe(const string&  strTribeId, const map< string,string >&  mapItems)
    {
        m_tribeId = strTribeId;
        m_items = mapItems;
    }
    CImReqStartTribe&  operator=( const CImReqStartTribe&  cImReqStartTribe )
    {
        m_tribeId = cImReqStartTribe.m_tribeId;
        m_items = cImReqStartTribe.m_items;
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
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqStartTribe::Size() const
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

class CImRspStartTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_START_TRIBE
    };
    CImRspStartTribe()
    {
    }

    ~CImRspStartTribe() { }
    CImRspStartTribe(const uint8_t&  chRetcode, const string&  strTribeId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
    }
    CImRspStartTribe&  operator=( const CImRspStartTribe&  cImRspStartTribe )
    {
        m_retcode = cImRspStartTribe.m_retcode;
        m_tribeId = cImRspStartTribe.m_tribeId;
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
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspStartTribe::Size() const
{
    uint32_t nSize = 8;
    nSize += m_tribeId.length();
    return nSize;
}

class CImReqUpdateTribecard : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_UPDATE_TRIBECARD
    };
    CImReqUpdateTribecard()
    {
    }

    ~CImReqUpdateTribecard() { }
    CImReqUpdateTribecard(const string&  strTribeId, const string&  strMemberId, const map< string,string >&  mapItems)
    {
        m_tribeId = strTribeId;
        m_memberId = strMemberId;
        m_items = mapItems;
    }
    CImReqUpdateTribecard&  operator=( const CImReqUpdateTribecard&  cImReqUpdateTribecard )
    {
        m_tribeId = cImReqUpdateTribecard.m_tribeId;
        m_memberId = cImReqUpdateTribecard.m_memberId;
        m_items = cImReqUpdateTribecard.m_items;
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
    const string&  GetMemberId () const { return m_memberId; }
    bool SetMemberId ( const string&  strMemberId )
    {
        if(strMemberId.size() > 64)
            return false;
        m_memberId = strMemberId;
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
    string m_memberId;
    map< string,string > m_items;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqUpdateTribecard::Size() const
{
    uint32_t nSize = 15;
    nSize += m_tribeId.length();
    nSize += m_memberId.length();
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

class CImRspUpdateTribecard : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_UPDATE_TRIBECARD
    };
    CImRspUpdateTribecard()
    {
    }

    ~CImRspUpdateTribecard() { }
    CImRspUpdateTribecard(const uint8_t&  chRetcode, const string&  strTribeId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
    }
    CImRspUpdateTribecard&  operator=( const CImRspUpdateTribecard&  cImRspUpdateTribecard )
    {
        m_retcode = cImRspUpdateTribecard.m_retcode;
        m_tribeId = cImRspUpdateTribecard.m_tribeId;
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
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspUpdateTribecard::Size() const
{
    uint32_t nSize = 8;
    nSize += m_tribeId.length();
    return nSize;
}

class CImReqRecommendTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_RECOMMEND_TRIBE
    };
    CImReqRecommendTribe()
    {
    }

    ~CImReqRecommendTribe() { }
    CImReqRecommendTribe(const string&  strTribeId, const VECTOR< string >&  vecUserList, const string&  strMessage)
    {
        m_tribeId = strTribeId;
        m_userList = vecUserList;
        m_message = strMessage;
    }
    CImReqRecommendTribe&  operator=( const CImReqRecommendTribe&  cImReqRecommendTribe )
    {
        m_tribeId = cImReqRecommendTribe.m_tribeId;
        m_userList = cImReqRecommendTribe.m_userList;
        m_message = cImReqRecommendTribe.m_message;
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
    const VECTOR< string >&  GetUserList () const { return m_userList; }
    bool SetUserList ( const VECTOR< string >&  vecUserList )
    {
        m_userList = vecUserList;
        return true;
    }
    const string&  GetMessage () const { return m_message; }
    bool SetMessage ( const string&  strMessage )
    {
        m_message = strMessage;
        return true;
    }
private:
    string m_tribeId;
    VECTOR< string > m_userList;
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

inline uint32_t CImReqRecommendTribe::Size() const
{
    uint32_t nSize = 17;
    nSize += m_tribeId.length();
    nSize += m_userList.size() * 4;
    for(uint32_t i = 0; i < m_userList.size(); i++)
    {
        nSize += m_userList[i].length();
    }
    nSize += m_message.length();
    return nSize;
}

class CImRspRecommendTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_RECOMMEND_TRIBE
    };
    CImRspRecommendTribe()
    {
    }

    ~CImRspRecommendTribe() { }
    CImRspRecommendTribe(const uint8_t&  chRetcode, const string&  strTribeId, const VECTOR< string >&  vecUserList)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_userList = vecUserList;
    }
    CImRspRecommendTribe&  operator=( const CImRspRecommendTribe&  cImRspRecommendTribe )
    {
        m_retcode = cImRspRecommendTribe.m_retcode;
        m_tribeId = cImRspRecommendTribe.m_tribeId;
        m_userList = cImRspRecommendTribe.m_userList;
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
    const VECTOR< string >&  GetUserList () const { return m_userList; }
    bool SetUserList ( const VECTOR< string >&  vecUserList )
    {
        m_userList = vecUserList;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
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

inline uint32_t CImRspRecommendTribe::Size() const
{
    uint32_t nSize = 14;
    nSize += m_tribeId.length();
    nSize += m_userList.size() * 4;
    for(uint32_t i = 0; i < m_userList.size(); i++)
    {
        nSize += m_userList[i].length();
    }
    return nSize;
}

class CImNtfRecommendTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_NTF_RECOMMEND_TRIBE
    };
    CImNtfRecommendTribe()
    {
    }

    ~CImNtfRecommendTribe() { }
    CImNtfRecommendTribe(const string&  strTribeId, const string&  strMemberId, const VECTOR< string >&  vecUserList, const string&  strMessage)
    {
        m_tribeId = strTribeId;
        m_memberId = strMemberId;
        m_userList = vecUserList;
        m_message = strMessage;
    }
    CImNtfRecommendTribe&  operator=( const CImNtfRecommendTribe&  cImNtfRecommendTribe )
    {
        m_tribeId = cImNtfRecommendTribe.m_tribeId;
        m_memberId = cImNtfRecommendTribe.m_memberId;
        m_userList = cImNtfRecommendTribe.m_userList;
        m_message = cImNtfRecommendTribe.m_message;
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
    const string&  GetMemberId () const { return m_memberId; }
    bool SetMemberId ( const string&  strMemberId )
    {
        if(strMemberId.size() > 64)
            return false;
        m_memberId = strMemberId;
        return true;
    }
    const VECTOR< string >&  GetUserList () const { return m_userList; }
    bool SetUserList ( const VECTOR< string >&  vecUserList )
    {
        m_userList = vecUserList;
        return true;
    }
    const string&  GetMessage () const { return m_message; }
    bool SetMessage ( const string&  strMessage )
    {
        m_message = strMessage;
        return true;
    }
private:
    string m_tribeId;
    string m_memberId;
    VECTOR< string > m_userList;
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

inline uint32_t CImNtfRecommendTribe::Size() const
{
    uint32_t nSize = 22;
    nSize += m_tribeId.length();
    nSize += m_memberId.length();
    nSize += m_userList.size() * 4;
    for(uint32_t i = 0; i < m_userList.size(); i++)
    {
        nSize += m_userList[i].length();
    }
    nSize += m_message.length();
    return nSize;
}

class CImReqAuthRecommend : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_AUTH_RECOMMEND
    };
    CImReqAuthRecommend()
    {
    }

    ~CImReqAuthRecommend() { }
    CImReqAuthRecommend(const string&  strTribeId, const string&  strMemberId, const VECTOR< string >&  vecUserList, const int64_t&  llGroupId)
    {
        m_tribeId = strTribeId;
        m_memberId = strMemberId;
        m_userList = vecUserList;
        m_groupId = llGroupId;
    }
    CImReqAuthRecommend&  operator=( const CImReqAuthRecommend&  cImReqAuthRecommend )
    {
        m_tribeId = cImReqAuthRecommend.m_tribeId;
        m_memberId = cImReqAuthRecommend.m_memberId;
        m_userList = cImReqAuthRecommend.m_userList;
        m_groupId = cImReqAuthRecommend.m_groupId;
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
    const string&  GetMemberId () const { return m_memberId; }
    bool SetMemberId ( const string&  strMemberId )
    {
        if(strMemberId.size() > 64)
            return false;
        m_memberId = strMemberId;
        return true;
    }
    const VECTOR< string >&  GetUserList () const { return m_userList; }
    bool SetUserList ( const VECTOR< string >&  vecUserList )
    {
        m_userList = vecUserList;
        return true;
    }
    const int64_t&  GetGroupId () const { return m_groupId; }
    bool SetGroupId ( const int64_t&  llGroupId )
    {
        m_groupId = llGroupId;
        return true;
    }
private:
    string m_tribeId;
    string m_memberId;
    VECTOR< string > m_userList;
    int64_t m_groupId;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqAuthRecommend::Size() const
{
    uint32_t nSize = 26;
    nSize += m_tribeId.length();
    nSize += m_memberId.length();
    nSize += m_userList.size() * 4;
    for(uint32_t i = 0; i < m_userList.size(); i++)
    {
        nSize += m_userList[i].length();
    }
    return nSize;
}

class CImRspAuthRecommend : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_AUTH_RECOMMEND
    };
    CImRspAuthRecommend()
    {
    }

    ~CImRspAuthRecommend() { }
    CImRspAuthRecommend(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strMemberId, const VECTOR< string >&  vecUserList, const int64_t&  llGroupId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_memberId = strMemberId;
        m_userList = vecUserList;
        m_groupId = llGroupId;
    }
    CImRspAuthRecommend&  operator=( const CImRspAuthRecommend&  cImRspAuthRecommend )
    {
        m_retcode = cImRspAuthRecommend.m_retcode;
        m_tribeId = cImRspAuthRecommend.m_tribeId;
        m_memberId = cImRspAuthRecommend.m_memberId;
        m_userList = cImRspAuthRecommend.m_userList;
        m_groupId = cImRspAuthRecommend.m_groupId;
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
    const string&  GetMemberId () const { return m_memberId; }
    bool SetMemberId ( const string&  strMemberId )
    {
        if(strMemberId.size() > 64)
            return false;
        m_memberId = strMemberId;
        return true;
    }
    const VECTOR< string >&  GetUserList () const { return m_userList; }
    bool SetUserList ( const VECTOR< string >&  vecUserList )
    {
        m_userList = vecUserList;
        return true;
    }
    const int64_t&  GetGroupId () const { return m_groupId; }
    bool SetGroupId ( const int64_t&  llGroupId )
    {
        m_groupId = llGroupId;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    string m_memberId;
    VECTOR< string > m_userList;
    int64_t m_groupId;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspAuthRecommend::Size() const
{
    uint32_t nSize = 28;
    nSize += m_tribeId.length();
    nSize += m_memberId.length();
    nSize += m_userList.size() * 4;
    for(uint32_t i = 0; i < m_userList.size(); i++)
    {
        nSize += m_userList[i].length();
    }
    return nSize;
}

class CImReqWebLogintribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_WEB_LOGINTRIBE
    };
    ~CImReqWebLogintribe() { }
public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqWebLogintribe::Size() const
{
    return 1;
}
class CImRspWebLogintribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_WEB_LOGINTRIBE
    };
    CImRspWebLogintribe()
    {
    }

    ~CImRspWebLogintribe() { }
    CImRspWebLogintribe(const uint8_t&  chRetcode, const VECTOR< SWebGroup >&  vecGroupList, const VECTOR< STribeId >&  vecTribeIdList)
    {
        m_retcode = chRetcode;
        m_groupList = vecGroupList;
        m_tribeIdList = vecTribeIdList;
    }
    CImRspWebLogintribe&  operator=( const CImRspWebLogintribe&  cImRspWebLogintribe )
    {
        m_retcode = cImRspWebLogintribe.m_retcode;
        m_groupList = cImRspWebLogintribe.m_groupList;
        m_tribeIdList = cImRspWebLogintribe.m_tribeIdList;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const VECTOR< SWebGroup >&  GetGroupList () const { return m_groupList; }
    bool SetGroupList ( const VECTOR< SWebGroup >&  vecGroupList )
    {
        m_groupList = vecGroupList;
        return true;
    }
    const VECTOR< STribeId >&  GetTribeIdList () const { return m_tribeIdList; }
    bool SetTribeIdList ( const VECTOR< STribeId >&  vecTribeIdList )
    {
        m_tribeIdList = vecTribeIdList;
        return true;
    }
private:
    uint8_t m_retcode;
    VECTOR< SWebGroup > m_groupList;
    VECTOR< STribeId > m_tribeIdList;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspWebLogintribe::Size() const
{
    uint32_t nSize = 15;
    for(uint32_t i = 0; i < m_groupList.size(); i++)
    {
        nSize += m_groupList[i].Size();
    }
    for(uint32_t i = 0; i < m_tribeIdList.size(); i++)
    {
        nSize += m_tribeIdList[i].Size();
    }
    return nSize;
}

class CImReqSetTribeMsgPopup : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_SET_TRIBE_MSG_POPUP
    };
    CImReqSetTribeMsgPopup()
    {
    }

    ~CImReqSetTribeMsgPopup() { }
    CImReqSetTribeMsgPopup(const string&  strTribeId, const uint8_t&  chMsgPopup)
    {
        m_tribeId = strTribeId;
        m_msgPopup = chMsgPopup;
    }
    CImReqSetTribeMsgPopup&  operator=( const CImReqSetTribeMsgPopup&  cImReqSetTribeMsgPopup )
    {
        m_tribeId = cImReqSetTribeMsgPopup.m_tribeId;
        m_msgPopup = cImReqSetTribeMsgPopup.m_msgPopup;
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
    const uint8_t&  GetMsgPopup () const { return m_msgPopup; }
    bool SetMsgPopup ( const uint8_t&  chMsgPopup )
    {
        m_msgPopup = chMsgPopup;
        return true;
    }
private:
    string m_tribeId;
    uint8_t m_msgPopup;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqSetTribeMsgPopup::Size() const
{
    uint32_t nSize = 8;
    nSize += m_tribeId.length();
    return nSize;
}

class CImRspSetTribeMsgPopup : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_SET_TRIBE_MSG_POPUP
    };
    CImRspSetTribeMsgPopup()
    {
    }

    ~CImRspSetTribeMsgPopup() { }
    CImRspSetTribeMsgPopup(const uint8_t&  chRetcode, const string&  strTribeId, const uint8_t&  chMsgPopup)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_msgPopup = chMsgPopup;
    }
    CImRspSetTribeMsgPopup&  operator=( const CImRspSetTribeMsgPopup&  cImRspSetTribeMsgPopup )
    {
        m_retcode = cImRspSetTribeMsgPopup.m_retcode;
        m_tribeId = cImRspSetTribeMsgPopup.m_tribeId;
        m_msgPopup = cImRspSetTribeMsgPopup.m_msgPopup;
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
    const uint8_t&  GetMsgPopup () const { return m_msgPopup; }
    bool SetMsgPopup ( const uint8_t&  chMsgPopup )
    {
        m_msgPopup = chMsgPopup;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    uint8_t m_msgPopup;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspSetTribeMsgPopup::Size() const
{
    uint32_t nSize = 10;
    nSize += m_tribeId.length();
    return nSize;
}

class CImReqTransferTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_REQ_TRANSFER_TRIBE
    };
    CImReqTransferTribe()
    {
    }

    ~CImReqTransferTribe() { }
    CImReqTransferTribe(const string&  strTribeId, const string&  strTransferId)
    {
        m_tribeId = strTribeId;
        m_transferId = strTransferId;
    }
    CImReqTransferTribe&  operator=( const CImReqTransferTribe&  cImReqTransferTribe )
    {
        m_tribeId = cImReqTransferTribe.m_tribeId;
        m_transferId = cImReqTransferTribe.m_transferId;
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
    const string&  GetTransferId () const { return m_transferId; }
    bool SetTransferId ( const string&  strTransferId )
    {
        if(strTransferId.size() > 64)
            return false;
        m_transferId = strTransferId;
        return true;
    }
private:
    string m_tribeId;
    string m_transferId;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImReqTransferTribe::Size() const
{
    uint32_t nSize = 11;
    nSize += m_tribeId.length();
    nSize += m_transferId.length();
    return nSize;
}

class CImRspTransferTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_RSP_TRANSFER_TRIBE
    };
    CImRspTransferTribe()
    {
    }

    ~CImRspTransferTribe() { }
    CImRspTransferTribe(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strAltTribeId, const string&  strRctOwnerId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_altTribeId = strAltTribeId;
        m_rctOwnerId = strRctOwnerId;
    }
    CImRspTransferTribe&  operator=( const CImRspTransferTribe&  cImRspTransferTribe )
    {
        m_retcode = cImRspTransferTribe.m_retcode;
        m_tribeId = cImRspTransferTribe.m_tribeId;
        m_altTribeId = cImRspTransferTribe.m_altTribeId;
        m_rctOwnerId = cImRspTransferTribe.m_rctOwnerId;
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
    const string&  GetAltTribeId () const { return m_altTribeId; }
    bool SetAltTribeId ( const string&  strAltTribeId )
    {
        if(strAltTribeId.size() > 20)
            return false;
        m_altTribeId = strAltTribeId;
        return true;
    }
    const string&  GetRctOwnerId () const { return m_rctOwnerId; }
    bool SetRctOwnerId ( const string&  strRctOwnerId )
    {
        if(strRctOwnerId.size() > 64)
            return false;
        m_rctOwnerId = strRctOwnerId;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    string m_altTribeId;
    string m_rctOwnerId;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImRspTransferTribe::Size() const
{
    uint32_t nSize = 18;
    nSize += m_tribeId.length();
    nSize += m_altTribeId.length();
    nSize += m_rctOwnerId.length();
    return nSize;
}

class CImNtfTransferTribeSys : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_NTF_TRANSFER_TRIBE_SYS
    };
    CImNtfTransferTribeSys()
    {
    }

    ~CImNtfTransferTribeSys() { }
    CImNtfTransferTribeSys(const string&  strOwner, const string&  strTribeId, const string&  strTribeInfo)
    {
        m_owner = strOwner;
        m_tribeId = strTribeId;
        m_tribeInfo = strTribeInfo;
    }
    CImNtfTransferTribeSys&  operator=( const CImNtfTransferTribeSys&  cImNtfTransferTribeSys )
    {
        m_owner = cImNtfTransferTribeSys.m_owner;
        m_tribeId = cImNtfTransferTribeSys.m_tribeId;
        m_tribeInfo = cImNtfTransferTribeSys.m_tribeInfo;
        return *this;
    }

    const string&  GetOwner () const { return m_owner; }
    bool SetOwner ( const string&  strOwner )
    {
        if(strOwner.size() > 64)
            return false;
        m_owner = strOwner;
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
    const string&  GetTribeInfo () const { return m_tribeInfo; }
    bool SetTribeInfo ( const string&  strTribeInfo )
    {
        m_tribeInfo = strTribeInfo;
        return true;
    }
private:
    string m_owner;
    string m_tribeId;
    string m_tribeInfo;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImNtfTransferTribeSys::Size() const
{
    uint32_t nSize = 16;
    nSize += m_owner.length();
    nSize += m_tribeId.length();
    nSize += m_tribeInfo.length();
    return nSize;
}

class CImNtfTransferTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = IM_NTF_TRANSFER_TRIBE
    };
    CImNtfTransferTribe()
    {
    }

    ~CImNtfTransferTribe() { }
    CImNtfTransferTribe(const string&  strTribeId, const string&  strOccupiedTribeId, const string&  strTribeInfo)
    {
        m_tribeId = strTribeId;
        m_occupiedTribeId = strOccupiedTribeId;
        m_tribeInfo = strTribeInfo;
    }
    CImNtfTransferTribe&  operator=( const CImNtfTransferTribe&  cImNtfTransferTribe )
    {
        m_tribeId = cImNtfTransferTribe.m_tribeId;
        m_occupiedTribeId = cImNtfTransferTribe.m_occupiedTribeId;
        m_tribeInfo = cImNtfTransferTribe.m_tribeInfo;
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
    const string&  GetOccupiedTribeId () const { return m_occupiedTribeId; }
    bool SetOccupiedTribeId ( const string&  strOccupiedTribeId )
    {
        if(strOccupiedTribeId.size() > 20)
            return false;
        m_occupiedTribeId = strOccupiedTribeId;
        return true;
    }
    const string&  GetTribeInfo () const { return m_tribeInfo; }
    bool SetTribeInfo ( const string&  strTribeInfo )
    {
        m_tribeInfo = strTribeInfo;
        return true;
    }
private:
    string m_tribeId;
    string m_occupiedTribeId;
    string m_tribeInfo;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CImNtfTransferTribe::Size() const
{
    uint32_t nSize = 16;
    nSize += m_tribeId.length();
    nSize += m_occupiedTribeId.length();
    nSize += m_tribeInfo.length();
    return nSize;
}

#endif
