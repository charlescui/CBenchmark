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

#ifndef __aliuidpsserv_sync_h__
#define __aliuidpsserv_sync_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/Incoming.h>
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

class IAliUidPsMgrSync;
bool operator==(const IAliUidPsMgrSync&, const IAliUidPsMgrSync&);
bool operator!=(const IAliUidPsMgrSync&, const IAliUidPsMgrSync&);
bool operator<(const IAliUidPsMgrSync&, const IAliUidPsMgrSync&);
bool operator<=(const IAliUidPsMgrSync&, const IAliUidPsMgrSync&);
bool operator>(const IAliUidPsMgrSync&, const IAliUidPsMgrSync&);
bool operator>=(const IAliUidPsMgrSync&, const IAliUidPsMgrSync&);

}

}

namespace AliUID
{

class IAliUidPsMgrSync;
bool operator==(const IAliUidPsMgrSync&, const IAliUidPsMgrSync&);
bool operator!=(const IAliUidPsMgrSync&, const IAliUidPsMgrSync&);
bool operator<(const IAliUidPsMgrSync&, const IAliUidPsMgrSync&);
bool operator<=(const IAliUidPsMgrSync&, const IAliUidPsMgrSync&);
bool operator>(const IAliUidPsMgrSync&, const IAliUidPsMgrSync&);
bool operator>=(const IAliUidPsMgrSync&, const IAliUidPsMgrSync&);

}

namespace IceInternal
{

void incRef(::AliUID::IAliUidPsMgrSync*);
void decRef(::AliUID::IAliUidPsMgrSync*);

void incRef(::IceProxy::AliUID::IAliUidPsMgrSync*);
void decRef(::IceProxy::AliUID::IAliUidPsMgrSync*);

}

namespace AliUID
{

typedef ::IceInternal::Handle< ::AliUID::IAliUidPsMgrSync> IAliUidPsMgrSyncPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::AliUID::IAliUidPsMgrSync> IAliUidPsMgrSyncPrx;

void __write(::IceInternal::BasicStream*, const IAliUidPsMgrSyncPrx&);
void __read(::IceInternal::BasicStream*, IAliUidPsMgrSyncPrx&);
void __write(::IceInternal::BasicStream*, const IAliUidPsMgrSyncPtr&);
void __patch__IAliUidPsMgrSyncPtr(void*, ::Ice::ObjectPtr&);

void __addObject(const IAliUidPsMgrSyncPtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const IAliUidPsMgrSyncPtr&);
void __decRefUnsafe(const IAliUidPsMgrSyncPtr&);
void __clearHandleUnsafe(IAliUidPsMgrSyncPtr&);

}

namespace AliUID
{

}

namespace IceProxy
{

namespace AliUID
{

class IAliUidPsMgrSync : virtual public ::IceProxy::Ice::Object
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

    ::Ice::Int AddWebsite(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& name, const ::std::string& baseUrl, const ::std::string& trustUrl)
    {
        return AddWebsite(serviceId, webId, name, baseUrl, trustUrl, 0);
    }
    ::Ice::Int AddWebsite(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& name, const ::std::string& baseUrl, const ::std::string& trustUrl, const ::Ice::Context& __ctx)
    {
        return AddWebsite(serviceId, webId, name, baseUrl, trustUrl, &__ctx);
    }
    
private:

    ::Ice::Int AddWebsite(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
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

    ::Ice::Int ChgWebsite(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& name, const ::std::string& baseUrl, const ::std::string& trustUrl)
    {
        return ChgWebsite(serviceId, webId, name, baseUrl, trustUrl, 0);
    }
    ::Ice::Int ChgWebsite(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& name, const ::std::string& baseUrl, const ::std::string& trustUrl, const ::Ice::Context& __ctx)
    {
        return ChgWebsite(serviceId, webId, name, baseUrl, trustUrl, &__ctx);
    }
    
private:

    ::Ice::Int ChgWebsite(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
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

class IAliUidPsMgrSync : virtual public ::IceDelegate::Ice::Object
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

    virtual ::Ice::Int GetWebUserService(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::AliUID::SWebBindSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddWebsite(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DelWebsite(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int ChgWebsite(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int ChgWebsiteStatus(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace AliUID
{

class IAliUidPsMgrSync : virtual public ::IceDelegate::AliUID::IAliUidPsMgrSync,
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

    virtual ::Ice::Int GetWebUserService(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::AliUID::SWebBindSeq&, const ::Ice::Context*);

    virtual ::Ice::Int AddWebsite(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DelWebsite(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int ChgWebsite(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int ChgWebsiteStatus(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace AliUID
{

class IAliUidPsMgrSync : virtual public ::IceDelegate::AliUID::IAliUidPsMgrSync,
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

    virtual ::Ice::Int GetWebUserService(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::AliUID::SWebBindSeq&, const ::Ice::Context*);

    virtual ::Ice::Int AddWebsite(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DelWebsite(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int ChgWebsite(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int ChgWebsiteStatus(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
};

}

}

namespace AliUID
{

class IAliUidPsMgrSync : virtual public ::Ice::Object
{
public:

    typedef IAliUidPsMgrSyncPrx ProxyType;
    typedef IAliUidPsMgrSyncPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int RegisterPassport(const ::std::string&, const ::std::string&, ::Ice::Short, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___RegisterPassport(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int AuthPassword(const ::std::string&, const ::std::string&, ::Ice::Short&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AuthPassword(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int AuthToken(const ::std::string&, const ::std::string&, ::Ice::Long, ::std::string&, ::Ice::Short&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AuthToken(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetAuidToken(const ::std::string&, ::std::string&, ::std::string&, ::Ice::Short&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetAuidToken(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetAccountInfo(const ::std::string&, ::AliUID::SPassportAccount&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetAccountInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int ChangePassportLogin(const ::std::string&, const ::AliUID::SPassportAccount&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___ChangePassportLogin(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetProfileByPassport(const ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetProfileByPassport(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int UpdateProfileByPassport(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateProfileByPassport(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int SetPassportPassword(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___SetPassportPassword(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int SetPassportStatus(const ::std::string&, ::Ice::Short, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___SetPassportStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetPassportStatus(const ::std::string&, ::Ice::Short&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetPassportStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetAllService(::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetAllService(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetWebUserService(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::AliUID::SWebBindSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetWebUserService(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int AddWebsite(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddWebsite(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DelWebsite(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DelWebsite(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int ChgWebsite(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___ChgWebsite(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int ChgWebsiteStatus(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___ChgWebsiteStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__IAliUidPsMgrSyncPtr(void*, ::Ice::ObjectPtr&);

}

#endif
