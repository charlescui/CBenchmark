// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `dbsmsstructs.ice'

#ifndef __dbsmsstructs_h__
#define __dbsmsstructs_h__

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

namespace ALiIMDBSms
{

struct SSmsUserInfo
{
    ::std::string userId;
    ::Ice::Int bindFlag;
    ::Ice::Int mobileOnlineFlag;
    ::Ice::Int revFlag;
    ::std::string account;
    ::std::string password;
    ::std::string mobileNo;
    ::Ice::Int balance;

    bool operator==(const SSmsUserInfo&) const;
    bool operator!=(const SSmsUserInfo&) const;
    bool operator<(const SSmsUserInfo&) const;
    bool operator<=(const SSmsUserInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SSmsUserInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SSmsUserInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SSmsMsgInfo
{
    ::std::string msgId;
    ::Ice::Int inoutType;
    ::Ice::Int infoType;
    ::Ice::Int payType;
    ::std::string fromId;
    ::std::string fromMobile;
    ::std::string toId;
    ::std::string toMobile;
    ::std::string content;
    ::Ice::Int status;
    ::std::string errorDesc;
    ::std::string transId;
    ::std::string sendTime;

    bool operator==(const SSmsMsgInfo&) const;
    bool operator!=(const SSmsMsgInfo&) const;
    bool operator<(const SSmsMsgInfo&) const;
    bool operator<=(const SSmsMsgInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SSmsMsgInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SSmsMsgInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SChargeInfo
{
    ::std::string chargeSeqId;
    ::std::string paySeqId;
    ::std::string chargeBeginTime;
    ::Ice::Int denomination;
    ::Ice::Int payRealMoney;
    ::Ice::Int chargeStatus;
    ::Ice::Int payStatus;

    bool operator==(const SChargeInfo&) const;
    bool operator!=(const SChargeInfo&) const;
    bool operator<(const SChargeInfo&) const;
    bool operator<=(const SChargeInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SChargeInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SChargeInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SSmsTempUser
{
    ::std::string account;
    ::std::string password;
    ::std::string userId;
    ::std::string addTime;

    bool operator==(const SSmsTempUser&) const;
    bool operator!=(const SSmsTempUser&) const;
    bool operator<(const SSmsTempUser&) const;
    bool operator<=(const SSmsTempUser& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SSmsTempUser& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SSmsTempUser& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SUserBaseInfo
{
    ::std::string userId;
    ::std::string userName;
    ::std::string email;
    ::std::string company;
    ::std::string jobtitle;
    ::std::string address;

    bool operator==(const SUserBaseInfo&) const;
    bool operator!=(const SUserBaseInfo&) const;
    bool operator<(const SUserBaseInfo&) const;
    bool operator<=(const SUserBaseInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SUserBaseInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SUserBaseInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SSmsUserBalance
{
    ::std::string userId;
    ::Ice::Int balance;
    ::Ice::Int presentBalance;
    ::std::string presentExpireTime;
    ::Ice::Int presentRemindFlag;

    bool operator==(const SSmsUserBalance&) const;
    bool operator!=(const SSmsUserBalance&) const;
    bool operator<(const SSmsUserBalance&) const;
    bool operator<=(const SSmsUserBalance& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SSmsUserBalance& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SSmsUserBalance& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::ALiIMDBSms::SSmsUserInfo> SSmsUserInfoSeq;

class __U__SSmsUserInfoSeq { };
void __write(::IceInternal::BasicStream*, const ::ALiIMDBSms::SSmsUserInfo*, const ::ALiIMDBSms::SSmsUserInfo*, __U__SSmsUserInfoSeq);
void __read(::IceInternal::BasicStream*, SSmsUserInfoSeq&, __U__SSmsUserInfoSeq);

typedef ::std::vector< ::ALiIMDBSms::SSmsMsgInfo> SSmsMsgInfoSeq;

class __U__SSmsMsgInfoSeq { };
void __write(::IceInternal::BasicStream*, const ::ALiIMDBSms::SSmsMsgInfo*, const ::ALiIMDBSms::SSmsMsgInfo*, __U__SSmsMsgInfoSeq);
void __read(::IceInternal::BasicStream*, SSmsMsgInfoSeq&, __U__SSmsMsgInfoSeq);

typedef ::std::vector< ::ALiIMDBSms::SChargeInfo> SChargeInfoSeq;

class __U__SChargeInfoSeq { };
void __write(::IceInternal::BasicStream*, const ::ALiIMDBSms::SChargeInfo*, const ::ALiIMDBSms::SChargeInfo*, __U__SChargeInfoSeq);
void __read(::IceInternal::BasicStream*, SChargeInfoSeq&, __U__SChargeInfoSeq);

typedef ::std::vector< ::ALiIMDBSms::SSmsTempUser> SSmsTempUserSeq;

class __U__SSmsTempUserSeq { };
void __write(::IceInternal::BasicStream*, const ::ALiIMDBSms::SSmsTempUser*, const ::ALiIMDBSms::SSmsTempUser*, __U__SSmsTempUserSeq);
void __read(::IceInternal::BasicStream*, SSmsTempUserSeq&, __U__SSmsTempUserSeq);

typedef ::std::vector< ::ALiIMDBSms::SSmsUserBalance> SSmsUserBalanceSeq;

class __U__SSmsUserBalanceSeq { };
void __write(::IceInternal::BasicStream*, const ::ALiIMDBSms::SSmsUserBalance*, const ::ALiIMDBSms::SSmsUserBalance*, __U__SSmsUserBalanceSeq);
void __read(::IceInternal::BasicStream*, SSmsUserBalanceSeq&, __U__SSmsUserBalanceSeq);

typedef ::std::vector< ::std::string> SSmsRevUserSeq;

class __U__SSmsRevUserSeq { };

}

#endif
