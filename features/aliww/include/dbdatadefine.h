// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `dbdatadefine.ice'

#ifndef __dbdatadefine_h__
#define __dbdatadefine_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/BuiltinSequences.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 302
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

namespace AliIMDBBase
{

struct SICEMemberInfo
{
    ::std::string memberId;
    ::std::string password;
    ::std::string status;
    ::std::string realname;
    ::std::string company;
    ::std::string jobtitle;
    ::Ice::Int memberlevel;
    ::Ice::Int industry;
    ::Ice::Int area;
    ::std::string penName;
    ::Ice::Int phoneStatus;
    ::Ice::Byte title;
    ::std::string country;

    bool operator==(const SICEMemberInfo&) const;
    bool operator!=(const SICEMemberInfo&) const;
    bool operator<(const SICEMemberInfo&) const;
    bool operator<=(const SICEMemberInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEMemberInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEMemberInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SExICESysMessage
{
    ::Ice::Int msgId;
    ::Ice::Int type;
    ::std::string expireTime;
    ::Ice::Int industry;
    ::Ice::Int area;
    ::Ice::Int rank;
    ::std::string message;
    ::std::string site;

    bool operator==(const SExICESysMessage&) const;
    bool operator!=(const SExICESysMessage&) const;
    bool operator<(const SExICESysMessage&) const;
    bool operator<=(const SExICESysMessage& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SExICESysMessage& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SExICESysMessage& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICESysMessage
{
    ::Ice::Int msgId;
    ::Ice::Int type;
    ::std::string expireTime;
    ::Ice::Int industry;
    ::Ice::Int area;
    ::Ice::Int rank;
    ::std::string message;

    bool operator==(const SICESysMessage&) const;
    bool operator!=(const SICESysMessage&) const;
    bool operator<(const SICESysMessage&) const;
    bool operator<=(const SICESysMessage& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICESysMessage& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICESysMessage& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICEVersion
{
    ::std::string version;
    ::Ice::Byte status;
    ::std::string remark;

    bool operator==(const SICEVersion&) const;
    bool operator!=(const SICEVersion&) const;
    bool operator<(const SICEVersion&) const;
    bool operator<=(const SICEVersion& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEVersion& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEVersion& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICEUserInfo
{
    ::std::string uid;
    ::Ice::Int picId;
    ::Ice::Int sysMsgId;
    ::std::string lastLoginTime;
    ::Ice::Int strangerMsgCount;
    ::Ice::Int loginCount;
    ::Ice::Int onlineTimes;
    ::Ice::Int addContactCount;
    ::Ice::Int addTribeCount;
    ::Ice::Int activeDegree;
    ::Ice::Int groupTimes;
    ::Ice::Int contactTimes;
    ::Ice::Int blacklistTimes;
    ::Ice::Int reverseBlacklistTimes;
    ::Ice::Int offlinemsgTimes;
    ::Ice::Int addContactVerify;
    ::Ice::Int sendMsgVerify;
    ::Ice::Int userStatus;
    ::Ice::Int userLevel;
    ::Ice::Float newActDgree;
    ::Ice::Int gencontacttimes;
    ::Ice::Float rewardActDegree;
    ::Ice::Float onlineActDegree;
    ::Ice::Int createTime;
    ::Ice::Int accounttype;

    bool operator==(const SICEUserInfo&) const;
    bool operator!=(const SICEUserInfo&) const;
    bool operator<(const SICEUserInfo&) const;
    bool operator<=(const SICEUserInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEUserInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEUserInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICEUserInfo2
{
    ::std::string uid;
    ::Ice::Int picId;
    ::Ice::Int sysMsgId;
    ::std::string lastLoginTime;
    ::Ice::Int strangerMsgCount;
    ::Ice::Int loginCount;
    ::Ice::Int onlineTimes;
    ::Ice::Int addContactCount;
    ::Ice::Int addTribeCount;
    ::Ice::Int activeDegree;
    ::Ice::Int groupTimes;
    ::Ice::Int contactTimes;
    ::Ice::Int blacklistTimes;
    ::Ice::Int reverseBlacklistTimes;
    ::Ice::Int offlinemsgTimes;
    ::Ice::Int addContactVerify;
    ::Ice::Int sendMsgVerify;
    ::Ice::Int userStatus;
    ::Ice::Int userLevel;
    ::Ice::Float newActDgree;
    ::Ice::Int gencontacttimes;
    ::Ice::Float rewardActDegree;
    ::Ice::Float onlineActDegree;
    ::Ice::Int createTime;
    ::Ice::Int accounttype;
    ::std::string userfunctions;

    bool operator==(const SICEUserInfo2&) const;
    bool operator!=(const SICEUserInfo2&) const;
    bool operator<(const SICEUserInfo2&) const;
    bool operator<=(const SICEUserInfo2& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEUserInfo2& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEUserInfo2& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICEUserInfoEx
{
    ::std::string uid;
    ::Ice::Int picId;
    ::Ice::Int sysMsgId;
    ::Ice::Int lastLoginTime;
    ::Ice::Int loginCount;
    ::Ice::Int strangerMsgCount;
    ::Ice::Int addContactCount;
    ::Ice::Int addTribeCount;
    ::Ice::Int groupTimes;
    ::Ice::Int contactTimes;
    ::Ice::Int blacklistTimes;
    ::Ice::Int reverseBlacklistTimes;
    ::Ice::Int offlinemsgTimes;
    ::Ice::Int gencontacttimes;
    ::Ice::Int toolprofiletimes;
    ::Ice::Int addContactVerify;
    ::Ice::Int sendMsgVerify;
    ::Ice::Int userStatus;
    ::Ice::Int userLevel;
    ::Ice::Float totalActDegree;
    ::Ice::Int createTime;
    ::Ice::Int accounttype;
    ::std::string loginIp;
    ::std::string userfunctions;

    bool operator==(const SICEUserInfoEx&) const;
    bool operator!=(const SICEUserInfoEx&) const;
    bool operator<(const SICEUserInfoEx&) const;
    bool operator<=(const SICEUserInfoEx& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEUserInfoEx& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEUserInfoEx& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICEUserInfoNew
{
    ::std::string uid;
    ::Ice::Int picId;
    ::Ice::Int sysMsgId;
    ::std::string lastLoginTime;
    ::Ice::Int strangerMsgCount;
    ::Ice::Int loginCount;
    ::Ice::Int onlineTimes;
    ::Ice::Int addContactCount;
    ::Ice::Int addTribeCount;
    ::Ice::Int activeDegree;
    ::Ice::Int groupTimes;
    ::Ice::Int contactTimes;
    ::Ice::Int blacklistTimes;
    ::Ice::Int reverseBlacklistTimes;
    ::Ice::Int offlinemsgTimes;
    ::Ice::Int addContactVerify;
    ::Ice::Int sendMsgVerify;
    ::Ice::Int userStatus;
    ::Ice::Int userLevel;
    ::Ice::Float newActDgree;
    ::Ice::Int gencontacttimes;
    ::Ice::Float rewardActDegree;
    ::Ice::Float onlineActDegree;
    ::Ice::Int createTime;
    ::Ice::Int accounttype;
    ::Ice::Int reqAddContactCount;

    bool operator==(const SICEUserInfoNew&) const;
    bool operator!=(const SICEUserInfoNew&) const;
    bool operator<(const SICEUserInfoNew&) const;
    bool operator<=(const SICEUserInfoNew& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEUserInfoNew& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEUserInfoNew& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICEUserInfo2New
{
    ::std::string uid;
    ::Ice::Int picId;
    ::Ice::Int sysMsgId;
    ::std::string lastLoginTime;
    ::Ice::Int strangerMsgCount;
    ::Ice::Int loginCount;
    ::Ice::Int onlineTimes;
    ::Ice::Int addContactCount;
    ::Ice::Int addTribeCount;
    ::Ice::Int activeDegree;
    ::Ice::Int groupTimes;
    ::Ice::Int contactTimes;
    ::Ice::Int blacklistTimes;
    ::Ice::Int reverseBlacklistTimes;
    ::Ice::Int offlinemsgTimes;
    ::Ice::Int addContactVerify;
    ::Ice::Int sendMsgVerify;
    ::Ice::Int userStatus;
    ::Ice::Int userLevel;
    ::Ice::Float newActDgree;
    ::Ice::Int gencontacttimes;
    ::Ice::Float rewardActDegree;
    ::Ice::Float onlineActDegree;
    ::Ice::Int createTime;
    ::Ice::Int accounttype;
    ::std::string userfunctions;
    ::Ice::Int reqAddContactCount;

    bool operator==(const SICEUserInfo2New&) const;
    bool operator!=(const SICEUserInfo2New&) const;
    bool operator<(const SICEUserInfo2New&) const;
    bool operator<=(const SICEUserInfo2New& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEUserInfo2New& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEUserInfo2New& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICEUserInfoExNew
{
    ::std::string uid;
    ::Ice::Int picId;
    ::Ice::Int sysMsgId;
    ::Ice::Int lastLoginTime;
    ::Ice::Int loginCount;
    ::Ice::Int strangerMsgCount;
    ::Ice::Int addContactCount;
    ::Ice::Int addTribeCount;
    ::Ice::Int groupTimes;
    ::Ice::Int contactTimes;
    ::Ice::Int blacklistTimes;
    ::Ice::Int reverseBlacklistTimes;
    ::Ice::Int offlinemsgTimes;
    ::Ice::Int gencontacttimes;
    ::Ice::Int toolprofiletimes;
    ::Ice::Int addContactVerify;
    ::Ice::Int sendMsgVerify;
    ::Ice::Int userStatus;
    ::Ice::Int userLevel;
    ::Ice::Float totalActDegree;
    ::Ice::Int createTime;
    ::Ice::Int accounttype;
    ::std::string loginIp;
    ::std::string userfunctions;
    ::Ice::Int reqAddContactCount;

    bool operator==(const SICEUserInfoExNew&) const;
    bool operator!=(const SICEUserInfoExNew&) const;
    bool operator<(const SICEUserInfoExNew&) const;
    bool operator<=(const SICEUserInfoExNew& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEUserInfoExNew& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEUserInfoExNew& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICEUserInfoExNew2
{
    ::std::string uid;
    ::Ice::Int picId;
    ::Ice::Int sysMsgId;
    ::Ice::Int lastLoginTime;
    ::Ice::Int loginCount;
    ::Ice::Int strangerMsgCount;
    ::Ice::Int addContactCount;
    ::Ice::Int addTribeCount;
    ::Ice::Int groupTimes;
    ::Ice::Int contactTimes;
    ::Ice::Int blacklistTimes;
    ::Ice::Int reverseBlacklistTimes;
    ::Ice::Int offlinemsgTimes;
    ::Ice::Int gencontacttimes;
    ::Ice::Int toolprofiletimes;
    ::Ice::Int addContactVerify;
    ::Ice::Int sendMsgVerify;
    ::Ice::Int userStatus;
    ::Ice::Int userLevel;
    ::Ice::Float totalActDegree;
    ::Ice::Int createTime;
    ::Ice::Int accounttype;
    ::std::string loginIp;
    ::std::string userfunctions;
    ::Ice::Int reqAddContactCount;
    ::Ice::Int userValue;

    bool operator==(const SICEUserInfoExNew2&) const;
    bool operator!=(const SICEUserInfoExNew2&) const;
    bool operator<(const SICEUserInfoExNew2&) const;
    bool operator<=(const SICEUserInfoExNew2& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEUserInfoExNew2& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEUserInfoExNew2& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::map< ::Ice::Int, ::Ice::Int> RIGHTTABLE;

class __U__RIGHTTABLE { };
void __write(::IceInternal::BasicStream*, const RIGHTTABLE&, __U__RIGHTTABLE);
void __read(::IceInternal::BasicStream*, RIGHTTABLE&, __U__RIGHTTABLE);

struct SICEUserInfoExNew3
{
    ::std::string uid;
    ::Ice::Int picId;
    ::Ice::Int sysMsgId;
    ::Ice::Int lastLoginTime;
    ::Ice::Int loginCount;
    ::Ice::Int groupTimes;
    ::Ice::Int contactTimes;
    ::Ice::Int blacklistTimes;
    ::Ice::Int reverseBlacklistTimes;
    ::Ice::Int offlinemsgTimes;
    ::Ice::Int gencontacttimes;
    ::Ice::Int toolprofiletimes;
    ::Ice::Int addContactVerify;
    ::Ice::Int sendMsgVerify;
    ::Ice::Int userStatus;
    ::Ice::Int userLevel;
    ::Ice::Float totalActDegree;
    ::Ice::Int createTime;
    ::Ice::Int accounttype;
    ::std::string loginIp;
    ::std::string userfunctions;
    ::Ice::Int userValue;
    ::AliIMDBBase::RIGHTTABLE rightMap;

    bool operator==(const SICEUserInfoExNew3&) const;
    bool operator!=(const SICEUserInfoExNew3&) const;
    bool operator<(const SICEUserInfoExNew3&) const;
    bool operator<=(const SICEUserInfoExNew3& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEUserInfoExNew3& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEUserInfoExNew3& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICEUserInfoExNew4
{
    ::std::string uid;
    ::Ice::Int picId;
    ::Ice::Int sysMsgId;
    ::Ice::Int lastLoginTime;
    ::Ice::Int loginCount;
    ::Ice::Int strangerMsgCount;
    ::Ice::Int addContactCount;
    ::Ice::Int addTribeCount;
    ::Ice::Int groupTimes;
    ::Ice::Int contactTimes;
    ::Ice::Int blacklistTimes;
    ::Ice::Int reverseBlacklistTimes;
    ::Ice::Int offlinemsgTimes;
    ::Ice::Int gencontacttimes;
    ::Ice::Int toolprofiletimes;
    ::Ice::Int addContactVerify;
    ::Ice::Int sendMsgVerify;
    ::Ice::Int userStatus;
    ::Ice::Int userLevel;
    ::Ice::Float totalActDegree;
    ::Ice::Int createTime;
    ::Ice::Int accounttype;
    ::std::string loginIp;
    ::std::string userfunctions;
    ::Ice::Int userValue;
    ::AliIMDBBase::RIGHTTABLE rightMap;
    ::std::string question;
    ::std::string answer;

    bool operator==(const SICEUserInfoExNew4&) const;
    bool operator!=(const SICEUserInfoExNew4&) const;
    bool operator<(const SICEUserInfoExNew4&) const;
    bool operator<=(const SICEUserInfoExNew4& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEUserInfoExNew4& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEUserInfoExNew4& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICEGroupInfo
{
    ::Ice::Int groupId;
    ::std::string groupName;

    bool operator==(const SICEGroupInfo&) const;
    bool operator!=(const SICEGroupInfo&) const;
    bool operator<(const SICEGroupInfo&) const;
    bool operator<=(const SICEGroupInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEGroupInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEGroupInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICEGroupInfoEx
{
    ::Ice::Long groupId;
    ::Ice::Long parentId;
    ::std::string groupName;

    bool operator==(const SICEGroupInfoEx&) const;
    bool operator!=(const SICEGroupInfoEx&) const;
    bool operator<(const SICEGroupInfoEx&) const;
    bool operator<=(const SICEGroupInfoEx& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEGroupInfoEx& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEGroupInfoEx& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICEContactInfo
{
    ::std::string contactId;
    ::Ice::Int groupId;
    ::std::string nickName;
    ::Ice::Int status;
    ::std::string cid;
    ::Ice::Short cnttype;
    ::std::string clientInfo;

    bool operator==(const SICEContactInfo&) const;
    bool operator!=(const SICEContactInfo&) const;
    bool operator<(const SICEContactInfo&) const;
    bool operator<=(const SICEContactInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEContactInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEContactInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICEUserId
{
    ::std::string uid;

    bool operator==(const SICEUserId&) const;
    bool operator!=(const SICEUserId&) const;
    bool operator<(const SICEUserId&) const;
    bool operator<=(const SICEUserId& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEUserId& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEUserId& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICEOffLineMessege
{
    ::std::string createTime;
    ::Ice::Int type;
    ::std::string fromId;
    ::std::string content;

    bool operator==(const SICEOffLineMessege&) const;
    bool operator!=(const SICEOffLineMessege&) const;
    bool operator<(const SICEOffLineMessege&) const;
    bool operator<=(const SICEOffLineMessege& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEOffLineMessege& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEOffLineMessege& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICEOffLineMessegeEx
{
    ::Ice::Int sendTime;
    ::Ice::Int type;
    ::std::string fromId;
    ::std::string content;

    bool operator==(const SICEOffLineMessegeEx&) const;
    bool operator!=(const SICEOffLineMessegeEx&) const;
    bool operator<(const SICEOffLineMessegeEx&) const;
    bool operator<=(const SICEOffLineMessegeEx& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEOffLineMessegeEx& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEOffLineMessegeEx& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICEUserDStatus
{
    ::Ice::Int statusId;
    ::std::string statusInfo;

    bool operator==(const SICEUserDStatus&) const;
    bool operator!=(const SICEUserDStatus&) const;
    bool operator<(const SICEUserDStatus&) const;
    bool operator<=(const SICEUserDStatus& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEUserDStatus& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEUserDStatus& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICECntCidModPair
{
    ::std::string cid;
    ::std::string modSeqId;

    bool operator==(const SICECntCidModPair&) const;
    bool operator!=(const SICECntCidModPair&) const;
    bool operator<(const SICECntCidModPair&) const;
    bool operator<=(const SICECntCidModPair& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICECntCidModPair& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICECntCidModPair& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICECRMContactDetail
{
    ::std::string cntname;
    ::std::string email;
    ::std::string phoneno;
    ::std::string mobileno;
    ::std::string company;
    ::Ice::Byte sex;
    ::std::string jobtitle;
    ::std::string compaddr;
    ::Ice::Int bizcatid;
    ::std::string buykeys;
    ::std::string salekeys;
    ::std::string faxnumber;
    ::std::string penname;

    bool operator==(const SICECRMContactDetail&) const;
    bool operator!=(const SICECRMContactDetail&) const;
    bool operator<(const SICECRMContactDetail&) const;
    bool operator<=(const SICECRMContactDetail& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICECRMContactDetail& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICECRMContactDetail& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICESeqId
{
    ::std::string seqId;

    bool operator==(const SICESeqId&) const;
    bool operator!=(const SICESeqId&) const;
    bool operator<(const SICESeqId&) const;
    bool operator<=(const SICESeqId& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICESeqId& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICESeqId& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICENetPhoneChargeInfo
{
    ::std::string chargeseqid;
    ::std::string payseqid;
    ::std::string chargebegintime;
    ::Ice::Int denomination;
    ::Ice::Int payrealmoney;
    ::Ice::Int chargestatus;
    ::Ice::Int paystatus;

    bool operator==(const SICENetPhoneChargeInfo&) const;
    bool operator!=(const SICENetPhoneChargeInfo&) const;
    bool operator<(const SICENetPhoneChargeInfo&) const;
    bool operator<=(const SICENetPhoneChargeInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICENetPhoneChargeInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICENetPhoneChargeInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICEGenContactFull
{
    ::std::string uid;
    ::std::string cid;
    ::std::string cntid;
    ::std::string nickname;
    ::std::string seqid;
    ::Ice::Int groupId;
    ::Ice::Byte showflag;
    ::std::string sex;
    ::Ice::Byte cnttype;
    ::Ice::Int bizcatid;
    ::std::string realname;
    ::std::string email1;
    ::std::string cphoneno1;
    ::std::string hphoneno1;
    ::std::string mobileno1;
    ::std::string alitalkid;
    ::std::string companyname;
    ::std::string email2;
    ::std::string email3;
    ::std::string cphoneno2;
    ::std::string cphoneno3;
    ::std::string mobileno2;
    ::std::string mobileno3;
    ::std::string buykeys;
    ::std::string salekeys;
    ::std::string jobtitle;
    ::std::string compaddr;
    ::std::string homeaddr;
    ::std::string compzip;
    ::std::string homezip;
    ::std::string cntpicid;
    ::std::string compurl;
    ::std::string homeurl;
    ::std::string wwangid;
    ::std::string yahooid;
    ::std::string msnid;
    ::std::string qqid;
    ::std::string deptname;
    ::std::string managername;
    ::std::string idnumber;
    ::std::string workidno;
    ::std::string faxnumber;
    ::std::string penname;
    ::std::string engname;
    ::std::string consortname;
    ::std::string avocation;
    ::std::string assistname;
    ::std::string childname;
    ::std::string birthday;
    ::std::string memo;
    ::std::string firstname;
    ::std::string lastname;

    bool operator==(const SICEGenContactFull&) const;
    bool operator!=(const SICEGenContactFull&) const;
    bool operator<(const SICEGenContactFull&) const;
    bool operator<=(const SICEGenContactFull& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEGenContactFull& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEGenContactFull& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICEATMGenContactFull
{
    ::std::string uid;
    ::std::string cid;
    ::std::string cntid;
    ::std::string nickname;
    ::std::string seqid;
    ::Ice::Int groupId;
    ::Ice::Byte showflag;
    ::std::string sex;
    ::Ice::Byte cnttype;
    ::Ice::Int bizcatid;
    ::std::string realname;
    ::std::string email1;
    ::std::string cphoneno1;
    ::std::string hphoneno1;
    ::std::string mobileno1;
    ::std::string alitalkid;
    ::std::string companyname;
    ::std::string email2;
    ::std::string email3;
    ::std::string cphoneno2;
    ::std::string cphoneno3;
    ::std::string mobileno2;
    ::std::string mobileno3;
    ::std::string buykeys;
    ::std::string salekeys;
    ::std::string jobtitle;
    ::std::string compaddr;
    ::std::string homeaddr;
    ::std::string compzip;
    ::std::string homezip;
    ::std::string cntpicid;
    ::std::string compurl;
    ::std::string homeurl;
    ::std::string wwangid;
    ::std::string yahooid;
    ::std::string msnid;
    ::std::string qqid;
    ::std::string deptname;
    ::std::string managername;
    ::std::string idnumber;
    ::std::string workidno;
    ::std::string faxnumber;
    ::std::string penname;
    ::std::string engname;
    ::std::string consortname;
    ::std::string avocation;
    ::std::string assistname;
    ::std::string childname;
    ::std::string birthday;
    ::std::string memo;
    ::Ice::Int companyid;
    ::Ice::Int cntlevel;
    ::std::string country;
    ::std::string productService;
    ::std::string firstname;
    ::std::string lastname;
    ::std::string biztype;
    ::Ice::Int preRegister;

    bool operator==(const SICEATMGenContactFull&) const;
    bool operator!=(const SICEATMGenContactFull&) const;
    bool operator<(const SICEATMGenContactFull&) const;
    bool operator<=(const SICEATMGenContactFull& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEATMGenContactFull& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEATMGenContactFull& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICECntOtherModInfo
{
    ::std::string cid;
    ::std::string modSeqId;
    ::Ice::Int memberLevel;
    ::Ice::Int smsbindflag;
    ::Ice::Int smsmobileonlineflag;
    ::std::string smsbindmobile;

    bool operator==(const SICECntOtherModInfo&) const;
    bool operator!=(const SICECntOtherModInfo&) const;
    bool operator<(const SICECntOtherModInfo&) const;
    bool operator<=(const SICECntOtherModInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICECntOtherModInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICECntOtherModInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICESmsUserInfo
{
    ::std::string uid;
    ::Ice::Int bindFlag;
    ::Ice::Int mobileOnlineFlag;
    ::std::string account;
    ::std::string password;
    ::std::string mobileNo;
    ::Ice::Int balance;

    bool operator==(const SICESmsUserInfo&) const;
    bool operator!=(const SICESmsUserInfo&) const;
    bool operator<(const SICESmsUserInfo&) const;
    bool operator<=(const SICESmsUserInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICESmsUserInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICESmsUserInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICEAMOSUserInfo
{
    ::std::string uid;
    ::std::string lastLoginTime;
    ::Ice::Int mobileOnlineFlag;

    bool operator==(const SICEAMOSUserInfo&) const;
    bool operator!=(const SICEAMOSUserInfo&) const;
    bool operator<(const SICEAMOSUserInfo&) const;
    bool operator<=(const SICEAMOSUserInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEAMOSUserInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEAMOSUserInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SMemberPWInfo
{
    ::std::string md5passwd;
    bool bcanlogon;

    bool operator==(const SMemberPWInfo&) const;
    bool operator!=(const SMemberPWInfo&) const;
    bool operator<(const SMemberPWInfo&) const;
    bool operator<=(const SMemberPWInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SMemberPWInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SMemberPWInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SMemberPWInfoEx
{
    ::std::string md5passwd;
    bool bcanlogon;
    ::Ice::Int activeState;

    bool operator==(const SMemberPWInfoEx&) const;
    bool operator!=(const SMemberPWInfoEx&) const;
    bool operator<(const SMemberPWInfoEx&) const;
    bool operator<=(const SMemberPWInfoEx& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SMemberPWInfoEx& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SMemberPWInfoEx& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SUserWebBasicProfile
{
    ::std::string uid;
    ::std::string nickname;
    ::std::string realname;
    ::std::string email;
    ::std::string phoneno;
    ::std::string mobileno;
    ::std::string company;
    ::std::string jobtitle;
    ::std::string address;
    ::Ice::Int catid;
    ::std::string buykeyws;
    ::std::string salekeyws;
    ::std::string faxno;
    ::std::string penname;
    ::std::string country;
    ::Ice::Int memberlevel;
    ::Ice::Int industry;
    ::Ice::Int area;
    ::Ice::Int phoneStatus;
    ::Ice::Int activestat;
    ::std::string extraInfo;
    ::std::string zip;
    ::std::string birthday;
    ::std::string password;
    ::std::string prov;
    ::std::string city;
    ::std::string usergender;
    ::std::string birthdate;
    ::std::string status;
    ::std::string province;
    ::Ice::Int webLevel;

    bool operator==(const SUserWebBasicProfile&) const;
    bool operator!=(const SUserWebBasicProfile&) const;
    bool operator<(const SUserWebBasicProfile&) const;
    bool operator<=(const SUserWebBasicProfile& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SUserWebBasicProfile& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SUserWebBasicProfile& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SUserWebBasicProfile2
{
    ::std::string uid;
    ::std::string nickname;
    ::std::string realname;
    ::std::string email;
    ::std::string phoneno;
    ::std::string mobileno;
    ::std::string company;
    ::std::string jobtitle;
    ::std::string address;
    ::Ice::Int catid;
    ::std::string buykeyws;
    ::std::string salekeyws;
    ::std::string faxno;
    ::std::string penname;
    ::std::string country;
    ::Ice::Int memberlevel;
    ::Ice::Int industry;
    ::Ice::Int area;
    ::Ice::Int phoneStatus;
    ::Ice::Int activestat;
    ::std::string extraInfo;
    ::std::string zip;
    ::std::string birthday;
    ::std::string password;
    ::std::string prov;
    ::std::string city;
    ::std::string usergender;
    ::std::string birthdate;
    ::std::string status;
    ::std::string province;
    ::Ice::Int webLevel;
    ::std::string subcity;
    ::std::string homepage;
    ::std::string interest;

    bool operator==(const SUserWebBasicProfile2&) const;
    bool operator!=(const SUserWebBasicProfile2&) const;
    bool operator<(const SUserWebBasicProfile2&) const;
    bool operator<=(const SUserWebBasicProfile2& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SUserWebBasicProfile2& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SUserWebBasicProfile2& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SMatchedUserIdInfo
{
    ::std::string userId;
    ::std::string name;
    ::Ice::Byte validateflag;

    bool operator==(const SMatchedUserIdInfo&) const;
    bool operator!=(const SMatchedUserIdInfo&) const;
    bool operator<(const SMatchedUserIdInfo&) const;
    bool operator<=(const SMatchedUserIdInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SMatchedUserIdInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SMatchedUserIdInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SUdbUserInfo
{
    ::std::string uid;
    ::std::string name;
    ::std::string rawpasswd;
    ::std::string md5passwd;
    ::std::string email;
    ::std::string mobileno;
    ::std::string phoneno;
    ::std::string company;
    ::std::string jobtitle;
    ::std::string birthday;
    ::std::string sex;
    ::std::string country;
    ::std::string province;
    ::std::string city;
    ::std::string address;
    ::std::string zip;

    bool operator==(const SUdbUserInfo&) const;
    bool operator!=(const SUdbUserInfo&) const;
    bool operator<(const SUdbUserInfo&) const;
    bool operator<=(const SUdbUserInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SUdbUserInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SUdbUserInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SChildUserInfo
{
    ::std::string uid;
    ::std::string nikename;
    ::std::string password;
    ::std::string parentId;
    ::Ice::Int suspended;
    ::Ice::Int expirtTime;
    ::Ice::Int OpenTime;
    ::Ice::Int type;
    ::Ice::Int groupId;
    ::Ice::Int receptionNum;
    ::Ice::Int priority;
    ::Ice::Int recvOffMsg;
    ::std::string needuseonline;
    ::std::string userflag;

    bool operator==(const SChildUserInfo&) const;
    bool operator!=(const SChildUserInfo&) const;
    bool operator<(const SChildUserInfo&) const;
    bool operator<=(const SChildUserInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SChildUserInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SChildUserInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SChildUserInfo2
{
    ::std::string uid;
    ::std::string nikename;
    ::std::string password;
    ::std::string parentId;
    ::Ice::Int suspended;
    ::Ice::Int expirtTime;
    ::Ice::Int OpenTime;
    ::Ice::Int type;
    ::Ice::Int groupId;
    ::Ice::Int receptionNum;
    ::Ice::Int priority;
    ::Ice::Int recvOffMsg;

    bool operator==(const SChildUserInfo2&) const;
    bool operator!=(const SChildUserInfo2&) const;
    bool operator<(const SChildUserInfo2&) const;
    bool operator<=(const SChildUserInfo2& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SChildUserInfo2& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SChildUserInfo2& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SB2BChildUserInfo
{
    ::std::string uid;
    ::std::string parentId;
    ::std::string userflag;

    bool operator==(const SB2BChildUserInfo&) const;
    bool operator!=(const SB2BChildUserInfo&) const;
    bool operator<(const SB2BChildUserInfo&) const;
    bool operator<=(const SB2BChildUserInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SB2BChildUserInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SB2BChildUserInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICEToolProfile
{
    ::Ice::Int type;
    ::std::string profile;

    bool operator==(const SICEToolProfile&) const;
    bool operator!=(const SICEToolProfile&) const;
    bool operator<(const SICEToolProfile&) const;
    bool operator<=(const SICEToolProfile& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEToolProfile& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEToolProfile& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICEKvPair
{
    ::std::string key;
    ::std::string value;

    bool operator==(const SICEKvPair&) const;
    bool operator!=(const SICEKvPair&) const;
    bool operator<(const SICEKvPair&) const;
    bool operator<=(const SICEKvPair& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEKvPair& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEKvPair& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SImPrefix
{
    ::std::string prefix;
    ::std::string name;

    bool operator==(const SImPrefix&) const;
    bool operator!=(const SImPrefix&) const;
    bool operator<(const SImPrefix&) const;
    bool operator<=(const SImPrefix& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SImPrefix& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SImPrefix& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::AliIMDBBase::SICEMemberInfo> SICEMemberInfoSeq;

class __U__SICEMemberInfoSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SICEMemberInfo*, const ::AliIMDBBase::SICEMemberInfo*, __U__SICEMemberInfoSeq);
void __read(::IceInternal::BasicStream*, SICEMemberInfoSeq&, __U__SICEMemberInfoSeq);

typedef ::std::vector< ::AliIMDBBase::SICESysMessage> SICESysMessageSeq;

class __U__SICESysMessageSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SICESysMessage*, const ::AliIMDBBase::SICESysMessage*, __U__SICESysMessageSeq);
void __read(::IceInternal::BasicStream*, SICESysMessageSeq&, __U__SICESysMessageSeq);

typedef ::std::vector< ::AliIMDBBase::SExICESysMessage> SExICESysMessageSeq;

class __U__SExICESysMessageSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SExICESysMessage*, const ::AliIMDBBase::SExICESysMessage*, __U__SExICESysMessageSeq);
void __read(::IceInternal::BasicStream*, SExICESysMessageSeq&, __U__SExICESysMessageSeq);

typedef ::std::vector< ::AliIMDBBase::SICEVersion> SICEVersionSeq;

class __U__SICEVersionSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SICEVersion*, const ::AliIMDBBase::SICEVersion*, __U__SICEVersionSeq);
void __read(::IceInternal::BasicStream*, SICEVersionSeq&, __U__SICEVersionSeq);

typedef ::std::vector< ::AliIMDBBase::SICEUserInfo> SICEUserInfoSeq;

class __U__SICEUserInfoSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SICEUserInfo*, const ::AliIMDBBase::SICEUserInfo*, __U__SICEUserInfoSeq);
void __read(::IceInternal::BasicStream*, SICEUserInfoSeq&, __U__SICEUserInfoSeq);

typedef ::std::vector< ::AliIMDBBase::SICEUserInfoEx> SICEUserInfoExSeq;

class __U__SICEUserInfoExSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SICEUserInfoEx*, const ::AliIMDBBase::SICEUserInfoEx*, __U__SICEUserInfoExSeq);
void __read(::IceInternal::BasicStream*, SICEUserInfoExSeq&, __U__SICEUserInfoExSeq);

typedef ::std::vector< ::AliIMDBBase::SICEGroupInfo> SICEGroupInfoSeq;

class __U__SICEGroupInfoSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SICEGroupInfo*, const ::AliIMDBBase::SICEGroupInfo*, __U__SICEGroupInfoSeq);
void __read(::IceInternal::BasicStream*, SICEGroupInfoSeq&, __U__SICEGroupInfoSeq);

typedef ::std::vector< ::AliIMDBBase::SICEGroupInfoEx> SICEGroupInfoExSeq;

class __U__SICEGroupInfoExSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SICEGroupInfoEx*, const ::AliIMDBBase::SICEGroupInfoEx*, __U__SICEGroupInfoExSeq);
void __read(::IceInternal::BasicStream*, SICEGroupInfoExSeq&, __U__SICEGroupInfoExSeq);

typedef ::std::vector< ::AliIMDBBase::SICEContactInfo> SICEContactInfoSeq;

class __U__SICEContactInfoSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SICEContactInfo*, const ::AliIMDBBase::SICEContactInfo*, __U__SICEContactInfoSeq);
void __read(::IceInternal::BasicStream*, SICEContactInfoSeq&, __U__SICEContactInfoSeq);

typedef ::std::vector< ::AliIMDBBase::SICEOffLineMessege> SICEOffLineMessegeSeq;

class __U__SICEOffLineMessegeSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SICEOffLineMessege*, const ::AliIMDBBase::SICEOffLineMessege*, __U__SICEOffLineMessegeSeq);
void __read(::IceInternal::BasicStream*, SICEOffLineMessegeSeq&, __U__SICEOffLineMessegeSeq);

typedef ::std::vector< ::AliIMDBBase::SICEOffLineMessegeEx> SICEOffLineMessegeExSeq;

class __U__SICEOffLineMessegeExSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SICEOffLineMessegeEx*, const ::AliIMDBBase::SICEOffLineMessegeEx*, __U__SICEOffLineMessegeExSeq);
void __read(::IceInternal::BasicStream*, SICEOffLineMessegeExSeq&, __U__SICEOffLineMessegeExSeq);

typedef ::std::vector< ::AliIMDBBase::SICECntCidModPair> SICECntCidModPairSeq;

class __U__SICECntCidModPairSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SICECntCidModPair*, const ::AliIMDBBase::SICECntCidModPair*, __U__SICECntCidModPairSeq);
void __read(::IceInternal::BasicStream*, SICECntCidModPairSeq&, __U__SICECntCidModPairSeq);

typedef ::std::vector< ::AliIMDBBase::SICEUserDStatus> SICEUserDStatusSeq;

class __U__SICEUserDStatusSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SICEUserDStatus*, const ::AliIMDBBase::SICEUserDStatus*, __U__SICEUserDStatusSeq);
void __read(::IceInternal::BasicStream*, SICEUserDStatusSeq&, __U__SICEUserDStatusSeq);

typedef ::std::vector< ::AliIMDBBase::SICENetPhoneChargeInfo> SICENetPhoneChargeInfoSeq;

class __U__SICENetPhoneChargeInfoSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SICENetPhoneChargeInfo*, const ::AliIMDBBase::SICENetPhoneChargeInfo*, __U__SICENetPhoneChargeInfoSeq);
void __read(::IceInternal::BasicStream*, SICENetPhoneChargeInfoSeq&, __U__SICENetPhoneChargeInfoSeq);

typedef ::std::vector< ::AliIMDBBase::SICEGenContactFull> SICEGenContactFullSeq;

class __U__SICEGenContactFullSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SICEGenContactFull*, const ::AliIMDBBase::SICEGenContactFull*, __U__SICEGenContactFullSeq);
void __read(::IceInternal::BasicStream*, SICEGenContactFullSeq&, __U__SICEGenContactFullSeq);

typedef ::std::vector< ::AliIMDBBase::SICECntOtherModInfo> SICECntOtherModInfoSeq;

class __U__SICECntOtherModInfoSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SICECntOtherModInfo*, const ::AliIMDBBase::SICECntOtherModInfo*, __U__SICECntOtherModInfoSeq);
void __read(::IceInternal::BasicStream*, SICECntOtherModInfoSeq&, __U__SICECntOtherModInfoSeq);

typedef ::std::vector< ::AliIMDBBase::SICEAMOSUserInfo> SICEAMOSUserInfoSeq;

class __U__SICEAMOSUserInfoSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SICEAMOSUserInfo*, const ::AliIMDBBase::SICEAMOSUserInfo*, __U__SICEAMOSUserInfoSeq);
void __read(::IceInternal::BasicStream*, SICEAMOSUserInfoSeq&, __U__SICEAMOSUserInfoSeq);

typedef ::std::vector< ::AliIMDBBase::SMatchedUserIdInfo> SMatchedUserIdInfoSeq;

class __U__SMatchedUserIdInfoSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SMatchedUserIdInfo*, const ::AliIMDBBase::SMatchedUserIdInfo*, __U__SMatchedUserIdInfoSeq);
void __read(::IceInternal::BasicStream*, SMatchedUserIdInfoSeq&, __U__SMatchedUserIdInfoSeq);

typedef ::std::vector< ::AliIMDBBase::SUdbUserInfo> SUdbUserInfoSeq;

class __U__SUdbUserInfoSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SUdbUserInfo*, const ::AliIMDBBase::SUdbUserInfo*, __U__SUdbUserInfoSeq);
void __read(::IceInternal::BasicStream*, SUdbUserInfoSeq&, __U__SUdbUserInfoSeq);

typedef ::std::vector< ::AliIMDBBase::SChildUserInfo> SChildUserInfoSeq;

class __U__SChildUserInfoSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SChildUserInfo*, const ::AliIMDBBase::SChildUserInfo*, __U__SChildUserInfoSeq);
void __read(::IceInternal::BasicStream*, SChildUserInfoSeq&, __U__SChildUserInfoSeq);

typedef ::std::vector< ::AliIMDBBase::SB2BChildUserInfo> SB2BChildUserInfoSeq;

class __U__SB2BChildUserInfoSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SB2BChildUserInfo*, const ::AliIMDBBase::SB2BChildUserInfo*, __U__SB2BChildUserInfoSeq);
void __read(::IceInternal::BasicStream*, SB2BChildUserInfoSeq&, __U__SB2BChildUserInfoSeq);

typedef ::std::vector< ::AliIMDBBase::SChildUserInfo2> SChildUserInfoSeq2;

class __U__SChildUserInfoSeq2 { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SChildUserInfo2*, const ::AliIMDBBase::SChildUserInfo2*, __U__SChildUserInfoSeq2);
void __read(::IceInternal::BasicStream*, SChildUserInfoSeq2&, __U__SChildUserInfoSeq2);

typedef ::std::vector< ::AliIMDBBase::SICEToolProfile> SICEToolProfileSeq;

class __U__SICEToolProfileSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SICEToolProfile*, const ::AliIMDBBase::SICEToolProfile*, __U__SICEToolProfileSeq);
void __read(::IceInternal::BasicStream*, SICEToolProfileSeq&, __U__SICEToolProfileSeq);

typedef ::std::vector< ::AliIMDBBase::SICEKvPair> SICEKvPairSeq;

class __U__SICEKvPairSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SICEKvPair*, const ::AliIMDBBase::SICEKvPair*, __U__SICEKvPairSeq);
void __read(::IceInternal::BasicStream*, SICEKvPairSeq&, __U__SICEKvPairSeq);

typedef ::std::vector< ::AliIMDBBase::SImPrefix> SImPrefixSeq;

class __U__SImPrefixSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SImPrefix*, const ::AliIMDBBase::SImPrefix*, __U__SImPrefixSeq);
void __read(::IceInternal::BasicStream*, SImPrefixSeq&, __U__SImPrefixSeq);

typedef ::std::map< ::std::string, ::std::string> SICEKVMap;

class __U__SICEKVMap { };
void __write(::IceInternal::BasicStream*, const SICEKVMap&, __U__SICEKVMap);
void __read(::IceInternal::BasicStream*, SICEKVMap&, __U__SICEKVMap);

struct SICEReceptNum
{
    ::std::string eserviceid;
    ::Ice::Int receptnum;

    bool operator==(const SICEReceptNum&) const;
    bool operator!=(const SICEReceptNum&) const;
    bool operator<(const SICEReceptNum&) const;
    bool operator<=(const SICEReceptNum& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEReceptNum& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEReceptNum& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::AliIMDBBase::SICEReceptNum> SICEReceptNumSeq;

class __U__SICEReceptNumSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SICEReceptNum*, const ::AliIMDBBase::SICEReceptNum*, __U__SICEReceptNumSeq);
void __read(::IceInternal::BasicStream*, SICEReceptNumSeq&, __U__SICEReceptNumSeq);

struct SICEReceptPriority
{
    ::std::string eserviceid;
    ::Ice::Int receptpriority;

    bool operator==(const SICEReceptPriority&) const;
    bool operator!=(const SICEReceptPriority&) const;
    bool operator<(const SICEReceptPriority&) const;
    bool operator<=(const SICEReceptPriority& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEReceptPriority& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEReceptPriority& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::AliIMDBBase::SICEReceptPriority> SICEReceptPrioritySeq;

class __U__SICEReceptPrioritySeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SICEReceptPriority*, const ::AliIMDBBase::SICEReceptPriority*, __U__SICEReceptPrioritySeq);
void __read(::IceInternal::BasicStream*, SICEReceptPrioritySeq&, __U__SICEReceptPrioritySeq);

struct SICERecvOffMsg
{
    ::std::string eserviceid;
    ::Ice::Int recvoffmsg;

    bool operator==(const SICERecvOffMsg&) const;
    bool operator!=(const SICERecvOffMsg&) const;
    bool operator<(const SICERecvOffMsg&) const;
    bool operator<=(const SICERecvOffMsg& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICERecvOffMsg& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICERecvOffMsg& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::AliIMDBBase::SICERecvOffMsg> SICERecvOffMsgSeq;

class __U__SICERecvOffMsgSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SICERecvOffMsg*, const ::AliIMDBBase::SICERecvOffMsg*, __U__SICERecvOffMsgSeq);
void __read(::IceInternal::BasicStream*, SICERecvOffMsgSeq&, __U__SICERecvOffMsgSeq);

struct SICEESGroupInfo
{
    ::std::string groupName;
    ::Ice::Int groupId;
    ::std::string adminId;
    ::Ice::StringSeq eservicelist;

    bool operator==(const SICEESGroupInfo&) const;
    bool operator!=(const SICEESGroupInfo&) const;
    bool operator<(const SICEESGroupInfo&) const;
    bool operator<=(const SICEESGroupInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEESGroupInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEESGroupInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::AliIMDBBase::SICEESGroupInfo> SICEESGroupInfoSeq;

class __U__SICEESGroupInfoSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SICEESGroupInfo*, const ::AliIMDBBase::SICEESGroupInfo*, __U__SICEESGroupInfoSeq);
void __read(::IceInternal::BasicStream*, SICEESGroupInfoSeq&, __U__SICEESGroupInfoSeq);

struct SICEESBaseGroupInfo
{
    ::std::string groupName;
    ::Ice::Int groupId;
    ::std::string adminId;

    bool operator==(const SICEESBaseGroupInfo&) const;
    bool operator!=(const SICEESBaseGroupInfo&) const;
    bool operator<(const SICEESBaseGroupInfo&) const;
    bool operator<=(const SICEESBaseGroupInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEESBaseGroupInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEESBaseGroupInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICEExpandArea
{
    ::Ice::Int id;
    ::std::string areaname;
    ::std::string url;
    ::std::string picpath;
    ::std::string createtime;

    bool operator==(const SICEExpandArea&) const;
    bool operator!=(const SICEExpandArea&) const;
    bool operator<(const SICEExpandArea&) const;
    bool operator<=(const SICEExpandArea& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEExpandArea& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEExpandArea& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::AliIMDBBase::SICEExpandArea> SICEExpandAreaSeq;

class __U__SICEExpandAreaSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SICEExpandArea*, const ::AliIMDBBase::SICEExpandArea*, __U__SICEExpandAreaSeq);
void __read(::IceInternal::BasicStream*, SICEExpandAreaSeq&, __U__SICEExpandAreaSeq);

struct SICEESEval
{
    ::Ice::Int code;
    ::std::string codename;
    ::std::string welcome;

    bool operator==(const SICEESEval&) const;
    bool operator!=(const SICEESEval&) const;
    bool operator<(const SICEESEval&) const;
    bool operator<=(const SICEESEval& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEESEval& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEESEval& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::AliIMDBBase::SICEESEval> SICEESEvalSeq;

class __U__SICEESEvalSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SICEESEval*, const ::AliIMDBBase::SICEESEval*, __U__SICEESEvalSeq);
void __read(::IceInternal::BasicStream*, SICEESEvalSeq&, __U__SICEESEvalSeq);

struct SICEESCode
{
    ::Ice::Int code;
    ::std::string codename;
    ::Ice::Int num;

    bool operator==(const SICEESCode&) const;
    bool operator!=(const SICEESCode&) const;
    bool operator<(const SICEESCode&) const;
    bool operator<=(const SICEESCode& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEESCode& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEESCode& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::AliIMDBBase::SICEESCode> SICEESCodeSeq;

class __U__SICEESCodeSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SICEESCode*, const ::AliIMDBBase::SICEESCode*, __U__SICEESCodeSeq);
void __read(::IceInternal::BasicStream*, SICEESCodeSeq&, __U__SICEESCodeSeq);

struct SICEESEvalResult
{
    ::std::string uid;
    ::Ice::Int sendNum;
    ::Ice::Int receNum;
    ::AliIMDBBase::SICEESCodeSeq codes;

    bool operator==(const SICEESEvalResult&) const;
    bool operator!=(const SICEESEvalResult&) const;
    bool operator<(const SICEESEvalResult&) const;
    bool operator<=(const SICEESEvalResult& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEESEvalResult& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEESEvalResult& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::AliIMDBBase::SICEESEvalResult> SICEESEvalResultSeq;

class __U__SICEESEvalResultSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SICEESEvalResult*, const ::AliIMDBBase::SICEESEvalResult*, __U__SICEESEvalResultSeq);
void __read(::IceInternal::BasicStream*, SICEESEvalResultSeq&, __U__SICEESEvalResultSeq);

struct SICEESEvalResultEx
{
    ::std::string uid;
    ::Ice::Int sendNum;
    ::Ice::Int receNum;
    ::AliIMDBBase::SICEESCodeSeq codes;
    ::std::string evalTime;

    bool operator==(const SICEESEvalResultEx&) const;
    bool operator!=(const SICEESEvalResultEx&) const;
    bool operator<(const SICEESEvalResultEx&) const;
    bool operator<=(const SICEESEvalResultEx& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEESEvalResultEx& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEESEvalResultEx& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::AliIMDBBase::SICEESEvalResultEx> SICEESEvalResultExSeq;

class __U__SICEESEvalResultExSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SICEESEvalResultEx*, const ::AliIMDBBase::SICEESEvalResultEx*, __U__SICEESEvalResultExSeq);
void __read(::IceInternal::BasicStream*, SICEESEvalResultExSeq&, __U__SICEESEvalResultExSeq);

struct SICESqlItem
{
    ::Ice::Int type;
    ::std::string name;
    ::std::string value;

    bool operator==(const SICESqlItem&) const;
    bool operator!=(const SICESqlItem&) const;
    bool operator<(const SICESqlItem&) const;
    bool operator<=(const SICESqlItem& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICESqlItem& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICESqlItem& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::AliIMDBBase::SICESqlItem> SICESqlItemSeq;

class __U__SICESqlItemSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::SICESqlItem*, const ::AliIMDBBase::SICESqlItem*, __U__SICESqlItemSeq);
void __read(::IceInternal::BasicStream*, SICESqlItemSeq&, __U__SICESqlItemSeq);

struct UserStatics
{
    ::Ice::Int type;
    ::std::string loginId;
    ::Ice::Int totalDegree;
    ::Ice::Int userValue;
    ::Ice::Int dailyAction;
    ::Ice::Int phoneAuth;
    ::Ice::Int emailAuth;
    ::Ice::Int identityAuth;
    ::Ice::Int tpAuth;
    ::Ice::Int tpFee;
    ::Ice::Int alipayAuth;
    ::Ice::Int buyCredit;
    ::Ice::Int sellCredit;

    bool operator==(const UserStatics&) const;
    bool operator!=(const UserStatics&) const;
    bool operator<(const UserStatics&) const;
    bool operator<=(const UserStatics& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const UserStatics& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const UserStatics& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::AliIMDBBase::UserStatics> UserStaticsSeq;

class __U__UserStaticsSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMDBBase::UserStatics*, const ::AliIMDBBase::UserStatics*, __U__UserStaticsSeq);
void __read(::IceInternal::BasicStream*, UserStaticsSeq&, __U__UserStaticsSeq);

}

#endif
