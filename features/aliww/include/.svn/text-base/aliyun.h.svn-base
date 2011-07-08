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

#ifndef __aliyun_h__
#define __aliyun_h__

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

namespace AliYun
{

class accountInterface;
bool operator==(const accountInterface&, const accountInterface&);
bool operator!=(const accountInterface&, const accountInterface&);
bool operator<(const accountInterface&, const accountInterface&);
bool operator<=(const accountInterface&, const accountInterface&);
bool operator>(const accountInterface&, const accountInterface&);
bool operator>=(const accountInterface&, const accountInterface&);

}

}

namespace AliYun
{

class accountInterface;
bool operator==(const accountInterface&, const accountInterface&);
bool operator!=(const accountInterface&, const accountInterface&);
bool operator<(const accountInterface&, const accountInterface&);
bool operator<=(const accountInterface&, const accountInterface&);
bool operator>(const accountInterface&, const accountInterface&);
bool operator>=(const accountInterface&, const accountInterface&);

}

namespace IceInternal
{

void incRef(::AliYun::accountInterface*);
void decRef(::AliYun::accountInterface*);

void incRef(::IceProxy::AliYun::accountInterface*);
void decRef(::IceProxy::AliYun::accountInterface*);

}

namespace AliYun
{

typedef ::IceInternal::Handle< ::AliYun::accountInterface> accountInterfacePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::AliYun::accountInterface> accountInterfacePrx;

void __write(::IceInternal::BasicStream*, const accountInterfacePrx&);
void __read(::IceInternal::BasicStream*, accountInterfacePrx&);
void __write(::IceInternal::BasicStream*, const accountInterfacePtr&);
void __patch__accountInterfacePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const accountInterfacePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const accountInterfacePtr&);
void __decRefUnsafe(const accountInterfacePtr&);
void __clearHandleUnsafe(accountInterfacePtr&);

}

namespace AliYun
{

typedef ::std::map< ::std::string, ::std::string> KVMap;

class __U__KVMap { };
void __write(::IceInternal::BasicStream*, const KVMap&, __U__KVMap);
void __read(::IceInternal::BasicStream*, KVMap&, __U__KVMap);

struct callerInfo
{
    ::std::string callId;
    ::std::string passwd;
    ::Ice::Int version;
    ::std::string encode;

    bool operator==(const callerInfo&) const;
    bool operator!=(const callerInfo&) const;
    bool operator<(const callerInfo&) const;
    bool operator<=(const callerInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const callerInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const callerInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

}

namespace IceProxy
{

namespace AliYun
{

class accountInterface : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int registerMember(const ::AliYun::callerInfo& caller, const ::std::string& email, const ::std::string& mobileNo, const ::std::string& passwd, ::std::string& udbUserId)
    {
        return registerMember(caller, email, mobileNo, passwd, udbUserId, 0);
    }
    ::Ice::Int registerMember(const ::AliYun::callerInfo& caller, const ::std::string& email, const ::std::string& mobileNo, const ::std::string& passwd, ::std::string& udbUserId, const ::Ice::Context& __ctx)
    {
        return registerMember(caller, email, mobileNo, passwd, udbUserId, &__ctx);
    }
    
private:

    ::Ice::Int registerMember(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int checkExist(const ::AliYun::callerInfo& caller, const ::std::string& email, const ::std::string& mobileNo)
    {
        return checkExist(caller, email, mobileNo, 0);
    }
    ::Ice::Int checkExist(const ::AliYun::callerInfo& caller, const ::std::string& email, const ::std::string& mobileNo, const ::Ice::Context& __ctx)
    {
        return checkExist(caller, email, mobileNo, &__ctx);
    }
    
private:

    ::Ice::Int checkExist(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int chgLoginMail(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::std::string& email)
    {
        return chgLoginMail(caller, loginId, email, 0);
    }
    ::Ice::Int chgLoginMail(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::std::string& email, const ::Ice::Context& __ctx)
    {
        return chgLoginMail(caller, loginId, email, &__ctx);
    }
    
private:

    ::Ice::Int chgLoginMail(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int chgLoginMobile(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::std::string& mobileNo)
    {
        return chgLoginMobile(caller, loginId, mobileNo, 0);
    }
    ::Ice::Int chgLoginMobile(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::std::string& mobileNo, const ::Ice::Context& __ctx)
    {
        return chgLoginMobile(caller, loginId, mobileNo, &__ctx);
    }
    
private:

    ::Ice::Int chgLoginMobile(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int removeUser(const ::AliYun::callerInfo& caller, const ::std::string& loginId)
    {
        return removeUser(caller, loginId, 0);
    }
    ::Ice::Int removeUser(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::Ice::Context& __ctx)
    {
        return removeUser(caller, loginId, &__ctx);
    }
    
private:

    ::Ice::Int removeUser(const ::AliYun::callerInfo&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int checkUser(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::std::string& passwd)
    {
        return checkUser(caller, loginId, passwd, 0);
    }
    ::Ice::Int checkUser(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::std::string& passwd, const ::Ice::Context& __ctx)
    {
        return checkUser(caller, loginId, passwd, &__ctx);
    }
    
private:

    ::Ice::Int checkUser(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserProfile(const ::AliYun::callerInfo& caller, const ::std::string& loginId, ::AliYun::KVMap& userProfile)
    {
        return getUserProfile(caller, loginId, userProfile, 0);
    }
    ::Ice::Int getUserProfile(const ::AliYun::callerInfo& caller, const ::std::string& loginId, ::AliYun::KVMap& userProfile, const ::Ice::Context& __ctx)
    {
        return getUserProfile(caller, loginId, userProfile, &__ctx);
    }
    
private:

    ::Ice::Int getUserProfile(const ::AliYun::callerInfo&, const ::std::string&, ::AliYun::KVMap&, const ::Ice::Context*);
    
public:

    ::Ice::Int setUserProfile(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::AliYun::KVMap& userProfile)
    {
        return setUserProfile(caller, loginId, userProfile, 0);
    }
    ::Ice::Int setUserProfile(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::AliYun::KVMap& userProfile, const ::Ice::Context& __ctx)
    {
        return setUserProfile(caller, loginId, userProfile, &__ctx);
    }
    
private:

    ::Ice::Int setUserProfile(const ::AliYun::callerInfo&, const ::std::string&, const ::AliYun::KVMap&, const ::Ice::Context*);
    
public:

    ::Ice::Int setUserPasswd(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::std::string& passwd)
    {
        return setUserPasswd(caller, loginId, passwd, 0);
    }
    ::Ice::Int setUserPasswd(const ::AliYun::callerInfo& caller, const ::std::string& loginId, const ::std::string& passwd, const ::Ice::Context& __ctx)
    {
        return setUserPasswd(caller, loginId, passwd, &__ctx);
    }
    
private:

    ::Ice::Int setUserPasswd(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int setUserStatus(const ::AliYun::callerInfo& caller, const ::std::string& loginId, ::Ice::Int status)
    {
        return setUserStatus(caller, loginId, status, 0);
    }
    ::Ice::Int setUserStatus(const ::AliYun::callerInfo& caller, const ::std::string& loginId, ::Ice::Int status, const ::Ice::Context& __ctx)
    {
        return setUserStatus(caller, loginId, status, &__ctx);
    }
    
private:

    ::Ice::Int setUserStatus(const ::AliYun::callerInfo&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int GetLoginInfo(const ::AliYun::callerInfo& caller, const ::std::string& loginId, ::std::string& passwd, ::Ice::Int& status, ::std::string& userdata)
    {
        return GetLoginInfo(caller, loginId, passwd, status, userdata, 0);
    }
    ::Ice::Int GetLoginInfo(const ::AliYun::callerInfo& caller, const ::std::string& loginId, ::std::string& passwd, ::Ice::Int& status, ::std::string& userdata, const ::Ice::Context& __ctx)
    {
        return GetLoginInfo(caller, loginId, passwd, status, userdata, &__ctx);
    }
    
private:

    ::Ice::Int GetLoginInfo(const ::AliYun::callerInfo&, const ::std::string&, ::std::string&, ::Ice::Int&, ::std::string&, const ::Ice::Context*);
    
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

namespace AliYun
{

class accountInterface : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int registerMember(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int checkExist(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int chgLoginMail(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int chgLoginMobile(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int removeUser(const ::AliYun::callerInfo&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int checkUser(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserProfile(const ::AliYun::callerInfo&, const ::std::string&, ::AliYun::KVMap&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int setUserProfile(const ::AliYun::callerInfo&, const ::std::string&, const ::AliYun::KVMap&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int setUserPasswd(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int setUserStatus(const ::AliYun::callerInfo&, const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetLoginInfo(const ::AliYun::callerInfo&, const ::std::string&, ::std::string&, ::Ice::Int&, ::std::string&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace AliYun
{

class accountInterface : virtual public ::IceDelegate::AliYun::accountInterface,
                         virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int registerMember(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int checkExist(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int chgLoginMail(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int chgLoginMobile(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int removeUser(const ::AliYun::callerInfo&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int checkUser(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getUserProfile(const ::AliYun::callerInfo&, const ::std::string&, ::AliYun::KVMap&, const ::Ice::Context*);

    virtual ::Ice::Int setUserProfile(const ::AliYun::callerInfo&, const ::std::string&, const ::AliYun::KVMap&, const ::Ice::Context*);

    virtual ::Ice::Int setUserPasswd(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int setUserStatus(const ::AliYun::callerInfo&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int GetLoginInfo(const ::AliYun::callerInfo&, const ::std::string&, ::std::string&, ::Ice::Int&, ::std::string&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace AliYun
{

class accountInterface : virtual public ::IceDelegate::AliYun::accountInterface,
                         virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int registerMember(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int checkExist(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int chgLoginMail(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int chgLoginMobile(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int removeUser(const ::AliYun::callerInfo&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int checkUser(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getUserProfile(const ::AliYun::callerInfo&, const ::std::string&, ::AliYun::KVMap&, const ::Ice::Context*);

    virtual ::Ice::Int setUserProfile(const ::AliYun::callerInfo&, const ::std::string&, const ::AliYun::KVMap&, const ::Ice::Context*);

    virtual ::Ice::Int setUserPasswd(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int setUserStatus(const ::AliYun::callerInfo&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int GetLoginInfo(const ::AliYun::callerInfo&, const ::std::string&, ::std::string&, ::Ice::Int&, ::std::string&, const ::Ice::Context*);
};

}

}

namespace AliYun
{

class accountInterface : virtual public ::Ice::Object
{
public:

    typedef accountInterfacePrx ProxyType;
    typedef accountInterfacePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int registerMember(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___registerMember(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int checkExist(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___checkExist(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int chgLoginMail(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___chgLoginMail(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int chgLoginMobile(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___chgLoginMobile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int removeUser(const ::AliYun::callerInfo&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___removeUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int checkUser(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___checkUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUserProfile(const ::AliYun::callerInfo&, const ::std::string&, ::AliYun::KVMap&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserProfile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int setUserProfile(const ::AliYun::callerInfo&, const ::std::string&, const ::AliYun::KVMap&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___setUserProfile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int setUserPasswd(const ::AliYun::callerInfo&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___setUserPasswd(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int setUserStatus(const ::AliYun::callerInfo&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___setUserStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetLoginInfo(const ::AliYun::callerInfo&, const ::std::string&, ::std::string&, ::Ice::Int&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetLoginInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__accountInterfacePtr(void*, ::Ice::ObjectPtr&);

}

#endif
