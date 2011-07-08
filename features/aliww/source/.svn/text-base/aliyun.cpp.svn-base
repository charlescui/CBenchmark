// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `aliyun.ice'

#include <aliyun.h>
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

static const ::std::string __AliYun__accountInterface__registerMember_name = "registerMember";

static const ::std::string __AliYun__accountInterface__checkExist_name = "checkExist";

static const ::std::string __AliYun__accountInterface__chgLoginMail_name = "chgLoginMail";

static const ::std::string __AliYun__accountInterface__chgLoginMobile_name = "chgLoginMobile";

static const ::std::string __AliYun__accountInterface__removeUser_name = "removeUser";

static const ::std::string __AliYun__accountInterface__checkUser_name = "checkUser";

static const ::std::string __AliYun__accountInterface__getUserProfile_name = "getUserProfile";

static const ::std::string __AliYun__accountInterface__setUserProfile_name = "setUserProfile";

static const ::std::string __AliYun__accountInterface__setUserPasswd_name = "setUserPasswd";

static const ::std::string __AliYun__accountInterface__setUserStatus_name = "setUserStatus";

static const ::std::string __AliYun__accountInterface__GetLoginInfo_name = "GetLoginInfo";

void
IceInternal::incRef(::AliYun::accountInterface* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::AliYun::accountInterface* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::AliYun::accountInterface* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::AliYun::accountInterface* p)
{
    p->__decRef();
}

void
AliYun::__write(::IceInternal::BasicStream* __os, const ::AliYun::accountInterfacePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
AliYun::__read(::IceInternal::BasicStream* __is, ::AliYun::accountInterfacePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::AliYun::accountInterface;
        v->__copyFrom(proxy);
    }
}

void
AliYun::__write(::IceInternal::BasicStream* __os, const ::AliYun::accountInterfacePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

void
AliYun::__write(::IceInternal::BasicStream* __os, const ::AliYun::KVMap& v, ::AliYun::__U__KVMap)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::AliYun::KVMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
AliYun::__read(::IceInternal::BasicStream* __is, ::AliYun::KVMap& v, ::AliYun::__U__KVMap)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::std::string, ::std::string> pair;
        __is->read(const_cast< ::std::string&>(pair.first));
        ::AliYun::KVMap::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

bool
AliYun::callerInfo::operator==(const callerInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AliYun::callerInfo::operator!=(const callerInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(callId != __rhs.callId)
    {
        return true;
    }
    if(passwd != __rhs.passwd)
    {
        return true;
    }
    if(version != __rhs.version)
    {
        return true;
    }
    if(encode != __rhs.encode)
    {
        return true;
    }
    return false;
}

bool
AliYun::callerInfo::operator<(const callerInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(callId < __rhs.callId)
    {
        return true;
    }
    else if(__rhs.callId < callId)
    {
        return false;
    }
    if(passwd < __rhs.passwd)
    {
        return true;
    }
    else if(__rhs.passwd < passwd)
    {
        return false;
    }
    if(version < __rhs.version)
    {
        return true;
    }
    else if(__rhs.version < version)
    {
        return false;
    }
    if(encode < __rhs.encode)
    {
        return true;
    }
    else if(__rhs.encode < encode)
    {
        return false;
    }
    return false;
}

void
AliYun::callerInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(callId);
    __os->write(passwd);
    __os->write(version);
    __os->write(encode);
}

void
AliYun::callerInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(callId);
    __is->read(passwd);
    __is->read(version);
    __is->read(encode);
}

void
AliYun::__addObject(const accountInterfacePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
AliYun::__usesClasses(const accountInterfacePtr& p)
{
    return p->__usesClasses();
}

void
AliYun::__decRefUnsafe(const accountInterfacePtr& p)
{
    p->__decRefUnsafe();
}

void
AliYun::__clearHandleUnsafe(accountInterfacePtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::AliYun::accountInterface::registerMember(const ::AliYun::callerInfo& caller, const ::std::string& email, const ::std::string& mobileNo, const ::std::string& passwd, ::std::string& udbUserId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliYun__accountInterface__registerMember_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliYun::accountInterface* __del = dynamic_cast< ::IceDelegate::AliYun::accountInterface*>(__delBase.get());
            return __del->registerMember(caller, email, mobileNo, passwd, udbUserId, __ctx);
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
IceProxy::AliYun::accountInterface::checkExist(const ::AliYun::callerInfo& caller, const ::std::string& email, const ::std::string& mobileNo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliYun__accountInterface__checkExist_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliYun::accountInterface* __del = dynamic_cast< ::IceDelegate::AliYun::accountInterface*>(__delBase.get());
            return __del->checkExist(caller, email, mobileNo, __ctx);
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
IceProxy::AliYun::accountInterface::chgLoginMail(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::std::string& email, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliYun__accountInterface__chgLoginMail_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliYun::accountInterface* __del = dynamic_cast< ::IceDelegate::AliYun::accountInterface*>(__delBase.get());
            return __del->chgLoginMail(caller, loginId, email, __ctx);
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
IceProxy::AliYun::accountInterface::chgLoginMobile(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::std::string& mobileNo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliYun__accountInterface__chgLoginMobile_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliYun::accountInterface* __del = dynamic_cast< ::IceDelegate::AliYun::accountInterface*>(__delBase.get());
            return __del->chgLoginMobile(caller, loginId, mobileNo, __ctx);
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
IceProxy::AliYun::accountInterface::removeUser(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliYun__accountInterface__removeUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliYun::accountInterface* __del = dynamic_cast< ::IceDelegate::AliYun::accountInterface*>(__delBase.get());
            return __del->removeUser(caller, loginId, __ctx);
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
IceProxy::AliYun::accountInterface::checkUser(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::std::string& passwd, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliYun__accountInterface__checkUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliYun::accountInterface* __del = dynamic_cast< ::IceDelegate::AliYun::accountInterface*>(__delBase.get());
            return __del->checkUser(caller, loginId, passwd, __ctx);
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
IceProxy::AliYun::accountInterface::getUserProfile(const ::AliYun::callerInfo& caller, const ::std::string& loginId, ::AliYun::KVMap& userProfile, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliYun__accountInterface__getUserProfile_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliYun::accountInterface* __del = dynamic_cast< ::IceDelegate::AliYun::accountInterface*>(__delBase.get());
            return __del->getUserProfile(caller, loginId, userProfile, __ctx);
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
IceProxy::AliYun::accountInterface::setUserProfile(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::AliYun::KVMap& userProfile, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliYun__accountInterface__setUserProfile_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliYun::accountInterface* __del = dynamic_cast< ::IceDelegate::AliYun::accountInterface*>(__delBase.get());
            return __del->setUserProfile(caller, loginId, userProfile, __ctx);
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
IceProxy::AliYun::accountInterface::setUserPasswd(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::std::string& passwd, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliYun__accountInterface__setUserPasswd_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliYun::accountInterface* __del = dynamic_cast< ::IceDelegate::AliYun::accountInterface*>(__delBase.get());
            return __del->setUserPasswd(caller, loginId, passwd, __ctx);
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
IceProxy::AliYun::accountInterface::setUserStatus(const ::AliYun::callerInfo& caller, const ::std::string& loginId, ::Ice::Int status, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliYun__accountInterface__setUserStatus_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliYun::accountInterface* __del = dynamic_cast< ::IceDelegate::AliYun::accountInterface*>(__delBase.get());
            return __del->setUserStatus(caller, loginId, status, __ctx);
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
IceProxy::AliYun::accountInterface::GetLoginInfo(const ::AliYun::callerInfo& caller, const ::std::string& loginId, ::std::string& passwd, ::Ice::Int& status, ::std::string& userdata, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliYun__accountInterface__GetLoginInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliYun::accountInterface* __del = dynamic_cast< ::IceDelegate::AliYun::accountInterface*>(__delBase.get());
            return __del->GetLoginInfo(caller, loginId, passwd, status, userdata, __ctx);
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
IceProxy::AliYun::accountInterface::ice_staticId()
{
    return ::AliYun::accountInterface::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::AliYun::accountInterface::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::AliYun::accountInterface);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::AliYun::accountInterface::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::AliYun::accountInterface);
}

bool
IceProxy::AliYun::operator==(const ::IceProxy::AliYun::accountInterface& l, const ::IceProxy::AliYun::accountInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliYun::operator!=(const ::IceProxy::AliYun::accountInterface& l, const ::IceProxy::AliYun::accountInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliYun::operator<(const ::IceProxy::AliYun::accountInterface& l, const ::IceProxy::AliYun::accountInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliYun::operator<=(const ::IceProxy::AliYun::accountInterface& l, const ::IceProxy::AliYun::accountInterface& r)
{
    return l < r || l == r;
}

bool
IceProxy::AliYun::operator>(const ::IceProxy::AliYun::accountInterface& l, const ::IceProxy::AliYun::accountInterface& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::AliYun::operator>=(const ::IceProxy::AliYun::accountInterface& l, const ::IceProxy::AliYun::accountInterface& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::AliYun::accountInterface::registerMember(const ::AliYun::callerInfo& caller, const ::std::string& email, const ::std::string& mobileNo, const ::std::string& passwd, ::std::string& udbUserId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliYun__accountInterface__registerMember_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        caller.__write(__os);
        __os->write(email);
        __os->write(mobileNo);
        __os->write(passwd);
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
        __is->read(udbUserId);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliYun::accountInterface::checkExist(const ::AliYun::callerInfo& caller, const ::std::string& email, const ::std::string& mobileNo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliYun__accountInterface__checkExist_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        caller.__write(__os);
        __os->write(email);
        __os->write(mobileNo);
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
IceDelegateM::AliYun::accountInterface::chgLoginMail(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::std::string& email, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliYun__accountInterface__chgLoginMail_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        caller.__write(__os);
        __os->write(loginId);
        __os->write(email);
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
IceDelegateM::AliYun::accountInterface::chgLoginMobile(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::std::string& mobileNo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliYun__accountInterface__chgLoginMobile_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        caller.__write(__os);
        __os->write(loginId);
        __os->write(mobileNo);
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
IceDelegateM::AliYun::accountInterface::removeUser(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliYun__accountInterface__removeUser_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        caller.__write(__os);
        __os->write(loginId);
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
IceDelegateM::AliYun::accountInterface::checkUser(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::std::string& passwd, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliYun__accountInterface__checkUser_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        caller.__write(__os);
        __os->write(loginId);
        __os->write(passwd);
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
IceDelegateM::AliYun::accountInterface::getUserProfile(const ::AliYun::callerInfo& caller, const ::std::string& loginId, ::AliYun::KVMap& userProfile, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliYun__accountInterface__getUserProfile_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        caller.__write(__os);
        __os->write(loginId);
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
        ::AliYun::__read(__is, userProfile, ::AliYun::__U__KVMap());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliYun::accountInterface::setUserProfile(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::AliYun::KVMap& userProfile, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliYun__accountInterface__setUserProfile_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        caller.__write(__os);
        __os->write(loginId);
        ::AliYun::__write(__os, userProfile, ::AliYun::__U__KVMap());
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
IceDelegateM::AliYun::accountInterface::setUserPasswd(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::std::string& passwd, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliYun__accountInterface__setUserPasswd_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        caller.__write(__os);
        __os->write(loginId);
        __os->write(passwd);
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
IceDelegateM::AliYun::accountInterface::setUserStatus(const ::AliYun::callerInfo& caller, const ::std::string& loginId, ::Ice::Int status, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliYun__accountInterface__setUserStatus_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        caller.__write(__os);
        __os->write(loginId);
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
IceDelegateM::AliYun::accountInterface::GetLoginInfo(const ::AliYun::callerInfo& caller, const ::std::string& loginId, ::std::string& passwd, ::Ice::Int& status, ::std::string& userdata, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliYun__accountInterface__GetLoginInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        caller.__write(__os);
        __os->write(loginId);
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
        __is->read(passwd);
        __is->read(status);
        __is->read(userdata);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::AliYun::accountInterface::registerMember(const ::AliYun::callerInfo& caller, const ::std::string& email, const ::std::string& mobileNo, const ::std::string& passwd, ::std::string& udbUserId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliYun__accountInterface__registerMember_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliYun::accountInterface* __servant = dynamic_cast< ::AliYun::accountInterface*>(__direct.servant().get());
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
                __ret = __servant->registerMember(caller, email, mobileNo, passwd, udbUserId, __current);
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
IceDelegateD::AliYun::accountInterface::checkExist(const ::AliYun::callerInfo& caller, const ::std::string& email, const ::std::string& mobileNo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliYun__accountInterface__checkExist_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliYun::accountInterface* __servant = dynamic_cast< ::AliYun::accountInterface*>(__direct.servant().get());
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
                __ret = __servant->checkExist(caller, email, mobileNo, __current);
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
IceDelegateD::AliYun::accountInterface::chgLoginMail(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::std::string& email, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliYun__accountInterface__chgLoginMail_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliYun::accountInterface* __servant = dynamic_cast< ::AliYun::accountInterface*>(__direct.servant().get());
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
                __ret = __servant->chgLoginMail(caller, loginId, email, __current);
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
IceDelegateD::AliYun::accountInterface::chgLoginMobile(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::std::string& mobileNo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliYun__accountInterface__chgLoginMobile_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliYun::accountInterface* __servant = dynamic_cast< ::AliYun::accountInterface*>(__direct.servant().get());
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
                __ret = __servant->chgLoginMobile(caller, loginId, mobileNo, __current);
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
IceDelegateD::AliYun::accountInterface::removeUser(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliYun__accountInterface__removeUser_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliYun::accountInterface* __servant = dynamic_cast< ::AliYun::accountInterface*>(__direct.servant().get());
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
                __ret = __servant->removeUser(caller, loginId, __current);
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
IceDelegateD::AliYun::accountInterface::checkUser(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::std::string& passwd, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliYun__accountInterface__checkUser_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliYun::accountInterface* __servant = dynamic_cast< ::AliYun::accountInterface*>(__direct.servant().get());
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
                __ret = __servant->checkUser(caller, loginId, passwd, __current);
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
IceDelegateD::AliYun::accountInterface::getUserProfile(const ::AliYun::callerInfo& caller, const ::std::string& loginId, ::AliYun::KVMap& userProfile, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliYun__accountInterface__getUserProfile_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliYun::accountInterface* __servant = dynamic_cast< ::AliYun::accountInterface*>(__direct.servant().get());
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
                __ret = __servant->getUserProfile(caller, loginId, userProfile, __current);
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
IceDelegateD::AliYun::accountInterface::setUserProfile(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::AliYun::KVMap& userProfile, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliYun__accountInterface__setUserProfile_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliYun::accountInterface* __servant = dynamic_cast< ::AliYun::accountInterface*>(__direct.servant().get());
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
                __ret = __servant->setUserProfile(caller, loginId, userProfile, __current);
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
IceDelegateD::AliYun::accountInterface::setUserPasswd(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::std::string& passwd, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliYun__accountInterface__setUserPasswd_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliYun::accountInterface* __servant = dynamic_cast< ::AliYun::accountInterface*>(__direct.servant().get());
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
                __ret = __servant->setUserPasswd(caller, loginId, passwd, __current);
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
IceDelegateD::AliYun::accountInterface::setUserStatus(const ::AliYun::callerInfo& caller, const ::std::string& loginId, ::Ice::Int status, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliYun__accountInterface__setUserStatus_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliYun::accountInterface* __servant = dynamic_cast< ::AliYun::accountInterface*>(__direct.servant().get());
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
                __ret = __servant->setUserStatus(caller, loginId, status, __current);
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
IceDelegateD::AliYun::accountInterface::GetLoginInfo(const ::AliYun::callerInfo& caller, const ::std::string& loginId, ::std::string& passwd, ::Ice::Int& status, ::std::string& userdata, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliYun__accountInterface__GetLoginInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliYun::accountInterface* __servant = dynamic_cast< ::AliYun::accountInterface*>(__direct.servant().get());
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
                __ret = __servant->GetLoginInfo(caller, loginId, passwd, status, userdata, __current);
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
AliYun::accountInterface::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __AliYun__accountInterface_ids[2] =
{
    "::AliYun::accountInterface",
    "::Ice::Object"
};

bool
AliYun::accountInterface::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__AliYun__accountInterface_ids, __AliYun__accountInterface_ids + 2, _s);
}

::std::vector< ::std::string>
AliYun::accountInterface::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__AliYun__accountInterface_ids[0], &__AliYun__accountInterface_ids[2]);
}

const ::std::string&
AliYun::accountInterface::ice_id(const ::Ice::Current&) const
{
    return __AliYun__accountInterface_ids[0];
}

const ::std::string&
AliYun::accountInterface::ice_staticId()
{
    return __AliYun__accountInterface_ids[0];
}

::IceInternal::DispatchStatus
AliYun::accountInterface::___registerMember(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::AliYun::callerInfo caller;
    ::std::string email;
    ::std::string mobileNo;
    ::std::string passwd;
    caller.__read(__is);
    __is->read(email);
    __is->read(mobileNo);
    __is->read(passwd);
    ::std::string udbUserId;
    ::Ice::Int __ret = registerMember(caller, email, mobileNo, passwd, udbUserId, __current);
    __os->write(udbUserId);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliYun::accountInterface::___checkExist(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::AliYun::callerInfo caller;
    ::std::string email;
    ::std::string mobileNo;
    caller.__read(__is);
    __is->read(email);
    __is->read(mobileNo);
    ::Ice::Int __ret = checkExist(caller, email, mobileNo, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliYun::accountInterface::___chgLoginMail(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::AliYun::callerInfo caller;
    ::std::string loginId;
    ::std::string email;
    caller.__read(__is);
    __is->read(loginId);
    __is->read(email);
    ::Ice::Int __ret = chgLoginMail(caller, loginId, email, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliYun::accountInterface::___chgLoginMobile(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::AliYun::callerInfo caller;
    ::std::string loginId;
    ::std::string mobileNo;
    caller.__read(__is);
    __is->read(loginId);
    __is->read(mobileNo);
    ::Ice::Int __ret = chgLoginMobile(caller, loginId, mobileNo, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliYun::accountInterface::___removeUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::AliYun::callerInfo caller;
    ::std::string loginId;
    caller.__read(__is);
    __is->read(loginId);
    ::Ice::Int __ret = removeUser(caller, loginId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliYun::accountInterface::___checkUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::AliYun::callerInfo caller;
    ::std::string loginId;
    ::std::string passwd;
    caller.__read(__is);
    __is->read(loginId);
    __is->read(passwd);
    ::Ice::Int __ret = checkUser(caller, loginId, passwd, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliYun::accountInterface::___getUserProfile(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::AliYun::callerInfo caller;
    ::std::string loginId;
    caller.__read(__is);
    __is->read(loginId);
    ::AliYun::KVMap userProfile;
    ::Ice::Int __ret = getUserProfile(caller, loginId, userProfile, __current);
    ::AliYun::__write(__os, userProfile, ::AliYun::__U__KVMap());
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliYun::accountInterface::___setUserProfile(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::AliYun::callerInfo caller;
    ::std::string loginId;
    ::AliYun::KVMap userProfile;
    caller.__read(__is);
    __is->read(loginId);
    ::AliYun::__read(__is, userProfile, ::AliYun::__U__KVMap());
    ::Ice::Int __ret = setUserProfile(caller, loginId, userProfile, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliYun::accountInterface::___setUserPasswd(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::AliYun::callerInfo caller;
    ::std::string loginId;
    ::std::string passwd;
    caller.__read(__is);
    __is->read(loginId);
    __is->read(passwd);
    ::Ice::Int __ret = setUserPasswd(caller, loginId, passwd, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliYun::accountInterface::___setUserStatus(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::AliYun::callerInfo caller;
    ::std::string loginId;
    ::Ice::Int status;
    caller.__read(__is);
    __is->read(loginId);
    __is->read(status);
    ::Ice::Int __ret = setUserStatus(caller, loginId, status, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliYun::accountInterface::___GetLoginInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::AliYun::callerInfo caller;
    ::std::string loginId;
    caller.__read(__is);
    __is->read(loginId);
    ::std::string passwd;
    ::Ice::Int status;
    ::std::string userdata;
    ::Ice::Int __ret = GetLoginInfo(caller, loginId, passwd, status, userdata, __current);
    __os->write(passwd);
    __os->write(status);
    __os->write(userdata);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __AliYun__accountInterface_all[] =
{
    "GetLoginInfo",
    "checkExist",
    "checkUser",
    "chgLoginMail",
    "chgLoginMobile",
    "getUserProfile",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "registerMember",
    "removeUser",
    "setUserPasswd",
    "setUserProfile",
    "setUserStatus"
};

::IceInternal::DispatchStatus
AliYun::accountInterface::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__AliYun__accountInterface_all, __AliYun__accountInterface_all + 15, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __AliYun__accountInterface_all)
    {
        case 0:
        {
            return ___GetLoginInfo(in, current);
        }
        case 1:
        {
            return ___checkExist(in, current);
        }
        case 2:
        {
            return ___checkUser(in, current);
        }
        case 3:
        {
            return ___chgLoginMail(in, current);
        }
        case 4:
        {
            return ___chgLoginMobile(in, current);
        }
        case 5:
        {
            return ___getUserProfile(in, current);
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
            return ___registerMember(in, current);
        }
        case 11:
        {
            return ___removeUser(in, current);
        }
        case 12:
        {
            return ___setUserPasswd(in, current);
        }
        case 13:
        {
            return ___setUserProfile(in, current);
        }
        case 14:
        {
            return ___setUserStatus(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
AliYun::accountInterface::__write(::IceInternal::BasicStream* __os) const
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
AliYun::accountInterface::__read(::IceInternal::BasicStream* __is, bool __rid)
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
AliYun::accountInterface::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliYun::accountInterface was not generated with stream support";
    throw ex;
}

void
AliYun::accountInterface::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliYun::accountInterface was not generated with stream support";
    throw ex;
}

void 
AliYun::__patch__accountInterfacePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::AliYun::accountInterfacePtr* p = static_cast< ::AliYun::accountInterfacePtr*>(__addr);
    assert(p);
    *p = ::AliYun::accountInterfacePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::AliYun::accountInterface::ice_staticId();
        throw e;
    }
}

bool
AliYun::operator==(const ::AliYun::accountInterface& l, const ::AliYun::accountInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
AliYun::operator!=(const ::AliYun::accountInterface& l, const ::AliYun::accountInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
AliYun::operator<(const ::AliYun::accountInterface& l, const ::AliYun::accountInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
AliYun::operator<=(const ::AliYun::accountInterface& l, const ::AliYun::accountInterface& r)
{
    return l < r || l == r;
}

bool
AliYun::operator>(const ::AliYun::accountInterface& l, const ::AliYun::accountInterface& r)
{
    return !(l < r) && !(l == r);
}

bool
AliYun::operator>=(const ::AliYun::accountInterface& l, const ::AliYun::accountInterface& r)
{
    return !(l < r);
}
