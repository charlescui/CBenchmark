// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `aliuidpsserv.ice'

#include <aliuidpsserv.h>
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

static const ::std::string __AliUID__IAliUidPsMgr__RegisterPassport_name = "RegisterPassport";

static const ::std::string __AliUID__IAliUidPsMgr__AuthPassword_name = "AuthPassword";

static const ::std::string __AliUID__IAliUidPsMgr__AuthToken_name = "AuthToken";

static const ::std::string __AliUID__IAliUidPsMgr__GetAuidToken_name = "GetAuidToken";

static const ::std::string __AliUID__IAliUidPsMgr__GetAccountInfo_name = "GetAccountInfo";

static const ::std::string __AliUID__IAliUidPsMgr__ChangePassportLogin_name = "ChangePassportLogin";

static const ::std::string __AliUID__IAliUidPsMgr__GetProfileByPassport_name = "GetProfileByPassport";

static const ::std::string __AliUID__IAliUidPsMgr__UpdateProfileByPassport_name = "UpdateProfileByPassport";

static const ::std::string __AliUID__IAliUidPsMgr__SetPassportPassword_name = "SetPassportPassword";

static const ::std::string __AliUID__IAliUidPsMgr__SetPassportStatus_name = "SetPassportStatus";

static const ::std::string __AliUID__IAliUidPsMgr__GetPassportStatus_name = "GetPassportStatus";

static const ::std::string __AliUID__IAliUidPsMgr__GetAllService_name = "GetAllService";

static const ::std::string __AliUID__IAliUidPsMgr__BindService_name = "BindService";

static const ::std::string __AliUID__IAliUidPsMgr__UnbindService_name = "UnbindService";

static const ::std::string __AliUID__IAliUidPsMgr__GetWebUserService_name = "GetWebUserService";

static const ::std::string __AliUID__IAliUidPsMgr__AddWebsite_name = "AddWebsite";

static const ::std::string __AliUID__IAliUidPsMgr__DelWebsite_name = "DelWebsite";

static const ::std::string __AliUID__IAliUidPsMgr__ChgWebsite_name = "ChgWebsite";

static const ::std::string __AliUID__IAliUidPsMgr__ChgWebsiteStatus_name = "ChgWebsiteStatus";

static const ::std::string __AliUID__IAliUidPsMgr__DoAuth_name = "DoAuth";

void
IceInternal::incRef(::AliUID::IAliUidPsMgr* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::AliUID::IAliUidPsMgr* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::AliUID::IAliUidPsMgr* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::AliUID::IAliUidPsMgr* p)
{
    p->__decRef();
}

void
AliUID::__write(::IceInternal::BasicStream* __os, const ::AliUID::IAliUidPsMgrPrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
AliUID::__read(::IceInternal::BasicStream* __is, ::AliUID::IAliUidPsMgrPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::AliUID::IAliUidPsMgr;
        v->__copyFrom(proxy);
    }
}

void
AliUID::__write(::IceInternal::BasicStream* __os, const ::AliUID::IAliUidPsMgrPtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

void
AliUID::__addObject(const IAliUidPsMgrPtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
AliUID::__usesClasses(const IAliUidPsMgrPtr& p)
{
    return p->__usesClasses();
}

void
AliUID::__decRefUnsafe(const IAliUidPsMgrPtr& p)
{
    p->__decRefUnsafe();
}

void
AliUID::__clearHandleUnsafe(IAliUidPsMgrPtr& p)
{
    p.__clearHandleUnsafe();
}

IceAsync::AliUID::AMD_IAliUidPsMgr_RegisterPassport::AMD_IAliUidPsMgr_RegisterPassport(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_RegisterPassport::ice_response(::Ice::Int __ret, const ::std::string& aliuid)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(aliuid);
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_RegisterPassport::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_RegisterPassport::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_RegisterPassport::ice_exception()
{
    __exception();
}

IceAsync::AliUID::AMD_IAliUidPsMgr_AuthPassword::AMD_IAliUidPsMgr_AuthPassword(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_AuthPassword::ice_response(::Ice::Int __ret, ::Ice::Short userstatus)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(userstatus);
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_AuthPassword::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_AuthPassword::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_AuthPassword::ice_exception()
{
    __exception();
}

IceAsync::AliUID::AMD_IAliUidPsMgr_AuthToken::AMD_IAliUidPsMgr_AuthToken(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_AuthToken::ice_response(::Ice::Int __ret, const ::std::string& aliuid, ::Ice::Short userstatus)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(aliuid);
        __os->write(userstatus);
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_AuthToken::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_AuthToken::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_AuthToken::ice_exception()
{
    __exception();
}

IceAsync::AliUID::AMD_IAliUidPsMgr_GetAuidToken::AMD_IAliUidPsMgr_GetAuidToken(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_GetAuidToken::ice_response(::Ice::Int __ret, const ::std::string& aliuid, const ::std::string& auidToken, ::Ice::Short userstatus)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(aliuid);
        __os->write(auidToken);
        __os->write(userstatus);
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_GetAuidToken::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_GetAuidToken::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_GetAuidToken::ice_exception()
{
    __exception();
}

IceAsync::AliUID::AMD_IAliUidPsMgr_GetAccountInfo::AMD_IAliUidPsMgr_GetAccountInfo(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_GetAccountInfo::ice_response(::Ice::Int __ret, const ::AliUID::SPassportAccount& account)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        account.__write(__os);
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_GetAccountInfo::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_GetAccountInfo::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_GetAccountInfo::ice_exception()
{
    __exception();
}

IceAsync::AliUID::AMD_IAliUidPsMgr_ChangePassportLogin::AMD_IAliUidPsMgr_ChangePassportLogin(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_ChangePassportLogin::ice_response(::Ice::Int __ret)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_ChangePassportLogin::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_ChangePassportLogin::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_ChangePassportLogin::ice_exception()
{
    __exception();
}

IceAsync::AliUID::AMD_IAliUidPsMgr_GetProfileByPassport::AMD_IAliUidPsMgr_GetProfileByPassport(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_GetProfileByPassport::ice_response(::Ice::Int __ret, const ::std::string& profile)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(profile);
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_GetProfileByPassport::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_GetProfileByPassport::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_GetProfileByPassport::ice_exception()
{
    __exception();
}

IceAsync::AliUID::AMD_IAliUidPsMgr_UpdateProfileByPassport::AMD_IAliUidPsMgr_UpdateProfileByPassport(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_UpdateProfileByPassport::ice_response(::Ice::Int __ret)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_UpdateProfileByPassport::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_UpdateProfileByPassport::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_UpdateProfileByPassport::ice_exception()
{
    __exception();
}

IceAsync::AliUID::AMD_IAliUidPsMgr_SetPassportPassword::AMD_IAliUidPsMgr_SetPassportPassword(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_SetPassportPassword::ice_response(::Ice::Int __ret)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_SetPassportPassword::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_SetPassportPassword::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_SetPassportPassword::ice_exception()
{
    __exception();
}

IceAsync::AliUID::AMD_IAliUidPsMgr_SetPassportStatus::AMD_IAliUidPsMgr_SetPassportStatus(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_SetPassportStatus::ice_response(::Ice::Int __ret)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_SetPassportStatus::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_SetPassportStatus::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_SetPassportStatus::ice_exception()
{
    __exception();
}

IceAsync::AliUID::AMD_IAliUidPsMgr_GetPassportStatus::AMD_IAliUidPsMgr_GetPassportStatus(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_GetPassportStatus::ice_response(::Ice::Int __ret, ::Ice::Short userStatus, const ::std::string& userData)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(userStatus);
        __os->write(userData);
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_GetPassportStatus::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_GetPassportStatus::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_GetPassportStatus::ice_exception()
{
    __exception();
}

IceAsync::AliUID::AMD_IAliUidPsMgr_GetAllService::AMD_IAliUidPsMgr_GetAllService(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_GetAllService::ice_response(::Ice::Int __ret, const ::std::string& services)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(services);
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_GetAllService::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_GetAllService::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_GetAllService::ice_exception()
{
    __exception();
}

IceAsync::AliUID::AMD_IAliUidPsMgr_BindService::AMD_IAliUidPsMgr_BindService(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_BindService::ice_response(::Ice::Int __ret)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_BindService::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_BindService::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_BindService::ice_exception()
{
    __exception();
}

IceAsync::AliUID::AMD_IAliUidPsMgr_UnbindService::AMD_IAliUidPsMgr_UnbindService(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_UnbindService::ice_response(::Ice::Int __ret)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_UnbindService::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_UnbindService::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_UnbindService::ice_exception()
{
    __exception();
}

IceAsync::AliUID::AMD_IAliUidPsMgr_GetWebUserService::AMD_IAliUidPsMgr_GetWebUserService(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_GetWebUserService::ice_response(::Ice::Int __ret, const ::std::string& aliuid, const ::std::string& token, const ::AliUID::SWebBindSeq& webBinds)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
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
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_GetWebUserService::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_GetWebUserService::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_GetWebUserService::ice_exception()
{
    __exception();
}

IceAsync::AliUID::AMD_IAliUidPsMgr_AddWebsite::AMD_IAliUidPsMgr_AddWebsite(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_AddWebsite::ice_response(::Ice::Int __ret)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_AddWebsite::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_AddWebsite::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_AddWebsite::ice_exception()
{
    __exception();
}

IceAsync::AliUID::AMD_IAliUidPsMgr_DelWebsite::AMD_IAliUidPsMgr_DelWebsite(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_DelWebsite::ice_response(::Ice::Int __ret)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_DelWebsite::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_DelWebsite::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_DelWebsite::ice_exception()
{
    __exception();
}

IceAsync::AliUID::AMD_IAliUidPsMgr_ChgWebsite::AMD_IAliUidPsMgr_ChgWebsite(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_ChgWebsite::ice_response(::Ice::Int __ret)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_ChgWebsite::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_ChgWebsite::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_ChgWebsite::ice_exception()
{
    __exception();
}

IceAsync::AliUID::AMD_IAliUidPsMgr_ChgWebsiteStatus::AMD_IAliUidPsMgr_ChgWebsiteStatus(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_ChgWebsiteStatus::ice_response(::Ice::Int __ret)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_ChgWebsiteStatus::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_ChgWebsiteStatus::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_ChgWebsiteStatus::ice_exception()
{
    __exception();
}

IceAsync::AliUID::AMD_IAliUidPsMgr_DoAuth::AMD_IAliUidPsMgr_DoAuth(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_DoAuth::ice_response(::Ice::Int __ret, const ::std::string& buid)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(buid);
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_DoAuth::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_DoAuth::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliUID::AMD_IAliUidPsMgr_DoAuth::ice_exception()
{
    __exception();
}

::Ice::Int
IceProxy::AliUID::IAliUidPsMgr::RegisterPassport(const ::std::string& loginId, const ::std::string& passwd, ::Ice::Short status, ::std::string& aliuid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgr__RegisterPassport_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgr* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgr*>(__delBase.get());
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
IceProxy::AliUID::IAliUidPsMgr::AuthPassword(const ::std::string& loginId, const ::std::string& passwd, ::Ice::Short& userstatus, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgr__AuthPassword_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgr* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgr*>(__delBase.get());
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
IceProxy::AliUID::IAliUidPsMgr::AuthToken(const ::std::string& loginId, const ::std::string& currToken, ::Ice::Long t, ::std::string& aliuid, ::Ice::Short& userstatus, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgr__AuthToken_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgr* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgr*>(__delBase.get());
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
IceProxy::AliUID::IAliUidPsMgr::GetAuidToken(const ::std::string& loginId, ::std::string& aliuid, ::std::string& auidToken, ::Ice::Short& userstatus, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgr__GetAuidToken_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgr* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgr*>(__delBase.get());
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
IceProxy::AliUID::IAliUidPsMgr::GetAccountInfo(const ::std::string& loginId, ::AliUID::SPassportAccount& account, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgr__GetAccountInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgr* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgr*>(__delBase.get());
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
IceProxy::AliUID::IAliUidPsMgr::ChangePassportLogin(const ::std::string& loginId, const ::AliUID::SPassportAccount& account, ::Ice::Int action, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgr__ChangePassportLogin_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgr* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgr*>(__delBase.get());
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
IceProxy::AliUID::IAliUidPsMgr::GetProfileByPassport(const ::std::string& loginId, ::std::string& profile, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgr__GetProfileByPassport_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgr* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgr*>(__delBase.get());
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
IceProxy::AliUID::IAliUidPsMgr::UpdateProfileByPassport(const ::std::string& loginId, const ::std::string& profile, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgr__UpdateProfileByPassport_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgr* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgr*>(__delBase.get());
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
IceProxy::AliUID::IAliUidPsMgr::SetPassportPassword(const ::std::string& loginId, const ::std::string& newPassword, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgr__SetPassportPassword_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgr* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgr*>(__delBase.get());
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
IceProxy::AliUID::IAliUidPsMgr::SetPassportStatus(const ::std::string& loginId, ::Ice::Short userStatus, const ::std::string& userData, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgr__SetPassportStatus_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgr* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgr*>(__delBase.get());
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
IceProxy::AliUID::IAliUidPsMgr::GetPassportStatus(const ::std::string& loginId, ::Ice::Short& userStatus, ::std::string& userData, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgr__GetPassportStatus_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgr* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgr*>(__delBase.get());
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
IceProxy::AliUID::IAliUidPsMgr::GetAllService(::std::string& services, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgr__GetAllService_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgr* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgr*>(__delBase.get());
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
IceProxy::AliUID::IAliUidPsMgr::BindService(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& webUid, const ::std::string& aliuid, const ::std::string& currToken, ::Ice::Long t, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgr__BindService_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgr* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgr*>(__delBase.get());
            return __del->BindService(serviceId, webId, webUid, aliuid, currToken, t, __ctx);
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
IceProxy::AliUID::IAliUidPsMgr::UnbindService(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& webUid, const ::std::string& bindService, const ::std::string& loginId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgr__UnbindService_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgr* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgr*>(__delBase.get());
            return __del->UnbindService(serviceId, webId, webUid, bindService, loginId, __ctx);
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
IceProxy::AliUID::IAliUidPsMgr::GetWebUserService(const ::std::string& serviceId, const ::std::string& loginId, ::std::string& aliuid, ::std::string& token, ::AliUID::SWebBindSeq& webBinds, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgr__GetWebUserService_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgr* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgr*>(__delBase.get());
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
IceProxy::AliUID::IAliUidPsMgr::AddWebsite(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& name, const ::AliUID::SUrlInfoSeq& webUrl, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgr__AddWebsite_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgr* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgr*>(__delBase.get());
            return __del->AddWebsite(serviceId, webId, name, webUrl, __ctx);
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
IceProxy::AliUID::IAliUidPsMgr::DelWebsite(const ::std::string& serviceId, const ::std::string& webId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgr__DelWebsite_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgr* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgr*>(__delBase.get());
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
IceProxy::AliUID::IAliUidPsMgr::ChgWebsite(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& name, const ::AliUID::SUrlInfoSeq& webUrl, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgr__ChgWebsite_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgr* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgr*>(__delBase.get());
            return __del->ChgWebsite(serviceId, webId, name, webUrl, __ctx);
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
IceProxy::AliUID::IAliUidPsMgr::ChgWebsiteStatus(const ::std::string& serviceId, const ::std::string& webId, ::Ice::Int status, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgr__ChgWebsiteStatus_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgr* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgr*>(__delBase.get());
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

::Ice::Int
IceProxy::AliUID::IAliUidPsMgr::DoAuth(const ::std::string& serviceId, const ::std::string& aliuid, const ::std::string& token, ::Ice::Long t, ::Ice::Int mode, ::std::string& buid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliUID__IAliUidPsMgr__DoAuth_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliUID::IAliUidPsMgr* __del = dynamic_cast< ::IceDelegate::AliUID::IAliUidPsMgr*>(__delBase.get());
            return __del->DoAuth(serviceId, aliuid, token, t, mode, buid, __ctx);
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
IceProxy::AliUID::IAliUidPsMgr::ice_staticId()
{
    return ::AliUID::IAliUidPsMgr::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::AliUID::IAliUidPsMgr::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::AliUID::IAliUidPsMgr);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::AliUID::IAliUidPsMgr::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::AliUID::IAliUidPsMgr);
}

bool
IceProxy::AliUID::operator==(const ::IceProxy::AliUID::IAliUidPsMgr& l, const ::IceProxy::AliUID::IAliUidPsMgr& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliUID::operator!=(const ::IceProxy::AliUID::IAliUidPsMgr& l, const ::IceProxy::AliUID::IAliUidPsMgr& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliUID::operator<(const ::IceProxy::AliUID::IAliUidPsMgr& l, const ::IceProxy::AliUID::IAliUidPsMgr& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliUID::operator<=(const ::IceProxy::AliUID::IAliUidPsMgr& l, const ::IceProxy::AliUID::IAliUidPsMgr& r)
{
    return l < r || l == r;
}

bool
IceProxy::AliUID::operator>(const ::IceProxy::AliUID::IAliUidPsMgr& l, const ::IceProxy::AliUID::IAliUidPsMgr& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::AliUID::operator>=(const ::IceProxy::AliUID::IAliUidPsMgr& l, const ::IceProxy::AliUID::IAliUidPsMgr& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::AliUID::IAliUidPsMgr::RegisterPassport(const ::std::string& loginId, const ::std::string& passwd, ::Ice::Short status, ::std::string& aliuid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgr__RegisterPassport_name, ::Ice::Normal, __context, __compress);
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
IceDelegateM::AliUID::IAliUidPsMgr::AuthPassword(const ::std::string& loginId, const ::std::string& passwd, ::Ice::Short& userstatus, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgr__AuthPassword_name, ::Ice::Normal, __context, __compress);
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
IceDelegateM::AliUID::IAliUidPsMgr::AuthToken(const ::std::string& loginId, const ::std::string& currToken, ::Ice::Long t, ::std::string& aliuid, ::Ice::Short& userstatus, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgr__AuthToken_name, ::Ice::Normal, __context, __compress);
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
IceDelegateM::AliUID::IAliUidPsMgr::GetAuidToken(const ::std::string& loginId, ::std::string& aliuid, ::std::string& auidToken, ::Ice::Short& userstatus, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgr__GetAuidToken_name, ::Ice::Normal, __context, __compress);
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
IceDelegateM::AliUID::IAliUidPsMgr::GetAccountInfo(const ::std::string& loginId, ::AliUID::SPassportAccount& account, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgr__GetAccountInfo_name, ::Ice::Normal, __context, __compress);
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
IceDelegateM::AliUID::IAliUidPsMgr::ChangePassportLogin(const ::std::string& loginId, const ::AliUID::SPassportAccount& account, ::Ice::Int action, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgr__ChangePassportLogin_name, ::Ice::Normal, __context, __compress);
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
IceDelegateM::AliUID::IAliUidPsMgr::GetProfileByPassport(const ::std::string& loginId, ::std::string& profile, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgr__GetProfileByPassport_name, ::Ice::Normal, __context, __compress);
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
IceDelegateM::AliUID::IAliUidPsMgr::UpdateProfileByPassport(const ::std::string& loginId, const ::std::string& profile, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgr__UpdateProfileByPassport_name, ::Ice::Normal, __context, __compress);
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
IceDelegateM::AliUID::IAliUidPsMgr::SetPassportPassword(const ::std::string& loginId, const ::std::string& newPassword, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgr__SetPassportPassword_name, ::Ice::Normal, __context, __compress);
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
IceDelegateM::AliUID::IAliUidPsMgr::SetPassportStatus(const ::std::string& loginId, ::Ice::Short userStatus, const ::std::string& userData, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgr__SetPassportStatus_name, ::Ice::Normal, __context, __compress);
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
IceDelegateM::AliUID::IAliUidPsMgr::GetPassportStatus(const ::std::string& loginId, ::Ice::Short& userStatus, ::std::string& userData, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgr__GetPassportStatus_name, ::Ice::Normal, __context, __compress);
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
IceDelegateM::AliUID::IAliUidPsMgr::GetAllService(::std::string& services, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgr__GetAllService_name, ::Ice::Normal, __context, __compress);
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
IceDelegateM::AliUID::IAliUidPsMgr::BindService(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& webUid, const ::std::string& aliuid, const ::std::string& currToken, ::Ice::Long t, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgr__BindService_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(serviceId);
        __os->write(webId);
        __os->write(webUid);
        __os->write(aliuid);
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliUID::IAliUidPsMgr::UnbindService(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& webUid, const ::std::string& bindService, const ::std::string& loginId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgr__UnbindService_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(serviceId);
        __os->write(webId);
        __os->write(webUid);
        __os->write(bindService);
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
IceDelegateM::AliUID::IAliUidPsMgr::GetWebUserService(const ::std::string& serviceId, const ::std::string& loginId, ::std::string& aliuid, ::std::string& token, ::AliUID::SWebBindSeq& webBinds, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgr__GetWebUserService_name, ::Ice::Normal, __context, __compress);
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
IceDelegateM::AliUID::IAliUidPsMgr::AddWebsite(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& name, const ::AliUID::SUrlInfoSeq& webUrl, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgr__AddWebsite_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(serviceId);
        __os->write(webId);
        __os->write(name);
        if(webUrl.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliUID::__write(__os, &webUrl[0], &webUrl[0] + webUrl.size(), ::AliUID::__U__SUrlInfoSeq());
        }
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
IceDelegateM::AliUID::IAliUidPsMgr::DelWebsite(const ::std::string& serviceId, const ::std::string& webId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgr__DelWebsite_name, ::Ice::Normal, __context, __compress);
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
IceDelegateM::AliUID::IAliUidPsMgr::ChgWebsite(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& name, const ::AliUID::SUrlInfoSeq& webUrl, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgr__ChgWebsite_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(serviceId);
        __os->write(webId);
        __os->write(name);
        if(webUrl.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliUID::__write(__os, &webUrl[0], &webUrl[0] + webUrl.size(), ::AliUID::__U__SUrlInfoSeq());
        }
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
IceDelegateM::AliUID::IAliUidPsMgr::ChgWebsiteStatus(const ::std::string& serviceId, const ::std::string& webId, ::Ice::Int status, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgr__ChgWebsiteStatus_name, ::Ice::Normal, __context, __compress);
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
IceDelegateM::AliUID::IAliUidPsMgr::DoAuth(const ::std::string& serviceId, const ::std::string& aliuid, const ::std::string& token, ::Ice::Long t, ::Ice::Int mode, ::std::string& buid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliUID__IAliUidPsMgr__DoAuth_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(serviceId);
        __os->write(aliuid);
        __os->write(token);
        __os->write(t);
        __os->write(mode);
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
        __is->read(buid);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::AliUID::IAliUidPsMgr::RegisterPassport(const ::std::string&, const ::std::string&, ::Ice::Short, ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliUID::IAliUidPsMgr::AuthPassword(const ::std::string&, const ::std::string&, ::Ice::Short&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliUID::IAliUidPsMgr::AuthToken(const ::std::string&, const ::std::string&, ::Ice::Long, ::std::string&, ::Ice::Short&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliUID::IAliUidPsMgr::GetAuidToken(const ::std::string&, ::std::string&, ::std::string&, ::Ice::Short&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliUID::IAliUidPsMgr::GetAccountInfo(const ::std::string&, ::AliUID::SPassportAccount&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliUID::IAliUidPsMgr::ChangePassportLogin(const ::std::string&, const ::AliUID::SPassportAccount&, ::Ice::Int, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliUID::IAliUidPsMgr::GetProfileByPassport(const ::std::string&, ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliUID::IAliUidPsMgr::UpdateProfileByPassport(const ::std::string&, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliUID::IAliUidPsMgr::SetPassportPassword(const ::std::string&, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliUID::IAliUidPsMgr::SetPassportStatus(const ::std::string&, ::Ice::Short, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliUID::IAliUidPsMgr::GetPassportStatus(const ::std::string&, ::Ice::Short&, ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliUID::IAliUidPsMgr::GetAllService(::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliUID::IAliUidPsMgr::BindService(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliUID::IAliUidPsMgr::UnbindService(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliUID::IAliUidPsMgr::GetWebUserService(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::AliUID::SWebBindSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliUID::IAliUidPsMgr::AddWebsite(const ::std::string&, const ::std::string&, const ::std::string&, const ::AliUID::SUrlInfoSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliUID::IAliUidPsMgr::DelWebsite(const ::std::string&, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliUID::IAliUidPsMgr::ChgWebsite(const ::std::string&, const ::std::string&, const ::std::string&, const ::AliUID::SUrlInfoSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliUID::IAliUidPsMgr::ChgWebsiteStatus(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliUID::IAliUidPsMgr::DoAuth(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Int, ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::ObjectPtr
AliUID::IAliUidPsMgr::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __AliUID__IAliUidPsMgr_ids[2] =
{
    "::AliUID::IAliUidPsMgr",
    "::Ice::Object"
};

bool
AliUID::IAliUidPsMgr::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__AliUID__IAliUidPsMgr_ids, __AliUID__IAliUidPsMgr_ids + 2, _s);
}

::std::vector< ::std::string>
AliUID::IAliUidPsMgr::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__AliUID__IAliUidPsMgr_ids[0], &__AliUID__IAliUidPsMgr_ids[2]);
}

const ::std::string&
AliUID::IAliUidPsMgr::ice_id(const ::Ice::Current&) const
{
    return __AliUID__IAliUidPsMgr_ids[0];
}

const ::std::string&
AliUID::IAliUidPsMgr::ice_staticId()
{
    return __AliUID__IAliUidPsMgr_ids[0];
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgr::___RegisterPassport(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string loginId;
    ::std::string passwd;
    ::Ice::Short status;
    __is->read(loginId);
    __is->read(passwd);
    __is->read(status);
    ::AliUID::AMD_IAliUidPsMgr_RegisterPassportPtr __cb = new IceAsync::AliUID::AMD_IAliUidPsMgr_RegisterPassport(__inS);
    try
    {
        RegisterPassport_async(__cb, loginId, passwd, status, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgr::___AuthPassword(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string loginId;
    ::std::string passwd;
    __is->read(loginId);
    __is->read(passwd);
    ::AliUID::AMD_IAliUidPsMgr_AuthPasswordPtr __cb = new IceAsync::AliUID::AMD_IAliUidPsMgr_AuthPassword(__inS);
    try
    {
        AuthPassword_async(__cb, loginId, passwd, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgr::___AuthToken(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string loginId;
    ::std::string currToken;
    ::Ice::Long t;
    __is->read(loginId);
    __is->read(currToken);
    __is->read(t);
    ::AliUID::AMD_IAliUidPsMgr_AuthTokenPtr __cb = new IceAsync::AliUID::AMD_IAliUidPsMgr_AuthToken(__inS);
    try
    {
        AuthToken_async(__cb, loginId, currToken, t, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgr::___GetAuidToken(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string loginId;
    __is->read(loginId);
    ::AliUID::AMD_IAliUidPsMgr_GetAuidTokenPtr __cb = new IceAsync::AliUID::AMD_IAliUidPsMgr_GetAuidToken(__inS);
    try
    {
        GetAuidToken_async(__cb, loginId, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgr::___GetAccountInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string loginId;
    __is->read(loginId);
    ::AliUID::AMD_IAliUidPsMgr_GetAccountInfoPtr __cb = new IceAsync::AliUID::AMD_IAliUidPsMgr_GetAccountInfo(__inS);
    try
    {
        GetAccountInfo_async(__cb, loginId, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgr::___ChangePassportLogin(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string loginId;
    ::AliUID::SPassportAccount account;
    ::Ice::Int action;
    __is->read(loginId);
    account.__read(__is);
    __is->read(action);
    ::AliUID::AMD_IAliUidPsMgr_ChangePassportLoginPtr __cb = new IceAsync::AliUID::AMD_IAliUidPsMgr_ChangePassportLogin(__inS);
    try
    {
        ChangePassportLogin_async(__cb, loginId, account, action, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgr::___GetProfileByPassport(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string loginId;
    __is->read(loginId);
    ::AliUID::AMD_IAliUidPsMgr_GetProfileByPassportPtr __cb = new IceAsync::AliUID::AMD_IAliUidPsMgr_GetProfileByPassport(__inS);
    try
    {
        GetProfileByPassport_async(__cb, loginId, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgr::___UpdateProfileByPassport(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string loginId;
    ::std::string profile;
    __is->read(loginId);
    __is->read(profile);
    ::AliUID::AMD_IAliUidPsMgr_UpdateProfileByPassportPtr __cb = new IceAsync::AliUID::AMD_IAliUidPsMgr_UpdateProfileByPassport(__inS);
    try
    {
        UpdateProfileByPassport_async(__cb, loginId, profile, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgr::___SetPassportPassword(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string loginId;
    ::std::string newPassword;
    __is->read(loginId);
    __is->read(newPassword);
    ::AliUID::AMD_IAliUidPsMgr_SetPassportPasswordPtr __cb = new IceAsync::AliUID::AMD_IAliUidPsMgr_SetPassportPassword(__inS);
    try
    {
        SetPassportPassword_async(__cb, loginId, newPassword, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgr::___SetPassportStatus(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string loginId;
    ::Ice::Short userStatus;
    ::std::string userData;
    __is->read(loginId);
    __is->read(userStatus);
    __is->read(userData);
    ::AliUID::AMD_IAliUidPsMgr_SetPassportStatusPtr __cb = new IceAsync::AliUID::AMD_IAliUidPsMgr_SetPassportStatus(__inS);
    try
    {
        SetPassportStatus_async(__cb, loginId, userStatus, userData, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgr::___GetPassportStatus(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string loginId;
    __is->read(loginId);
    ::AliUID::AMD_IAliUidPsMgr_GetPassportStatusPtr __cb = new IceAsync::AliUID::AMD_IAliUidPsMgr_GetPassportStatus(__inS);
    try
    {
        GetPassportStatus_async(__cb, loginId, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgr::___GetAllService(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::AliUID::AMD_IAliUidPsMgr_GetAllServicePtr __cb = new IceAsync::AliUID::AMD_IAliUidPsMgr_GetAllService(__inS);
    try
    {
        GetAllService_async(__cb, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgr::___BindService(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string serviceId;
    ::std::string webId;
    ::std::string webUid;
    ::std::string aliuid;
    ::std::string currToken;
    ::Ice::Long t;
    __is->read(serviceId);
    __is->read(webId);
    __is->read(webUid);
    __is->read(aliuid);
    __is->read(currToken);
    __is->read(t);
    ::AliUID::AMD_IAliUidPsMgr_BindServicePtr __cb = new IceAsync::AliUID::AMD_IAliUidPsMgr_BindService(__inS);
    try
    {
        BindService_async(__cb, serviceId, webId, webUid, aliuid, currToken, t, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgr::___UnbindService(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string serviceId;
    ::std::string webId;
    ::std::string webUid;
    ::std::string bindService;
    ::std::string loginId;
    __is->read(serviceId);
    __is->read(webId);
    __is->read(webUid);
    __is->read(bindService);
    __is->read(loginId);
    ::AliUID::AMD_IAliUidPsMgr_UnbindServicePtr __cb = new IceAsync::AliUID::AMD_IAliUidPsMgr_UnbindService(__inS);
    try
    {
        UnbindService_async(__cb, serviceId, webId, webUid, bindService, loginId, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgr::___GetWebUserService(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string serviceId;
    ::std::string loginId;
    __is->read(serviceId);
    __is->read(loginId);
    ::AliUID::AMD_IAliUidPsMgr_GetWebUserServicePtr __cb = new IceAsync::AliUID::AMD_IAliUidPsMgr_GetWebUserService(__inS);
    try
    {
        GetWebUserService_async(__cb, serviceId, loginId, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgr::___AddWebsite(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string serviceId;
    ::std::string webId;
    ::std::string name;
    ::AliUID::SUrlInfoSeq webUrl;
    __is->read(serviceId);
    __is->read(webId);
    __is->read(name);
    ::AliUID::__read(__is, webUrl, ::AliUID::__U__SUrlInfoSeq());
    ::AliUID::AMD_IAliUidPsMgr_AddWebsitePtr __cb = new IceAsync::AliUID::AMD_IAliUidPsMgr_AddWebsite(__inS);
    try
    {
        AddWebsite_async(__cb, serviceId, webId, name, webUrl, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgr::___DelWebsite(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string serviceId;
    ::std::string webId;
    __is->read(serviceId);
    __is->read(webId);
    ::AliUID::AMD_IAliUidPsMgr_DelWebsitePtr __cb = new IceAsync::AliUID::AMD_IAliUidPsMgr_DelWebsite(__inS);
    try
    {
        DelWebsite_async(__cb, serviceId, webId, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgr::___ChgWebsite(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string serviceId;
    ::std::string webId;
    ::std::string name;
    ::AliUID::SUrlInfoSeq webUrl;
    __is->read(serviceId);
    __is->read(webId);
    __is->read(name);
    ::AliUID::__read(__is, webUrl, ::AliUID::__U__SUrlInfoSeq());
    ::AliUID::AMD_IAliUidPsMgr_ChgWebsitePtr __cb = new IceAsync::AliUID::AMD_IAliUidPsMgr_ChgWebsite(__inS);
    try
    {
        ChgWebsite_async(__cb, serviceId, webId, name, webUrl, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgr::___ChgWebsiteStatus(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string serviceId;
    ::std::string webId;
    ::Ice::Int status;
    __is->read(serviceId);
    __is->read(webId);
    __is->read(status);
    ::AliUID::AMD_IAliUidPsMgr_ChgWebsiteStatusPtr __cb = new IceAsync::AliUID::AMD_IAliUidPsMgr_ChgWebsiteStatus(__inS);
    try
    {
        ChgWebsiteStatus_async(__cb, serviceId, webId, status, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgr::___DoAuth(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string serviceId;
    ::std::string aliuid;
    ::std::string token;
    ::Ice::Long t;
    ::Ice::Int mode;
    __is->read(serviceId);
    __is->read(aliuid);
    __is->read(token);
    __is->read(t);
    __is->read(mode);
    ::AliUID::AMD_IAliUidPsMgr_DoAuthPtr __cb = new IceAsync::AliUID::AMD_IAliUidPsMgr_DoAuth(__inS);
    try
    {
        DoAuth_async(__cb, serviceId, aliuid, token, t, mode, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

static ::std::string __AliUID__IAliUidPsMgr_all[] =
{
    "AddWebsite",
    "AuthPassword",
    "AuthToken",
    "BindService",
    "ChangePassportLogin",
    "ChgWebsite",
    "ChgWebsiteStatus",
    "DelWebsite",
    "DoAuth",
    "GetAccountInfo",
    "GetAllService",
    "GetAuidToken",
    "GetPassportStatus",
    "GetProfileByPassport",
    "GetWebUserService",
    "RegisterPassport",
    "SetPassportPassword",
    "SetPassportStatus",
    "UnbindService",
    "UpdateProfileByPassport",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::IceInternal::DispatchStatus
AliUID::IAliUidPsMgr::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__AliUID__IAliUidPsMgr_all, __AliUID__IAliUidPsMgr_all + 24, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __AliUID__IAliUidPsMgr_all)
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
            return ___BindService(in, current);
        }
        case 4:
        {
            return ___ChangePassportLogin(in, current);
        }
        case 5:
        {
            return ___ChgWebsite(in, current);
        }
        case 6:
        {
            return ___ChgWebsiteStatus(in, current);
        }
        case 7:
        {
            return ___DelWebsite(in, current);
        }
        case 8:
        {
            return ___DoAuth(in, current);
        }
        case 9:
        {
            return ___GetAccountInfo(in, current);
        }
        case 10:
        {
            return ___GetAllService(in, current);
        }
        case 11:
        {
            return ___GetAuidToken(in, current);
        }
        case 12:
        {
            return ___GetPassportStatus(in, current);
        }
        case 13:
        {
            return ___GetProfileByPassport(in, current);
        }
        case 14:
        {
            return ___GetWebUserService(in, current);
        }
        case 15:
        {
            return ___RegisterPassport(in, current);
        }
        case 16:
        {
            return ___SetPassportPassword(in, current);
        }
        case 17:
        {
            return ___SetPassportStatus(in, current);
        }
        case 18:
        {
            return ___UnbindService(in, current);
        }
        case 19:
        {
            return ___UpdateProfileByPassport(in, current);
        }
        case 20:
        {
            return ___ice_id(in, current);
        }
        case 21:
        {
            return ___ice_ids(in, current);
        }
        case 22:
        {
            return ___ice_isA(in, current);
        }
        case 23:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
AliUID::IAliUidPsMgr::__write(::IceInternal::BasicStream* __os) const
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
AliUID::IAliUidPsMgr::__read(::IceInternal::BasicStream* __is, bool __rid)
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
AliUID::IAliUidPsMgr::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliUID::IAliUidPsMgr was not generated with stream support";
    throw ex;
}

void
AliUID::IAliUidPsMgr::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliUID::IAliUidPsMgr was not generated with stream support";
    throw ex;
}

void 
AliUID::__patch__IAliUidPsMgrPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::AliUID::IAliUidPsMgrPtr* p = static_cast< ::AliUID::IAliUidPsMgrPtr*>(__addr);
    assert(p);
    *p = ::AliUID::IAliUidPsMgrPtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::AliUID::IAliUidPsMgr::ice_staticId();
        throw e;
    }
}

bool
AliUID::operator==(const ::AliUID::IAliUidPsMgr& l, const ::AliUID::IAliUidPsMgr& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
AliUID::operator!=(const ::AliUID::IAliUidPsMgr& l, const ::AliUID::IAliUidPsMgr& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
AliUID::operator<(const ::AliUID::IAliUidPsMgr& l, const ::AliUID::IAliUidPsMgr& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
AliUID::operator<=(const ::AliUID::IAliUidPsMgr& l, const ::AliUID::IAliUidPsMgr& r)
{
    return l < r || l == r;
}

bool
AliUID::operator>(const ::AliUID::IAliUidPsMgr& l, const ::AliUID::IAliUidPsMgr& r)
{
    return !(l < r) && !(l == r);
}

bool
AliUID::operator>=(const ::AliUID::IAliUidPsMgr& l, const ::AliUID::IAliUidPsMgr& r)
{
    return !(l < r);
}
