// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `imsession.ice'

#include <imsession.h>
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

static const ::std::string __AliIM__SessionMgr__getUserSession_name = "getUserSession";

static const ::std::string __AliIM__SessionMgr__checkUserSession_name = "checkUserSession";

static const ::std::string __AliIM__SessionMgr__removeSession_name = "removeSession";

static const ::std::string __AliIM__SessionMgr__getUserExistSession_name = "getUserExistSession";

void
IceInternal::incRef(::AliIM::SessionMgr* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::AliIM::SessionMgr* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::AliIM::SessionMgr* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::AliIM::SessionMgr* p)
{
    p->__decRef();
}

void
AliIM::__write(::IceInternal::BasicStream* __os, const ::AliIM::SessionMgrPrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
AliIM::__read(::IceInternal::BasicStream* __is, ::AliIM::SessionMgrPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::AliIM::SessionMgr;
        v->__copyFrom(proxy);
    }
}

void
AliIM::__write(::IceInternal::BasicStream* __os, const ::AliIM::SessionMgrPtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

bool
AliIM::SIceSession::operator==(const SIceSession& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AliIM::SIceSession::operator!=(const SIceSession& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(uid != __rhs.uid)
    {
        return true;
    }
    if(sessionNo != __rhs.sessionNo)
    {
        return true;
    }
    if(expiretime != __rhs.expiretime)
    {
        return true;
    }
    return false;
}

bool
AliIM::SIceSession::operator<(const SIceSession& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(uid < __rhs.uid)
    {
        return true;
    }
    else if(__rhs.uid < uid)
    {
        return false;
    }
    if(sessionNo < __rhs.sessionNo)
    {
        return true;
    }
    else if(__rhs.sessionNo < sessionNo)
    {
        return false;
    }
    if(expiretime < __rhs.expiretime)
    {
        return true;
    }
    else if(__rhs.expiretime < expiretime)
    {
        return false;
    }
    return false;
}

void
AliIM::SIceSession::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(uid);
    __os->write(sessionNo);
    __os->write(expiretime);
}

void
AliIM::SIceSession::__read(::IceInternal::BasicStream* __is)
{
    __is->read(uid);
    __is->read(sessionNo);
    __is->read(expiretime);
}

void
AliIM::__addObject(const SessionMgrPtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
AliIM::__usesClasses(const SessionMgrPtr& p)
{
    return p->__usesClasses();
}

void
AliIM::__decRefUnsafe(const SessionMgrPtr& p)
{
    p->__decRefUnsafe();
}

void
AliIM::__clearHandleUnsafe(SessionMgrPtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::AliIM::SessionMgr::getUserSession(const ::std::string& uid, ::AliIM::SIceSession& retsession, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__SessionMgr__getUserSession_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::SessionMgr* __del = dynamic_cast< ::IceDelegate::AliIM::SessionMgr*>(__delBase.get());
            return __del->getUserSession(uid, retsession, __ctx);
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
IceProxy::AliIM::SessionMgr::checkUserSession(const ::std::string& uid, const ::std::string& sessionNo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__SessionMgr__checkUserSession_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::SessionMgr* __del = dynamic_cast< ::IceDelegate::AliIM::SessionMgr*>(__delBase.get());
            return __del->checkUserSession(uid, sessionNo, __ctx);
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
IceProxy::AliIM::SessionMgr::removeSession(const ::std::string& uid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__SessionMgr__removeSession_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::SessionMgr* __del = dynamic_cast< ::IceDelegate::AliIM::SessionMgr*>(__delBase.get());
            return __del->removeSession(uid, __ctx);
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
IceProxy::AliIM::SessionMgr::getUserExistSession(const ::std::string& uid, ::AliIM::SIceSession& retsession, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__SessionMgr__getUserExistSession_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::SessionMgr* __del = dynamic_cast< ::IceDelegate::AliIM::SessionMgr*>(__delBase.get());
            return __del->getUserExistSession(uid, retsession, __ctx);
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
IceProxy::AliIM::SessionMgr::ice_staticId()
{
    return ::AliIM::SessionMgr::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::AliIM::SessionMgr::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::AliIM::SessionMgr);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::AliIM::SessionMgr::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::AliIM::SessionMgr);
}

bool
IceProxy::AliIM::operator==(const ::IceProxy::AliIM::SessionMgr& l, const ::IceProxy::AliIM::SessionMgr& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator!=(const ::IceProxy::AliIM::SessionMgr& l, const ::IceProxy::AliIM::SessionMgr& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator<(const ::IceProxy::AliIM::SessionMgr& l, const ::IceProxy::AliIM::SessionMgr& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator<=(const ::IceProxy::AliIM::SessionMgr& l, const ::IceProxy::AliIM::SessionMgr& r)
{
    return l < r || l == r;
}

bool
IceProxy::AliIM::operator>(const ::IceProxy::AliIM::SessionMgr& l, const ::IceProxy::AliIM::SessionMgr& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::AliIM::operator>=(const ::IceProxy::AliIM::SessionMgr& l, const ::IceProxy::AliIM::SessionMgr& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::AliIM::SessionMgr::getUserSession(const ::std::string& uid, ::AliIM::SIceSession& retsession, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__SessionMgr__getUserSession_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
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
        retsession.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIM::SessionMgr::checkUserSession(const ::std::string& uid, const ::std::string& sessionNo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__SessionMgr__checkUserSession_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(sessionNo);
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
IceDelegateM::AliIM::SessionMgr::removeSession(const ::std::string& uid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__SessionMgr__removeSession_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
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
IceDelegateM::AliIM::SessionMgr::getUserExistSession(const ::std::string& uid, ::AliIM::SIceSession& retsession, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__SessionMgr__getUserExistSession_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
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
        retsession.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::AliIM::SessionMgr::getUserSession(const ::std::string& uid, ::AliIM::SIceSession& retsession, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__SessionMgr__getUserSession_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::SessionMgr* __servant = dynamic_cast< ::AliIM::SessionMgr*>(__direct.servant().get());
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
                __ret = __servant->getUserSession(uid, retsession, __current);
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
IceDelegateD::AliIM::SessionMgr::checkUserSession(const ::std::string& uid, const ::std::string& sessionNo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__SessionMgr__checkUserSession_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::SessionMgr* __servant = dynamic_cast< ::AliIM::SessionMgr*>(__direct.servant().get());
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
                __ret = __servant->checkUserSession(uid, sessionNo, __current);
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
IceDelegateD::AliIM::SessionMgr::removeSession(const ::std::string& uid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__SessionMgr__removeSession_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::SessionMgr* __servant = dynamic_cast< ::AliIM::SessionMgr*>(__direct.servant().get());
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
                __ret = __servant->removeSession(uid, __current);
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
IceDelegateD::AliIM::SessionMgr::getUserExistSession(const ::std::string& uid, ::AliIM::SIceSession& retsession, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__SessionMgr__getUserExistSession_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::SessionMgr* __servant = dynamic_cast< ::AliIM::SessionMgr*>(__direct.servant().get());
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
                __ret = __servant->getUserExistSession(uid, retsession, __current);
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
AliIM::SessionMgr::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __AliIM__SessionMgr_ids[2] =
{
    "::AliIM::SessionMgr",
    "::Ice::Object"
};

bool
AliIM::SessionMgr::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__AliIM__SessionMgr_ids, __AliIM__SessionMgr_ids + 2, _s);
}

::std::vector< ::std::string>
AliIM::SessionMgr::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__AliIM__SessionMgr_ids[0], &__AliIM__SessionMgr_ids[2]);
}

const ::std::string&
AliIM::SessionMgr::ice_id(const ::Ice::Current&) const
{
    return __AliIM__SessionMgr_ids[0];
}

const ::std::string&
AliIM::SessionMgr::ice_staticId()
{
    return __AliIM__SessionMgr_ids[0];
}

::IceInternal::DispatchStatus
AliIM::SessionMgr::___getUserSession(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::AliIM::SIceSession retsession;
    ::Ice::Int __ret = getUserSession(uid, retsession, __current);
    retsession.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::SessionMgr::___checkUserSession(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string sessionNo;
    __is->read(uid);
    __is->read(sessionNo);
    ::Ice::Int __ret = checkUserSession(uid, sessionNo, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::SessionMgr::___removeSession(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::Ice::Int __ret = removeSession(uid, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::SessionMgr::___getUserExistSession(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::AliIM::SIceSession retsession;
    ::Ice::Int __ret = getUserExistSession(uid, retsession, __current);
    retsession.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __AliIM__SessionMgr_all[] =
{
    "checkUserSession",
    "getUserExistSession",
    "getUserSession",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "removeSession"
};

::IceInternal::DispatchStatus
AliIM::SessionMgr::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__AliIM__SessionMgr_all, __AliIM__SessionMgr_all + 8, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __AliIM__SessionMgr_all)
    {
        case 0:
        {
            return ___checkUserSession(in, current);
        }
        case 1:
        {
            return ___getUserExistSession(in, current);
        }
        case 2:
        {
            return ___getUserSession(in, current);
        }
        case 3:
        {
            return ___ice_id(in, current);
        }
        case 4:
        {
            return ___ice_ids(in, current);
        }
        case 5:
        {
            return ___ice_isA(in, current);
        }
        case 6:
        {
            return ___ice_ping(in, current);
        }
        case 7:
        {
            return ___removeSession(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
AliIM::SessionMgr::__write(::IceInternal::BasicStream* __os) const
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
AliIM::SessionMgr::__read(::IceInternal::BasicStream* __is, bool __rid)
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
AliIM::SessionMgr::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIM::SessionMgr was not generated with stream support";
    throw ex;
}

void
AliIM::SessionMgr::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIM::SessionMgr was not generated with stream support";
    throw ex;
}

void 
AliIM::__patch__SessionMgrPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::AliIM::SessionMgrPtr* p = static_cast< ::AliIM::SessionMgrPtr*>(__addr);
    assert(p);
    *p = ::AliIM::SessionMgrPtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::AliIM::SessionMgr::ice_staticId();
        throw e;
    }
}

bool
AliIM::operator==(const ::AliIM::SessionMgr& l, const ::AliIM::SessionMgr& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator!=(const ::AliIM::SessionMgr& l, const ::AliIM::SessionMgr& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator<(const ::AliIM::SessionMgr& l, const ::AliIM::SessionMgr& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator<=(const ::AliIM::SessionMgr& l, const ::AliIM::SessionMgr& r)
{
    return l < r || l == r;
}

bool
AliIM::operator>(const ::AliIM::SessionMgr& l, const ::AliIM::SessionMgr& r)
{
    return !(l < r) && !(l == r);
}

bool
AliIM::operator>=(const ::AliIM::SessionMgr& l, const ::AliIM::SessionMgr& r)
{
    return !(l < r);
}
