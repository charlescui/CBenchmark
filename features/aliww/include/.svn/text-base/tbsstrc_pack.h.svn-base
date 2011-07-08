/*---------------------------------------------------------------------------
// Filename:        tbsstrc_pack.h
// Date:            2011-01-30 12:50:13
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __TBSSTRC_PACK_H__
#define __TBSSTRC_PACK_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"
#include "const_macro.h"

using namespace std;

struct SGroupInfo
{
public:
    SGroupInfo()
    {
    }

    ~SGroupInfo() { }
    SGroupInfo(const int64_t&  llGroupId, const int64_t&  llParentId, const string&  strGroupName)
    {
        m_groupId = llGroupId;
        m_parentId = llParentId;
        m_groupName = strGroupName;
    }
    SGroupInfo&  operator=( const SGroupInfo&  sGroupInfo )
    {
        m_groupId = sGroupInfo.m_groupId;
        m_parentId = sGroupInfo.m_parentId;
        m_groupName = sGroupInfo.m_groupName;
        return *this;
    }

    int64_t m_groupId;
    int64_t m_parentId;
    string m_groupName;

public:
    uint32_t Size() const;
};

inline uint32_t SGroupInfo::Size() const
{
    uint32_t nSize = 24;
    nSize += m_groupName.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SGroupInfo&  sGroupInfo );
CPackData& operator>> ( CPackData& cPackData, SGroupInfo&  sGroupInfo );

struct SMemberGroup
{
public:
    SMemberGroup()
    {
    }

    ~SMemberGroup() { }
    SMemberGroup(const string&  strTribeId, const VECTOR< SGroupInfo >&  vecGroupList, const uint32_t&  dwGroupStamp)
    {
        m_tribeId = strTribeId;
        m_groupList = vecGroupList;
        m_groupStamp = dwGroupStamp;
    }
    SMemberGroup&  operator=( const SMemberGroup&  sMemberGroup )
    {
        m_tribeId = sMemberGroup.m_tribeId;
        m_groupList = sMemberGroup.m_groupList;
        m_groupStamp = sMemberGroup.m_groupStamp;
        return *this;
    }

    string m_tribeId;
    VECTOR< SGroupInfo > m_groupList;
    uint32_t m_groupStamp;

public:
    uint32_t Size() const;
};

inline uint32_t SMemberGroup::Size() const
{
    uint32_t nSize = 17;
    nSize += m_tribeId.length();
    for(uint32_t i = 0; i < m_groupList.size(); i++)
    {
        nSize += m_groupList[i].Size();
    }
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SMemberGroup&  sMemberGroup );
CPackData& operator>> ( CPackData& cPackData, SMemberGroup&  sMemberGroup );

struct STribeInfo
{
public:
    STribeInfo() : m_maxMembers(300),
            m_webTribeId("")
    {
    }

    ~STribeInfo() { }
    STribeInfo(const string&  strTribeId, const string&  strTribeName, const string&  strMasterid, const uint8_t&  chClass, const string&  strDescribe, const string&  strBulletin, const uint8_t&  chCheckMode, const string&  strPassword, const string&  strKeyword, const uint8_t&  chAllowVisitor, const uint8_t&  chForbidSearch, const string&  strExtSign, const uint8_t&  chOpenTribe, const uint32_t&  dwMaxMembers= 300, const string&  strWebTribeId= "")
    {
        m_tribeId = strTribeId;
        m_tribeName = strTribeName;
        m_masterid = strMasterid;
        m_class = chClass;
        m_describe = strDescribe;
        m_bulletin = strBulletin;
        m_checkMode = chCheckMode;
        m_password = strPassword;
        m_keyword = strKeyword;
        m_allowVisitor = chAllowVisitor;
        m_forbidSearch = chForbidSearch;
        m_extSign = strExtSign;
        m_openTribe = chOpenTribe;
        m_maxMembers = dwMaxMembers;
        m_webTribeId = strWebTribeId;
    }
    STribeInfo&  operator=( const STribeInfo&  sTribeInfo )
    {
        m_tribeId = sTribeInfo.m_tribeId;
        m_tribeName = sTribeInfo.m_tribeName;
        m_masterid = sTribeInfo.m_masterid;
        m_class = sTribeInfo.m_class;
        m_describe = sTribeInfo.m_describe;
        m_bulletin = sTribeInfo.m_bulletin;
        m_checkMode = sTribeInfo.m_checkMode;
        m_password = sTribeInfo.m_password;
        m_keyword = sTribeInfo.m_keyword;
        m_allowVisitor = sTribeInfo.m_allowVisitor;
        m_forbidSearch = sTribeInfo.m_forbidSearch;
        m_extSign = sTribeInfo.m_extSign;
        m_openTribe = sTribeInfo.m_openTribe;
        m_maxMembers = sTribeInfo.m_maxMembers;
        m_webTribeId = sTribeInfo.m_webTribeId;
        return *this;
    }

    string m_tribeId;
    string m_tribeName;
    string m_masterid;
    uint8_t m_class;
    string m_describe;
    string m_bulletin;
    uint8_t m_checkMode;
    string m_password;
    string m_keyword;
    uint8_t m_allowVisitor;
    uint8_t m_forbidSearch;
    string m_extSign;
    uint8_t m_openTribe;
    uint32_t m_maxMembers;
    string m_webTribeId;

public:
    uint32_t Size() const;
};

inline uint32_t STribeInfo::Size() const
{
    uint32_t nSize = 61;
    nSize += m_tribeId.length();
    nSize += m_tribeName.length();
    nSize += m_masterid.length();
    nSize += m_describe.length();
    nSize += m_bulletin.length();
    nSize += m_password.length();
    nSize += m_keyword.length();
    nSize += m_extSign.length();
    nSize += m_webTribeId.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const STribeInfo&  sTribeInfo );
CPackData& operator>> ( CPackData& cPackData, STribeInfo&  sTribeInfo );

struct STribeExtInfo
{
public:
    ~STribeExtInfo() { }
    STribeExtInfo(const uint8_t&  chTribeLevel= 0, const uint32_t&  dwActiveDegree= 0, const string&  strTitle= "", const string&  strUrl= "", const uint8_t&  chMsgPopup= 0)
    {
        m_tribeLevel = chTribeLevel;
        m_activeDegree = dwActiveDegree;
        m_title = strTitle;
        m_url = strUrl;
        m_msgPopup = chMsgPopup;
    }
    STribeExtInfo&  operator=( const STribeExtInfo&  sTribeExtInfo )
    {
        m_tribeLevel = sTribeExtInfo.m_tribeLevel;
        m_activeDegree = sTribeExtInfo.m_activeDegree;
        m_title = sTribeExtInfo.m_title;
        m_url = sTribeExtInfo.m_url;
        m_msgPopup = sTribeExtInfo.m_msgPopup;
        return *this;
    }

    uint8_t m_tribeLevel;
    uint32_t m_activeDegree;
    string m_title;
    string m_url;
    uint8_t m_msgPopup;

public:
    uint32_t Size() const;
};

inline uint32_t STribeExtInfo::Size() const
{
    uint32_t nSize = 20;
    nSize += m_title.length();
    nSize += m_url.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const STribeExtInfo&  sTribeExtInfo );
CPackData& operator>> ( CPackData& cPackData, STribeExtInfo&  sTribeExtInfo );

struct STmStatus
{
public:
    STmStatus() : m_name("")
    {
    }

    ~STmStatus() { }
    STmStatus(const string&  strMemberId, const uint8_t&  chBasicSts, const uint8_t&  chPredefSts, const uint8_t&  chTribeLevel, const string&  strName= "")
    {
        m_memberId = strMemberId;
        m_basicSts = chBasicSts;
        m_predefSts = chPredefSts;
        m_tribeLevel = chTribeLevel;
        m_name = strName;
    }
    STmStatus&  operator=( const STmStatus&  sTmStatus )
    {
        m_memberId = sTmStatus.m_memberId;
        m_basicSts = sTmStatus.m_basicSts;
        m_predefSts = sTmStatus.m_predefSts;
        m_tribeLevel = sTmStatus.m_tribeLevel;
        m_name = sTmStatus.m_name;
        return *this;
    }

    string m_memberId;
    uint8_t m_basicSts;
    uint8_t m_predefSts;
    uint8_t m_tribeLevel;
    string m_name;

public:
    uint32_t Size() const;
};

inline uint32_t STmStatus::Size() const
{
    uint32_t nSize = 17;
    nSize += m_memberId.length();
    nSize += m_name.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const STmStatus&  sTmStatus );
CPackData& operator>> ( CPackData& cPackData, STmStatus&  sTmStatus );

struct STmMsgid
{
public:
    STmMsgid()
    {
    }

    ~STmMsgid() { }
    STmMsgid(const string&  strMemberId, const uint8_t&  chBasicSts, const uint8_t&  chPredefSts, const uint32_t&  dwLastMsgid)
    {
        m_memberId = strMemberId;
        m_basicSts = chBasicSts;
        m_predefSts = chPredefSts;
        m_lastMsgid = dwLastMsgid;
    }
    STmMsgid&  operator=( const STmMsgid&  sTmMsgid )
    {
        m_memberId = sTmMsgid.m_memberId;
        m_basicSts = sTmMsgid.m_basicSts;
        m_predefSts = sTmMsgid.m_predefSts;
        m_lastMsgid = sTmMsgid.m_lastMsgid;
        return *this;
    }

    string m_memberId;
    uint8_t m_basicSts;
    uint8_t m_predefSts;
    uint32_t m_lastMsgid;

public:
    uint32_t Size() const;
};

inline uint32_t STmMsgid::Size() const
{
    uint32_t nSize = 15;
    nSize += m_memberId.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const STmMsgid&  sTmMsgid );
CPackData& operator>> ( CPackData& cPackData, STmMsgid&  sTmMsgid );

struct STribeBlack
{
public:
    STribeBlack()
    {
    }

    ~STribeBlack() { }
    STribeBlack(const string&  strUserId, const string&  strManagerId, const string&  strAddDate, const string&  strRemark)
    {
        m_userId = strUserId;
        m_managerId = strManagerId;
        m_addDate = strAddDate;
        m_remark = strRemark;
    }
    STribeBlack&  operator=( const STribeBlack&  sTribeBlack )
    {
        m_userId = sTribeBlack.m_userId;
        m_managerId = sTribeBlack.m_managerId;
        m_addDate = sTribeBlack.m_addDate;
        m_remark = sTribeBlack.m_remark;
        return *this;
    }

    string m_userId;
    string m_managerId;
    string m_addDate;
    string m_remark;

public:
    uint32_t Size() const;
};

inline uint32_t STribeBlack::Size() const
{
    uint32_t nSize = 21;
    nSize += m_userId.length();
    nSize += m_managerId.length();
    nSize += m_addDate.length();
    nSize += m_remark.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const STribeBlack&  sTribeBlack );
CPackData& operator>> ( CPackData& cPackData, STribeBlack&  sTribeBlack );

struct STmInfo
{
public:
    STmInfo()
    {
    }

    ~STmInfo() { }
    STmInfo(const string&  strMemberId, const string&  strName, const uint8_t&  chBasicSts, const uint8_t&  chPredefSts, const uint8_t&  chTribeLevel, const uint8_t&  chActiveLevel, const uint32_t&  dwLastmsgTime, const int64_t&  llGroupId, const uint8_t&  chMobileBindflag, const string&  strMobileNo)
    {
        m_memberId = strMemberId;
        m_name = strName;
        m_basicSts = chBasicSts;
        m_predefSts = chPredefSts;
        m_tribeLevel = chTribeLevel;
        m_activeLevel = chActiveLevel;
        m_lastmsgTime = dwLastmsgTime;
        m_groupId = llGroupId;
        m_mobileBindflag = chMobileBindflag;
        m_mobileNo = strMobileNo;
    }
    STmInfo&  operator=( const STmInfo&  sTmInfo )
    {
        m_memberId = sTmInfo.m_memberId;
        m_name = sTmInfo.m_name;
        m_basicSts = sTmInfo.m_basicSts;
        m_predefSts = sTmInfo.m_predefSts;
        m_tribeLevel = sTmInfo.m_tribeLevel;
        m_activeLevel = sTmInfo.m_activeLevel;
        m_lastmsgTime = sTmInfo.m_lastmsgTime;
        m_groupId = sTmInfo.m_groupId;
        m_mobileBindflag = sTmInfo.m_mobileBindflag;
        m_mobileNo = sTmInfo.m_mobileNo;
        return *this;
    }

    string m_memberId;
    string m_name;
    uint8_t m_basicSts;
    uint8_t m_predefSts;
    uint8_t m_tribeLevel;
    uint8_t m_activeLevel;
    uint32_t m_lastmsgTime;
    int64_t m_groupId;
    uint8_t m_mobileBindflag;
    string m_mobileNo;

public:
    uint32_t Size() const;
};

inline uint32_t STmInfo::Size() const
{
    uint32_t nSize = 40;
    nSize += m_memberId.length();
    nSize += m_name.length();
    nSize += m_mobileNo.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const STmInfo&  sTmInfo );
CPackData& operator>> ( CPackData& cPackData, STmInfo&  sTmInfo );

struct STribeMsg
{
public:
    STribeMsg()
    {
    }

    ~STribeMsg() { }
    STribeMsg(const string&  strFromId, const uint8_t&  chMsgType, const string&  strMessage, const uint32_t&  dwSendTime)
    {
        m_fromId = strFromId;
        m_msgType = chMsgType;
        m_message = strMessage;
        m_sendTime = dwSendTime;
    }
    STribeMsg&  operator=( const STribeMsg&  sTribeMsg )
    {
        m_fromId = sTribeMsg.m_fromId;
        m_msgType = sTribeMsg.m_msgType;
        m_message = sTribeMsg.m_message;
        m_sendTime = sTribeMsg.m_sendTime;
        return *this;
    }

    string m_fromId;
    uint8_t m_msgType;
    string m_message;
    uint32_t m_sendTime;

public:
    uint32_t Size() const;
};

inline uint32_t STribeMsg::Size() const
{
    uint32_t nSize = 18;
    nSize += m_fromId.length();
    nSize += m_message.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const STribeMsg&  sTribeMsg );
CPackData& operator>> ( CPackData& cPackData, STribeMsg&  sTribeMsg );

struct STribeSysmsg
{
public:
    STribeSysmsg() : m_format(0),
            m_title("系统提示"),
            m_stayTime(10000),
            m_showBottom(1)
    {
    }

    ~STribeSysmsg() { }
    STribeSysmsg(const uint8_t&  chMsgType, const string&  strMessage, const uint32_t&  dwSendTime, const uint8_t&  chFormat, const string&  strContent, const string&  strTitle= "系统提示", const uint32_t&  dwStayTime= 10000, const int32_t&  lShowBottom= 1)
    {
        m_msgType = chMsgType;
        m_message = strMessage;
        m_sendTime = dwSendTime;
        m_format = chFormat;
        m_content = strContent;
        m_title = strTitle;
        m_stayTime = dwStayTime;
        m_showBottom = lShowBottom;
    }
    STribeSysmsg&  operator=( const STribeSysmsg&  sTribeSysmsg )
    {
        m_msgType = sTribeSysmsg.m_msgType;
        m_message = sTribeSysmsg.m_message;
        m_sendTime = sTribeSysmsg.m_sendTime;
        m_format = sTribeSysmsg.m_format;
        m_content = sTribeSysmsg.m_content;
        m_title = sTribeSysmsg.m_title;
        m_stayTime = sTribeSysmsg.m_stayTime;
        m_showBottom = sTribeSysmsg.m_showBottom;
        return *this;
    }

    uint8_t m_msgType;
    string m_message;
    uint32_t m_sendTime;
    uint8_t m_format;
    string m_content;
    string m_title;
    uint32_t m_stayTime;
    int32_t m_showBottom;

public:
    uint32_t Size() const;
};

inline uint32_t STribeSysmsg::Size() const
{
    uint32_t nSize = 35;
    nSize += m_message.length();
    nSize += m_content.length();
    nSize += m_title.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const STribeSysmsg&  sTribeSysmsg );
CPackData& operator>> ( CPackData& cPackData, STribeSysmsg&  sTribeSysmsg );

struct SWebGroup
{
public:
    SWebGroup()
    {
    }

    ~SWebGroup() { }
    SWebGroup(const uint32_t&  dwGroupId, const string&  strGroupName, const string&  strServiceId, const string&  strSiteId, const string&  strWebId)
    {
        m_groupId = dwGroupId;
        m_groupName = strGroupName;
        m_serviceId = strServiceId;
        m_siteId = strSiteId;
        m_webId = strWebId;
    }
    SWebGroup&  operator=( const SWebGroup&  sWebGroup )
    {
        m_groupId = sWebGroup.m_groupId;
        m_groupName = sWebGroup.m_groupName;
        m_serviceId = sWebGroup.m_serviceId;
        m_siteId = sWebGroup.m_siteId;
        m_webId = sWebGroup.m_webId;
        return *this;
    }

    uint32_t m_groupId;
    string m_groupName;
    string m_serviceId;
    string m_siteId;
    string m_webId;

public:
    uint32_t Size() const;
};

inline uint32_t SWebGroup::Size() const
{
    uint32_t nSize = 26;
    nSize += m_groupName.length();
    nSize += m_serviceId.length();
    nSize += m_siteId.length();
    nSize += m_webId.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SWebGroup&  sWebGroup );
CPackData& operator>> ( CPackData& cPackData, SWebGroup&  sWebGroup );

struct STribeId
{
public:
    STribeId() : m_groupId(0),
            m_msgPopup(0)
    {
    }

    ~STribeId() { }
    STribeId(const string&  strTribeId, const string&  strTribeName, const uint8_t&  chTribeLevel, const uint8_t&  chTribeStatus, const string&  strExtSign, const uint32_t&  dwGroupStamp, const uint8_t&  chOpenTribe, const uint32_t&  dwGroupId= 0, const uint8_t&  chMsgPopup= 0)
    {
        m_tribeId = strTribeId;
        m_tribeName = strTribeName;
        m_tribeLevel = chTribeLevel;
        m_tribeStatus = chTribeStatus;
        m_extSign = strExtSign;
        m_groupStamp = dwGroupStamp;
        m_openTribe = chOpenTribe;
        m_groupId = dwGroupId;
        m_msgPopup = chMsgPopup;
    }
    STribeId&  operator=( const STribeId&  sTribeId )
    {
        m_tribeId = sTribeId.m_tribeId;
        m_tribeName = sTribeId.m_tribeName;
        m_tribeLevel = sTribeId.m_tribeLevel;
        m_tribeStatus = sTribeId.m_tribeStatus;
        m_extSign = sTribeId.m_extSign;
        m_groupStamp = sTribeId.m_groupStamp;
        m_openTribe = sTribeId.m_openTribe;
        m_groupId = sTribeId.m_groupId;
        m_msgPopup = sTribeId.m_msgPopup;
        return *this;
    }

    string m_tribeId;
    string m_tribeName;
    uint8_t m_tribeLevel;
    uint8_t m_tribeStatus;
    string m_extSign;
    uint32_t m_groupStamp;
    uint8_t m_openTribe;
    uint32_t m_groupId;
    uint8_t m_msgPopup;

public:
    uint32_t Size() const;
};

inline uint32_t STribeId::Size() const
{
    uint32_t nSize = 34;
    nSize += m_tribeId.length();
    nSize += m_tribeName.length();
    nSize += m_extSign.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const STribeId&  sTribeId );
CPackData& operator>> ( CPackData& cPackData, STribeId&  sTribeId );

#endif
