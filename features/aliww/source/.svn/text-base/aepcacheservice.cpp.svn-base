// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `aepcacheservice.ice'

#include <aepcacheservice.h>
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

static const ::std::string __AliIM__IAEPCacheService__getWanghaoInfo_name = "getWanghaoInfo";

static const ::std::string __AliIM__IAEPCacheService__getBindlist_name = "getBindlist";

static const ::std::string __AliIM__IAEPCacheService__addWanghao_name = "addWanghao";

static const ::std::string __AliIM__IAEPCacheService__setWanghaoStatus_name = "setWanghaoStatus";

static const ::std::string __AliIM__IAEPCacheService__setBindlist_name = "setBindlist";

static const ::std::string __AliIM__IAEPCacheService__addBindId_name = "addBindId";

static const ::std::string __AliIM__IAEPCacheService__delBindId_name = "delBindId";

static const ::std::string __AliIM__IAEPCacheService__removeCache_name = "removeCache";

static const ::std::string __AliIM__IAEPCacheService__changeWanghaoPw_name = "changeWanghaoPw";

void
IceInternal::incRef(::AliIM::IAEPCacheService* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::AliIM::IAEPCacheService* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::AliIM::IAEPCacheService* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::AliIM::IAEPCacheService* p)
{
    p->__decRef();
}

void
AliIM::__write(::IceInternal::BasicStream* __os, const ::AliIM::IAEPCacheServicePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
AliIM::__read(::IceInternal::BasicStream* __is, ::AliIM::IAEPCacheServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::AliIM::IAEPCacheService;
        v->__copyFrom(proxy);
    }
}

void
AliIM::__write(::IceInternal::BasicStream* __os, const ::AliIM::IAEPCacheServicePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

bool
AliIM::SWanghaoInfoIce::operator==(const SWanghaoInfoIce& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AliIM::SWanghaoInfoIce::operator!=(const SWanghaoInfoIce& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(uuid != __rhs.uuid)
    {
        return true;
    }
    if(whid != __rhs.whid)
    {
        return true;
    }
    if(longuid != __rhs.longuid)
    {
        return true;
    }
    if(md5pw != __rhs.md5pw)
    {
        return true;
    }
    if(imtoken != __rhs.imtoken)
    {
        return true;
    }
    if(status != __rhs.status)
    {
        return true;
    }
    return false;
}

bool
AliIM::SWanghaoInfoIce::operator<(const SWanghaoInfoIce& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(uuid < __rhs.uuid)
    {
        return true;
    }
    else if(__rhs.uuid < uuid)
    {
        return false;
    }
    if(whid < __rhs.whid)
    {
        return true;
    }
    else if(__rhs.whid < whid)
    {
        return false;
    }
    if(longuid < __rhs.longuid)
    {
        return true;
    }
    else if(__rhs.longuid < longuid)
    {
        return false;
    }
    if(md5pw < __rhs.md5pw)
    {
        return true;
    }
    else if(__rhs.md5pw < md5pw)
    {
        return false;
    }
    if(imtoken < __rhs.imtoken)
    {
        return true;
    }
    else if(__rhs.imtoken < imtoken)
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
    return false;
}

void
AliIM::SWanghaoInfoIce::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(uuid);
    __os->write(whid);
    __os->write(longuid);
    __os->write(md5pw);
    __os->write(imtoken);
    __os->write(status);
}

void
AliIM::SWanghaoInfoIce::__read(::IceInternal::BasicStream* __is)
{
    __is->read(uuid);
    __is->read(whid);
    __is->read(longuid);
    __is->read(md5pw);
    __is->read(imtoken);
    __is->read(status);
}

void
AliIM::__addObject(const IAEPCacheServicePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
AliIM::__usesClasses(const IAEPCacheServicePtr& p)
{
    return p->__usesClasses();
}

void
AliIM::__decRefUnsafe(const IAEPCacheServicePtr& p)
{
    p->__decRefUnsafe();
}

void
AliIM::__clearHandleUnsafe(IAEPCacheServicePtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::AliIM::IAEPCacheService::getWanghaoInfo(::Ice::Int idtype, const ::std::string& id, ::AliIM::SWanghaoInfoIce& info, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IAEPCacheService__getWanghaoInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IAEPCacheService* __del = dynamic_cast< ::IceDelegate::AliIM::IAEPCacheService*>(__delBase.get());
            return __del->getWanghaoInfo(idtype, id, info, __ctx);
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
IceProxy::AliIM::IAEPCacheService::getBindlist(::Ice::Int idtype, const ::std::string& id, ::Ice::StringSeq& bindids, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IAEPCacheService__getBindlist_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IAEPCacheService* __del = dynamic_cast< ::IceDelegate::AliIM::IAEPCacheService*>(__delBase.get());
            return __del->getBindlist(idtype, id, bindids, __ctx);
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
IceProxy::AliIM::IAEPCacheService::addWanghao(const ::AliIM::SWanghaoInfoIce& info, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IAEPCacheService__addWanghao_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IAEPCacheService* __del = dynamic_cast< ::IceDelegate::AliIM::IAEPCacheService*>(__delBase.get());
            return __del->addWanghao(info, __ctx);
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
IceProxy::AliIM::IAEPCacheService::setWanghaoStatus(::Ice::Int idtype, const ::std::string& id, ::Ice::Int status, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IAEPCacheService__setWanghaoStatus_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IAEPCacheService* __del = dynamic_cast< ::IceDelegate::AliIM::IAEPCacheService*>(__delBase.get());
            return __del->setWanghaoStatus(idtype, id, status, __ctx);
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
IceProxy::AliIM::IAEPCacheService::setBindlist(::Ice::Int idtype, const ::std::string& id, const ::Ice::StringSeq& bindids, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IAEPCacheService__setBindlist_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IAEPCacheService* __del = dynamic_cast< ::IceDelegate::AliIM::IAEPCacheService*>(__delBase.get());
            return __del->setBindlist(idtype, id, bindids, __ctx);
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
IceProxy::AliIM::IAEPCacheService::addBindId(::Ice::Int idtype, const ::std::string& id, const ::std::string& weblongid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IAEPCacheService__addBindId_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IAEPCacheService* __del = dynamic_cast< ::IceDelegate::AliIM::IAEPCacheService*>(__delBase.get());
            return __del->addBindId(idtype, id, weblongid, __ctx);
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
IceProxy::AliIM::IAEPCacheService::delBindId(::Ice::Int idtype, const ::std::string& id, const ::std::string& weblongid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IAEPCacheService__delBindId_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IAEPCacheService* __del = dynamic_cast< ::IceDelegate::AliIM::IAEPCacheService*>(__delBase.get());
            return __del->delBindId(idtype, id, weblongid, __ctx);
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
IceProxy::AliIM::IAEPCacheService::removeCache(::Ice::Int idtype, const ::std::string& id, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IAEPCacheService__removeCache_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IAEPCacheService* __del = dynamic_cast< ::IceDelegate::AliIM::IAEPCacheService*>(__delBase.get());
            return __del->removeCache(idtype, id, __ctx);
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
IceProxy::AliIM::IAEPCacheService::changeWanghaoPw(::Ice::Int idtype, const ::std::string& id, const ::std::string& newmd5pw, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IAEPCacheService__changeWanghaoPw_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IAEPCacheService* __del = dynamic_cast< ::IceDelegate::AliIM::IAEPCacheService*>(__delBase.get());
            return __del->changeWanghaoPw(idtype, id, newmd5pw, __ctx);
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
IceProxy::AliIM::IAEPCacheService::ice_staticId()
{
    return ::AliIM::IAEPCacheService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::AliIM::IAEPCacheService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::AliIM::IAEPCacheService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::AliIM::IAEPCacheService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::AliIM::IAEPCacheService);
}

bool
IceProxy::AliIM::operator==(const ::IceProxy::AliIM::IAEPCacheService& l, const ::IceProxy::AliIM::IAEPCacheService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator!=(const ::IceProxy::AliIM::IAEPCacheService& l, const ::IceProxy::AliIM::IAEPCacheService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator<(const ::IceProxy::AliIM::IAEPCacheService& l, const ::IceProxy::AliIM::IAEPCacheService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator<=(const ::IceProxy::AliIM::IAEPCacheService& l, const ::IceProxy::AliIM::IAEPCacheService& r)
{
    return l < r || l == r;
}

bool
IceProxy::AliIM::operator>(const ::IceProxy::AliIM::IAEPCacheService& l, const ::IceProxy::AliIM::IAEPCacheService& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::AliIM::operator>=(const ::IceProxy::AliIM::IAEPCacheService& l, const ::IceProxy::AliIM::IAEPCacheService& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::AliIM::IAEPCacheService::getWanghaoInfo(::Ice::Int idtype, const ::std::string& id, ::AliIM::SWanghaoInfoIce& info, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IAEPCacheService__getWanghaoInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(idtype);
        __os->write(id);
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
        info.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIM::IAEPCacheService::getBindlist(::Ice::Int idtype, const ::std::string& id, ::Ice::StringSeq& bindids, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IAEPCacheService__getBindlist_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(idtype);
        __os->write(id);
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
        __is->read(bindids);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIM::IAEPCacheService::addWanghao(const ::AliIM::SWanghaoInfoIce& info, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IAEPCacheService__addWanghao_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        info.__write(__os);
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
IceDelegateM::AliIM::IAEPCacheService::setWanghaoStatus(::Ice::Int idtype, const ::std::string& id, ::Ice::Int status, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IAEPCacheService__setWanghaoStatus_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(idtype);
        __os->write(id);
        __os->write(status);
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
IceDelegateM::AliIM::IAEPCacheService::setBindlist(::Ice::Int idtype, const ::std::string& id, const ::Ice::StringSeq& bindids, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IAEPCacheService__setBindlist_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(idtype);
        __os->write(id);
        if(bindids.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&bindids[0], &bindids[0] + bindids.size());
        }
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
IceDelegateM::AliIM::IAEPCacheService::addBindId(::Ice::Int idtype, const ::std::string& id, const ::std::string& weblongid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IAEPCacheService__addBindId_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(idtype);
        __os->write(id);
        __os->write(weblongid);
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
IceDelegateM::AliIM::IAEPCacheService::delBindId(::Ice::Int idtype, const ::std::string& id, const ::std::string& weblongid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IAEPCacheService__delBindId_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(idtype);
        __os->write(id);
        __os->write(weblongid);
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
IceDelegateM::AliIM::IAEPCacheService::removeCache(::Ice::Int idtype, const ::std::string& id, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IAEPCacheService__removeCache_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(idtype);
        __os->write(id);
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
IceDelegateM::AliIM::IAEPCacheService::changeWanghaoPw(::Ice::Int idtype, const ::std::string& id, const ::std::string& newmd5pw, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IAEPCacheService__changeWanghaoPw_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(idtype);
        __os->write(id);
        __os->write(newmd5pw);
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
IceDelegateD::AliIM::IAEPCacheService::getWanghaoInfo(::Ice::Int idtype, const ::std::string& id, ::AliIM::SWanghaoInfoIce& info, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IAEPCacheService__getWanghaoInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IAEPCacheService* __servant = dynamic_cast< ::AliIM::IAEPCacheService*>(__direct.servant().get());
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
                __ret = __servant->getWanghaoInfo(idtype, id, info, __current);
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
IceDelegateD::AliIM::IAEPCacheService::getBindlist(::Ice::Int idtype, const ::std::string& id, ::Ice::StringSeq& bindids, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IAEPCacheService__getBindlist_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IAEPCacheService* __servant = dynamic_cast< ::AliIM::IAEPCacheService*>(__direct.servant().get());
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
                __ret = __servant->getBindlist(idtype, id, bindids, __current);
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
IceDelegateD::AliIM::IAEPCacheService::addWanghao(const ::AliIM::SWanghaoInfoIce& info, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IAEPCacheService__addWanghao_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IAEPCacheService* __servant = dynamic_cast< ::AliIM::IAEPCacheService*>(__direct.servant().get());
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
                __ret = __servant->addWanghao(info, __current);
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
IceDelegateD::AliIM::IAEPCacheService::setWanghaoStatus(::Ice::Int idtype, const ::std::string& id, ::Ice::Int status, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IAEPCacheService__setWanghaoStatus_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IAEPCacheService* __servant = dynamic_cast< ::AliIM::IAEPCacheService*>(__direct.servant().get());
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
                __ret = __servant->setWanghaoStatus(idtype, id, status, __current);
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
IceDelegateD::AliIM::IAEPCacheService::setBindlist(::Ice::Int idtype, const ::std::string& id, const ::Ice::StringSeq& bindids, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IAEPCacheService__setBindlist_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IAEPCacheService* __servant = dynamic_cast< ::AliIM::IAEPCacheService*>(__direct.servant().get());
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
                __ret = __servant->setBindlist(idtype, id, bindids, __current);
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
IceDelegateD::AliIM::IAEPCacheService::addBindId(::Ice::Int idtype, const ::std::string& id, const ::std::string& weblongid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IAEPCacheService__addBindId_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IAEPCacheService* __servant = dynamic_cast< ::AliIM::IAEPCacheService*>(__direct.servant().get());
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
                __ret = __servant->addBindId(idtype, id, weblongid, __current);
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
IceDelegateD::AliIM::IAEPCacheService::delBindId(::Ice::Int idtype, const ::std::string& id, const ::std::string& weblongid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IAEPCacheService__delBindId_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IAEPCacheService* __servant = dynamic_cast< ::AliIM::IAEPCacheService*>(__direct.servant().get());
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
                __ret = __servant->delBindId(idtype, id, weblongid, __current);
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
IceDelegateD::AliIM::IAEPCacheService::removeCache(::Ice::Int idtype, const ::std::string& id, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IAEPCacheService__removeCache_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IAEPCacheService* __servant = dynamic_cast< ::AliIM::IAEPCacheService*>(__direct.servant().get());
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
                __ret = __servant->removeCache(idtype, id, __current);
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
IceDelegateD::AliIM::IAEPCacheService::changeWanghaoPw(::Ice::Int idtype, const ::std::string& id, const ::std::string& newmd5pw, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IAEPCacheService__changeWanghaoPw_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IAEPCacheService* __servant = dynamic_cast< ::AliIM::IAEPCacheService*>(__direct.servant().get());
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
                __ret = __servant->changeWanghaoPw(idtype, id, newmd5pw, __current);
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
AliIM::IAEPCacheService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __AliIM__IAEPCacheService_ids[2] =
{
    "::AliIM::IAEPCacheService",
    "::Ice::Object"
};

bool
AliIM::IAEPCacheService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__AliIM__IAEPCacheService_ids, __AliIM__IAEPCacheService_ids + 2, _s);
}

::std::vector< ::std::string>
AliIM::IAEPCacheService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__AliIM__IAEPCacheService_ids[0], &__AliIM__IAEPCacheService_ids[2]);
}

const ::std::string&
AliIM::IAEPCacheService::ice_id(const ::Ice::Current&) const
{
    return __AliIM__IAEPCacheService_ids[0];
}

const ::std::string&
AliIM::IAEPCacheService::ice_staticId()
{
    return __AliIM__IAEPCacheService_ids[0];
}

::IceInternal::DispatchStatus
AliIM::IAEPCacheService::___getWanghaoInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int idtype;
    ::std::string id;
    __is->read(idtype);
    __is->read(id);
    ::AliIM::SWanghaoInfoIce info;
    ::Ice::Int __ret = getWanghaoInfo(idtype, id, info, __current);
    info.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IAEPCacheService::___getBindlist(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int idtype;
    ::std::string id;
    __is->read(idtype);
    __is->read(id);
    ::Ice::StringSeq bindids;
    ::Ice::Int __ret = getBindlist(idtype, id, bindids, __current);
    if(bindids.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&bindids[0], &bindids[0] + bindids.size());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IAEPCacheService::___addWanghao(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::AliIM::SWanghaoInfoIce info;
    info.__read(__is);
    ::Ice::Int __ret = addWanghao(info, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IAEPCacheService::___setWanghaoStatus(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int idtype;
    ::std::string id;
    ::Ice::Int status;
    __is->read(idtype);
    __is->read(id);
    __is->read(status);
    ::Ice::Int __ret = setWanghaoStatus(idtype, id, status, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IAEPCacheService::___setBindlist(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int idtype;
    ::std::string id;
    ::Ice::StringSeq bindids;
    __is->read(idtype);
    __is->read(id);
    __is->read(bindids);
    ::Ice::Int __ret = setBindlist(idtype, id, bindids, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IAEPCacheService::___addBindId(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int idtype;
    ::std::string id;
    ::std::string weblongid;
    __is->read(idtype);
    __is->read(id);
    __is->read(weblongid);
    ::Ice::Int __ret = addBindId(idtype, id, weblongid, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IAEPCacheService::___delBindId(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int idtype;
    ::std::string id;
    ::std::string weblongid;
    __is->read(idtype);
    __is->read(id);
    __is->read(weblongid);
    ::Ice::Int __ret = delBindId(idtype, id, weblongid, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IAEPCacheService::___removeCache(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int idtype;
    ::std::string id;
    __is->read(idtype);
    __is->read(id);
    ::Ice::Int __ret = removeCache(idtype, id, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IAEPCacheService::___changeWanghaoPw(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int idtype;
    ::std::string id;
    ::std::string newmd5pw;
    __is->read(idtype);
    __is->read(id);
    __is->read(newmd5pw);
    ::Ice::Int __ret = changeWanghaoPw(idtype, id, newmd5pw, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __AliIM__IAEPCacheService_all[] =
{
    "addBindId",
    "addWanghao",
    "changeWanghaoPw",
    "delBindId",
    "getBindlist",
    "getWanghaoInfo",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "removeCache",
    "setBindlist",
    "setWanghaoStatus"
};

::IceInternal::DispatchStatus
AliIM::IAEPCacheService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__AliIM__IAEPCacheService_all, __AliIM__IAEPCacheService_all + 13, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __AliIM__IAEPCacheService_all)
    {
        case 0:
        {
            return ___addBindId(in, current);
        }
        case 1:
        {
            return ___addWanghao(in, current);
        }
        case 2:
        {
            return ___changeWanghaoPw(in, current);
        }
        case 3:
        {
            return ___delBindId(in, current);
        }
        case 4:
        {
            return ___getBindlist(in, current);
        }
        case 5:
        {
            return ___getWanghaoInfo(in, current);
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
            return ___removeCache(in, current);
        }
        case 11:
        {
            return ___setBindlist(in, current);
        }
        case 12:
        {
            return ___setWanghaoStatus(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
AliIM::IAEPCacheService::__write(::IceInternal::BasicStream* __os) const
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
AliIM::IAEPCacheService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
AliIM::IAEPCacheService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIM::IAEPCacheService was not generated with stream support";
    throw ex;
}

void
AliIM::IAEPCacheService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIM::IAEPCacheService was not generated with stream support";
    throw ex;
}

void 
AliIM::__patch__IAEPCacheServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::AliIM::IAEPCacheServicePtr* p = static_cast< ::AliIM::IAEPCacheServicePtr*>(__addr);
    assert(p);
    *p = ::AliIM::IAEPCacheServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::AliIM::IAEPCacheService::ice_staticId();
        throw e;
    }
}

bool
AliIM::operator==(const ::AliIM::IAEPCacheService& l, const ::AliIM::IAEPCacheService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator!=(const ::AliIM::IAEPCacheService& l, const ::AliIM::IAEPCacheService& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator<(const ::AliIM::IAEPCacheService& l, const ::AliIM::IAEPCacheService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator<=(const ::AliIM::IAEPCacheService& l, const ::AliIM::IAEPCacheService& r)
{
    return l < r || l == r;
}

bool
AliIM::operator>(const ::AliIM::IAEPCacheService& l, const ::AliIM::IAEPCacheService& r)
{
    return !(l < r) && !(l == r);
}

bool
AliIM::operator>=(const ::AliIM::IAEPCacheService& l, const ::AliIM::IAEPCacheService& r)
{
    return !(l < r);
}
