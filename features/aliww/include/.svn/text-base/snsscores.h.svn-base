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

#ifndef __snsscores_h__
#define __snsscores_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/Incoming.h>
#include <Ice/Direct.h>
#include <Ice/StreamF.h>
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

namespace IceProxy
{

namespace ALISNS
{

class ScoreInterface;
bool operator==(const ScoreInterface&, const ScoreInterface&);
bool operator!=(const ScoreInterface&, const ScoreInterface&);
bool operator<(const ScoreInterface&, const ScoreInterface&);
bool operator<=(const ScoreInterface&, const ScoreInterface&);
bool operator>(const ScoreInterface&, const ScoreInterface&);
bool operator>=(const ScoreInterface&, const ScoreInterface&);

}

}

namespace ALISNS
{

class ScoreInterface;
bool operator==(const ScoreInterface&, const ScoreInterface&);
bool operator!=(const ScoreInterface&, const ScoreInterface&);
bool operator<(const ScoreInterface&, const ScoreInterface&);
bool operator<=(const ScoreInterface&, const ScoreInterface&);
bool operator>(const ScoreInterface&, const ScoreInterface&);
bool operator>=(const ScoreInterface&, const ScoreInterface&);

}

namespace IceInternal
{

void incRef(::ALISNS::ScoreInterface*);
void decRef(::ALISNS::ScoreInterface*);

void incRef(::IceProxy::ALISNS::ScoreInterface*);
void decRef(::IceProxy::ALISNS::ScoreInterface*);

}

namespace ALISNS
{

typedef ::IceInternal::Handle< ::ALISNS::ScoreInterface> ScoreInterfacePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::ALISNS::ScoreInterface> ScoreInterfacePrx;

void __write(::IceInternal::BasicStream*, const ScoreInterfacePrx&);
void __read(::IceInternal::BasicStream*, ScoreInterfacePrx&);
void __write(::IceInternal::BasicStream*, const ScoreInterfacePtr&);
void __patch__ScoreInterfacePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const ScoreInterfacePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const ScoreInterfacePtr&);
void __decRefUnsafe(const ScoreInterfacePtr&);
void __clearHandleUnsafe(ScoreInterfacePtr&);

}

namespace ALISNS
{

struct ScoreFlowUnit
{
    ::Ice::Int flowID;
    ::std::string gmtCreate;
    ::std::string gmtModified;
    ::std::string userLongId;
    ::std::string behaviorId;
    ::std::string behaviorName;
    ::Ice::Int score;
    ::std::string note;

    bool operator==(const ScoreFlowUnit&) const;
    bool operator!=(const ScoreFlowUnit&) const;
    bool operator<(const ScoreFlowUnit&) const;
    bool operator<=(const ScoreFlowUnit& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const ScoreFlowUnit& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const ScoreFlowUnit& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct BidConfigInfo
{
    ::std::string sBid;
    ::std::string sName;
    ::std::string sAppId;
    ::Ice::Int iTimesLimit;
    ::Ice::Int iScoreLimit;
    ::Ice::Int iDayTimesLimit;
    ::Ice::Int iDayScoreLimit;
    ::Ice::Int iPersonTimesLimit;
    ::Ice::Int iPersonScoreLimit;
    ::Ice::Int iPersonDayTimesLimit;
    ::Ice::Int iPersonDayScoreLimit;
    ::Ice::Int iScoreType;
    ::Ice::Int iScore;
    ::Ice::Int iStatus;

    bool operator==(const BidConfigInfo&) const;
    bool operator!=(const BidConfigInfo&) const;
    bool operator<(const BidConfigInfo&) const;
    bool operator<=(const BidConfigInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const BidConfigInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const BidConfigInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::ALISNS::ScoreFlowUnit> ScoreFlows;

class __U__ScoreFlows { };
void __write(::IceInternal::BasicStream*, const ::ALISNS::ScoreFlowUnit*, const ::ALISNS::ScoreFlowUnit*, __U__ScoreFlows);
void __read(::IceInternal::BasicStream*, ScoreFlows&, __U__ScoreFlows);

}

namespace IceProxy
{

namespace ALISNS
{

class ScoreInterface : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int addBehaviorScore(const ::std::string& userLongId, const ::std::string& behaviorId, const ::std::string& note, ::Ice::Int& behaviorScore, ::Ice::Int& userScore)
    {
        return addBehaviorScore(userLongId, behaviorId, note, behaviorScore, userScore, 0);
    }
    ::Ice::Int addBehaviorScore(const ::std::string& userLongId, const ::std::string& behaviorId, const ::std::string& note, ::Ice::Int& behaviorScore, ::Ice::Int& userScore, const ::Ice::Context& __ctx)
    {
        return addBehaviorScore(userLongId, behaviorId, note, behaviorScore, userScore, &__ctx);
    }
    
private:

    ::Ice::Int addBehaviorScore(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int updateScore(const ::std::string& userLongId, const ::std::string& behaviorId, const ::std::string& note, ::Ice::Int score, ::Ice::Int& userScore)
    {
        return updateScore(userLongId, behaviorId, note, score, userScore, 0);
    }
    ::Ice::Int updateScore(const ::std::string& userLongId, const ::std::string& behaviorId, const ::std::string& note, ::Ice::Int score, ::Ice::Int& userScore, const ::Ice::Context& __ctx)
    {
        return updateScore(userLongId, behaviorId, note, score, userScore, &__ctx);
    }
    
private:

    ::Ice::Int updateScore(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserTotalScore(const ::std::string& userLongId, ::Ice::Int& userScore)
    {
        return getUserTotalScore(userLongId, userScore, 0);
    }
    ::Ice::Int getUserTotalScore(const ::std::string& userLongId, ::Ice::Int& userScore, const ::Ice::Context& __ctx)
    {
        return getUserTotalScore(userLongId, userScore, &__ctx);
    }
    
private:

    ::Ice::Int getUserTotalScore(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserScoreFlows(const ::std::string& userLongId, const ::std::string& beginDate, const ::std::string& endDate, ::Ice::Int start, ::Ice::Int pageCount, ::Ice::Int& totalNum, ::ALISNS::ScoreFlows& flows)
    {
        return getUserScoreFlows(userLongId, beginDate, endDate, start, pageCount, totalNum, flows, 0);
    }
    ::Ice::Int getUserScoreFlows(const ::std::string& userLongId, const ::std::string& beginDate, const ::std::string& endDate, ::Ice::Int start, ::Ice::Int pageCount, ::Ice::Int& totalNum, ::ALISNS::ScoreFlows& flows, const ::Ice::Context& __ctx)
    {
        return getUserScoreFlows(userLongId, beginDate, endDate, start, pageCount, totalNum, flows, &__ctx);
    }
    
private:

    ::Ice::Int getUserScoreFlows(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::ALISNS::ScoreFlows&, const ::Ice::Context*);
    
public:

    ::Ice::Int getBidConfig(const ::std::string& sBid, ::ALISNS::BidConfigInfo& conf)
    {
        return getBidConfig(sBid, conf, 0);
    }
    ::Ice::Int getBidConfig(const ::std::string& sBid, ::ALISNS::BidConfigInfo& conf, const ::Ice::Context& __ctx)
    {
        return getBidConfig(sBid, conf, &__ctx);
    }
    
private:

    ::Ice::Int getBidConfig(const ::std::string&, ::ALISNS::BidConfigInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int getBidScoreInfo(const ::std::string& sBid, ::Ice::Int& iScoreTimes, ::Ice::Int& iTotalScore, ::Ice::Int& iDayScoreTimes, ::Ice::Int& iDayTotalScore)
    {
        return getBidScoreInfo(sBid, iScoreTimes, iTotalScore, iDayScoreTimes, iDayTotalScore, 0);
    }
    ::Ice::Int getBidScoreInfo(const ::std::string& sBid, ::Ice::Int& iScoreTimes, ::Ice::Int& iTotalScore, ::Ice::Int& iDayScoreTimes, ::Ice::Int& iDayTotalScore, const ::Ice::Context& __ctx)
    {
        return getBidScoreInfo(sBid, iScoreTimes, iTotalScore, iDayScoreTimes, iDayTotalScore, &__ctx);
    }
    
private:

    ::Ice::Int getBidScoreInfo(const ::std::string&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserBidScoreInfo(const ::std::string& userLongId, const ::std::string& behaviorId, ::Ice::Int& iPersonTotalScore, ::Ice::Int& iPersonAwardScore, ::Ice::Int& iPersonBidTotalTimes, ::Ice::Int& iPersonBidTotalScore, ::Ice::Int& iPersonDayBidTotalTimes, ::Ice::Int& iPersonDayBidTotalScore)
    {
        return getUserBidScoreInfo(userLongId, behaviorId, iPersonTotalScore, iPersonAwardScore, iPersonBidTotalTimes, iPersonBidTotalScore, iPersonDayBidTotalTimes, iPersonDayBidTotalScore, 0);
    }
    ::Ice::Int getUserBidScoreInfo(const ::std::string& userLongId, const ::std::string& behaviorId, ::Ice::Int& iPersonTotalScore, ::Ice::Int& iPersonAwardScore, ::Ice::Int& iPersonBidTotalTimes, ::Ice::Int& iPersonBidTotalScore, ::Ice::Int& iPersonDayBidTotalTimes, ::Ice::Int& iPersonDayBidTotalScore, const ::Ice::Context& __ctx)
    {
        return getUserBidScoreInfo(userLongId, behaviorId, iPersonTotalScore, iPersonAwardScore, iPersonBidTotalTimes, iPersonBidTotalScore, iPersonDayBidTotalTimes, iPersonDayBidTotalScore, &__ctx);
    }
    
private:

    ::Ice::Int getUserBidScoreInfo(const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
    
public:
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
};

}

}

namespace IceDelegate
{

namespace ALISNS
{

class ScoreInterface : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int addBehaviorScore(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int updateScore(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserTotalScore(const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserScoreFlows(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::ALISNS::ScoreFlows&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getBidConfig(const ::std::string&, ::ALISNS::BidConfigInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getBidScoreInfo(const ::std::string&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserBidScoreInfo(const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace ALISNS
{

class ScoreInterface : virtual public ::IceDelegate::ALISNS::ScoreInterface,
                       virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int addBehaviorScore(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int updateScore(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int getUserTotalScore(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int getUserScoreFlows(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::ALISNS::ScoreFlows&, const ::Ice::Context*);

    virtual ::Ice::Int getBidConfig(const ::std::string&, ::ALISNS::BidConfigInfo&, const ::Ice::Context*);

    virtual ::Ice::Int getBidScoreInfo(const ::std::string&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int getUserBidScoreInfo(const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace ALISNS
{

class ScoreInterface : virtual public ::IceDelegate::ALISNS::ScoreInterface,
                       virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int addBehaviorScore(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int updateScore(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int getUserTotalScore(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int getUserScoreFlows(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::ALISNS::ScoreFlows&, const ::Ice::Context*);

    virtual ::Ice::Int getBidConfig(const ::std::string&, ::ALISNS::BidConfigInfo&, const ::Ice::Context*);

    virtual ::Ice::Int getBidScoreInfo(const ::std::string&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int getUserBidScoreInfo(const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
};

}

}

namespace ALISNS
{

class ScoreInterface : virtual public ::Ice::Object
{
public:

    typedef ScoreInterfacePrx ProxyType;
    typedef ScoreInterfacePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int addBehaviorScore(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___addBehaviorScore(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int updateScore(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___updateScore(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUserTotalScore(const ::std::string&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserTotalScore(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUserScoreFlows(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::ALISNS::ScoreFlows&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserScoreFlows(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getBidConfig(const ::std::string&, ::ALISNS::BidConfigInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getBidConfig(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getBidScoreInfo(const ::std::string&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getBidScoreInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUserBidScoreInfo(const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserBidScoreInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__ScoreInterfacePtr(void*, ::Ice::ObjectPtr&);

}

#endif
