// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `authservice.ice'

#ifndef __authservice_h__
#define __authservice_h__

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

namespace AuthService
{

class AuthSrvMgr;
bool operator==(const AuthSrvMgr&, const AuthSrvMgr&);
bool operator!=(const AuthSrvMgr&, const AuthSrvMgr&);
bool operator<(const AuthSrvMgr&, const AuthSrvMgr&);
bool operator<=(const AuthSrvMgr&, const AuthSrvMgr&);
bool operator>(const AuthSrvMgr&, const AuthSrvMgr&);
bool operator>=(const AuthSrvMgr&, const AuthSrvMgr&);

}

}

namespace AuthService
{

class AuthSrvMgr;
bool operator==(const AuthSrvMgr&, const AuthSrvMgr&);
bool operator!=(const AuthSrvMgr&, const AuthSrvMgr&);
bool operator<(const AuthSrvMgr&, const AuthSrvMgr&);
bool operator<=(const AuthSrvMgr&, const AuthSrvMgr&);
bool operator>(const AuthSrvMgr&, const AuthSrvMgr&);
bool operator>=(const AuthSrvMgr&, const AuthSrvMgr&);

}

namespace IceInternal
{

void incRef(::AuthService::AuthSrvMgr*);
void decRef(::AuthService::AuthSrvMgr*);

void incRef(::IceProxy::AuthService::AuthSrvMgr*);
void decRef(::IceProxy::AuthService::AuthSrvMgr*);

}

namespace AuthService
{

typedef ::IceInternal::Handle< ::AuthService::AuthSrvMgr> AuthSrvMgrPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::AuthService::AuthSrvMgr> AuthSrvMgrPrx;

void __write(::IceInternal::BasicStream*, const AuthSrvMgrPrx&);
void __read(::IceInternal::BasicStream*, AuthSrvMgrPrx&);
void __write(::IceInternal::BasicStream*, const AuthSrvMgrPtr&);
void __patch__AuthSrvMgrPtr(void*, ::Ice::ObjectPtr&);

void __addObject(const AuthSrvMgrPtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const AuthSrvMgrPtr&);
void __decRefUnsafe(const AuthSrvMgrPtr&);
void __clearHandleUnsafe(AuthSrvMgrPtr&);

}

namespace AuthService
{

}

namespace IceProxy
{

namespace AuthService
{

class AuthSrvMgr : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int AddUser(const ::std::string& userId)
    {
        return AddUser(userId, 0);
    }
    ::Ice::Int AddUser(const ::std::string& userId, const ::Ice::Context& __ctx)
    {
        return AddUser(userId, &__ctx);
    }
    
private:

    ::Ice::Int AddUser(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DelUser(const ::std::string& userId)
    {
        return DelUser(userId, 0);
    }
    ::Ice::Int DelUser(const ::std::string& userId, const ::Ice::Context& __ctx)
    {
        return DelUser(userId, &__ctx);
    }
    
private:

    ::Ice::Int DelUser(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int CheckUser(const ::std::string& userId)
    {
        return CheckUser(userId, 0);
    }
    ::Ice::Int CheckUser(const ::std::string& userId, const ::Ice::Context& __ctx)
    {
        return CheckUser(userId, &__ctx);
    }
    
private:

    ::Ice::Int CheckUser(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int ForbiddenUser(const ::std::string& userId, ::Ice::Int interval)
    {
        return ForbiddenUser(userId, interval, 0);
    }
    ::Ice::Int ForbiddenUser(const ::std::string& userId, ::Ice::Int interval, const ::Ice::Context& __ctx)
    {
        return ForbiddenUser(userId, interval, &__ctx);
    }
    
private:

    ::Ice::Int ForbiddenUser(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int PermitUser(const ::std::string& userId)
    {
        return PermitUser(userId, 0);
    }
    ::Ice::Int PermitUser(const ::std::string& userId, const ::Ice::Context& __ctx)
    {
        return PermitUser(userId, &__ctx);
    }
    
private:

    ::Ice::Int PermitUser(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetForbiddenUser(const ::std::string& userId, ::Ice::Int& begin, ::Ice::Int& interval)
    {
        return GetForbiddenUser(userId, begin, interval, 0);
    }
    ::Ice::Int GetForbiddenUser(const ::std::string& userId, ::Ice::Int& begin, ::Ice::Int& interval, const ::Ice::Context& __ctx)
    {
        return GetForbiddenUser(userId, begin, interval, &__ctx);
    }
    
private:

    ::Ice::Int GetForbiddenUser(const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
    
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

namespace AuthService
{

class AuthSrvMgr : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int AddUser(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DelUser(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int CheckUser(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int ForbiddenUser(const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int PermitUser(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetForbiddenUser(const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace AuthService
{

class AuthSrvMgr : virtual public ::IceDelegate::AuthService::AuthSrvMgr,
                   virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int AddUser(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DelUser(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int CheckUser(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int ForbiddenUser(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int PermitUser(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetForbiddenUser(const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace AuthService
{

class AuthSrvMgr : virtual public ::IceDelegate::AuthService::AuthSrvMgr,
                   virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int AddUser(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DelUser(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int CheckUser(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int ForbiddenUser(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int PermitUser(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetForbiddenUser(const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
};

}

}

namespace AuthService
{

class AuthSrvMgr : virtual public ::Ice::Object
{
public:

    typedef AuthSrvMgrPrx ProxyType;
    typedef AuthSrvMgrPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int AddUser(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DelUser(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DelUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int CheckUser(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___CheckUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int ForbiddenUser(const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___ForbiddenUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int PermitUser(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___PermitUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetForbiddenUser(const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetForbiddenUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__AuthSrvMgrPtr(void*, ::Ice::ObjectPtr&);

}

#endif
