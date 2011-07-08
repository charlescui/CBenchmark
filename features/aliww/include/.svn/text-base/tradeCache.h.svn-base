// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `tradeCache.ice'

#ifndef __tradeCache_h__
#define __tradeCache_h__

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

namespace AliIM
{

class TradeCache;
bool operator==(const TradeCache&, const TradeCache&);
bool operator!=(const TradeCache&, const TradeCache&);
bool operator<(const TradeCache&, const TradeCache&);
bool operator<=(const TradeCache&, const TradeCache&);
bool operator>(const TradeCache&, const TradeCache&);
bool operator>=(const TradeCache&, const TradeCache&);

}

}

namespace AliIM
{

class TradeCache;
bool operator==(const TradeCache&, const TradeCache&);
bool operator!=(const TradeCache&, const TradeCache&);
bool operator<(const TradeCache&, const TradeCache&);
bool operator<=(const TradeCache&, const TradeCache&);
bool operator>(const TradeCache&, const TradeCache&);
bool operator>=(const TradeCache&, const TradeCache&);

}

namespace IceInternal
{

void incRef(::AliIM::TradeCache*);
void decRef(::AliIM::TradeCache*);

void incRef(::IceProxy::AliIM::TradeCache*);
void decRef(::IceProxy::AliIM::TradeCache*);

}

namespace AliIM
{

typedef ::IceInternal::Handle< ::AliIM::TradeCache> TradeCachePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::AliIM::TradeCache> TradeCachePrx;

void __write(::IceInternal::BasicStream*, const TradeCachePrx&);
void __read(::IceInternal::BasicStream*, TradeCachePrx&);
void __write(::IceInternal::BasicStream*, const TradeCachePtr&);
void __patch__TradeCachePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const TradeCachePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const TradeCachePtr&);
void __decRefUnsafe(const TradeCachePtr&);
void __clearHandleUnsafe(TradeCachePtr&);

}

namespace AliIM
{

}

namespace IceProxy
{

namespace AliIM
{

class TradeCache : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int checkTrade(const ::std::string& uid1, const ::std::string& uid2)
    {
        return checkTrade(uid1, uid2, 0);
    }
    ::Ice::Int checkTrade(const ::std::string& uid1, const ::std::string& uid2, const ::Ice::Context& __ctx)
    {
        return checkTrade(uid1, uid2, &__ctx);
    }
    
private:

    ::Ice::Int checkTrade(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int addTrade(const ::std::string& uid1, const ::std::string& uid2)
    {
        return addTrade(uid1, uid2, 0);
    }
    ::Ice::Int addTrade(const ::std::string& uid1, const ::std::string& uid2, const ::Ice::Context& __ctx)
    {
        return addTrade(uid1, uid2, &__ctx);
    }
    
private:

    ::Ice::Int addTrade(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
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

namespace AliIM
{

class TradeCache : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int checkTrade(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int addTrade(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace AliIM
{

class TradeCache : virtual public ::IceDelegate::AliIM::TradeCache,
                   virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int checkTrade(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int addTrade(const ::std::string&, const ::std::string&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace AliIM
{

class TradeCache : virtual public ::IceDelegate::AliIM::TradeCache,
                   virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int checkTrade(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int addTrade(const ::std::string&, const ::std::string&, const ::Ice::Context*);
};

}

}

namespace AliIM
{

class TradeCache : virtual public ::Ice::Object
{
public:

    typedef TradeCachePrx ProxyType;
    typedef TradeCachePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int checkTrade(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___checkTrade(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int addTrade(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___addTrade(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__TradeCachePtr(void*, ::Ice::ObjectPtr&);

}

#endif
