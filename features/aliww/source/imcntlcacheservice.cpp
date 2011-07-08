// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `imcntlcacheservice.ice'

#include <imcntlcacheservice.h>
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

static const ::std::string __AliIM__IUserCntLCacheService__getUserCntTimeStamps_name = "getUserCntTimeStamps";

static const ::std::string __AliIM__IUserCntLCacheService__removeUser_name = "removeUser";

static const ::std::string __AliIM__IUserCntLCacheService__backupUserContacts_name = "backupUserContacts";

static const ::std::string __AliIM__IUserCntLCacheService__getBackupedUserContacts_name = "getBackupedUserContacts";

static const ::std::string __AliIM__IUserCntLCacheService__addUserContact_name = "addUserContact";

static const ::std::string __AliIM__IUserCntLCacheService__delUserContact_name = "delUserContact";

void
IceInternal::incRef(::AliIM::IUserCntLCacheService* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::AliIM::IUserCntLCacheService* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::AliIM::IUserCntLCacheService* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::AliIM::IUserCntLCacheService* p)
{
    p->__decRef();
}

void
AliIM::__write(::IceInternal::BasicStream* __os, const ::AliIM::IUserCntLCacheServicePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
AliIM::__read(::IceInternal::BasicStream* __is, ::AliIM::IUserCntLCacheServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::AliIM::IUserCntLCacheService;
        v->__copyFrom(proxy);
    }
}

void
AliIM::__write(::IceInternal::BasicStream* __os, const ::AliIM::IUserCntLCacheServicePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

void
AliIM::__addObject(const IUserCntLCacheServicePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
AliIM::__usesClasses(const IUserCntLCacheServicePtr& p)
{
    return p->__usesClasses();
}

void
AliIM::__decRefUnsafe(const IUserCntLCacheServicePtr& p)
{
    p->__decRefUnsafe();
}

void
AliIM::__clearHandleUnsafe(IUserCntLCacheServicePtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::AliIM::IUserCntLCacheService::getUserCntTimeStamps(const ::std::string& longuid, ::Ice::Int& cnttimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IUserCntLCacheService__getUserCntTimeStamps_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IUserCntLCacheService* __del = dynamic_cast< ::IceDelegate::AliIM::IUserCntLCacheService*>(__delBase.get());
            return __del->getUserCntTimeStamps(longuid, cnttimes, __ctx);
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
IceProxy::AliIM::IUserCntLCacheService::removeUser(const ::std::string& longuid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IUserCntLCacheService__removeUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IUserCntLCacheService* __del = dynamic_cast< ::IceDelegate::AliIM::IUserCntLCacheService*>(__delBase.get());
            return __del->removeUser(longuid, __ctx);
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
IceProxy::AliIM::IUserCntLCacheService::backupUserContacts(const ::std::string& longuid, ::Ice::Int cnttimes, const ::Ice::StringSeq& cntids, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IUserCntLCacheService__backupUserContacts_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IUserCntLCacheService* __del = dynamic_cast< ::IceDelegate::AliIM::IUserCntLCacheService*>(__delBase.get());
            return __del->backupUserContacts(longuid, cnttimes, cntids, __ctx);
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
IceProxy::AliIM::IUserCntLCacheService::getBackupedUserContacts(const ::std::string& longuid, ::Ice::Int& cnttimes, ::Ice::StringSeq& cntids, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IUserCntLCacheService__getBackupedUserContacts_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IUserCntLCacheService* __del = dynamic_cast< ::IceDelegate::AliIM::IUserCntLCacheService*>(__delBase.get());
            return __del->getBackupedUserContacts(longuid, cnttimes, cntids, __ctx);
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
IceProxy::AliIM::IUserCntLCacheService::addUserContact(const ::std::string& longuid, ::Ice::Int cnttimes, const ::std::string& cntid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IUserCntLCacheService__addUserContact_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IUserCntLCacheService* __del = dynamic_cast< ::IceDelegate::AliIM::IUserCntLCacheService*>(__delBase.get());
            return __del->addUserContact(longuid, cnttimes, cntid, __ctx);
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
IceProxy::AliIM::IUserCntLCacheService::delUserContact(const ::std::string& longuid, ::Ice::Int cnttimes, const ::std::string& cntid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IUserCntLCacheService__delUserContact_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IUserCntLCacheService* __del = dynamic_cast< ::IceDelegate::AliIM::IUserCntLCacheService*>(__delBase.get());
            return __del->delUserContact(longuid, cnttimes, cntid, __ctx);
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
IceProxy::AliIM::IUserCntLCacheService::ice_staticId()
{
    return ::AliIM::IUserCntLCacheService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::AliIM::IUserCntLCacheService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::AliIM::IUserCntLCacheService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::AliIM::IUserCntLCacheService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::AliIM::IUserCntLCacheService);
}

bool
IceProxy::AliIM::operator==(const ::IceProxy::AliIM::IUserCntLCacheService& l, const ::IceProxy::AliIM::IUserCntLCacheService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator!=(const ::IceProxy::AliIM::IUserCntLCacheService& l, const ::IceProxy::AliIM::IUserCntLCacheService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator<(const ::IceProxy::AliIM::IUserCntLCacheService& l, const ::IceProxy::AliIM::IUserCntLCacheService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator<=(const ::IceProxy::AliIM::IUserCntLCacheService& l, const ::IceProxy::AliIM::IUserCntLCacheService& r)
{
    return l < r || l == r;
}

bool
IceProxy::AliIM::operator>(const ::IceProxy::AliIM::IUserCntLCacheService& l, const ::IceProxy::AliIM::IUserCntLCacheService& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::AliIM::operator>=(const ::IceProxy::AliIM::IUserCntLCacheService& l, const ::IceProxy::AliIM::IUserCntLCacheService& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::AliIM::IUserCntLCacheService::getUserCntTimeStamps(const ::std::string& longuid, ::Ice::Int& cnttimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IUserCntLCacheService__getUserCntTimeStamps_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longuid);
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
        __is->read(cnttimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIM::IUserCntLCacheService::removeUser(const ::std::string& longuid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IUserCntLCacheService__removeUser_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longuid);
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
IceDelegateM::AliIM::IUserCntLCacheService::backupUserContacts(const ::std::string& longuid, ::Ice::Int cnttimes, const ::Ice::StringSeq& cntids, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IUserCntLCacheService__backupUserContacts_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longuid);
        __os->write(cnttimes);
        if(cntids.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&cntids[0], &cntids[0] + cntids.size());
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
IceDelegateM::AliIM::IUserCntLCacheService::getBackupedUserContacts(const ::std::string& longuid, ::Ice::Int& cnttimes, ::Ice::StringSeq& cntids, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IUserCntLCacheService__getBackupedUserContacts_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longuid);
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
        __is->read(cnttimes);
        __is->read(cntids);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIM::IUserCntLCacheService::addUserContact(const ::std::string& longuid, ::Ice::Int cnttimes, const ::std::string& cntid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IUserCntLCacheService__addUserContact_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longuid);
        __os->write(cnttimes);
        __os->write(cntid);
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
IceDelegateM::AliIM::IUserCntLCacheService::delUserContact(const ::std::string& longuid, ::Ice::Int cnttimes, const ::std::string& cntid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IUserCntLCacheService__delUserContact_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longuid);
        __os->write(cnttimes);
        __os->write(cntid);
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
IceDelegateD::AliIM::IUserCntLCacheService::getUserCntTimeStamps(const ::std::string& longuid, ::Ice::Int& cnttimes, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IUserCntLCacheService__getUserCntTimeStamps_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IUserCntLCacheService* __servant = dynamic_cast< ::AliIM::IUserCntLCacheService*>(__direct.servant().get());
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
                __ret = __servant->getUserCntTimeStamps(longuid, cnttimes, __current);
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
IceDelegateD::AliIM::IUserCntLCacheService::removeUser(const ::std::string& longuid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IUserCntLCacheService__removeUser_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IUserCntLCacheService* __servant = dynamic_cast< ::AliIM::IUserCntLCacheService*>(__direct.servant().get());
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
                __ret = __servant->removeUser(longuid, __current);
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
IceDelegateD::AliIM::IUserCntLCacheService::backupUserContacts(const ::std::string& longuid, ::Ice::Int cnttimes, const ::Ice::StringSeq& cntids, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IUserCntLCacheService__backupUserContacts_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IUserCntLCacheService* __servant = dynamic_cast< ::AliIM::IUserCntLCacheService*>(__direct.servant().get());
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
                __ret = __servant->backupUserContacts(longuid, cnttimes, cntids, __current);
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
IceDelegateD::AliIM::IUserCntLCacheService::getBackupedUserContacts(const ::std::string& longuid, ::Ice::Int& cnttimes, ::Ice::StringSeq& cntids, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IUserCntLCacheService__getBackupedUserContacts_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IUserCntLCacheService* __servant = dynamic_cast< ::AliIM::IUserCntLCacheService*>(__direct.servant().get());
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
                __ret = __servant->getBackupedUserContacts(longuid, cnttimes, cntids, __current);
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
IceDelegateD::AliIM::IUserCntLCacheService::addUserContact(const ::std::string& longuid, ::Ice::Int cnttimes, const ::std::string& cntid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IUserCntLCacheService__addUserContact_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IUserCntLCacheService* __servant = dynamic_cast< ::AliIM::IUserCntLCacheService*>(__direct.servant().get());
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
                __ret = __servant->addUserContact(longuid, cnttimes, cntid, __current);
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
IceDelegateD::AliIM::IUserCntLCacheService::delUserContact(const ::std::string& longuid, ::Ice::Int cnttimes, const ::std::string& cntid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IUserCntLCacheService__delUserContact_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IUserCntLCacheService* __servant = dynamic_cast< ::AliIM::IUserCntLCacheService*>(__direct.servant().get());
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
                __ret = __servant->delUserContact(longuid, cnttimes, cntid, __current);
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
AliIM::IUserCntLCacheService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __AliIM__IUserCntLCacheService_ids[2] =
{
    "::AliIM::IUserCntLCacheService",
    "::Ice::Object"
};

bool
AliIM::IUserCntLCacheService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__AliIM__IUserCntLCacheService_ids, __AliIM__IUserCntLCacheService_ids + 2, _s);
}

::std::vector< ::std::string>
AliIM::IUserCntLCacheService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__AliIM__IUserCntLCacheService_ids[0], &__AliIM__IUserCntLCacheService_ids[2]);
}

const ::std::string&
AliIM::IUserCntLCacheService::ice_id(const ::Ice::Current&) const
{
    return __AliIM__IUserCntLCacheService_ids[0];
}

const ::std::string&
AliIM::IUserCntLCacheService::ice_staticId()
{
    return __AliIM__IUserCntLCacheService_ids[0];
}

::IceInternal::DispatchStatus
AliIM::IUserCntLCacheService::___getUserCntTimeStamps(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longuid;
    __is->read(longuid);
    ::Ice::Int cnttimes;
    ::Ice::Int __ret = getUserCntTimeStamps(longuid, cnttimes, __current);
    __os->write(cnttimes);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IUserCntLCacheService::___removeUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longuid;
    __is->read(longuid);
    ::Ice::Int __ret = removeUser(longuid, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IUserCntLCacheService::___backupUserContacts(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longuid;
    ::Ice::Int cnttimes;
    ::Ice::StringSeq cntids;
    __is->read(longuid);
    __is->read(cnttimes);
    __is->read(cntids);
    ::Ice::Int __ret = backupUserContacts(longuid, cnttimes, cntids, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IUserCntLCacheService::___getBackupedUserContacts(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longuid;
    __is->read(longuid);
    ::Ice::Int cnttimes;
    ::Ice::StringSeq cntids;
    ::Ice::Int __ret = getBackupedUserContacts(longuid, cnttimes, cntids, __current);
    __os->write(cnttimes);
    if(cntids.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&cntids[0], &cntids[0] + cntids.size());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IUserCntLCacheService::___addUserContact(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longuid;
    ::Ice::Int cnttimes;
    ::std::string cntid;
    __is->read(longuid);
    __is->read(cnttimes);
    __is->read(cntid);
    ::Ice::Int __ret = addUserContact(longuid, cnttimes, cntid, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IUserCntLCacheService::___delUserContact(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longuid;
    ::Ice::Int cnttimes;
    ::std::string cntid;
    __is->read(longuid);
    __is->read(cnttimes);
    __is->read(cntid);
    ::Ice::Int __ret = delUserContact(longuid, cnttimes, cntid, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __AliIM__IUserCntLCacheService_all[] =
{
    "addUserContact",
    "backupUserContacts",
    "delUserContact",
    "getBackupedUserContacts",
    "getUserCntTimeStamps",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "removeUser"
};

::IceInternal::DispatchStatus
AliIM::IUserCntLCacheService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__AliIM__IUserCntLCacheService_all, __AliIM__IUserCntLCacheService_all + 10, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __AliIM__IUserCntLCacheService_all)
    {
        case 0:
        {
            return ___addUserContact(in, current);
        }
        case 1:
        {
            return ___backupUserContacts(in, current);
        }
        case 2:
        {
            return ___delUserContact(in, current);
        }
        case 3:
        {
            return ___getBackupedUserContacts(in, current);
        }
        case 4:
        {
            return ___getUserCntTimeStamps(in, current);
        }
        case 5:
        {
            return ___ice_id(in, current);
        }
        case 6:
        {
            return ___ice_ids(in, current);
        }
        case 7:
        {
            return ___ice_isA(in, current);
        }
        case 8:
        {
            return ___ice_ping(in, current);
        }
        case 9:
        {
            return ___removeUser(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
AliIM::IUserCntLCacheService::__write(::IceInternal::BasicStream* __os) const
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
AliIM::IUserCntLCacheService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
AliIM::IUserCntLCacheService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIM::IUserCntLCacheService was not generated with stream support";
    throw ex;
}

void
AliIM::IUserCntLCacheService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIM::IUserCntLCacheService was not generated with stream support";
    throw ex;
}

void 
AliIM::__patch__IUserCntLCacheServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::AliIM::IUserCntLCacheServicePtr* p = static_cast< ::AliIM::IUserCntLCacheServicePtr*>(__addr);
    assert(p);
    *p = ::AliIM::IUserCntLCacheServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::AliIM::IUserCntLCacheService::ice_staticId();
        throw e;
    }
}

bool
AliIM::operator==(const ::AliIM::IUserCntLCacheService& l, const ::AliIM::IUserCntLCacheService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator!=(const ::AliIM::IUserCntLCacheService& l, const ::AliIM::IUserCntLCacheService& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator<(const ::AliIM::IUserCntLCacheService& l, const ::AliIM::IUserCntLCacheService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator<=(const ::AliIM::IUserCntLCacheService& l, const ::AliIM::IUserCntLCacheService& r)
{
    return l < r || l == r;
}

bool
AliIM::operator>(const ::AliIM::IUserCntLCacheService& l, const ::AliIM::IUserCntLCacheService& r)
{
    return !(l < r) && !(l == r);
}

bool
AliIM::operator>=(const ::AliIM::IUserCntLCacheService& l, const ::AliIM::IUserCntLCacheService& r)
{
    return !(l < r);
}
