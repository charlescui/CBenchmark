// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `authservice.ice'

#include <authservice.h>
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

static const ::std::string __AuthService__AuthSrvMgr__AddUser_name = "AddUser";

static const ::std::string __AuthService__AuthSrvMgr__DelUser_name = "DelUser";

static const ::std::string __AuthService__AuthSrvMgr__CheckUser_name = "CheckUser";

static const ::std::string __AuthService__AuthSrvMgr__ForbiddenUser_name = "ForbiddenUser";

static const ::std::string __AuthService__AuthSrvMgr__PermitUser_name = "PermitUser";

static const ::std::string __AuthService__AuthSrvMgr__GetForbiddenUser_name = "GetForbiddenUser";

void
IceInternal::incRef(::AuthService::AuthSrvMgr* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::AuthService::AuthSrvMgr* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::AuthService::AuthSrvMgr* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::AuthService::AuthSrvMgr* p)
{
    p->__decRef();
}

void
AuthService::__write(::IceInternal::BasicStream* __os, const ::AuthService::AuthSrvMgrPrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
AuthService::__read(::IceInternal::BasicStream* __is, ::AuthService::AuthSrvMgrPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::AuthService::AuthSrvMgr;
        v->__copyFrom(proxy);
    }
}

void
AuthService::__write(::IceInternal::BasicStream* __os, const ::AuthService::AuthSrvMgrPtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

void
AuthService::__addObject(const AuthSrvMgrPtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
AuthService::__usesClasses(const AuthSrvMgrPtr& p)
{
    return p->__usesClasses();
}

void
AuthService::__decRefUnsafe(const AuthSrvMgrPtr& p)
{
    p->__decRefUnsafe();
}

void
AuthService::__clearHandleUnsafe(AuthSrvMgrPtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::AuthService::AuthSrvMgr::AddUser(const ::std::string& userId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AuthService__AuthSrvMgr__AddUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::AuthService::AuthSrvMgr* __del = dynamic_cast< ::IceDelegate::AuthService::AuthSrvMgr*>(__delBase.get());
            return __del->AddUser(userId, __ctx);
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
IceProxy::AuthService::AuthSrvMgr::DelUser(const ::std::string& userId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AuthService__AuthSrvMgr__DelUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::AuthService::AuthSrvMgr* __del = dynamic_cast< ::IceDelegate::AuthService::AuthSrvMgr*>(__delBase.get());
            return __del->DelUser(userId, __ctx);
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
IceProxy::AuthService::AuthSrvMgr::CheckUser(const ::std::string& userId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AuthService__AuthSrvMgr__CheckUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::AuthService::AuthSrvMgr* __del = dynamic_cast< ::IceDelegate::AuthService::AuthSrvMgr*>(__delBase.get());
            return __del->CheckUser(userId, __ctx);
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
IceProxy::AuthService::AuthSrvMgr::ForbiddenUser(const ::std::string& userId, ::Ice::Int interval, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AuthService__AuthSrvMgr__ForbiddenUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::AuthService::AuthSrvMgr* __del = dynamic_cast< ::IceDelegate::AuthService::AuthSrvMgr*>(__delBase.get());
            return __del->ForbiddenUser(userId, interval, __ctx);
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
IceProxy::AuthService::AuthSrvMgr::PermitUser(const ::std::string& userId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AuthService__AuthSrvMgr__PermitUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::AuthService::AuthSrvMgr* __del = dynamic_cast< ::IceDelegate::AuthService::AuthSrvMgr*>(__delBase.get());
            return __del->PermitUser(userId, __ctx);
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
IceProxy::AuthService::AuthSrvMgr::GetForbiddenUser(const ::std::string& userId, ::Ice::Int& begin, ::Ice::Int& interval, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AuthService__AuthSrvMgr__GetForbiddenUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::AuthService::AuthSrvMgr* __del = dynamic_cast< ::IceDelegate::AuthService::AuthSrvMgr*>(__delBase.get());
            return __del->GetForbiddenUser(userId, begin, interval, __ctx);
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
IceProxy::AuthService::AuthSrvMgr::ice_staticId()
{
    return ::AuthService::AuthSrvMgr::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::AuthService::AuthSrvMgr::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::AuthService::AuthSrvMgr);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::AuthService::AuthSrvMgr::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::AuthService::AuthSrvMgr);
}

bool
IceProxy::AuthService::operator==(const ::IceProxy::AuthService::AuthSrvMgr& l, const ::IceProxy::AuthService::AuthSrvMgr& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AuthService::operator!=(const ::IceProxy::AuthService::AuthSrvMgr& l, const ::IceProxy::AuthService::AuthSrvMgr& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AuthService::operator<(const ::IceProxy::AuthService::AuthSrvMgr& l, const ::IceProxy::AuthService::AuthSrvMgr& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AuthService::operator<=(const ::IceProxy::AuthService::AuthSrvMgr& l, const ::IceProxy::AuthService::AuthSrvMgr& r)
{
    return l < r || l == r;
}

bool
IceProxy::AuthService::operator>(const ::IceProxy::AuthService::AuthSrvMgr& l, const ::IceProxy::AuthService::AuthSrvMgr& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::AuthService::operator>=(const ::IceProxy::AuthService::AuthSrvMgr& l, const ::IceProxy::AuthService::AuthSrvMgr& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::AuthService::AuthSrvMgr::AddUser(const ::std::string& userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AuthService__AuthSrvMgr__AddUser_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
IceDelegateM::AuthService::AuthSrvMgr::DelUser(const ::std::string& userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AuthService__AuthSrvMgr__DelUser_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
IceDelegateM::AuthService::AuthSrvMgr::CheckUser(const ::std::string& userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AuthService__AuthSrvMgr__CheckUser_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
IceDelegateM::AuthService::AuthSrvMgr::ForbiddenUser(const ::std::string& userId, ::Ice::Int interval, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AuthService__AuthSrvMgr__ForbiddenUser_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
IceDelegateM::AuthService::AuthSrvMgr::PermitUser(const ::std::string& userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AuthService__AuthSrvMgr__PermitUser_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
IceDelegateM::AuthService::AuthSrvMgr::GetForbiddenUser(const ::std::string& userId, ::Ice::Int& begin, ::Ice::Int& interval, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AuthService__AuthSrvMgr__GetForbiddenUser_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        __is->read(begin);
        __is->read(interval);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::AuthService::AuthSrvMgr::AddUser(const ::std::string& userId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AuthService__AuthSrvMgr__AddUser_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AuthService::AuthSrvMgr* __servant = dynamic_cast< ::AuthService::AuthSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->AddUser(userId, __current);
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
IceDelegateD::AuthService::AuthSrvMgr::DelUser(const ::std::string& userId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AuthService__AuthSrvMgr__DelUser_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AuthService::AuthSrvMgr* __servant = dynamic_cast< ::AuthService::AuthSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->DelUser(userId, __current);
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
IceDelegateD::AuthService::AuthSrvMgr::CheckUser(const ::std::string& userId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AuthService__AuthSrvMgr__CheckUser_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AuthService::AuthSrvMgr* __servant = dynamic_cast< ::AuthService::AuthSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->CheckUser(userId, __current);
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
IceDelegateD::AuthService::AuthSrvMgr::ForbiddenUser(const ::std::string& userId, ::Ice::Int interval, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AuthService__AuthSrvMgr__ForbiddenUser_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AuthService::AuthSrvMgr* __servant = dynamic_cast< ::AuthService::AuthSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->ForbiddenUser(userId, interval, __current);
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
IceDelegateD::AuthService::AuthSrvMgr::PermitUser(const ::std::string& userId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AuthService__AuthSrvMgr__PermitUser_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AuthService::AuthSrvMgr* __servant = dynamic_cast< ::AuthService::AuthSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->PermitUser(userId, __current);
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
IceDelegateD::AuthService::AuthSrvMgr::GetForbiddenUser(const ::std::string& userId, ::Ice::Int& begin, ::Ice::Int& interval, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AuthService__AuthSrvMgr__GetForbiddenUser_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AuthService::AuthSrvMgr* __servant = dynamic_cast< ::AuthService::AuthSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->GetForbiddenUser(userId, begin, interval, __current);
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
AuthService::AuthSrvMgr::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __AuthService__AuthSrvMgr_ids[2] =
{
    "::AuthService::AuthSrvMgr",
    "::Ice::Object"
};

bool
AuthService::AuthSrvMgr::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__AuthService__AuthSrvMgr_ids, __AuthService__AuthSrvMgr_ids + 2, _s);
}

::std::vector< ::std::string>
AuthService::AuthSrvMgr::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__AuthService__AuthSrvMgr_ids[0], &__AuthService__AuthSrvMgr_ids[2]);
}

const ::std::string&
AuthService::AuthSrvMgr::ice_id(const ::Ice::Current&) const
{
    return __AuthService__AuthSrvMgr_ids[0];
}

const ::std::string&
AuthService::AuthSrvMgr::ice_staticId()
{
    return __AuthService__AuthSrvMgr_ids[0];
}

::IceInternal::DispatchStatus
AuthService::AuthSrvMgr::___AddUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::Ice::Int __ret = AddUser(userId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AuthService::AuthSrvMgr::___DelUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::Ice::Int __ret = DelUser(userId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AuthService::AuthSrvMgr::___CheckUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::Ice::Int __ret = CheckUser(userId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AuthService::AuthSrvMgr::___ForbiddenUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::Ice::Int interval;
    __is->read(userId);
    __is->read(interval);
    ::Ice::Int __ret = ForbiddenUser(userId, interval, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AuthService::AuthSrvMgr::___PermitUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::Ice::Int __ret = PermitUser(userId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AuthService::AuthSrvMgr::___GetForbiddenUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::Ice::Int begin;
    ::Ice::Int interval;
    ::Ice::Int __ret = GetForbiddenUser(userId, begin, interval, __current);
    __os->write(begin);
    __os->write(interval);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __AuthService__AuthSrvMgr_all[] =
{
    "AddUser",
    "CheckUser",
    "DelUser",
    "ForbiddenUser",
    "GetForbiddenUser",
    "PermitUser",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::IceInternal::DispatchStatus
AuthService::AuthSrvMgr::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__AuthService__AuthSrvMgr_all, __AuthService__AuthSrvMgr_all + 10, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __AuthService__AuthSrvMgr_all)
    {
        case 0:
        {
            return ___AddUser(in, current);
        }
        case 1:
        {
            return ___CheckUser(in, current);
        }
        case 2:
        {
            return ___DelUser(in, current);
        }
        case 3:
        {
            return ___ForbiddenUser(in, current);
        }
        case 4:
        {
            return ___GetForbiddenUser(in, current);
        }
        case 5:
        {
            return ___PermitUser(in, current);
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
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
AuthService::AuthSrvMgr::__write(::IceInternal::BasicStream* __os) const
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
AuthService::AuthSrvMgr::__read(::IceInternal::BasicStream* __is, bool __rid)
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
AuthService::AuthSrvMgr::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AuthService::AuthSrvMgr was not generated with stream support";
    throw ex;
}

void
AuthService::AuthSrvMgr::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AuthService::AuthSrvMgr was not generated with stream support";
    throw ex;
}

void 
AuthService::__patch__AuthSrvMgrPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::AuthService::AuthSrvMgrPtr* p = static_cast< ::AuthService::AuthSrvMgrPtr*>(__addr);
    assert(p);
    *p = ::AuthService::AuthSrvMgrPtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::AuthService::AuthSrvMgr::ice_staticId();
        throw e;
    }
}

bool
AuthService::operator==(const ::AuthService::AuthSrvMgr& l, const ::AuthService::AuthSrvMgr& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
AuthService::operator!=(const ::AuthService::AuthSrvMgr& l, const ::AuthService::AuthSrvMgr& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
AuthService::operator<(const ::AuthService::AuthSrvMgr& l, const ::AuthService::AuthSrvMgr& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
AuthService::operator<=(const ::AuthService::AuthSrvMgr& l, const ::AuthService::AuthSrvMgr& r)
{
    return l < r || l == r;
}

bool
AuthService::operator>(const ::AuthService::AuthSrvMgr& l, const ::AuthService::AuthSrvMgr& r)
{
    return !(l < r) && !(l == r);
}

bool
AuthService::operator>=(const ::AuthService::AuthSrvMgr& l, const ::AuthService::AuthSrvMgr& r)
{
    return !(l < r);
}
