// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `alliWebMember.ice'

#ifndef __alliWebMember_h__
#define __alliWebMember_h__

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

namespace alliWebMember
{

class UserProfile;
bool operator==(const UserProfile&, const UserProfile&);
bool operator!=(const UserProfile&, const UserProfile&);
bool operator<(const UserProfile&, const UserProfile&);
bool operator<=(const UserProfile&, const UserProfile&);
bool operator>(const UserProfile&, const UserProfile&);
bool operator>=(const UserProfile&, const UserProfile&);

}

}

namespace alliWebMember
{

class UserProfile;
bool operator==(const UserProfile&, const UserProfile&);
bool operator!=(const UserProfile&, const UserProfile&);
bool operator<(const UserProfile&, const UserProfile&);
bool operator<=(const UserProfile&, const UserProfile&);
bool operator>(const UserProfile&, const UserProfile&);
bool operator>=(const UserProfile&, const UserProfile&);

}

namespace IceInternal
{

void incRef(::alliWebMember::UserProfile*);
void decRef(::alliWebMember::UserProfile*);

void incRef(::IceProxy::alliWebMember::UserProfile*);
void decRef(::IceProxy::alliWebMember::UserProfile*);

}

namespace alliWebMember
{

typedef ::IceInternal::Handle< ::alliWebMember::UserProfile> UserProfilePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::alliWebMember::UserProfile> UserProfilePrx;

void __write(::IceInternal::BasicStream*, const UserProfilePrx&);
void __read(::IceInternal::BasicStream*, UserProfilePrx&);
void __write(::IceInternal::BasicStream*, const UserProfilePtr&);
void __patch__UserProfilePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const UserProfilePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const UserProfilePtr&);
void __decRefUnsafe(const UserProfilePtr&);
void __clearHandleUnsafe(UserProfilePtr&);

}

namespace alliWebMember
{

struct SWebUserInfo
{
    ::std::string uid;
    ::std::string name;
    ::std::string rawpasswd;
    ::std::string md5passwd;
    ::std::string email;
    ::std::string mobileno;
    ::std::string phoneno;
    ::std::string company;
    ::std::string jobtitle;
    ::std::string birthday;
    ::std::string sex;
    ::std::string country;
    ::std::string province;
    ::std::string city;
    ::std::string address;

    bool operator==(const SWebUserInfo&) const;
    bool operator!=(const SWebUserInfo&) const;
    bool operator<(const SWebUserInfo&) const;
    bool operator<=(const SWebUserInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SWebUserInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SWebUserInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::alliWebMember::SWebUserInfo> SUserSeq;

class __U__SUserSeq { };
void __write(::IceInternal::BasicStream*, const ::alliWebMember::SWebUserInfo*, const ::alliWebMember::SWebUserInfo*, __U__SUserSeq);
void __read(::IceInternal::BasicStream*, SUserSeq&, __U__SUserSeq);

}

namespace IceProxy
{

namespace alliWebMember
{

class UserProfile : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int GetWebMemberInfo(const ::std::string& uid, ::alliWebMember::SWebUserInfo& userInfo)
    {
        return GetWebMemberInfo(uid, userInfo, 0);
    }
    ::Ice::Int GetWebMemberInfo(const ::std::string& uid, ::alliWebMember::SWebUserInfo& userInfo, const ::Ice::Context& __ctx)
    {
        return GetWebMemberInfo(uid, userInfo, &__ctx);
    }
    
private:

    ::Ice::Int GetWebMemberInfo(const ::std::string&, ::alliWebMember::SWebUserInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int getWanghaoBindedWebId(const ::std::string& passportid, ::std::string& webloginId)
    {
        return getWanghaoBindedWebId(passportid, webloginId, 0);
    }
    ::Ice::Int getWanghaoBindedWebId(const ::std::string& passportid, ::std::string& webloginId, const ::Ice::Context& __ctx)
    {
        return getWanghaoBindedWebId(passportid, webloginId, &__ctx);
    }
    
private:

    ::Ice::Int getWanghaoBindedWebId(const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int CheckWebMemberPWInfo(const ::std::string& uid, const ::std::string& password, ::std::string& retmd5pw, ::std::string& rettoken)
    {
        return CheckWebMemberPWInfo(uid, password, retmd5pw, rettoken, 0);
    }
    ::Ice::Int CheckWebMemberPWInfo(const ::std::string& uid, const ::std::string& password, ::std::string& retmd5pw, ::std::string& rettoken, const ::Ice::Context& __ctx)
    {
        return CheckWebMemberPWInfo(uid, password, retmd5pw, rettoken, &__ctx);
    }
    
private:

    ::Ice::Int CheckWebMemberPWInfo(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);
    
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

namespace alliWebMember
{

class UserProfile : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int GetWebMemberInfo(const ::std::string&, ::alliWebMember::SWebUserInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getWanghaoBindedWebId(const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int CheckWebMemberPWInfo(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace alliWebMember
{

class UserProfile : virtual public ::IceDelegate::alliWebMember::UserProfile,
                    virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int GetWebMemberInfo(const ::std::string&, ::alliWebMember::SWebUserInfo&, const ::Ice::Context*);

    virtual ::Ice::Int getWanghaoBindedWebId(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int CheckWebMemberPWInfo(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace alliWebMember
{

class UserProfile : virtual public ::IceDelegate::alliWebMember::UserProfile,
                    virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int GetWebMemberInfo(const ::std::string&, ::alliWebMember::SWebUserInfo&, const ::Ice::Context*);

    virtual ::Ice::Int getWanghaoBindedWebId(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int CheckWebMemberPWInfo(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);
};

}

}

namespace alliWebMember
{

class UserProfile : virtual public ::Ice::Object
{
public:

    typedef UserProfilePrx ProxyType;
    typedef UserProfilePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int GetWebMemberInfo(const ::std::string&, ::alliWebMember::SWebUserInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetWebMemberInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getWanghaoBindedWebId(const ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getWanghaoBindedWebId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int CheckWebMemberPWInfo(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___CheckWebMemberPWInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__UserProfilePtr(void*, ::Ice::ObjectPtr&);

}

#endif
