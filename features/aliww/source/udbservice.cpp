// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `udbservice.ice'

#include <udbservice.h>
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

static const ::std::string __AliICEUDB__IUDBService__validateUDBUser_name = "validateUDBUser";

static const ::std::string __AliICEUDB__IUDBInfo__addUserProfile_name = "addUserProfile";

static const ::std::string __AliICEUDB__IUDBInfo__getUserProfile_name = "getUserProfile";

static const ::std::string __AliICEUDB__IUDBInfo__updateUserProfile_name = "updateUserProfile";

void
IceInternal::incRef(::AliICEUDB::IUDBService* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::AliICEUDB::IUDBService* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::AliICEUDB::IUDBService* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::AliICEUDB::IUDBService* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::AliICEUDB::IUDBInfo* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::AliICEUDB::IUDBInfo* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::AliICEUDB::IUDBInfo* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::AliICEUDB::IUDBInfo* p)
{
    p->__decRef();
}

void
AliICEUDB::__write(::IceInternal::BasicStream* __os, const ::AliICEUDB::IUDBServicePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
AliICEUDB::__read(::IceInternal::BasicStream* __is, ::AliICEUDB::IUDBServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::AliICEUDB::IUDBService;
        v->__copyFrom(proxy);
    }
}

void
AliICEUDB::__write(::IceInternal::BasicStream* __os, const ::AliICEUDB::IUDBServicePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

void
AliICEUDB::__write(::IceInternal::BasicStream* __os, const ::AliICEUDB::IUDBInfoPrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
AliICEUDB::__read(::IceInternal::BasicStream* __is, ::AliICEUDB::IUDBInfoPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::AliICEUDB::IUDBInfo;
        v->__copyFrom(proxy);
    }
}

void
AliICEUDB::__write(::IceInternal::BasicStream* __os, const ::AliICEUDB::IUDBInfoPtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

void
AliICEUDB::__addObject(const IUDBServicePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
AliICEUDB::__usesClasses(const IUDBServicePtr& p)
{
    return p->__usesClasses();
}

void
AliICEUDB::__decRefUnsafe(const IUDBServicePtr& p)
{
    p->__decRefUnsafe();
}

void
AliICEUDB::__clearHandleUnsafe(IUDBServicePtr& p)
{
    p.__clearHandleUnsafe();
}

void
AliICEUDB::__write(::IceInternal::BasicStream* __os, const ::AliICEUDB::KVMap& v, ::AliICEUDB::__U__KVMap)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::AliICEUDB::KVMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
AliICEUDB::__read(::IceInternal::BasicStream* __is, ::AliICEUDB::KVMap& v, ::AliICEUDB::__U__KVMap)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::std::string, ::std::string> pair;
        __is->read(const_cast< ::std::string&>(pair.first));
        ::AliICEUDB::KVMap::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
AliICEUDB::__addObject(const IUDBInfoPtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
AliICEUDB::__usesClasses(const IUDBInfoPtr& p)
{
    return p->__usesClasses();
}

void
AliICEUDB::__decRefUnsafe(const IUDBInfoPtr& p)
{
    p->__decRefUnsafe();
}

void
AliICEUDB::__clearHandleUnsafe(IUDBInfoPtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::AliICEUDB::IUDBService::validateUDBUser(const ::std::string& site, const ::std::string& siteid, const ::std::string& sitemd5pw, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliICEUDB__IUDBService__validateUDBUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliICEUDB::IUDBService* __del = dynamic_cast< ::IceDelegate::AliICEUDB::IUDBService*>(__delBase.get());
            return __del->validateUDBUser(site, siteid, sitemd5pw, __ctx);
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
IceProxy::AliICEUDB::IUDBService::ice_staticId()
{
    return ::AliICEUDB::IUDBService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::AliICEUDB::IUDBService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::AliICEUDB::IUDBService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::AliICEUDB::IUDBService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::AliICEUDB::IUDBService);
}

bool
IceProxy::AliICEUDB::operator==(const ::IceProxy::AliICEUDB::IUDBService& l, const ::IceProxy::AliICEUDB::IUDBService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliICEUDB::operator!=(const ::IceProxy::AliICEUDB::IUDBService& l, const ::IceProxy::AliICEUDB::IUDBService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliICEUDB::operator<(const ::IceProxy::AliICEUDB::IUDBService& l, const ::IceProxy::AliICEUDB::IUDBService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliICEUDB::operator<=(const ::IceProxy::AliICEUDB::IUDBService& l, const ::IceProxy::AliICEUDB::IUDBService& r)
{
    return l < r || l == r;
}

bool
IceProxy::AliICEUDB::operator>(const ::IceProxy::AliICEUDB::IUDBService& l, const ::IceProxy::AliICEUDB::IUDBService& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::AliICEUDB::operator>=(const ::IceProxy::AliICEUDB::IUDBService& l, const ::IceProxy::AliICEUDB::IUDBService& r)
{
    return !(l < r);
}

::Ice::Int
IceProxy::AliICEUDB::IUDBInfo::addUserProfile(const ::std::string& lid, const ::AliICEUDB::KVMap& kvMapArgs, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliICEUDB__IUDBInfo__addUserProfile_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliICEUDB::IUDBInfo* __del = dynamic_cast< ::IceDelegate::AliICEUDB::IUDBInfo*>(__delBase.get());
            return __del->addUserProfile(lid, kvMapArgs, __ctx);
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
IceProxy::AliICEUDB::IUDBInfo::getUserProfile(const ::std::string& lid, const ::AliICEUDB::KVMap& kvMapArgs, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliICEUDB__IUDBInfo__getUserProfile_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliICEUDB::IUDBInfo* __del = dynamic_cast< ::IceDelegate::AliICEUDB::IUDBInfo*>(__delBase.get());
            return __del->getUserProfile(lid, kvMapArgs, __ctx);
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
IceProxy::AliICEUDB::IUDBInfo::updateUserProfile(const ::std::string& lid, const ::AliICEUDB::KVMap& kvMapArgs, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliICEUDB__IUDBInfo__updateUserProfile_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliICEUDB::IUDBInfo* __del = dynamic_cast< ::IceDelegate::AliICEUDB::IUDBInfo*>(__delBase.get());
            return __del->updateUserProfile(lid, kvMapArgs, __ctx);
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
IceProxy::AliICEUDB::IUDBInfo::ice_staticId()
{
    return ::AliICEUDB::IUDBInfo::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::AliICEUDB::IUDBInfo::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::AliICEUDB::IUDBInfo);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::AliICEUDB::IUDBInfo::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::AliICEUDB::IUDBInfo);
}

bool
IceProxy::AliICEUDB::operator==(const ::IceProxy::AliICEUDB::IUDBInfo& l, const ::IceProxy::AliICEUDB::IUDBInfo& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliICEUDB::operator!=(const ::IceProxy::AliICEUDB::IUDBInfo& l, const ::IceProxy::AliICEUDB::IUDBInfo& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliICEUDB::operator<(const ::IceProxy::AliICEUDB::IUDBInfo& l, const ::IceProxy::AliICEUDB::IUDBInfo& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliICEUDB::operator<=(const ::IceProxy::AliICEUDB::IUDBInfo& l, const ::IceProxy::AliICEUDB::IUDBInfo& r)
{
    return l < r || l == r;
}

bool
IceProxy::AliICEUDB::operator>(const ::IceProxy::AliICEUDB::IUDBInfo& l, const ::IceProxy::AliICEUDB::IUDBInfo& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::AliICEUDB::operator>=(const ::IceProxy::AliICEUDB::IUDBInfo& l, const ::IceProxy::AliICEUDB::IUDBInfo& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::AliICEUDB::IUDBService::validateUDBUser(const ::std::string& site, const ::std::string& siteid, const ::std::string& sitemd5pw, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliICEUDB__IUDBService__validateUDBUser_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(site);
        __os->write(siteid);
        __os->write(sitemd5pw);
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
IceDelegateM::AliICEUDB::IUDBInfo::addUserProfile(const ::std::string& lid, const ::AliICEUDB::KVMap& kvMapArgs, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliICEUDB__IUDBInfo__addUserProfile_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(lid);
        ::AliICEUDB::__write(__os, kvMapArgs, ::AliICEUDB::__U__KVMap());
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
IceDelegateM::AliICEUDB::IUDBInfo::getUserProfile(const ::std::string& lid, const ::AliICEUDB::KVMap& kvMapArgs, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliICEUDB__IUDBInfo__getUserProfile_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(lid);
        ::AliICEUDB::__write(__os, kvMapArgs, ::AliICEUDB::__U__KVMap());
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
IceDelegateM::AliICEUDB::IUDBInfo::updateUserProfile(const ::std::string& lid, const ::AliICEUDB::KVMap& kvMapArgs, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliICEUDB__IUDBInfo__updateUserProfile_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(lid);
        ::AliICEUDB::__write(__os, kvMapArgs, ::AliICEUDB::__U__KVMap());
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
IceDelegateD::AliICEUDB::IUDBService::validateUDBUser(const ::std::string& site, const ::std::string& siteid, const ::std::string& sitemd5pw, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliICEUDB__IUDBService__validateUDBUser_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliICEUDB::IUDBService* __servant = dynamic_cast< ::AliICEUDB::IUDBService*>(__direct.servant().get());
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
                __ret = __servant->validateUDBUser(site, siteid, sitemd5pw, __current);
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
IceDelegateD::AliICEUDB::IUDBInfo::addUserProfile(const ::std::string& lid, const ::AliICEUDB::KVMap& kvMapArgs, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliICEUDB__IUDBInfo__addUserProfile_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliICEUDB::IUDBInfo* __servant = dynamic_cast< ::AliICEUDB::IUDBInfo*>(__direct.servant().get());
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
                __ret = __servant->addUserProfile(lid, kvMapArgs, __current);
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
IceDelegateD::AliICEUDB::IUDBInfo::getUserProfile(const ::std::string& lid, const ::AliICEUDB::KVMap& kvMapArgs, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliICEUDB__IUDBInfo__getUserProfile_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliICEUDB::IUDBInfo* __servant = dynamic_cast< ::AliICEUDB::IUDBInfo*>(__direct.servant().get());
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
                __ret = __servant->getUserProfile(lid, kvMapArgs, __current);
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
IceDelegateD::AliICEUDB::IUDBInfo::updateUserProfile(const ::std::string& lid, const ::AliICEUDB::KVMap& kvMapArgs, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliICEUDB__IUDBInfo__updateUserProfile_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliICEUDB::IUDBInfo* __servant = dynamic_cast< ::AliICEUDB::IUDBInfo*>(__direct.servant().get());
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
                __ret = __servant->updateUserProfile(lid, kvMapArgs, __current);
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
AliICEUDB::IUDBService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __AliICEUDB__IUDBService_ids[2] =
{
    "::AliICEUDB::IUDBService",
    "::Ice::Object"
};

bool
AliICEUDB::IUDBService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__AliICEUDB__IUDBService_ids, __AliICEUDB__IUDBService_ids + 2, _s);
}

::std::vector< ::std::string>
AliICEUDB::IUDBService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__AliICEUDB__IUDBService_ids[0], &__AliICEUDB__IUDBService_ids[2]);
}

const ::std::string&
AliICEUDB::IUDBService::ice_id(const ::Ice::Current&) const
{
    return __AliICEUDB__IUDBService_ids[0];
}

const ::std::string&
AliICEUDB::IUDBService::ice_staticId()
{
    return __AliICEUDB__IUDBService_ids[0];
}

::IceInternal::DispatchStatus
AliICEUDB::IUDBService::___validateUDBUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string site;
    ::std::string siteid;
    ::std::string sitemd5pw;
    __is->read(site);
    __is->read(siteid);
    __is->read(sitemd5pw);
    ::Ice::Int __ret = validateUDBUser(site, siteid, sitemd5pw, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __AliICEUDB__IUDBService_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "validateUDBUser"
};

::IceInternal::DispatchStatus
AliICEUDB::IUDBService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__AliICEUDB__IUDBService_all, __AliICEUDB__IUDBService_all + 5, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __AliICEUDB__IUDBService_all)
    {
        case 0:
        {
            return ___ice_id(in, current);
        }
        case 1:
        {
            return ___ice_ids(in, current);
        }
        case 2:
        {
            return ___ice_isA(in, current);
        }
        case 3:
        {
            return ___ice_ping(in, current);
        }
        case 4:
        {
            return ___validateUDBUser(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
AliICEUDB::IUDBService::__write(::IceInternal::BasicStream* __os) const
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
AliICEUDB::IUDBService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
AliICEUDB::IUDBService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliICEUDB::IUDBService was not generated with stream support";
    throw ex;
}

void
AliICEUDB::IUDBService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliICEUDB::IUDBService was not generated with stream support";
    throw ex;
}

void 
AliICEUDB::__patch__IUDBServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::AliICEUDB::IUDBServicePtr* p = static_cast< ::AliICEUDB::IUDBServicePtr*>(__addr);
    assert(p);
    *p = ::AliICEUDB::IUDBServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::AliICEUDB::IUDBService::ice_staticId();
        throw e;
    }
}

bool
AliICEUDB::operator==(const ::AliICEUDB::IUDBService& l, const ::AliICEUDB::IUDBService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
AliICEUDB::operator!=(const ::AliICEUDB::IUDBService& l, const ::AliICEUDB::IUDBService& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
AliICEUDB::operator<(const ::AliICEUDB::IUDBService& l, const ::AliICEUDB::IUDBService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
AliICEUDB::operator<=(const ::AliICEUDB::IUDBService& l, const ::AliICEUDB::IUDBService& r)
{
    return l < r || l == r;
}

bool
AliICEUDB::operator>(const ::AliICEUDB::IUDBService& l, const ::AliICEUDB::IUDBService& r)
{
    return !(l < r) && !(l == r);
}

bool
AliICEUDB::operator>=(const ::AliICEUDB::IUDBService& l, const ::AliICEUDB::IUDBService& r)
{
    return !(l < r);
}

::Ice::ObjectPtr
AliICEUDB::IUDBInfo::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __AliICEUDB__IUDBInfo_ids[2] =
{
    "::AliICEUDB::IUDBInfo",
    "::Ice::Object"
};

bool
AliICEUDB::IUDBInfo::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__AliICEUDB__IUDBInfo_ids, __AliICEUDB__IUDBInfo_ids + 2, _s);
}

::std::vector< ::std::string>
AliICEUDB::IUDBInfo::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__AliICEUDB__IUDBInfo_ids[0], &__AliICEUDB__IUDBInfo_ids[2]);
}

const ::std::string&
AliICEUDB::IUDBInfo::ice_id(const ::Ice::Current&) const
{
    return __AliICEUDB__IUDBInfo_ids[0];
}

const ::std::string&
AliICEUDB::IUDBInfo::ice_staticId()
{
    return __AliICEUDB__IUDBInfo_ids[0];
}

::IceInternal::DispatchStatus
AliICEUDB::IUDBInfo::___addUserProfile(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string lid;
    ::AliICEUDB::KVMap kvMapArgs;
    __is->read(lid);
    ::AliICEUDB::__read(__is, kvMapArgs, ::AliICEUDB::__U__KVMap());
    ::Ice::Int __ret = addUserProfile(lid, kvMapArgs, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliICEUDB::IUDBInfo::___getUserProfile(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string lid;
    ::AliICEUDB::KVMap kvMapArgs;
    __is->read(lid);
    ::AliICEUDB::__read(__is, kvMapArgs, ::AliICEUDB::__U__KVMap());
    ::Ice::Int __ret = getUserProfile(lid, kvMapArgs, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliICEUDB::IUDBInfo::___updateUserProfile(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string lid;
    ::AliICEUDB::KVMap kvMapArgs;
    __is->read(lid);
    ::AliICEUDB::__read(__is, kvMapArgs, ::AliICEUDB::__U__KVMap());
    ::Ice::Int __ret = updateUserProfile(lid, kvMapArgs, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __AliICEUDB__IUDBInfo_all[] =
{
    "addUserProfile",
    "getUserProfile",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "updateUserProfile"
};

::IceInternal::DispatchStatus
AliICEUDB::IUDBInfo::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__AliICEUDB__IUDBInfo_all, __AliICEUDB__IUDBInfo_all + 7, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __AliICEUDB__IUDBInfo_all)
    {
        case 0:
        {
            return ___addUserProfile(in, current);
        }
        case 1:
        {
            return ___getUserProfile(in, current);
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
        case 6:
        {
            return ___updateUserProfile(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
AliICEUDB::IUDBInfo::__write(::IceInternal::BasicStream* __os) const
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
AliICEUDB::IUDBInfo::__read(::IceInternal::BasicStream* __is, bool __rid)
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
AliICEUDB::IUDBInfo::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliICEUDB::IUDBInfo was not generated with stream support";
    throw ex;
}

void
AliICEUDB::IUDBInfo::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliICEUDB::IUDBInfo was not generated with stream support";
    throw ex;
}

void 
AliICEUDB::__patch__IUDBInfoPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::AliICEUDB::IUDBInfoPtr* p = static_cast< ::AliICEUDB::IUDBInfoPtr*>(__addr);
    assert(p);
    *p = ::AliICEUDB::IUDBInfoPtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::AliICEUDB::IUDBInfo::ice_staticId();
        throw e;
    }
}

bool
AliICEUDB::operator==(const ::AliICEUDB::IUDBInfo& l, const ::AliICEUDB::IUDBInfo& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
AliICEUDB::operator!=(const ::AliICEUDB::IUDBInfo& l, const ::AliICEUDB::IUDBInfo& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
AliICEUDB::operator<(const ::AliICEUDB::IUDBInfo& l, const ::AliICEUDB::IUDBInfo& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
AliICEUDB::operator<=(const ::AliICEUDB::IUDBInfo& l, const ::AliICEUDB::IUDBInfo& r)
{
    return l < r || l == r;
}

bool
AliICEUDB::operator>(const ::AliICEUDB::IUDBInfo& l, const ::AliICEUDB::IUDBInfo& r)
{
    return !(l < r) && !(l == r);
}

bool
AliICEUDB::operator>=(const ::AliICEUDB::IUDBInfo& l, const ::AliICEUDB::IUDBInfo& r)
{
    return !(l < r);
}
