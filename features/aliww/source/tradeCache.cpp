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

#include <tradeCache.h>
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

static const ::std::string __AliIM__TradeCache__checkTrade_name = "checkTrade";

static const ::std::string __AliIM__TradeCache__addTrade_name = "addTrade";

void
IceInternal::incRef(::AliIM::TradeCache* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::AliIM::TradeCache* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::AliIM::TradeCache* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::AliIM::TradeCache* p)
{
    p->__decRef();
}

void
AliIM::__write(::IceInternal::BasicStream* __os, const ::AliIM::TradeCachePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
AliIM::__read(::IceInternal::BasicStream* __is, ::AliIM::TradeCachePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::AliIM::TradeCache;
        v->__copyFrom(proxy);
    }
}

void
AliIM::__write(::IceInternal::BasicStream* __os, const ::AliIM::TradeCachePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

void
AliIM::__addObject(const TradeCachePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
AliIM::__usesClasses(const TradeCachePtr& p)
{
    return p->__usesClasses();
}

void
AliIM::__decRefUnsafe(const TradeCachePtr& p)
{
    p->__decRefUnsafe();
}

void
AliIM::__clearHandleUnsafe(TradeCachePtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::AliIM::TradeCache::checkTrade(const ::std::string& uid1, const ::std::string& uid2, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__TradeCache__checkTrade_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::TradeCache* __del = dynamic_cast< ::IceDelegate::AliIM::TradeCache*>(__delBase.get());
            return __del->checkTrade(uid1, uid2, __ctx);
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
IceProxy::AliIM::TradeCache::addTrade(const ::std::string& uid1, const ::std::string& uid2, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__TradeCache__addTrade_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::TradeCache* __del = dynamic_cast< ::IceDelegate::AliIM::TradeCache*>(__delBase.get());
            return __del->addTrade(uid1, uid2, __ctx);
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
IceProxy::AliIM::TradeCache::ice_staticId()
{
    return ::AliIM::TradeCache::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::AliIM::TradeCache::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::AliIM::TradeCache);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::AliIM::TradeCache::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::AliIM::TradeCache);
}

bool
IceProxy::AliIM::operator==(const ::IceProxy::AliIM::TradeCache& l, const ::IceProxy::AliIM::TradeCache& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator!=(const ::IceProxy::AliIM::TradeCache& l, const ::IceProxy::AliIM::TradeCache& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator<(const ::IceProxy::AliIM::TradeCache& l, const ::IceProxy::AliIM::TradeCache& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator<=(const ::IceProxy::AliIM::TradeCache& l, const ::IceProxy::AliIM::TradeCache& r)
{
    return l < r || l == r;
}

bool
IceProxy::AliIM::operator>(const ::IceProxy::AliIM::TradeCache& l, const ::IceProxy::AliIM::TradeCache& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::AliIM::operator>=(const ::IceProxy::AliIM::TradeCache& l, const ::IceProxy::AliIM::TradeCache& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::AliIM::TradeCache::checkTrade(const ::std::string& uid1, const ::std::string& uid2, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__TradeCache__checkTrade_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid1);
        __os->write(uid2);
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIM::TradeCache::addTrade(const ::std::string& uid1, const ::std::string& uid2, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__TradeCache__addTrade_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid1);
        __os->write(uid2);
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::AliIM::TradeCache::checkTrade(const ::std::string& uid1, const ::std::string& uid2, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__TradeCache__checkTrade_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::TradeCache* __servant = dynamic_cast< ::AliIM::TradeCache*>(__direct.servant().get());
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
                __ret = __servant->checkTrade(uid1, uid2, __current);
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
IceDelegateD::AliIM::TradeCache::addTrade(const ::std::string& uid1, const ::std::string& uid2, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__TradeCache__addTrade_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::TradeCache* __servant = dynamic_cast< ::AliIM::TradeCache*>(__direct.servant().get());
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
                __ret = __servant->addTrade(uid1, uid2, __current);
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
AliIM::TradeCache::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __AliIM__TradeCache_ids[2] =
{
    "::AliIM::TradeCache",
    "::Ice::Object"
};

bool
AliIM::TradeCache::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__AliIM__TradeCache_ids, __AliIM__TradeCache_ids + 2, _s);
}

::std::vector< ::std::string>
AliIM::TradeCache::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__AliIM__TradeCache_ids[0], &__AliIM__TradeCache_ids[2]);
}

const ::std::string&
AliIM::TradeCache::ice_id(const ::Ice::Current&) const
{
    return __AliIM__TradeCache_ids[0];
}

const ::std::string&
AliIM::TradeCache::ice_staticId()
{
    return __AliIM__TradeCache_ids[0];
}

::IceInternal::DispatchStatus
AliIM::TradeCache::___checkTrade(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid1;
    ::std::string uid2;
    __is->read(uid1);
    __is->read(uid2);
    ::Ice::Int __ret = checkTrade(uid1, uid2, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::TradeCache::___addTrade(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid1;
    ::std::string uid2;
    __is->read(uid1);
    __is->read(uid2);
    ::Ice::Int __ret = addTrade(uid1, uid2, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __AliIM__TradeCache_all[] =
{
    "addTrade",
    "checkTrade",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::IceInternal::DispatchStatus
AliIM::TradeCache::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__AliIM__TradeCache_all, __AliIM__TradeCache_all + 6, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __AliIM__TradeCache_all)
    {
        case 0:
        {
            return ___addTrade(in, current);
        }
        case 1:
        {
            return ___checkTrade(in, current);
        }
        case 2:
        {
            return ___ice_id(in, current);
        }
        case 3:
        {
            return ___ice_ids(in, current);
        }
        case 4:
        {
            return ___ice_isA(in, current);
        }
        case 5:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
AliIM::TradeCache::__write(::IceInternal::BasicStream* __os) const
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
AliIM::TradeCache::__read(::IceInternal::BasicStream* __is, bool __rid)
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
AliIM::TradeCache::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIM::TradeCache was not generated with stream support";
    throw ex;
}

void
AliIM::TradeCache::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIM::TradeCache was not generated with stream support";
    throw ex;
}

void 
AliIM::__patch__TradeCachePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::AliIM::TradeCachePtr* p = static_cast< ::AliIM::TradeCachePtr*>(__addr);
    assert(p);
    *p = ::AliIM::TradeCachePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::AliIM::TradeCache::ice_staticId();
        throw e;
    }
}

bool
AliIM::operator==(const ::AliIM::TradeCache& l, const ::AliIM::TradeCache& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator!=(const ::AliIM::TradeCache& l, const ::AliIM::TradeCache& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator<(const ::AliIM::TradeCache& l, const ::AliIM::TradeCache& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator<=(const ::AliIM::TradeCache& l, const ::AliIM::TradeCache& r)
{
    return l < r || l == r;
}

bool
AliIM::operator>(const ::AliIM::TradeCache& l, const ::AliIM::TradeCache& r)
{
    return !(l < r) && !(l == r);
}

bool
AliIM::operator>=(const ::AliIM::TradeCache& l, const ::AliIM::TradeCache& r)
{
    return !(l < r);
}
