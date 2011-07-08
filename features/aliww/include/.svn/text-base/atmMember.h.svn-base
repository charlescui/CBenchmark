// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `atmMember.ice'

#ifndef __atmMember_h__
#define __atmMember_h__

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

namespace atmWebMember
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

namespace atmWebMember
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

void incRef(::atmWebMember::UserProfile*);
void decRef(::atmWebMember::UserProfile*);

void incRef(::IceProxy::atmWebMember::UserProfile*);
void decRef(::IceProxy::atmWebMember::UserProfile*);

}

namespace atmWebMember
{

typedef ::IceInternal::Handle< ::atmWebMember::UserProfile> UserProfilePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::atmWebMember::UserProfile> UserProfilePrx;

void __write(::IceInternal::BasicStream*, const UserProfilePrx&);
void __read(::IceInternal::BasicStream*, UserProfilePrx&);
void __write(::IceInternal::BasicStream*, const UserProfilePtr&);
void __patch__UserProfilePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const UserProfilePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const UserProfilePtr&);
void __decRefUnsafe(const UserProfilePtr&);
void __clearHandleUnsafe(UserProfilePtr&);

}

namespace atmWebMember
{

struct sBasicProfile
{
    ::std::string longid;
    ::Ice::Int isExist;
    ::std::string status;
    ::std::string username;
    ::std::string password;
    ::std::string companyname;
    ::std::string jobTitle;
    ::std::string oldOverseaLevel;
    ::std::string oldGslevel;
    ::std::string memberLevel;
    ::Ice::Int categoryids;
    ::std::string area;
    ::std::string country;
    ::Ice::Int companyId;

    bool operator==(const sBasicProfile&) const;
    bool operator!=(const sBasicProfile&) const;
    bool operator<(const sBasicProfile&) const;
    bool operator<=(const sBasicProfile& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const sBasicProfile& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const sBasicProfile& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct sUdbData
{
    ::std::string longid;
    ::Ice::Int isExist;
    ::std::string status;
    ::std::string password;
    ::std::string username;
    ::std::string country;
    ::std::string companyname;
    ::std::string jobTitle;
    ::std::string email;
    ::std::string zip;
    ::std::string address;
    ::std::string phone;
    ::std::string mobilephone;
    ::std::string prov;
    ::std::string city;
    ::std::string usergender;
    ::std::string companyaddress;
    ::std::string companyfax;
    ::std::string companyzip;
    ::std::string companyemail;
    ::std::string companyurl;
    ::std::string purchase;
    ::std::string provide;
    ::std::string department;

    bool operator==(const sUdbData&) const;
    bool operator!=(const sUdbData&) const;
    bool operator<(const sUdbData&) const;
    bool operator<=(const sUdbData& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const sUdbData& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const sUdbData& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct sContactInfo
{
    ::std::string longid;
    ::Ice::Int isExist;
    ::std::string firstname;
    ::std::string lastname;
    ::std::string country;
    ::Ice::Int companyId;
    ::std::string companyname;
    ::std::string companyaddress;
    ::std::string companyZip;
    ::std::string homepageUrl;
    ::std::string bizType;
    ::std::string provideProducts;
    ::std::string jobTitle;
    ::Ice::Int categoryids;
    ::std::string email;
    ::std::string phone;
    ::std::string faxNumber;
    ::std::string mobilephone;
    ::std::string usergender;

    bool operator==(const sContactInfo&) const;
    bool operator!=(const sContactInfo&) const;
    bool operator<(const sContactInfo&) const;
    bool operator<=(const sContactInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const sContactInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const sContactInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SBLoginInfo
{
    ::std::string longid;
    ::Ice::Int isExist;
    ::std::string status;
    ::std::string passwd;
    ::std::string email;
    ::std::string seq;

    bool operator==(const SBLoginInfo&) const;
    bool operator!=(const SBLoginInfo&) const;
    bool operator<(const SBLoginInfo&) const;
    bool operator<=(const SBLoginInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SBLoginInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SBLoginInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

}

namespace IceProxy
{

namespace atmWebMember
{

class UserProfile : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int GetUserPwd(const ::std::string& uid, ::atmWebMember::SBLoginInfo& pwdinfo)
    {
        return GetUserPwd(uid, pwdinfo, 0);
    }
    ::Ice::Int GetUserPwd(const ::std::string& uid, ::atmWebMember::SBLoginInfo& pwdinfo, const ::Ice::Context& __ctx)
    {
        return GetUserPwd(uid, pwdinfo, &__ctx);
    }
    
private:

    ::Ice::Int GetUserPwd(const ::std::string&, ::atmWebMember::SBLoginInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUDBData(const ::std::string& uid, ::atmWebMember::sUdbData& udbInfo)
    {
        return GetUDBData(uid, udbInfo, 0);
    }
    ::Ice::Int GetUDBData(const ::std::string& uid, ::atmWebMember::sUdbData& udbInfo, const ::Ice::Context& __ctx)
    {
        return GetUDBData(uid, udbInfo, &__ctx);
    }
    
private:

    ::Ice::Int GetUDBData(const ::std::string&, ::atmWebMember::sUdbData&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetBasicProfile(const ::std::string& uid, ::atmWebMember::sBasicProfile& info)
    {
        return GetBasicProfile(uid, info, 0);
    }
    ::Ice::Int GetBasicProfile(const ::std::string& uid, ::atmWebMember::sBasicProfile& info, const ::Ice::Context& __ctx)
    {
        return GetBasicProfile(uid, info, &__ctx);
    }
    
private:

    ::Ice::Int GetBasicProfile(const ::std::string&, ::atmWebMember::sBasicProfile&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetContactInfo(const ::std::string& uid, ::atmWebMember::sContactInfo& cinfo)
    {
        return GetContactInfo(uid, cinfo, 0);
    }
    ::Ice::Int GetContactInfo(const ::std::string& uid, ::atmWebMember::sContactInfo& cinfo, const ::Ice::Context& __ctx)
    {
        return GetContactInfo(uid, cinfo, &__ctx);
    }
    
private:

    ::Ice::Int GetContactInfo(const ::std::string&, ::atmWebMember::sContactInfo&, const ::Ice::Context*);
    
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

namespace atmWebMember
{

class UserProfile : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int GetUserPwd(const ::std::string&, ::atmWebMember::SBLoginInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUDBData(const ::std::string&, ::atmWebMember::sUdbData&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetBasicProfile(const ::std::string&, ::atmWebMember::sBasicProfile&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetContactInfo(const ::std::string&, ::atmWebMember::sContactInfo&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace atmWebMember
{

class UserProfile : virtual public ::IceDelegate::atmWebMember::UserProfile,
                    virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int GetUserPwd(const ::std::string&, ::atmWebMember::SBLoginInfo&, const ::Ice::Context*);

    virtual ::Ice::Int GetUDBData(const ::std::string&, ::atmWebMember::sUdbData&, const ::Ice::Context*);

    virtual ::Ice::Int GetBasicProfile(const ::std::string&, ::atmWebMember::sBasicProfile&, const ::Ice::Context*);

    virtual ::Ice::Int GetContactInfo(const ::std::string&, ::atmWebMember::sContactInfo&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace atmWebMember
{

class UserProfile : virtual public ::IceDelegate::atmWebMember::UserProfile,
                    virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int GetUserPwd(const ::std::string&, ::atmWebMember::SBLoginInfo&, const ::Ice::Context*);

    virtual ::Ice::Int GetUDBData(const ::std::string&, ::atmWebMember::sUdbData&, const ::Ice::Context*);

    virtual ::Ice::Int GetBasicProfile(const ::std::string&, ::atmWebMember::sBasicProfile&, const ::Ice::Context*);

    virtual ::Ice::Int GetContactInfo(const ::std::string&, ::atmWebMember::sContactInfo&, const ::Ice::Context*);
};

}

}

namespace atmWebMember
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

    virtual ::Ice::Int GetUserPwd(const ::std::string&, ::atmWebMember::SBLoginInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserPwd(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetUDBData(const ::std::string&, ::atmWebMember::sUdbData&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUDBData(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetBasicProfile(const ::std::string&, ::atmWebMember::sBasicProfile&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetBasicProfile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetContactInfo(const ::std::string&, ::atmWebMember::sContactInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetContactInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__UserProfilePtr(void*, ::Ice::ObjectPtr&);

}

#endif
