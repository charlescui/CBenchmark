// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `snsscores.ice'

#include <snsscores.h>
#include <Ice/LocalException.h>
#include <Ice/ObjectFactory.h>
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

static const ::std::string __ALISNS__ScoreInterface__addBehaviorScore_name = "addBehaviorScore";

static const ::std::string __ALISNS__ScoreInterface__updateScore_name = "updateScore";

static const ::std::string __ALISNS__ScoreInterface__getUserTotalScore_name = "getUserTotalScore";

static const ::std::string __ALISNS__ScoreInterface__getUserScoreFlows_name = "getUserScoreFlows";

static const ::std::string __ALISNS__ScoreInterface__getBidConfig_name = "getBidConfig";

static const ::std::string __ALISNS__ScoreInterface__getBidScoreInfo_name = "getBidScoreInfo";

static const ::std::string __ALISNS__ScoreInterface__getUserBidScoreInfo_name = "getUserBidScoreInfo";

void
IceInternal::incRef(::ALISNS::ScoreInterface* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::ALISNS::ScoreInterface* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::ALISNS::ScoreInterface* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::ALISNS::ScoreInterface* p)
{
    p->__decRef();
}

void
ALISNS::__write(::IceInternal::BasicStream* __os, const ::ALISNS::ScoreInterfacePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
ALISNS::__read(::IceInternal::BasicStream* __is, ::ALISNS::ScoreInterfacePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::ALISNS::ScoreInterface;
        v->__copyFrom(proxy);
    }
}

void
ALISNS::__write(::IceInternal::BasicStream* __os, const ::ALISNS::ScoreInterfacePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

bool
ALISNS::ScoreFlowUnit::operator==(const ScoreFlowUnit& __rhs) const
{
    return !operator!=(__rhs);
}

bool
ALISNS::ScoreFlowUnit::operator!=(const ScoreFlowUnit& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(flowID != __rhs.flowID)
    {
        return true;
    }
    if(gmtCreate != __rhs.gmtCreate)
    {
        return true;
    }
    if(gmtModified != __rhs.gmtModified)
    {
        return true;
    }
    if(userLongId != __rhs.userLongId)
    {
        return true;
    }
    if(behaviorId != __rhs.behaviorId)
    {
        return true;
    }
    if(behaviorName != __rhs.behaviorName)
    {
        return true;
    }
    if(score != __rhs.score)
    {
        return true;
    }
    if(note != __rhs.note)
    {
        return true;
    }
    return false;
}

bool
ALISNS::ScoreFlowUnit::operator<(const ScoreFlowUnit& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(flowID < __rhs.flowID)
    {
        return true;
    }
    else if(__rhs.flowID < flowID)
    {
        return false;
    }
    if(gmtCreate < __rhs.gmtCreate)
    {
        return true;
    }
    else if(__rhs.gmtCreate < gmtCreate)
    {
        return false;
    }
    if(gmtModified < __rhs.gmtModified)
    {
        return true;
    }
    else if(__rhs.gmtModified < gmtModified)
    {
        return false;
    }
    if(userLongId < __rhs.userLongId)
    {
        return true;
    }
    else if(__rhs.userLongId < userLongId)
    {
        return false;
    }
    if(behaviorId < __rhs.behaviorId)
    {
        return true;
    }
    else if(__rhs.behaviorId < behaviorId)
    {
        return false;
    }
    if(behaviorName < __rhs.behaviorName)
    {
        return true;
    }
    else if(__rhs.behaviorName < behaviorName)
    {
        return false;
    }
    if(score < __rhs.score)
    {
        return true;
    }
    else if(__rhs.score < score)
    {
        return false;
    }
    if(note < __rhs.note)
    {
        return true;
    }
    else if(__rhs.note < note)
    {
        return false;
    }
    return false;
}

void
ALISNS::ScoreFlowUnit::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(flowID);
    __os->write(gmtCreate);
    __os->write(gmtModified);
    __os->write(userLongId);
    __os->write(behaviorId);
    __os->write(behaviorName);
    __os->write(score);
    __os->write(note);
}

void
ALISNS::ScoreFlowUnit::__read(::IceInternal::BasicStream* __is)
{
    __is->read(flowID);
    __is->read(gmtCreate);
    __is->read(gmtModified);
    __is->read(userLongId);
    __is->read(behaviorId);
    __is->read(behaviorName);
    __is->read(score);
    __is->read(note);
}

bool
ALISNS::BidConfigInfo::operator==(const BidConfigInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
ALISNS::BidConfigInfo::operator!=(const BidConfigInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(sBid != __rhs.sBid)
    {
        return true;
    }
    if(sName != __rhs.sName)
    {
        return true;
    }
    if(sAppId != __rhs.sAppId)
    {
        return true;
    }
    if(iTimesLimit != __rhs.iTimesLimit)
    {
        return true;
    }
    if(iScoreLimit != __rhs.iScoreLimit)
    {
        return true;
    }
    if(iDayTimesLimit != __rhs.iDayTimesLimit)
    {
        return true;
    }
    if(iDayScoreLimit != __rhs.iDayScoreLimit)
    {
        return true;
    }
    if(iPersonTimesLimit != __rhs.iPersonTimesLimit)
    {
        return true;
    }
    if(iPersonScoreLimit != __rhs.iPersonScoreLimit)
    {
        return true;
    }
    if(iPersonDayTimesLimit != __rhs.iPersonDayTimesLimit)
    {
        return true;
    }
    if(iPersonDayScoreLimit != __rhs.iPersonDayScoreLimit)
    {
        return true;
    }
    if(iScoreType != __rhs.iScoreType)
    {
        return true;
    }
    if(iScore != __rhs.iScore)
    {
        return true;
    }
    if(iStatus != __rhs.iStatus)
    {
        return true;
    }
    return false;
}

bool
ALISNS::BidConfigInfo::operator<(const BidConfigInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(sBid < __rhs.sBid)
    {
        return true;
    }
    else if(__rhs.sBid < sBid)
    {
        return false;
    }
    if(sName < __rhs.sName)
    {
        return true;
    }
    else if(__rhs.sName < sName)
    {
        return false;
    }
    if(sAppId < __rhs.sAppId)
    {
        return true;
    }
    else if(__rhs.sAppId < sAppId)
    {
        return false;
    }
    if(iTimesLimit < __rhs.iTimesLimit)
    {
        return true;
    }
    else if(__rhs.iTimesLimit < iTimesLimit)
    {
        return false;
    }
    if(iScoreLimit < __rhs.iScoreLimit)
    {
        return true;
    }
    else if(__rhs.iScoreLimit < iScoreLimit)
    {
        return false;
    }
    if(iDayTimesLimit < __rhs.iDayTimesLimit)
    {
        return true;
    }
    else if(__rhs.iDayTimesLimit < iDayTimesLimit)
    {
        return false;
    }
    if(iDayScoreLimit < __rhs.iDayScoreLimit)
    {
        return true;
    }
    else if(__rhs.iDayScoreLimit < iDayScoreLimit)
    {
        return false;
    }
    if(iPersonTimesLimit < __rhs.iPersonTimesLimit)
    {
        return true;
    }
    else if(__rhs.iPersonTimesLimit < iPersonTimesLimit)
    {
        return false;
    }
    if(iPersonScoreLimit < __rhs.iPersonScoreLimit)
    {
        return true;
    }
    else if(__rhs.iPersonScoreLimit < iPersonScoreLimit)
    {
        return false;
    }
    if(iPersonDayTimesLimit < __rhs.iPersonDayTimesLimit)
    {
        return true;
    }
    else if(__rhs.iPersonDayTimesLimit < iPersonDayTimesLimit)
    {
        return false;
    }
    if(iPersonDayScoreLimit < __rhs.iPersonDayScoreLimit)
    {
        return true;
    }
    else if(__rhs.iPersonDayScoreLimit < iPersonDayScoreLimit)
    {
        return false;
    }
    if(iScoreType < __rhs.iScoreType)
    {
        return true;
    }
    else if(__rhs.iScoreType < iScoreType)
    {
        return false;
    }
    if(iScore < __rhs.iScore)
    {
        return true;
    }
    else if(__rhs.iScore < iScore)
    {
        return false;
    }
    if(iStatus < __rhs.iStatus)
    {
        return true;
    }
    else if(__rhs.iStatus < iStatus)
    {
        return false;
    }
    return false;
}

void
ALISNS::BidConfigInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(sBid);
    __os->write(sName);
    __os->write(sAppId);
    __os->write(iTimesLimit);
    __os->write(iScoreLimit);
    __os->write(iDayTimesLimit);
    __os->write(iDayScoreLimit);
    __os->write(iPersonTimesLimit);
    __os->write(iPersonScoreLimit);
    __os->write(iPersonDayTimesLimit);
    __os->write(iPersonDayScoreLimit);
    __os->write(iScoreType);
    __os->write(iScore);
    __os->write(iStatus);
}

void
ALISNS::BidConfigInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(sBid);
    __is->read(sName);
    __is->read(sAppId);
    __is->read(iTimesLimit);
    __is->read(iScoreLimit);
    __is->read(iDayTimesLimit);
    __is->read(iDayScoreLimit);
    __is->read(iPersonTimesLimit);
    __is->read(iPersonScoreLimit);
    __is->read(iPersonDayTimesLimit);
    __is->read(iPersonDayScoreLimit);
    __is->read(iScoreType);
    __is->read(iScore);
    __is->read(iStatus);
}

void
ALISNS::__write(::IceInternal::BasicStream* __os, const ::ALISNS::ScoreFlowUnit* begin, const ::ALISNS::ScoreFlowUnit* end, ::ALISNS::__U__ScoreFlows)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
ALISNS::__read(::IceInternal::BasicStream* __is, ::ALISNS::ScoreFlows& v, ::ALISNS::__U__ScoreFlows)
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

void
ALISNS::__addObject(const ScoreInterfacePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
ALISNS::__usesClasses(const ScoreInterfacePtr& p)
{
    return p->__usesClasses();
}

void
ALISNS::__decRefUnsafe(const ScoreInterfacePtr& p)
{
    p->__decRefUnsafe();
}

void
ALISNS::__clearHandleUnsafe(ScoreInterfacePtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::ALISNS::ScoreInterface::addBehaviorScore(const ::std::string& userLongId, const ::std::string& behaviorId, const ::std::string& note, ::Ice::Int& behaviorScore, ::Ice::Int& userScore, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALISNS__ScoreInterface__addBehaviorScore_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALISNS::ScoreInterface* __del = dynamic_cast< ::IceDelegate::ALISNS::ScoreInterface*>(__delBase.get());
            return __del->addBehaviorScore(userLongId, behaviorId, note, behaviorScore, userScore, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::ALISNS::ScoreInterface::updateScore(const ::std::string& userLongId, const ::std::string& behaviorId, const ::std::string& note, ::Ice::Int score, ::Ice::Int& userScore, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALISNS__ScoreInterface__updateScore_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALISNS::ScoreInterface* __del = dynamic_cast< ::IceDelegate::ALISNS::ScoreInterface*>(__delBase.get());
            return __del->updateScore(userLongId, behaviorId, note, score, userScore, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::ALISNS::ScoreInterface::getUserTotalScore(const ::std::string& userLongId, ::Ice::Int& userScore, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALISNS__ScoreInterface__getUserTotalScore_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALISNS::ScoreInterface* __del = dynamic_cast< ::IceDelegate::ALISNS::ScoreInterface*>(__delBase.get());
            return __del->getUserTotalScore(userLongId, userScore, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::ALISNS::ScoreInterface::getUserScoreFlows(const ::std::string& userLongId, const ::std::string& beginDate, const ::std::string& endDate, ::Ice::Int start, ::Ice::Int pageCount, ::Ice::Int& totalNum, ::ALISNS::ScoreFlows& flows, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALISNS__ScoreInterface__getUserScoreFlows_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALISNS::ScoreInterface* __del = dynamic_cast< ::IceDelegate::ALISNS::ScoreInterface*>(__delBase.get());
            return __del->getUserScoreFlows(userLongId, beginDate, endDate, start, pageCount, totalNum, flows, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::ALISNS::ScoreInterface::getBidConfig(const ::std::string& sBid, ::ALISNS::BidConfigInfo& conf, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALISNS__ScoreInterface__getBidConfig_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALISNS::ScoreInterface* __del = dynamic_cast< ::IceDelegate::ALISNS::ScoreInterface*>(__delBase.get());
            return __del->getBidConfig(sBid, conf, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::ALISNS::ScoreInterface::getBidScoreInfo(const ::std::string& sBid, ::Ice::Int& iScoreTimes, ::Ice::Int& iTotalScore, ::Ice::Int& iDayScoreTimes, ::Ice::Int& iDayTotalScore, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALISNS__ScoreInterface__getBidScoreInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALISNS::ScoreInterface* __del = dynamic_cast< ::IceDelegate::ALISNS::ScoreInterface*>(__delBase.get());
            return __del->getBidScoreInfo(sBid, iScoreTimes, iTotalScore, iDayScoreTimes, iDayTotalScore, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::ALISNS::ScoreInterface::getUserBidScoreInfo(const ::std::string& userLongId, const ::std::string& behaviorId, ::Ice::Int& iPersonTotalScore, ::Ice::Int& iPersonAwardScore, ::Ice::Int& iPersonBidTotalTimes, ::Ice::Int& iPersonBidTotalScore, ::Ice::Int& iPersonDayBidTotalTimes, ::Ice::Int& iPersonDayBidTotalScore, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALISNS__ScoreInterface__getUserBidScoreInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALISNS::ScoreInterface* __del = dynamic_cast< ::IceDelegate::ALISNS::ScoreInterface*>(__delBase.get());
            return __del->getUserBidScoreInfo(userLongId, behaviorId, iPersonTotalScore, iPersonAwardScore, iPersonBidTotalTimes, iPersonBidTotalScore, iPersonDayBidTotalTimes, iPersonDayBidTotalScore, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

const ::std::string&
IceProxy::ALISNS::ScoreInterface::ice_staticId()
{
    return ::ALISNS::ScoreInterface::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::ALISNS::ScoreInterface::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::ALISNS::ScoreInterface);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::ALISNS::ScoreInterface::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::ALISNS::ScoreInterface);
}

bool
IceProxy::ALISNS::operator==(const ::IceProxy::ALISNS::ScoreInterface& l, const ::IceProxy::ALISNS::ScoreInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::ALISNS::operator!=(const ::IceProxy::ALISNS::ScoreInterface& l, const ::IceProxy::ALISNS::ScoreInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::ALISNS::operator<(const ::IceProxy::ALISNS::ScoreInterface& l, const ::IceProxy::ALISNS::ScoreInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::ALISNS::operator<=(const ::IceProxy::ALISNS::ScoreInterface& l, const ::IceProxy::ALISNS::ScoreInterface& r)
{
    return l < r || l == r;
}

bool
IceProxy::ALISNS::operator>(const ::IceProxy::ALISNS::ScoreInterface& l, const ::IceProxy::ALISNS::ScoreInterface& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::ALISNS::operator>=(const ::IceProxy::ALISNS::ScoreInterface& l, const ::IceProxy::ALISNS::ScoreInterface& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::ALISNS::ScoreInterface::addBehaviorScore(const ::std::string& userLongId, const ::std::string& behaviorId, const ::std::string& note, ::Ice::Int& behaviorScore, ::Ice::Int& userScore, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALISNS__ScoreInterface__addBehaviorScore_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userLongId);
        __os->write(behaviorId);
        __os->write(note);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(behaviorScore);
        __is->read(userScore);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALISNS::ScoreInterface::updateScore(const ::std::string& userLongId, const ::std::string& behaviorId, const ::std::string& note, ::Ice::Int score, ::Ice::Int& userScore, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALISNS__ScoreInterface__updateScore_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userLongId);
        __os->write(behaviorId);
        __os->write(note);
        __os->write(score);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(userScore);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALISNS::ScoreInterface::getUserTotalScore(const ::std::string& userLongId, ::Ice::Int& userScore, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALISNS__ScoreInterface__getUserTotalScore_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userLongId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(userScore);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALISNS::ScoreInterface::getUserScoreFlows(const ::std::string& userLongId, const ::std::string& beginDate, const ::std::string& endDate, ::Ice::Int start, ::Ice::Int pageCount, ::Ice::Int& totalNum, ::ALISNS::ScoreFlows& flows, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALISNS__ScoreInterface__getUserScoreFlows_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userLongId);
        __os->write(beginDate);
        __os->write(endDate);
        __os->write(start);
        __os->write(pageCount);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(totalNum);
        ::ALISNS::__read(__is, flows, ::ALISNS::__U__ScoreFlows());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALISNS::ScoreInterface::getBidConfig(const ::std::string& sBid, ::ALISNS::BidConfigInfo& conf, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALISNS__ScoreInterface__getBidConfig_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(sBid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        conf.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALISNS::ScoreInterface::getBidScoreInfo(const ::std::string& sBid, ::Ice::Int& iScoreTimes, ::Ice::Int& iTotalScore, ::Ice::Int& iDayScoreTimes, ::Ice::Int& iDayTotalScore, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALISNS__ScoreInterface__getBidScoreInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(sBid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(iScoreTimes);
        __is->read(iTotalScore);
        __is->read(iDayScoreTimes);
        __is->read(iDayTotalScore);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALISNS::ScoreInterface::getUserBidScoreInfo(const ::std::string& userLongId, const ::std::string& behaviorId, ::Ice::Int& iPersonTotalScore, ::Ice::Int& iPersonAwardScore, ::Ice::Int& iPersonBidTotalTimes, ::Ice::Int& iPersonBidTotalScore, ::Ice::Int& iPersonDayBidTotalTimes, ::Ice::Int& iPersonDayBidTotalScore, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALISNS__ScoreInterface__getUserBidScoreInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userLongId);
        __os->write(behaviorId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(iPersonTotalScore);
        __is->read(iPersonAwardScore);
        __is->read(iPersonBidTotalTimes);
        __is->read(iPersonBidTotalScore);
        __is->read(iPersonDayBidTotalTimes);
        __is->read(iPersonDayBidTotalScore);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::ALISNS::ScoreInterface::addBehaviorScore(const ::std::string& userLongId, const ::std::string& behaviorId, const ::std::string& note, ::Ice::Int& behaviorScore, ::Ice::Int& userScore, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALISNS__ScoreInterface__addBehaviorScore_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALISNS::ScoreInterface* __servant = dynamic_cast< ::ALISNS::ScoreInterface*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->addBehaviorScore(userLongId, behaviorId, note, behaviorScore, userScore, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::ALISNS::ScoreInterface::updateScore(const ::std::string& userLongId, const ::std::string& behaviorId, const ::std::string& note, ::Ice::Int score, ::Ice::Int& userScore, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALISNS__ScoreInterface__updateScore_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALISNS::ScoreInterface* __servant = dynamic_cast< ::ALISNS::ScoreInterface*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->updateScore(userLongId, behaviorId, note, score, userScore, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::ALISNS::ScoreInterface::getUserTotalScore(const ::std::string& userLongId, ::Ice::Int& userScore, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALISNS__ScoreInterface__getUserTotalScore_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALISNS::ScoreInterface* __servant = dynamic_cast< ::ALISNS::ScoreInterface*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getUserTotalScore(userLongId, userScore, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::ALISNS::ScoreInterface::getUserScoreFlows(const ::std::string& userLongId, const ::std::string& beginDate, const ::std::string& endDate, ::Ice::Int start, ::Ice::Int pageCount, ::Ice::Int& totalNum, ::ALISNS::ScoreFlows& flows, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALISNS__ScoreInterface__getUserScoreFlows_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALISNS::ScoreInterface* __servant = dynamic_cast< ::ALISNS::ScoreInterface*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getUserScoreFlows(userLongId, beginDate, endDate, start, pageCount, totalNum, flows, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::ALISNS::ScoreInterface::getBidConfig(const ::std::string& sBid, ::ALISNS::BidConfigInfo& conf, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALISNS__ScoreInterface__getBidConfig_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALISNS::ScoreInterface* __servant = dynamic_cast< ::ALISNS::ScoreInterface*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getBidConfig(sBid, conf, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::ALISNS::ScoreInterface::getBidScoreInfo(const ::std::string& sBid, ::Ice::Int& iScoreTimes, ::Ice::Int& iTotalScore, ::Ice::Int& iDayScoreTimes, ::Ice::Int& iDayTotalScore, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALISNS__ScoreInterface__getBidScoreInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALISNS::ScoreInterface* __servant = dynamic_cast< ::ALISNS::ScoreInterface*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getBidScoreInfo(sBid, iScoreTimes, iTotalScore, iDayScoreTimes, iDayTotalScore, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::ALISNS::ScoreInterface::getUserBidScoreInfo(const ::std::string& userLongId, const ::std::string& behaviorId, ::Ice::Int& iPersonTotalScore, ::Ice::Int& iPersonAwardScore, ::Ice::Int& iPersonBidTotalTimes, ::Ice::Int& iPersonBidTotalScore, ::Ice::Int& iPersonDayBidTotalTimes, ::Ice::Int& iPersonDayBidTotalScore, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALISNS__ScoreInterface__getUserBidScoreInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALISNS::ScoreInterface* __servant = dynamic_cast< ::ALISNS::ScoreInterface*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getUserBidScoreInfo(userLongId, behaviorId, iPersonTotalScore, iPersonAwardScore, iPersonBidTotalTimes, iPersonBidTotalScore, iPersonDayBidTotalTimes, iPersonDayBidTotalScore, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::ObjectPtr
ALISNS::ScoreInterface::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __ALISNS__ScoreInterface_ids[2] =
{
    "::ALISNS::ScoreInterface",
    "::Ice::Object"
};

bool
ALISNS::ScoreInterface::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__ALISNS__ScoreInterface_ids, __ALISNS__ScoreInterface_ids + 2, _s);
}

::std::vector< ::std::string>
ALISNS::ScoreInterface::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__ALISNS__ScoreInterface_ids[0], &__ALISNS__ScoreInterface_ids[2]);
}

const ::std::string&
ALISNS::ScoreInterface::ice_id(const ::Ice::Current&) const
{
    return __ALISNS__ScoreInterface_ids[0];
}

const ::std::string&
ALISNS::ScoreInterface::ice_staticId()
{
    return __ALISNS__ScoreInterface_ids[0];
}

::IceInternal::DispatchStatus
ALISNS::ScoreInterface::___addBehaviorScore(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userLongId;
    ::std::string behaviorId;
    ::std::string note;
    __is->read(userLongId);
    __is->read(behaviorId);
    __is->read(note);
    ::Ice::Int behaviorScore;
    ::Ice::Int userScore;
    ::Ice::Int __ret = addBehaviorScore(userLongId, behaviorId, note, behaviorScore, userScore, __current);
    __os->write(behaviorScore);
    __os->write(userScore);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALISNS::ScoreInterface::___updateScore(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userLongId;
    ::std::string behaviorId;
    ::std::string note;
    ::Ice::Int score;
    __is->read(userLongId);
    __is->read(behaviorId);
    __is->read(note);
    __is->read(score);
    ::Ice::Int userScore;
    ::Ice::Int __ret = updateScore(userLongId, behaviorId, note, score, userScore, __current);
    __os->write(userScore);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALISNS::ScoreInterface::___getUserTotalScore(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userLongId;
    __is->read(userLongId);
    ::Ice::Int userScore;
    ::Ice::Int __ret = getUserTotalScore(userLongId, userScore, __current);
    __os->write(userScore);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALISNS::ScoreInterface::___getUserScoreFlows(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userLongId;
    ::std::string beginDate;
    ::std::string endDate;
    ::Ice::Int start;
    ::Ice::Int pageCount;
    __is->read(userLongId);
    __is->read(beginDate);
    __is->read(endDate);
    __is->read(start);
    __is->read(pageCount);
    ::Ice::Int totalNum;
    ::ALISNS::ScoreFlows flows;
    ::Ice::Int __ret = getUserScoreFlows(userLongId, beginDate, endDate, start, pageCount, totalNum, flows, __current);
    __os->write(totalNum);
    if(flows.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::ALISNS::__write(__os, &flows[0], &flows[0] + flows.size(), ::ALISNS::__U__ScoreFlows());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALISNS::ScoreInterface::___getBidConfig(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string sBid;
    __is->read(sBid);
    ::ALISNS::BidConfigInfo conf;
    ::Ice::Int __ret = getBidConfig(sBid, conf, __current);
    conf.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALISNS::ScoreInterface::___getBidScoreInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string sBid;
    __is->read(sBid);
    ::Ice::Int iScoreTimes;
    ::Ice::Int iTotalScore;
    ::Ice::Int iDayScoreTimes;
    ::Ice::Int iDayTotalScore;
    ::Ice::Int __ret = getBidScoreInfo(sBid, iScoreTimes, iTotalScore, iDayScoreTimes, iDayTotalScore, __current);
    __os->write(iScoreTimes);
    __os->write(iTotalScore);
    __os->write(iDayScoreTimes);
    __os->write(iDayTotalScore);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALISNS::ScoreInterface::___getUserBidScoreInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userLongId;
    ::std::string behaviorId;
    __is->read(userLongId);
    __is->read(behaviorId);
    ::Ice::Int iPersonTotalScore;
    ::Ice::Int iPersonAwardScore;
    ::Ice::Int iPersonBidTotalTimes;
    ::Ice::Int iPersonBidTotalScore;
    ::Ice::Int iPersonDayBidTotalTimes;
    ::Ice::Int iPersonDayBidTotalScore;
    ::Ice::Int __ret = getUserBidScoreInfo(userLongId, behaviorId, iPersonTotalScore, iPersonAwardScore, iPersonBidTotalTimes, iPersonBidTotalScore, iPersonDayBidTotalTimes, iPersonDayBidTotalScore, __current);
    __os->write(iPersonTotalScore);
    __os->write(iPersonAwardScore);
    __os->write(iPersonBidTotalTimes);
    __os->write(iPersonBidTotalScore);
    __os->write(iPersonDayBidTotalTimes);
    __os->write(iPersonDayBidTotalScore);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __ALISNS__ScoreInterface_all[] =
{
    "addBehaviorScore",
    "getBidConfig",
    "getBidScoreInfo",
    "getUserBidScoreInfo",
    "getUserScoreFlows",
    "getUserTotalScore",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "updateScore"
};

::IceInternal::DispatchStatus
ALISNS::ScoreInterface::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__ALISNS__ScoreInterface_all, __ALISNS__ScoreInterface_all + 11, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __ALISNS__ScoreInterface_all)
    {
        case 0:
        {
            return ___addBehaviorScore(in, current);
        }
        case 1:
        {
            return ___getBidConfig(in, current);
        }
        case 2:
        {
            return ___getBidScoreInfo(in, current);
        }
        case 3:
        {
            return ___getUserBidScoreInfo(in, current);
        }
        case 4:
        {
            return ___getUserScoreFlows(in, current);
        }
        case 5:
        {
            return ___getUserTotalScore(in, current);
        }
        case 6:
        {
            return ___ice_id(in, current);
        }
        case 7:
        {
            return ___ice_ids(in, current);
        }
        case 8:
        {
            return ___ice_isA(in, current);
        }
        case 9:
        {
            return ___ice_ping(in, current);
        }
        case 10:
        {
            return ___updateScore(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
ALISNS::ScoreInterface::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
ALISNS::ScoreInterface::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
ALISNS::ScoreInterface::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type ALISNS::ScoreInterface was not generated with stream support";
    throw ex;
}

void
ALISNS::ScoreInterface::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type ALISNS::ScoreInterface was not generated with stream support";
    throw ex;
}

void 
ALISNS::__patch__ScoreInterfacePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::ALISNS::ScoreInterfacePtr* p = static_cast< ::ALISNS::ScoreInterfacePtr*>(__addr);
    assert(p);
    *p = ::ALISNS::ScoreInterfacePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::ALISNS::ScoreInterface::ice_staticId();
        throw e;
    }
}

bool
ALISNS::operator==(const ::ALISNS::ScoreInterface& l, const ::ALISNS::ScoreInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
ALISNS::operator!=(const ::ALISNS::ScoreInterface& l, const ::ALISNS::ScoreInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
ALISNS::operator<(const ::ALISNS::ScoreInterface& l, const ::ALISNS::ScoreInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
ALISNS::operator<=(const ::ALISNS::ScoreInterface& l, const ::ALISNS::ScoreInterface& r)
{
    return l < r || l == r;
}

bool
ALISNS::operator>(const ::ALISNS::ScoreInterface& l, const ::ALISNS::ScoreInterface& r)
{
    return !(l < r) && !(l == r);
}

bool
ALISNS::operator>=(const ::ALISNS::ScoreInterface& l, const ::ALISNS::ScoreInterface& r)
{
    return !(l < r);
}
