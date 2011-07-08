// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `dbtbsstructs60.ice'

#ifndef __dbtbsstructs60_h__
#define __dbtbsstructs60_h__

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

namespace ALiIMDBTribe
{

struct STribeInfo
{
    ::Ice::Long tribeId;
    ::std::string name;
    ::std::string masterId;
    ::std::string createrId;
    ::Ice::Int tribeclass;
    ::std::string describe;
    ::std::string bulletin;
    ::Ice::Short checkMode;
    ::std::string password;
    ::std::string validateCode;
    ::Ice::Int lastMsgid;
    ::Ice::Int memberTimes;
    ::Ice::Int onlineTimes;
    ::Ice::Double onlineDegree;
    ::Ice::Int discussDegree;
    ::Ice::Double rewardDegree;
    ::Ice::Int masterOffer;
    ::Ice::Double totalDegree;
    ::std::string keyword;
    ::Ice::Short allowVisitor;
    ::Ice::Short forbidSearch;
    ::std::string extSign;
    ::Ice::Int groupStamp;
    ::Ice::Int blackStamp;

    bool operator==(const STribeInfo&) const;
    bool operator!=(const STribeInfo&) const;
    bool operator<(const STribeInfo&) const;
    bool operator<=(const STribeInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const STribeInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const STribeInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct STribeOfflineMsg
{
    ::Ice::Long tribeId;
    ::std::string memberId;
    ::Ice::Short type;
    ::std::string message;
    ::Ice::Int sendTime;

    bool operator==(const STribeOfflineMsg&) const;
    bool operator!=(const STribeOfflineMsg&) const;
    bool operator<(const STribeOfflineMsg&) const;
    bool operator<=(const STribeOfflineMsg& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const STribeOfflineMsg& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const STribeOfflineMsg& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct STribeMemberInfo
{
    ::std::string userId;
    ::std::string name;
    ::Ice::Short memberLevel;
    ::Ice::Short tribeLevel;
    ::Ice::Short mobileBindFlag;
    ::std::string mobileNo;
    ::std::string bindMobile;
    ::Ice::Int lastMsgid;
    ::Ice::Double onlineDegree;
    ::Ice::Int discussDegree;
    ::Ice::Double rewardDegree;
    ::Ice::Double totalDegree;
    ::Ice::Long groupId;
    ::Ice::Short starMember;
    ::Ice::Short openFlag;

    bool operator==(const STribeMemberInfo&) const;
    bool operator!=(const STribeMemberInfo&) const;
    bool operator<(const STribeMemberInfo&) const;
    bool operator<=(const STribeMemberInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const STribeMemberInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const STribeMemberInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct STribeMemberInfo2
{
    ::std::string userId;
    ::std::string name;
    ::Ice::Short memberLevel;
    ::Ice::Short tribeLevel;
    ::Ice::Short mobileBindFlag;
    ::std::string mobileNo;
    ::std::string bindMobile;
    ::Ice::Int lastMsgid;
    ::Ice::Double onlineDegree;
    ::Ice::Int discussDegree;
    ::Ice::Double rewardDegree;
    ::Ice::Double totalDegree;
    ::Ice::Long groupId;
    ::Ice::Short starMember;
    ::Ice::Short openFlag;
    ::Ice::Int popupFlag;

    bool operator==(const STribeMemberInfo2&) const;
    bool operator!=(const STribeMemberInfo2&) const;
    bool operator<(const STribeMemberInfo2&) const;
    bool operator<=(const STribeMemberInfo2& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const STribeMemberInfo2& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const STribeMemberInfo2& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct STribeMember
{
    ::Ice::Long tribeId;
    ::std::string memberId;
    ::Ice::Int level;
    ::Ice::Int lastMsgid;
    ::std::string operId;
    ::Ice::Long groupId;

    bool operator==(const STribeMember&) const;
    bool operator!=(const STribeMember&) const;
    bool operator<(const STribeMember&) const;
    bool operator<=(const STribeMember& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const STribeMember& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const STribeMember& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct STribeId
{
    ::Ice::Long tribeId;
    ::std::string name;
    ::Ice::Short tribeLevel;
    ::Ice::Short tribeStatus;
    ::std::string extSign;
    ::Ice::Int groupStamp;
    ::Ice::Short openTribe;

    bool operator==(const STribeId&) const;
    bool operator!=(const STribeId&) const;
    bool operator<(const STribeId&) const;
    bool operator<=(const STribeId& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const STribeId& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const STribeId& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct STribeId2
{
    ::Ice::Long tribeId;
    ::std::string name;
    ::Ice::Short tribeLevel;
    ::Ice::Short tribeStatus;
    ::std::string extSign;
    ::Ice::Int groupStamp;
    ::Ice::Short openTribe;
    ::Ice::Short popupFlag;

    bool operator==(const STribeId2&) const;
    bool operator!=(const STribeId2&) const;
    bool operator<(const STribeId2&) const;
    bool operator<=(const STribeId2& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const STribeId2& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const STribeId2& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct STribeIdDb
{
    ::Ice::Long tribeId;
    ::std::string name;
    ::Ice::Short tribeLevel;
    ::Ice::Short tribeStatus;

    bool operator==(const STribeIdDb&) const;
    bool operator!=(const STribeIdDb&) const;
    bool operator<(const STribeIdDb&) const;
    bool operator<=(const STribeIdDb& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const STribeIdDb& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const STribeIdDb& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct STribeGroup
{
    ::Ice::Long tribeId;
    ::Ice::Long groupId;
    ::std::string groupName;
    ::Ice::Long parentId;

    bool operator==(const STribeGroup&) const;
    bool operator!=(const STribeGroup&) const;
    bool operator<(const STribeGroup&) const;
    bool operator<=(const STribeGroup& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const STribeGroup& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const STribeGroup& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::ALiIMDBTribe::STribeMemberInfo> STribeMemberInfoSeq;

class __U__STribeMemberInfoSeq { };
void __write(::IceInternal::BasicStream*, const ::ALiIMDBTribe::STribeMemberInfo*, const ::ALiIMDBTribe::STribeMemberInfo*, __U__STribeMemberInfoSeq);
void __read(::IceInternal::BasicStream*, STribeMemberInfoSeq&, __U__STribeMemberInfoSeq);

typedef ::std::vector< ::ALiIMDBTribe::STribeMemberInfo2> STribeMemberInfoSeq2;

class __U__STribeMemberInfoSeq2 { };
void __write(::IceInternal::BasicStream*, const ::ALiIMDBTribe::STribeMemberInfo2*, const ::ALiIMDBTribe::STribeMemberInfo2*, __U__STribeMemberInfoSeq2);
void __read(::IceInternal::BasicStream*, STribeMemberInfoSeq2&, __U__STribeMemberInfoSeq2);

typedef ::std::vector< ::ALiIMDBTribe::STribeOfflineMsg> STribeOfflineMsgSeq;

class __U__STribeOfflineMsgSeq { };
void __write(::IceInternal::BasicStream*, const ::ALiIMDBTribe::STribeOfflineMsg*, const ::ALiIMDBTribe::STribeOfflineMsg*, __U__STribeOfflineMsgSeq);
void __read(::IceInternal::BasicStream*, STribeOfflineMsgSeq&, __U__STribeOfflineMsgSeq);

typedef ::std::vector< ::ALiIMDBTribe::STribeMember> STribeMemberSeq;

class __U__STribeMemberSeq { };
void __write(::IceInternal::BasicStream*, const ::ALiIMDBTribe::STribeMember*, const ::ALiIMDBTribe::STribeMember*, __U__STribeMemberSeq);
void __read(::IceInternal::BasicStream*, STribeMemberSeq&, __U__STribeMemberSeq);

typedef ::std::vector< ::ALiIMDBTribe::STribeId> STribeIdSeq;

class __U__STribeIdSeq { };
void __write(::IceInternal::BasicStream*, const ::ALiIMDBTribe::STribeId*, const ::ALiIMDBTribe::STribeId*, __U__STribeIdSeq);
void __read(::IceInternal::BasicStream*, STribeIdSeq&, __U__STribeIdSeq);

typedef ::std::vector< ::ALiIMDBTribe::STribeId2> STribeIdSeq2;

class __U__STribeIdSeq2 { };
void __write(::IceInternal::BasicStream*, const ::ALiIMDBTribe::STribeId2*, const ::ALiIMDBTribe::STribeId2*, __U__STribeIdSeq2);
void __read(::IceInternal::BasicStream*, STribeIdSeq2&, __U__STribeIdSeq2);

typedef ::std::vector< ::ALiIMDBTribe::STribeIdDb> STribeIdDbSeq;

class __U__STribeIdDbSeq { };
void __write(::IceInternal::BasicStream*, const ::ALiIMDBTribe::STribeIdDb*, const ::ALiIMDBTribe::STribeIdDb*, __U__STribeIdDbSeq);
void __read(::IceInternal::BasicStream*, STribeIdDbSeq&, __U__STribeIdDbSeq);

typedef ::std::vector< ::ALiIMDBTribe::STribeGroup> STribeGroupSeq;

class __U__STribeGroupSeq { };
void __write(::IceInternal::BasicStream*, const ::ALiIMDBTribe::STribeGroup*, const ::ALiIMDBTribe::STribeGroup*, __U__STribeGroupSeq);
void __read(::IceInternal::BasicStream*, STribeGroupSeq&, __U__STribeGroupSeq);

struct STribeCard
{
    ::Ice::Long tribeId;
    ::std::string memberId;
    ::std::string realName;
    ::std::string phoneNum;
    ::std::string mobileNum;
    ::std::string email;
    ::std::string address;
    ::std::string memo;

    bool operator==(const STribeCard&) const;
    bool operator!=(const STribeCard&) const;
    bool operator<(const STribeCard&) const;
    bool operator<=(const STribeCard& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const STribeCard& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const STribeCard& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct STribeInfo2
{
    ::Ice::Long tribeId;
    ::std::string name;
    ::std::string masterId;
    ::std::string createrId;
    ::Ice::Int tribeclass;
    ::std::string describe;
    ::std::string bulletin;
    ::Ice::Short checkMode;
    ::std::string password;
    ::std::string validateCode;
    ::Ice::Int lastMsgid;
    ::Ice::Int memberTimes;
    ::Ice::Int onlineTimes;
    ::Ice::Double onlineDegree;
    ::Ice::Int discussDegree;
    ::Ice::Double rewardDegree;
    ::Ice::Int masterOffer;
    ::Ice::Double totalDegree;
    ::std::string keyword;
    ::Ice::Short allowVisitor;
    ::Ice::Short forbidSearch;
    ::std::string extSign;
    ::Ice::Int groupStamp;
    ::Ice::Int blackStamp;
    ::std::string webTid;
    ::Ice::Long groupId;

    bool operator==(const STribeInfo2&) const;
    bool operator!=(const STribeInfo2&) const;
    bool operator<(const STribeInfo2&) const;
    bool operator<=(const STribeInfo2& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const STribeInfo2& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const STribeInfo2& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct STribeMember2
{
    ::Ice::Long tribeId;
    ::std::string memberId;
    ::std::string name;
    ::Ice::Int level;
    ::Ice::Int lastMsgid;
    ::std::string operId;
    ::Ice::Long groupId;

    bool operator==(const STribeMember2&) const;
    bool operator!=(const STribeMember2&) const;
    bool operator<(const STribeMember2&) const;
    bool operator<=(const STribeMember2& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const STribeMember2& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const STribeMember2& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::ALiIMDBTribe::STribeMember2> STribeMember2Seq;

class __U__STribeMember2Seq { };
void __write(::IceInternal::BasicStream*, const ::ALiIMDBTribe::STribeMember2*, const ::ALiIMDBTribe::STribeMember2*, __U__STribeMember2Seq);
void __read(::IceInternal::BasicStream*, STribeMember2Seq&, __U__STribeMember2Seq);

struct STribeInfo3
{
    ::Ice::Long tribeId;
    ::std::string name;
    ::std::string masterId;
    ::std::string createrId;
    ::Ice::Int tribeclass;
    ::std::string describe;
    ::std::string bulletin;
    ::Ice::Short checkMode;
    ::std::string password;
    ::std::string validateCode;
    ::Ice::Int lastMsgid;
    ::Ice::Int memberTimes;
    ::Ice::Int onlineTimes;
    ::Ice::Double onlineDegree;
    ::Ice::Int discussDegree;
    ::Ice::Double rewardDegree;
    ::Ice::Int masterOffer;
    ::Ice::Double totalDegree;
    ::std::string keyword;
    ::Ice::Short allowVisitor;
    ::Ice::Short forbidSearch;
    ::std::string extSign;
    ::Ice::Int groupStamp;
    ::Ice::Int blackStamp;
    ::std::string webTid;
    ::Ice::Long groupId;
    ::Ice::Int tribeLimit;

    bool operator==(const STribeInfo3&) const;
    bool operator!=(const STribeInfo3&) const;
    bool operator<(const STribeInfo3&) const;
    bool operator<=(const STribeInfo3& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const STribeInfo3& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const STribeInfo3& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SWebTribeGroup
{
    ::Ice::Long groupId;
    ::std::string groupName;
    ::std::string serviceId;
    ::std::string siteId;
    ::std::string webId;

    bool operator==(const SWebTribeGroup&) const;
    bool operator!=(const SWebTribeGroup&) const;
    bool operator<(const SWebTribeGroup&) const;
    bool operator<=(const SWebTribeGroup& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SWebTribeGroup& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SWebTribeGroup& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::ALiIMDBTribe::SWebTribeGroup> SWebTribeGroupSeq;

class __U__SWebTribeGroupSeq { };
void __write(::IceInternal::BasicStream*, const ::ALiIMDBTribe::SWebTribeGroup*, const ::ALiIMDBTribe::SWebTribeGroup*, __U__SWebTribeGroupSeq);
void __read(::IceInternal::BasicStream*, SWebTribeGroupSeq&, __U__SWebTribeGroupSeq);

struct SWebTribeId
{
    ::Ice::Long tribeId;
    ::std::string name;
    ::Ice::Short tribeLevel;
    ::Ice::Short tribeStatus;
    ::std::string extSign;
    ::Ice::Int groupStamp;
    ::Ice::Short openTribe;
    ::std::string webTid;
    ::Ice::Long groupId;

    bool operator==(const SWebTribeId&) const;
    bool operator!=(const SWebTribeId&) const;
    bool operator<(const SWebTribeId&) const;
    bool operator<=(const SWebTribeId& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SWebTribeId& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SWebTribeId& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::ALiIMDBTribe::SWebTribeId> SWebTribeIdSeq;

class __U__SWebTribeIdSeq { };
void __write(::IceInternal::BasicStream*, const ::ALiIMDBTribe::SWebTribeId*, const ::ALiIMDBTribe::SWebTribeId*, __U__SWebTribeIdSeq);
void __read(::IceInternal::BasicStream*, SWebTribeIdSeq&, __U__SWebTribeIdSeq);

}

#endif
