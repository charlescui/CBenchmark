// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `user_ice_service.ice'

#ifndef __user_ice_service_h__
#define __user_ice_service_h__

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
#include <struct.h>
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

namespace com
{

namespace alisoft
{

namespace member
{

namespace udb
{

namespace api
{

namespace user
{

class UserService;
bool operator==(const UserService&, const UserService&);
bool operator!=(const UserService&, const UserService&);
bool operator<(const UserService&, const UserService&);
bool operator<=(const UserService&, const UserService&);
bool operator>(const UserService&, const UserService&);
bool operator>=(const UserService&, const UserService&);

}

}

}

}

}

}

}

namespace com
{

namespace alisoft
{

namespace member
{

namespace udb
{

namespace api
{

namespace user
{

class UserService;
bool operator==(const UserService&, const UserService&);
bool operator!=(const UserService&, const UserService&);
bool operator<(const UserService&, const UserService&);
bool operator<=(const UserService&, const UserService&);
bool operator>(const UserService&, const UserService&);
bool operator>=(const UserService&, const UserService&);

}

}

}

}

}

}

namespace IceInternal
{

void incRef(::com::alisoft::member::udb::api::user::UserService*);
void decRef(::com::alisoft::member::udb::api::user::UserService*);

void incRef(::IceProxy::com::alisoft::member::udb::api::user::UserService*);
void decRef(::IceProxy::com::alisoft::member::udb::api::user::UserService*);

}

namespace com
{

namespace alisoft
{

namespace member
{

namespace udb
{

namespace api
{

namespace user
{

typedef ::IceInternal::Handle< ::com::alisoft::member::udb::api::user::UserService> UserServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::alisoft::member::udb::api::user::UserService> UserServicePrx;

void __write(::IceInternal::BasicStream*, const UserServicePrx&);
void __read(::IceInternal::BasicStream*, UserServicePrx&);
void __write(::IceInternal::BasicStream*, const UserServicePtr&);
void __patch__UserServicePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const UserServicePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const UserServicePtr&);
void __decRefUnsafe(const UserServicePtr&);
void __clearHandleUnsafe(UserServicePtr&);

}

}

}

}

}

}

namespace com
{

namespace alisoft
{

namespace member
{

namespace udb
{

namespace api
{

namespace model
{

struct Domain
{
    ::std::string domainId;
    ::std::string name;
    ::std::string domainPrefix;
    ::std::string canLogin;

    bool operator==(const Domain&) const;
    bool operator!=(const Domain&) const;
    bool operator<(const Domain&) const;
    bool operator<=(const Domain& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const Domain& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const Domain& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct UserProfile
{
    ::std::string userId;
    ::std::string userName;
    ::std::string passport;
    ::std::string isDeleted;
    ::std::string gmtCreate;
    ::std::string gmtModified;
    ::std::string creator;
    ::std::string Modifier;
    ::std::string domainPrefix;
    ::std::string loginId;
    ::std::string longId;
    ::std::string sourceType;
    ::std::string gmtLogin;
    ::std::string userStatus;
    ::Ice::Int status;
    ::std::string email;
    ::std::string mobileNo;
    ::std::string phoneNo;
    ::std::string company;
    ::std::string jobTitle;
    ::std::string country;
    ::std::string province;
    ::std::string city;
    ::std::string address;
    ::std::string sex;
    ::std::string birthday;
    ::std::string zip;
    ::std::string constellation;
    ::std::string subCity;
    ::std::string bloodType;
    ::std::string shengXiao;
    ::std::string career;
    ::std::string degree;
    ::std::string interest;
    ::std::string personality;
    ::std::string memo;
    ::std::string finishSchool;
    ::Ice::Int contactShowFlag;
    ::std::string companyAddress;
    ::std::string companyUrl;
    ::std::string companyTel;
    ::Ice::Int companyShowFlag;
    ::std::string signature;
    ::std::string companyZip;
    ::std::string companyFax;
    ::std::string moreInterest;
    ::Ice::Int personalShowFlag;
    ::std::string homePage;
    ::std::string vocation;
    ::std::string companyEmail;
    ::std::string duty;
    ::std::string department;
    ::std::string purchase;
    ::std::string sales;
    ::Ice::Float finishedPercent;
    ::Ice::Int imgType;
    ::std::string imgHashCode;
    ::std::string nickname;
    ::std::string userLevel;

    bool operator==(const UserProfile&) const;
    bool operator!=(const UserProfile&) const;
    bool operator<(const UserProfile&) const;
    bool operator<=(const UserProfile& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const UserProfile& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const UserProfile& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::com::alisoft::member::udb::api::model::UserProfile> UserProfileSeq;

class __U__UserProfileSeq { };
void __write(::IceInternal::BasicStream*, const ::com::alisoft::member::udb::api::model::UserProfile*, const ::com::alisoft::member::udb::api::model::UserProfile*, __U__UserProfileSeq);
void __read(::IceInternal::BasicStream*, UserProfileSeq&, __U__UserProfileSeq);

typedef ::std::vector< ::std::string> StringSeq;

class __U__StringSeq { };

struct MatchedUserInfo
{
    ::std::string longId;
    ::std::string name;
    bool activeState;

    bool operator==(const MatchedUserInfo&) const;
    bool operator!=(const MatchedUserInfo&) const;
    bool operator<(const MatchedUserInfo&) const;
    bool operator<=(const MatchedUserInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const MatchedUserInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const MatchedUserInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::com::alisoft::member::udb::api::model::MatchedUserInfo> MatchedUserInfoSeq;

class __U__MatchedUserInfoSeq { };
void __write(::IceInternal::BasicStream*, const ::com::alisoft::member::udb::api::model::MatchedUserInfo*, const ::com::alisoft::member::udb::api::model::MatchedUserInfo*, __U__MatchedUserInfoSeq);
void __read(::IceInternal::BasicStream*, MatchedUserInfoSeq&, __U__MatchedUserInfoSeq);

typedef ::std::vector< ::com::alisoft::member::udb::api::model::Domain> DomainSeq;

class __U__DomainSeq { };
void __write(::IceInternal::BasicStream*, const ::com::alisoft::member::udb::api::model::Domain*, const ::com::alisoft::member::udb::api::model::Domain*, __U__DomainSeq);
void __read(::IceInternal::BasicStream*, DomainSeq&, __U__DomainSeq);

}

namespace user
{

}

}

}

}

}

}

namespace IceProxy
{

namespace com
{

namespace alisoft
{

namespace member
{

namespace udb
{

namespace api
{

namespace user
{

class UserService : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int registerUser(const ::com::alisoft::member::udb::api::model::Map& registerInfo, ::std::string& userId)
    {
        return registerUser(registerInfo, userId, 0);
    }
    ::Ice::Int registerUser(const ::com::alisoft::member::udb::api::model::Map& registerInfo, ::std::string& userId, const ::Ice::Context& __ctx)
    {
        return registerUser(registerInfo, userId, &__ctx);
    }
    
private:

    ::Ice::Int registerUser(const ::com::alisoft::member::udb::api::model::Map&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int registerAlisoft(const ::com::alisoft::member::udb::api::model::Map& registerInfo, ::std::string& userId)
    {
        return registerAlisoft(registerInfo, userId, 0);
    }
    ::Ice::Int registerAlisoft(const ::com::alisoft::member::udb::api::model::Map& registerInfo, ::std::string& userId, const ::Ice::Context& __ctx)
    {
        return registerAlisoft(registerInfo, userId, &__ctx);
    }
    
private:

    ::Ice::Int registerAlisoft(const ::com::alisoft::member::udb::api::model::Map&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int isCanRegister(const ::std::string& passport, bool& isCan)
    {
        return isCanRegister(passport, isCan, 0);
    }
    ::Ice::Int isCanRegister(const ::std::string& passport, bool& isCan, const ::Ice::Context& __ctx)
    {
        return isCanRegister(passport, isCan, &__ctx);
    }
    
private:

    ::Ice::Int isCanRegister(const ::std::string&, bool&, const ::Ice::Context*);
    
public:

    ::Ice::Int modifyUserInfo(const ::com::alisoft::member::udb::api::model::Map& updateInfo)
    {
        return modifyUserInfo(updateInfo, 0);
    }
    ::Ice::Int modifyUserInfo(const ::com::alisoft::member::udb::api::model::Map& updateInfo, const ::Ice::Context& __ctx)
    {
        return modifyUserInfo(updateInfo, &__ctx);
    }
    
private:

    ::Ice::Int modifyUserInfo(const ::com::alisoft::member::udb::api::model::Map&, const ::Ice::Context*);
    
public:

    ::Ice::Int modifyImToken(const ::std::string& longId, const ::std::string& imToken)
    {
        return modifyImToken(longId, imToken, 0);
    }
    ::Ice::Int modifyImToken(const ::std::string& longId, const ::std::string& imToken, const ::Ice::Context& __ctx)
    {
        return modifyImToken(longId, imToken, &__ctx);
    }
    
private:

    ::Ice::Int modifyImToken(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int modifyAepImToken(const ::std::string& longId, const ::std::string& imToken)
    {
        return modifyAepImToken(longId, imToken, 0);
    }
    ::Ice::Int modifyAepImToken(const ::std::string& longId, const ::std::string& imToken, const ::Ice::Context& __ctx)
    {
        return modifyAepImToken(longId, imToken, &__ctx);
    }
    
private:

    ::Ice::Int modifyAepImToken(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int getAepImToken(const ::std::string& longId, ::std::string& imToken, ::std::string& md5pwd, ::std::string& userStatus)
    {
        return getAepImToken(longId, imToken, md5pwd, userStatus, 0);
    }
    ::Ice::Int getAepImToken(const ::std::string& longId, ::std::string& imToken, ::std::string& md5pwd, ::std::string& userStatus, const ::Ice::Context& __ctx)
    {
        return getAepImToken(longId, imToken, md5pwd, userStatus, &__ctx);
    }
    
private:

    ::Ice::Int getAepImToken(const ::std::string&, ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int validateUser(const ::std::string& longId, const ::std::string& password, ::std::string& passport, ::std::string& retLongId, ::std::string& userId)
    {
        return validateUser(longId, password, passport, retLongId, userId, 0);
    }
    ::Ice::Int validateUser(const ::std::string& longId, const ::std::string& password, ::std::string& passport, ::std::string& retLongId, ::std::string& userId, const ::Ice::Context& __ctx)
    {
        return validateUser(longId, password, passport, retLongId, userId, &__ctx);
    }
    
private:

    ::Ice::Int validateUser(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int validatePassport(const ::std::string& passport, const ::std::string& password, ::std::string& longId, ::std::string& userId, ::std::string& md5pw)
    {
        return validatePassport(passport, password, longId, userId, md5pw, 0);
    }
    ::Ice::Int validatePassport(const ::std::string& passport, const ::std::string& password, ::std::string& longId, ::std::string& userId, ::std::string& md5pw, const ::Ice::Context& __ctx)
    {
        return validatePassport(passport, password, longId, userId, md5pw, &__ctx);
    }
    
private:

    ::Ice::Int validatePassport(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int loginNotify(const ::std::string& longId)
    {
        return loginNotify(longId, 0);
    }
    ::Ice::Int loginNotify(const ::std::string& longId, const ::Ice::Context& __ctx)
    {
        return loginNotify(longId, &__ctx);
    }
    
private:

    ::Ice::Int loginNotify(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int recordCTULog(const ::com::alisoft::member::udb::api::model::Map& ctuLogInfo)
    {
        return recordCTULog(ctuLogInfo, 0);
    }
    ::Ice::Int recordCTULog(const ::com::alisoft::member::udb::api::model::Map& ctuLogInfo, const ::Ice::Context& __ctx)
    {
        return recordCTULog(ctuLogInfo, &__ctx);
    }
    
private:

    ::Ice::Int recordCTULog(const ::com::alisoft::member::udb::api::model::Map&, const ::Ice::Context*);
    
public:

    ::Ice::Int saveWebUserProfile(const ::com::alisoft::member::udb::api::model::Map& userBaseProfile)
    {
        return saveWebUserProfile(userBaseProfile, 0);
    }
    ::Ice::Int saveWebUserProfile(const ::com::alisoft::member::udb::api::model::Map& userBaseProfile, const ::Ice::Context& __ctx)
    {
        return saveWebUserProfile(userBaseProfile, &__ctx);
    }
    
private:

    ::Ice::Int saveWebUserProfile(const ::com::alisoft::member::udb::api::model::Map&, const ::Ice::Context*);
    
public:

    ::Ice::Int deleteUser(const ::std::string& longId, bool& success)
    {
        return deleteUser(longId, success, 0);
    }
    ::Ice::Int deleteUser(const ::std::string& longId, bool& success, const ::Ice::Context& __ctx)
    {
        return deleteUser(longId, success, &__ctx);
    }
    
private:

    ::Ice::Int deleteUser(const ::std::string&, bool&, const ::Ice::Context*);
    
public:

    ::Ice::Int prohibitUser(const ::std::string& longId, bool& success)
    {
        return prohibitUser(longId, success, 0);
    }
    ::Ice::Int prohibitUser(const ::std::string& longId, bool& success, const ::Ice::Context& __ctx)
    {
        return prohibitUser(longId, success, &__ctx);
    }
    
private:

    ::Ice::Int prohibitUser(const ::std::string&, bool&, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserBaseProfile(const ::std::string& longId, ::com::alisoft::member::udb::api::model::Map& userBaseProfile)
    {
        return getUserBaseProfile(longId, userBaseProfile, 0);
    }
    ::Ice::Int getUserBaseProfile(const ::std::string& longId, ::com::alisoft::member::udb::api::model::Map& userBaseProfile, const ::Ice::Context& __ctx)
    {
        return getUserBaseProfile(longId, userBaseProfile, &__ctx);
    }
    
private:

    ::Ice::Int getUserBaseProfile(const ::std::string&, ::com::alisoft::member::udb::api::model::Map&, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserWebProfile(const ::std::string& longId, ::com::alisoft::member::udb::api::model::UserProfile& userProfile)
    {
        return getUserWebProfile(longId, userProfile, 0);
    }
    ::Ice::Int getUserWebProfile(const ::std::string& longId, ::com::alisoft::member::udb::api::model::UserProfile& userProfile, const ::Ice::Context& __ctx)
    {
        return getUserWebProfile(longId, userProfile, &__ctx);
    }
    
private:

    ::Ice::Int getUserWebProfile(const ::std::string&, ::com::alisoft::member::udb::api::model::UserProfile&, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserWebBaseProfile(const ::std::string& longId, ::com::alisoft::member::udb::api::model::UserProfile& userProfile)
    {
        return getUserWebBaseProfile(longId, userProfile, 0);
    }
    ::Ice::Int getUserWebBaseProfile(const ::std::string& longId, ::com::alisoft::member::udb::api::model::UserProfile& userProfile, const ::Ice::Context& __ctx)
    {
        return getUserWebBaseProfile(longId, userProfile, &__ctx);
    }
    
private:

    ::Ice::Int getUserWebBaseProfile(const ::std::string&, ::com::alisoft::member::udb::api::model::UserProfile&, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserProfileByLongId(const ::std::string& longId, ::com::alisoft::member::udb::api::model::UserProfile& userProfile)
    {
        return getUserProfileByLongId(longId, userProfile, 0);
    }
    ::Ice::Int getUserProfileByLongId(const ::std::string& longId, ::com::alisoft::member::udb::api::model::UserProfile& userProfile, const ::Ice::Context& __ctx)
    {
        return getUserProfileByLongId(longId, userProfile, &__ctx);
    }
    
private:

    ::Ice::Int getUserProfileByLongId(const ::std::string&, ::com::alisoft::member::udb::api::model::UserProfile&, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserProfileListByLongId(const ::com::alisoft::member::udb::api::model::StringSeq& longIds, ::com::alisoft::member::udb::api::model::UserProfileSeq& userProfileSeq)
    {
        return getUserProfileListByLongId(longIds, userProfileSeq, 0);
    }
    ::Ice::Int getUserProfileListByLongId(const ::com::alisoft::member::udb::api::model::StringSeq& longIds, ::com::alisoft::member::udb::api::model::UserProfileSeq& userProfileSeq, const ::Ice::Context& __ctx)
    {
        return getUserProfileListByLongId(longIds, userProfileSeq, &__ctx);
    }
    
private:

    ::Ice::Int getUserProfileListByLongId(const ::com::alisoft::member::udb::api::model::StringSeq&, ::com::alisoft::member::udb::api::model::UserProfileSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserProfileListByEmail(const ::com::alisoft::member::udb::api::model::StringSeq& emails, ::com::alisoft::member::udb::api::model::UserProfileSeq& userProfileSeq)
    {
        return getUserProfileListByEmail(emails, userProfileSeq, 0);
    }
    ::Ice::Int getUserProfileListByEmail(const ::com::alisoft::member::udb::api::model::StringSeq& emails, ::com::alisoft::member::udb::api::model::UserProfileSeq& userProfileSeq, const ::Ice::Context& __ctx)
    {
        return getUserProfileListByEmail(emails, userProfileSeq, &__ctx);
    }
    
private:

    ::Ice::Int getUserProfileListByEmail(const ::com::alisoft::member::udb::api::model::StringSeq&, ::com::alisoft::member::udb::api::model::UserProfileSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserProfileByUserId(const ::std::string& userId, ::com::alisoft::member::udb::api::model::UserProfile& userProfile)
    {
        return getUserProfileByUserId(userId, userProfile, 0);
    }
    ::Ice::Int getUserProfileByUserId(const ::std::string& userId, ::com::alisoft::member::udb::api::model::UserProfile& userProfile, const ::Ice::Context& __ctx)
    {
        return getUserProfileByUserId(userId, userProfile, &__ctx);
    }
    
private:

    ::Ice::Int getUserProfileByUserId(const ::std::string&, ::com::alisoft::member::udb::api::model::UserProfile&, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserProfileListByUserId(const ::com::alisoft::member::udb::api::model::StringSeq& userIds, ::com::alisoft::member::udb::api::model::UserProfileSeq& userProfileSeq)
    {
        return getUserProfileListByUserId(userIds, userProfileSeq, 0);
    }
    ::Ice::Int getUserProfileListByUserId(const ::com::alisoft::member::udb::api::model::StringSeq& userIds, ::com::alisoft::member::udb::api::model::UserProfileSeq& userProfileSeq, const ::Ice::Context& __ctx)
    {
        return getUserProfileListByUserId(userIds, userProfileSeq, &__ctx);
    }
    
private:

    ::Ice::Int getUserProfileListByUserId(const ::com::alisoft::member::udb::api::model::StringSeq&, ::com::alisoft::member::udb::api::model::UserProfileSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserIdByPassport(const ::std::string& passport, ::std::string& userId)
    {
        return getUserIdByPassport(passport, userId, 0);
    }
    ::Ice::Int getUserIdByPassport(const ::std::string& passport, ::std::string& userId, const ::Ice::Context& __ctx)
    {
        return getUserIdByPassport(passport, userId, &__ctx);
    }
    
private:

    ::Ice::Int getUserIdByPassport(const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int getLongIdByPassport(const ::std::string& passport, ::std::string& longId)
    {
        return getLongIdByPassport(passport, longId, 0);
    }
    ::Ice::Int getLongIdByPassport(const ::std::string& passport, ::std::string& longId, const ::Ice::Context& __ctx)
    {
        return getLongIdByPassport(passport, longId, &__ctx);
    }
    
private:

    ::Ice::Int getLongIdByPassport(const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserIdByLongId(const ::std::string& longId, ::std::string& userId)
    {
        return getUserIdByLongId(longId, userId, 0);
    }
    ::Ice::Int getUserIdByLongId(const ::std::string& longId, ::std::string& userId, const ::Ice::Context& __ctx)
    {
        return getUserIdByLongId(longId, userId, &__ctx);
    }
    
private:

    ::Ice::Int getUserIdByLongId(const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int isLongIdExist(const ::std::string& longId, bool& isExist)
    {
        return isLongIdExist(longId, isExist, 0);
    }
    ::Ice::Int isLongIdExist(const ::std::string& longId, bool& isExist, const ::Ice::Context& __ctx)
    {
        return isLongIdExist(longId, isExist, &__ctx);
    }
    
private:

    ::Ice::Int isLongIdExist(const ::std::string&, bool&, const ::Ice::Context*);
    
public:

    ::Ice::Int getMD5PasswordByLongId(const ::std::string& longId, ::std::string& md5pwd, ::Ice::Int& status)
    {
        return getMD5PasswordByLongId(longId, md5pwd, status, 0);
    }
    ::Ice::Int getMD5PasswordByLongId(const ::std::string& longId, ::std::string& md5pwd, ::Ice::Int& status, const ::Ice::Context& __ctx)
    {
        return getMD5PasswordByLongId(longId, md5pwd, status, &__ctx);
    }
    
private:

    ::Ice::Int getMD5PasswordByLongId(const ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int getMatchedUserInfoList(const ::std::string& loginId, ::com::alisoft::member::udb::api::model::MatchedUserInfoSeq& matchedUserInfoSeq)
    {
        return getMatchedUserInfoList(loginId, matchedUserInfoSeq, 0);
    }
    ::Ice::Int getMatchedUserInfoList(const ::std::string& loginId, ::com::alisoft::member::udb::api::model::MatchedUserInfoSeq& matchedUserInfoSeq, const ::Ice::Context& __ctx)
    {
        return getMatchedUserInfoList(loginId, matchedUserInfoSeq, &__ctx);
    }
    
private:

    ::Ice::Int getMatchedUserInfoList(const ::std::string&, ::com::alisoft::member::udb::api::model::MatchedUserInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int checkSession(const ::std::string& longId, const ::std::string& sessionNo, bool& isRight)
    {
        return checkSession(longId, sessionNo, isRight, 0);
    }
    ::Ice::Int checkSession(const ::std::string& longId, const ::std::string& sessionNo, bool& isRight, const ::Ice::Context& __ctx)
    {
        return checkSession(longId, sessionNo, isRight, &__ctx);
    }
    
private:

    ::Ice::Int checkSession(const ::std::string&, const ::std::string&, bool&, const ::Ice::Context*);
    
public:

    ::Ice::Int changePasswordByUserId(const ::std::string& userId, const ::std::string& md5Password)
    {
        return changePasswordByUserId(userId, md5Password, 0);
    }
    ::Ice::Int changePasswordByUserId(const ::std::string& userId, const ::std::string& md5Password, const ::Ice::Context& __ctx)
    {
        return changePasswordByUserId(userId, md5Password, &__ctx);
    }
    
private:

    ::Ice::Int changePasswordByUserId(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int changePasswordByLongId(const ::std::string& longId, const ::std::string& md5Password)
    {
        return changePasswordByLongId(longId, md5Password, 0);
    }
    ::Ice::Int changePasswordByLongId(const ::std::string& longId, const ::std::string& md5Password, const ::Ice::Context& __ctx)
    {
        return changePasswordByLongId(longId, md5Password, &__ctx);
    }
    
private:

    ::Ice::Int changePasswordByLongId(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int updateLastLoginTime(const ::std::string& userId)
    {
        return updateLastLoginTime(userId, 0);
    }
    ::Ice::Int updateLastLoginTime(const ::std::string& userId, const ::Ice::Context& __ctx)
    {
        return updateLastLoginTime(userId, &__ctx);
    }
    
private:

    ::Ice::Int updateLastLoginTime(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int changeImBinding(const ::std::string& userId, const ::std::string& newLongId)
    {
        return changeImBinding(userId, newLongId, 0);
    }
    ::Ice::Int changeImBinding(const ::std::string& userId, const ::std::string& newLongId, const ::Ice::Context& __ctx)
    {
        return changeImBinding(userId, newLongId, &__ctx);
    }
    
private:

    ::Ice::Int changeImBinding(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int getImBinding(const ::std::string& userId, ::std::string& longId)
    {
        return getImBinding(userId, longId, 0);
    }
    ::Ice::Int getImBinding(const ::std::string& userId, ::std::string& longId, const ::Ice::Context& __ctx)
    {
        return getImBinding(userId, longId, &__ctx);
    }
    
private:

    ::Ice::Int getImBinding(const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int getRandomPassports(::Ice::Long min, ::Ice::Long max, ::Ice::Int amount, ::com::alisoft::member::udb::api::model::StringSeq& passports)
    {
        return getRandomPassports(min, max, amount, passports, 0);
    }
    ::Ice::Int getRandomPassports(::Ice::Long min, ::Ice::Long max, ::Ice::Int amount, ::com::alisoft::member::udb::api::model::StringSeq& passports, const ::Ice::Context& __ctx)
    {
        return getRandomPassports(min, max, amount, passports, &__ctx);
    }
    
private:

    ::Ice::Int getRandomPassports(::Ice::Long, ::Ice::Long, ::Ice::Int, ::com::alisoft::member::udb::api::model::StringSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int isPassportHold(const ::std::string& passort, bool& isHold)
    {
        return isPassportHold(passort, isHold, 0);
    }
    ::Ice::Int isPassportHold(const ::std::string& passort, bool& isHold, const ::Ice::Context& __ctx)
    {
        return isPassportHold(passort, isHold, &__ctx);
    }
    
private:

    ::Ice::Int isPassportHold(const ::std::string&, bool&, const ::Ice::Context*);
    
public:

    ::Ice::Int getDomainList(::com::alisoft::member::udb::api::model::DomainSeq& domainSeq)
    {
        return getDomainList(domainSeq, 0);
    }
    ::Ice::Int getDomainList(::com::alisoft::member::udb::api::model::DomainSeq& domainSeq, const ::Ice::Context& __ctx)
    {
        return getDomainList(domainSeq, &__ctx);
    }
    
private:

    ::Ice::Int getDomainList(::com::alisoft::member::udb::api::model::DomainSeq&, const ::Ice::Context*);
    
public:
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
};

}

}

}

}

}

}

}

namespace IceDelegate
{

namespace com
{

namespace alisoft
{

namespace member
{

namespace udb
{

namespace api
{

namespace user
{

class UserService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int registerUser(const ::com::alisoft::member::udb::api::model::Map&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int registerAlisoft(const ::com::alisoft::member::udb::api::model::Map&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int isCanRegister(const ::std::string&, bool&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int modifyUserInfo(const ::com::alisoft::member::udb::api::model::Map&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int modifyImToken(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int modifyAepImToken(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getAepImToken(const ::std::string&, ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int validateUser(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int validatePassport(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int loginNotify(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int recordCTULog(const ::com::alisoft::member::udb::api::model::Map&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int saveWebUserProfile(const ::com::alisoft::member::udb::api::model::Map&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int deleteUser(const ::std::string&, bool&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int prohibitUser(const ::std::string&, bool&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserBaseProfile(const ::std::string&, ::com::alisoft::member::udb::api::model::Map&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserWebProfile(const ::std::string&, ::com::alisoft::member::udb::api::model::UserProfile&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserWebBaseProfile(const ::std::string&, ::com::alisoft::member::udb::api::model::UserProfile&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserProfileByLongId(const ::std::string&, ::com::alisoft::member::udb::api::model::UserProfile&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserProfileListByLongId(const ::com::alisoft::member::udb::api::model::StringSeq&, ::com::alisoft::member::udb::api::model::UserProfileSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserProfileListByEmail(const ::com::alisoft::member::udb::api::model::StringSeq&, ::com::alisoft::member::udb::api::model::UserProfileSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserProfileByUserId(const ::std::string&, ::com::alisoft::member::udb::api::model::UserProfile&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserProfileListByUserId(const ::com::alisoft::member::udb::api::model::StringSeq&, ::com::alisoft::member::udb::api::model::UserProfileSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserIdByPassport(const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getLongIdByPassport(const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserIdByLongId(const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int isLongIdExist(const ::std::string&, bool&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getMD5PasswordByLongId(const ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getMatchedUserInfoList(const ::std::string&, ::com::alisoft::member::udb::api::model::MatchedUserInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int checkSession(const ::std::string&, const ::std::string&, bool&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int changePasswordByUserId(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int changePasswordByLongId(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int updateLastLoginTime(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int changeImBinding(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getImBinding(const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getRandomPassports(::Ice::Long, ::Ice::Long, ::Ice::Int, ::com::alisoft::member::udb::api::model::StringSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int isPassportHold(const ::std::string&, bool&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getDomainList(::com::alisoft::member::udb::api::model::DomainSeq&, const ::Ice::Context*) = 0;
};

}

}

}

}

}

}

}

namespace IceDelegateM
{

namespace com
{

namespace alisoft
{

namespace member
{

namespace udb
{

namespace api
{

namespace user
{

class UserService : virtual public ::IceDelegate::com::alisoft::member::udb::api::user::UserService,
                    virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int registerUser(const ::com::alisoft::member::udb::api::model::Map&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int registerAlisoft(const ::com::alisoft::member::udb::api::model::Map&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int isCanRegister(const ::std::string&, bool&, const ::Ice::Context*);

    virtual ::Ice::Int modifyUserInfo(const ::com::alisoft::member::udb::api::model::Map&, const ::Ice::Context*);

    virtual ::Ice::Int modifyImToken(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int modifyAepImToken(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getAepImToken(const ::std::string&, ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int validateUser(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int validatePassport(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int loginNotify(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int recordCTULog(const ::com::alisoft::member::udb::api::model::Map&, const ::Ice::Context*);

    virtual ::Ice::Int saveWebUserProfile(const ::com::alisoft::member::udb::api::model::Map&, const ::Ice::Context*);

    virtual ::Ice::Int deleteUser(const ::std::string&, bool&, const ::Ice::Context*);

    virtual ::Ice::Int prohibitUser(const ::std::string&, bool&, const ::Ice::Context*);

    virtual ::Ice::Int getUserBaseProfile(const ::std::string&, ::com::alisoft::member::udb::api::model::Map&, const ::Ice::Context*);

    virtual ::Ice::Int getUserWebProfile(const ::std::string&, ::com::alisoft::member::udb::api::model::UserProfile&, const ::Ice::Context*);

    virtual ::Ice::Int getUserWebBaseProfile(const ::std::string&, ::com::alisoft::member::udb::api::model::UserProfile&, const ::Ice::Context*);

    virtual ::Ice::Int getUserProfileByLongId(const ::std::string&, ::com::alisoft::member::udb::api::model::UserProfile&, const ::Ice::Context*);

    virtual ::Ice::Int getUserProfileListByLongId(const ::com::alisoft::member::udb::api::model::StringSeq&, ::com::alisoft::member::udb::api::model::UserProfileSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getUserProfileListByEmail(const ::com::alisoft::member::udb::api::model::StringSeq&, ::com::alisoft::member::udb::api::model::UserProfileSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getUserProfileByUserId(const ::std::string&, ::com::alisoft::member::udb::api::model::UserProfile&, const ::Ice::Context*);

    virtual ::Ice::Int getUserProfileListByUserId(const ::com::alisoft::member::udb::api::model::StringSeq&, ::com::alisoft::member::udb::api::model::UserProfileSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getUserIdByPassport(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getLongIdByPassport(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getUserIdByLongId(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int isLongIdExist(const ::std::string&, bool&, const ::Ice::Context*);

    virtual ::Ice::Int getMD5PasswordByLongId(const ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int getMatchedUserInfoList(const ::std::string&, ::com::alisoft::member::udb::api::model::MatchedUserInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int checkSession(const ::std::string&, const ::std::string&, bool&, const ::Ice::Context*);

    virtual ::Ice::Int changePasswordByUserId(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int changePasswordByLongId(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int updateLastLoginTime(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int changeImBinding(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getImBinding(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getRandomPassports(::Ice::Long, ::Ice::Long, ::Ice::Int, ::com::alisoft::member::udb::api::model::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int isPassportHold(const ::std::string&, bool&, const ::Ice::Context*);

    virtual ::Ice::Int getDomainList(::com::alisoft::member::udb::api::model::DomainSeq&, const ::Ice::Context*);
};

}

}

}

}

}

}

}

namespace IceDelegateD
{

namespace com
{

namespace alisoft
{

namespace member
{

namespace udb
{

namespace api
{

namespace user
{

class UserService : virtual public ::IceDelegate::com::alisoft::member::udb::api::user::UserService,
                    virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int registerUser(const ::com::alisoft::member::udb::api::model::Map&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int registerAlisoft(const ::com::alisoft::member::udb::api::model::Map&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int isCanRegister(const ::std::string&, bool&, const ::Ice::Context*);

    virtual ::Ice::Int modifyUserInfo(const ::com::alisoft::member::udb::api::model::Map&, const ::Ice::Context*);

    virtual ::Ice::Int modifyImToken(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int modifyAepImToken(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getAepImToken(const ::std::string&, ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int validateUser(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int validatePassport(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int loginNotify(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int recordCTULog(const ::com::alisoft::member::udb::api::model::Map&, const ::Ice::Context*);

    virtual ::Ice::Int saveWebUserProfile(const ::com::alisoft::member::udb::api::model::Map&, const ::Ice::Context*);

    virtual ::Ice::Int deleteUser(const ::std::string&, bool&, const ::Ice::Context*);

    virtual ::Ice::Int prohibitUser(const ::std::string&, bool&, const ::Ice::Context*);

    virtual ::Ice::Int getUserBaseProfile(const ::std::string&, ::com::alisoft::member::udb::api::model::Map&, const ::Ice::Context*);

    virtual ::Ice::Int getUserWebProfile(const ::std::string&, ::com::alisoft::member::udb::api::model::UserProfile&, const ::Ice::Context*);

    virtual ::Ice::Int getUserWebBaseProfile(const ::std::string&, ::com::alisoft::member::udb::api::model::UserProfile&, const ::Ice::Context*);

    virtual ::Ice::Int getUserProfileByLongId(const ::std::string&, ::com::alisoft::member::udb::api::model::UserProfile&, const ::Ice::Context*);

    virtual ::Ice::Int getUserProfileListByLongId(const ::com::alisoft::member::udb::api::model::StringSeq&, ::com::alisoft::member::udb::api::model::UserProfileSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getUserProfileListByEmail(const ::com::alisoft::member::udb::api::model::StringSeq&, ::com::alisoft::member::udb::api::model::UserProfileSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getUserProfileByUserId(const ::std::string&, ::com::alisoft::member::udb::api::model::UserProfile&, const ::Ice::Context*);

    virtual ::Ice::Int getUserProfileListByUserId(const ::com::alisoft::member::udb::api::model::StringSeq&, ::com::alisoft::member::udb::api::model::UserProfileSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getUserIdByPassport(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getLongIdByPassport(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getUserIdByLongId(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int isLongIdExist(const ::std::string&, bool&, const ::Ice::Context*);

    virtual ::Ice::Int getMD5PasswordByLongId(const ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int getMatchedUserInfoList(const ::std::string&, ::com::alisoft::member::udb::api::model::MatchedUserInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int checkSession(const ::std::string&, const ::std::string&, bool&, const ::Ice::Context*);

    virtual ::Ice::Int changePasswordByUserId(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int changePasswordByLongId(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int updateLastLoginTime(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int changeImBinding(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getImBinding(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getRandomPassports(::Ice::Long, ::Ice::Long, ::Ice::Int, ::com::alisoft::member::udb::api::model::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int isPassportHold(const ::std::string&, bool&, const ::Ice::Context*);

    virtual ::Ice::Int getDomainList(::com::alisoft::member::udb::api::model::DomainSeq&, const ::Ice::Context*);
};

}

}

}

}

}

}

}

namespace com
{

namespace alisoft
{

namespace member
{

namespace udb
{

namespace api
{

namespace user
{

class UserService : virtual public ::Ice::Object
{
public:

    typedef UserServicePrx ProxyType;
    typedef UserServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int registerUser(const ::com::alisoft::member::udb::api::model::Map&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___registerUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int registerAlisoft(const ::com::alisoft::member::udb::api::model::Map&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___registerAlisoft(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int isCanRegister(const ::std::string&, bool&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___isCanRegister(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int modifyUserInfo(const ::com::alisoft::member::udb::api::model::Map&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___modifyUserInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int modifyImToken(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___modifyImToken(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int modifyAepImToken(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___modifyAepImToken(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getAepImToken(const ::std::string&, ::std::string&, ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getAepImToken(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int validateUser(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___validateUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int validatePassport(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___validatePassport(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int loginNotify(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___loginNotify(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int recordCTULog(const ::com::alisoft::member::udb::api::model::Map&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___recordCTULog(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int saveWebUserProfile(const ::com::alisoft::member::udb::api::model::Map&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___saveWebUserProfile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int deleteUser(const ::std::string&, bool&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___deleteUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int prohibitUser(const ::std::string&, bool&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___prohibitUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUserBaseProfile(const ::std::string&, ::com::alisoft::member::udb::api::model::Map&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserBaseProfile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUserWebProfile(const ::std::string&, ::com::alisoft::member::udb::api::model::UserProfile&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserWebProfile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUserWebBaseProfile(const ::std::string&, ::com::alisoft::member::udb::api::model::UserProfile&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserWebBaseProfile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUserProfileByLongId(const ::std::string&, ::com::alisoft::member::udb::api::model::UserProfile&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserProfileByLongId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUserProfileListByLongId(const ::com::alisoft::member::udb::api::model::StringSeq&, ::com::alisoft::member::udb::api::model::UserProfileSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserProfileListByLongId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUserProfileListByEmail(const ::com::alisoft::member::udb::api::model::StringSeq&, ::com::alisoft::member::udb::api::model::UserProfileSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserProfileListByEmail(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUserProfileByUserId(const ::std::string&, ::com::alisoft::member::udb::api::model::UserProfile&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserProfileByUserId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUserProfileListByUserId(const ::com::alisoft::member::udb::api::model::StringSeq&, ::com::alisoft::member::udb::api::model::UserProfileSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserProfileListByUserId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUserIdByPassport(const ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserIdByPassport(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getLongIdByPassport(const ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getLongIdByPassport(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUserIdByLongId(const ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserIdByLongId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int isLongIdExist(const ::std::string&, bool&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___isLongIdExist(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getMD5PasswordByLongId(const ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getMD5PasswordByLongId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getMatchedUserInfoList(const ::std::string&, ::com::alisoft::member::udb::api::model::MatchedUserInfoSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getMatchedUserInfoList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int checkSession(const ::std::string&, const ::std::string&, bool&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___checkSession(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int changePasswordByUserId(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___changePasswordByUserId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int changePasswordByLongId(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___changePasswordByLongId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int updateLastLoginTime(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___updateLastLoginTime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int changeImBinding(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___changeImBinding(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getImBinding(const ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getImBinding(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getRandomPassports(::Ice::Long, ::Ice::Long, ::Ice::Int, ::com::alisoft::member::udb::api::model::StringSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getRandomPassports(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int isPassportHold(const ::std::string&, bool&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___isPassportHold(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getDomainList(::com::alisoft::member::udb::api::model::DomainSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getDomainList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__UserServicePtr(void*, ::Ice::ObjectPtr&);

}

}

}

}

}

}

#endif
