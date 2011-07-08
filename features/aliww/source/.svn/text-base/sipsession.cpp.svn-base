// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `sipsession.ice'

#include <sipsession.h>
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

static const ::std::string __com__alisoft__member__udb__api__sns__session__sessionService__bindSession_name = "bindSession";

void
IceInternal::incRef(::com::alisoft::member::udb::api::sns::session::sessionService* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::com::alisoft::member::udb::api::sns::session::sessionService* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::com::alisoft::member::udb::api::sns::session::sessionService* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::com::alisoft::member::udb::api::sns::session::sessionService* p)
{
    p->__decRef();
}

void
com::alisoft::member::udb::api::sns::session::__write(::IceInternal::BasicStream* __os, const ::com::alisoft::member::udb::api::sns::session::sessionServicePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
com::alisoft::member::udb::api::sns::session::__read(::IceInternal::BasicStream* __is, ::com::alisoft::member::udb::api::sns::session::sessionServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::alisoft::member::udb::api::sns::session::sessionService;
        v->__copyFrom(proxy);
    }
}

void
com::alisoft::member::udb::api::sns::session::__write(::IceInternal::BasicStream* __os, const ::com::alisoft::member::udb::api::sns::session::sessionServicePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

bool
com::alisoft::member::udb::api::sns::model::SessionInfo::operator==(const SessionInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
com::alisoft::member::udb::api::sns::model::SessionInfo::operator!=(const SessionInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(sessionId != __rhs.sessionId)
    {
        return true;
    }
    return false;
}

bool
com::alisoft::member::udb::api::sns::model::SessionInfo::operator<(const SessionInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(sessionId < __rhs.sessionId)
    {
        return true;
    }
    else if(__rhs.sessionId < sessionId)
    {
        return false;
    }
    return false;
}

void
com::alisoft::member::udb::api::sns::model::SessionInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(sessionId);
}

void
com::alisoft::member::udb::api::sns::model::SessionInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(sessionId);
}

void
com::alisoft::member::udb::api::sns::session::__addObject(const sessionServicePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
com::alisoft::member::udb::api::sns::session::__usesClasses(const sessionServicePtr& p)
{
    return p->__usesClasses();
}

void
com::alisoft::member::udb::api::sns::session::__decRefUnsafe(const sessionServicePtr& p)
{
    p->__decRefUnsafe();
}

void
com::alisoft::member::udb::api::sns::session::__clearHandleUnsafe(sessionServicePtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::com::alisoft::member::udb::api::sns::session::sessionService::bindSession(const ::std::string& appId, const ::std::string& userLongId, const ::std::string& type, ::com::alisoft::member::udb::api::sns::model::SessionInfo& sessionInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__sns__session__sessionService__bindSession_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::sns::session::sessionService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::sns::session::sessionService*>(__delBase.get());
            return __del->bindSession(appId, userLongId, type, sessionInfo, __ctx);
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
IceProxy::com::alisoft::member::udb::api::sns::session::sessionService::ice_staticId()
{
    return ::com::alisoft::member::udb::api::sns::session::sessionService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::alisoft::member::udb::api::sns::session::sessionService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::alisoft::member::udb::api::sns::session::sessionService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::alisoft::member::udb::api::sns::session::sessionService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::alisoft::member::udb::api::sns::session::sessionService);
}

bool
IceProxy::com::alisoft::member::udb::api::sns::session::operator==(const ::IceProxy::com::alisoft::member::udb::api::sns::session::sessionService& l, const ::IceProxy::com::alisoft::member::udb::api::sns::session::sessionService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::com::alisoft::member::udb::api::sns::session::operator!=(const ::IceProxy::com::alisoft::member::udb::api::sns::session::sessionService& l, const ::IceProxy::com::alisoft::member::udb::api::sns::session::sessionService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::com::alisoft::member::udb::api::sns::session::operator<(const ::IceProxy::com::alisoft::member::udb::api::sns::session::sessionService& l, const ::IceProxy::com::alisoft::member::udb::api::sns::session::sessionService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::com::alisoft::member::udb::api::sns::session::operator<=(const ::IceProxy::com::alisoft::member::udb::api::sns::session::sessionService& l, const ::IceProxy::com::alisoft::member::udb::api::sns::session::sessionService& r)
{
    return l < r || l == r;
}

bool
IceProxy::com::alisoft::member::udb::api::sns::session::operator>(const ::IceProxy::com::alisoft::member::udb::api::sns::session::sessionService& l, const ::IceProxy::com::alisoft::member::udb::api::sns::session::sessionService& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::com::alisoft::member::udb::api::sns::session::operator>=(const ::IceProxy::com::alisoft::member::udb::api::sns::session::sessionService& l, const ::IceProxy::com::alisoft::member::udb::api::sns::session::sessionService& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::com::alisoft::member::udb::api::sns::session::sessionService::bindSession(const ::std::string& appId, const ::std::string& userLongId, const ::std::string& type, ::com::alisoft::member::udb::api::sns::model::SessionInfo& sessionInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__sns__session__sessionService__bindSession_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(appId);
        __os->write(userLongId);
        __os->write(type);
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
        sessionInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::sns::session::sessionService::bindSession(const ::std::string& appId, const ::std::string& userLongId, const ::std::string& type, ::com::alisoft::member::udb::api::sns::model::SessionInfo& sessionInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__sns__session__sessionService__bindSession_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::sns::session::sessionService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::sns::session::sessionService*>(__direct.servant().get());
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
                __ret = __servant->bindSession(appId, userLongId, type, sessionInfo, __current);
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
com::alisoft::member::udb::api::sns::session::sessionService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __com__alisoft__member__udb__api__sns__session__sessionService_ids[2] =
{
    "::Ice::Object",
    "::com::alisoft::member::udb::api::sns::session::sessionService"
};

bool
com::alisoft::member::udb::api::sns::session::sessionService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__alisoft__member__udb__api__sns__session__sessionService_ids, __com__alisoft__member__udb__api__sns__session__sessionService_ids + 2, _s);
}

::std::vector< ::std::string>
com::alisoft::member::udb::api::sns::session::sessionService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__alisoft__member__udb__api__sns__session__sessionService_ids[0], &__com__alisoft__member__udb__api__sns__session__sessionService_ids[2]);
}

const ::std::string&
com::alisoft::member::udb::api::sns::session::sessionService::ice_id(const ::Ice::Current&) const
{
    return __com__alisoft__member__udb__api__sns__session__sessionService_ids[1];
}

const ::std::string&
com::alisoft::member::udb::api::sns::session::sessionService::ice_staticId()
{
    return __com__alisoft__member__udb__api__sns__session__sessionService_ids[1];
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::sns::session::sessionService::___bindSession(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string appId;
    ::std::string userLongId;
    ::std::string type;
    __is->read(appId);
    __is->read(userLongId);
    __is->read(type);
    ::com::alisoft::member::udb::api::sns::model::SessionInfo sessionInfo;
    ::Ice::Int __ret = bindSession(appId, userLongId, type, sessionInfo, __current);
    sessionInfo.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __com__alisoft__member__udb__api__sns__session__sessionService_all[] =
{
    "bindSession",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::sns::session::sessionService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__com__alisoft__member__udb__api__sns__session__sessionService_all, __com__alisoft__member__udb__api__sns__session__sessionService_all + 5, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __com__alisoft__member__udb__api__sns__session__sessionService_all)
    {
        case 0:
        {
            return ___bindSession(in, current);
        }
        case 1:
        {
            return ___ice_id(in, current);
        }
        case 2:
        {
            return ___ice_ids(in, current);
        }
        case 3:
        {
            return ___ice_isA(in, current);
        }
        case 4:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
com::alisoft::member::udb::api::sns::session::sessionService::__write(::IceInternal::BasicStream* __os) const
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
com::alisoft::member::udb::api::sns::session::sessionService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
com::alisoft::member::udb::api::sns::session::sessionService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::alisoft::member::udb::api::sns::session::sessionService was not generated with stream support";
    throw ex;
}

void
com::alisoft::member::udb::api::sns::session::sessionService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::alisoft::member::udb::api::sns::session::sessionService was not generated with stream support";
    throw ex;
}

void 
com::alisoft::member::udb::api::sns::session::__patch__sessionServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::alisoft::member::udb::api::sns::session::sessionServicePtr* p = static_cast< ::com::alisoft::member::udb::api::sns::session::sessionServicePtr*>(__addr);
    assert(p);
    *p = ::com::alisoft::member::udb::api::sns::session::sessionServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::com::alisoft::member::udb::api::sns::session::sessionService::ice_staticId();
        throw e;
    }
}

bool
com::alisoft::member::udb::api::sns::session::operator==(const ::com::alisoft::member::udb::api::sns::session::sessionService& l, const ::com::alisoft::member::udb::api::sns::session::sessionService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::alisoft::member::udb::api::sns::session::operator!=(const ::com::alisoft::member::udb::api::sns::session::sessionService& l, const ::com::alisoft::member::udb::api::sns::session::sessionService& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
com::alisoft::member::udb::api::sns::session::operator<(const ::com::alisoft::member::udb::api::sns::session::sessionService& l, const ::com::alisoft::member::udb::api::sns::session::sessionService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
com::alisoft::member::udb::api::sns::session::operator<=(const ::com::alisoft::member::udb::api::sns::session::sessionService& l, const ::com::alisoft::member::udb::api::sns::session::sessionService& r)
{
    return l < r || l == r;
}

bool
com::alisoft::member::udb::api::sns::session::operator>(const ::com::alisoft::member::udb::api::sns::session::sessionService& l, const ::com::alisoft::member::udb::api::sns::session::sessionService& r)
{
    return !(l < r) && !(l == r);
}

bool
com::alisoft::member::udb::api::sns::session::operator>=(const ::com::alisoft::member::udb::api::sns::session::sessionService& l, const ::com::alisoft::member::udb::api::sns::session::sessionService& r)
{
    return !(l < r);
}
