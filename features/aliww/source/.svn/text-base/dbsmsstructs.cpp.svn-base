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

#include <dbsmsstructs.h>
#include <Ice/BasicStream.h>
#include <Ice/Object.h>
#include <IceUtil/Iterator.h>
#include <IceUtil/ScopedArray.h>

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

bool
ALiIMDBSms::SSmsUserInfo::operator==(const SSmsUserInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
ALiIMDBSms::SSmsUserInfo::operator!=(const SSmsUserInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(userId != __rhs.userId)
    {
        return true;
    }
    if(bindFlag != __rhs.bindFlag)
    {
        return true;
    }
    if(mobileOnlineFlag != __rhs.mobileOnlineFlag)
    {
        return true;
    }
    if(revFlag != __rhs.revFlag)
    {
        return true;
    }
    if(account != __rhs.account)
    {
        return true;
    }
    if(password != __rhs.password)
    {
        return true;
    }
    if(mobileNo != __rhs.mobileNo)
    {
        return true;
    }
    if(balance != __rhs.balance)
    {
        return true;
    }
    return false;
}

bool
ALiIMDBSms::SSmsUserInfo::operator<(const SSmsUserInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(userId < __rhs.userId)
    {
        return true;
    }
    else if(__rhs.userId < userId)
    {
        return false;
    }
    if(bindFlag < __rhs.bindFlag)
    {
        return true;
    }
    else if(__rhs.bindFlag < bindFlag)
    {
        return false;
    }
    if(mobileOnlineFlag < __rhs.mobileOnlineFlag)
    {
        return true;
    }
    else if(__rhs.mobileOnlineFlag < mobileOnlineFlag)
    {
        return false;
    }
    if(revFlag < __rhs.revFlag)
    {
        return true;
    }
    else if(__rhs.revFlag < revFlag)
    {
        return false;
    }
    if(account < __rhs.account)
    {
        return true;
    }
    else if(__rhs.account < account)
    {
        return false;
    }
    if(password < __rhs.password)
    {
        return true;
    }
    else if(__rhs.password < password)
    {
        return false;
    }
    if(mobileNo < __rhs.mobileNo)
    {
        return true;
    }
    else if(__rhs.mobileNo < mobileNo)
    {
        return false;
    }
    if(balance < __rhs.balance)
    {
        return true;
    }
    else if(__rhs.balance < balance)
    {
        return false;
    }
    return false;
}

void
ALiIMDBSms::SSmsUserInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(userId);
    __os->write(bindFlag);
    __os->write(mobileOnlineFlag);
    __os->write(revFlag);
    __os->write(account);
    __os->write(password);
    __os->write(mobileNo);
    __os->write(balance);
}

void
ALiIMDBSms::SSmsUserInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(userId);
    __is->read(bindFlag);
    __is->read(mobileOnlineFlag);
    __is->read(revFlag);
    __is->read(account);
    __is->read(password);
    __is->read(mobileNo);
    __is->read(balance);
}

bool
ALiIMDBSms::SSmsMsgInfo::operator==(const SSmsMsgInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
ALiIMDBSms::SSmsMsgInfo::operator!=(const SSmsMsgInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(msgId != __rhs.msgId)
    {
        return true;
    }
    if(inoutType != __rhs.inoutType)
    {
        return true;
    }
    if(infoType != __rhs.infoType)
    {
        return true;
    }
    if(payType != __rhs.payType)
    {
        return true;
    }
    if(fromId != __rhs.fromId)
    {
        return true;
    }
    if(fromMobile != __rhs.fromMobile)
    {
        return true;
    }
    if(toId != __rhs.toId)
    {
        return true;
    }
    if(toMobile != __rhs.toMobile)
    {
        return true;
    }
    if(content != __rhs.content)
    {
        return true;
    }
    if(status != __rhs.status)
    {
        return true;
    }
    if(errorDesc != __rhs.errorDesc)
    {
        return true;
    }
    if(transId != __rhs.transId)
    {
        return true;
    }
    if(sendTime != __rhs.sendTime)
    {
        return true;
    }
    return false;
}

bool
ALiIMDBSms::SSmsMsgInfo::operator<(const SSmsMsgInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(msgId < __rhs.msgId)
    {
        return true;
    }
    else if(__rhs.msgId < msgId)
    {
        return false;
    }
    if(inoutType < __rhs.inoutType)
    {
        return true;
    }
    else if(__rhs.inoutType < inoutType)
    {
        return false;
    }
    if(infoType < __rhs.infoType)
    {
        return true;
    }
    else if(__rhs.infoType < infoType)
    {
        return false;
    }
    if(payType < __rhs.payType)
    {
        return true;
    }
    else if(__rhs.payType < payType)
    {
        return false;
    }
    if(fromId < __rhs.fromId)
    {
        return true;
    }
    else if(__rhs.fromId < fromId)
    {
        return false;
    }
    if(fromMobile < __rhs.fromMobile)
    {
        return true;
    }
    else if(__rhs.fromMobile < fromMobile)
    {
        return false;
    }
    if(toId < __rhs.toId)
    {
        return true;
    }
    else if(__rhs.toId < toId)
    {
        return false;
    }
    if(toMobile < __rhs.toMobile)
    {
        return true;
    }
    else if(__rhs.toMobile < toMobile)
    {
        return false;
    }
    if(content < __rhs.content)
    {
        return true;
    }
    else if(__rhs.content < content)
    {
        return false;
    }
    if(status < __rhs.status)
    {
        return true;
    }
    else if(__rhs.status < status)
    {
        return false;
    }
    if(errorDesc < __rhs.errorDesc)
    {
        return true;
    }
    else if(__rhs.errorDesc < errorDesc)
    {
        return false;
    }
    if(transId < __rhs.transId)
    {
        return true;
    }
    else if(__rhs.transId < transId)
    {
        return false;
    }
    if(sendTime < __rhs.sendTime)
    {
        return true;
    }
    else if(__rhs.sendTime < sendTime)
    {
        return false;
    }
    return false;
}

void
ALiIMDBSms::SSmsMsgInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(msgId);
    __os->write(inoutType);
    __os->write(infoType);
    __os->write(payType);
    __os->write(fromId);
    __os->write(fromMobile);
    __os->write(toId);
    __os->write(toMobile);
    __os->write(content);
    __os->write(status);
    __os->write(errorDesc);
    __os->write(transId);
    __os->write(sendTime);
}

void
ALiIMDBSms::SSmsMsgInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(msgId);
    __is->read(inoutType);
    __is->read(infoType);
    __is->read(payType);
    __is->read(fromId);
    __is->read(fromMobile);
    __is->read(toId);
    __is->read(toMobile);
    __is->read(content);
    __is->read(status);
    __is->read(errorDesc);
    __is->read(transId);
    __is->read(sendTime);
}

bool
ALiIMDBSms::SChargeInfo::operator==(const SChargeInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
ALiIMDBSms::SChargeInfo::operator!=(const SChargeInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(chargeSeqId != __rhs.chargeSeqId)
    {
        return true;
    }
    if(paySeqId != __rhs.paySeqId)
    {
        return true;
    }
    if(chargeBeginTime != __rhs.chargeBeginTime)
    {
        return true;
    }
    if(denomination != __rhs.denomination)
    {
        return true;
    }
    if(payRealMoney != __rhs.payRealMoney)
    {
        return true;
    }
    if(chargeStatus != __rhs.chargeStatus)
    {
        return true;
    }
    if(payStatus != __rhs.payStatus)
    {
        return true;
    }
    return false;
}

bool
ALiIMDBSms::SChargeInfo::operator<(const SChargeInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(chargeSeqId < __rhs.chargeSeqId)
    {
        return true;
    }
    else if(__rhs.chargeSeqId < chargeSeqId)
    {
        return false;
    }
    if(paySeqId < __rhs.paySeqId)
    {
        return true;
    }
    else if(__rhs.paySeqId < paySeqId)
    {
        return false;
    }
    if(chargeBeginTime < __rhs.chargeBeginTime)
    {
        return true;
    }
    else if(__rhs.chargeBeginTime < chargeBeginTime)
    {
        return false;
    }
    if(denomination < __rhs.denomination)
    {
        return true;
    }
    else if(__rhs.denomination < denomination)
    {
        return false;
    }
    if(payRealMoney < __rhs.payRealMoney)
    {
        return true;
    }
    else if(__rhs.payRealMoney < payRealMoney)
    {
        return false;
    }
    if(chargeStatus < __rhs.chargeStatus)
    {
        return true;
    }
    else if(__rhs.chargeStatus < chargeStatus)
    {
        return false;
    }
    if(payStatus < __rhs.payStatus)
    {
        return true;
    }
    else if(__rhs.payStatus < payStatus)
    {
        return false;
    }
    return false;
}

void
ALiIMDBSms::SChargeInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(chargeSeqId);
    __os->write(paySeqId);
    __os->write(chargeBeginTime);
    __os->write(denomination);
    __os->write(payRealMoney);
    __os->write(chargeStatus);
    __os->write(payStatus);
}

void
ALiIMDBSms::SChargeInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(chargeSeqId);
    __is->read(paySeqId);
    __is->read(chargeBeginTime);
    __is->read(denomination);
    __is->read(payRealMoney);
    __is->read(chargeStatus);
    __is->read(payStatus);
}

bool
ALiIMDBSms::SSmsTempUser::operator==(const SSmsTempUser& __rhs) const
{
    return !operator!=(__rhs);
}

bool
ALiIMDBSms::SSmsTempUser::operator!=(const SSmsTempUser& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(account != __rhs.account)
    {
        return true;
    }
    if(password != __rhs.password)
    {
        return true;
    }
    if(userId != __rhs.userId)
    {
        return true;
    }
    if(addTime != __rhs.addTime)
    {
        return true;
    }
    return false;
}

bool
ALiIMDBSms::SSmsTempUser::operator<(const SSmsTempUser& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(account < __rhs.account)
    {
        return true;
    }
    else if(__rhs.account < account)
    {
        return false;
    }
    if(password < __rhs.password)
    {
        return true;
    }
    else if(__rhs.password < password)
    {
        return false;
    }
    if(userId < __rhs.userId)
    {
        return true;
    }
    else if(__rhs.userId < userId)
    {
        return false;
    }
    if(addTime < __rhs.addTime)
    {
        return true;
    }
    else if(__rhs.addTime < addTime)
    {
        return false;
    }
    return false;
}

void
ALiIMDBSms::SSmsTempUser::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(account);
    __os->write(password);
    __os->write(userId);
    __os->write(addTime);
}

void
ALiIMDBSms::SSmsTempUser::__read(::IceInternal::BasicStream* __is)
{
    __is->read(account);
    __is->read(password);
    __is->read(userId);
    __is->read(addTime);
}

bool
ALiIMDBSms::SUserBaseInfo::operator==(const SUserBaseInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
ALiIMDBSms::SUserBaseInfo::operator!=(const SUserBaseInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(userId != __rhs.userId)
    {
        return true;
    }
    if(userName != __rhs.userName)
    {
        return true;
    }
    if(email != __rhs.email)
    {
        return true;
    }
    if(company != __rhs.company)
    {
        return true;
    }
    if(jobtitle != __rhs.jobtitle)
    {
        return true;
    }
    if(address != __rhs.address)
    {
        return true;
    }
    return false;
}

bool
ALiIMDBSms::SUserBaseInfo::operator<(const SUserBaseInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(userId < __rhs.userId)
    {
        return true;
    }
    else if(__rhs.userId < userId)
    {
        return false;
    }
    if(userName < __rhs.userName)
    {
        return true;
    }
    else if(__rhs.userName < userName)
    {
        return false;
    }
    if(email < __rhs.email)
    {
        return true;
    }
    else if(__rhs.email < email)
    {
        return false;
    }
    if(company < __rhs.company)
    {
        return true;
    }
    else if(__rhs.company < company)
    {
        return false;
    }
    if(jobtitle < __rhs.jobtitle)
    {
        return true;
    }
    else if(__rhs.jobtitle < jobtitle)
    {
        return false;
    }
    if(address < __rhs.address)
    {
        return true;
    }
    else if(__rhs.address < address)
    {
        return false;
    }
    return false;
}

void
ALiIMDBSms::SUserBaseInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(userId);
    __os->write(userName);
    __os->write(email);
    __os->write(company);
    __os->write(jobtitle);
    __os->write(address);
}

void
ALiIMDBSms::SUserBaseInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(userId);
    __is->read(userName);
    __is->read(email);
    __is->read(company);
    __is->read(jobtitle);
    __is->read(address);
}

bool
ALiIMDBSms::SSmsUserBalance::operator==(const SSmsUserBalance& __rhs) const
{
    return !operator!=(__rhs);
}

bool
ALiIMDBSms::SSmsUserBalance::operator!=(const SSmsUserBalance& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(userId != __rhs.userId)
    {
        return true;
    }
    if(balance != __rhs.balance)
    {
        return true;
    }
    if(presentBalance != __rhs.presentBalance)
    {
        return true;
    }
    if(presentExpireTime != __rhs.presentExpireTime)
    {
        return true;
    }
    if(presentRemindFlag != __rhs.presentRemindFlag)
    {
        return true;
    }
    return false;
}

bool
ALiIMDBSms::SSmsUserBalance::operator<(const SSmsUserBalance& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(userId < __rhs.userId)
    {
        return true;
    }
    else if(__rhs.userId < userId)
    {
        return false;
    }
    if(balance < __rhs.balance)
    {
        return true;
    }
    else if(__rhs.balance < balance)
    {
        return false;
    }
    if(presentBalance < __rhs.presentBalance)
    {
        return true;
    }
    else if(__rhs.presentBalance < presentBalance)
    {
        return false;
    }
    if(presentExpireTime < __rhs.presentExpireTime)
    {
        return true;
    }
    else if(__rhs.presentExpireTime < presentExpireTime)
    {
        return false;
    }
    if(presentRemindFlag < __rhs.presentRemindFlag)
    {
        return true;
    }
    else if(__rhs.presentRemindFlag < presentRemindFlag)
    {
        return false;
    }
    return false;
}

void
ALiIMDBSms::SSmsUserBalance::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(userId);
    __os->write(balance);
    __os->write(presentBalance);
    __os->write(presentExpireTime);
    __os->write(presentRemindFlag);
}

void
ALiIMDBSms::SSmsUserBalance::__read(::IceInternal::BasicStream* __is)
{
    __is->read(userId);
    __is->read(balance);
    __is->read(presentBalance);
    __is->read(presentExpireTime);
    __is->read(presentRemindFlag);
}

void
ALiIMDBSms::__write(::IceInternal::BasicStream* __os, const ::ALiIMDBSms::SSmsUserInfo* begin, const ::ALiIMDBSms::SSmsUserInfo* end, ::ALiIMDBSms::__U__SSmsUserInfoSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
ALiIMDBSms::__read(::IceInternal::BasicStream* __is, ::ALiIMDBSms::SSmsUserInfoSeq& v, ::ALiIMDBSms::__U__SSmsUserInfoSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 20);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
ALiIMDBSms::__write(::IceInternal::BasicStream* __os, const ::ALiIMDBSms::SSmsMsgInfo* begin, const ::ALiIMDBSms::SSmsMsgInfo* end, ::ALiIMDBSms::__U__SSmsMsgInfoSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
ALiIMDBSms::__read(::IceInternal::BasicStream* __is, ::ALiIMDBSms::SSmsMsgInfoSeq& v, ::ALiIMDBSms::__U__SSmsMsgInfoSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 25);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
ALiIMDBSms::__write(::IceInternal::BasicStream* __os, const ::ALiIMDBSms::SChargeInfo* begin, const ::ALiIMDBSms::SChargeInfo* end, ::ALiIMDBSms::__U__SChargeInfoSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
ALiIMDBSms::__read(::IceInternal::BasicStream* __is, ::ALiIMDBSms::SChargeInfoSeq& v, ::ALiIMDBSms::__U__SChargeInfoSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 19);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
ALiIMDBSms::__write(::IceInternal::BasicStream* __os, const ::ALiIMDBSms::SSmsTempUser* begin, const ::ALiIMDBSms::SSmsTempUser* end, ::ALiIMDBSms::__U__SSmsTempUserSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
ALiIMDBSms::__read(::IceInternal::BasicStream* __is, ::ALiIMDBSms::SSmsTempUserSeq& v, ::ALiIMDBSms::__U__SSmsTempUserSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 4);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
ALiIMDBSms::__write(::IceInternal::BasicStream* __os, const ::ALiIMDBSms::SSmsUserBalance* begin, const ::ALiIMDBSms::SSmsUserBalance* end, ::ALiIMDBSms::__U__SSmsUserBalanceSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
ALiIMDBSms::__read(::IceInternal::BasicStream* __is, ::ALiIMDBSms::SSmsUserBalanceSeq& v, ::ALiIMDBSms::__U__SSmsUserBalanceSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 14);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}
