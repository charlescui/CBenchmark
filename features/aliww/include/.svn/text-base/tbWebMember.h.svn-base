// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `tbWebMember.ice'

#ifndef __tbWebMember_h__
#define __tbWebMember_h__

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

namespace tbWebMember
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

namespace tbWebMember
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

void incRef(::tbWebMember::UserProfile*);
void decRef(::tbWebMember::UserProfile*);

void incRef(::IceProxy::tbWebMember::UserProfile*);
void decRef(::IceProxy::tbWebMember::UserProfile*);

}

namespace tbWebMember
{

typedef ::IceInternal::Handle< ::tbWebMember::UserProfile> UserProfilePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::tbWebMember::UserProfile> UserProfilePrx;

void __write(::IceInternal::BasicStream*, const UserProfilePrx&);
void __read(::IceInternal::BasicStream*, UserProfilePrx&);
void __write(::IceInternal::BasicStream*, const UserProfilePtr&);
void __patch__UserProfilePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const UserProfilePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const UserProfilePtr&);
void __decRefUnsafe(const UserProfilePtr&);
void __clearHandleUnsafe(UserProfilePtr&);

}

namespace tbWebMember
{

struct stbuserStatus
{
    ::std::string uid;
    ::std::string id;
    ::Ice::Int exists;
    ::Ice::Int status;

    bool operator==(const stbuserStatus&) const;
    bool operator!=(const stbuserStatus&) const;
    bool operator<(const stbuserStatus&) const;
    bool operator<=(const stbuserStatus& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const stbuserStatus& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const stbuserStatus& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct stbuserPwd
{
    ::std::string uid;
    ::std::string passwd;
    ::Ice::Int status;

    bool operator==(const stbuserPwd&) const;
    bool operator!=(const stbuserPwd&) const;
    bool operator<(const stbuserPwd&) const;
    bool operator<=(const stbuserPwd& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const stbuserPwd& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const stbuserPwd& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct stbuserInfo
{
    ::std::string uid;
    ::Ice::Int ratesum;
    ::Ice::Int userLevel;
    ::Ice::Int promotedtype;
    ::Ice::Int active;
    ::std::string id;

    bool operator==(const stbuserInfo&) const;
    bool operator!=(const stbuserInfo&) const;
    bool operator<(const stbuserInfo&) const;
    bool operator<=(const stbuserInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const stbuserInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const stbuserInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SSimpleUserProfile
{
    ::std::string uid;
    ::std::string password;
    ::std::string status;

    bool operator==(const SSimpleUserProfile&) const;
    bool operator!=(const SSimpleUserProfile&) const;
    bool operator<(const SSimpleUserProfile&) const;
    bool operator<=(const SSimpleUserProfile& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SSimpleUserProfile& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SSimpleUserProfile& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SHalfUserProfile
{
    ::std::string uid;
    ::std::string password;
    ::std::string status;
    ::std::string realName;
    ::std::string company;
    ::std::string jobTitle;
    ::std::string memberLevel;
    ::std::string penName;
    ::Ice::Int categoryId;
    ::std::string phoneArea;
    ::std::string phoneStatus;
    ::std::string phone;

    bool operator==(const SHalfUserProfile&) const;
    bool operator!=(const SHalfUserProfile&) const;
    bool operator<(const SHalfUserProfile&) const;
    bool operator<=(const SHalfUserProfile& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SHalfUserProfile& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SHalfUserProfile& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct StbFullUserProfile
{
    ::std::string uid;
    ::std::string address;
    ::std::string zip;
    ::std::string email;
    ::std::string birthdate;
    ::Ice::Int activated;
    ::std::string id;

    bool operator==(const StbFullUserProfile&) const;
    bool operator!=(const StbFullUserProfile&) const;
    bool operator<(const StbFullUserProfile&) const;
    bool operator<=(const StbFullUserProfile& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const StbFullUserProfile& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const StbFullUserProfile& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct sUdbData
{
    ::std::string id;
    ::std::string nick;
    ::std::string fullname;
    ::std::string password;
    ::std::string email;
    ::std::string zip;
    ::std::string address;
    ::std::string phone;
    ::std::string mobilephone;
    ::std::string prov;
    ::std::string city;
    ::std::string usergender;
    ::std::string birthdate;

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

struct SExUdbData
{
    ::std::string id;
    ::std::string nick;
    ::std::string fullname;
    ::std::string password;
    ::std::string email;
    ::std::string zip;
    ::std::string address;
    ::std::string phone;
    ::std::string mobilephone;
    ::std::string prov;
    ::std::string city;
    ::std::string usergender;
    ::std::string birthdate;
    ::std::string district;
    ::std::string website;
    ::std::string interesting;

    bool operator==(const SExUdbData&) const;
    bool operator!=(const SExUdbData&) const;
    bool operator<(const SExUdbData&) const;
    bool operator<=(const SExUdbData& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SExUdbData& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SExUdbData& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SBLoginInfo
{
    ::std::string uid;
    ::std::string passwd;
    ::Ice::Int actived;
    ::std::string status;
    ::std::string extraInfo;

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

typedef ::std::vector< ::std::string> UserIdSeq;

class __U__UserIdSeq { };

typedef ::std::vector< ::tbWebMember::SSimpleUserProfile> SUserSeq;

class __U__SUserSeq { };
void __write(::IceInternal::BasicStream*, const ::tbWebMember::SSimpleUserProfile*, const ::tbWebMember::SSimpleUserProfile*, __U__SUserSeq);
void __read(::IceInternal::BasicStream*, SUserSeq&, __U__SUserSeq);

typedef ::std::vector< ::tbWebMember::SHalfUserProfile> HUserSeq;

class __U__HUserSeq { };
void __write(::IceInternal::BasicStream*, const ::tbWebMember::SHalfUserProfile*, const ::tbWebMember::SHalfUserProfile*, __U__HUserSeq);
void __read(::IceInternal::BasicStream*, HUserSeq&, __U__HUserSeq);

typedef ::std::vector< ::tbWebMember::StbFullUserProfile> tbFUserSeq;

class __U__tbFUserSeq { };
void __write(::IceInternal::BasicStream*, const ::tbWebMember::StbFullUserProfile*, const ::tbWebMember::StbFullUserProfile*, __U__tbFUserSeq);
void __read(::IceInternal::BasicStream*, tbFUserSeq&, __U__tbFUserSeq);

}

namespace IceProxy
{

namespace tbWebMember
{

class UserProfile : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int GetSimpleUserProfile(const ::std::string& uid, ::tbWebMember::SSimpleUserProfile& userProfiles)
    {
        return GetSimpleUserProfile(uid, userProfiles, 0);
    }
    ::Ice::Int GetSimpleUserProfile(const ::std::string& uid, ::tbWebMember::SSimpleUserProfile& userProfiles, const ::Ice::Context& __ctx)
    {
        return GetSimpleUserProfile(uid, userProfiles, &__ctx);
    }
    
private:

    ::Ice::Int GetSimpleUserProfile(const ::std::string&, ::tbWebMember::SSimpleUserProfile&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetFullUserProfile(const ::std::string& uid, ::tbWebMember::StbFullUserProfile& userProfiles)
    {
        return GetFullUserProfile(uid, userProfiles, 0);
    }
    ::Ice::Int GetFullUserProfile(const ::std::string& uid, ::tbWebMember::StbFullUserProfile& userProfiles, const ::Ice::Context& __ctx)
    {
        return GetFullUserProfile(uid, userProfiles, &__ctx);
    }
    
private:

    ::Ice::Int GetFullUserProfile(const ::std::string&, ::tbWebMember::StbFullUserProfile&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUidByPenname(const ::std::string& penName, ::std::string& userId)
    {
        return GetUidByPenname(penName, userId, 0);
    }
    ::Ice::Int GetUidByPenname(const ::std::string& penName, ::std::string& userId, const ::Ice::Context& __ctx)
    {
        return GetUidByPenname(penName, userId, &__ctx);
    }
    
private:

    ::Ice::Int GetUidByPenname(const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUserPwd(const ::std::string& uid, ::tbWebMember::stbuserPwd& pwd)
    {
        return GetUserPwd(uid, pwd, 0);
    }
    ::Ice::Int GetUserPwd(const ::std::string& uid, ::tbWebMember::stbuserPwd& pwd, const ::Ice::Context& __ctx)
    {
        return GetUserPwd(uid, pwd, &__ctx);
    }
    
private:

    ::Ice::Int GetUserPwd(const ::std::string&, ::tbWebMember::stbuserPwd&, const ::Ice::Context*);
    
public:

    ::Ice::Int CheckUser(const ::std::string& uid, ::tbWebMember::stbuserStatus& st)
    {
        return CheckUser(uid, st, 0);
    }
    ::Ice::Int CheckUser(const ::std::string& uid, ::tbWebMember::stbuserStatus& st, const ::Ice::Context& __ctx)
    {
        return CheckUser(uid, st, &__ctx);
    }
    
private:

    ::Ice::Int CheckUser(const ::std::string&, ::tbWebMember::stbuserStatus&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUserInfo(const ::std::string& uid, ::tbWebMember::stbuserInfo& info)
    {
        return GetUserInfo(uid, info, 0);
    }
    ::Ice::Int GetUserInfo(const ::std::string& uid, ::tbWebMember::stbuserInfo& info, const ::Ice::Context& __ctx)
    {
        return GetUserInfo(uid, info, &__ctx);
    }
    
private:

    ::Ice::Int GetUserInfo(const ::std::string&, ::tbWebMember::stbuserInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetTName(const ::std::string& uid, ::std::string& tname)
    {
        return GetTName(uid, tname, 0);
    }
    ::Ice::Int GetTName(const ::std::string& uid, ::std::string& tname, const ::Ice::Context& __ctx)
    {
        return GetTName(uid, tname, &__ctx);
    }
    
private:

    ::Ice::Int GetTName(const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUDBData(const ::std::string& uid, ::tbWebMember::sUdbData& udbInfo)
    {
        return GetUDBData(uid, udbInfo, 0);
    }
    ::Ice::Int GetUDBData(const ::std::string& uid, ::tbWebMember::sUdbData& udbInfo, const ::Ice::Context& __ctx)
    {
        return GetUDBData(uid, udbInfo, &__ctx);
    }
    
private:

    ::Ice::Int GetUDBData(const ::std::string&, ::tbWebMember::sUdbData&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetExUDBData(const ::std::string& uid, ::tbWebMember::SExUdbData& exudbInfo)
    {
        return GetExUDBData(uid, exudbInfo, 0);
    }
    ::Ice::Int GetExUDBData(const ::std::string& uid, ::tbWebMember::SExUdbData& exudbInfo, const ::Ice::Context& __ctx)
    {
        return GetExUDBData(uid, exudbInfo, &__ctx);
    }
    
private:

    ::Ice::Int GetExUDBData(const ::std::string&, ::tbWebMember::SExUdbData&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetRates(const ::std::string& uid, ::Ice::Int& buyrates, ::Ice::Int& sellrates)
    {
        return GetRates(uid, buyrates, sellrates, 0);
    }
    ::Ice::Int GetRates(const ::std::string& uid, ::Ice::Int& buyrates, ::Ice::Int& sellrates, const ::Ice::Context& __ctx)
    {
        return GetRates(uid, buyrates, sellrates, &__ctx);
    }
    
private:

    ::Ice::Int GetRates(const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetBasicLoginInfo(const ::std::string& uid, ::tbWebMember::SBLoginInfo& info)
    {
        return GetBasicLoginInfo(uid, info, 0);
    }
    ::Ice::Int GetBasicLoginInfo(const ::std::string& uid, ::tbWebMember::SBLoginInfo& info, const ::Ice::Context& __ctx)
    {
        return GetBasicLoginInfo(uid, info, &__ctx);
    }
    
private:

    ::Ice::Int GetBasicLoginInfo(const ::std::string&, ::tbWebMember::SBLoginInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int CheckUserWebToken(const ::std::string& uid, const ::std::string& token, ::std::string& reason)
    {
        return CheckUserWebToken(uid, token, reason, 0);
    }
    ::Ice::Int CheckUserWebToken(const ::std::string& uid, const ::std::string& token, ::std::string& reason, const ::Ice::Context& __ctx)
    {
        return CheckUserWebToken(uid, token, reason, &__ctx);
    }
    
private:

    ::Ice::Int CheckUserWebToken(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);
    
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

namespace tbWebMember
{

class UserProfile : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int GetSimpleUserProfile(const ::std::string&, ::tbWebMember::SSimpleUserProfile&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetFullUserProfile(const ::std::string&, ::tbWebMember::StbFullUserProfile&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUidByPenname(const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUserPwd(const ::std::string&, ::tbWebMember::stbuserPwd&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int CheckUser(const ::std::string&, ::tbWebMember::stbuserStatus&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUserInfo(const ::std::string&, ::tbWebMember::stbuserInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetTName(const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUDBData(const ::std::string&, ::tbWebMember::sUdbData&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetExUDBData(const ::std::string&, ::tbWebMember::SExUdbData&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetRates(const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetBasicLoginInfo(const ::std::string&, ::tbWebMember::SBLoginInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int CheckUserWebToken(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace tbWebMember
{

class UserProfile : virtual public ::IceDelegate::tbWebMember::UserProfile,
                    virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int GetSimpleUserProfile(const ::std::string&, ::tbWebMember::SSimpleUserProfile&, const ::Ice::Context*);

    virtual ::Ice::Int GetFullUserProfile(const ::std::string&, ::tbWebMember::StbFullUserProfile&, const ::Ice::Context*);

    virtual ::Ice::Int GetUidByPenname(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserPwd(const ::std::string&, ::tbWebMember::stbuserPwd&, const ::Ice::Context*);

    virtual ::Ice::Int CheckUser(const ::std::string&, ::tbWebMember::stbuserStatus&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserInfo(const ::std::string&, ::tbWebMember::stbuserInfo&, const ::Ice::Context*);

    virtual ::Ice::Int GetTName(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetUDBData(const ::std::string&, ::tbWebMember::sUdbData&, const ::Ice::Context*);

    virtual ::Ice::Int GetExUDBData(const ::std::string&, ::tbWebMember::SExUdbData&, const ::Ice::Context*);

    virtual ::Ice::Int GetRates(const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetBasicLoginInfo(const ::std::string&, ::tbWebMember::SBLoginInfo&, const ::Ice::Context*);

    virtual ::Ice::Int CheckUserWebToken(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace tbWebMember
{

class UserProfile : virtual public ::IceDelegate::tbWebMember::UserProfile,
                    virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int GetSimpleUserProfile(const ::std::string&, ::tbWebMember::SSimpleUserProfile&, const ::Ice::Context*);

    virtual ::Ice::Int GetFullUserProfile(const ::std::string&, ::tbWebMember::StbFullUserProfile&, const ::Ice::Context*);

    virtual ::Ice::Int GetUidByPenname(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserPwd(const ::std::string&, ::tbWebMember::stbuserPwd&, const ::Ice::Context*);

    virtual ::Ice::Int CheckUser(const ::std::string&, ::tbWebMember::stbuserStatus&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserInfo(const ::std::string&, ::tbWebMember::stbuserInfo&, const ::Ice::Context*);

    virtual ::Ice::Int GetTName(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetUDBData(const ::std::string&, ::tbWebMember::sUdbData&, const ::Ice::Context*);

    virtual ::Ice::Int GetExUDBData(const ::std::string&, ::tbWebMember::SExUdbData&, const ::Ice::Context*);

    virtual ::Ice::Int GetRates(const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetBasicLoginInfo(const ::std::string&, ::tbWebMember::SBLoginInfo&, const ::Ice::Context*);

    virtual ::Ice::Int CheckUserWebToken(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);
};

}

}

namespace tbWebMember
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

    virtual ::Ice::Int GetSimpleUserProfile(const ::std::string&, ::tbWebMember::SSimpleUserProfile&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetSimpleUserProfile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetFullUserProfile(const ::std::string&, ::tbWebMember::StbFullUserProfile&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetFullUserProfile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetUidByPenname(const ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUidByPenname(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetUserPwd(const ::std::string&, ::tbWebMember::stbuserPwd&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserPwd(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int CheckUser(const ::std::string&, ::tbWebMember::stbuserStatus&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___CheckUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetUserInfo(const ::std::string&, ::tbWebMember::stbuserInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetTName(const ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetTName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetUDBData(const ::std::string&, ::tbWebMember::sUdbData&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUDBData(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetExUDBData(const ::std::string&, ::tbWebMember::SExUdbData&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetExUDBData(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetRates(const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetRates(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetBasicLoginInfo(const ::std::string&, ::tbWebMember::SBLoginInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetBasicLoginInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int CheckUserWebToken(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___CheckUserWebToken(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__UserProfilePtr(void*, ::Ice::ObjectPtr&);

}

#endif
