// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `notifycontact.ice'

#include <notifycontact.h>
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

static const ::std::string __AliIM__NotifyContactInterface__NotifyDelContact_name = "NotifyDelContact";

static const ::std::string __AliIM__NotifyContactInterface__NotifyAddContact_name = "NotifyAddContact";

void
IceInternal::incRef(::AliIM::NotifyContactInterface* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::AliIM::NotifyContactInterface* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::AliIM::NotifyContactInterface* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::AliIM::NotifyContactInterface* p)
{
    p->__decRef();
}

void
AliIM::__write(::IceInternal::BasicStream* __os, const ::AliIM::NotifyContactInterfacePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
AliIM::__read(::IceInternal::BasicStream* __is, ::AliIM::NotifyContactInterfacePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::AliIM::NotifyContactInterface;
        v->__copyFrom(proxy);
    }
}

void
AliIM::__write(::IceInternal::BasicStream* __os, const ::AliIM::NotifyContactInterfacePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

void
AliIM::__addObject(const NotifyContactInterfacePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
AliIM::__usesClasses(const NotifyContactInterfacePtr& p)
{
    return p->__usesClasses();
}

void
AliIM::__decRefUnsafe(const NotifyContactInterfacePtr& p)
{
    p->__decRefUnsafe();
}

void
AliIM::__clearHandleUnsafe(NotifyContactInterfacePtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::AliIM::NotifyContactInterface::NotifyDelContact(const ::std::string& loginId, const ::std::string& contactId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__NotifyContactInterface__NotifyDelContact_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::NotifyContactInterface* __del = dynamic_cast< ::IceDelegate::AliIM::NotifyContactInterface*>(__delBase.get());
            return __del->NotifyDelContact(loginId, contactId, __ctx);
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
IceProxy::AliIM::NotifyContactInterface::NotifyAddContact(const ::std::string& loginId, const ::std::string& contactId, const ::std::string& groupName, ::Ice::Int groupId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__NotifyContactInterface__NotifyAddContact_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::NotifyContactInterface* __del = dynamic_cast< ::IceDelegate::AliIM::NotifyContactInterface*>(__delBase.get());
            return __del->NotifyAddContact(loginId, contactId, groupName, groupId, __ctx);
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
IceProxy::AliIM::NotifyContactInterface::ice_staticId()
{
    return ::AliIM::NotifyContactInterface::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::AliIM::NotifyContactInterface::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::AliIM::NotifyContactInterface);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::AliIM::NotifyContactInterface::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::AliIM::NotifyContactInterface);
}

bool
IceProxy::AliIM::operator==(const ::IceProxy::AliIM::NotifyContactInterface& l, const ::IceProxy::AliIM::NotifyContactInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator!=(const ::IceProxy::AliIM::NotifyContactInterface& l, const ::IceProxy::AliIM::NotifyContactInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator<(const ::IceProxy::AliIM::NotifyContactInterface& l, const ::IceProxy::AliIM::NotifyContactInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator<=(const ::IceProxy::AliIM::NotifyContactInterface& l, const ::IceProxy::AliIM::NotifyContactInterface& r)
{
    return l < r || l == r;
}

bool
IceProxy::AliIM::operator>(const ::IceProxy::AliIM::NotifyContactInterface& l, const ::IceProxy::AliIM::NotifyContactInterface& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::AliIM::operator>=(const ::IceProxy::AliIM::NotifyContactInterface& l, const ::IceProxy::AliIM::NotifyContactInterface& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::AliIM::NotifyContactInterface::NotifyDelContact(const ::std::string& loginId, const ::std::string& contactId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__NotifyContactInterface__NotifyDelContact_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(loginId);
        __os->write(contactId);
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
IceDelegateM::AliIM::NotifyContactInterface::NotifyAddContact(const ::std::string& loginId, const ::std::string& contactId, const ::std::string& groupName, ::Ice::Int groupId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__NotifyContactInterface__NotifyAddContact_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(loginId);
        __os->write(contactId);
        __os->write(groupName);
        __os->write(groupId);
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
IceDelegateD::AliIM::NotifyContactInterface::NotifyDelContact(const ::std::string& loginId, const ::std::string& contactId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__NotifyContactInterface__NotifyDelContact_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::NotifyContactInterface* __servant = dynamic_cast< ::AliIM::NotifyContactInterface*>(__direct.servant().get());
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
                __ret = __servant->NotifyDelContact(loginId, contactId, __current);
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
IceDelegateD::AliIM::NotifyContactInterface::NotifyAddContact(const ::std::string& loginId, const ::std::string& contactId, const ::std::string& groupName, ::Ice::Int groupId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__NotifyContactInterface__NotifyAddContact_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::NotifyContactInterface* __servant = dynamic_cast< ::AliIM::NotifyContactInterface*>(__direct.servant().get());
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
                __ret = __servant->NotifyAddContact(loginId, contactId, groupName, groupId, __current);
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
AliIM::NotifyContactInterface::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __AliIM__NotifyContactInterface_ids[2] =
{
    "::AliIM::NotifyContactInterface",
    "::Ice::Object"
};

bool
AliIM::NotifyContactInterface::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__AliIM__NotifyContactInterface_ids, __AliIM__NotifyContactInterface_ids + 2, _s);
}

::std::vector< ::std::string>
AliIM::NotifyContactInterface::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__AliIM__NotifyContactInterface_ids[0], &__AliIM__NotifyContactInterface_ids[2]);
}

const ::std::string&
AliIM::NotifyContactInterface::ice_id(const ::Ice::Current&) const
{
    return __AliIM__NotifyContactInterface_ids[0];
}

const ::std::string&
AliIM::NotifyContactInterface::ice_staticId()
{
    return __AliIM__NotifyContactInterface_ids[0];
}

::IceInternal::DispatchStatus
AliIM::NotifyContactInterface::___NotifyDelContact(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string loginId;
    ::std::string contactId;
    __is->read(loginId);
    __is->read(contactId);
    ::Ice::Int __ret = NotifyDelContact(loginId, contactId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::NotifyContactInterface::___NotifyAddContact(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string loginId;
    ::std::string contactId;
    ::std::string groupName;
    ::Ice::Int groupId;
    __is->read(loginId);
    __is->read(contactId);
    __is->read(groupName);
    __is->read(groupId);
    ::Ice::Int __ret = NotifyAddContact(loginId, contactId, groupName, groupId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __AliIM__NotifyContactInterface_all[] =
{
    "NotifyAddContact",
    "NotifyDelContact",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::IceInternal::DispatchStatus
AliIM::NotifyContactInterface::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__AliIM__NotifyContactInterface_all, __AliIM__NotifyContactInterface_all + 6, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __AliIM__NotifyContactInterface_all)
    {
        case 0:
        {
            return ___NotifyAddContact(in, current);
        }
        case 1:
        {
            return ___NotifyDelContact(in, current);
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
AliIM::NotifyContactInterface::__write(::IceInternal::BasicStream* __os) const
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
AliIM::NotifyContactInterface::__read(::IceInternal::BasicStream* __is, bool __rid)
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
AliIM::NotifyContactInterface::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIM::NotifyContactInterface was not generated with stream support";
    throw ex;
}

void
AliIM::NotifyContactInterface::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIM::NotifyContactInterface was not generated with stream support";
    throw ex;
}

void 
AliIM::__patch__NotifyContactInterfacePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::AliIM::NotifyContactInterfacePtr* p = static_cast< ::AliIM::NotifyContactInterfacePtr*>(__addr);
    assert(p);
    *p = ::AliIM::NotifyContactInterfacePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::AliIM::NotifyContactInterface::ice_staticId();
        throw e;
    }
}

bool
AliIM::operator==(const ::AliIM::NotifyContactInterface& l, const ::AliIM::NotifyContactInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator!=(const ::AliIM::NotifyContactInterface& l, const ::AliIM::NotifyContactInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator<(const ::AliIM::NotifyContactInterface& l, const ::AliIM::NotifyContactInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator<=(const ::AliIM::NotifyContactInterface& l, const ::AliIM::NotifyContactInterface& r)
{
    return l < r || l == r;
}

bool
AliIM::operator>(const ::AliIM::NotifyContactInterface& l, const ::AliIM::NotifyContactInterface& r)
{
    return !(l < r) && !(l == r);
}

bool
AliIM::operator>=(const ::AliIM::NotifyContactInterface& l, const ::AliIM::NotifyContactInterface& r)
{
    return !(l < r);
}
