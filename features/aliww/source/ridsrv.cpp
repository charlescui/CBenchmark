// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `ridsrv.ice'

#include <ridsrv.h>
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

static const ::std::string __ridService__ridSrvMgr__CheckUser_name = "CheckUser";

static const ::std::string __ridService__ridSrvMgr__Forbiddenpcid_name = "Forbiddenpcid";

static const ::std::string __ridService__ridSrvMgr__Permitpcid_name = "Permitpcid";

static const ::std::string __ridService__ridSrvMgr__ForbiddenIp_name = "ForbiddenIp";

static const ::std::string __ridService__ridSrvMgr__Permitip_name = "Permitip";

void
IceInternal::incRef(::ridService::ridSrvMgr* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::ridService::ridSrvMgr* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::ridService::ridSrvMgr* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::ridService::ridSrvMgr* p)
{
    p->__decRef();
}

void
ridService::__write(::IceInternal::BasicStream* __os, const ::ridService::ridSrvMgrPrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
ridService::__read(::IceInternal::BasicStream* __is, ::ridService::ridSrvMgrPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::ridService::ridSrvMgr;
        v->__copyFrom(proxy);
    }
}

void
ridService::__write(::IceInternal::BasicStream* __os, const ::ridService::ridSrvMgrPtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

void
ridService::__addObject(const ridSrvMgrPtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
ridService::__usesClasses(const ridSrvMgrPtr& p)
{
    return p->__usesClasses();
}

void
ridService::__decRefUnsafe(const ridSrvMgrPtr& p)
{
    p->__decRefUnsafe();
}

void
ridService::__clearHandleUnsafe(ridSrvMgrPtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::ridService::ridSrvMgr::CheckUser(const ::std::string& userId, ::Ice::Int ip, const ::std::string& srid, ::std::string& drid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ridService__ridSrvMgr__CheckUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::ridService::ridSrvMgr* __del = dynamic_cast< ::IceDelegate::ridService::ridSrvMgr*>(__delBase.get());
            return __del->CheckUser(userId, ip, srid, drid, __ctx);
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
IceProxy::ridService::ridSrvMgr::Forbiddenpcid(const ::std::string& pcid, ::Ice::Int interval, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ridService__ridSrvMgr__Forbiddenpcid_name);
            __delBase = __getDelegate();
            ::IceDelegate::ridService::ridSrvMgr* __del = dynamic_cast< ::IceDelegate::ridService::ridSrvMgr*>(__delBase.get());
            return __del->Forbiddenpcid(pcid, interval, __ctx);
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
IceProxy::ridService::ridSrvMgr::Permitpcid(const ::std::string& pcid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ridService__ridSrvMgr__Permitpcid_name);
            __delBase = __getDelegate();
            ::IceDelegate::ridService::ridSrvMgr* __del = dynamic_cast< ::IceDelegate::ridService::ridSrvMgr*>(__delBase.get());
            return __del->Permitpcid(pcid, __ctx);
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
IceProxy::ridService::ridSrvMgr::ForbiddenIp(const ::std::string& ip, ::Ice::Int interval, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ridService__ridSrvMgr__ForbiddenIp_name);
            __delBase = __getDelegate();
            ::IceDelegate::ridService::ridSrvMgr* __del = dynamic_cast< ::IceDelegate::ridService::ridSrvMgr*>(__delBase.get());
            return __del->ForbiddenIp(ip, interval, __ctx);
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
IceProxy::ridService::ridSrvMgr::Permitip(const ::std::string& ip, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ridService__ridSrvMgr__Permitip_name);
            __delBase = __getDelegate();
            ::IceDelegate::ridService::ridSrvMgr* __del = dynamic_cast< ::IceDelegate::ridService::ridSrvMgr*>(__delBase.get());
            return __del->Permitip(ip, __ctx);
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
IceProxy::ridService::ridSrvMgr::ice_staticId()
{
    return ::ridService::ridSrvMgr::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::ridService::ridSrvMgr::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::ridService::ridSrvMgr);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::ridService::ridSrvMgr::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::ridService::ridSrvMgr);
}

bool
IceProxy::ridService::operator==(const ::IceProxy::ridService::ridSrvMgr& l, const ::IceProxy::ridService::ridSrvMgr& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::ridService::operator!=(const ::IceProxy::ridService::ridSrvMgr& l, const ::IceProxy::ridService::ridSrvMgr& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::ridService::operator<(const ::IceProxy::ridService::ridSrvMgr& l, const ::IceProxy::ridService::ridSrvMgr& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::ridService::operator<=(const ::IceProxy::ridService::ridSrvMgr& l, const ::IceProxy::ridService::ridSrvMgr& r)
{
    return l < r || l == r;
}

bool
IceProxy::ridService::operator>(const ::IceProxy::ridService::ridSrvMgr& l, const ::IceProxy::ridService::ridSrvMgr& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::ridService::operator>=(const ::IceProxy::ridService::ridSrvMgr& l, const ::IceProxy::ridService::ridSrvMgr& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::ridService::ridSrvMgr::CheckUser(const ::std::string& userId, ::Ice::Int ip, const ::std::string& srid, ::std::string& drid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ridService__ridSrvMgr__CheckUser_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(ip);
        __os->write(srid);
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
        __is->read(drid);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ridService::ridSrvMgr::Forbiddenpcid(const ::std::string& pcid, ::Ice::Int interval, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ridService__ridSrvMgr__Forbiddenpcid_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(pcid);
        __os->write(interval);
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
IceDelegateM::ridService::ridSrvMgr::Permitpcid(const ::std::string& pcid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ridService__ridSrvMgr__Permitpcid_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(pcid);
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
IceDelegateM::ridService::ridSrvMgr::ForbiddenIp(const ::std::string& ip, ::Ice::Int interval, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ridService__ridSrvMgr__ForbiddenIp_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(ip);
        __os->write(interval);
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
IceDelegateM::ridService::ridSrvMgr::Permitip(const ::std::string& ip, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ridService__ridSrvMgr__Permitip_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(ip);
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
IceDelegateD::ridService::ridSrvMgr::CheckUser(const ::std::string& userId, ::Ice::Int ip, const ::std::string& srid, ::std::string& drid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ridService__ridSrvMgr__CheckUser_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ridService::ridSrvMgr* __servant = dynamic_cast< ::ridService::ridSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->CheckUser(userId, ip, srid, drid, __current);
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
IceDelegateD::ridService::ridSrvMgr::Forbiddenpcid(const ::std::string& pcid, ::Ice::Int interval, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ridService__ridSrvMgr__Forbiddenpcid_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ridService::ridSrvMgr* __servant = dynamic_cast< ::ridService::ridSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->Forbiddenpcid(pcid, interval, __current);
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
IceDelegateD::ridService::ridSrvMgr::Permitpcid(const ::std::string& pcid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ridService__ridSrvMgr__Permitpcid_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ridService::ridSrvMgr* __servant = dynamic_cast< ::ridService::ridSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->Permitpcid(pcid, __current);
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
IceDelegateD::ridService::ridSrvMgr::ForbiddenIp(const ::std::string& ip, ::Ice::Int interval, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ridService__ridSrvMgr__ForbiddenIp_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ridService::ridSrvMgr* __servant = dynamic_cast< ::ridService::ridSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->ForbiddenIp(ip, interval, __current);
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
IceDelegateD::ridService::ridSrvMgr::Permitip(const ::std::string& ip, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ridService__ridSrvMgr__Permitip_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ridService::ridSrvMgr* __servant = dynamic_cast< ::ridService::ridSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->Permitip(ip, __current);
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
ridService::ridSrvMgr::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __ridService__ridSrvMgr_ids[2] =
{
    "::Ice::Object",
    "::ridService::ridSrvMgr"
};

bool
ridService::ridSrvMgr::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__ridService__ridSrvMgr_ids, __ridService__ridSrvMgr_ids + 2, _s);
}

::std::vector< ::std::string>
ridService::ridSrvMgr::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__ridService__ridSrvMgr_ids[0], &__ridService__ridSrvMgr_ids[2]);
}

const ::std::string&
ridService::ridSrvMgr::ice_id(const ::Ice::Current&) const
{
    return __ridService__ridSrvMgr_ids[1];
}

const ::std::string&
ridService::ridSrvMgr::ice_staticId()
{
    return __ridService__ridSrvMgr_ids[1];
}

::IceInternal::DispatchStatus
ridService::ridSrvMgr::___CheckUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::Ice::Int ip;
    ::std::string srid;
    __is->read(userId);
    __is->read(ip);
    __is->read(srid);
    ::std::string drid;
    ::Ice::Int __ret = CheckUser(userId, ip, srid, drid, __current);
    __os->write(drid);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ridService::ridSrvMgr::___Forbiddenpcid(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string pcid;
    ::Ice::Int interval;
    __is->read(pcid);
    __is->read(interval);
    ::Ice::Int __ret = Forbiddenpcid(pcid, interval, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ridService::ridSrvMgr::___Permitpcid(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string pcid;
    __is->read(pcid);
    ::Ice::Int __ret = Permitpcid(pcid, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ridService::ridSrvMgr::___ForbiddenIp(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string ip;
    ::Ice::Int interval;
    __is->read(ip);
    __is->read(interval);
    ::Ice::Int __ret = ForbiddenIp(ip, interval, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ridService::ridSrvMgr::___Permitip(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string ip;
    __is->read(ip);
    ::Ice::Int __ret = Permitip(ip, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __ridService__ridSrvMgr_all[] =
{
    "CheckUser",
    "ForbiddenIp",
    "Forbiddenpcid",
    "Permitip",
    "Permitpcid",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::IceInternal::DispatchStatus
ridService::ridSrvMgr::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__ridService__ridSrvMgr_all, __ridService__ridSrvMgr_all + 9, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __ridService__ridSrvMgr_all)
    {
        case 0:
        {
            return ___CheckUser(in, current);
        }
        case 1:
        {
            return ___ForbiddenIp(in, current);
        }
        case 2:
        {
            return ___Forbiddenpcid(in, current);
        }
        case 3:
        {
            return ___Permitip(in, current);
        }
        case 4:
        {
            return ___Permitpcid(in, current);
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
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
ridService::ridSrvMgr::__write(::IceInternal::BasicStream* __os) const
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
ridService::ridSrvMgr::__read(::IceInternal::BasicStream* __is, bool __rid)
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
ridService::ridSrvMgr::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type ridService::ridSrvMgr was not generated with stream support";
    throw ex;
}

void
ridService::ridSrvMgr::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type ridService::ridSrvMgr was not generated with stream support";
    throw ex;
}

void 
ridService::__patch__ridSrvMgrPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::ridService::ridSrvMgrPtr* p = static_cast< ::ridService::ridSrvMgrPtr*>(__addr);
    assert(p);
    *p = ::ridService::ridSrvMgrPtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::ridService::ridSrvMgr::ice_staticId();
        throw e;
    }
}

bool
ridService::operator==(const ::ridService::ridSrvMgr& l, const ::ridService::ridSrvMgr& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
ridService::operator!=(const ::ridService::ridSrvMgr& l, const ::ridService::ridSrvMgr& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
ridService::operator<(const ::ridService::ridSrvMgr& l, const ::ridService::ridSrvMgr& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
ridService::operator<=(const ::ridService::ridSrvMgr& l, const ::ridService::ridSrvMgr& r)
{
    return l < r || l == r;
}

bool
ridService::operator>(const ::ridService::ridSrvMgr& l, const ::ridService::ridSrvMgr& r)
{
    return !(l < r) && !(l == r);
}

bool
ridService::operator>=(const ::ridService::ridSrvMgr& l, const ::ridService::ridSrvMgr& r)
{
    return !(l < r);
}
