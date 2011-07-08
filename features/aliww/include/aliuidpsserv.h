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

#ifndef __aliuidpsserv_h__
#define __aliuidpsserv_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/Incoming.h>
#include <Ice/IncomingAsync.h>
#include <Ice/Direct.h>
#include <Ice/StreamF.h>
#include <Ice/BuiltinSequences.h>
#include <aliuidstruct.h>
#include <Ice/UndefSysMacros.h>

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

namespace IceProxy
{

namespace AliUID
{

class IAliUidPsMgr;
bool operator==(const IAliUidPsMgr&, const IAliUidPsMgr&);
bool operator!=(const IAliUidPsMgr&, const IAliUidPsMgr&);
bool operator<(const IAliUidPsMgr&, const IAliUidPsMgr&);
bool operator<=(const IAliUidPsMgr&, const IAliUidPsMgr&);
bool operator>(const IAliUidPsMgr&, const IAliUidPsMgr&);
bool operator>=(const IAliUidPsMgr&, const IAliUidPsMgr&);

}

}

namespace AliUID
{

class IAliUidPsMgr;
bool operator==(const IAliUidPsMgr&, const IAliUidPsMgr&);
bool operator!=(const IAliUidPsMgr&, const IAliUidPsMgr&);
bool operator<(const IAliUidPsMgr&, const IAliUidPsMgr&);
bool operator<=(const IAliUidPsMgr&, const IAliUidPsMgr&);
bool operator>(const IAliUidPsMgr&, const IAliUidPsMgr&);
bool operator>=(const IAliUidPsMgr&, const IAliUidPsMgr&);

}

namespace IceInternal
{

void incRef(::AliUID::IAliUidPsMgr*);
void decRef(::AliUID::IAliUidPsMgr*);

void incRef(::IceProxy::AliUID::IAliUidPsMgr*);
void decRef(::IceProxy::AliUID::IAliUidPsMgr*);

}

namespace AliUID
{

typedef ::IceInternal::Handle< ::AliUID::IAliUidPsMgr> IAliUidPsMgrPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::AliUID::IAliUidPsMgr> IAliUidPsMgrPrx;

void __write(::IceInternal::BasicStream*, const IAliUidPsMgrPrx&);
void __read(::IceInternal::BasicStream*, IAliUidPsMgrPrx&);
void __write(::IceInternal::BasicStream*, const IAliUidPsMgrPtr&);
void __patch__IAliUidPsMgrPtr(void*, ::Ice::ObjectPtr&);

void __addObject(const IAliUidPsMgrPtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const IAliUidPsMgrPtr&);
void __decRefUnsafe(const IAliUidPsMgrPtr&);
void __clearHandleUnsafe(IAliUidPsMgrPtr&);

}

namespace AliUID
{

}

namespace AliUID
{

class AMD_IAliUidPsMgr_RegisterPassport : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliUID::AMD_IAliUidPsMgr_RegisterPassport> AMD_IAliUidPsMgr_RegisterPassportPtr;

class AMD_IAliUidPsMgr_AuthPassword : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Short) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliUID::AMD_IAliUidPsMgr_AuthPassword> AMD_IAliUidPsMgr_AuthPasswordPtr;

class AMD_IAliUidPsMgr_AuthToken : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&, ::Ice::Short) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliUID::AMD_IAliUidPsMgr_AuthToken> AMD_IAliUidPsMgr_AuthTokenPtr;

class AMD_IAliUidPsMgr_GetAuidToken : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&, const ::std::string&, ::Ice::Short) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliUID::AMD_IAliUidPsMgr_GetAuidToken> AMD_IAliUidPsMgr_GetAuidTokenPtr;

class AMD_IAliUidPsMgr_GetAccountInfo : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliUID::SPassportAccount&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliUID::AMD_IAliUidPsMgr_GetAccountInfo> AMD_IAliUidPsMgr_GetAccountInfoPtr;

class AMD_IAliUidPsMgr_ChangePassportLogin : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliUID::AMD_IAliUidPsMgr_ChangePassportLogin> AMD_IAliUidPsMgr_ChangePassportLoginPtr;

class AMD_IAliUidPsMgr_GetProfileByPassport : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliUID::AMD_IAliUidPsMgr_GetProfileByPassport> AMD_IAliUidPsMgr_GetProfileByPassportPtr;

class AMD_IAliUidPsMgr_UpdateProfileByPassport : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliUID::AMD_IAliUidPsMgr_UpdateProfileByPassport> AMD_IAliUidPsMgr_UpdateProfileByPassportPtr;

class AMD_IAliUidPsMgr_SetPassportPassword : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliUID::AMD_IAliUidPsMgr_SetPassportPassword> AMD_IAliUidPsMgr_SetPassportPasswordPtr;

class AMD_IAliUidPsMgr_SetPassportStatus : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliUID::AMD_IAliUidPsMgr_SetPassportStatus> AMD_IAliUidPsMgr_SetPassportStatusPtr;

class AMD_IAliUidPsMgr_GetPassportStatus : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Short, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliUID::AMD_IAliUidPsMgr_GetPassportStatus> AMD_IAliUidPsMgr_GetPassportStatusPtr;

class AMD_IAliUidPsMgr_GetAllService : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliUID::AMD_IAliUidPsMgr_GetAllService> AMD_IAliUidPsMgr_GetAllServicePtr;

class AMD_IAliUidPsMgr_BindService : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliUID::AMD_IAliUidPsMgr_BindService> AMD_IAliUidPsMgr_BindServicePtr;

class AMD_IAliUidPsMgr_UnbindService : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliUID::AMD_IAliUidPsMgr_UnbindService> AMD_IAliUidPsMgr_UnbindServicePtr;

class AMD_IAliUidPsMgr_GetWebUserService : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&, const ::std::string&, const ::AliUID::SWebBindSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliUID::AMD_IAliUidPsMgr_GetWebUserService> AMD_IAliUidPsMgr_GetWebUserServicePtr;

class AMD_IAliUidPsMgr_AddWebsite : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliUID::AMD_IAliUidPsMgr_AddWebsite> AMD_IAliUidPsMgr_AddWebsitePtr;

class AMD_IAliUidPsMgr_DelWebsite : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliUID::AMD_IAliUidPsMgr_DelWebsite> AMD_IAliUidPsMgr_DelWebsitePtr;

class AMD_IAliUidPsMgr_ChgWebsite : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliUID::AMD_IAliUidPsMgr_ChgWebsite> AMD_IAliUidPsMgr_ChgWebsitePtr;

class AMD_IAliUidPsMgr_ChgWebsiteStatus : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliUID::AMD_IAliUidPsMgr_ChgWebsiteStatus> AMD_IAliUidPsMgr_ChgWebsiteStatusPtr;

class AMD_IAliUidPsMgr_DoAuth : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliUID::AMD_IAliUidPsMgr_DoAuth> AMD_IAliUidPsMgr_DoAuthPtr;

}

namespace IceAsync
{

namespace AliUID
{

class AMD_IAliUidPsMgr_RegisterPassport : public ::AliUID::AMD_IAliUidPsMgr_RegisterPassport, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAliUidPsMgr_RegisterPassport(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAliUidPsMgr_AuthPassword : public ::AliUID::AMD_IAliUidPsMgr_AuthPassword, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAliUidPsMgr_AuthPassword(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Short);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAliUidPsMgr_AuthToken : public ::AliUID::AMD_IAliUidPsMgr_AuthToken, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAliUidPsMgr_AuthToken(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&, ::Ice::Short);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAliUidPsMgr_GetAuidToken : public ::AliUID::AMD_IAliUidPsMgr_GetAuidToken, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAliUidPsMgr_GetAuidToken(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&, const ::std::string&, ::Ice::Short);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAliUidPsMgr_GetAccountInfo : public ::AliUID::AMD_IAliUidPsMgr_GetAccountInfo, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAliUidPsMgr_GetAccountInfo(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliUID::SPassportAccount&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAliUidPsMgr_ChangePassportLogin : public ::AliUID::AMD_IAliUidPsMgr_ChangePassportLogin, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAliUidPsMgr_ChangePassportLogin(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAliUidPsMgr_GetProfileByPassport : public ::AliUID::AMD_IAliUidPsMgr_GetProfileByPassport, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAliUidPsMgr_GetProfileByPassport(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAliUidPsMgr_UpdateProfileByPassport : public ::AliUID::AMD_IAliUidPsMgr_UpdateProfileByPassport, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAliUidPsMgr_UpdateProfileByPassport(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAliUidPsMgr_SetPassportPassword : public ::AliUID::AMD_IAliUidPsMgr_SetPassportPassword, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAliUidPsMgr_SetPassportPassword(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAliUidPsMgr_SetPassportStatus : public ::AliUID::AMD_IAliUidPsMgr_SetPassportStatus, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAliUidPsMgr_SetPassportStatus(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAliUidPsMgr_GetPassportStatus : public ::AliUID::AMD_IAliUidPsMgr_GetPassportStatus, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAliUidPsMgr_GetPassportStatus(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Short, const ::std::string&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAliUidPsMgr_GetAllService : public ::AliUID::AMD_IAliUidPsMgr_GetAllService, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAliUidPsMgr_GetAllService(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAliUidPsMgr_BindService : public ::AliUID::AMD_IAliUidPsMgr_BindService, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAliUidPsMgr_BindService(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAliUidPsMgr_UnbindService : public ::AliUID::AMD_IAliUidPsMgr_UnbindService, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAliUidPsMgr_UnbindService(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAliUidPsMgr_GetWebUserService : public ::AliUID::AMD_IAliUidPsMgr_GetWebUserService, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAliUidPsMgr_GetWebUserService(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&, const ::std::string&, const ::AliUID::SWebBindSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAliUidPsMgr_AddWebsite : public ::AliUID::AMD_IAliUidPsMgr_AddWebsite, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAliUidPsMgr_AddWebsite(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAliUidPsMgr_DelWebsite : public ::AliUID::AMD_IAliUidPsMgr_DelWebsite, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAliUidPsMgr_DelWebsite(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAliUidPsMgr_ChgWebsite : public ::AliUID::AMD_IAliUidPsMgr_ChgWebsite, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAliUidPsMgr_ChgWebsite(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAliUidPsMgr_ChgWebsiteStatus : public ::AliUID::AMD_IAliUidPsMgr_ChgWebsiteStatus, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAliUidPsMgr_ChgWebsiteStatus(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAliUidPsMgr_DoAuth : public ::AliUID::AMD_IAliUidPsMgr_DoAuth, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAliUidPsMgr_DoAuth(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

}

}

namespace IceProxy
{

namespace AliUID
{

class IAliUidPsMgr : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int RegisterPassport(const ::std::string& loginId, const ::std::string& passwd, ::Ice::Short status, ::std::string& aliuid)
    {
        return RegisterPassport(loginId, passwd, status, aliuid, 0);
    }
    ::Ice::Int RegisterPassport(const ::std::string& loginId, const ::std::string& passwd, ::Ice::Short status, ::std::string& aliuid, const ::Ice::Context& __ctx)
    {
        return RegisterPassport(loginId, passwd, status, aliuid, &__ctx);
    }
    
private:

    ::Ice::Int RegisterPassport(const ::std::string&, const ::std::string&, ::Ice::Short, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int AuthPassword(const ::std::string& loginId, const ::std::string& passwd, ::Ice::Short& userstatus)
    {
        return AuthPassword(loginId, passwd, userstatus, 0);
    }
    ::Ice::Int AuthPassword(const ::std::string& loginId, const ::std::string& passwd, ::Ice::Short& userstatus, const ::Ice::Context& __ctx)
    {
        return AuthPassword(loginId, passwd, userstatus, &__ctx);
    }
    
private:

    ::Ice::Int AuthPassword(const ::std::string&, const ::std::string&, ::Ice::Short&, const ::Ice::Context*);
    
public:

    ::Ice::Int AuthToken(const ::std::string& loginId, const ::std::string& currToken, ::Ice::Long t, ::std::string& aliuid, ::Ice::Short& userstatus)
    {
        return AuthToken(loginId, currToken, t, aliuid, userstatus, 0);
    }
    ::Ice::Int AuthToken(const ::std::string& loginId, const ::std::string& currToken, ::Ice::Long t, ::std::string& aliuid, ::Ice::Short& userstatus, const ::Ice::Context& __ctx)
    {
        return AuthToken(loginId, currToken, t, aliuid, userstatus, &__ctx);
    }
    
private:

    ::Ice::Int AuthToken(const ::std::string&, const ::std::string&, ::Ice::Long, ::std::string&, ::Ice::Short&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetAuidToken(const ::std::string& loginId, ::std::string& aliuid, ::std::string& auidToken, ::Ice::Short& userstatus)
    {
        return GetAuidToken(loginId, aliuid, auidToken, userstatus, 0);
    }
    ::Ice::Int GetAuidToken(const ::std::string& loginId, ::std::string& aliuid, ::std::string& auidToken, ::Ice::Short& userstatus, const ::Ice::Context& __ctx)
    {
        return GetAuidToken(loginId, aliuid, auidToken, userstatus, &__ctx);
    }
    
private:

    ::Ice::Int GetAuidToken(const ::std::string&, ::std::string&, ::std::string&, ::Ice::Short&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetAccountInfo(const ::std::string& loginId, ::AliUID::SPassportAccount& account)
    {
        return GetAccountInfo(loginId, account, 0);
    }
    ::Ice::Int GetAccountInfo(const ::std::string& loginId, ::AliUID::SPassportAccount& account, const ::Ice::Context& __ctx)
    {
        return GetAccountInfo(loginId, account, &__ctx);
    }
    
private:

    ::Ice::Int GetAccountInfo(const ::std::string&, ::AliUID::SPassportAccount&, const ::Ice::Context*);
    
public:

    ::Ice::Int ChangePassportLogin(const ::std::string& loginId, const ::AliUID::SPassportAccount& account, ::Ice::Int action)
    {
        return ChangePassportLogin(loginId, account, action, 0);
    }
    ::Ice::Int ChangePassportLogin(const ::std::string& loginId, const ::AliUID::SPassportAccount& account, ::Ice::Int action, const ::Ice::Context& __ctx)
    {
        return ChangePassportLogin(loginId, account, action, &__ctx);
    }
    
private:

    ::Ice::Int ChangePassportLogin(const ::std::string&, const ::AliUID::SPassportAccount&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int GetProfileByPassport(const ::std::string& loginId, ::std::string& profile)
    {
        return GetProfileByPassport(loginId, profile, 0);
    }
    ::Ice::Int GetProfileByPassport(const ::std::string& loginId, ::std::string& profile, const ::Ice::Context& __ctx)
    {
        return GetProfileByPassport(loginId, profile, &__ctx);
    }
    
private:

    ::Ice::Int GetProfileByPassport(const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateProfileByPassport(const ::std::string& loginId, const ::std::string& profile)
    {
        return UpdateProfileByPassport(loginId, profile, 0);
    }
    ::Ice::Int UpdateProfileByPassport(const ::std::string& loginId, const ::std::string& profile, const ::Ice::Context& __ctx)
    {
        return UpdateProfileByPassport(loginId, profile, &__ctx);
    }
    
private:

    ::Ice::Int UpdateProfileByPassport(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int SetPassportPassword(const ::std::string& loginId, const ::std::string& newPassword)
    {
        return SetPassportPassword(loginId, newPassword, 0);
    }
    ::Ice::Int SetPassportPassword(const ::std::string& loginId, const ::std::string& newPassword, const ::Ice::Context& __ctx)
    {
        return SetPassportPassword(loginId, newPassword, &__ctx);
    }
    
private:

    ::Ice::Int SetPassportPassword(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int SetPassportStatus(const ::std::string& loginId, ::Ice::Short userStatus, const ::std::string& userData)
    {
        return SetPassportStatus(loginId, userStatus, userData, 0);
    }
    ::Ice::Int SetPassportStatus(const ::std::string& loginId, ::Ice::Short userStatus, const ::std::string& userData, const ::Ice::Context& __ctx)
    {
        return SetPassportStatus(loginId, userStatus, userData, &__ctx);
    }
    
private:

    ::Ice::Int SetPassportStatus(const ::std::string&, ::Ice::Short, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetPassportStatus(const ::std::string& loginId, ::Ice::Short& userStatus, ::std::string& userData)
    {
        return GetPassportStatus(loginId, userStatus, userData, 0);
    }
    ::Ice::Int GetPassportStatus(const ::std::string& loginId, ::Ice::Short& userStatus, ::std::string& userData, const ::Ice::Context& __ctx)
    {
        return GetPassportStatus(loginId, userStatus, userData, &__ctx);
    }
    
private:

    ::Ice::Int GetPassportStatus(const ::std::string&, ::Ice::Short&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetAllService(::std::string& services)
    {
        return GetAllService(services, 0);
    }
    ::Ice::Int GetAllService(::std::string& services, const ::Ice::Context& __ctx)
    {
        return GetAllService(services, &__ctx);
    }
    
private:

    ::Ice::Int GetAllService(::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int BindService(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& webUid, const ::std::string& aliuid, const ::std::string& currToken, ::Ice::Long t)
    {
        return BindService(serviceId, webId, webUid, aliuid, currToken, t, 0);
    }
    ::Ice::Int BindService(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& webUid, const ::std::string& aliuid, const ::std::string& currToken, ::Ice::Long t, const ::Ice::Context& __ctx)
    {
        return BindService(serviceId, webId, webUid, aliuid, currToken, t, &__ctx);
    }
    
private:

    ::Ice::Int BindService(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long, const ::Ice::Context*);
    
public:

    ::Ice::Int UnbindService(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& webUid, const ::std::string& bindService, const ::std::string& loginId)
    {
        return UnbindService(serviceId, webId, webUid, bindService, loginId, 0);
    }
    ::Ice::Int UnbindService(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& webUid, const ::std::string& bindService, const ::std::string& loginId, const ::Ice::Context& __ctx)
    {
        return UnbindService(serviceId, webId, webUid, bindService, loginId, &__ctx);
    }
    
private:

    ::Ice::Int UnbindService(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetWebUserService(const ::std::string& serviceId, const ::std::string& loginId, ::std::string& aliuid, ::std::string& token, ::AliUID::SWebBindSeq& webBinds)
    {
        return GetWebUserService(serviceId, loginId, aliuid, token, webBinds, 0);
    }
    ::Ice::Int GetWebUserService(const ::std::string& serviceId, const ::std::string& loginId, ::std::string& aliuid, ::std::string& token, ::AliUID::SWebBindSeq& webBinds, const ::Ice::Context& __ctx)
    {
        return GetWebUserService(serviceId, loginId, aliuid, token, webBinds, &__ctx);
    }
    
private:

    ::Ice::Int GetWebUserService(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::AliUID::SWebBindSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddWebsite(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& name, const ::AliUID::SUrlInfoSeq& webUrl)
    {
        return AddWebsite(serviceId, webId, name, webUrl, 0);
    }
    ::Ice::Int AddWebsite(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& name, const ::AliUID::SUrlInfoSeq& webUrl, const ::Ice::Context& __ctx)
    {
        return AddWebsite(serviceId, webId, name, webUrl, &__ctx);
    }
    
private:

    ::Ice::Int AddWebsite(const ::std::string&, const ::std::string&, const ::std::string&, const ::AliUID::SUrlInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int DelWebsite(const ::std::string& serviceId, const ::std::string& webId)
    {
        return DelWebsite(serviceId, webId, 0);
    }
    ::Ice::Int DelWebsite(const ::std::string& serviceId, const ::std::string& webId, const ::Ice::Context& __ctx)
    {
        return DelWebsite(serviceId, webId, &__ctx);
    }
    
private:

    ::Ice::Int DelWebsite(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int ChgWebsite(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& name, const ::AliUID::SUrlInfoSeq& webUrl)
    {
        return ChgWebsite(serviceId, webId, name, webUrl, 0);
    }
    ::Ice::Int ChgWebsite(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& name, const ::AliUID::SUrlInfoSeq& webUrl, const ::Ice::Context& __ctx)
    {
        return ChgWebsite(serviceId, webId, name, webUrl, &__ctx);
    }
    
private:

    ::Ice::Int ChgWebsite(const ::std::string&, const ::std::string&, const ::std::string&, const ::AliUID::SUrlInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int ChgWebsiteStatus(const ::std::string& serviceId, const ::std::string& webId, ::Ice::Int status)
    {
        return ChgWebsiteStatus(serviceId, webId, status, 0);
    }
    ::Ice::Int ChgWebsiteStatus(const ::std::string& serviceId, const ::std::string& webId, ::Ice::Int status, const ::Ice::Context& __ctx)
    {
        return ChgWebsiteStatus(serviceId, webId, status, &__ctx);
    }
    
private:

    ::Ice::Int ChgWebsiteStatus(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int DoAuth(const ::std::string& serviceId, const ::std::string& aliuid, const ::std::string& token, ::Ice::Long t, ::Ice::Int mode, ::std::string& buid)
    {
        return DoAuth(serviceId, aliuid, token, t, mode, buid, 0);
    }
    ::Ice::Int DoAuth(const ::std::string& serviceId, const ::std::string& aliuid, const ::std::string& token, ::Ice::Long t, ::Ice::Int mode, ::std::string& buid, const ::Ice::Context& __ctx)
    {
        return DoAuth(serviceId, aliuid, token, t, mode, buid, &__ctx);
    }
    
private:

    ::Ice::Int DoAuth(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Int, ::std::string&, const ::Ice::Context*);
    
public:
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
};

}

}

namespace IceDelegate
{

namespace AliUID
{

class IAliUidPsMgr : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int RegisterPassport(const ::std::string&, const ::std::string&, ::Ice::Short, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AuthPassword(const ::std::string&, const ::std::string&, ::Ice::Short&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AuthToken(const ::std::string&, const ::std::string&, ::Ice::Long, ::std::string&, ::Ice::Short&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetAuidToken(const ::std::string&, ::std::string&, ::std::string&, ::Ice::Short&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetAccountInfo(const ::std::string&, ::AliUID::SPassportAccount&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int ChangePassportLogin(const ::std::string&, const ::AliUID::SPassportAccount&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetProfileByPassport(const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateProfileByPassport(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int SetPassportPassword(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int SetPassportStatus(const ::std::string&, ::Ice::Short, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetPassportStatus(const ::std::string&, ::Ice::Short&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetAllService(::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int BindService(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UnbindService(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetWebUserService(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::AliUID::SWebBindSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddWebsite(const ::std::string&, const ::std::string&, const ::std::string&, const ::AliUID::SUrlInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DelWebsite(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int ChgWebsite(const ::std::string&, const ::std::string&, const ::std::string&, const ::AliUID::SUrlInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int ChgWebsiteStatus(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DoAuth(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Int, ::std::string&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace AliUID
{

class IAliUidPsMgr : virtual public ::IceDelegate::AliUID::IAliUidPsMgr,
                     virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int RegisterPassport(const ::std::string&, const ::std::string&, ::Ice::Short, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int AuthPassword(const ::std::string&, const ::std::string&, ::Ice::Short&, const ::Ice::Context*);

    virtual ::Ice::Int AuthToken(const ::std::string&, const ::std::string&, ::Ice::Long, ::std::string&, ::Ice::Short&, const ::Ice::Context*);

    virtual ::Ice::Int GetAuidToken(const ::std::string&, ::std::string&, ::std::string&, ::Ice::Short&, const ::Ice::Context*);

    virtual ::Ice::Int GetAccountInfo(const ::std::string&, ::AliUID::SPassportAccount&, const ::Ice::Context*);

    virtual ::Ice::Int ChangePassportLogin(const ::std::string&, const ::AliUID::SPassportAccount&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int GetProfileByPassport(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateProfileByPassport(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int SetPassportPassword(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int SetPassportStatus(const ::std::string&, ::Ice::Short, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetPassportStatus(const ::std::string&, ::Ice::Short&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetAllService(::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int BindService(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Int UnbindService(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetWebUserService(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::AliUID::SWebBindSeq&, const ::Ice::Context*);

    virtual ::Ice::Int AddWebsite(const ::std::string&, const ::std::string&, const ::std::string&, const ::AliUID::SUrlInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DelWebsite(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int ChgWebsite(const ::std::string&, const ::std::string&, const ::std::string&, const ::AliUID::SUrlInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int ChgWebsiteStatus(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DoAuth(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Int, ::std::string&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace AliUID
{

class IAliUidPsMgr : virtual public ::IceDelegate::AliUID::IAliUidPsMgr,
                     virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int RegisterPassport(const ::std::string&, const ::std::string&, ::Ice::Short, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int AuthPassword(const ::std::string&, const ::std::string&, ::Ice::Short&, const ::Ice::Context*);

    virtual ::Ice::Int AuthToken(const ::std::string&, const ::std::string&, ::Ice::Long, ::std::string&, ::Ice::Short&, const ::Ice::Context*);

    virtual ::Ice::Int GetAuidToken(const ::std::string&, ::std::string&, ::std::string&, ::Ice::Short&, const ::Ice::Context*);

    virtual ::Ice::Int GetAccountInfo(const ::std::string&, ::AliUID::SPassportAccount&, const ::Ice::Context*);

    virtual ::Ice::Int ChangePassportLogin(const ::std::string&, const ::AliUID::SPassportAccount&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int GetProfileByPassport(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateProfileByPassport(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int SetPassportPassword(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int SetPassportStatus(const ::std::string&, ::Ice::Short, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetPassportStatus(const ::std::string&, ::Ice::Short&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetAllService(::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int BindService(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Int UnbindService(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetWebUserService(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::AliUID::SWebBindSeq&, const ::Ice::Context*);

    virtual ::Ice::Int AddWebsite(const ::std::string&, const ::std::string&, const ::std::string&, const ::AliUID::SUrlInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DelWebsite(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int ChgWebsite(const ::std::string&, const ::std::string&, const ::std::string&, const ::AliUID::SUrlInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int ChgWebsiteStatus(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DoAuth(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Int, ::std::string&, const ::Ice::Context*);
};

}

}

namespace AliUID
{

class IAliUidPsMgr : virtual public ::Ice::Object
{
public:

    typedef IAliUidPsMgrPrx ProxyType;
    typedef IAliUidPsMgrPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void RegisterPassport_async(const ::AliUID::AMD_IAliUidPsMgr_RegisterPassportPtr&, const ::std::string&, const ::std::string&, ::Ice::Short, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___RegisterPassport(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void AuthPassword_async(const ::AliUID::AMD_IAliUidPsMgr_AuthPasswordPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AuthPassword(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void AuthToken_async(const ::AliUID::AMD_IAliUidPsMgr_AuthTokenPtr&, const ::std::string&, const ::std::string&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AuthToken(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetAuidToken_async(const ::AliUID::AMD_IAliUidPsMgr_GetAuidTokenPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetAuidToken(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetAccountInfo_async(const ::AliUID::AMD_IAliUidPsMgr_GetAccountInfoPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetAccountInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void ChangePassportLogin_async(const ::AliUID::AMD_IAliUidPsMgr_ChangePassportLoginPtr&, const ::std::string&, const ::AliUID::SPassportAccount&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___ChangePassportLogin(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetProfileByPassport_async(const ::AliUID::AMD_IAliUidPsMgr_GetProfileByPassportPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetProfileByPassport(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateProfileByPassport_async(const ::AliUID::AMD_IAliUidPsMgr_UpdateProfileByPassportPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateProfileByPassport(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void SetPassportPassword_async(const ::AliUID::AMD_IAliUidPsMgr_SetPassportPasswordPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___SetPassportPassword(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void SetPassportStatus_async(const ::AliUID::AMD_IAliUidPsMgr_SetPassportStatusPtr&, const ::std::string&, ::Ice::Short, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___SetPassportStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetPassportStatus_async(const ::AliUID::AMD_IAliUidPsMgr_GetPassportStatusPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetPassportStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetAllService_async(const ::AliUID::AMD_IAliUidPsMgr_GetAllServicePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetAllService(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void BindService_async(const ::AliUID::AMD_IAliUidPsMgr_BindServicePtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___BindService(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UnbindService_async(const ::AliUID::AMD_IAliUidPsMgr_UnbindServicePtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UnbindService(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetWebUserService_async(const ::AliUID::AMD_IAliUidPsMgr_GetWebUserServicePtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetWebUserService(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void AddWebsite_async(const ::AliUID::AMD_IAliUidPsMgr_AddWebsitePtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::AliUID::SUrlInfoSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddWebsite(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void DelWebsite_async(const ::AliUID::AMD_IAliUidPsMgr_DelWebsitePtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DelWebsite(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void ChgWebsite_async(const ::AliUID::AMD_IAliUidPsMgr_ChgWebsitePtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::AliUID::SUrlInfoSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___ChgWebsite(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void ChgWebsiteStatus_async(const ::AliUID::AMD_IAliUidPsMgr_ChgWebsiteStatusPtr&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___ChgWebsiteStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void DoAuth_async(const ::AliUID::AMD_IAliUidPsMgr_DoAuthPtr&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DoAuth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__IAliUidPsMgrPtr(void*, ::Ice::ObjectPtr&);

}

#endif
