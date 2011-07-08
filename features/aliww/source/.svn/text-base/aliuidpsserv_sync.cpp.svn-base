// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `aliuidpsserv_sync.ice'

#include <aliuidpsserv_sync.h>
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

static const ::std::string __AliUID__IAliUidPsMgrSync__RegisterPassport_name = "RegisterPassport";

static const ::std::string __AliUID__IAliUidPsMgrSync__AuthPassword_name = "AuthPassword";

static const ::std::string __AliUID__IAliUidPsMgrSync__AuthToken_name = "AuthToken";

static const ::std::string __AliUID__IAliUidPsMgrSync__GetAuidToken_name = "GetAuidToken";

static const ::std::string __AliUID__IAliUidPsMgrSync__GetAccountInfo_name = "GetAccountInfo";

static const ::std::string __AliUID__IAliUidPsMgrSync__ChangePassportLogin_name = "ChangePassportLogin";

static const ::std::string __AliUID__IAliUidPsMgrSync__GetProfileByPassport_name = "GetProfileByPassport";

static const ::std::string __AliUID__IAliUidPsMgrSync__UpdateProfileByPassport_name = "UpdateProfileByPassport";

static const ::std::string __AliUID__IAliUidPsMgrSync__SetPassportPassword_name = "SetPassportPassword";

static const ::std::string __AliUID__IAliUidPsMgrSync__SetPassportStatus_name = "SetPassportStatus";

static const ::std::string __AliUID__IAliUidPsMgrSync__GetPassportStatus_name = "GetPassportStatus";

static const ::std::string __AliUID__IAliUidPsMgrSync__GetAllService_name = "GetAllService";

static const ::std::string __AliUID__IAliUidPsMgrSync__GetWebUserService_name = "GetWebUserService";

static const ::std::string __AliUID__IAliUidPsMgrSync__AddWebsite_name = "AddWebsite";

static const ::std::string __AliUID__IAliUidPsMgrSync__DelWebsite_name = "DelWebsite";

static const ::std::string __AliUID__IAliUidPsMgrSync__ChgWebsite_name = "ChgWebsite";

static const ::std::string __AliUID__IAliUidPsMgrSync__ChgWebsiteStatus_name = "ChgWebsiteStatus";

void
IceInternal::incRef(::AliUID::IAliUidPsMgrSync* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::AliUID::IAliUidPsMgrSync* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::AliUID::IAliUidPsMgrSync* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::AliUID::IAliUidPsMgrSync* p)
{
    p->__decRef();
}

void
AliUID::__write(::IceInternal::BasicStream* __os, const ::AliUID::IAliUidPsMgrSyncPrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
AliUID::__read(::IceInternal::BasicStream* __is, ::AliUID::IAliUidPsMgrSyncPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::AliUID::IAliUidPsMgrSync;
        v->__copyFrom(proxy);
    }
}

void
AliUID::__write(::IceInternal::BasicStream* __os, const ::AliUID::IAliUidPsMgrSyncPtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

void
AliUID::__addObject(const IAliUidPsMgrSyncPtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
AliUID::__usesClasses(const IAliUidPsMgrSyncPtr& p)
{
    return p->__usesClasses();
}

void
AliUID::__decRefUnsafe(const IAliUidPsMgrSyncPtr& p)
{
    p->__decRefUnsafe();
}

void
AliUID::__clearHandleUnsafe(IAliUidPsMgrSyncPtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::AliUID::IAliUidPsMgrSync::RegisterPassport(const ::std::string& loginId, const ::std::string& passwd, ::Ice::Short status, ::std::string& aliuid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgrSync__RegisterPassport_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgrSync* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgrSync*>(__delBase.get());
            return __del->RegisterPassport(loginId, passwd, status, aliuid, __ctx);
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
IceProxy::AliUID::IAliUidPsMgrSync::AuthPassword(const ::std::string& loginId, const ::std::string& passwd, ::Ice::Short& userstatus, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgrSync__AuthPassword_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgrSync* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgrSync*>(__delBase.get());
            return __del->AuthPassword(loginId, passwd, userstatus, __ctx);
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
IceProxy::AliUID::IAliUidPsMgrSync::AuthToken(const ::std::string& loginId, const ::std::string& currToken, ::Ice::Long t, ::std::string& aliuid, ::Ice::Short& userstatus, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgrSync__AuthToken_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgrSync* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgrSync*>(__delBase.get());
            return __del->AuthToken(loginId, currToken, t, aliuid, userstatus, __ctx);
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
IceProxy::AliUID::IAliUidPsMgrSync::GetAuidToken(const ::std::string& loginId, ::std::string& aliuid, ::std::string& auidToken, ::Ice::Short& userstatus, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgrSync__GetAuidToken_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgrSync* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgrSync*>(__delBase.get());
            return __del->GetAuidToken(loginId, aliuid, auidToken, userstatus, __ctx);
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
IceProxy::AliUID::IAliUidPsMgrSync::GetAccountInfo(const ::std::string& loginId, ::AliUID::SPassportAccount& account, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgrSync__GetAccountInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgrSync* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgrSync*>(__delBase.get());
            return __del->GetAccountInfo(loginId, account, __ctx);
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
IceProxy::AliUID::IAliUidPsMgrSync::ChangePassportLogin(const ::std::string& loginId, const ::AliUID::SPassportAccount& account, ::Ice::Int action, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgrSync__ChangePassportLogin_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgrSync* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgrSync*>(__delBase.get());
            return __del->ChangePassportLogin(loginId, account, action, __ctx);
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
IceProxy::AliUID::IAliUidPsMgrSync::GetProfileByPassport(const ::std::string& loginId, ::std::string& profile, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgrSync__GetProfileByPassport_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgrSync* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgrSync*>(__delBase.get());
            return __del->GetProfileByPassport(loginId, profile, __ctx);
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
IceProxy::AliUID::IAliUidPsMgrSync::UpdateProfileByPassport(const ::std::string& loginId, const ::std::string& profile, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgrSync__UpdateProfileByPassport_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgrSync* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgrSync*>(__delBase.get());
            return __del->UpdateProfileByPassport(loginId, profile, __ctx);
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
IceProxy::AliUID::IAliUidPsMgrSync::SetPassportPassword(const ::std::string& loginId, const ::std::string& newPassword, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgrSync__SetPassportPassword_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgrSync* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgrSync*>(__delBase.get());
            return __del->SetPassportPassword(loginId, newPassword, __ctx);
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
IceProxy::AliUID::IAliUidPsMgrSync::SetPassportStatus(const ::std::string& loginId, ::Ice::Short userStatus, const ::std::string& userData, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgrSync__SetPassportStatus_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgrSync* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgrSync*>(__delBase.get());
            return __del->SetPassportStatus(loginId, userStatus, userData, __ctx);
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
IceProxy::AliUID::IAliUidPsMgrSync::GetPassportStatus(const ::std::string& loginId, ::Ice::Short& userStatus, ::std::string& userData, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgrSync__GetPassportStatus_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgrSync* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgrSync*>(__delBase.get());
            return __del->GetPassportStatus(loginId, userStatus, userData, __ctx);
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
IceProxy::AliUID::IAliUidPsMgrSync::GetAllService(::std::string& services, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgrSync__GetAllService_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgrSync* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgrSync*>(__delBase.get());
            return __del->GetAllService(services, __ctx);
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
IceProxy::AliUID::IAliUidPsMgrSync::GetWebUserService(const ::std::string& serviceId, const ::std::string& loginId, ::std::string& aliuid, ::std::string& token, ::AliUID::SWebBindSeq& webBinds, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgrSync__GetWebUserService_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgrSync* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgrSync*>(__delBase.get());
            return __del->GetWebUserService(serviceId, loginId, aliuid, token, webBinds, __ctx);
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
IceProxy::AliUID::IAliUidPsMgrSync::AddWebsite(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& name, const ::std::string& baseUrl, const ::std::string& trustUrl, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgrSync__AddWebsite_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgrSync* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgrSync*>(__delBase.get());
            return __del->AddWebsite(serviceId, webId, name, baseUrl, trustUrl, __ctx);
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
IceProxy::AliUID::IAliUidPsMgrSync::DelWebsite(const ::std::string& serviceId, const ::std::string& webId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgrSync__DelWebsite_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgrSync* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgrSync*>(__delBase.get());
            return __del->DelWebsite(serviceId, webId, __ctx);
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
IceProxy::AliUID::IAliUidPsMgrSync::ChgWebsite(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& name, const ::std::string& baseUrl, const ::std::string& trustUrl, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgrSync__ChgWebsite_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgrSync* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgrSync*>(__delBase.get());
            return __del->ChgWebsite(serviceId, webId, name, baseUrl, trustUrl, __ctx);
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
IceProxy::AliUID::IAliUidPsMgrSync::ChgWebsiteStatus(const ::std::string& serviceId, const ::std::string& webId, ::Ice::Int status, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgrSync__ChgWebsiteStatus_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgrSync* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgrSync*>(__delBase.get());
            return __del->ChgWebsiteStatus(serviceId, webId, status, __ctx);
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
IceProxy::AliUID::IAliUidPsMgrSync::ice_staticId()
{
    return ::AliUID::IAliUidPsMgrSync::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::AliUID::IAliUidPsMgrSync::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::AliUID::IAliUidPsMgrSync);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::AliUID::IAliUidPsMgrSync::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::AliUID::IAliUidPsMgrSync);
}

bool
IceProxy::AliUID::operator==(const ::IceProxy::AliUID::IAliUidPsMgrSync& l, const ::IceProxy::AliUID::IAliUidPsMgrSync& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliUID::operator!=(const ::IceProxy::AliUID::IAliUidPsMgrSync& l, const ::IceProxy::AliUID::IAliUidPsMgrSync& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliUID::operator<(const ::IceProxy::AliUID::IAliUidPsMgrSync& l, const ::IceProxy::AliUID::IAliUidPsMgrSync& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliUID::operator<=(const ::IceProxy::AliUID::IAliUidPsMgrSync& l, const ::IceProxy::AliUID::IAliUidPsMgrSync& r)
{
    return l < r || l == r;
}

bool
IceProxy::AliUID::operator>(const ::IceProxy::AliUID::IAliUidPsMgrSync& l, const ::IceProxy::AliUID::IAliUidPsMgrSync& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::AliUID::operator>=(const ::IceProxy::AliUID::IAliUidPsMgrSync& l, const ::IceProxy::AliUID::IAliUidPsMgrSync& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::AliUID::IAliUidPsMgrSync::RegisterPassport(const ::std::string& loginId, const ::std::string& passwd, ::Ice::Short status, ::std::string& aliuid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgrSync__RegisterPassport_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(loginId);
        __os->write(passwd);
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
        __is->read(aliuid);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliUID::IAliUidPsMgrSync::AuthPassword(const ::std::string& loginId, const ::std::string& passwd, ::Ice::Short& userstatus, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgrSync__AuthPassword_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
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
        __is->read(userstatus);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliUID::IAliUidPsMgrSync::AuthToken(const ::std::string& loginId, const ::std::string& currToken, ::Ice::Long t, ::std::string& aliuid, ::Ice::Short& userstatus, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgrSync__AuthToken_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(loginId);
        __os->write(currToken);
        __os->write(t);
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
        __is->read(aliuid);
        __is->read(userstatus);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliUID::IAliUidPsMgrSync::GetAuidToken(const ::std::string& loginId, ::std::string& aliuid, ::std::string& auidToken, ::Ice::Short& userstatus, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgrSync__GetAuidToken_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
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
        __is->read(aliuid);
        __is->read(auidToken);
        __is->read(userstatus);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliUID::IAliUidPsMgrSync::GetAccountInfo(const ::std::string& loginId, ::AliUID::SPassportAccount& account, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgrSync__GetAccountInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
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
        account.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliUID::IAliUidPsMgrSync::ChangePassportLogin(const ::std::string& loginId, const ::AliUID::SPassportAccount& account, ::Ice::Int action, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgrSync__ChangePassportLogin_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(loginId);
        account.__write(__os);
        __os->write(action);
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
IceDelegateM::AliUID::IAliUidPsMgrSync::GetProfileByPassport(const ::std::string& loginId, ::std::string& profile, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgrSync__GetProfileByPassport_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
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
        __is->read(profile);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliUID::IAliUidPsMgrSync::UpdateProfileByPassport(const ::std::string& loginId, const ::std::string& profile, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgrSync__UpdateProfileByPassport_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(loginId);
        __os->write(profile);
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
IceDelegateM::AliUID::IAliUidPsMgrSync::SetPassportPassword(const ::std::string& loginId, const ::std::string& newPassword, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgrSync__SetPassportPassword_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(loginId);
        __os->write(newPassword);
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
IceDelegateM::AliUID::IAliUidPsMgrSync::SetPassportStatus(const ::std::string& loginId, ::Ice::Short userStatus, const ::std::string& userData, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgrSync__SetPassportStatus_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(loginId);
        __os->write(userStatus);
        __os->write(userData);
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
IceDelegateM::AliUID::IAliUidPsMgrSync::GetPassportStatus(const ::std::string& loginId, ::Ice::Short& userStatus, ::std::string& userData, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgrSync__GetPassportStatus_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
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
        __is->read(userStatus);
        __is->read(userData);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliUID::IAliUidPsMgrSync::GetAllService(::std::string& services, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgrSync__GetAllService_name, ::Ice::Normal, __context, __compress);
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
        __is->read(services);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliUID::IAliUidPsMgrSync::GetWebUserService(const ::std::string& serviceId, const ::std::string& loginId, ::std::string& aliuid, ::std::string& token, ::AliUID::SWebBindSeq& webBinds, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgrSync__GetWebUserService_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(serviceId);
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
        __is->read(aliuid);
        __is->read(token);
        ::AliUID::__read(__is, webBinds, ::AliUID::__U__SWebBindSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliUID::IAliUidPsMgrSync::AddWebsite(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& name, const ::std::string& baseUrl, const ::std::string& trustUrl, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgrSync__AddWebsite_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(serviceId);
        __os->write(webId);
        __os->write(name);
        __os->write(baseUrl);
        __os->write(trustUrl);
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
IceDelegateM::AliUID::IAliUidPsMgrSync::DelWebsite(const ::std::string& serviceId, const ::std::string& webId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgrSync__DelWebsite_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(serviceId);
        __os->write(webId);
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
IceDelegateM::AliUID::IAliUidPsMgrSync::ChgWebsite(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& name, const ::std::string& baseUrl, const ::std::string& trustUrl, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgrSync__ChgWebsite_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(serviceId);
        __os->write(webId);
        __os->write(name);
        __os->write(baseUrl);
        __os->write(trustUrl);
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
IceDelegateM::AliUID::IAliUidPsMgrSync::ChgWebsiteStatus(const ::std::string& serviceId, const ::std::string& webId, ::Ice::Int status, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgrSync__ChgWebsiteStatus_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(serviceId);
        __os->write(webId);
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
IceDelegateD::AliUID::IAliUidPsMgrSync::RegisterPassport(const ::std::string& loginId, const ::std::string& passwd, ::Ice::Short status, ::std::string& aliuid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliUID__IAliUidPsMgrSync__RegisterPassport_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliUID::IAliUidPsMgrSync* __servant = dynamic_cast< ::AliUID::IAliUidPsMgrSync*>(__direct.servant().get());
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
                __ret = __servant->RegisterPassport(loginId, passwd, status, aliuid, __current);
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
IceDelegateD::AliUID::IAliUidPsMgrSync::AuthPassword(const ::std::string& loginId, const ::std::string& passwd, ::Ice::Short& userstatus, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliUID__IAliUidPsMgrSync__AuthPassword_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliUID::IAliUidPsMgrSync* __servant = dynamic_cast< ::AliUID::IAliUidPsMgrSync*>(__direct.servant().get());
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
                __ret = __servant->AuthPassword(loginId, passwd, userstatus, __current);
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
IceDelegateD::AliUID::IAliUidPsMgrSync::AuthToken(const ::std::string& loginId, const ::std::string& currToken, ::Ice::Long t, ::std::string& aliuid, ::Ice::Short& userstatus, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliUID__IAliUidPsMgrSync__AuthToken_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliUID::IAliUidPsMgrSync* __servant = dynamic_cast< ::AliUID::IAliUidPsMgrSync*>(__direct.servant().get());
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
                __ret = __servant->AuthToken(loginId, currToken, t, aliuid, userstatus, __current);
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
IceDelegateD::AliUID::IAliUidPsMgrSync::GetAuidToken(const ::std::string& loginId, ::std::string& aliuid, ::std::string& auidToken, ::Ice::Short& userstatus, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliUID__IAliUidPsMgrSync__GetAuidToken_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliUID::IAliUidPsMgrSync* __servant = dynamic_cast< ::AliUID::IAliUidPsMgrSync*>(__direct.servant().get());
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
                __ret = __servant->GetAuidToken(loginId, aliuid, auidToken, userstatus, __current);
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
IceDelegateD::AliUID::IAliUidPsMgrSync::GetAccountInfo(const ::std::string& loginId, ::AliUID::SPassportAccount& account, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliUID__IAliUidPsMgrSync__GetAccountInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliUID::IAliUidPsMgrSync* __servant = dynamic_cast< ::AliUID::IAliUidPsMgrSync*>(__direct.servant().get());
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
                __ret = __servant->GetAccountInfo(loginId, account, __current);
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
IceDelegateD::AliUID::IAliUidPsMgrSync::ChangePassportLogin(const ::std::string& loginId, const ::AliUID::SPassportAccount& account, ::Ice::Int action, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliUID__IAliUidPsMgrSync__ChangePassportLogin_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliUID::IAliUidPsMgrSync* __servant = dynamic_cast< ::AliUID::IAliUidPsMgrSync*>(__direct.servant().get());
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
                __ret = __servant->ChangePassportLogin(loginId, account, action, __current);
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
IceDelegateD::AliUID::IAliUidPsMgrSync::GetProfileByPassport(const ::std::string& loginId, ::std::string& profile, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliUID__IAliUidPsMgrSync__GetProfileByPassport_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliUID::IAliUidPsMgrSync* __servant = dynamic_cast< ::AliUID::IAliUidPsMgrSync*>(__direct.servant().get());
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
                __ret = __servant->GetProfileByPassport(loginId, profile, __current);
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
IceDelegateD::AliUID::IAliUidPsMgrSync::UpdateProfileByPassport(const ::std::string& loginId, const ::std::string& profile, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliUID__IAliUidPsMgrSync__UpdateProfileByPassport_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliUID::IAliUidPsMgrSync* __servant = dynamic_cast< ::AliUID::IAliUidPsMgrSync*>(__direct.servant().get());
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
                __ret = __servant->UpdateProfileByPassport(loginId, profile, __current);
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
IceDelegateD::AliUID::IAliUidPsMgrSync::SetPassportPassword(const ::std::string& loginId, const ::std::string& newPassword, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliUID__IAliUidPsMgrSync__SetPassportPassword_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliUID::IAliUidPsMgrSync* __servant = dynamic_cast< ::AliUID::IAliUidPsMgrSync*>(__direct.servant().get());
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
                __ret = __servant->SetPassportPassword(loginId, newPassword, __current);
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
IceDelegateD::AliUID::IAliUidPsMgrSync::SetPassportStatus(const ::std::string& loginId, ::Ice::Short userStatus, const ::std::string& userData, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliUID__IAliUidPsMgrSync__SetPassportStatus_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliUID::IAliUidPsMgrSync* __servant = dynamic_cast< ::AliUID::IAliUidPsMgrSync*>(__direct.servant().get());
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
                __ret = __servant->SetPassportStatus(loginId, userStatus, userData, __current);
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
IceDelegateD::AliUID::IAliUidPsMgrSync::GetPassportStatus(const ::std::string& loginId, ::Ice::Short& userStatus, ::std::string& userData, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliUID__IAliUidPsMgrSync__GetPassportStatus_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliUID::IAliUidPsMgrSync* __servant = dynamic_cast< ::AliUID::IAliUidPsMgrSync*>(__direct.servant().get());
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
                __ret = __servant->GetPassportStatus(loginId, userStatus, userData, __current);
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
IceDelegateD::AliUID::IAliUidPsMgrSync::GetAllService(::std::string& services, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliUID__IAliUidPsMgrSync__GetAllService_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliUID::IAliUidPsMgrSync* __servant = dynamic_cast< ::AliUID::IAliUidPsMgrSync*>(__direct.servant().get());
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
                __ret = __servant->GetAllService(services, __current);
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
IceDelegateD::AliUID::IAliUidPsMgrSync::GetWebUserService(const ::std::string& serviceId, const ::std::string& loginId, ::std::string& aliuid, ::std::string& token, ::AliUID::SWebBindSeq& webBinds, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliUID__IAliUidPsMgrSync__GetWebUserService_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliUID::IAliUidPsMgrSync* __servant = dynamic_cast< ::AliUID::IAliUidPsMgrSync*>(__direct.servant().get());
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
                __ret = __servant->GetWebUserService(serviceId, loginId, aliuid, token, webBinds, __current);
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
IceDelegateD::AliUID::IAliUidPsMgrSync::AddWebsite(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& name, const ::std::string& baseUrl, const ::std::string& trustUrl, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliUID__IAliUidPsMgrSync__AddWebsite_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliUID::IAliUidPsMgrSync* __servant = dynamic_cast< ::AliUID::IAliUidPsMgrSync*>(__direct.servant().get());
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
                __ret = __servant->AddWebsite(serviceId, webId, name, baseUrl, trustUrl, __current);
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
IceDelegateD::AliUID::IAliUidPsMgrSync::DelWebsite(const ::std::string& serviceId, const ::std::string& webId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliUID__IAliUidPsMgrSync__DelWebsite_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliUID::IAliUidPsMgrSync* __servant = dynamic_cast< ::AliUID::IAliUidPsMgrSync*>(__direct.servant().get());
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
                __ret = __servant->DelWebsite(serviceId, webId, __current);
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
IceDelegateD::AliUID::IAliUidPsMgrSync::ChgWebsite(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& name, const ::std::string& baseUrl, const ::std::string& trustUrl, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliUID__IAliUidPsMgrSync__ChgWebsite_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliUID::IAliUidPsMgrSync* __servant = dynamic_cast< ::AliUID::IAliUidPsMgrSync*>(__direct.servant().get());
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
                __ret = __servant->ChgWebsite(serviceId, webId, name, baseUrl, trustUrl, __current);
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
IceDelegateD::AliUID::IAliUidPsMgrSync::ChgWebsiteStatus(const ::std::string& serviceId, const ::std::string& webId, ::Ice::Int status, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliUID__IAliUidPsMgrSync__ChgWebsiteStatus_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliUID::IAliUidPsMgrSync* __servant = dynamic_cast< ::AliUID::IAliUidPsMgrSync*>(__direct.servant().get());
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
                __ret = __servant->ChgWebsiteStatus(serviceId, webId, status, __current);
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
AliUID::IAliUidPsMgrSync::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __AliUID__IAliUidPsMgrSync_ids[2] =
{
    "::AliUID::IAliUidPsMgrSync",
    "::Ice::Object"
};

bool
AliUID::IAliUidPsMgrSync::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__AliUID__IAliUidPsMgrSync_ids, __AliUID__IAliUidPsMgrSync_ids + 2, _s);
}

::std::vector< ::std::string>
AliUID::IAliUidPsMgrSync::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__AliUID__IAliUidPsMgrSync_ids[0], &__AliUID__IAliUidPsMgrSync_ids[2]);
}

const ::std::string&
AliUID::IAliUidPsMgrSync::ice_id(const ::Ice::Current&) const
{
    return __AliUID__IAliUidPsMgrSync_ids[0];
}

const ::std::string&
AliUID::IAliUidPsMgrSync::ice_staticId()
{
    return __AliUID__IAliUidPsMgrSync_ids[0];
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgrSync::___RegisterPassport(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string loginId;
    ::std::string passwd;
    ::Ice::Short status;
    __is->read(loginId);
    __is->read(passwd);
    __is->read(status);
    ::std::string aliuid;
    ::Ice::Int __ret = RegisterPassport(loginId, passwd, status, aliuid, __current);
    __os->write(aliuid);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgrSync::___AuthPassword(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string loginId;
    ::std::string passwd;
    __is->read(loginId);
    __is->read(passwd);
    ::Ice::Short userstatus;
    ::Ice::Int __ret = AuthPassword(loginId, passwd, userstatus, __current);
    __os->write(userstatus);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgrSync::___AuthToken(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string loginId;
    ::std::string currToken;
    ::Ice::Long t;
    __is->read(loginId);
    __is->read(currToken);
    __is->read(t);
    ::std::string aliuid;
    ::Ice::Short userstatus;
    ::Ice::Int __ret = AuthToken(loginId, currToken, t, aliuid, userstatus, __current);
    __os->write(aliuid);
    __os->write(userstatus);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgrSync::___GetAuidToken(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string loginId;
    __is->read(loginId);
    ::std::string aliuid;
    ::std::string auidToken;
    ::Ice::Short userstatus;
    ::Ice::Int __ret = GetAuidToken(loginId, aliuid, auidToken, userstatus, __current);
    __os->write(aliuid);
    __os->write(auidToken);
    __os->write(userstatus);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgrSync::___GetAccountInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string loginId;
    __is->read(loginId);
    ::AliUID::SPassportAccount account;
    ::Ice::Int __ret = GetAccountInfo(loginId, account, __current);
    account.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgrSync::___ChangePassportLogin(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string loginId;
    ::AliUID::SPassportAccount account;
    ::Ice::Int action;
    __is->read(loginId);
    account.__read(__is);
    __is->read(action);
    ::Ice::Int __ret = ChangePassportLogin(loginId, account, action, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgrSync::___GetProfileByPassport(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string loginId;
    __is->read(loginId);
    ::std::string profile;
    ::Ice::Int __ret = GetProfileByPassport(loginId, profile, __current);
    __os->write(profile);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgrSync::___UpdateProfileByPassport(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string loginId;
    ::std::string profile;
    __is->read(loginId);
    __is->read(profile);
    ::Ice::Int __ret = UpdateProfileByPassport(loginId, profile, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgrSync::___SetPassportPassword(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string loginId;
    ::std::string newPassword;
    __is->read(loginId);
    __is->read(newPassword);
    ::Ice::Int __ret = SetPassportPassword(loginId, newPassword, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgrSync::___SetPassportStatus(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string loginId;
    ::Ice::Short userStatus;
    ::std::string userData;
    __is->read(loginId);
    __is->read(userStatus);
    __is->read(userData);
    ::Ice::Int __ret = SetPassportStatus(loginId, userStatus, userData, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgrSync::___GetPassportStatus(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string loginId;
    __is->read(loginId);
    ::Ice::Short userStatus;
    ::std::string userData;
    ::Ice::Int __ret = GetPassportStatus(loginId, userStatus, userData, __current);
    __os->write(userStatus);
    __os->write(userData);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgrSync::___GetAllService(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string services;
    ::Ice::Int __ret = GetAllService(services, __current);
    __os->write(services);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgrSync::___GetWebUserService(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string serviceId;
    ::std::string loginId;
    __is->read(serviceId);
    __is->read(loginId);
    ::std::string aliuid;
    ::std::string token;
    ::AliUID::SWebBindSeq webBinds;
    ::Ice::Int __ret = GetWebUserService(serviceId, loginId, aliuid, token, webBinds, __current);
    __os->write(aliuid);
    __os->write(token);
    if(webBinds.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::AliUID::__write(__os, &webBinds[0], &webBinds[0] + webBinds.size(), ::AliUID::__U__SWebBindSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgrSync::___AddWebsite(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string serviceId;
    ::std::string webId;
    ::std::string name;
    ::std::string baseUrl;
    ::std::string trustUrl;
    __is->read(serviceId);
    __is->read(webId);
    __is->read(name);
    __is->read(baseUrl);
    __is->read(trustUrl);
    ::Ice::Int __ret = AddWebsite(serviceId, webId, name, baseUrl, trustUrl, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgrSync::___DelWebsite(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string serviceId;
    ::std::string webId;
    __is->read(serviceId);
    __is->read(webId);
    ::Ice::Int __ret = DelWebsite(serviceId, webId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgrSync::___ChgWebsite(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string serviceId;
    ::std::string webId;
    ::std::string name;
    ::std::string baseUrl;
    ::std::string trustUrl;
    __is->read(serviceId);
    __is->read(webId);
    __is->read(name);
    __is->read(baseUrl);
    __is->read(trustUrl);
    ::Ice::Int __ret = ChgWebsite(serviceId, webId, name, baseUrl, trustUrl, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgrSync::___ChgWebsiteStatus(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string serviceId;
    ::std::string webId;
    ::Ice::Int status;
    __is->read(serviceId);
    __is->read(webId);
    __is->read(status);
    ::Ice::Int __ret = ChgWebsiteStatus(serviceId, webId, status, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __AliUID__IAliUidPsMgrSync_all[] =
{
    "AddWebsite",
    "AuthPassword",
    "AuthToken",
    "ChangePassportLogin",
    "ChgWebsite",
    "ChgWebsiteStatus",
    "DelWebsite",
    "GetAccountInfo",
    "GetAllService",
    "GetAuidToken",
    "GetPassportStatus",
    "GetProfileByPassport",
    "GetWebUserService",
    "RegisterPassport",
    "SetPassportPassword",
    "SetPassportStatus",
    "UpdateProfileByPassport",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgrSync::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__AliUID__IAliUidPsMgrSync_all, __AliUID__IAliUidPsMgrSync_all + 21, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __AliUID__IAliUidPsMgrSync_all)
    {
        case 0:
        {
            return ___AddWebsite(in, current);
        }
        case 1:
        {
            return ___AuthPassword(in, current);
        }
        case 2:
        {
            return ___AuthToken(in, current);
        }
        case 3:
        {
            return ___ChangePassportLogin(in, current);
        }
        case 4:
        {
            return ___ChgWebsite(in, current);
        }
        case 5:
        {
            return ___ChgWebsiteStatus(in, current);
        }
        case 6:
        {
            return ___DelWebsite(in, current);
        }
        case 7:
        {
            return ___GetAccountInfo(in, current);
        }
        case 8:
        {
            return ___GetAllService(in, current);
        }
        case 9:
        {
            return ___GetAuidToken(in, current);
        }
        case 10:
        {
            return ___GetPassportStatus(in, current);
        }
        case 11:
        {
            return ___GetProfileByPassport(in, current);
        }
        case 12:
        {
            return ___GetWebUserService(in, current);
        }
        case 13:
        {
            return ___RegisterPassport(in, current);
        }
        case 14:
        {
            return ___SetPassportPassword(in, current);
        }
        case 15:
        {
            return ___SetPassportStatus(in, current);
        }
        case 16:
        {
            return ___UpdateProfileByPassport(in, current);
        }
        case 17:
        {
            return ___ice_id(in, current);
        }
        case 18:
        {
            return ___ice_ids(in, current);
        }
        case 19:
        {
            return ___ice_isA(in, current);
        }
        case 20:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
AliUID::IAliUidPsMgrSync::__write(::IceInternal::BasicStream* __os) const
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
AliUID::IAliUidPsMgrSync::__read(::IceInternal::BasicStream* __is, bool __rid)
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
AliUID::IAliUidPsMgrSync::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliUID::IAliUidPsMgrSync was not generated with stream support";
    throw ex;
}

void
AliUID::IAliUidPsMgrSync::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliUID::IAliUidPsMgrSync was not generated with stream support";
    throw ex;
}

void 
AliUID::__patch__IAliUidPsMgrSyncPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::AliUID::IAliUidPsMgrSyncPtr* p = static_cast< ::AliUID::IAliUidPsMgrSyncPtr*>(__addr);
    assert(p);
    *p = ::AliUID::IAliUidPsMgrSyncPtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::AliUID::IAliUidPsMgrSync::ice_staticId();
        throw e;
    }
}

bool
AliUID::operator==(const ::AliUID::IAliUidPsMgrSync& l, const ::AliUID::IAliUidPsMgrSync& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
AliUID::operator!=(const ::AliUID::IAliUidPsMgrSync& l, const ::AliUID::IAliUidPsMgrSync& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
AliUID::operator<(const ::AliUID::IAliUidPsMgrSync& l, const ::AliUID::IAliUidPsMgrSync& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
AliUID::operator<=(const ::AliUID::IAliUidPsMgrSync& l, const ::AliUID::IAliUidPsMgrSync& r)
{
    return l < r || l == r;
}

bool
AliUID::operator>(const ::AliUID::IAliUidPsMgrSync& l, const ::AliUID::IAliUidPsMgrSync& r)
{
    return !(l < r) && !(l == r);
}

bool
AliUID::operator>=(const ::AliUID::IAliUidPsMgrSync& l, const ::AliUID::IAliUidPsMgrSync& r)
{
    return !(l < r);
}
