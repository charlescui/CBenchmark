/*---------------------------------------------------------------------------
// Filename:        tbss_pack.h
// Date:            2011-01-30 12:49:26
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __TBSS_PACK_H__
#define __TBSS_PACK_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"
#include "ss_head.h"
#include "const_macro.h"
#include "tbss_cmd.h"
#include "tbsstrc_pack.h"
#include "tgsstrc_pack.h"

using namespace std;

class CTbsReqGetTribegroup : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_GET_TRIBEGROUP
    };
    ~CTbsReqGetTribegroup() { }
public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqGetTribegroup::Size() const
{
    return 1;
}
class CTbsRspGetTribegroup : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_GET_TRIBEGROUP
    };
    CTbsRspGetTribegroup()
    {
    }

    ~CTbsRspGetTribegroup() { }
    CTbsRspGetTribegroup(const uint8_t&  chRetcode, const VECTOR< SMemberGroup >&  vecMemberGroupList)
    {
        m_retcode = chRetcode;
        m_memberGroupList = vecMemberGroupList;
    }
    CTbsRspGetTribegroup&  operator=( const CTbsRspGetTribegroup&  cTbsRspGetTribegroup )
    {
        m_retcode = cTbsRspGetTribegroup.m_retcode;
        m_memberGroupList = cTbsRspGetTribegroup.m_memberGroupList;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspGetTribegroup::Size() const
{
    uint32_t nSize = 9;
    for(uint32_t i = 0; i < m_memberGroupList.size(); i++)
    {
        nSize += m_memberGroupList[i].Size();
    }
    return nSize;
}

class CTbsReqAddTribegroup : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_ADD_TRIBEGROUP
    };
    CTbsReqAddTribegroup()
    {
    }

    ~CTbsReqAddTribegroup() { }
    CTbsReqAddTribegroup(const string&  strTribeId, const string&  strGroupName, const int64_t&  llParentId)
    {
        m_tribeId = strTribeId;
        m_groupName = strGroupName;
        m_parentId = llParentId;
    }
    CTbsReqAddTribegroup&  operator=( const CTbsReqAddTribegroup&  cTbsReqAddTribegroup )
    {
        m_tribeId = cTbsReqAddTribegroup.m_tribeId;
        m_groupName = cTbsReqAddTribegroup.m_groupName;
        m_parentId = cTbsReqAddTribegroup.m_parentId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqAddTribegroup::Size() const
{
    uint32_t nSize = 20;
    nSize += m_tribeId.length();
    nSize += m_groupName.length();
    return nSize;
}

class CTbsRspAddTribegroup : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_ADD_TRIBEGROUP
    };
    CTbsRspAddTribegroup()
    {
    }

    ~CTbsRspAddTribegroup() { }
    CTbsRspAddTribegroup(const uint8_t&  chRetcode, const string&  strTribeId, const SGroupInfo&  sMemberGroup, const uint32_t&  dwGroupStamp)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_memberGroup = sMemberGroup;
        m_groupStamp = dwGroupStamp;
    }
    CTbsRspAddTribegroup&  operator=( const CTbsRspAddTribegroup&  cTbsRspAddTribegroup )
    {
        m_retcode = cTbsRspAddTribegroup.m_retcode;
        m_tribeId = cTbsRspAddTribegroup.m_tribeId;
        m_memberGroup = cTbsRspAddTribegroup.m_memberGroup;
        m_groupStamp = cTbsRspAddTribegroup.m_groupStamp;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspAddTribegroup::Size() const
{
    uint32_t nSize = 14;
    nSize += m_tribeId.length();
    nSize += m_memberGroup.Size();
    return nSize;
}

class CTbsReqUpdateTribegroup : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_UPDATE_TRIBEGROUP
    };
    CTbsReqUpdateTribegroup()
    {
    }

    ~CTbsReqUpdateTribegroup() { }
    CTbsReqUpdateTribegroup(const string&  strTribeId, const int64_t&  llGroupId, const string&  strGroupName)
    {
        m_tribeId = strTribeId;
        m_groupId = llGroupId;
        m_groupName = strGroupName;
    }
    CTbsReqUpdateTribegroup&  operator=( const CTbsReqUpdateTribegroup&  cTbsReqUpdateTribegroup )
    {
        m_tribeId = cTbsReqUpdateTribegroup.m_tribeId;
        m_groupId = cTbsReqUpdateTribegroup.m_groupId;
        m_groupName = cTbsReqUpdateTribegroup.m_groupName;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqUpdateTribegroup::Size() const
{
    uint32_t nSize = 20;
    nSize += m_tribeId.length();
    nSize += m_groupName.length();
    return nSize;
}

class CTbsRspUpdateTribegroup : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_UPDATE_TRIBEGROUP
    };
    CTbsRspUpdateTribegroup()
    {
    }

    ~CTbsRspUpdateTribegroup() { }
    CTbsRspUpdateTribegroup(const uint8_t&  chRetcode, const string&  strTribeId, const SGroupInfo&  sMemberGroup, const uint32_t&  dwGroupStamp)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_memberGroup = sMemberGroup;
        m_groupStamp = dwGroupStamp;
    }
    CTbsRspUpdateTribegroup&  operator=( const CTbsRspUpdateTribegroup&  cTbsRspUpdateTribegroup )
    {
        m_retcode = cTbsRspUpdateTribegroup.m_retcode;
        m_tribeId = cTbsRspUpdateTribegroup.m_tribeId;
        m_memberGroup = cTbsRspUpdateTribegroup.m_memberGroup;
        m_groupStamp = cTbsRspUpdateTribegroup.m_groupStamp;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspUpdateTribegroup::Size() const
{
    uint32_t nSize = 14;
    nSize += m_tribeId.length();
    nSize += m_memberGroup.Size();
    return nSize;
}

class CTbsReqDelTribegroup : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_DEL_TRIBEGROUP
    };
    CTbsReqDelTribegroup()
    {
    }

    ~CTbsReqDelTribegroup() { }
    CTbsReqDelTribegroup(const string&  strTribeId, const int64_t&  llGroupId)
    {
        m_tribeId = strTribeId;
        m_groupId = llGroupId;
    }
    CTbsReqDelTribegroup&  operator=( const CTbsReqDelTribegroup&  cTbsReqDelTribegroup )
    {
        m_tribeId = cTbsReqDelTribegroup.m_tribeId;
        m_groupId = cTbsReqDelTribegroup.m_groupId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqDelTribegroup::Size() const
{
    uint32_t nSize = 15;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbsRspDelTribegroup : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_DEL_TRIBEGROUP
    };
    CTbsRspDelTribegroup()
    {
    }

    ~CTbsRspDelTribegroup() { }
    CTbsRspDelTribegroup(const uint8_t&  chRetcode, const string&  strTribeId, const int64_t&  llGroupId, const uint32_t&  dwGroupStamp)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_groupId = llGroupId;
        m_groupStamp = dwGroupStamp;
    }
    CTbsRspDelTribegroup&  operator=( const CTbsRspDelTribegroup&  cTbsRspDelTribegroup )
    {
        m_retcode = cTbsRspDelTribegroup.m_retcode;
        m_tribeId = cTbsRspDelTribegroup.m_tribeId;
        m_groupId = cTbsRspDelTribegroup.m_groupId;
        m_groupStamp = cTbsRspDelTribegroup.m_groupStamp;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspDelTribegroup::Size() const
{
    uint32_t nSize = 22;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbsReqShallowLogintribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_SHALLOW_LOGINTRIBE
    };
    CTbsReqShallowLogintribe() : m_language(0x804)
    {
    }

    ~CTbsReqShallowLogintribe() { }
    CTbsReqShallowLogintribe(const uint8_t&  chBasicSts, const uint8_t&  chPredefSts, const string&  strVersion, const uint32_t&  dwLanguage= 0x804)
    {
        m_basicSts = chBasicSts;
        m_predefSts = chPredefSts;
        m_version = strVersion;
        m_language = dwLanguage;
    }
    CTbsReqShallowLogintribe&  operator=( const CTbsReqShallowLogintribe&  cTbsReqShallowLogintribe )
    {
        m_basicSts = cTbsReqShallowLogintribe.m_basicSts;
        m_predefSts = cTbsReqShallowLogintribe.m_predefSts;
        m_version = cTbsReqShallowLogintribe.m_version;
        m_language = cTbsReqShallowLogintribe.m_language;
        return *this;
    }

    const uint8_t&  GetBasicSts () const { return m_basicSts; }
    bool SetBasicSts ( const uint8_t&  chBasicSts )
    {
        m_basicSts = chBasicSts;
        return true;
    }
    const uint8_t&  GetPredefSts () const { return m_predefSts; }
    bool SetPredefSts ( const uint8_t&  chPredefSts )
    {
        m_predefSts = chPredefSts;
        return true;
    }
    const string&  GetVersion () const { return m_version; }
    bool SetVersion ( const string&  strVersion )
    {
        m_version = strVersion;
        return true;
    }
    const uint32_t&  GetLanguage () const { return m_language; }
    bool SetLanguage ( const uint32_t&  dwLanguage )
    {
        m_language = dwLanguage;
        return true;
    }
private:
    uint8_t m_basicSts;
    uint8_t m_predefSts;
    string m_version;
    uint32_t m_language;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqShallowLogintribe::Size() const
{
    uint32_t nSize = 15;
    nSize += m_version.length();
    return nSize;
}

class CTbsReqDeepLogintribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_DEEP_LOGINTRIBE
    };
    ~CTbsReqDeepLogintribe() { }
    CTbsReqDeepLogintribe(const uint32_t&  dwLanguage= 0x804)
    {
        m_language = dwLanguage;
    }
    CTbsReqDeepLogintribe&  operator=( const CTbsReqDeepLogintribe&  cTbsReqDeepLogintribe )
    {
        m_language = cTbsReqDeepLogintribe.m_language;
        return *this;
    }

    const uint32_t&  GetLanguage () const { return m_language; }
    bool SetLanguage ( const uint32_t&  dwLanguage )
    {
        m_language = dwLanguage;
        return true;
    }
private:
    uint32_t m_language;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqDeepLogintribe::Size() const
{
    return 6;
}
class CTbsRspDeepLogintribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_DEEP_LOGINTRIBE
    };
    CTbsRspDeepLogintribe()
    {
    }

    ~CTbsRspDeepLogintribe() { }
    CTbsRspDeepLogintribe(const uint8_t&  chRetcode, const string&  strTribeId, const STribeInfo&  sTribeInfo, const VECTOR< STmStatus >&  vecTmStatusList, const uint32_t&  dwMemberStamp, const STribeExtInfo&  sExtInfo)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_tribeInfo = sTribeInfo;
        m_tmStatusList = vecTmStatusList;
        m_memberStamp = dwMemberStamp;
        m_extInfo = sExtInfo;
    }
    CTbsRspDeepLogintribe&  operator=( const CTbsRspDeepLogintribe&  cTbsRspDeepLogintribe )
    {
        m_retcode = cTbsRspDeepLogintribe.m_retcode;
        m_tribeId = cTbsRspDeepLogintribe.m_tribeId;
        m_tribeInfo = cTbsRspDeepLogintribe.m_tribeInfo;
        m_tmStatusList = cTbsRspDeepLogintribe.m_tmStatusList;
        m_memberStamp = cTbsRspDeepLogintribe.m_memberStamp;
        m_extInfo = cTbsRspDeepLogintribe.m_extInfo;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspDeepLogintribe::Size() const
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

class CTbsReqInviteTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_INVITE_TRIBE
    };
    CTbsReqInviteTribe() : m_groupId(0)
    {
    }

    ~CTbsReqInviteTribe() { }
    CTbsReqInviteTribe(const string&  strTribeId, const string&  strUserId, const string&  strMessage, const int64_t&  llGroupId= 0)
    {
        m_tribeId = strTribeId;
        m_userId = strUserId;
        m_message = strMessage;
        m_groupId = llGroupId;
    }
    CTbsReqInviteTribe&  operator=( const CTbsReqInviteTribe&  cTbsReqInviteTribe )
    {
        m_tribeId = cTbsReqInviteTribe.m_tribeId;
        m_userId = cTbsReqInviteTribe.m_userId;
        m_message = cTbsReqInviteTribe.m_message;
        m_groupId = cTbsReqInviteTribe.m_groupId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqInviteTribe::Size() const
{
    uint32_t nSize = 25;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    nSize += m_message.length();
    return nSize;
}

class CTbsRspInviteTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_INVITE_TRIBE
    };
    CTbsRspInviteTribe() : m_groupId(0)
    {
    }

    ~CTbsRspInviteTribe() { }
    CTbsRspInviteTribe(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strUserId, const int64_t&  llGroupId= 0)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_userId = strUserId;
        m_groupId = llGroupId;
    }
    CTbsRspInviteTribe&  operator=( const CTbsRspInviteTribe&  cTbsRspInviteTribe )
    {
        m_retcode = cTbsRspInviteTribe.m_retcode;
        m_tribeId = cTbsRspInviteTribe.m_tribeId;
        m_userId = cTbsRspInviteTribe.m_userId;
        m_groupId = cTbsRspInviteTribe.m_groupId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspInviteTribe::Size() const
{
    uint32_t nSize = 22;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    return nSize;
}

class CTbsNtfInviteTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_NTF_INVITE_TRIBE
    };
    CTbsNtfInviteTribe() : m_groupId(0)
    {
    }

    ~CTbsNtfInviteTribe() { }
    CTbsNtfInviteTribe(const string&  strTribeId, const string&  strManagerId, const string&  strValidateCode, const string&  strName, const string&  strMessage, const int64_t&  llGroupId= 0)
    {
        m_tribeId = strTribeId;
        m_managerId = strManagerId;
        m_validateCode = strValidateCode;
        m_name = strName;
        m_message = strMessage;
        m_groupId = llGroupId;
    }
    CTbsNtfInviteTribe&  operator=( const CTbsNtfInviteTribe&  cTbsNtfInviteTribe )
    {
        m_tribeId = cTbsNtfInviteTribe.m_tribeId;
        m_managerId = cTbsNtfInviteTribe.m_managerId;
        m_validateCode = cTbsNtfInviteTribe.m_validateCode;
        m_name = cTbsNtfInviteTribe.m_name;
        m_message = cTbsNtfInviteTribe.m_message;
        m_groupId = cTbsNtfInviteTribe.m_groupId;
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
private:
    string m_tribeId;
    string m_managerId;
    string m_validateCode;
    string m_name;
    string m_message;
    int64_t m_groupId;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsNtfInviteTribe::Size() const
{
    uint32_t nSize = 35;
    nSize += m_tribeId.length();
    nSize += m_managerId.length();
    nSize += m_validateCode.length();
    nSize += m_name.length();
    nSize += m_message.length();
    return nSize;
}

class CTbsReqOninviteJointribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_ONINVITE_JOINTRIBE
    };
    CTbsReqOninviteJointribe() : m_groupId(0),
            m_type(0),
            m_recommendId("")
    {
    }

    ~CTbsReqOninviteJointribe() { }
    CTbsReqOninviteJointribe(const string&  strTribeId, const string&  strManagerId, const string&  strValidateCode, const int64_t&  llGroupId= 0, const uint8_t&  chType= 0, const string&  strRecommendId= "")
    {
        m_tribeId = strTribeId;
        m_managerId = strManagerId;
        m_validateCode = strValidateCode;
        m_groupId = llGroupId;
        m_type = chType;
        m_recommendId = strRecommendId;
    }
    CTbsReqOninviteJointribe&  operator=( const CTbsReqOninviteJointribe&  cTbsReqOninviteJointribe )
    {
        m_tribeId = cTbsReqOninviteJointribe.m_tribeId;
        m_managerId = cTbsReqOninviteJointribe.m_managerId;
        m_validateCode = cTbsReqOninviteJointribe.m_validateCode;
        m_groupId = cTbsReqOninviteJointribe.m_groupId;
        m_type = cTbsReqOninviteJointribe.m_type;
        m_recommendId = cTbsReqOninviteJointribe.m_recommendId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqOninviteJointribe::Size() const
{
    uint32_t nSize = 32;
    nSize += m_tribeId.length();
    nSize += m_managerId.length();
    nSize += m_validateCode.length();
    nSize += m_recommendId.length();
    return nSize;
}

class CTbsRspOninviteJointribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_ONINVITE_JOINTRIBE
    };
    CTbsRspOninviteJointribe() : m_groupId(0)
    {
    }

    ~CTbsRspOninviteJointribe() { }
    CTbsRspOninviteJointribe(const uint8_t&  chRetcode, const string&  strTribeId, const int64_t&  llGroupId= 0)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_groupId = llGroupId;
    }
    CTbsRspOninviteJointribe&  operator=( const CTbsRspOninviteJointribe&  cTbsRspOninviteJointribe )
    {
        m_retcode = cTbsRspOninviteJointribe.m_retcode;
        m_tribeId = cTbsRspOninviteJointribe.m_tribeId;
        m_groupId = cTbsRspOninviteJointribe.m_groupId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspOninviteJointribe::Size() const
{
    uint32_t nSize = 17;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbsReqAskJointribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_ASK_JOINTRIBE
    };
    CTbsReqAskJointribe()
    {
    }

    ~CTbsReqAskJointribe() { }
    CTbsReqAskJointribe(const string&  strTribeId, const uint8_t&  chType, const string&  strInfo)
    {
        m_tribeId = strTribeId;
        m_type = chType;
        m_info = strInfo;
    }
    CTbsReqAskJointribe&  operator=( const CTbsReqAskJointribe&  cTbsReqAskJointribe )
    {
        m_tribeId = cTbsReqAskJointribe.m_tribeId;
        m_type = cTbsReqAskJointribe.m_type;
        m_info = cTbsReqAskJointribe.m_info;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqAskJointribe::Size() const
{
    uint32_t nSize = 13;
    nSize += m_tribeId.length();
    nSize += m_info.length();
    return nSize;
}

class CTbsRspAskJointribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_ASK_JOINTRIBE
    };
    CTbsRspAskJointribe() : m_groupId(0)
    {
    }

    ~CTbsRspAskJointribe() { }
    CTbsRspAskJointribe(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strTribeName, const string&  strExtSign, const int64_t&  llGroupId= 0)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_tribeName = strTribeName;
        m_extSign = strExtSign;
        m_groupId = llGroupId;
    }
    CTbsRspAskJointribe&  operator=( const CTbsRspAskJointribe&  cTbsRspAskJointribe )
    {
        m_retcode = cTbsRspAskJointribe.m_retcode;
        m_tribeId = cTbsRspAskJointribe.m_tribeId;
        m_tribeName = cTbsRspAskJointribe.m_tribeName;
        m_extSign = cTbsRspAskJointribe.m_extSign;
        m_groupId = cTbsRspAskJointribe.m_groupId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspAskJointribe::Size() const
{
    uint32_t nSize = 27;
    nSize += m_tribeId.length();
    nSize += m_tribeName.length();
    nSize += m_extSign.length();
    return nSize;
}

class CTbsNtfAskJointribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_NTF_ASK_JOINTRIBE
    };
    CTbsNtfAskJointribe()
    {
    }

    ~CTbsNtfAskJointribe() { }
    CTbsNtfAskJointribe(const string&  strTribeId, const string&  strUserId, const uint8_t&  chType, const string&  strInfo)
    {
        m_tribeId = strTribeId;
        m_userId = strUserId;
        m_type = chType;
        m_info = strInfo;
    }
    CTbsNtfAskJointribe&  operator=( const CTbsNtfAskJointribe&  cTbsNtfAskJointribe )
    {
        m_tribeId = cTbsNtfAskJointribe.m_tribeId;
        m_userId = cTbsNtfAskJointribe.m_userId;
        m_type = cTbsNtfAskJointribe.m_type;
        m_info = cTbsNtfAskJointribe.m_info;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsNtfAskJointribe::Size() const
{
    uint32_t nSize = 18;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    nSize += m_info.length();
    return nSize;
}

class CTbsReqExamAskjointribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_EXAM_ASKJOINTRIBE
    };
    CTbsReqExamAskjointribe() : m_groupId(0)
    {
    }

    ~CTbsReqExamAskjointribe() { }
    CTbsReqExamAskjointribe(const string&  strTribeId, const string&  strUserId, const uint8_t&  chType, const string&  strInfo, const int64_t&  llGroupId= 0)
    {
        m_tribeId = strTribeId;
        m_userId = strUserId;
        m_type = chType;
        m_info = strInfo;
        m_groupId = llGroupId;
    }
    CTbsReqExamAskjointribe&  operator=( const CTbsReqExamAskjointribe&  cTbsReqExamAskjointribe )
    {
        m_tribeId = cTbsReqExamAskjointribe.m_tribeId;
        m_userId = cTbsReqExamAskjointribe.m_userId;
        m_type = cTbsReqExamAskjointribe.m_type;
        m_info = cTbsReqExamAskjointribe.m_info;
        m_groupId = cTbsReqExamAskjointribe.m_groupId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqExamAskjointribe::Size() const
{
    uint32_t nSize = 27;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    nSize += m_info.length();
    return nSize;
}

class CTbsRspExamAskjointribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_EXAM_ASKJOINTRIBE
    };
    CTbsRspExamAskjointribe() : m_groupId(0)
    {
    }

    ~CTbsRspExamAskjointribe() { }
    CTbsRspExamAskjointribe(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strUserId, const uint8_t&  chType, const int64_t&  llGroupId= 0)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_userId = strUserId;
        m_type = chType;
        m_groupId = llGroupId;
    }
    CTbsRspExamAskjointribe&  operator=( const CTbsRspExamAskjointribe&  cTbsRspExamAskjointribe )
    {
        m_retcode = cTbsRspExamAskjointribe.m_retcode;
        m_tribeId = cTbsRspExamAskjointribe.m_tribeId;
        m_userId = cTbsRspExamAskjointribe.m_userId;
        m_type = cTbsRspExamAskjointribe.m_type;
        m_groupId = cTbsRspExamAskjointribe.m_groupId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspExamAskjointribe::Size() const
{
    uint32_t nSize = 24;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    return nSize;
}

class CTbsReqChglevelTribemember : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_CHGLEVEL_TRIBEMEMBER
    };
    CTbsReqChglevelTribemember()
    {
    }

    ~CTbsReqChglevelTribemember() { }
    CTbsReqChglevelTribemember(const string&  strTribeId, const string&  strMemberId, const uint8_t&  chLevel)
    {
        m_tribeId = strTribeId;
        m_memberId = strMemberId;
        m_level = chLevel;
    }
    CTbsReqChglevelTribemember&  operator=( const CTbsReqChglevelTribemember&  cTbsReqChglevelTribemember )
    {
        m_tribeId = cTbsReqChglevelTribemember.m_tribeId;
        m_memberId = cTbsReqChglevelTribemember.m_memberId;
        m_level = cTbsReqChglevelTribemember.m_level;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqChglevelTribemember::Size() const
{
    uint32_t nSize = 13;
    nSize += m_tribeId.length();
    nSize += m_memberId.length();
    return nSize;
}

class CTbsRspChglevelTribemember : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_CHGLEVEL_TRIBEMEMBER
    };
    CTbsRspChglevelTribemember()
    {
    }

    ~CTbsRspChglevelTribemember() { }
    CTbsRspChglevelTribemember(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strMemberId, const uint8_t&  chLevel)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_memberId = strMemberId;
        m_level = chLevel;
    }
    CTbsRspChglevelTribemember&  operator=( const CTbsRspChglevelTribemember&  cTbsRspChglevelTribemember )
    {
        m_retcode = cTbsRspChglevelTribemember.m_retcode;
        m_tribeId = cTbsRspChglevelTribemember.m_tribeId;
        m_memberId = cTbsRspChglevelTribemember.m_memberId;
        m_level = cTbsRspChglevelTribemember.m_level;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspChglevelTribemember::Size() const
{
    uint32_t nSize = 15;
    nSize += m_tribeId.length();
    nSize += m_memberId.length();
    return nSize;
}

class CTbsReqChgTribegroup : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_CHG_TRIBEGROUP
    };
    CTbsReqChgTribegroup()
    {
    }

    ~CTbsReqChgTribegroup() { }
    CTbsReqChgTribegroup(const string&  strTribeId, const string&  strMemberId, const int64_t&  llGroupId)
    {
        m_tribeId = strTribeId;
        m_memberId = strMemberId;
        m_groupId = llGroupId;
    }
    CTbsReqChgTribegroup&  operator=( const CTbsReqChgTribegroup&  cTbsReqChgTribegroup )
    {
        m_tribeId = cTbsReqChgTribegroup.m_tribeId;
        m_memberId = cTbsReqChgTribegroup.m_memberId;
        m_groupId = cTbsReqChgTribegroup.m_groupId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqChgTribegroup::Size() const
{
    uint32_t nSize = 20;
    nSize += m_tribeId.length();
    nSize += m_memberId.length();
    return nSize;
}

class CTbsRspChgTribegroup : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_CHG_TRIBEGROUP
    };
    CTbsRspChgTribegroup()
    {
    }

    ~CTbsRspChgTribegroup() { }
    CTbsRspChgTribegroup(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strMemberId, const int64_t&  llGroupId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_memberId = strMemberId;
        m_groupId = llGroupId;
    }
    CTbsRspChgTribegroup&  operator=( const CTbsRspChgTribegroup&  cTbsRspChgTribegroup )
    {
        m_retcode = cTbsRspChgTribegroup.m_retcode;
        m_tribeId = cTbsRspChgTribegroup.m_tribeId;
        m_memberId = cTbsRspChgTribegroup.m_memberId;
        m_groupId = cTbsRspChgTribegroup.m_groupId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspChgTribegroup::Size() const
{
    uint32_t nSize = 22;
    nSize += m_tribeId.length();
    nSize += m_memberId.length();
    return nSize;
}

class CTbsReqAddStarmember : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_ADD_STARMEMBER
    };
    CTbsReqAddStarmember()
    {
    }

    ~CTbsReqAddStarmember() { }
    CTbsReqAddStarmember(const string&  strTribeId, const string&  strMemberId)
    {
        m_tribeId = strTribeId;
        m_memberId = strMemberId;
    }
    CTbsReqAddStarmember&  operator=( const CTbsReqAddStarmember&  cTbsReqAddStarmember )
    {
        m_tribeId = cTbsReqAddStarmember.m_tribeId;
        m_memberId = cTbsReqAddStarmember.m_memberId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqAddStarmember::Size() const
{
    uint32_t nSize = 11;
    nSize += m_tribeId.length();
    nSize += m_memberId.length();
    return nSize;
}

class CTbsRspAddStarmember : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_ADD_STARMEMBER
    };
    CTbsRspAddStarmember()
    {
    }

    ~CTbsRspAddStarmember() { }
    CTbsRspAddStarmember(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strMemberId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_memberId = strMemberId;
    }
    CTbsRspAddStarmember&  operator=( const CTbsRspAddStarmember&  cTbsRspAddStarmember )
    {
        m_retcode = cTbsRspAddStarmember.m_retcode;
        m_tribeId = cTbsRspAddStarmember.m_tribeId;
        m_memberId = cTbsRspAddStarmember.m_memberId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspAddStarmember::Size() const
{
    uint32_t nSize = 13;
    nSize += m_tribeId.length();
    nSize += m_memberId.length();
    return nSize;
}

class CTbsReqDelStarmember : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_DEL_STARMEMBER
    };
    CTbsReqDelStarmember()
    {
    }

    ~CTbsReqDelStarmember() { }
    CTbsReqDelStarmember(const string&  strTribeId, const string&  strMemberId)
    {
        m_tribeId = strTribeId;
        m_memberId = strMemberId;
    }
    CTbsReqDelStarmember&  operator=( const CTbsReqDelStarmember&  cTbsReqDelStarmember )
    {
        m_tribeId = cTbsReqDelStarmember.m_tribeId;
        m_memberId = cTbsReqDelStarmember.m_memberId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqDelStarmember::Size() const
{
    uint32_t nSize = 11;
    nSize += m_tribeId.length();
    nSize += m_memberId.length();
    return nSize;
}

class CTbsRspDelStarmember : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_DEL_STARMEMBER
    };
    CTbsRspDelStarmember()
    {
    }

    ~CTbsRspDelStarmember() { }
    CTbsRspDelStarmember(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strMemberId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_memberId = strMemberId;
    }
    CTbsRspDelStarmember&  operator=( const CTbsRspDelStarmember&  cTbsRspDelStarmember )
    {
        m_retcode = cTbsRspDelStarmember.m_retcode;
        m_tribeId = cTbsRspDelStarmember.m_tribeId;
        m_memberId = cTbsRspDelStarmember.m_memberId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspDelStarmember::Size() const
{
    uint32_t nSize = 13;
    nSize += m_tribeId.length();
    nSize += m_memberId.length();
    return nSize;
}

class CTbsReqDelTribemember : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_DEL_TRIBEMEMBER
    };
    CTbsReqDelTribemember()
    {
    }

    ~CTbsReqDelTribemember() { }
    CTbsReqDelTribemember(const string&  strTribeId, const string&  strMemberId, const string&  strRemark)
    {
        m_tribeId = strTribeId;
        m_memberId = strMemberId;
        m_remark = strRemark;
    }
    CTbsReqDelTribemember&  operator=( const CTbsReqDelTribemember&  cTbsReqDelTribemember )
    {
        m_tribeId = cTbsReqDelTribemember.m_tribeId;
        m_memberId = cTbsReqDelTribemember.m_memberId;
        m_remark = cTbsReqDelTribemember.m_remark;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqDelTribemember::Size() const
{
    uint32_t nSize = 16;
    nSize += m_tribeId.length();
    nSize += m_memberId.length();
    nSize += m_remark.length();
    return nSize;
}

class CTbsRspDelTribemember : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_DEL_TRIBEMEMBER
    };
    CTbsRspDelTribemember()
    {
    }

    ~CTbsRspDelTribemember() { }
    CTbsRspDelTribemember(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strMemberId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_memberId = strMemberId;
    }
    CTbsRspDelTribemember&  operator=( const CTbsRspDelTribemember&  cTbsRspDelTribemember )
    {
        m_retcode = cTbsRspDelTribemember.m_retcode;
        m_tribeId = cTbsRspDelTribemember.m_tribeId;
        m_memberId = cTbsRspDelTribemember.m_memberId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspDelTribemember::Size() const
{
    uint32_t nSize = 13;
    nSize += m_tribeId.length();
    nSize += m_memberId.length();
    return nSize;
}

class CTbsReqGetTribeblack : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_GET_TRIBEBLACK
    };
    CTbsReqGetTribeblack()
    {
    }

    ~CTbsReqGetTribeblack() { }
    CTbsReqGetTribeblack(const string&  strTribeId, const uint32_t&  dwBlackStamp)
    {
        m_tribeId = strTribeId;
        m_blackStamp = dwBlackStamp;
    }
    CTbsReqGetTribeblack&  operator=( const CTbsReqGetTribeblack&  cTbsReqGetTribeblack )
    {
        m_tribeId = cTbsReqGetTribeblack.m_tribeId;
        m_blackStamp = cTbsReqGetTribeblack.m_blackStamp;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqGetTribeblack::Size() const
{
    uint32_t nSize = 11;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbsRspGetTribeblack : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_GET_TRIBEBLACK
    };
    CTbsRspGetTribeblack()
    {
    }

    ~CTbsRspGetTribeblack() { }
    CTbsRspGetTribeblack(const uint8_t&  chRetcode, const string&  strTribeId, const VECTOR< STribeBlack >&  vecBlackIdList, const uint32_t&  dwBlackStamp)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_blackIdList = vecBlackIdList;
        m_blackStamp = dwBlackStamp;
    }
    CTbsRspGetTribeblack&  operator=( const CTbsRspGetTribeblack&  cTbsRspGetTribeblack )
    {
        m_retcode = cTbsRspGetTribeblack.m_retcode;
        m_tribeId = cTbsRspGetTribeblack.m_tribeId;
        m_blackIdList = cTbsRspGetTribeblack.m_blackIdList;
        m_blackStamp = cTbsRspGetTribeblack.m_blackStamp;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspGetTribeblack::Size() const
{
    uint32_t nSize = 19;
    nSize += m_tribeId.length();
    for(uint32_t i = 0; i < m_blackIdList.size(); i++)
    {
        nSize += m_blackIdList[i].Size();
    }
    return nSize;
}

class CTbsReqAddTribeblack : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_ADD_TRIBEBLACK
    };
    CTbsReqAddTribeblack()
    {
    }

    ~CTbsReqAddTribeblack() { }
    CTbsReqAddTribeblack(const string&  strTribeId, const string&  strBlackUid, const string&  strRemark)
    {
        m_tribeId = strTribeId;
        m_blackUid = strBlackUid;
        m_remark = strRemark;
    }
    CTbsReqAddTribeblack&  operator=( const CTbsReqAddTribeblack&  cTbsReqAddTribeblack )
    {
        m_tribeId = cTbsReqAddTribeblack.m_tribeId;
        m_blackUid = cTbsReqAddTribeblack.m_blackUid;
        m_remark = cTbsReqAddTribeblack.m_remark;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqAddTribeblack::Size() const
{
    uint32_t nSize = 16;
    nSize += m_tribeId.length();
    nSize += m_blackUid.length();
    nSize += m_remark.length();
    return nSize;
}

class CTbsRspAddTribeblack : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_ADD_TRIBEBLACK
    };
    CTbsRspAddTribeblack()
    {
    }

    ~CTbsRspAddTribeblack() { }
    CTbsRspAddTribeblack(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strBlackUid, const uint32_t&  dwBlackStamp)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_blackUid = strBlackUid;
        m_blackStamp = dwBlackStamp;
    }
    CTbsRspAddTribeblack&  operator=( const CTbsRspAddTribeblack&  cTbsRspAddTribeblack )
    {
        m_retcode = cTbsRspAddTribeblack.m_retcode;
        m_tribeId = cTbsRspAddTribeblack.m_tribeId;
        m_blackUid = cTbsRspAddTribeblack.m_blackUid;
        m_blackStamp = cTbsRspAddTribeblack.m_blackStamp;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspAddTribeblack::Size() const
{
    uint32_t nSize = 18;
    nSize += m_tribeId.length();
    nSize += m_blackUid.length();
    return nSize;
}

class CTbsReqDelTribeblack : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_DEL_TRIBEBLACK
    };
    CTbsReqDelTribeblack()
    {
    }

    ~CTbsReqDelTribeblack() { }
    CTbsReqDelTribeblack(const string&  strTribeId, const string&  strBlackUid, const string&  strRemark)
    {
        m_tribeId = strTribeId;
        m_blackUid = strBlackUid;
        m_remark = strRemark;
    }
    CTbsReqDelTribeblack&  operator=( const CTbsReqDelTribeblack&  cTbsReqDelTribeblack )
    {
        m_tribeId = cTbsReqDelTribeblack.m_tribeId;
        m_blackUid = cTbsReqDelTribeblack.m_blackUid;
        m_remark = cTbsReqDelTribeblack.m_remark;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqDelTribeblack::Size() const
{
    uint32_t nSize = 16;
    nSize += m_tribeId.length();
    nSize += m_blackUid.length();
    nSize += m_remark.length();
    return nSize;
}

class CTbsRspDelTribeblack : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_DEL_TRIBEBLACK
    };
    CTbsRspDelTribeblack()
    {
    }

    ~CTbsRspDelTribeblack() { }
    CTbsRspDelTribeblack(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strBlackUid, const uint32_t&  dwBlackStamp)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_blackUid = strBlackUid;
        m_blackStamp = dwBlackStamp;
    }
    CTbsRspDelTribeblack&  operator=( const CTbsRspDelTribeblack&  cTbsRspDelTribeblack )
    {
        m_retcode = cTbsRspDelTribeblack.m_retcode;
        m_tribeId = cTbsRspDelTribeblack.m_tribeId;
        m_blackUid = cTbsRspDelTribeblack.m_blackUid;
        m_blackStamp = cTbsRspDelTribeblack.m_blackStamp;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspDelTribeblack::Size() const
{
    uint32_t nSize = 18;
    nSize += m_tribeId.length();
    nSize += m_blackUid.length();
    return nSize;
}

class CTbsReqQuitTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_QUIT_TRIBE
    };
    CTbsReqQuitTribe()
    {
    }

    ~CTbsReqQuitTribe() { }
    CTbsReqQuitTribe(const string&  strTribeId, const string&  strRemark)
    {
        m_tribeId = strTribeId;
        m_remark = strRemark;
    }
    CTbsReqQuitTribe&  operator=( const CTbsReqQuitTribe&  cTbsReqQuitTribe )
    {
        m_tribeId = cTbsReqQuitTribe.m_tribeId;
        m_remark = cTbsReqQuitTribe.m_remark;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqQuitTribe::Size() const
{
    uint32_t nSize = 11;
    nSize += m_tribeId.length();
    nSize += m_remark.length();
    return nSize;
}

class CTbsRspQuitTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_QUIT_TRIBE
    };
    CTbsRspQuitTribe()
    {
    }

    ~CTbsRspQuitTribe() { }
    CTbsRspQuitTribe(const uint8_t&  chRetcode, const string&  strTribeId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
    }
    CTbsRspQuitTribe&  operator=( const CTbsRspQuitTribe&  cTbsRspQuitTribe )
    {
        m_retcode = cTbsRspQuitTribe.m_retcode;
        m_tribeId = cTbsRspQuitTribe.m_tribeId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspQuitTribe::Size() const
{
    uint32_t nSize = 8;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbsReqCloseTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_CLOSE_TRIBE
    };
    CTbsReqCloseTribe()
    {
    }

    ~CTbsReqCloseTribe() { }
    CTbsReqCloseTribe(const string&  strTribeId, const string&  strRemark)
    {
        m_tribeId = strTribeId;
        m_remark = strRemark;
    }
    CTbsReqCloseTribe&  operator=( const CTbsReqCloseTribe&  cTbsReqCloseTribe )
    {
        m_tribeId = cTbsReqCloseTribe.m_tribeId;
        m_remark = cTbsReqCloseTribe.m_remark;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqCloseTribe::Size() const
{
    uint32_t nSize = 11;
    nSize += m_tribeId.length();
    nSize += m_remark.length();
    return nSize;
}

class CTbsRspCloseTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_CLOSE_TRIBE
    };
    CTbsRspCloseTribe()
    {
    }

    ~CTbsRspCloseTribe() { }
    CTbsRspCloseTribe(const uint8_t&  chRetcode, const string&  strTribeId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
    }
    CTbsRspCloseTribe&  operator=( const CTbsRspCloseTribe&  cTbsRspCloseTribe )
    {
        m_retcode = cTbsRspCloseTribe.m_retcode;
        m_tribeId = cTbsRspCloseTribe.m_tribeId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspCloseTribe::Size() const
{
    uint32_t nSize = 8;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbsReqGetTribeinfo : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_GET_TRIBEINFO
    };
    CTbsReqGetTribeinfo()
    {
    }

    ~CTbsReqGetTribeinfo() { }
    CTbsReqGetTribeinfo(const string&  strTribeId)
    {
        m_tribeId = strTribeId;
    }
    CTbsReqGetTribeinfo&  operator=( const CTbsReqGetTribeinfo&  cTbsReqGetTribeinfo )
    {
        m_tribeId = cTbsReqGetTribeinfo.m_tribeId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqGetTribeinfo::Size() const
{
    uint32_t nSize = 6;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbsRspGetTribeinfo : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_GET_TRIBEINFO
    };
    CTbsRspGetTribeinfo()
    {
    }

    ~CTbsRspGetTribeinfo() { }
    CTbsRspGetTribeinfo(const uint8_t&  chRetcode, const string&  strTribeId, const STribeInfo&  sTribeInfo, const STribeExtInfo&  sExtInfo)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_tribeInfo = sTribeInfo;
        m_extInfo = sExtInfo;
    }
    CTbsRspGetTribeinfo&  operator=( const CTbsRspGetTribeinfo&  cTbsRspGetTribeinfo )
    {
        m_retcode = cTbsRspGetTribeinfo.m_retcode;
        m_tribeId = cTbsRspGetTribeinfo.m_tribeId;
        m_tribeInfo = cTbsRspGetTribeinfo.m_tribeInfo;
        m_extInfo = cTbsRspGetTribeinfo.m_extInfo;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspGetTribeinfo::Size() const
{
    uint32_t nSize = 10;
    nSize += m_tribeId.length();
    nSize += m_tribeInfo.Size();
    nSize += m_extInfo.Size();
    return nSize;
}

class CTbsReqModifyTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_MODIFY_TRIBE
    };
    CTbsReqModifyTribe()
    {
    }

    ~CTbsReqModifyTribe() { }
    CTbsReqModifyTribe(const string&  strTribeId, const map< string,string >&  mapItems)
    {
        m_tribeId = strTribeId;
        m_items = mapItems;
    }
    CTbsReqModifyTribe&  operator=( const CTbsReqModifyTribe&  cTbsReqModifyTribe )
    {
        m_tribeId = cTbsReqModifyTribe.m_tribeId;
        m_items = cTbsReqModifyTribe.m_items;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqModifyTribe::Size() const
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

class CTbsRspModifyTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_MODIFY_TRIBE
    };
    CTbsRspModifyTribe()
    {
    }

    ~CTbsRspModifyTribe() { }
    CTbsRspModifyTribe(const uint8_t&  chRetcode, const string&  strTribeId, const map< string,string >&  mapItems)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_items = mapItems;
    }
    CTbsRspModifyTribe&  operator=( const CTbsRspModifyTribe&  cTbsRspModifyTribe )
    {
        m_retcode = cTbsRspModifyTribe.m_retcode;
        m_tribeId = cTbsRspModifyTribe.m_tribeId;
        m_items = cTbsRspModifyTribe.m_items;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspModifyTribe::Size() const
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

class CTbsReqGetTribememberinfo : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_GET_TRIBEMEMBERINFO
    };
    CTbsReqGetTribememberinfo()
    {
    }

    ~CTbsReqGetTribememberinfo() { }
    CTbsReqGetTribememberinfo(const string&  strTribeId)
    {
        m_tribeId = strTribeId;
    }
    CTbsReqGetTribememberinfo&  operator=( const CTbsReqGetTribememberinfo&  cTbsReqGetTribememberinfo )
    {
        m_tribeId = cTbsReqGetTribememberinfo.m_tribeId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqGetTribememberinfo::Size() const
{
    uint32_t nSize = 6;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbsRspGetTribememberinfo : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_GET_TRIBEMEMBERINFO
    };
    CTbsRspGetTribememberinfo()
    {
    }

    ~CTbsRspGetTribememberinfo() { }
    CTbsRspGetTribememberinfo(const uint8_t&  chRetcode, const string&  strTribeId, const VECTOR< STmInfo >&  vecTmInfoList)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_tmInfoList = vecTmInfoList;
    }
    CTbsRspGetTribememberinfo&  operator=( const CTbsRspGetTribememberinfo&  cTbsRspGetTribememberinfo )
    {
        m_retcode = cTbsRspGetTribememberinfo.m_retcode;
        m_tribeId = cTbsRspGetTribememberinfo.m_tribeId;
        m_tmInfoList = cTbsRspGetTribememberinfo.m_tmInfoList;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspGetTribememberinfo::Size() const
{
    uint32_t nSize = 14;
    nSize += m_tribeId.length();
    for(uint32_t i = 0; i < m_tmInfoList.size(); i++)
    {
        nSize += m_tmInfoList[i].Size();
    }
    return nSize;
}

class CTbsReqSendTribemsg : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_SEND_TRIBEMSG
    };
    CTbsReqSendTribemsg()
    {
    }

    ~CTbsReqSendTribemsg() { }
    CTbsReqSendTribemsg(const string&  strTribeId, const uint8_t&  chMsgType, const string&  strMessage)
    {
        m_tribeId = strTribeId;
        m_msgType = chMsgType;
        m_message = strMessage;
    }
    CTbsReqSendTribemsg&  operator=( const CTbsReqSendTribemsg&  cTbsReqSendTribemsg )
    {
        m_tribeId = cTbsReqSendTribemsg.m_tribeId;
        m_msgType = cTbsReqSendTribemsg.m_msgType;
        m_message = cTbsReqSendTribemsg.m_message;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqSendTribemsg::Size() const
{
    uint32_t nSize = 13;
    nSize += m_tribeId.length();
    nSize += m_message.length();
    return nSize;
}

class CTbsRspSendTribemsg : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_SEND_TRIBEMSG
    };
    CTbsRspSendTribemsg()
    {
    }

    ~CTbsRspSendTribemsg() { }
    CTbsRspSendTribemsg(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strMessage)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_message = strMessage;
    }
    CTbsRspSendTribemsg&  operator=( const CTbsRspSendTribemsg&  cTbsRspSendTribemsg )
    {
        m_retcode = cTbsRspSendTribemsg.m_retcode;
        m_tribeId = cTbsRspSendTribemsg.m_tribeId;
        m_message = cTbsRspSendTribemsg.m_message;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspSendTribemsg::Size() const
{
    uint32_t nSize = 13;
    nSize += m_tribeId.length();
    nSize += m_message.length();
    return nSize;
}

class CTbsNtfTribemsg : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_NTF_TRIBEMSG
    };
    CTbsNtfTribemsg()
    {
    }

    ~CTbsNtfTribemsg() { }
    CTbsNtfTribemsg(const string&  strTribeId, const uint8_t&  chOfflineFlag, const VECTOR< STribeMsg >&  vecTribeMsgList)
    {
        m_tribeId = strTribeId;
        m_offlineFlag = chOfflineFlag;
        m_tribeMsgList = vecTribeMsgList;
    }
    CTbsNtfTribemsg&  operator=( const CTbsNtfTribemsg&  cTbsNtfTribemsg )
    {
        m_tribeId = cTbsNtfTribemsg.m_tribeId;
        m_offlineFlag = cTbsNtfTribemsg.m_offlineFlag;
        m_tribeMsgList = cTbsNtfTribemsg.m_tribeMsgList;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsNtfTribemsg::Size() const
{
    uint32_t nSize = 14;
    nSize += m_tribeId.length();
    for(uint32_t i = 0; i < m_tribeMsgList.size(); i++)
    {
        nSize += m_tribeMsgList[i].Size();
    }
    return nSize;
}

class CTbsNtfTribeSysmsg : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_NTF_TRIBE_SYSMSG
    };
    CTbsNtfTribeSysmsg()
    {
    }

    ~CTbsNtfTribeSysmsg() { }
    CTbsNtfTribeSysmsg(const string&  strTribeId, const uint8_t&  chOfflineFlag, const VECTOR< STribeSysmsg >&  vecTribeSysmsgList)
    {
        m_tribeId = strTribeId;
        m_offlineFlag = chOfflineFlag;
        m_tribeSysmsgList = vecTribeSysmsgList;
    }
    CTbsNtfTribeSysmsg&  operator=( const CTbsNtfTribeSysmsg&  cTbsNtfTribeSysmsg )
    {
        m_tribeId = cTbsNtfTribeSysmsg.m_tribeId;
        m_offlineFlag = cTbsNtfTribeSysmsg.m_offlineFlag;
        m_tribeSysmsgList = cTbsNtfTribeSysmsg.m_tribeSysmsgList;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsNtfTribeSysmsg::Size() const
{
    uint32_t nSize = 14;
    nSize += m_tribeId.length();
    for(uint32_t i = 0; i < m_tribeSysmsgList.size(); i++)
    {
        nSize += m_tribeSysmsgList[i].Size();
    }
    return nSize;
}

class CTbsReqSetOpenTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_SET_OPEN_TRIBE
    };
    CTbsReqSetOpenTribe()
    {
    }

    ~CTbsReqSetOpenTribe() { }
    CTbsReqSetOpenTribe(const uint8_t&  chOpenTribe)
    {
        m_openTribe = chOpenTribe;
    }
    CTbsReqSetOpenTribe&  operator=( const CTbsReqSetOpenTribe&  cTbsReqSetOpenTribe )
    {
        m_openTribe = cTbsReqSetOpenTribe.m_openTribe;
        return *this;
    }

    const uint8_t&  GetOpenTribe () const { return m_openTribe; }
    bool SetOpenTribe ( const uint8_t&  chOpenTribe )
    {
        m_openTribe = chOpenTribe;
        return true;
    }
private:
    uint8_t m_openTribe;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqSetOpenTribe::Size() const
{
    return 3;
}
class CTbsRspSetOpenTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_SET_OPEN_TRIBE
    };
    CTbsRspSetOpenTribe()
    {
    }

    ~CTbsRspSetOpenTribe() { }
    CTbsRspSetOpenTribe(const uint8_t&  chRetcode, const uint8_t&  chOpenTribe)
    {
        m_retcode = chRetcode;
        m_openTribe = chOpenTribe;
    }
    CTbsRspSetOpenTribe&  operator=( const CTbsRspSetOpenTribe&  cTbsRspSetOpenTribe )
    {
        m_retcode = cTbsRspSetOpenTribe.m_retcode;
        m_openTribe = cTbsRspSetOpenTribe.m_openTribe;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
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
    uint8_t m_openTribe;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspSetOpenTribe::Size() const
{
    return 5;
}
class CTbsReqVisitTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_VISIT_TRIBE
    };
    CTbsReqVisitTribe() : m_language(0x804)
    {
    }

    ~CTbsReqVisitTribe() { }
    CTbsReqVisitTribe(const string&  strTribeId, const uint32_t&  dwLanguage= 0x804)
    {
        m_tribeId = strTribeId;
        m_language = dwLanguage;
    }
    CTbsReqVisitTribe&  operator=( const CTbsReqVisitTribe&  cTbsReqVisitTribe )
    {
        m_tribeId = cTbsReqVisitTribe.m_tribeId;
        m_language = cTbsReqVisitTribe.m_language;
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
    const uint32_t&  GetLanguage () const { return m_language; }
    bool SetLanguage ( const uint32_t&  dwLanguage )
    {
        m_language = dwLanguage;
        return true;
    }
private:
    string m_tribeId;
    uint32_t m_language;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqVisitTribe::Size() const
{
    uint32_t nSize = 11;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbsRspVisitTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_VISIT_TRIBE
    };
    CTbsRspVisitTribe()
    {
    }

    ~CTbsRspVisitTribe() { }
    CTbsRspVisitTribe(const uint8_t&  chRetcode, const string&  strTribeId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
    }
    CTbsRspVisitTribe&  operator=( const CTbsRspVisitTribe&  cTbsRspVisitTribe )
    {
        m_retcode = cTbsRspVisitTribe.m_retcode;
        m_tribeId = cTbsRspVisitTribe.m_tribeId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspVisitTribe::Size() const
{
    uint32_t nSize = 8;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbsReqClearVisitor : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_CLEAR_VISITOR
    };
    CTbsReqClearVisitor()
    {
    }

    ~CTbsReqClearVisitor() { }
    CTbsReqClearVisitor(const string&  strTribeId)
    {
        m_tribeId = strTribeId;
    }
    CTbsReqClearVisitor&  operator=( const CTbsReqClearVisitor&  cTbsReqClearVisitor )
    {
        m_tribeId = cTbsReqClearVisitor.m_tribeId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqClearVisitor::Size() const
{
    uint32_t nSize = 6;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbsRspClearVisitor : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_CLEAR_VISITOR
    };
    CTbsRspClearVisitor()
    {
    }

    ~CTbsRspClearVisitor() { }
    CTbsRspClearVisitor(const uint8_t&  chRetcode, const string&  strTribeId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
    }
    CTbsRspClearVisitor&  operator=( const CTbsRspClearVisitor&  cTbsRspClearVisitor )
    {
        m_retcode = cTbsRspClearVisitor.m_retcode;
        m_tribeId = cTbsRspClearVisitor.m_tribeId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspClearVisitor::Size() const
{
    uint32_t nSize = 8;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbsReqStartTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_START_TRIBE
    };
    CTbsReqStartTribe()
    {
    }

    ~CTbsReqStartTribe() { }
    CTbsReqStartTribe(const string&  strTribeId, const map< string,string >&  mapItems)
    {
        m_tribeId = strTribeId;
        m_items = mapItems;
    }
    CTbsReqStartTribe&  operator=( const CTbsReqStartTribe&  cTbsReqStartTribe )
    {
        m_tribeId = cTbsReqStartTribe.m_tribeId;
        m_items = cTbsReqStartTribe.m_items;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqStartTribe::Size() const
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

class CTbsRspStartTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_START_TRIBE
    };
    CTbsRspStartTribe()
    {
    }

    ~CTbsRspStartTribe() { }
    CTbsRspStartTribe(const uint8_t&  chRetcode, const string&  strTribeId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
    }
    CTbsRspStartTribe&  operator=( const CTbsRspStartTribe&  cTbsRspStartTribe )
    {
        m_retcode = cTbsRspStartTribe.m_retcode;
        m_tribeId = cTbsRspStartTribe.m_tribeId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspStartTribe::Size() const
{
    uint32_t nSize = 8;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbsGetAllTribelist : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_GET_ALL_TRIBELIST
    };
    ~CTbsGetAllTribelist() { }
public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsGetAllTribelist::Size() const
{
    return 1;
}
class CTbsRspAllTribelist : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_ALL_TRIBELIST
    };
    CTbsRspAllTribelist()
    {
    }

    ~CTbsRspAllTribelist() { }
    CTbsRspAllTribelist(const VECTOR< uint32_t >&  vecTribeIdList)
    {
        m_tribeIdList = vecTribeIdList;
    }
    CTbsRspAllTribelist&  operator=( const CTbsRspAllTribelist&  cTbsRspAllTribelist )
    {
        m_tribeIdList = cTbsRspAllTribelist.m_tribeIdList;
        return *this;
    }

    const VECTOR< uint32_t >&  GetTribeIdList () const { return m_tribeIdList; }
    bool SetTribeIdList ( const VECTOR< uint32_t >&  vecTribeIdList )
    {
        m_tribeIdList = vecTribeIdList;
        return true;
    }
private:
    VECTOR< uint32_t > m_tribeIdList;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspAllTribelist::Size() const
{
    uint32_t nSize = 7;
    nSize += m_tribeIdList.size() * 4;
    return nSize;
}

class CTbsNtfLoadtribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_NTF_LOADTRIBE
    };
    CTbsNtfLoadtribe()
    {
    }

    ~CTbsNtfLoadtribe() { }
    CTbsNtfLoadtribe(const string&  strTribeId)
    {
        m_tribeId = strTribeId;
    }
    CTbsNtfLoadtribe&  operator=( const CTbsNtfLoadtribe&  cTbsNtfLoadtribe )
    {
        m_tribeId = cTbsNtfLoadtribe.m_tribeId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsNtfLoadtribe::Size() const
{
    uint32_t nSize = 6;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbsNtfUnloadtribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_NTF_UNLOADTRIBE
    };
    CTbsNtfUnloadtribe()
    {
    }

    ~CTbsNtfUnloadtribe() { }
    CTbsNtfUnloadtribe(const string&  strTribeId)
    {
        m_tribeId = strTribeId;
    }
    CTbsNtfUnloadtribe&  operator=( const CTbsNtfUnloadtribe&  cTbsNtfUnloadtribe )
    {
        m_tribeId = cTbsNtfUnloadtribe.m_tribeId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsNtfUnloadtribe::Size() const
{
    uint32_t nSize = 6;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbsReqGetOnlineinfo : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_GET_ONLINEINFO
    };
    CTbsReqGetOnlineinfo()
    {
    }

    ~CTbsReqGetOnlineinfo() { }
    CTbsReqGetOnlineinfo(const string&  strTribeId)
    {
        m_tribeId = strTribeId;
    }
    CTbsReqGetOnlineinfo&  operator=( const CTbsReqGetOnlineinfo&  cTbsReqGetOnlineinfo )
    {
        m_tribeId = cTbsReqGetOnlineinfo.m_tribeId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqGetOnlineinfo::Size() const
{
    uint32_t nSize = 6;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbsRspGetOnlineinfo : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_GET_ONLINEINFO
    };
    CTbsRspGetOnlineinfo()
    {
    }

    ~CTbsRspGetOnlineinfo() { }
    CTbsRspGetOnlineinfo(const uint8_t&  chRetcode, const string&  strTribeId, const uint32_t&  dwMemberNum, const uint32_t&  dwVisitorNum)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_memberNum = dwMemberNum;
        m_visitorNum = dwVisitorNum;
    }
    CTbsRspGetOnlineinfo&  operator=( const CTbsRspGetOnlineinfo&  cTbsRspGetOnlineinfo )
    {
        m_retcode = cTbsRspGetOnlineinfo.m_retcode;
        m_tribeId = cTbsRspGetOnlineinfo.m_tribeId;
        m_memberNum = cTbsRspGetOnlineinfo.m_memberNum;
        m_visitorNum = cTbsRspGetOnlineinfo.m_visitorNum;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspGetOnlineinfo::Size() const
{
    uint32_t nSize = 18;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbsReqNtfModifytribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_NTF_MODIFYTRIBE
    };
    CTbsReqNtfModifytribe()
    {
    }

    ~CTbsReqNtfModifytribe() { }
    CTbsReqNtfModifytribe(const string&  strTribeId, const string&  strUserId, const VECTOR< SModifyItem >&  vecItemList)
    {
        m_tribeId = strTribeId;
        m_userId = strUserId;
        m_itemList = vecItemList;
    }
    CTbsReqNtfModifytribe&  operator=( const CTbsReqNtfModifytribe&  cTbsReqNtfModifytribe )
    {
        m_tribeId = cTbsReqNtfModifytribe.m_tribeId;
        m_userId = cTbsReqNtfModifytribe.m_userId;
        m_itemList = cTbsReqNtfModifytribe.m_itemList;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqNtfModifytribe::Size() const
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

class CTbsRspNtfModifytribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_NTF_MODIFYTRIBE
    };
    CTbsRspNtfModifytribe()
    {
    }

    ~CTbsRspNtfModifytribe() { }
    CTbsRspNtfModifytribe(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strUserId, const VECTOR< SModifyItem >&  vecItemList)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_userId = strUserId;
        m_itemList = vecItemList;
    }
    CTbsRspNtfModifytribe&  operator=( const CTbsRspNtfModifytribe&  cTbsRspNtfModifytribe )
    {
        m_retcode = cTbsRspNtfModifytribe.m_retcode;
        m_tribeId = cTbsRspNtfModifytribe.m_tribeId;
        m_userId = cTbsRspNtfModifytribe.m_userId;
        m_itemList = cTbsRspNtfModifytribe.m_itemList;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspNtfModifytribe::Size() const
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

class CTbsReqUnloadtribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_UNLOADTRIBE
    };
    CTbsReqUnloadtribe()
    {
    }

    ~CTbsReqUnloadtribe() { }
    CTbsReqUnloadtribe(const string&  strTribeId)
    {
        m_tribeId = strTribeId;
    }
    CTbsReqUnloadtribe&  operator=( const CTbsReqUnloadtribe&  cTbsReqUnloadtribe )
    {
        m_tribeId = cTbsReqUnloadtribe.m_tribeId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqUnloadtribe::Size() const
{
    uint32_t nSize = 6;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbsRspUnloadtribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_UNLOADTRIBE
    };
    CTbsRspUnloadtribe()
    {
    }

    ~CTbsRspUnloadtribe() { }
    CTbsRspUnloadtribe(const uint8_t&  chRetcode, const string&  strTribeId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
    }
    CTbsRspUnloadtribe&  operator=( const CTbsRspUnloadtribe&  cTbsRspUnloadtribe )
    {
        m_retcode = cTbsRspUnloadtribe.m_retcode;
        m_tribeId = cTbsRspUnloadtribe.m_tribeId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspUnloadtribe::Size() const
{
    uint32_t nSize = 8;
    nSize += m_tribeId.length();
    return nSize;
}

struct STribeCard
{
public:
    STribeCard()
    {
    }

    ~STribeCard() { }
    STribeCard(const string&  strRealName, const string&  strPhone, const string&  strMobile, const string&  strEmail, const string&  strAddr, const string&  strMemo)
    {
        m_realName = strRealName;
        m_phone = strPhone;
        m_mobile = strMobile;
        m_email = strEmail;
        m_addr = strAddr;
        m_memo = strMemo;
    }
    STribeCard&  operator=( const STribeCard&  sTribeCard )
    {
        m_realName = sTribeCard.m_realName;
        m_phone = sTribeCard.m_phone;
        m_mobile = sTribeCard.m_mobile;
        m_email = sTribeCard.m_email;
        m_addr = sTribeCard.m_addr;
        m_memo = sTribeCard.m_memo;
        return *this;
    }

    string m_realName;
    string m_phone;
    string m_mobile;
    string m_email;
    string m_addr;
    string m_memo;

public:
    uint32_t Size() const;
};

inline uint32_t STribeCard::Size() const
{
    uint32_t nSize = 31;
    nSize += m_realName.length();
    nSize += m_phone.length();
    nSize += m_mobile.length();
    nSize += m_email.length();
    nSize += m_addr.length();
    nSize += m_memo.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const STribeCard&  sTribeCard );
CPackData& operator>> ( CPackData& cPackData, STribeCard&  sTribeCard );

class CTbsReqGetTribecard : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_GET_TRIBECARD
    };
    ~CTbsReqGetTribecard() { }
public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqGetTribecard::Size() const
{
    return 1;
}
class CTbsRspGetTribecard : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_GET_TRIBECARD
    };
    CTbsRspGetTribecard()
    {
    }

    ~CTbsRspGetTribecard() { }
    CTbsRspGetTribecard(const uint8_t&  chRetcode, const string&  strTribeId, const STribeCard&  sTribeCard)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_tribeCard = sTribeCard;
    }
    CTbsRspGetTribecard&  operator=( const CTbsRspGetTribecard&  cTbsRspGetTribecard )
    {
        m_retcode = cTbsRspGetTribecard.m_retcode;
        m_tribeId = cTbsRspGetTribecard.m_tribeId;
        m_tribeCard = cTbsRspGetTribecard.m_tribeCard;
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
    const STribeCard&  GetTribeCard () const { return m_tribeCard; }
    bool SetTribeCard ( const STribeCard&  sTribeCard )
    {
        m_tribeCard = sTribeCard;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_tribeId;
    STribeCard m_tribeCard;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspGetTribecard::Size() const
{
    uint32_t nSize = 9;
    nSize += m_tribeId.length();
    nSize += m_tribeCard.Size();
    return nSize;
}

class CTbsReqUpdateTribecard : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_UPDATE_TRIBECARD
    };
    CTbsReqUpdateTribecard()
    {
    }

    ~CTbsReqUpdateTribecard() { }
    CTbsReqUpdateTribecard(const map< string,string >&  mapItems)
    {
        m_items = mapItems;
    }
    CTbsReqUpdateTribecard&  operator=( const CTbsReqUpdateTribecard&  cTbsReqUpdateTribecard )
    {
        m_items = cTbsReqUpdateTribecard.m_items;
        return *this;
    }

    const map< string,string >&  GetItems () const { return m_items; }
    bool SetItems ( const map< string,string >&  mapItems )
    {
        m_items = mapItems;
        return true;
    }
private:
    map< string,string > m_items;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqUpdateTribecard::Size() const
{
    uint32_t nSize = 5;
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

class CTbsReqUpdateTribecard2 : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_UPDATE_TRIBECARD2
    };
    CTbsReqUpdateTribecard2()
    {
    }

    ~CTbsReqUpdateTribecard2() { }
    CTbsReqUpdateTribecard2(const string&  strTribeId, const string&  strMemberId, const map< string,string >&  mapItems)
    {
        m_tribeId = strTribeId;
        m_memberId = strMemberId;
        m_items = mapItems;
    }
    CTbsReqUpdateTribecard2&  operator=( const CTbsReqUpdateTribecard2&  cTbsReqUpdateTribecard2 )
    {
        m_tribeId = cTbsReqUpdateTribecard2.m_tribeId;
        m_memberId = cTbsReqUpdateTribecard2.m_memberId;
        m_items = cTbsReqUpdateTribecard2.m_items;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqUpdateTribecard2::Size() const
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

class CTbsRspUpdateTribecard : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_UPDATE_TRIBECARD
    };
    CTbsRspUpdateTribecard()
    {
    }

    ~CTbsRspUpdateTribecard() { }
    CTbsRspUpdateTribecard(const uint8_t&  chRetcode, const string&  strTribeId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
    }
    CTbsRspUpdateTribecard&  operator=( const CTbsRspUpdateTribecard&  cTbsRspUpdateTribecard )
    {
        m_retcode = cTbsRspUpdateTribecard.m_retcode;
        m_tribeId = cTbsRspUpdateTribecard.m_tribeId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspUpdateTribecard::Size() const
{
    uint32_t nSize = 8;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbsReqGetMemberinfo : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_GET_MEMBERINFO
    };
    CTbsReqGetMemberinfo()
    {
    }

    ~CTbsReqGetMemberinfo() { }
    CTbsReqGetMemberinfo(const string&  strTribeId, const string&  strUserId)
    {
        m_tribeId = strTribeId;
        m_userId = strUserId;
    }
    CTbsReqGetMemberinfo&  operator=( const CTbsReqGetMemberinfo&  cTbsReqGetMemberinfo )
    {
        m_tribeId = cTbsReqGetMemberinfo.m_tribeId;
        m_userId = cTbsReqGetMemberinfo.m_userId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqGetMemberinfo::Size() const
{
    uint32_t nSize = 11;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    return nSize;
}

class CTbsRspGetMemberinfo : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_GET_MEMBERINFO
    };
    CTbsRspGetMemberinfo()
    {
    }

    ~CTbsRspGetMemberinfo() { }
    CTbsRspGetMemberinfo(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strUserId, const STmInfo&  sMemberInfo)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_userId = strUserId;
        m_memberInfo = sMemberInfo;
    }
    CTbsRspGetMemberinfo&  operator=( const CTbsRspGetMemberinfo&  cTbsRspGetMemberinfo )
    {
        m_retcode = cTbsRspGetMemberinfo.m_retcode;
        m_tribeId = cTbsRspGetMemberinfo.m_tribeId;
        m_userId = cTbsRspGetMemberinfo.m_userId;
        m_memberInfo = cTbsRspGetMemberinfo.m_memberInfo;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspGetMemberinfo::Size() const
{
    uint32_t nSize = 14;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    nSize += m_memberInfo.Size();
    return nSize;
}

class CTbsReqGetTribemanager : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_GET_TRIBEMANAGER
    };
    CTbsReqGetTribemanager()
    {
    }

    ~CTbsReqGetTribemanager() { }
    CTbsReqGetTribemanager(const string&  strTribeId)
    {
        m_tribeId = strTribeId;
    }
    CTbsReqGetTribemanager&  operator=( const CTbsReqGetTribemanager&  cTbsReqGetTribemanager )
    {
        m_tribeId = cTbsReqGetTribemanager.m_tribeId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqGetTribemanager::Size() const
{
    uint32_t nSize = 6;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbsRspGetTribemanager : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_GET_TRIBEMANAGER
    };
    CTbsRspGetTribemanager()
    {
    }

    ~CTbsRspGetTribemanager() { }
    CTbsRspGetTribemanager(const uint8_t&  chRetcode, const string&  strTribeId, const VECTOR< string >&  vecManagerList)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_managerList = vecManagerList;
    }
    CTbsRspGetTribemanager&  operator=( const CTbsRspGetTribemanager&  cTbsRspGetTribemanager )
    {
        m_retcode = cTbsRspGetTribemanager.m_retcode;
        m_tribeId = cTbsRspGetTribemanager.m_tribeId;
        m_managerList = cTbsRspGetTribemanager.m_managerList;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspGetTribemanager::Size() const
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

class CTbsReqGetUsertribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_GET_USERTRIBE
    };
    CTbsReqGetUsertribe()
    {
    }

    ~CTbsReqGetUsertribe() { }
    CTbsReqGetUsertribe(const string&  strUserId)
    {
        m_userId = strUserId;
    }
    CTbsReqGetUsertribe&  operator=( const CTbsReqGetUsertribe&  cTbsReqGetUsertribe )
    {
        m_userId = cTbsReqGetUsertribe.m_userId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqGetUsertribe::Size() const
{
    uint32_t nSize = 6;
    nSize += m_userId.length();
    return nSize;
}

class CTbsRspGetUsertribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_GET_USERTRIBE
    };
    CTbsRspGetUsertribe()
    {
    }

    ~CTbsRspGetUsertribe() { }
    CTbsRspGetUsertribe(const uint8_t&  chRetcode, const string&  strUserId, const VECTOR< STribeId >&  vecTribeList)
    {
        m_retcode = chRetcode;
        m_userId = strUserId;
        m_tribeList = vecTribeList;
    }
    CTbsRspGetUsertribe&  operator=( const CTbsRspGetUsertribe&  cTbsRspGetUsertribe )
    {
        m_retcode = cTbsRspGetUsertribe.m_retcode;
        m_userId = cTbsRspGetUsertribe.m_userId;
        m_tribeList = cTbsRspGetUsertribe.m_tribeList;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspGetUsertribe::Size() const
{
    uint32_t nSize = 14;
    nSize += m_userId.length();
    for(uint32_t i = 0; i < m_tribeList.size(); i++)
    {
        nSize += m_tribeList[i].Size();
    }
    return nSize;
}

class CTbsReqPostTribemsg : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_POST_TRIBEMSG
    };
    CTbsReqPostTribemsg() : m_msgType(1)
    {
    }

    ~CTbsReqPostTribemsg() { }
    CTbsReqPostTribemsg(const string&  strTribeId, const string&  strUserId, const string&  strMessage, const uint8_t&  chMsgType= 1)
    {
        m_tribeId = strTribeId;
        m_userId = strUserId;
        m_message = strMessage;
        m_msgType = chMsgType;
    }
    CTbsReqPostTribemsg&  operator=( const CTbsReqPostTribemsg&  cTbsReqPostTribemsg )
    {
        m_tribeId = cTbsReqPostTribemsg.m_tribeId;
        m_userId = cTbsReqPostTribemsg.m_userId;
        m_message = cTbsReqPostTribemsg.m_message;
        m_msgType = cTbsReqPostTribemsg.m_msgType;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqPostTribemsg::Size() const
{
    uint32_t nSize = 18;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    nSize += m_message.length();
    return nSize;
}

class CTbsRspPostTribemsg : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_POST_TRIBEMSG
    };
    CTbsRspPostTribemsg() : m_msgType(1)
    {
    }

    ~CTbsRspPostTribemsg() { }
    CTbsRspPostTribemsg(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strUserId, const string&  strMessage, const uint8_t&  chMsgType= 1)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_userId = strUserId;
        m_message = strMessage;
        m_msgType = chMsgType;
    }
    CTbsRspPostTribemsg&  operator=( const CTbsRspPostTribemsg&  cTbsRspPostTribemsg )
    {
        m_retcode = cTbsRspPostTribemsg.m_retcode;
        m_tribeId = cTbsRspPostTribemsg.m_tribeId;
        m_userId = cTbsRspPostTribemsg.m_userId;
        m_message = cTbsRspPostTribemsg.m_message;
        m_msgType = cTbsRspPostTribemsg.m_msgType;
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
    string m_userId;
    string m_message;
    uint8_t m_msgType;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspPostTribemsg::Size() const
{
    uint32_t nSize = 20;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    nSize += m_message.length();
    return nSize;
}

class CTbsReqGetActlevel : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_GET_ACTLEVEL
    };
    CTbsReqGetActlevel()
    {
    }

    ~CTbsReqGetActlevel() { }
    CTbsReqGetActlevel(const string&  strTribeId)
    {
        m_tribeId = strTribeId;
    }
    CTbsReqGetActlevel&  operator=( const CTbsReqGetActlevel&  cTbsReqGetActlevel )
    {
        m_tribeId = cTbsReqGetActlevel.m_tribeId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqGetActlevel::Size() const
{
    uint32_t nSize = 6;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbsRspGetActlevel : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_GET_ACTLEVEL
    };
    CTbsRspGetActlevel()
    {
    }

    ~CTbsRspGetActlevel() { }
    CTbsRspGetActlevel(const uint8_t&  chRetcode, const string&  strTribeId, const uint32_t&  dwActiveLevel)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_activeLevel = dwActiveLevel;
    }
    CTbsRspGetActlevel&  operator=( const CTbsRspGetActlevel&  cTbsRspGetActlevel )
    {
        m_retcode = cTbsRspGetActlevel.m_retcode;
        m_tribeId = cTbsRspGetActlevel.m_tribeId;
        m_activeLevel = cTbsRspGetActlevel.m_activeLevel;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspGetActlevel::Size() const
{
    uint32_t nSize = 13;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbsNtfOfflineMsg : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_NTF_OFFLINE_MSG
    };
    CTbsNtfOfflineMsg()
    {
    }

    ~CTbsNtfOfflineMsg() { }
    CTbsNtfOfflineMsg(const string&  strTribeId, const VECTOR< STribeMsg >&  vecOfflineMsgList, const VECTOR< STmMsgid >&  vecMemberMsgid)
    {
        m_tribeId = strTribeId;
        m_offlineMsgList = vecOfflineMsgList;
        m_memberMsgid = vecMemberMsgid;
    }
    CTbsNtfOfflineMsg&  operator=( const CTbsNtfOfflineMsg&  cTbsNtfOfflineMsg )
    {
        m_tribeId = cTbsNtfOfflineMsg.m_tribeId;
        m_offlineMsgList = cTbsNtfOfflineMsg.m_offlineMsgList;
        m_memberMsgid = cTbsNtfOfflineMsg.m_memberMsgid;
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
    const VECTOR< STribeMsg >&  GetOfflineMsgList () const { return m_offlineMsgList; }
    bool SetOfflineMsgList ( const VECTOR< STribeMsg >&  vecOfflineMsgList )
    {
        m_offlineMsgList = vecOfflineMsgList;
        return true;
    }
    const VECTOR< STmMsgid >&  GetMemberMsgid () const { return m_memberMsgid; }
    bool SetMemberMsgid ( const VECTOR< STmMsgid >&  vecMemberMsgid )
    {
        m_memberMsgid = vecMemberMsgid;
        return true;
    }
private:
    string m_tribeId;
    VECTOR< STribeMsg > m_offlineMsgList;
    VECTOR< STmMsgid > m_memberMsgid;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsNtfOfflineMsg::Size() const
{
    uint32_t nSize = 18;
    nSize += m_tribeId.length();
    for(uint32_t i = 0; i < m_offlineMsgList.size(); i++)
    {
        nSize += m_offlineMsgList[i].Size();
    }
    for(uint32_t i = 0; i < m_memberMsgid.size(); i++)
    {
        nSize += m_memberMsgid[i].Size();
    }
    return nSize;
}

class CTbsReqRecommendTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_RECOMMEND_TRIBE
    };
    CTbsReqRecommendTribe()
    {
    }

    ~CTbsReqRecommendTribe() { }
    CTbsReqRecommendTribe(const string&  strTribeId, const VECTOR< string >&  vecUserList, const string&  strMessage)
    {
        m_tribeId = strTribeId;
        m_userList = vecUserList;
        m_message = strMessage;
    }
    CTbsReqRecommendTribe&  operator=( const CTbsReqRecommendTribe&  cTbsReqRecommendTribe )
    {
        m_tribeId = cTbsReqRecommendTribe.m_tribeId;
        m_userList = cTbsReqRecommendTribe.m_userList;
        m_message = cTbsReqRecommendTribe.m_message;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqRecommendTribe::Size() const
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

class CTbsRspRecommendTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_RECOMMEND_TRIBE
    };
    CTbsRspRecommendTribe()
    {
    }

    ~CTbsRspRecommendTribe() { }
    CTbsRspRecommendTribe(const uint8_t&  chRetcode, const string&  strTribeId, const VECTOR< string >&  vecUserList)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_userList = vecUserList;
    }
    CTbsRspRecommendTribe&  operator=( const CTbsRspRecommendTribe&  cTbsRspRecommendTribe )
    {
        m_retcode = cTbsRspRecommendTribe.m_retcode;
        m_tribeId = cTbsRspRecommendTribe.m_tribeId;
        m_userList = cTbsRspRecommendTribe.m_userList;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspRecommendTribe::Size() const
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

class CTbsNtfRecommendTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_NTF_RECOMMEND_TRIBE
    };
    CTbsNtfRecommendTribe()
    {
    }

    ~CTbsNtfRecommendTribe() { }
    CTbsNtfRecommendTribe(const string&  strTribeId, const string&  strMemberId, const VECTOR< string >&  vecUserList, const string&  strMessage)
    {
        m_tribeId = strTribeId;
        m_memberId = strMemberId;
        m_userList = vecUserList;
        m_message = strMessage;
    }
    CTbsNtfRecommendTribe&  operator=( const CTbsNtfRecommendTribe&  cTbsNtfRecommendTribe )
    {
        m_tribeId = cTbsNtfRecommendTribe.m_tribeId;
        m_memberId = cTbsNtfRecommendTribe.m_memberId;
        m_userList = cTbsNtfRecommendTribe.m_userList;
        m_message = cTbsNtfRecommendTribe.m_message;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsNtfRecommendTribe::Size() const
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

class CTbsReqAuthRecommend : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_AUTH_RECOMMEND
    };
    CTbsReqAuthRecommend()
    {
    }

    ~CTbsReqAuthRecommend() { }
    CTbsReqAuthRecommend(const string&  strTribeId, const string&  strMemberId, const VECTOR< string >&  vecUserList, const int64_t&  llGroupId)
    {
        m_tribeId = strTribeId;
        m_memberId = strMemberId;
        m_userList = vecUserList;
        m_groupId = llGroupId;
    }
    CTbsReqAuthRecommend&  operator=( const CTbsReqAuthRecommend&  cTbsReqAuthRecommend )
    {
        m_tribeId = cTbsReqAuthRecommend.m_tribeId;
        m_memberId = cTbsReqAuthRecommend.m_memberId;
        m_userList = cTbsReqAuthRecommend.m_userList;
        m_groupId = cTbsReqAuthRecommend.m_groupId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqAuthRecommend::Size() const
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

class CTbsRspAuthRecommend : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_AUTH_RECOMMEND
    };
    CTbsRspAuthRecommend()
    {
    }

    ~CTbsRspAuthRecommend() { }
    CTbsRspAuthRecommend(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strMemberId, const VECTOR< string >&  vecUserList, const int64_t&  llGroupId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_memberId = strMemberId;
        m_userList = vecUserList;
        m_groupId = llGroupId;
    }
    CTbsRspAuthRecommend&  operator=( const CTbsRspAuthRecommend&  cTbsRspAuthRecommend )
    {
        m_retcode = cTbsRspAuthRecommend.m_retcode;
        m_tribeId = cTbsRspAuthRecommend.m_tribeId;
        m_memberId = cTbsRspAuthRecommend.m_memberId;
        m_userList = cTbsRspAuthRecommend.m_userList;
        m_groupId = cTbsRspAuthRecommend.m_groupId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspAuthRecommend::Size() const
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

class CTbsNtfVersion : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_NTF_VERSION
    };
    CTbsNtfVersion()
    {
    }

    ~CTbsNtfVersion() { }
    CTbsNtfVersion(const string&  strVersion)
    {
        m_version = strVersion;
    }
    CTbsNtfVersion&  operator=( const CTbsNtfVersion&  cTbsNtfVersion )
    {
        m_version = cTbsNtfVersion.m_version;
        return *this;
    }

    const string&  GetVersion () const { return m_version; }
    bool SetVersion ( const string&  strVersion )
    {
        m_version = strVersion;
        return true;
    }
private:
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

inline uint32_t CTbsNtfVersion::Size() const
{
    uint32_t nSize = 6;
    nSize += m_version.length();
    return nSize;
}

class CTbsReqActiveUser : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_ACTIVE_USER
    };
    CTbsReqActiveUser()
    {
    }

    ~CTbsReqActiveUser() { }
    CTbsReqActiveUser(const string&  strTribeId, const string&  strUserId, const string&  strWebUid)
    {
        m_tribeId = strTribeId;
        m_userId = strUserId;
        m_webUid = strWebUid;
    }
    CTbsReqActiveUser&  operator=( const CTbsReqActiveUser&  cTbsReqActiveUser )
    {
        m_tribeId = cTbsReqActiveUser.m_tribeId;
        m_userId = cTbsReqActiveUser.m_userId;
        m_webUid = cTbsReqActiveUser.m_webUid;
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
    const string&  GetWebUid () const { return m_webUid; }
    bool SetWebUid ( const string&  strWebUid )
    {
        m_webUid = strWebUid;
        return true;
    }
private:
    string m_tribeId;
    string m_userId;
    string m_webUid;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqActiveUser::Size() const
{
    uint32_t nSize = 16;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    nSize += m_webUid.length();
    return nSize;
}

class CTbsReqDisactiveUser : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_DISACTIVE_USER
    };
    CTbsReqDisactiveUser()
    {
    }

    ~CTbsReqDisactiveUser() { }
    CTbsReqDisactiveUser(const string&  strTribeId, const string&  strUserId, const string&  strWebUid)
    {
        m_tribeId = strTribeId;
        m_userId = strUserId;
        m_webUid = strWebUid;
    }
    CTbsReqDisactiveUser&  operator=( const CTbsReqDisactiveUser&  cTbsReqDisactiveUser )
    {
        m_tribeId = cTbsReqDisactiveUser.m_tribeId;
        m_userId = cTbsReqDisactiveUser.m_userId;
        m_webUid = cTbsReqDisactiveUser.m_webUid;
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
    const string&  GetWebUid () const { return m_webUid; }
    bool SetWebUid ( const string&  strWebUid )
    {
        m_webUid = strWebUid;
        return true;
    }
private:
    string m_tribeId;
    string m_userId;
    string m_webUid;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqDisactiveUser::Size() const
{
    uint32_t nSize = 16;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    nSize += m_webUid.length();
    return nSize;
}

class CTbsReqStopTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_STOP_TRIBE
    };
    CTbsReqStopTribe()
    {
    }

    ~CTbsReqStopTribe() { }
    CTbsReqStopTribe(const string&  strTribeId)
    {
        m_tribeId = strTribeId;
    }
    CTbsReqStopTribe&  operator=( const CTbsReqStopTribe&  cTbsReqStopTribe )
    {
        m_tribeId = cTbsReqStopTribe.m_tribeId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqStopTribe::Size() const
{
    uint32_t nSize = 6;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbsRspStopTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_STOP_TRIBE
    };
    CTbsRspStopTribe()
    {
    }

    ~CTbsRspStopTribe() { }
    CTbsRspStopTribe(const uint8_t&  chRetcode, const string&  strTribeId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
    }
    CTbsRspStopTribe&  operator=( const CTbsRspStopTribe&  cTbsRspStopTribe )
    {
        m_retcode = cTbsRspStopTribe.m_retcode;
        m_tribeId = cTbsRspStopTribe.m_tribeId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspStopTribe::Size() const
{
    uint32_t nSize = 8;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbsReqAddTribeMember : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_ADD_TRIBE_MEMBER
    };
    CTbsReqAddTribeMember()
    {
    }

    ~CTbsReqAddTribeMember() { }
    CTbsReqAddTribeMember(const string&  strTribeId, const uint8_t&  chTribeLevel, const string&  strUserId, const string&  strName)
    {
        m_tribeId = strTribeId;
        m_tribeLevel = chTribeLevel;
        m_userId = strUserId;
        m_name = strName;
    }
    CTbsReqAddTribeMember&  operator=( const CTbsReqAddTribeMember&  cTbsReqAddTribeMember )
    {
        m_tribeId = cTbsReqAddTribeMember.m_tribeId;
        m_tribeLevel = cTbsReqAddTribeMember.m_tribeLevel;
        m_userId = cTbsReqAddTribeMember.m_userId;
        m_name = cTbsReqAddTribeMember.m_name;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqAddTribeMember::Size() const
{
    uint32_t nSize = 18;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    nSize += m_name.length();
    return nSize;
}

class CTbsRspAddTribeMember : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_ADD_TRIBE_MEMBER
    };
    CTbsRspAddTribeMember()
    {
    }

    ~CTbsRspAddTribeMember() { }
    CTbsRspAddTribeMember(const uint8_t&  chRetcode, const string&  strTribeId, const uint8_t&  chTribeLevel, const string&  strUserId, const string&  strName)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_tribeLevel = chTribeLevel;
        m_userId = strUserId;
        m_name = strName;
    }
    CTbsRspAddTribeMember&  operator=( const CTbsRspAddTribeMember&  cTbsRspAddTribeMember )
    {
        m_retcode = cTbsRspAddTribeMember.m_retcode;
        m_tribeId = cTbsRspAddTribeMember.m_tribeId;
        m_tribeLevel = cTbsRspAddTribeMember.m_tribeLevel;
        m_userId = cTbsRspAddTribeMember.m_userId;
        m_name = cTbsRspAddTribeMember.m_name;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspAddTribeMember::Size() const
{
    uint32_t nSize = 20;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    nSize += m_name.length();
    return nSize;
}

class CTbsReqDelTribeMember : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_DEL_TRIBE_MEMBER
    };
    CTbsReqDelTribeMember()
    {
    }

    ~CTbsReqDelTribeMember() { }
    CTbsReqDelTribeMember(const string&  strTribeId, const uint8_t&  chTribeLevel, const string&  strUserId, const string&  strOperId)
    {
        m_tribeId = strTribeId;
        m_tribeLevel = chTribeLevel;
        m_userId = strUserId;
        m_operId = strOperId;
    }
    CTbsReqDelTribeMember&  operator=( const CTbsReqDelTribeMember&  cTbsReqDelTribeMember )
    {
        m_tribeId = cTbsReqDelTribeMember.m_tribeId;
        m_tribeLevel = cTbsReqDelTribeMember.m_tribeLevel;
        m_userId = cTbsReqDelTribeMember.m_userId;
        m_operId = cTbsReqDelTribeMember.m_operId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqDelTribeMember::Size() const
{
    uint32_t nSize = 18;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    nSize += m_operId.length();
    return nSize;
}

class CTbsRspDelTribeMember : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_DEL_TRIBE_MEMBER
    };
    CTbsRspDelTribeMember()
    {
    }

    ~CTbsRspDelTribeMember() { }
    CTbsRspDelTribeMember(const uint8_t&  chRetcode, const string&  strTribeId, const uint8_t&  chTribeLevel, const string&  strUserId, const string&  strOperId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_tribeLevel = chTribeLevel;
        m_userId = strUserId;
        m_operId = strOperId;
    }
    CTbsRspDelTribeMember&  operator=( const CTbsRspDelTribeMember&  cTbsRspDelTribeMember )
    {
        m_retcode = cTbsRspDelTribeMember.m_retcode;
        m_tribeId = cTbsRspDelTribeMember.m_tribeId;
        m_tribeLevel = cTbsRspDelTribeMember.m_tribeLevel;
        m_userId = cTbsRspDelTribeMember.m_userId;
        m_operId = cTbsRspDelTribeMember.m_operId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspDelTribeMember::Size() const
{
    uint32_t nSize = 20;
    nSize += m_tribeId.length();
    nSize += m_userId.length();
    nSize += m_operId.length();
    return nSize;
}

class CTbsReqSetTribeMsgPopup : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_SET_TRIBE_MSG_POPUP
    };
    CTbsReqSetTribeMsgPopup()
    {
    }

    ~CTbsReqSetTribeMsgPopup() { }
    CTbsReqSetTribeMsgPopup(const string&  strTribeId, const uint8_t&  chMsgPopup)
    {
        m_tribeId = strTribeId;
        m_msgPopup = chMsgPopup;
    }
    CTbsReqSetTribeMsgPopup&  operator=( const CTbsReqSetTribeMsgPopup&  cTbsReqSetTribeMsgPopup )
    {
        m_tribeId = cTbsReqSetTribeMsgPopup.m_tribeId;
        m_msgPopup = cTbsReqSetTribeMsgPopup.m_msgPopup;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqSetTribeMsgPopup::Size() const
{
    uint32_t nSize = 8;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbsRspSetTribeMsgPopup : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_SET_TRIBE_MSG_POPUP
    };
    CTbsRspSetTribeMsgPopup()
    {
    }

    ~CTbsRspSetTribeMsgPopup() { }
    CTbsRspSetTribeMsgPopup(const uint8_t&  chRetcode, const string&  strTribeId, const uint8_t&  chMsgPopup)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_msgPopup = chMsgPopup;
    }
    CTbsRspSetTribeMsgPopup&  operator=( const CTbsRspSetTribeMsgPopup&  cTbsRspSetTribeMsgPopup )
    {
        m_retcode = cTbsRspSetTribeMsgPopup.m_retcode;
        m_tribeId = cTbsRspSetTribeMsgPopup.m_tribeId;
        m_msgPopup = cTbsRspSetTribeMsgPopup.m_msgPopup;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspSetTribeMsgPopup::Size() const
{
    uint32_t nSize = 10;
    nSize += m_tribeId.length();
    return nSize;
}

class CTbsReqTransferTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_REQ_TRANSFER_TRIBE
    };
    CTbsReqTransferTribe()
    {
    }

    ~CTbsReqTransferTribe() { }
    CTbsReqTransferTribe(const string&  strTribeId, const string&  strTransferId)
    {
        m_tribeId = strTribeId;
        m_transferId = strTransferId;
    }
    CTbsReqTransferTribe&  operator=( const CTbsReqTransferTribe&  cTbsReqTransferTribe )
    {
        m_tribeId = cTbsReqTransferTribe.m_tribeId;
        m_transferId = cTbsReqTransferTribe.m_transferId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsReqTransferTribe::Size() const
{
    uint32_t nSize = 11;
    nSize += m_tribeId.length();
    nSize += m_transferId.length();
    return nSize;
}

class CTbsRspTransferTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_RSP_TRANSFER_TRIBE
    };
    CTbsRspTransferTribe()
    {
    }

    ~CTbsRspTransferTribe() { }
    CTbsRspTransferTribe(const uint8_t&  chRetcode, const string&  strTribeId, const string&  strAltTribeId, const string&  strRctOwnerId)
    {
        m_retcode = chRetcode;
        m_tribeId = strTribeId;
        m_altTribeId = strAltTribeId;
        m_rctOwnerId = strRctOwnerId;
    }
    CTbsRspTransferTribe&  operator=( const CTbsRspTransferTribe&  cTbsRspTransferTribe )
    {
        m_retcode = cTbsRspTransferTribe.m_retcode;
        m_tribeId = cTbsRspTransferTribe.m_tribeId;
        m_altTribeId = cTbsRspTransferTribe.m_altTribeId;
        m_rctOwnerId = cTbsRspTransferTribe.m_rctOwnerId;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsRspTransferTribe::Size() const
{
    uint32_t nSize = 18;
    nSize += m_tribeId.length();
    nSize += m_altTribeId.length();
    nSize += m_rctOwnerId.length();
    return nSize;
}

class CTbsNtfTransferTribeSys : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_NTF_TRANSFER_TRIBE_SYS
    };
    CTbsNtfTransferTribeSys()
    {
    }

    ~CTbsNtfTransferTribeSys() { }
    CTbsNtfTransferTribeSys(const string&  strOwner, const string&  strTribeId, const string&  strTribeInfo)
    {
        m_owner = strOwner;
        m_tribeId = strTribeId;
        m_tribeInfo = strTribeInfo;
    }
    CTbsNtfTransferTribeSys&  operator=( const CTbsNtfTransferTribeSys&  cTbsNtfTransferTribeSys )
    {
        m_owner = cTbsNtfTransferTribeSys.m_owner;
        m_tribeId = cTbsNtfTransferTribeSys.m_tribeId;
        m_tribeInfo = cTbsNtfTransferTribeSys.m_tribeInfo;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsNtfTransferTribeSys::Size() const
{
    uint32_t nSize = 16;
    nSize += m_owner.length();
    nSize += m_tribeId.length();
    nSize += m_tribeInfo.length();
    return nSize;
}

class CTbsNtfTransferTribe : public CPackData
{
public:
    enum
    {
        CMD_ID = TBS_NTF_TRANSFER_TRIBE
    };
    CTbsNtfTransferTribe()
    {
    }

    ~CTbsNtfTransferTribe() { }
    CTbsNtfTransferTribe(const string&  strTribeId, const string&  strOccupiedTribeId, const string&  strTribeInfo)
    {
        m_tribeId = strTribeId;
        m_occupiedTribeId = strOccupiedTribeId;
        m_tribeInfo = strTribeInfo;
    }
    CTbsNtfTransferTribe&  operator=( const CTbsNtfTransferTribe&  cTbsNtfTransferTribe )
    {
        m_tribeId = cTbsNtfTransferTribe.m_tribeId;
        m_occupiedTribeId = cTbsNtfTransferTribe.m_occupiedTribeId;
        m_tribeInfo = cTbsNtfTransferTribe.m_tribeInfo;
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
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CTbsNtfTransferTribe::Size() const
{
    uint32_t nSize = 16;
    nSize += m_tribeId.length();
    nSize += m_occupiedTribeId.length();
    nSize += m_tribeInfo.length();
    return nSize;
}

#endif
