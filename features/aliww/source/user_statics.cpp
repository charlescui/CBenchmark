// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `user_statics.ice'

#include <user_statics.h>
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

static const ::std::string __UserStaticsX__UserStaticsI__insert_name = "insert";

static const ::std::string __UserStaticsX__UserStaticsI__get_name = "get";

void
IceInternal::incRef(::UserStaticsX::UserStaticsI* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::UserStaticsX::UserStaticsI* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::UserStaticsX::UserStaticsI* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::UserStaticsX::UserStaticsI* p)
{
    p->__decRef();
}

void
UserStaticsX::__write(::IceInternal::BasicStream* __os, const ::UserStaticsX::UserStaticsIPrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
UserStaticsX::__read(::IceInternal::BasicStream* __is, ::UserStaticsX::UserStaticsIPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::UserStaticsX::UserStaticsI;
        v->__copyFrom(proxy);
    }
}

void
UserStaticsX::__write(::IceInternal::BasicStream* __os, const ::UserStaticsX::UserStaticsIPtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

void
UserStaticsX::__addObject(const UserStaticsIPtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
UserStaticsX::__usesClasses(const UserStaticsIPtr& p)
{
    return p->__usesClasses();
}

void
UserStaticsX::__decRefUnsafe(const UserStaticsIPtr& p)
{
    p->__decRefUnsafe();
}

void
UserStaticsX::__clearHandleUnsafe(UserStaticsIPtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::UserStaticsX::UserStaticsI::insert(const ::AliIMDBBase::UserStatics& delta, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__UserStaticsX__UserStaticsI__insert_name);
            __delBase = __getDelegate();
            ::IceDelegate::UserStaticsX::UserStaticsI* __del = dynamic_cast< ::IceDelegate::UserStaticsX::UserStaticsI*>(__delBase.get());
            return __del->insert(delta, __ctx);
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
IceProxy::UserStaticsX::UserStaticsI::get(const ::std::string& id, ::AliIMDBBase::UserStatics& s, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__UserStaticsX__UserStaticsI__get_name);
            __delBase = __getDelegate();
            ::IceDelegate::UserStaticsX::UserStaticsI* __del = dynamic_cast< ::IceDelegate::UserStaticsX::UserStaticsI*>(__delBase.get());
            return __del->get(id, s, __ctx);
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
IceProxy::UserStaticsX::UserStaticsI::ice_staticId()
{
    return ::UserStaticsX::UserStaticsI::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::UserStaticsX::UserStaticsI::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::UserStaticsX::UserStaticsI);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::UserStaticsX::UserStaticsI::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::UserStaticsX::UserStaticsI);
}

bool
IceProxy::UserStaticsX::operator==(const ::IceProxy::UserStaticsX::UserStaticsI& l, const ::IceProxy::UserStaticsX::UserStaticsI& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::UserStaticsX::operator!=(const ::IceProxy::UserStaticsX::UserStaticsI& l, const ::IceProxy::UserStaticsX::UserStaticsI& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::UserStaticsX::operator<(const ::IceProxy::UserStaticsX::UserStaticsI& l, const ::IceProxy::UserStaticsX::UserStaticsI& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::UserStaticsX::operator<=(const ::IceProxy::UserStaticsX::UserStaticsI& l, const ::IceProxy::UserStaticsX::UserStaticsI& r)
{
    return l < r || l == r;
}

bool
IceProxy::UserStaticsX::operator>(const ::IceProxy::UserStaticsX::UserStaticsI& l, const ::IceProxy::UserStaticsX::UserStaticsI& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::UserStaticsX::operator>=(const ::IceProxy::UserStaticsX::UserStaticsI& l, const ::IceProxy::UserStaticsX::UserStaticsI& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::UserStaticsX::UserStaticsI::insert(const ::AliIMDBBase::UserStatics& delta, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __UserStaticsX__UserStaticsI__insert_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        delta.__write(__os);
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
IceDelegateM::UserStaticsX::UserStaticsI::get(const ::std::string& id, ::AliIMDBBase::UserStatics& s, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __UserStaticsX__UserStaticsI__get_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
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
        s.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::UserStaticsX::UserStaticsI::insert(const ::AliIMDBBase::UserStatics& delta, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __UserStaticsX__UserStaticsI__insert_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::UserStaticsX::UserStaticsI* __servant = dynamic_cast< ::UserStaticsX::UserStaticsI*>(__direct.servant().get());
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
                __ret = __servant->insert(delta, __current);
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
IceDelegateD::UserStaticsX::UserStaticsI::get(const ::std::string& id, ::AliIMDBBase::UserStatics& s, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __UserStaticsX__UserStaticsI__get_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::UserStaticsX::UserStaticsI* __servant = dynamic_cast< ::UserStaticsX::UserStaticsI*>(__direct.servant().get());
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
                __ret = __servant->get(id, s, __current);
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
UserStaticsX::UserStaticsI::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __UserStaticsX__UserStaticsI_ids[2] =
{
    "::Ice::Object",
    "::UserStaticsX::UserStaticsI"
};

bool
UserStaticsX::UserStaticsI::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__UserStaticsX__UserStaticsI_ids, __UserStaticsX__UserStaticsI_ids + 2, _s);
}

::std::vector< ::std::string>
UserStaticsX::UserStaticsI::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__UserStaticsX__UserStaticsI_ids[0], &__UserStaticsX__UserStaticsI_ids[2]);
}

const ::std::string&
UserStaticsX::UserStaticsI::ice_id(const ::Ice::Current&) const
{
    return __UserStaticsX__UserStaticsI_ids[1];
}

const ::std::string&
UserStaticsX::UserStaticsI::ice_staticId()
{
    return __UserStaticsX__UserStaticsI_ids[1];
}

::IceInternal::DispatchStatus
UserStaticsX::UserStaticsI::___insert(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::AliIMDBBase::UserStatics delta;
    delta.__read(__is);
    ::Ice::Int __ret = insert(delta, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
UserStaticsX::UserStaticsI::___get(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string id;
    __is->read(id);
    ::AliIMDBBase::UserStatics s;
    ::Ice::Int __ret = get(id, s, __current);
    s.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __UserStaticsX__UserStaticsI_all[] =
{
    "get",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "insert"
};

::IceInternal::DispatchStatus
UserStaticsX::UserStaticsI::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__UserStaticsX__UserStaticsI_all, __UserStaticsX__UserStaticsI_all + 6, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __UserStaticsX__UserStaticsI_all)
    {
        case 0:
        {
            return ___get(in, current);
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
        case 5:
        {
            return ___insert(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
UserStaticsX::UserStaticsI::__write(::IceInternal::BasicStream* __os) const
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
UserStaticsX::UserStaticsI::__read(::IceInternal::BasicStream* __is, bool __rid)
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
UserStaticsX::UserStaticsI::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type UserStaticsX::UserStaticsI was not generated with stream support";
    throw ex;
}

void
UserStaticsX::UserStaticsI::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type UserStaticsX::UserStaticsI was not generated with stream support";
    throw ex;
}

void 
UserStaticsX::__patch__UserStaticsIPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::UserStaticsX::UserStaticsIPtr* p = static_cast< ::UserStaticsX::UserStaticsIPtr*>(__addr);
    assert(p);
    *p = ::UserStaticsX::UserStaticsIPtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::UserStaticsX::UserStaticsI::ice_staticId();
        throw e;
    }
}

bool
UserStaticsX::operator==(const ::UserStaticsX::UserStaticsI& l, const ::UserStaticsX::UserStaticsI& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
UserStaticsX::operator!=(const ::UserStaticsX::UserStaticsI& l, const ::UserStaticsX::UserStaticsI& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
UserStaticsX::operator<(const ::UserStaticsX::UserStaticsI& l, const ::UserStaticsX::UserStaticsI& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
UserStaticsX::operator<=(const ::UserStaticsX::UserStaticsI& l, const ::UserStaticsX::UserStaticsI& r)
{
    return l < r || l == r;
}

bool
UserStaticsX::operator>(const ::UserStaticsX::UserStaticsI& l, const ::UserStaticsX::UserStaticsI& r)
{
    return !(l < r) && !(l == r);
}

bool
UserStaticsX::operator>=(const ::UserStaticsX::UserStaticsI& l, const ::UserStaticsX::UserStaticsI& r)
{
    return !(l < r);
}
