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

#include <user_ice_service.h>
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

static const ::std::string __com__alisoft__member__udb__api__user__UserService__registerUser_name = "registerUser";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__registerAlisoft_name = "registerAlisoft";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__isCanRegister_name = "isCanRegister";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__modifyUserInfo_name = "modifyUserInfo";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__modifyImToken_name = "modifyImToken";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__modifyAepImToken_name = "modifyAepImToken";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__getAepImToken_name = "getAepImToken";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__validateUser_name = "validateUser";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__validatePassport_name = "validatePassport";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__loginNotify_name = "loginNotify";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__recordCTULog_name = "recordCTULog";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__saveWebUserProfile_name = "saveWebUserProfile";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__deleteUser_name = "deleteUser";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__prohibitUser_name = "prohibitUser";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__getUserBaseProfile_name = "getUserBaseProfile";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__getUserWebProfile_name = "getUserWebProfile";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__getUserWebBaseProfile_name = "getUserWebBaseProfile";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__getUserProfileByLongId_name = "getUserProfileByLongId";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__getUserProfileListByLongId_name = "getUserProfileListByLongId";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__getUserProfileListByEmail_name = "getUserProfileListByEmail";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__getUserProfileByUserId_name = "getUserProfileByUserId";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__getUserProfileListByUserId_name = "getUserProfileListByUserId";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__getUserIdByPassport_name = "getUserIdByPassport";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__getLongIdByPassport_name = "getLongIdByPassport";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__getUserIdByLongId_name = "getUserIdByLongId";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__isLongIdExist_name = "isLongIdExist";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__getMD5PasswordByLongId_name = "getMD5PasswordByLongId";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__getMatchedUserInfoList_name = "getMatchedUserInfoList";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__checkSession_name = "checkSession";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__changePasswordByUserId_name = "changePasswordByUserId";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__changePasswordByLongId_name = "changePasswordByLongId";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__updateLastLoginTime_name = "updateLastLoginTime";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__changeImBinding_name = "changeImBinding";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__getImBinding_name = "getImBinding";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__getRandomPassports_name = "getRandomPassports";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__isPassportHold_name = "isPassportHold";

static const ::std::string __com__alisoft__member__udb__api__user__UserService__getDomainList_name = "getDomainList";

void
IceInternal::incRef(::com::alisoft::member::udb::api::user::UserService* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::com::alisoft::member::udb::api::user::UserService* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::com::alisoft::member::udb::api::user::UserService* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::com::alisoft::member::udb::api::user::UserService* p)
{
    p->__decRef();
}

void
com::alisoft::member::udb::api::user::__write(::IceInternal::BasicStream* __os, const ::com::alisoft::member::udb::api::user::UserServicePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
com::alisoft::member::udb::api::user::__read(::IceInternal::BasicStream* __is, ::com::alisoft::member::udb::api::user::UserServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::alisoft::member::udb::api::user::UserService;
        v->__copyFrom(proxy);
    }
}

void
com::alisoft::member::udb::api::user::__write(::IceInternal::BasicStream* __os, const ::com::alisoft::member::udb::api::user::UserServicePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

bool
com::alisoft::member::udb::api::model::Domain::operator==(const Domain& __rhs) const
{
    return !operator!=(__rhs);
}

bool
com::alisoft::member::udb::api::model::Domain::operator!=(const Domain& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(domainId != __rhs.domainId)
    {
        return true;
    }
    if(name != __rhs.name)
    {
        return true;
    }
    if(domainPrefix != __rhs.domainPrefix)
    {
        return true;
    }
    if(canLogin != __rhs.canLogin)
    {
        return true;
    }
    return false;
}

bool
com::alisoft::member::udb::api::model::Domain::operator<(const Domain& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(domainId < __rhs.domainId)
    {
        return true;
    }
    else if(__rhs.domainId < domainId)
    {
        return false;
    }
    if(name < __rhs.name)
    {
        return true;
    }
    else if(__rhs.name < name)
    {
        return false;
    }
    if(domainPrefix < __rhs.domainPrefix)
    {
        return true;
    }
    else if(__rhs.domainPrefix < domainPrefix)
    {
        return false;
    }
    if(canLogin < __rhs.canLogin)
    {
        return true;
    }
    else if(__rhs.canLogin < canLogin)
    {
        return false;
    }
    return false;
}

void
com::alisoft::member::udb::api::model::Domain::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(domainId);
    __os->write(name);
    __os->write(domainPrefix);
    __os->write(canLogin);
}

void
com::alisoft::member::udb::api::model::Domain::__read(::IceInternal::BasicStream* __is)
{
    __is->read(domainId);
    __is->read(name);
    __is->read(domainPrefix);
    __is->read(canLogin);
}

bool
com::alisoft::member::udb::api::model::UserProfile::operator==(const UserProfile& __rhs) const
{
    return !operator!=(__rhs);
}

bool
com::alisoft::member::udb::api::model::UserProfile::operator!=(const UserProfile& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(userId != __rhs.userId)
    {
        return true;
    }
    if(userName != __rhs.userName)
    {
        return true;
    }
    if(passport != __rhs.passport)
    {
        return true;
    }
    if(isDeleted != __rhs.isDeleted)
    {
        return true;
    }
    if(gmtCreate != __rhs.gmtCreate)
    {
        return true;
    }
    if(gmtModified != __rhs.gmtModified)
    {
        return true;
    }
    if(creator != __rhs.creator)
    {
        return true;
    }
    if(Modifier != __rhs.Modifier)
    {
        return true;
    }
    if(domainPrefix != __rhs.domainPrefix)
    {
        return true;
    }
    if(loginId != __rhs.loginId)
    {
        return true;
    }
    if(longId != __rhs.longId)
    {
        return true;
    }
    if(sourceType != __rhs.sourceType)
    {
        return true;
    }
    if(gmtLogin != __rhs.gmtLogin)
    {
        return true;
    }
    if(userStatus != __rhs.userStatus)
    {
        return true;
    }
    if(status != __rhs.status)
    {
        return true;
    }
    if(email != __rhs.email)
    {
        return true;
    }
    if(mobileNo != __rhs.mobileNo)
    {
        return true;
    }
    if(phoneNo != __rhs.phoneNo)
    {
        return true;
    }
    if(company != __rhs.company)
    {
        return true;
    }
    if(jobTitle != __rhs.jobTitle)
    {
        return true;
    }
    if(country != __rhs.country)
    {
        return true;
    }
    if(province != __rhs.province)
    {
        return true;
    }
    if(city != __rhs.city)
    {
        return true;
    }
    if(address != __rhs.address)
    {
        return true;
    }
    if(sex != __rhs.sex)
    {
        return true;
    }
    if(birthday != __rhs.birthday)
    {
        return true;
    }
    if(zip != __rhs.zip)
    {
        return true;
    }
    if(constellation != __rhs.constellation)
    {
        return true;
    }
    if(subCity != __rhs.subCity)
    {
        return true;
    }
    if(bloodType != __rhs.bloodType)
    {
        return true;
    }
    if(shengXiao != __rhs.shengXiao)
    {
        return true;
    }
    if(career != __rhs.career)
    {
        return true;
    }
    if(degree != __rhs.degree)
    {
        return true;
    }
    if(interest != __rhs.interest)
    {
        return true;
    }
    if(personality != __rhs.personality)
    {
        return true;
    }
    if(memo != __rhs.memo)
    {
        return true;
    }
    if(finishSchool != __rhs.finishSchool)
    {
        return true;
    }
    if(contactShowFlag != __rhs.contactShowFlag)
    {
        return true;
    }
    if(companyAddress != __rhs.companyAddress)
    {
        return true;
    }
    if(companyUrl != __rhs.companyUrl)
    {
        return true;
    }
    if(companyTel != __rhs.companyTel)
    {
        return true;
    }
    if(companyShowFlag != __rhs.companyShowFlag)
    {
        return true;
    }
    if(signature != __rhs.signature)
    {
        return true;
    }
    if(companyZip != __rhs.companyZip)
    {
        return true;
    }
    if(companyFax != __rhs.companyFax)
    {
        return true;
    }
    if(moreInterest != __rhs.moreInterest)
    {
        return true;
    }
    if(personalShowFlag != __rhs.personalShowFlag)
    {
        return true;
    }
    if(homePage != __rhs.homePage)
    {
        return true;
    }
    if(vocation != __rhs.vocation)
    {
        return true;
    }
    if(companyEmail != __rhs.companyEmail)
    {
        return true;
    }
    if(duty != __rhs.duty)
    {
        return true;
    }
    if(department != __rhs.department)
    {
        return true;
    }
    if(purchase != __rhs.purchase)
    {
        return true;
    }
    if(sales != __rhs.sales)
    {
        return true;
    }
    if(finishedPercent != __rhs.finishedPercent)
    {
        return true;
    }
    if(imgType != __rhs.imgType)
    {
        return true;
    }
    if(imgHashCode != __rhs.imgHashCode)
    {
        return true;
    }
    if(nickname != __rhs.nickname)
    {
        return true;
    }
    if(userLevel != __rhs.userLevel)
    {
        return true;
    }
    return false;
}

bool
com::alisoft::member::udb::api::model::UserProfile::operator<(const UserProfile& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(userId < __rhs.userId)
    {
        return true;
    }
    else if(__rhs.userId < userId)
    {
        return false;
    }
    if(userName < __rhs.userName)
    {
        return true;
    }
    else if(__rhs.userName < userName)
    {
        return false;
    }
    if(passport < __rhs.passport)
    {
        return true;
    }
    else if(__rhs.passport < passport)
    {
        return false;
    }
    if(isDeleted < __rhs.isDeleted)
    {
        return true;
    }
    else if(__rhs.isDeleted < isDeleted)
    {
        return false;
    }
    if(gmtCreate < __rhs.gmtCreate)
    {
        return true;
    }
    else if(__rhs.gmtCreate < gmtCreate)
    {
        return false;
    }
    if(gmtModified < __rhs.gmtModified)
    {
        return true;
    }
    else if(__rhs.gmtModified < gmtModified)
    {
        return false;
    }
    if(creator < __rhs.creator)
    {
        return true;
    }
    else if(__rhs.creator < creator)
    {
        return false;
    }
    if(Modifier < __rhs.Modifier)
    {
        return true;
    }
    else if(__rhs.Modifier < Modifier)
    {
        return false;
    }
    if(domainPrefix < __rhs.domainPrefix)
    {
        return true;
    }
    else if(__rhs.domainPrefix < domainPrefix)
    {
        return false;
    }
    if(loginId < __rhs.loginId)
    {
        return true;
    }
    else if(__rhs.loginId < loginId)
    {
        return false;
    }
    if(longId < __rhs.longId)
    {
        return true;
    }
    else if(__rhs.longId < longId)
    {
        return false;
    }
    if(sourceType < __rhs.sourceType)
    {
        return true;
    }
    else if(__rhs.sourceType < sourceType)
    {
        return false;
    }
    if(gmtLogin < __rhs.gmtLogin)
    {
        return true;
    }
    else if(__rhs.gmtLogin < gmtLogin)
    {
        return false;
    }
    if(userStatus < __rhs.userStatus)
    {
        return true;
    }
    else if(__rhs.userStatus < userStatus)
    {
        return false;
    }
    if(status < __rhs.status)
    {
        return true;
    }
    else if(__rhs.status < status)
    {
        return false;
    }
    if(email < __rhs.email)
    {
        return true;
    }
    else if(__rhs.email < email)
    {
        return false;
    }
    if(mobileNo < __rhs.mobileNo)
    {
        return true;
    }
    else if(__rhs.mobileNo < mobileNo)
    {
        return false;
    }
    if(phoneNo < __rhs.phoneNo)
    {
        return true;
    }
    else if(__rhs.phoneNo < phoneNo)
    {
        return false;
    }
    if(company < __rhs.company)
    {
        return true;
    }
    else if(__rhs.company < company)
    {
        return false;
    }
    if(jobTitle < __rhs.jobTitle)
    {
        return true;
    }
    else if(__rhs.jobTitle < jobTitle)
    {
        return false;
    }
    if(country < __rhs.country)
    {
        return true;
    }
    else if(__rhs.country < country)
    {
        return false;
    }
    if(province < __rhs.province)
    {
        return true;
    }
    else if(__rhs.province < province)
    {
        return false;
    }
    if(city < __rhs.city)
    {
        return true;
    }
    else if(__rhs.city < city)
    {
        return false;
    }
    if(address < __rhs.address)
    {
        return true;
    }
    else if(__rhs.address < address)
    {
        return false;
    }
    if(sex < __rhs.sex)
    {
        return true;
    }
    else if(__rhs.sex < sex)
    {
        return false;
    }
    if(birthday < __rhs.birthday)
    {
        return true;
    }
    else if(__rhs.birthday < birthday)
    {
        return false;
    }
    if(zip < __rhs.zip)
    {
        return true;
    }
    else if(__rhs.zip < zip)
    {
        return false;
    }
    if(constellation < __rhs.constellation)
    {
        return true;
    }
    else if(__rhs.constellation < constellation)
    {
        return false;
    }
    if(subCity < __rhs.subCity)
    {
        return true;
    }
    else if(__rhs.subCity < subCity)
    {
        return false;
    }
    if(bloodType < __rhs.bloodType)
    {
        return true;
    }
    else if(__rhs.bloodType < bloodType)
    {
        return false;
    }
    if(shengXiao < __rhs.shengXiao)
    {
        return true;
    }
    else if(__rhs.shengXiao < shengXiao)
    {
        return false;
    }
    if(career < __rhs.career)
    {
        return true;
    }
    else if(__rhs.career < career)
    {
        return false;
    }
    if(degree < __rhs.degree)
    {
        return true;
    }
    else if(__rhs.degree < degree)
    {
        return false;
    }
    if(interest < __rhs.interest)
    {
        return true;
    }
    else if(__rhs.interest < interest)
    {
        return false;
    }
    if(personality < __rhs.personality)
    {
        return true;
    }
    else if(__rhs.personality < personality)
    {
        return false;
    }
    if(memo < __rhs.memo)
    {
        return true;
    }
    else if(__rhs.memo < memo)
    {
        return false;
    }
    if(finishSchool < __rhs.finishSchool)
    {
        return true;
    }
    else if(__rhs.finishSchool < finishSchool)
    {
        return false;
    }
    if(contactShowFlag < __rhs.contactShowFlag)
    {
        return true;
    }
    else if(__rhs.contactShowFlag < contactShowFlag)
    {
        return false;
    }
    if(companyAddress < __rhs.companyAddress)
    {
        return true;
    }
    else if(__rhs.companyAddress < companyAddress)
    {
        return false;
    }
    if(companyUrl < __rhs.companyUrl)
    {
        return true;
    }
    else if(__rhs.companyUrl < companyUrl)
    {
        return false;
    }
    if(companyTel < __rhs.companyTel)
    {
        return true;
    }
    else if(__rhs.companyTel < companyTel)
    {
        return false;
    }
    if(companyShowFlag < __rhs.companyShowFlag)
    {
        return true;
    }
    else if(__rhs.companyShowFlag < companyShowFlag)
    {
        return false;
    }
    if(signature < __rhs.signature)
    {
        return true;
    }
    else if(__rhs.signature < signature)
    {
        return false;
    }
    if(companyZip < __rhs.companyZip)
    {
        return true;
    }
    else if(__rhs.companyZip < companyZip)
    {
        return false;
    }
    if(companyFax < __rhs.companyFax)
    {
        return true;
    }
    else if(__rhs.companyFax < companyFax)
    {
        return false;
    }
    if(moreInterest < __rhs.moreInterest)
    {
        return true;
    }
    else if(__rhs.moreInterest < moreInterest)
    {
        return false;
    }
    if(personalShowFlag < __rhs.personalShowFlag)
    {
        return true;
    }
    else if(__rhs.personalShowFlag < personalShowFlag)
    {
        return false;
    }
    if(homePage < __rhs.homePage)
    {
        return true;
    }
    else if(__rhs.homePage < homePage)
    {
        return false;
    }
    if(vocation < __rhs.vocation)
    {
        return true;
    }
    else if(__rhs.vocation < vocation)
    {
        return false;
    }
    if(companyEmail < __rhs.companyEmail)
    {
        return true;
    }
    else if(__rhs.companyEmail < companyEmail)
    {
        return false;
    }
    if(duty < __rhs.duty)
    {
        return true;
    }
    else if(__rhs.duty < duty)
    {
        return false;
    }
    if(department < __rhs.department)
    {
        return true;
    }
    else if(__rhs.department < department)
    {
        return false;
    }
    if(purchase < __rhs.purchase)
    {
        return true;
    }
    else if(__rhs.purchase < purchase)
    {
        return false;
    }
    if(sales < __rhs.sales)
    {
        return true;
    }
    else if(__rhs.sales < sales)
    {
        return false;
    }
    if(finishedPercent < __rhs.finishedPercent)
    {
        return true;
    }
    else if(__rhs.finishedPercent < finishedPercent)
    {
        return false;
    }
    if(imgType < __rhs.imgType)
    {
        return true;
    }
    else if(__rhs.imgType < imgType)
    {
        return false;
    }
    if(imgHashCode < __rhs.imgHashCode)
    {
        return true;
    }
    else if(__rhs.imgHashCode < imgHashCode)
    {
        return false;
    }
    if(nickname < __rhs.nickname)
    {
        return true;
    }
    else if(__rhs.nickname < nickname)
    {
        return false;
    }
    if(userLevel < __rhs.userLevel)
    {
        return true;
    }
    else if(__rhs.userLevel < userLevel)
    {
        return false;
    }
    return false;
}

void
com::alisoft::member::udb::api::model::UserProfile::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(userId);
    __os->write(userName);
    __os->write(passport);
    __os->write(isDeleted);
    __os->write(gmtCreate);
    __os->write(gmtModified);
    __os->write(creator);
    __os->write(Modifier);
    __os->write(domainPrefix);
    __os->write(loginId);
    __os->write(longId);
    __os->write(sourceType);
    __os->write(gmtLogin);
    __os->write(userStatus);
    __os->write(status);
    __os->write(email);
    __os->write(mobileNo);
    __os->write(phoneNo);
    __os->write(company);
    __os->write(jobTitle);
    __os->write(country);
    __os->write(province);
    __os->write(city);
    __os->write(address);
    __os->write(sex);
    __os->write(birthday);
    __os->write(zip);
    __os->write(constellation);
    __os->write(subCity);
    __os->write(bloodType);
    __os->write(shengXiao);
    __os->write(career);
    __os->write(degree);
    __os->write(interest);
    __os->write(personality);
    __os->write(memo);
    __os->write(finishSchool);
    __os->write(contactShowFlag);
    __os->write(companyAddress);
    __os->write(companyUrl);
    __os->write(companyTel);
    __os->write(companyShowFlag);
    __os->write(signature);
    __os->write(companyZip);
    __os->write(companyFax);
    __os->write(moreInterest);
    __os->write(personalShowFlag);
    __os->write(homePage);
    __os->write(vocation);
    __os->write(companyEmail);
    __os->write(duty);
    __os->write(department);
    __os->write(purchase);
    __os->write(sales);
    __os->write(finishedPercent);
    __os->write(imgType);
    __os->write(imgHashCode);
    __os->write(nickname);
    __os->write(userLevel);
}

void
com::alisoft::member::udb::api::model::UserProfile::__read(::IceInternal::BasicStream* __is)
{
    __is->read(userId);
    __is->read(userName);
    __is->read(passport);
    __is->read(isDeleted);
    __is->read(gmtCreate);
    __is->read(gmtModified);
    __is->read(creator);
    __is->read(Modifier);
    __is->read(domainPrefix);
    __is->read(loginId);
    __is->read(longId);
    __is->read(sourceType);
    __is->read(gmtLogin);
    __is->read(userStatus);
    __is->read(status);
    __is->read(email);
    __is->read(mobileNo);
    __is->read(phoneNo);
    __is->read(company);
    __is->read(jobTitle);
    __is->read(country);
    __is->read(province);
    __is->read(city);
    __is->read(address);
    __is->read(sex);
    __is->read(birthday);
    __is->read(zip);
    __is->read(constellation);
    __is->read(subCity);
    __is->read(bloodType);
    __is->read(shengXiao);
    __is->read(career);
    __is->read(degree);
    __is->read(interest);
    __is->read(personality);
    __is->read(memo);
    __is->read(finishSchool);
    __is->read(contactShowFlag);
    __is->read(companyAddress);
    __is->read(companyUrl);
    __is->read(companyTel);
    __is->read(companyShowFlag);
    __is->read(signature);
    __is->read(companyZip);
    __is->read(companyFax);
    __is->read(moreInterest);
    __is->read(personalShowFlag);
    __is->read(homePage);
    __is->read(vocation);
    __is->read(companyEmail);
    __is->read(duty);
    __is->read(department);
    __is->read(purchase);
    __is->read(sales);
    __is->read(finishedPercent);
    __is->read(imgType);
    __is->read(imgHashCode);
    __is->read(nickname);
    __is->read(userLevel);
}

void
com::alisoft::member::udb::api::model::__write(::IceInternal::BasicStream* __os, const ::com::alisoft::member::udb::api::model::UserProfile* begin, const ::com::alisoft::member::udb::api::model::UserProfile* end, ::com::alisoft::member::udb::api::model::__U__UserProfileSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
com::alisoft::member::udb::api::model::__read(::IceInternal::BasicStream* __is, ::com::alisoft::member::udb::api::model::UserProfileSeq& v, ::com::alisoft::member::udb::api::model::__U__UserProfileSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 77);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

bool
com::alisoft::member::udb::api::model::MatchedUserInfo::operator==(const MatchedUserInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
com::alisoft::member::udb::api::model::MatchedUserInfo::operator!=(const MatchedUserInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(longId != __rhs.longId)
    {
        return true;
    }
    if(name != __rhs.name)
    {
        return true;
    }
    if(activeState != __rhs.activeState)
    {
        return true;
    }
    return false;
}

bool
com::alisoft::member::udb::api::model::MatchedUserInfo::operator<(const MatchedUserInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(longId < __rhs.longId)
    {
        return true;
    }
    else if(__rhs.longId < longId)
    {
        return false;
    }
    if(name < __rhs.name)
    {
        return true;
    }
    else if(__rhs.name < name)
    {
        return false;
    }
    if(activeState < __rhs.activeState)
    {
        return true;
    }
    else if(__rhs.activeState < activeState)
    {
        return false;
    }
    return false;
}

void
com::alisoft::member::udb::api::model::MatchedUserInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(longId);
    __os->write(name);
    __os->write(activeState);
}

void
com::alisoft::member::udb::api::model::MatchedUserInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(longId);
    __is->read(name);
    __is->read(activeState);
}

void
com::alisoft::member::udb::api::model::__write(::IceInternal::BasicStream* __os, const ::com::alisoft::member::udb::api::model::MatchedUserInfo* begin, const ::com::alisoft::member::udb::api::model::MatchedUserInfo* end, ::com::alisoft::member::udb::api::model::__U__MatchedUserInfoSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
com::alisoft::member::udb::api::model::__read(::IceInternal::BasicStream* __is, ::com::alisoft::member::udb::api::model::MatchedUserInfoSeq& v, ::com::alisoft::member::udb::api::model::__U__MatchedUserInfoSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 3);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
com::alisoft::member::udb::api::model::__write(::IceInternal::BasicStream* __os, const ::com::alisoft::member::udb::api::model::Domain* begin, const ::com::alisoft::member::udb::api::model::Domain* end, ::com::alisoft::member::udb::api::model::__U__DomainSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
com::alisoft::member::udb::api::model::__read(::IceInternal::BasicStream* __is, ::com::alisoft::member::udb::api::model::DomainSeq& v, ::com::alisoft::member::udb::api::model::__U__DomainSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 4);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
com::alisoft::member::udb::api::user::__addObject(const UserServicePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
com::alisoft::member::udb::api::user::__usesClasses(const UserServicePtr& p)
{
    return p->__usesClasses();
}

void
com::alisoft::member::udb::api::user::__decRefUnsafe(const UserServicePtr& p)
{
    p->__decRefUnsafe();
}

void
com::alisoft::member::udb::api::user::__clearHandleUnsafe(UserServicePtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::com::alisoft::member::udb::api::user::UserService::registerUser(const ::com::alisoft::member::udb::api::model::Map& registerInfo, ::std::string& userId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__registerUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->registerUser(registerInfo, userId, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::registerAlisoft(const ::com::alisoft::member::udb::api::model::Map& registerInfo, ::std::string& userId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__registerAlisoft_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->registerAlisoft(registerInfo, userId, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::isCanRegister(const ::std::string& passport, bool& isCan, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__isCanRegister_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->isCanRegister(passport, isCan, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::modifyUserInfo(const ::com::alisoft::member::udb::api::model::Map& updateInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__modifyUserInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->modifyUserInfo(updateInfo, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::modifyImToken(const ::std::string& longId, const ::std::string& imToken, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__modifyImToken_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->modifyImToken(longId, imToken, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::modifyAepImToken(const ::std::string& longId, const ::std::string& imToken, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__modifyAepImToken_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->modifyAepImToken(longId, imToken, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::getAepImToken(const ::std::string& longId, ::std::string& imToken, ::std::string& md5pwd, ::std::string& userStatus, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__getAepImToken_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->getAepImToken(longId, imToken, md5pwd, userStatus, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::validateUser(const ::std::string& longId, const ::std::string& password, ::std::string& passport, ::std::string& retLongId, ::std::string& userId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__validateUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->validateUser(longId, password, passport, retLongId, userId, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::validatePassport(const ::std::string& passport, const ::std::string& password, ::std::string& longId, ::std::string& userId, ::std::string& md5pw, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__validatePassport_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->validatePassport(passport, password, longId, userId, md5pw, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::loginNotify(const ::std::string& longId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__loginNotify_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->loginNotify(longId, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::recordCTULog(const ::com::alisoft::member::udb::api::model::Map& ctuLogInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__recordCTULog_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->recordCTULog(ctuLogInfo, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::saveWebUserProfile(const ::com::alisoft::member::udb::api::model::Map& userBaseProfile, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__saveWebUserProfile_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->saveWebUserProfile(userBaseProfile, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::deleteUser(const ::std::string& longId, bool& success, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__deleteUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->deleteUser(longId, success, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::prohibitUser(const ::std::string& longId, bool& success, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__prohibitUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->prohibitUser(longId, success, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::getUserBaseProfile(const ::std::string& longId, ::com::alisoft::member::udb::api::model::Map& userBaseProfile, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__getUserBaseProfile_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->getUserBaseProfile(longId, userBaseProfile, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::getUserWebProfile(const ::std::string& longId, ::com::alisoft::member::udb::api::model::UserProfile& userProfile, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__getUserWebProfile_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->getUserWebProfile(longId, userProfile, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::getUserWebBaseProfile(const ::std::string& longId, ::com::alisoft::member::udb::api::model::UserProfile& userProfile, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__getUserWebBaseProfile_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->getUserWebBaseProfile(longId, userProfile, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::getUserProfileByLongId(const ::std::string& longId, ::com::alisoft::member::udb::api::model::UserProfile& userProfile, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__getUserProfileByLongId_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->getUserProfileByLongId(longId, userProfile, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::getUserProfileListByLongId(const ::com::alisoft::member::udb::api::model::StringSeq& longIds, ::com::alisoft::member::udb::api::model::UserProfileSeq& userProfileSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__getUserProfileListByLongId_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->getUserProfileListByLongId(longIds, userProfileSeq, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::getUserProfileListByEmail(const ::com::alisoft::member::udb::api::model::StringSeq& emails, ::com::alisoft::member::udb::api::model::UserProfileSeq& userProfileSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__getUserProfileListByEmail_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->getUserProfileListByEmail(emails, userProfileSeq, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::getUserProfileByUserId(const ::std::string& userId, ::com::alisoft::member::udb::api::model::UserProfile& userProfile, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__getUserProfileByUserId_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->getUserProfileByUserId(userId, userProfile, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::getUserProfileListByUserId(const ::com::alisoft::member::udb::api::model::StringSeq& userIds, ::com::alisoft::member::udb::api::model::UserProfileSeq& userProfileSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__getUserProfileListByUserId_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->getUserProfileListByUserId(userIds, userProfileSeq, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::getUserIdByPassport(const ::std::string& passport, ::std::string& userId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__getUserIdByPassport_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->getUserIdByPassport(passport, userId, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::getLongIdByPassport(const ::std::string& passport, ::std::string& longId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__getLongIdByPassport_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->getLongIdByPassport(passport, longId, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::getUserIdByLongId(const ::std::string& longId, ::std::string& userId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__getUserIdByLongId_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->getUserIdByLongId(longId, userId, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::isLongIdExist(const ::std::string& longId, bool& isExist, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__isLongIdExist_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->isLongIdExist(longId, isExist, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::getMD5PasswordByLongId(const ::std::string& longId, ::std::string& md5pwd, ::Ice::Int& status, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__getMD5PasswordByLongId_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->getMD5PasswordByLongId(longId, md5pwd, status, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::getMatchedUserInfoList(const ::std::string& loginId, ::com::alisoft::member::udb::api::model::MatchedUserInfoSeq& matchedUserInfoSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__getMatchedUserInfoList_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->getMatchedUserInfoList(loginId, matchedUserInfoSeq, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::checkSession(const ::std::string& longId, const ::std::string& sessionNo, bool& isRight, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__checkSession_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->checkSession(longId, sessionNo, isRight, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::changePasswordByUserId(const ::std::string& userId, const ::std::string& md5Password, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__changePasswordByUserId_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->changePasswordByUserId(userId, md5Password, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::changePasswordByLongId(const ::std::string& longId, const ::std::string& md5Password, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__changePasswordByLongId_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->changePasswordByLongId(longId, md5Password, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::updateLastLoginTime(const ::std::string& userId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__updateLastLoginTime_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->updateLastLoginTime(userId, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::changeImBinding(const ::std::string& userId, const ::std::string& newLongId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__changeImBinding_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->changeImBinding(userId, newLongId, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::getImBinding(const ::std::string& userId, ::std::string& longId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__getImBinding_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->getImBinding(userId, longId, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::getRandomPassports(::Ice::Long min, ::Ice::Long max, ::Ice::Int amount, ::com::alisoft::member::udb::api::model::StringSeq& passports, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__getRandomPassports_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->getRandomPassports(min, max, amount, passports, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::isPassportHold(const ::std::string& passort, bool& isHold, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__isPassportHold_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->isPassportHold(passort, isHold, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::getDomainList(::com::alisoft::member::udb::api::model::DomainSeq& domainSeq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__com__alisoft__member__udb__api__user__UserService__getDomainList_name);
            __delBase = __getDelegate();
            ::IceDelegate::com::alisoft::member::udb::api::user::UserService* __del = dynamic_cast< ::IceDelegate::com::alisoft::member::udb::api::user::UserService*>(__delBase.get());
            return __del->getDomainList(domainSeq, __ctx);
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
IceProxy::com::alisoft::member::udb::api::user::UserService::ice_staticId()
{
    return ::com::alisoft::member::udb::api::user::UserService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::alisoft::member::udb::api::user::UserService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::alisoft::member::udb::api::user::UserService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::alisoft::member::udb::api::user::UserService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::alisoft::member::udb::api::user::UserService);
}

bool
IceProxy::com::alisoft::member::udb::api::user::operator==(const ::IceProxy::com::alisoft::member::udb::api::user::UserService& l, const ::IceProxy::com::alisoft::member::udb::api::user::UserService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::com::alisoft::member::udb::api::user::operator!=(const ::IceProxy::com::alisoft::member::udb::api::user::UserService& l, const ::IceProxy::com::alisoft::member::udb::api::user::UserService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::com::alisoft::member::udb::api::user::operator<(const ::IceProxy::com::alisoft::member::udb::api::user::UserService& l, const ::IceProxy::com::alisoft::member::udb::api::user::UserService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::com::alisoft::member::udb::api::user::operator<=(const ::IceProxy::com::alisoft::member::udb::api::user::UserService& l, const ::IceProxy::com::alisoft::member::udb::api::user::UserService& r)
{
    return l < r || l == r;
}

bool
IceProxy::com::alisoft::member::udb::api::user::operator>(const ::IceProxy::com::alisoft::member::udb::api::user::UserService& l, const ::IceProxy::com::alisoft::member::udb::api::user::UserService& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::com::alisoft::member::udb::api::user::operator>=(const ::IceProxy::com::alisoft::member::udb::api::user::UserService& l, const ::IceProxy::com::alisoft::member::udb::api::user::UserService& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::com::alisoft::member::udb::api::user::UserService::registerUser(const ::com::alisoft::member::udb::api::model::Map& registerInfo, ::std::string& userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__registerUser_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        ::com::alisoft::member::udb::api::model::__write(__os, registerInfo, ::com::alisoft::member::udb::api::model::__U__Map());
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
        __is->read(userId);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::alisoft::member::udb::api::user::UserService::registerAlisoft(const ::com::alisoft::member::udb::api::model::Map& registerInfo, ::std::string& userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__registerAlisoft_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        ::com::alisoft::member::udb::api::model::__write(__os, registerInfo, ::com::alisoft::member::udb::api::model::__U__Map());
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
        __is->read(userId);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::alisoft::member::udb::api::user::UserService::isCanRegister(const ::std::string& passport, bool& isCan, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__isCanRegister_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(passport);
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
        __is->read(isCan);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::alisoft::member::udb::api::user::UserService::modifyUserInfo(const ::com::alisoft::member::udb::api::model::Map& updateInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__modifyUserInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        ::com::alisoft::member::udb::api::model::__write(__os, updateInfo, ::com::alisoft::member::udb::api::model::__U__Map());
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
IceDelegateM::com::alisoft::member::udb::api::user::UserService::modifyImToken(const ::std::string& longId, const ::std::string& imToken, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__modifyImToken_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longId);
        __os->write(imToken);
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
IceDelegateM::com::alisoft::member::udb::api::user::UserService::modifyAepImToken(const ::std::string& longId, const ::std::string& imToken, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__modifyAepImToken_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longId);
        __os->write(imToken);
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
IceDelegateM::com::alisoft::member::udb::api::user::UserService::getAepImToken(const ::std::string& longId, ::std::string& imToken, ::std::string& md5pwd, ::std::string& userStatus, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__getAepImToken_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longId);
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
        __is->read(imToken);
        __is->read(md5pwd);
        __is->read(userStatus);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::alisoft::member::udb::api::user::UserService::validateUser(const ::std::string& longId, const ::std::string& password, ::std::string& passport, ::std::string& retLongId, ::std::string& userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__validateUser_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longId);
        __os->write(password);
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
        __is->read(passport);
        __is->read(retLongId);
        __is->read(userId);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::alisoft::member::udb::api::user::UserService::validatePassport(const ::std::string& passport, const ::std::string& password, ::std::string& longId, ::std::string& userId, ::std::string& md5pw, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__validatePassport_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(passport);
        __os->write(password);
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
        __is->read(longId);
        __is->read(userId);
        __is->read(md5pw);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::alisoft::member::udb::api::user::UserService::loginNotify(const ::std::string& longId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__loginNotify_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longId);
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
IceDelegateM::com::alisoft::member::udb::api::user::UserService::recordCTULog(const ::com::alisoft::member::udb::api::model::Map& ctuLogInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__recordCTULog_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        ::com::alisoft::member::udb::api::model::__write(__os, ctuLogInfo, ::com::alisoft::member::udb::api::model::__U__Map());
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
IceDelegateM::com::alisoft::member::udb::api::user::UserService::saveWebUserProfile(const ::com::alisoft::member::udb::api::model::Map& userBaseProfile, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__saveWebUserProfile_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        ::com::alisoft::member::udb::api::model::__write(__os, userBaseProfile, ::com::alisoft::member::udb::api::model::__U__Map());
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
IceDelegateM::com::alisoft::member::udb::api::user::UserService::deleteUser(const ::std::string& longId, bool& success, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__deleteUser_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longId);
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
        __is->read(success);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::alisoft::member::udb::api::user::UserService::prohibitUser(const ::std::string& longId, bool& success, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__prohibitUser_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longId);
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
        __is->read(success);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::alisoft::member::udb::api::user::UserService::getUserBaseProfile(const ::std::string& longId, ::com::alisoft::member::udb::api::model::Map& userBaseProfile, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__getUserBaseProfile_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longId);
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
        ::com::alisoft::member::udb::api::model::__read(__is, userBaseProfile, ::com::alisoft::member::udb::api::model::__U__Map());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::alisoft::member::udb::api::user::UserService::getUserWebProfile(const ::std::string& longId, ::com::alisoft::member::udb::api::model::UserProfile& userProfile, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__getUserWebProfile_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longId);
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
        userProfile.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::alisoft::member::udb::api::user::UserService::getUserWebBaseProfile(const ::std::string& longId, ::com::alisoft::member::udb::api::model::UserProfile& userProfile, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__getUserWebBaseProfile_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longId);
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
        userProfile.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::alisoft::member::udb::api::user::UserService::getUserProfileByLongId(const ::std::string& longId, ::com::alisoft::member::udb::api::model::UserProfile& userProfile, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__getUserProfileByLongId_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longId);
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
        userProfile.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::alisoft::member::udb::api::user::UserService::getUserProfileListByLongId(const ::com::alisoft::member::udb::api::model::StringSeq& longIds, ::com::alisoft::member::udb::api::model::UserProfileSeq& userProfileSeq, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__getUserProfileListByLongId_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(longIds.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&longIds[0], &longIds[0] + longIds.size());
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
        ::com::alisoft::member::udb::api::model::__read(__is, userProfileSeq, ::com::alisoft::member::udb::api::model::__U__UserProfileSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::alisoft::member::udb::api::user::UserService::getUserProfileListByEmail(const ::com::alisoft::member::udb::api::model::StringSeq& emails, ::com::alisoft::member::udb::api::model::UserProfileSeq& userProfileSeq, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__getUserProfileListByEmail_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(emails.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&emails[0], &emails[0] + emails.size());
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
        ::com::alisoft::member::udb::api::model::__read(__is, userProfileSeq, ::com::alisoft::member::udb::api::model::__U__UserProfileSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::alisoft::member::udb::api::user::UserService::getUserProfileByUserId(const ::std::string& userId, ::com::alisoft::member::udb::api::model::UserProfile& userProfile, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__getUserProfileByUserId_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        userProfile.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::alisoft::member::udb::api::user::UserService::getUserProfileListByUserId(const ::com::alisoft::member::udb::api::model::StringSeq& userIds, ::com::alisoft::member::udb::api::model::UserProfileSeq& userProfileSeq, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__getUserProfileListByUserId_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(userIds.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&userIds[0], &userIds[0] + userIds.size());
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
        ::com::alisoft::member::udb::api::model::__read(__is, userProfileSeq, ::com::alisoft::member::udb::api::model::__U__UserProfileSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::alisoft::member::udb::api::user::UserService::getUserIdByPassport(const ::std::string& passport, ::std::string& userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__getUserIdByPassport_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(passport);
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
        __is->read(userId);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::alisoft::member::udb::api::user::UserService::getLongIdByPassport(const ::std::string& passport, ::std::string& longId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__getLongIdByPassport_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(passport);
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
        __is->read(longId);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::alisoft::member::udb::api::user::UserService::getUserIdByLongId(const ::std::string& longId, ::std::string& userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__getUserIdByLongId_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longId);
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
        __is->read(userId);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::alisoft::member::udb::api::user::UserService::isLongIdExist(const ::std::string& longId, bool& isExist, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__isLongIdExist_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longId);
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
        __is->read(isExist);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::alisoft::member::udb::api::user::UserService::getMD5PasswordByLongId(const ::std::string& longId, ::std::string& md5pwd, ::Ice::Int& status, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__getMD5PasswordByLongId_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longId);
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
        __is->read(md5pwd);
        __is->read(status);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::alisoft::member::udb::api::user::UserService::getMatchedUserInfoList(const ::std::string& loginId, ::com::alisoft::member::udb::api::model::MatchedUserInfoSeq& matchedUserInfoSeq, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__getMatchedUserInfoList_name, ::Ice::Normal, __context, __compress);
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
        ::com::alisoft::member::udb::api::model::__read(__is, matchedUserInfoSeq, ::com::alisoft::member::udb::api::model::__U__MatchedUserInfoSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::alisoft::member::udb::api::user::UserService::checkSession(const ::std::string& longId, const ::std::string& sessionNo, bool& isRight, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__checkSession_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longId);
        __os->write(sessionNo);
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
        __is->read(isRight);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::alisoft::member::udb::api::user::UserService::changePasswordByUserId(const ::std::string& userId, const ::std::string& md5Password, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__changePasswordByUserId_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(md5Password);
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
IceDelegateM::com::alisoft::member::udb::api::user::UserService::changePasswordByLongId(const ::std::string& longId, const ::std::string& md5Password, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__changePasswordByLongId_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longId);
        __os->write(md5Password);
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
IceDelegateM::com::alisoft::member::udb::api::user::UserService::updateLastLoginTime(const ::std::string& userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__updateLastLoginTime_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
IceDelegateM::com::alisoft::member::udb::api::user::UserService::changeImBinding(const ::std::string& userId, const ::std::string& newLongId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__changeImBinding_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(newLongId);
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
IceDelegateM::com::alisoft::member::udb::api::user::UserService::getImBinding(const ::std::string& userId, ::std::string& longId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__getImBinding_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        __is->read(longId);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::alisoft::member::udb::api::user::UserService::getRandomPassports(::Ice::Long min, ::Ice::Long max, ::Ice::Int amount, ::com::alisoft::member::udb::api::model::StringSeq& passports, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__getRandomPassports_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(min);
        __os->write(max);
        __os->write(amount);
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
        __is->read(passports);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::alisoft::member::udb::api::user::UserService::isPassportHold(const ::std::string& passort, bool& isHold, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__isPassportHold_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(passort);
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
        __is->read(isHold);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::alisoft::member::udb::api::user::UserService::getDomainList(::com::alisoft::member::udb::api::model::DomainSeq& domainSeq, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __com__alisoft__member__udb__api__user__UserService__getDomainList_name, ::Ice::Normal, __context, __compress);
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
        ::com::alisoft::member::udb::api::model::__read(__is, domainSeq, ::com::alisoft::member::udb::api::model::__U__DomainSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::registerUser(const ::com::alisoft::member::udb::api::model::Map& registerInfo, ::std::string& userId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__registerUser_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->registerUser(registerInfo, userId, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::registerAlisoft(const ::com::alisoft::member::udb::api::model::Map& registerInfo, ::std::string& userId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__registerAlisoft_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->registerAlisoft(registerInfo, userId, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::isCanRegister(const ::std::string& passport, bool& isCan, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__isCanRegister_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->isCanRegister(passport, isCan, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::modifyUserInfo(const ::com::alisoft::member::udb::api::model::Map& updateInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__modifyUserInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->modifyUserInfo(updateInfo, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::modifyImToken(const ::std::string& longId, const ::std::string& imToken, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__modifyImToken_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->modifyImToken(longId, imToken, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::modifyAepImToken(const ::std::string& longId, const ::std::string& imToken, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__modifyAepImToken_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->modifyAepImToken(longId, imToken, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::getAepImToken(const ::std::string& longId, ::std::string& imToken, ::std::string& md5pwd, ::std::string& userStatus, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__getAepImToken_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getAepImToken(longId, imToken, md5pwd, userStatus, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::validateUser(const ::std::string& longId, const ::std::string& password, ::std::string& passport, ::std::string& retLongId, ::std::string& userId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__validateUser_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->validateUser(longId, password, passport, retLongId, userId, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::validatePassport(const ::std::string& passport, const ::std::string& password, ::std::string& longId, ::std::string& userId, ::std::string& md5pw, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__validatePassport_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->validatePassport(passport, password, longId, userId, md5pw, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::loginNotify(const ::std::string& longId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__loginNotify_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->loginNotify(longId, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::recordCTULog(const ::com::alisoft::member::udb::api::model::Map& ctuLogInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__recordCTULog_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->recordCTULog(ctuLogInfo, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::saveWebUserProfile(const ::com::alisoft::member::udb::api::model::Map& userBaseProfile, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__saveWebUserProfile_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->saveWebUserProfile(userBaseProfile, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::deleteUser(const ::std::string& longId, bool& success, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__deleteUser_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->deleteUser(longId, success, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::prohibitUser(const ::std::string& longId, bool& success, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__prohibitUser_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->prohibitUser(longId, success, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::getUserBaseProfile(const ::std::string& longId, ::com::alisoft::member::udb::api::model::Map& userBaseProfile, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__getUserBaseProfile_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getUserBaseProfile(longId, userBaseProfile, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::getUserWebProfile(const ::std::string& longId, ::com::alisoft::member::udb::api::model::UserProfile& userProfile, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__getUserWebProfile_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getUserWebProfile(longId, userProfile, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::getUserWebBaseProfile(const ::std::string& longId, ::com::alisoft::member::udb::api::model::UserProfile& userProfile, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__getUserWebBaseProfile_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getUserWebBaseProfile(longId, userProfile, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::getUserProfileByLongId(const ::std::string& longId, ::com::alisoft::member::udb::api::model::UserProfile& userProfile, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__getUserProfileByLongId_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getUserProfileByLongId(longId, userProfile, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::getUserProfileListByLongId(const ::com::alisoft::member::udb::api::model::StringSeq& longIds, ::com::alisoft::member::udb::api::model::UserProfileSeq& userProfileSeq, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__getUserProfileListByLongId_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getUserProfileListByLongId(longIds, userProfileSeq, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::getUserProfileListByEmail(const ::com::alisoft::member::udb::api::model::StringSeq& emails, ::com::alisoft::member::udb::api::model::UserProfileSeq& userProfileSeq, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__getUserProfileListByEmail_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getUserProfileListByEmail(emails, userProfileSeq, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::getUserProfileByUserId(const ::std::string& userId, ::com::alisoft::member::udb::api::model::UserProfile& userProfile, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__getUserProfileByUserId_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getUserProfileByUserId(userId, userProfile, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::getUserProfileListByUserId(const ::com::alisoft::member::udb::api::model::StringSeq& userIds, ::com::alisoft::member::udb::api::model::UserProfileSeq& userProfileSeq, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__getUserProfileListByUserId_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getUserProfileListByUserId(userIds, userProfileSeq, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::getUserIdByPassport(const ::std::string& passport, ::std::string& userId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__getUserIdByPassport_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getUserIdByPassport(passport, userId, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::getLongIdByPassport(const ::std::string& passport, ::std::string& longId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__getLongIdByPassport_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getLongIdByPassport(passport, longId, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::getUserIdByLongId(const ::std::string& longId, ::std::string& userId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__getUserIdByLongId_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getUserIdByLongId(longId, userId, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::isLongIdExist(const ::std::string& longId, bool& isExist, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__isLongIdExist_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->isLongIdExist(longId, isExist, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::getMD5PasswordByLongId(const ::std::string& longId, ::std::string& md5pwd, ::Ice::Int& status, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__getMD5PasswordByLongId_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getMD5PasswordByLongId(longId, md5pwd, status, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::getMatchedUserInfoList(const ::std::string& loginId, ::com::alisoft::member::udb::api::model::MatchedUserInfoSeq& matchedUserInfoSeq, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__getMatchedUserInfoList_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getMatchedUserInfoList(loginId, matchedUserInfoSeq, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::checkSession(const ::std::string& longId, const ::std::string& sessionNo, bool& isRight, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__checkSession_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->checkSession(longId, sessionNo, isRight, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::changePasswordByUserId(const ::std::string& userId, const ::std::string& md5Password, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__changePasswordByUserId_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->changePasswordByUserId(userId, md5Password, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::changePasswordByLongId(const ::std::string& longId, const ::std::string& md5Password, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__changePasswordByLongId_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->changePasswordByLongId(longId, md5Password, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::updateLastLoginTime(const ::std::string& userId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__updateLastLoginTime_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->updateLastLoginTime(userId, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::changeImBinding(const ::std::string& userId, const ::std::string& newLongId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__changeImBinding_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->changeImBinding(userId, newLongId, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::getImBinding(const ::std::string& userId, ::std::string& longId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__getImBinding_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getImBinding(userId, longId, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::getRandomPassports(::Ice::Long min, ::Ice::Long max, ::Ice::Int amount, ::com::alisoft::member::udb::api::model::StringSeq& passports, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__getRandomPassports_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getRandomPassports(min, max, amount, passports, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::isPassportHold(const ::std::string& passort, bool& isHold, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__isPassportHold_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->isPassportHold(passort, isHold, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::com::alisoft::member::udb::api::user::UserService::getDomainList(::com::alisoft::member::udb::api::model::DomainSeq& domainSeq, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __com__alisoft__member__udb__api__user__UserService__getDomainList_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::com::alisoft::member::udb::api::user::UserService* __servant = dynamic_cast< ::com::alisoft::member::udb::api::user::UserService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getDomainList(domainSeq, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::ObjectPtr
com::alisoft::member::udb::api::user::UserService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __com__alisoft__member__udb__api__user__UserService_ids[2] =
{
    "::Ice::Object",
    "::com::alisoft::member::udb::api::user::UserService"
};

bool
com::alisoft::member::udb::api::user::UserService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__alisoft__member__udb__api__user__UserService_ids, __com__alisoft__member__udb__api__user__UserService_ids + 2, _s);
}

::std::vector< ::std::string>
com::alisoft::member::udb::api::user::UserService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__alisoft__member__udb__api__user__UserService_ids[0], &__com__alisoft__member__udb__api__user__UserService_ids[2]);
}

const ::std::string&
com::alisoft::member::udb::api::user::UserService::ice_id(const ::Ice::Current&) const
{
    return __com__alisoft__member__udb__api__user__UserService_ids[1];
}

const ::std::string&
com::alisoft::member::udb::api::user::UserService::ice_staticId()
{
    return __com__alisoft__member__udb__api__user__UserService_ids[1];
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___registerUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::alisoft::member::udb::api::model::Map registerInfo;
    ::com::alisoft::member::udb::api::model::__read(__is, registerInfo, ::com::alisoft::member::udb::api::model::__U__Map());
    ::std::string userId;
    ::Ice::Int __ret = registerUser(registerInfo, userId, __current);
    __os->write(userId);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___registerAlisoft(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::alisoft::member::udb::api::model::Map registerInfo;
    ::com::alisoft::member::udb::api::model::__read(__is, registerInfo, ::com::alisoft::member::udb::api::model::__U__Map());
    ::std::string userId;
    ::Ice::Int __ret = registerAlisoft(registerInfo, userId, __current);
    __os->write(userId);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___isCanRegister(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string passport;
    __is->read(passport);
    bool isCan;
    ::Ice::Int __ret = isCanRegister(passport, isCan, __current);
    __os->write(isCan);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___modifyUserInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::alisoft::member::udb::api::model::Map updateInfo;
    ::com::alisoft::member::udb::api::model::__read(__is, updateInfo, ::com::alisoft::member::udb::api::model::__U__Map());
    ::Ice::Int __ret = modifyUserInfo(updateInfo, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___modifyImToken(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longId;
    ::std::string imToken;
    __is->read(longId);
    __is->read(imToken);
    ::Ice::Int __ret = modifyImToken(longId, imToken, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___modifyAepImToken(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longId;
    ::std::string imToken;
    __is->read(longId);
    __is->read(imToken);
    ::Ice::Int __ret = modifyAepImToken(longId, imToken, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___getAepImToken(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longId;
    __is->read(longId);
    ::std::string imToken;
    ::std::string md5pwd;
    ::std::string userStatus;
    ::Ice::Int __ret = getAepImToken(longId, imToken, md5pwd, userStatus, __current);
    __os->write(imToken);
    __os->write(md5pwd);
    __os->write(userStatus);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___validateUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longId;
    ::std::string password;
    __is->read(longId);
    __is->read(password);
    ::std::string passport;
    ::std::string retLongId;
    ::std::string userId;
    ::Ice::Int __ret = validateUser(longId, password, passport, retLongId, userId, __current);
    __os->write(passport);
    __os->write(retLongId);
    __os->write(userId);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___validatePassport(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string passport;
    ::std::string password;
    __is->read(passport);
    __is->read(password);
    ::std::string longId;
    ::std::string userId;
    ::std::string md5pw;
    ::Ice::Int __ret = validatePassport(passport, password, longId, userId, md5pw, __current);
    __os->write(longId);
    __os->write(userId);
    __os->write(md5pw);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___loginNotify(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longId;
    __is->read(longId);
    ::Ice::Int __ret = loginNotify(longId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___recordCTULog(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::alisoft::member::udb::api::model::Map ctuLogInfo;
    ::com::alisoft::member::udb::api::model::__read(__is, ctuLogInfo, ::com::alisoft::member::udb::api::model::__U__Map());
    ::Ice::Int __ret = recordCTULog(ctuLogInfo, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___saveWebUserProfile(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::alisoft::member::udb::api::model::Map userBaseProfile;
    ::com::alisoft::member::udb::api::model::__read(__is, userBaseProfile, ::com::alisoft::member::udb::api::model::__U__Map());
    ::Ice::Int __ret = saveWebUserProfile(userBaseProfile, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___deleteUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longId;
    __is->read(longId);
    bool success;
    ::Ice::Int __ret = deleteUser(longId, success, __current);
    __os->write(success);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___prohibitUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longId;
    __is->read(longId);
    bool success;
    ::Ice::Int __ret = prohibitUser(longId, success, __current);
    __os->write(success);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___getUserBaseProfile(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longId;
    __is->read(longId);
    ::com::alisoft::member::udb::api::model::Map userBaseProfile;
    ::Ice::Int __ret = getUserBaseProfile(longId, userBaseProfile, __current);
    ::com::alisoft::member::udb::api::model::__write(__os, userBaseProfile, ::com::alisoft::member::udb::api::model::__U__Map());
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___getUserWebProfile(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longId;
    __is->read(longId);
    ::com::alisoft::member::udb::api::model::UserProfile userProfile;
    ::Ice::Int __ret = getUserWebProfile(longId, userProfile, __current);
    userProfile.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___getUserWebBaseProfile(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longId;
    __is->read(longId);
    ::com::alisoft::member::udb::api::model::UserProfile userProfile;
    ::Ice::Int __ret = getUserWebBaseProfile(longId, userProfile, __current);
    userProfile.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___getUserProfileByLongId(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longId;
    __is->read(longId);
    ::com::alisoft::member::udb::api::model::UserProfile userProfile;
    ::Ice::Int __ret = getUserProfileByLongId(longId, userProfile, __current);
    userProfile.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___getUserProfileListByLongId(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::alisoft::member::udb::api::model::StringSeq longIds;
    __is->read(longIds);
    ::com::alisoft::member::udb::api::model::UserProfileSeq userProfileSeq;
    ::Ice::Int __ret = getUserProfileListByLongId(longIds, userProfileSeq, __current);
    if(userProfileSeq.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::com::alisoft::member::udb::api::model::__write(__os, &userProfileSeq[0], &userProfileSeq[0] + userProfileSeq.size(), ::com::alisoft::member::udb::api::model::__U__UserProfileSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___getUserProfileListByEmail(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::alisoft::member::udb::api::model::StringSeq emails;
    __is->read(emails);
    ::com::alisoft::member::udb::api::model::UserProfileSeq userProfileSeq;
    ::Ice::Int __ret = getUserProfileListByEmail(emails, userProfileSeq, __current);
    if(userProfileSeq.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::com::alisoft::member::udb::api::model::__write(__os, &userProfileSeq[0], &userProfileSeq[0] + userProfileSeq.size(), ::com::alisoft::member::udb::api::model::__U__UserProfileSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___getUserProfileByUserId(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::com::alisoft::member::udb::api::model::UserProfile userProfile;
    ::Ice::Int __ret = getUserProfileByUserId(userId, userProfile, __current);
    userProfile.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___getUserProfileListByUserId(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::alisoft::member::udb::api::model::StringSeq userIds;
    __is->read(userIds);
    ::com::alisoft::member::udb::api::model::UserProfileSeq userProfileSeq;
    ::Ice::Int __ret = getUserProfileListByUserId(userIds, userProfileSeq, __current);
    if(userProfileSeq.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::com::alisoft::member::udb::api::model::__write(__os, &userProfileSeq[0], &userProfileSeq[0] + userProfileSeq.size(), ::com::alisoft::member::udb::api::model::__U__UserProfileSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___getUserIdByPassport(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string passport;
    __is->read(passport);
    ::std::string userId;
    ::Ice::Int __ret = getUserIdByPassport(passport, userId, __current);
    __os->write(userId);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___getLongIdByPassport(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string passport;
    __is->read(passport);
    ::std::string longId;
    ::Ice::Int __ret = getLongIdByPassport(passport, longId, __current);
    __os->write(longId);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___getUserIdByLongId(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longId;
    __is->read(longId);
    ::std::string userId;
    ::Ice::Int __ret = getUserIdByLongId(longId, userId, __current);
    __os->write(userId);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___isLongIdExist(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longId;
    __is->read(longId);
    bool isExist;
    ::Ice::Int __ret = isLongIdExist(longId, isExist, __current);
    __os->write(isExist);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___getMD5PasswordByLongId(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longId;
    __is->read(longId);
    ::std::string md5pwd;
    ::Ice::Int status;
    ::Ice::Int __ret = getMD5PasswordByLongId(longId, md5pwd, status, __current);
    __os->write(md5pwd);
    __os->write(status);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___getMatchedUserInfoList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string loginId;
    __is->read(loginId);
    ::com::alisoft::member::udb::api::model::MatchedUserInfoSeq matchedUserInfoSeq;
    ::Ice::Int __ret = getMatchedUserInfoList(loginId, matchedUserInfoSeq, __current);
    if(matchedUserInfoSeq.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::com::alisoft::member::udb::api::model::__write(__os, &matchedUserInfoSeq[0], &matchedUserInfoSeq[0] + matchedUserInfoSeq.size(), ::com::alisoft::member::udb::api::model::__U__MatchedUserInfoSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___checkSession(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longId;
    ::std::string sessionNo;
    __is->read(longId);
    __is->read(sessionNo);
    bool isRight;
    ::Ice::Int __ret = checkSession(longId, sessionNo, isRight, __current);
    __os->write(isRight);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___changePasswordByUserId(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::std::string md5Password;
    __is->read(userId);
    __is->read(md5Password);
    ::Ice::Int __ret = changePasswordByUserId(userId, md5Password, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___changePasswordByLongId(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longId;
    ::std::string md5Password;
    __is->read(longId);
    __is->read(md5Password);
    ::Ice::Int __ret = changePasswordByLongId(longId, md5Password, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___updateLastLoginTime(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::Ice::Int __ret = updateLastLoginTime(userId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___changeImBinding(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::std::string newLongId;
    __is->read(userId);
    __is->read(newLongId);
    ::Ice::Int __ret = changeImBinding(userId, newLongId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___getImBinding(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::std::string longId;
    ::Ice::Int __ret = getImBinding(userId, longId, __current);
    __os->write(longId);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___getRandomPassports(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Long min;
    ::Ice::Long max;
    ::Ice::Int amount;
    __is->read(min);
    __is->read(max);
    __is->read(amount);
    ::com::alisoft::member::udb::api::model::StringSeq passports;
    ::Ice::Int __ret = getRandomPassports(min, max, amount, passports, __current);
    if(passports.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&passports[0], &passports[0] + passports.size());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___isPassportHold(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string passort;
    __is->read(passort);
    bool isHold;
    ::Ice::Int __ret = isPassportHold(passort, isHold, __current);
    __os->write(isHold);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::___getDomainList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::alisoft::member::udb::api::model::DomainSeq domainSeq;
    ::Ice::Int __ret = getDomainList(domainSeq, __current);
    if(domainSeq.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::com::alisoft::member::udb::api::model::__write(__os, &domainSeq[0], &domainSeq[0] + domainSeq.size(), ::com::alisoft::member::udb::api::model::__U__DomainSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __com__alisoft__member__udb__api__user__UserService_all[] =
{
    "changeImBinding",
    "changePasswordByLongId",
    "changePasswordByUserId",
    "checkSession",
    "deleteUser",
    "getAepImToken",
    "getDomainList",
    "getImBinding",
    "getLongIdByPassport",
    "getMD5PasswordByLongId",
    "getMatchedUserInfoList",
    "getRandomPassports",
    "getUserBaseProfile",
    "getUserIdByLongId",
    "getUserIdByPassport",
    "getUserProfileByLongId",
    "getUserProfileByUserId",
    "getUserProfileListByEmail",
    "getUserProfileListByLongId",
    "getUserProfileListByUserId",
    "getUserWebBaseProfile",
    "getUserWebProfile",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "isCanRegister",
    "isLongIdExist",
    "isPassportHold",
    "loginNotify",
    "modifyAepImToken",
    "modifyImToken",
    "modifyUserInfo",
    "prohibitUser",
    "recordCTULog",
    "registerAlisoft",
    "registerUser",
    "saveWebUserProfile",
    "updateLastLoginTime",
    "validatePassport",
    "validateUser"
};

::IceInternal::DispatchStatus
com::alisoft::member::udb::api::user::UserService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__com__alisoft__member__udb__api__user__UserService_all, __com__alisoft__member__udb__api__user__UserService_all + 41, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __com__alisoft__member__udb__api__user__UserService_all)
    {
        case 0:
        {
            return ___changeImBinding(in, current);
        }
        case 1:
        {
            return ___changePasswordByLongId(in, current);
        }
        case 2:
        {
            return ___changePasswordByUserId(in, current);
        }
        case 3:
        {
            return ___checkSession(in, current);
        }
        case 4:
        {
            return ___deleteUser(in, current);
        }
        case 5:
        {
            return ___getAepImToken(in, current);
        }
        case 6:
        {
            return ___getDomainList(in, current);
        }
        case 7:
        {
            return ___getImBinding(in, current);
        }
        case 8:
        {
            return ___getLongIdByPassport(in, current);
        }
        case 9:
        {
            return ___getMD5PasswordByLongId(in, current);
        }
        case 10:
        {
            return ___getMatchedUserInfoList(in, current);
        }
        case 11:
        {
            return ___getRandomPassports(in, current);
        }
        case 12:
        {
            return ___getUserBaseProfile(in, current);
        }
        case 13:
        {
            return ___getUserIdByLongId(in, current);
        }
        case 14:
        {
            return ___getUserIdByPassport(in, current);
        }
        case 15:
        {
            return ___getUserProfileByLongId(in, current);
        }
        case 16:
        {
            return ___getUserProfileByUserId(in, current);
        }
        case 17:
        {
            return ___getUserProfileListByEmail(in, current);
        }
        case 18:
        {
            return ___getUserProfileListByLongId(in, current);
        }
        case 19:
        {
            return ___getUserProfileListByUserId(in, current);
        }
        case 20:
        {
            return ___getUserWebBaseProfile(in, current);
        }
        case 21:
        {
            return ___getUserWebProfile(in, current);
        }
        case 22:
        {
            return ___ice_id(in, current);
        }
        case 23:
        {
            return ___ice_ids(in, current);
        }
        case 24:
        {
            return ___ice_isA(in, current);
        }
        case 25:
        {
            return ___ice_ping(in, current);
        }
        case 26:
        {
            return ___isCanRegister(in, current);
        }
        case 27:
        {
            return ___isLongIdExist(in, current);
        }
        case 28:
        {
            return ___isPassportHold(in, current);
        }
        case 29:
        {
            return ___loginNotify(in, current);
        }
        case 30:
        {
            return ___modifyAepImToken(in, current);
        }
        case 31:
        {
            return ___modifyImToken(in, current);
        }
        case 32:
        {
            return ___modifyUserInfo(in, current);
        }
        case 33:
        {
            return ___prohibitUser(in, current);
        }
        case 34:
        {
            return ___recordCTULog(in, current);
        }
        case 35:
        {
            return ___registerAlisoft(in, current);
        }
        case 36:
        {
            return ___registerUser(in, current);
        }
        case 37:
        {
            return ___saveWebUserProfile(in, current);
        }
        case 38:
        {
            return ___updateLastLoginTime(in, current);
        }
        case 39:
        {
            return ___validatePassport(in, current);
        }
        case 40:
        {
            return ___validateUser(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
com::alisoft::member::udb::api::user::UserService::__write(::IceInternal::BasicStream* __os) const
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
com::alisoft::member::udb::api::user::UserService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
com::alisoft::member::udb::api::user::UserService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::alisoft::member::udb::api::user::UserService was not generated with stream support";
    throw ex;
}

void
com::alisoft::member::udb::api::user::UserService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::alisoft::member::udb::api::user::UserService was not generated with stream support";
    throw ex;
}

void 
com::alisoft::member::udb::api::user::__patch__UserServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::alisoft::member::udb::api::user::UserServicePtr* p = static_cast< ::com::alisoft::member::udb::api::user::UserServicePtr*>(__addr);
    assert(p);
    *p = ::com::alisoft::member::udb::api::user::UserServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::com::alisoft::member::udb::api::user::UserService::ice_staticId();
        throw e;
    }
}

bool
com::alisoft::member::udb::api::user::operator==(const ::com::alisoft::member::udb::api::user::UserService& l, const ::com::alisoft::member::udb::api::user::UserService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::alisoft::member::udb::api::user::operator!=(const ::com::alisoft::member::udb::api::user::UserService& l, const ::com::alisoft::member::udb::api::user::UserService& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
com::alisoft::member::udb::api::user::operator<(const ::com::alisoft::member::udb::api::user::UserService& l, const ::com::alisoft::member::udb::api::user::UserService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
com::alisoft::member::udb::api::user::operator<=(const ::com::alisoft::member::udb::api::user::UserService& l, const ::com::alisoft::member::udb::api::user::UserService& r)
{
    return l < r || l == r;
}

bool
com::alisoft::member::udb::api::user::operator>(const ::com::alisoft::member::udb::api::user::UserService& l, const ::com::alisoft::member::udb::api::user::UserService& r)
{
    return !(l < r) && !(l == r);
}

bool
com::alisoft::member::udb::api::user::operator>=(const ::com::alisoft::member::udb::api::user::UserService& l, const ::com::alisoft::member::udb::api::user::UserService& r)
{
    return !(l < r);
}
