// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `WebMember.ice'

#ifndef __WebMember_h__
#define __WebMember_h__

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

namespace WebMember
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

namespace WebMember
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

void incRef(::WebMember::UserProfile*);
void decRef(::WebMember::UserProfile*);

void incRef(::IceProxy::WebMember::UserProfile*);
void decRef(::IceProxy::WebMember::UserProfile*);

}

namespace WebMember
{

typedef ::IceInternal::Handle< ::WebMember::UserProfile> UserProfilePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::WebMember::UserProfile> UserProfilePrx;

void __write(::IceInternal::BasicStream*, const UserProfilePrx&);
void __read(::IceInternal::BasicStream*, UserProfilePrx&);
void __write(::IceInternal::BasicStream*, const UserProfilePtr&);
void __patch__UserProfilePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const UserProfilePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const UserProfilePtr&);
void __decRefUnsafe(const UserProfilePtr&);
void __clearHandleUnsafe(UserProfilePtr&);

}

namespace WebMember
{

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

struct SFullUserProfile
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
    ::std::string email;
    ::std::string mobileNo;
    ::Ice::Byte sex;
    ::std::string address;
    ::std::string buyKeywords;
    ::std::string saleKeywords;
    ::std::string faxNo;
    ::std::string homepageUrl;

    bool operator==(const SFullUserProfile&) const;
    bool operator!=(const SFullUserProfile&) const;
    bool operator<(const SFullUserProfile&) const;
    bool operator<=(const SFullUserProfile& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SFullUserProfile& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SFullUserProfile& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SUDBUserProfile
{
    ::std::string memberId;
    ::std::string realName;
    ::std::string password;
    ::std::string status;
    ::std::string email;
    ::std::string mobileNo;
    ::std::string phone;
    ::std::string country;
    ::std::string province;
    ::std::string city;
    ::std::string address;
    ::std::string homepageUrl;
    ::std::string memberLevel;
    ::std::string penName;
    ::std::string phoneStatus;
    ::Ice::Byte sex;
    ::std::string jobTitle;
    ::std::string company;
    ::std::string zip;

    bool operator==(const SUDBUserProfile&) const;
    bool operator!=(const SUDBUserProfile&) const;
    bool operator<(const SUDBUserProfile&) const;
    bool operator<=(const SUDBUserProfile& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SUDBUserProfile& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SUDBUserProfile& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SUserLevel
{
    ::std::string memberId;
    ::std::string memberLevel;

    bool operator==(const SUserLevel&) const;
    bool operator!=(const SUserLevel&) const;
    bool operator<(const SUserLevel&) const;
    bool operator<=(const SUserLevel& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SUserLevel& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SUserLevel& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SHalfUserProfile2
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
    ::std::string communityLevel;

    bool operator==(const SHalfUserProfile2&) const;
    bool operator!=(const SHalfUserProfile2&) const;
    bool operator<(const SHalfUserProfile2&) const;
    bool operator<=(const SHalfUserProfile2& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SHalfUserProfile2& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SHalfUserProfile2& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SFullUserProfile2
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
    ::std::string email;
    ::std::string mobileNo;
    ::Ice::Byte sex;
    ::std::string address;
    ::std::string buyKeywords;
    ::std::string saleKeywords;
    ::std::string faxNo;
    ::std::string homepageUrl;
    ::std::string communityLevel;

    bool operator==(const SFullUserProfile2&) const;
    bool operator!=(const SFullUserProfile2&) const;
    bool operator<(const SFullUserProfile2&) const;
    bool operator<=(const SFullUserProfile2& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SFullUserProfile2& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SFullUserProfile2& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::std::string> UserIdSeq;

class __U__UserIdSeq { };

typedef ::std::vector< ::WebMember::SSimpleUserProfile> SUserSeq;

class __U__SUserSeq { };
void __write(::IceInternal::BasicStream*, const ::WebMember::SSimpleUserProfile*, const ::WebMember::SSimpleUserProfile*, __U__SUserSeq);
void __read(::IceInternal::BasicStream*, SUserSeq&, __U__SUserSeq);

typedef ::std::vector< ::WebMember::SHalfUserProfile> HUserSeq;

class __U__HUserSeq { };
void __write(::IceInternal::BasicStream*, const ::WebMember::SHalfUserProfile*, const ::WebMember::SHalfUserProfile*, __U__HUserSeq);
void __read(::IceInternal::BasicStream*, HUserSeq&, __U__HUserSeq);

typedef ::std::vector< ::WebMember::SFullUserProfile> FUserSeq;

class __U__FUserSeq { };
void __write(::IceInternal::BasicStream*, const ::WebMember::SFullUserProfile*, const ::WebMember::SFullUserProfile*, __U__FUserSeq);
void __read(::IceInternal::BasicStream*, FUserSeq&, __U__FUserSeq);

typedef ::std::vector< ::WebMember::SUserLevel> UserLevelSeq;

class __U__UserLevelSeq { };
void __write(::IceInternal::BasicStream*, const ::WebMember::SUserLevel*, const ::WebMember::SUserLevel*, __U__UserLevelSeq);
void __read(::IceInternal::BasicStream*, UserLevelSeq&, __U__UserLevelSeq);

typedef ::std::vector< ::WebMember::SHalfUserProfile2> HUserSeq2;

class __U__HUserSeq2 { };
void __write(::IceInternal::BasicStream*, const ::WebMember::SHalfUserProfile2*, const ::WebMember::SHalfUserProfile2*, __U__HUserSeq2);
void __read(::IceInternal::BasicStream*, HUserSeq2&, __U__HUserSeq2);

typedef ::std::vector< ::WebMember::SFullUserProfile2> FUserSeq2;

class __U__FUserSeq2 { };
void __write(::IceInternal::BasicStream*, const ::WebMember::SFullUserProfile2*, const ::WebMember::SFullUserProfile2*, __U__FUserSeq2);
void __read(::IceInternal::BasicStream*, FUserSeq2&, __U__FUserSeq2);

}

namespace IceProxy
{

namespace WebMember
{

class UserProfile : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int GetSimpleUserProfile(const ::WebMember::UserIdSeq& userIds, ::WebMember::SUserSeq& userProfiles)
    {
        return GetSimpleUserProfile(userIds, userProfiles, 0);
    }
    ::Ice::Int GetSimpleUserProfile(const ::WebMember::UserIdSeq& userIds, ::WebMember::SUserSeq& userProfiles, const ::Ice::Context& __ctx)
    {
        return GetSimpleUserProfile(userIds, userProfiles, &__ctx);
    }
    
private:

    ::Ice::Int GetSimpleUserProfile(const ::WebMember::UserIdSeq&, ::WebMember::SUserSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetHalfUserProfile(const ::WebMember::UserIdSeq& userIds, ::WebMember::HUserSeq& userProfiles)
    {
        return GetHalfUserProfile(userIds, userProfiles, 0);
    }
    ::Ice::Int GetHalfUserProfile(const ::WebMember::UserIdSeq& userIds, ::WebMember::HUserSeq& userProfiles, const ::Ice::Context& __ctx)
    {
        return GetHalfUserProfile(userIds, userProfiles, &__ctx);
    }
    
private:

    ::Ice::Int GetHalfUserProfile(const ::WebMember::UserIdSeq&, ::WebMember::HUserSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetFullUserProfile(const ::WebMember::UserIdSeq& userIds, ::WebMember::FUserSeq& userProfiles)
    {
        return GetFullUserProfile(userIds, userProfiles, 0);
    }
    ::Ice::Int GetFullUserProfile(const ::WebMember::UserIdSeq& userIds, ::WebMember::FUserSeq& userProfiles, const ::Ice::Context& __ctx)
    {
        return GetFullUserProfile(userIds, userProfiles, &__ctx);
    }
    
private:

    ::Ice::Int GetFullUserProfile(const ::WebMember::UserIdSeq&, ::WebMember::FUserSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUserLevels(const ::WebMember::UserIdSeq& userIds, ::WebMember::UserLevelSeq& userProfiles)
    {
        return GetUserLevels(userIds, userProfiles, 0);
    }
    ::Ice::Int GetUserLevels(const ::WebMember::UserIdSeq& userIds, ::WebMember::UserLevelSeq& userProfiles, const ::Ice::Context& __ctx)
    {
        return GetUserLevels(userIds, userProfiles, &__ctx);
    }
    
private:

    ::Ice::Int GetUserLevels(const ::WebMember::UserIdSeq&, ::WebMember::UserLevelSeq&, const ::Ice::Context*);
    
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

    ::Ice::Int GetPassword(const ::std::string& userId, ::std::string& password, ::std::string& status)
    {
        return GetPassword(userId, password, status, 0);
    }
    ::Ice::Int GetPassword(const ::std::string& userId, ::std::string& password, ::std::string& status, const ::Ice::Context& __ctx)
    {
        return GetPassword(userId, password, status, &__ctx);
    }
    
private:

    ::Ice::Int GetPassword(const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUDBUserProfile(const ::std::string& userId, ::WebMember::SUDBUserProfile& udbProfile)
    {
        return GetUDBUserProfile(userId, udbProfile, 0);
    }
    ::Ice::Int GetUDBUserProfile(const ::std::string& userId, ::WebMember::SUDBUserProfile& udbProfile, const ::Ice::Context& __ctx)
    {
        return GetUDBUserProfile(userId, udbProfile, &__ctx);
    }
    
private:

    ::Ice::Int GetUDBUserProfile(const ::std::string&, ::WebMember::SUDBUserProfile&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetHalfUserProfile2(const ::WebMember::UserIdSeq& userIds, ::WebMember::HUserSeq2& userProfiles)
    {
        return GetHalfUserProfile2(userIds, userProfiles, 0);
    }
    ::Ice::Int GetHalfUserProfile2(const ::WebMember::UserIdSeq& userIds, ::WebMember::HUserSeq2& userProfiles, const ::Ice::Context& __ctx)
    {
        return GetHalfUserProfile2(userIds, userProfiles, &__ctx);
    }
    
private:

    ::Ice::Int GetHalfUserProfile2(const ::WebMember::UserIdSeq&, ::WebMember::HUserSeq2&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetFullUserProfile2(const ::WebMember::UserIdSeq& userIds, ::WebMember::FUserSeq2& userProfiles)
    {
        return GetFullUserProfile2(userIds, userProfiles, 0);
    }
    ::Ice::Int GetFullUserProfile2(const ::WebMember::UserIdSeq& userIds, ::WebMember::FUserSeq2& userProfiles, const ::Ice::Context& __ctx)
    {
        return GetFullUserProfile2(userIds, userProfiles, &__ctx);
    }
    
private:

    ::Ice::Int GetFullUserProfile2(const ::WebMember::UserIdSeq&, ::WebMember::FUserSeq2&, const ::Ice::Context*);
    
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

namespace WebMember
{

class UserProfile : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int GetSimpleUserProfile(const ::WebMember::UserIdSeq&, ::WebMember::SUserSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetHalfUserProfile(const ::WebMember::UserIdSeq&, ::WebMember::HUserSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetFullUserProfile(const ::WebMember::UserIdSeq&, ::WebMember::FUserSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUserLevels(const ::WebMember::UserIdSeq&, ::WebMember::UserLevelSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUidByPenname(const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetPassword(const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUDBUserProfile(const ::std::string&, ::WebMember::SUDBUserProfile&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetHalfUserProfile2(const ::WebMember::UserIdSeq&, ::WebMember::HUserSeq2&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetFullUserProfile2(const ::WebMember::UserIdSeq&, ::WebMember::FUserSeq2&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace WebMember
{

class UserProfile : virtual public ::IceDelegate::WebMember::UserProfile,
                    virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int GetSimpleUserProfile(const ::WebMember::UserIdSeq&, ::WebMember::SUserSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetHalfUserProfile(const ::WebMember::UserIdSeq&, ::WebMember::HUserSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetFullUserProfile(const ::WebMember::UserIdSeq&, ::WebMember::FUserSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserLevels(const ::WebMember::UserIdSeq&, ::WebMember::UserLevelSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetUidByPenname(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetPassword(const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetUDBUserProfile(const ::std::string&, ::WebMember::SUDBUserProfile&, const ::Ice::Context*);

    virtual ::Ice::Int GetHalfUserProfile2(const ::WebMember::UserIdSeq&, ::WebMember::HUserSeq2&, const ::Ice::Context*);

    virtual ::Ice::Int GetFullUserProfile2(const ::WebMember::UserIdSeq&, ::WebMember::FUserSeq2&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace WebMember
{

class UserProfile : virtual public ::IceDelegate::WebMember::UserProfile,
                    virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int GetSimpleUserProfile(const ::WebMember::UserIdSeq&, ::WebMember::SUserSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetHalfUserProfile(const ::WebMember::UserIdSeq&, ::WebMember::HUserSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetFullUserProfile(const ::WebMember::UserIdSeq&, ::WebMember::FUserSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserLevels(const ::WebMember::UserIdSeq&, ::WebMember::UserLevelSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetUidByPenname(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetPassword(const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetUDBUserProfile(const ::std::string&, ::WebMember::SUDBUserProfile&, const ::Ice::Context*);

    virtual ::Ice::Int GetHalfUserProfile2(const ::WebMember::UserIdSeq&, ::WebMember::HUserSeq2&, const ::Ice::Context*);

    virtual ::Ice::Int GetFullUserProfile2(const ::WebMember::UserIdSeq&, ::WebMember::FUserSeq2&, const ::Ice::Context*);
};

}

}

namespace WebMember
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

    virtual ::Ice::Int GetSimpleUserProfile(const ::WebMember::UserIdSeq&, ::WebMember::SUserSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetSimpleUserProfile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetHalfUserProfile(const ::WebMember::UserIdSeq&, ::WebMember::HUserSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetHalfUserProfile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetFullUserProfile(const ::WebMember::UserIdSeq&, ::WebMember::FUserSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetFullUserProfile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetUserLevels(const ::WebMember::UserIdSeq&, ::WebMember::UserLevelSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserLevels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetUidByPenname(const ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUidByPenname(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetPassword(const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetPassword(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetUDBUserProfile(const ::std::string&, ::WebMember::SUDBUserProfile&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUDBUserProfile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetHalfUserProfile2(const ::WebMember::UserIdSeq&, ::WebMember::HUserSeq2&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetHalfUserProfile2(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetFullUserProfile2(const ::WebMember::UserIdSeq&, ::WebMember::FUserSeq2&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetFullUserProfile2(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__UserProfilePtr(void*, ::Ice::ObjectPtr&);

}

#endif
