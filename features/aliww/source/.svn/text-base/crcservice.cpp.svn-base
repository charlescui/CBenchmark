// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `crcservice.ice'

#include <crcservice.h>
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

static const ::std::string __CRCSERVICE__CRCSInterface__GetChatRoamingServiceState_name = "GetChatRoamingServiceState";

static const ::std::string __CRCSERVICE__CRCSInterface__GetCRDays_name = "GetCRDays";

static const ::std::string __CRCSERVICE__CRCSInterface__CheckUserInfo_name = "CheckUserInfo";

static const ::std::string __CRCSERVICE__CRCSInterface__GetUserCRState_name = "GetUserCRState";

static const ::std::string __CRCSERVICE__CRCSInterface__SetUserCRState_name = "SetUserCRState";

void
IceInternal::incRef(::CRCSERVICE::CRCSInterface* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::CRCSERVICE::CRCSInterface* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::CRCSERVICE::CRCSInterface* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::CRCSERVICE::CRCSInterface* p)
{
    p->__decRef();
}

void
CRCSERVICE::__write(::IceInternal::BasicStream* __os, const ::CRCSERVICE::CRCSInterfacePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
CRCSERVICE::__read(::IceInternal::BasicStream* __is, ::CRCSERVICE::CRCSInterfacePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::CRCSERVICE::CRCSInterface;
        v->__copyFrom(proxy);
    }
}

void
CRCSERVICE::__write(::IceInternal::BasicStream* __os, const ::CRCSERVICE::CRCSInterfacePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

bool
CRCSERVICE::CRDateInfo::operator==(const CRDateInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
CRCSERVICE::CRDateInfo::operator!=(const CRDateInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(beginDay != __rhs.beginDay)
    {
        return true;
    }
    if(dayCount != __rhs.dayCount)
    {
        return true;
    }
    return false;
}

bool
CRCSERVICE::CRDateInfo::operator<(const CRDateInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(beginDay < __rhs.beginDay)
    {
        return true;
    }
    else if(__rhs.beginDay < beginDay)
    {
        return false;
    }
    if(dayCount < __rhs.dayCount)
    {
        return true;
    }
    else if(__rhs.dayCount < dayCount)
    {
        return false;
    }
    return false;
}

void
CRCSERVICE::CRDateInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(beginDay);
    __os->write(dayCount);
}

void
CRCSERVICE::CRDateInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(beginDay);
    __is->read(dayCount);
}

bool
CRCSERVICE::UserCRInfo::operator==(const UserCRInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
CRCSERVICE::UserCRInfo::operator!=(const UserCRInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(cmdID != __rhs.cmdID)
    {
        return true;
    }
    if(beginTime != __rhs.beginTime)
    {
        return true;
    }
    return false;
}

bool
CRCSERVICE::UserCRInfo::operator<(const UserCRInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(cmdID < __rhs.cmdID)
    {
        return true;
    }
    else if(__rhs.cmdID < cmdID)
    {
        return false;
    }
    if(beginTime < __rhs.beginTime)
    {
        return true;
    }
    else if(__rhs.beginTime < beginTime)
    {
        return false;
    }
    return false;
}

void
CRCSERVICE::UserCRInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(cmdID);
    __os->write(beginTime);
}

void
CRCSERVICE::UserCRInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(cmdID);
    __is->read(beginTime);
}

void
CRCSERVICE::__addObject(const CRCSInterfacePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
CRCSERVICE::__usesClasses(const CRCSInterfacePtr& p)
{
    return p->__usesClasses();
}

void
CRCSERVICE::__decRefUnsafe(const CRCSInterfacePtr& p)
{
    p->__decRefUnsafe();
}

void
CRCSERVICE::__clearHandleUnsafe(CRCSInterfacePtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::CRCSERVICE::CRCSInterface::GetChatRoamingServiceState(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__CRCSERVICE__CRCSInterface__GetChatRoamingServiceState_name);
            __delBase = __getDelegate();
            ::IceDelegate::CRCSERVICE::CRCSInterface* __del = dynamic_cast< ::IceDelegate::CRCSERVICE::CRCSInterface*>(__delBase.get());
            return __del->GetChatRoamingServiceState(__ctx);
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
IceProxy::CRCSERVICE::CRCSInterface::GetCRDays(const ::std::string& id, const ::std::string& version, ::CRCSERVICE::CRDateInfo& info, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__CRCSERVICE__CRCSInterface__GetCRDays_name);
            __delBase = __getDelegate();
            ::IceDelegate::CRCSERVICE::CRCSInterface* __del = dynamic_cast< ::IceDelegate::CRCSERVICE::CRCSInterface*>(__delBase.get());
            return __del->GetCRDays(id, version, info, __ctx);
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
IceProxy::CRCSERVICE::CRCSInterface::CheckUserInfo(const ::std::string& id, const ::std::string& version, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__CRCSERVICE__CRCSInterface__CheckUserInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::CRCSERVICE::CRCSInterface* __del = dynamic_cast< ::IceDelegate::CRCSERVICE::CRCSInterface*>(__delBase.get());
            return __del->CheckUserInfo(id, version, __ctx);
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
IceProxy::CRCSERVICE::CRCSInterface::GetUserCRState(const ::std::string& id, const ::std::string& version, ::CRCSERVICE::UserCRInfo& crinfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__CRCSERVICE__CRCSInterface__GetUserCRState_name);
            __delBase = __getDelegate();
            ::IceDelegate::CRCSERVICE::CRCSInterface* __del = dynamic_cast< ::IceDelegate::CRCSERVICE::CRCSInterface*>(__delBase.get());
            return __del->GetUserCRState(id, version, crinfo, __ctx);
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
IceProxy::CRCSERVICE::CRCSInterface::SetUserCRState(const ::std::string& id, const ::std::string& version, ::Ice::Int cmdId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__CRCSERVICE__CRCSInterface__SetUserCRState_name);
            __delBase = __getDelegate();
            ::IceDelegate::CRCSERVICE::CRCSInterface* __del = dynamic_cast< ::IceDelegate::CRCSERVICE::CRCSInterface*>(__delBase.get());
            return __del->SetUserCRState(id, version, cmdId, __ctx);
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
IceProxy::CRCSERVICE::CRCSInterface::ice_staticId()
{
    return ::CRCSERVICE::CRCSInterface::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::CRCSERVICE::CRCSInterface::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::CRCSERVICE::CRCSInterface);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::CRCSERVICE::CRCSInterface::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::CRCSERVICE::CRCSInterface);
}

bool
IceProxy::CRCSERVICE::operator==(const ::IceProxy::CRCSERVICE::CRCSInterface& l, const ::IceProxy::CRCSERVICE::CRCSInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::CRCSERVICE::operator!=(const ::IceProxy::CRCSERVICE::CRCSInterface& l, const ::IceProxy::CRCSERVICE::CRCSInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::CRCSERVICE::operator<(const ::IceProxy::CRCSERVICE::CRCSInterface& l, const ::IceProxy::CRCSERVICE::CRCSInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::CRCSERVICE::operator<=(const ::IceProxy::CRCSERVICE::CRCSInterface& l, const ::IceProxy::CRCSERVICE::CRCSInterface& r)
{
    return l < r || l == r;
}

bool
IceProxy::CRCSERVICE::operator>(const ::IceProxy::CRCSERVICE::CRCSInterface& l, const ::IceProxy::CRCSERVICE::CRCSInterface& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::CRCSERVICE::operator>=(const ::IceProxy::CRCSERVICE::CRCSInterface& l, const ::IceProxy::CRCSERVICE::CRCSInterface& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::CRCSERVICE::CRCSInterface::GetChatRoamingServiceState(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __CRCSERVICE__CRCSInterface__GetChatRoamingServiceState_name, ::Ice::Normal, __context, __compress);
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
IceDelegateM::CRCSERVICE::CRCSInterface::GetCRDays(const ::std::string& id, const ::std::string& version, ::CRCSERVICE::CRDateInfo& info, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __CRCSERVICE__CRCSInterface__GetCRDays_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(id);
        __os->write(version);
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
IceDelegateM::CRCSERVICE::CRCSInterface::CheckUserInfo(const ::std::string& id, const ::std::string& version, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __CRCSERVICE__CRCSInterface__CheckUserInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(id);
        __os->write(version);
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
IceDelegateM::CRCSERVICE::CRCSInterface::GetUserCRState(const ::std::string& id, const ::std::string& version, ::CRCSERVICE::UserCRInfo& crinfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __CRCSERVICE__CRCSInterface__GetUserCRState_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(id);
        __os->write(version);
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
        crinfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::CRCSERVICE::CRCSInterface::SetUserCRState(const ::std::string& id, const ::std::string& version, ::Ice::Int cmdId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __CRCSERVICE__CRCSInterface__SetUserCRState_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(id);
        __os->write(version);
        __os->write(cmdId);
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
IceDelegateD::CRCSERVICE::CRCSInterface::GetChatRoamingServiceState(const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __CRCSERVICE__CRCSInterface__GetChatRoamingServiceState_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::CRCSERVICE::CRCSInterface* __servant = dynamic_cast< ::CRCSERVICE::CRCSInterface*>(__direct.servant().get());
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
                __ret = __servant->GetChatRoamingServiceState(__current);
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
IceDelegateD::CRCSERVICE::CRCSInterface::GetCRDays(const ::std::string& id, const ::std::string& version, ::CRCSERVICE::CRDateInfo& info, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __CRCSERVICE__CRCSInterface__GetCRDays_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::CRCSERVICE::CRCSInterface* __servant = dynamic_cast< ::CRCSERVICE::CRCSInterface*>(__direct.servant().get());
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
                __ret = __servant->GetCRDays(id, version, info, __current);
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
IceDelegateD::CRCSERVICE::CRCSInterface::CheckUserInfo(const ::std::string& id, const ::std::string& version, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __CRCSERVICE__CRCSInterface__CheckUserInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::CRCSERVICE::CRCSInterface* __servant = dynamic_cast< ::CRCSERVICE::CRCSInterface*>(__direct.servant().get());
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
                __ret = __servant->CheckUserInfo(id, version, __current);
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
IceDelegateD::CRCSERVICE::CRCSInterface::GetUserCRState(const ::std::string& id, const ::std::string& version, ::CRCSERVICE::UserCRInfo& crinfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __CRCSERVICE__CRCSInterface__GetUserCRState_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::CRCSERVICE::CRCSInterface* __servant = dynamic_cast< ::CRCSERVICE::CRCSInterface*>(__direct.servant().get());
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
                __ret = __servant->GetUserCRState(id, version, crinfo, __current);
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
IceDelegateD::CRCSERVICE::CRCSInterface::SetUserCRState(const ::std::string& id, const ::std::string& version, ::Ice::Int cmdId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __CRCSERVICE__CRCSInterface__SetUserCRState_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::CRCSERVICE::CRCSInterface* __servant = dynamic_cast< ::CRCSERVICE::CRCSInterface*>(__direct.servant().get());
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
                __ret = __servant->SetUserCRState(id, version, cmdId, __current);
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
CRCSERVICE::CRCSInterface::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __CRCSERVICE__CRCSInterface_ids[2] =
{
    "::CRCSERVICE::CRCSInterface",
    "::Ice::Object"
};

bool
CRCSERVICE::CRCSInterface::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__CRCSERVICE__CRCSInterface_ids, __CRCSERVICE__CRCSInterface_ids + 2, _s);
}

::std::vector< ::std::string>
CRCSERVICE::CRCSInterface::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__CRCSERVICE__CRCSInterface_ids[0], &__CRCSERVICE__CRCSInterface_ids[2]);
}

const ::std::string&
CRCSERVICE::CRCSInterface::ice_id(const ::Ice::Current&) const
{
    return __CRCSERVICE__CRCSInterface_ids[0];
}

const ::std::string&
CRCSERVICE::CRCSInterface::ice_staticId()
{
    return __CRCSERVICE__CRCSInterface_ids[0];
}

::IceInternal::DispatchStatus
CRCSERVICE::CRCSInterface::___GetChatRoamingServiceState(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int __ret = GetChatRoamingServiceState(__current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
CRCSERVICE::CRCSInterface::___GetCRDays(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string id;
    ::std::string version;
    __is->read(id);
    __is->read(version);
    ::CRCSERVICE::CRDateInfo info;
    ::Ice::Int __ret = GetCRDays(id, version, info, __current);
    info.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
CRCSERVICE::CRCSInterface::___CheckUserInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string id;
    ::std::string version;
    __is->read(id);
    __is->read(version);
    ::Ice::Int __ret = CheckUserInfo(id, version, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
CRCSERVICE::CRCSInterface::___GetUserCRState(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string id;
    ::std::string version;
    __is->read(id);
    __is->read(version);
    ::CRCSERVICE::UserCRInfo crinfo;
    ::Ice::Int __ret = GetUserCRState(id, version, crinfo, __current);
    crinfo.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
CRCSERVICE::CRCSInterface::___SetUserCRState(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string id;
    ::std::string version;
    ::Ice::Int cmdId;
    __is->read(id);
    __is->read(version);
    __is->read(cmdId);
    ::Ice::Int __ret = SetUserCRState(id, version, cmdId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __CRCSERVICE__CRCSInterface_all[] =
{
    "CheckUserInfo",
    "GetCRDays",
    "GetChatRoamingServiceState",
    "GetUserCRState",
    "SetUserCRState",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::IceInternal::DispatchStatus
CRCSERVICE::CRCSInterface::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__CRCSERVICE__CRCSInterface_all, __CRCSERVICE__CRCSInterface_all + 9, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __CRCSERVICE__CRCSInterface_all)
    {
        case 0:
        {
            return ___CheckUserInfo(in, current);
        }
        case 1:
        {
            return ___GetCRDays(in, current);
        }
        case 2:
        {
            return ___GetChatRoamingServiceState(in, current);
        }
        case 3:
        {
            return ___GetUserCRState(in, current);
        }
        case 4:
        {
            return ___SetUserCRState(in, current);
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
CRCSERVICE::CRCSInterface::__write(::IceInternal::BasicStream* __os) const
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
CRCSERVICE::CRCSInterface::__read(::IceInternal::BasicStream* __is, bool __rid)
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
CRCSERVICE::CRCSInterface::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type CRCSERVICE::CRCSInterface was not generated with stream support";
    throw ex;
}

void
CRCSERVICE::CRCSInterface::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type CRCSERVICE::CRCSInterface was not generated with stream support";
    throw ex;
}

void 
CRCSERVICE::__patch__CRCSInterfacePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::CRCSERVICE::CRCSInterfacePtr* p = static_cast< ::CRCSERVICE::CRCSInterfacePtr*>(__addr);
    assert(p);
    *p = ::CRCSERVICE::CRCSInterfacePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::CRCSERVICE::CRCSInterface::ice_staticId();
        throw e;
    }
}

bool
CRCSERVICE::operator==(const ::CRCSERVICE::CRCSInterface& l, const ::CRCSERVICE::CRCSInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
CRCSERVICE::operator!=(const ::CRCSERVICE::CRCSInterface& l, const ::CRCSERVICE::CRCSInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
CRCSERVICE::operator<(const ::CRCSERVICE::CRCSInterface& l, const ::CRCSERVICE::CRCSInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
CRCSERVICE::operator<=(const ::CRCSERVICE::CRCSInterface& l, const ::CRCSERVICE::CRCSInterface& r)
{
    return l < r || l == r;
}

bool
CRCSERVICE::operator>(const ::CRCSERVICE::CRCSInterface& l, const ::CRCSERVICE::CRCSInterface& r)
{
    return !(l < r) && !(l == r);
}

bool
CRCSERVICE::operator>=(const ::CRCSERVICE::CRCSInterface& l, const ::CRCSERVICE::CRCSInterface& r)
{
    return !(l < r);
}
