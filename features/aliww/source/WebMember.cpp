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

#include <WebMember.h>
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

static const ::std::string __WebMember__UserProfile__GetSimpleUserProfile_name = "GetSimpleUserProfile";

static const ::std::string __WebMember__UserProfile__GetHalfUserProfile_name = "GetHalfUserProfile";

static const ::std::string __WebMember__UserProfile__GetFullUserProfile_name = "GetFullUserProfile";

static const ::std::string __WebMember__UserProfile__GetUserLevels_name = "GetUserLevels";

static const ::std::string __WebMember__UserProfile__GetUidByPenname_name = "GetUidByPenname";

static const ::std::string __WebMember__UserProfile__GetPassword_name = "GetPassword";

static const ::std::string __WebMember__UserProfile__GetUDBUserProfile_name = "GetUDBUserProfile";

static const ::std::string __WebMember__UserProfile__GetHalfUserProfile2_name = "GetHalfUserProfile2";

static const ::std::string __WebMember__UserProfile__GetFullUserProfile2_name = "GetFullUserProfile2";

void
IceInternal::incRef(::WebMember::UserProfile* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::WebMember::UserProfile* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::WebMember::UserProfile* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::WebMember::UserProfile* p)
{
    p->__decRef();
}

void
WebMember::__write(::IceInternal::BasicStream* __os, const ::WebMember::UserProfilePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
WebMember::__read(::IceInternal::BasicStream* __is, ::WebMember::UserProfilePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::WebMember::UserProfile;
        v->__copyFrom(proxy);
    }
}

void
WebMember::__write(::IceInternal::BasicStream* __os, const ::WebMember::UserProfilePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

bool
WebMember::SSimpleUserProfile::operator==(const SSimpleUserProfile& __rhs) const
{
    return !operator!=(__rhs);
}

bool
WebMember::SSimpleUserProfile::operator!=(const SSimpleUserProfile& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(uid != __rhs.uid)
    {
        return true;
    }
    if(password != __rhs.password)
    {
        return true;
    }
    if(status != __rhs.status)
    {
        return true;
    }
    return false;
}

bool
WebMember::SSimpleUserProfile::operator<(const SSimpleUserProfile& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(uid < __rhs.uid)
    {
        return true;
    }
    else if(__rhs.uid < uid)
    {
        return false;
    }
    if(password < __rhs.password)
    {
        return true;
    }
    else if(__rhs.password < password)
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
    return false;
}

void
WebMember::SSimpleUserProfile::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(uid);
    __os->write(password);
    __os->write(status);
}

void
WebMember::SSimpleUserProfile::__read(::IceInternal::BasicStream* __is)
{
    __is->read(uid);
    __is->read(password);
    __is->read(status);
}

bool
WebMember::SHalfUserProfile::operator==(const SHalfUserProfile& __rhs) const
{
    return !operator!=(__rhs);
}

bool
WebMember::SHalfUserProfile::operator!=(const SHalfUserProfile& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(uid != __rhs.uid)
    {
        return true;
    }
    if(password != __rhs.password)
    {
        return true;
    }
    if(status != __rhs.status)
    {
        return true;
    }
    if(realName != __rhs.realName)
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
    if(memberLevel != __rhs.memberLevel)
    {
        return true;
    }
    if(penName != __rhs.penName)
    {
        return true;
    }
    if(categoryId != __rhs.categoryId)
    {
        return true;
    }
    if(phoneArea != __rhs.phoneArea)
    {
        return true;
    }
    if(phoneStatus != __rhs.phoneStatus)
    {
        return true;
    }
    if(phone != __rhs.phone)
    {
        return true;
    }
    return false;
}

bool
WebMember::SHalfUserProfile::operator<(const SHalfUserProfile& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(uid < __rhs.uid)
    {
        return true;
    }
    else if(__rhs.uid < uid)
    {
        return false;
    }
    if(password < __rhs.password)
    {
        return true;
    }
    else if(__rhs.password < password)
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
    if(realName < __rhs.realName)
    {
        return true;
    }
    else if(__rhs.realName < realName)
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
    if(memberLevel < __rhs.memberLevel)
    {
        return true;
    }
    else if(__rhs.memberLevel < memberLevel)
    {
        return false;
    }
    if(penName < __rhs.penName)
    {
        return true;
    }
    else if(__rhs.penName < penName)
    {
        return false;
    }
    if(categoryId < __rhs.categoryId)
    {
        return true;
    }
    else if(__rhs.categoryId < categoryId)
    {
        return false;
    }
    if(phoneArea < __rhs.phoneArea)
    {
        return true;
    }
    else if(__rhs.phoneArea < phoneArea)
    {
        return false;
    }
    if(phoneStatus < __rhs.phoneStatus)
    {
        return true;
    }
    else if(__rhs.phoneStatus < phoneStatus)
    {
        return false;
    }
    if(phone < __rhs.phone)
    {
        return true;
    }
    else if(__rhs.phone < phone)
    {
        return false;
    }
    return false;
}

void
WebMember::SHalfUserProfile::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(uid);
    __os->write(password);
    __os->write(status);
    __os->write(realName);
    __os->write(company);
    __os->write(jobTitle);
    __os->write(memberLevel);
    __os->write(penName);
    __os->write(categoryId);
    __os->write(phoneArea);
    __os->write(phoneStatus);
    __os->write(phone);
}

void
WebMember::SHalfUserProfile::__read(::IceInternal::BasicStream* __is)
{
    __is->read(uid);
    __is->read(password);
    __is->read(status);
    __is->read(realName);
    __is->read(company);
    __is->read(jobTitle);
    __is->read(memberLevel);
    __is->read(penName);
    __is->read(categoryId);
    __is->read(phoneArea);
    __is->read(phoneStatus);
    __is->read(phone);
}

bool
WebMember::SFullUserProfile::operator==(const SFullUserProfile& __rhs) const
{
    return !operator!=(__rhs);
}

bool
WebMember::SFullUserProfile::operator!=(const SFullUserProfile& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(uid != __rhs.uid)
    {
        return true;
    }
    if(password != __rhs.password)
    {
        return true;
    }
    if(status != __rhs.status)
    {
        return true;
    }
    if(realName != __rhs.realName)
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
    if(memberLevel != __rhs.memberLevel)
    {
        return true;
    }
    if(penName != __rhs.penName)
    {
        return true;
    }
    if(categoryId != __rhs.categoryId)
    {
        return true;
    }
    if(phoneArea != __rhs.phoneArea)
    {
        return true;
    }
    if(phoneStatus != __rhs.phoneStatus)
    {
        return true;
    }
    if(phone != __rhs.phone)
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
    if(sex != __rhs.sex)
    {
        return true;
    }
    if(address != __rhs.address)
    {
        return true;
    }
    if(buyKeywords != __rhs.buyKeywords)
    {
        return true;
    }
    if(saleKeywords != __rhs.saleKeywords)
    {
        return true;
    }
    if(faxNo != __rhs.faxNo)
    {
        return true;
    }
    if(homepageUrl != __rhs.homepageUrl)
    {
        return true;
    }
    return false;
}

bool
WebMember::SFullUserProfile::operator<(const SFullUserProfile& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(uid < __rhs.uid)
    {
        return true;
    }
    else if(__rhs.uid < uid)
    {
        return false;
    }
    if(password < __rhs.password)
    {
        return true;
    }
    else if(__rhs.password < password)
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
    if(realName < __rhs.realName)
    {
        return true;
    }
    else if(__rhs.realName < realName)
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
    if(memberLevel < __rhs.memberLevel)
    {
        return true;
    }
    else if(__rhs.memberLevel < memberLevel)
    {
        return false;
    }
    if(penName < __rhs.penName)
    {
        return true;
    }
    else if(__rhs.penName < penName)
    {
        return false;
    }
    if(categoryId < __rhs.categoryId)
    {
        return true;
    }
    else if(__rhs.categoryId < categoryId)
    {
        return false;
    }
    if(phoneArea < __rhs.phoneArea)
    {
        return true;
    }
    else if(__rhs.phoneArea < phoneArea)
    {
        return false;
    }
    if(phoneStatus < __rhs.phoneStatus)
    {
        return true;
    }
    else if(__rhs.phoneStatus < phoneStatus)
    {
        return false;
    }
    if(phone < __rhs.phone)
    {
        return true;
    }
    else if(__rhs.phone < phone)
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
    if(sex < __rhs.sex)
    {
        return true;
    }
    else if(__rhs.sex < sex)
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
    if(buyKeywords < __rhs.buyKeywords)
    {
        return true;
    }
    else if(__rhs.buyKeywords < buyKeywords)
    {
        return false;
    }
    if(saleKeywords < __rhs.saleKeywords)
    {
        return true;
    }
    else if(__rhs.saleKeywords < saleKeywords)
    {
        return false;
    }
    if(faxNo < __rhs.faxNo)
    {
        return true;
    }
    else if(__rhs.faxNo < faxNo)
    {
        return false;
    }
    if(homepageUrl < __rhs.homepageUrl)
    {
        return true;
    }
    else if(__rhs.homepageUrl < homepageUrl)
    {
        return false;
    }
    return false;
}

void
WebMember::SFullUserProfile::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(uid);
    __os->write(password);
    __os->write(status);
    __os->write(realName);
    __os->write(company);
    __os->write(jobTitle);
    __os->write(memberLevel);
    __os->write(penName);
    __os->write(categoryId);
    __os->write(phoneArea);
    __os->write(phoneStatus);
    __os->write(phone);
    __os->write(email);
    __os->write(mobileNo);
    __os->write(sex);
    __os->write(address);
    __os->write(buyKeywords);
    __os->write(saleKeywords);
    __os->write(faxNo);
    __os->write(homepageUrl);
}

void
WebMember::SFullUserProfile::__read(::IceInternal::BasicStream* __is)
{
    __is->read(uid);
    __is->read(password);
    __is->read(status);
    __is->read(realName);
    __is->read(company);
    __is->read(jobTitle);
    __is->read(memberLevel);
    __is->read(penName);
    __is->read(categoryId);
    __is->read(phoneArea);
    __is->read(phoneStatus);
    __is->read(phone);
    __is->read(email);
    __is->read(mobileNo);
    __is->read(sex);
    __is->read(address);
    __is->read(buyKeywords);
    __is->read(saleKeywords);
    __is->read(faxNo);
    __is->read(homepageUrl);
}

bool
WebMember::SUDBUserProfile::operator==(const SUDBUserProfile& __rhs) const
{
    return !operator!=(__rhs);
}

bool
WebMember::SUDBUserProfile::operator!=(const SUDBUserProfile& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(memberId != __rhs.memberId)
    {
        return true;
    }
    if(realName != __rhs.realName)
    {
        return true;
    }
    if(password != __rhs.password)
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
    if(phone != __rhs.phone)
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
    if(homepageUrl != __rhs.homepageUrl)
    {
        return true;
    }
    if(memberLevel != __rhs.memberLevel)
    {
        return true;
    }
    if(penName != __rhs.penName)
    {
        return true;
    }
    if(phoneStatus != __rhs.phoneStatus)
    {
        return true;
    }
    if(sex != __rhs.sex)
    {
        return true;
    }
    if(jobTitle != __rhs.jobTitle)
    {
        return true;
    }
    if(company != __rhs.company)
    {
        return true;
    }
    if(zip != __rhs.zip)
    {
        return true;
    }
    return false;
}

bool
WebMember::SUDBUserProfile::operator<(const SUDBUserProfile& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(memberId < __rhs.memberId)
    {
        return true;
    }
    else if(__rhs.memberId < memberId)
    {
        return false;
    }
    if(realName < __rhs.realName)
    {
        return true;
    }
    else if(__rhs.realName < realName)
    {
        return false;
    }
    if(password < __rhs.password)
    {
        return true;
    }
    else if(__rhs.password < password)
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
    if(phone < __rhs.phone)
    {
        return true;
    }
    else if(__rhs.phone < phone)
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
    if(homepageUrl < __rhs.homepageUrl)
    {
        return true;
    }
    else if(__rhs.homepageUrl < homepageUrl)
    {
        return false;
    }
    if(memberLevel < __rhs.memberLevel)
    {
        return true;
    }
    else if(__rhs.memberLevel < memberLevel)
    {
        return false;
    }
    if(penName < __rhs.penName)
    {
        return true;
    }
    else if(__rhs.penName < penName)
    {
        return false;
    }
    if(phoneStatus < __rhs.phoneStatus)
    {
        return true;
    }
    else if(__rhs.phoneStatus < phoneStatus)
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
    if(jobTitle < __rhs.jobTitle)
    {
        return true;
    }
    else if(__rhs.jobTitle < jobTitle)
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
    if(zip < __rhs.zip)
    {
        return true;
    }
    else if(__rhs.zip < zip)
    {
        return false;
    }
    return false;
}

void
WebMember::SUDBUserProfile::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(memberId);
    __os->write(realName);
    __os->write(password);
    __os->write(status);
    __os->write(email);
    __os->write(mobileNo);
    __os->write(phone);
    __os->write(country);
    __os->write(province);
    __os->write(city);
    __os->write(address);
    __os->write(homepageUrl);
    __os->write(memberLevel);
    __os->write(penName);
    __os->write(phoneStatus);
    __os->write(sex);
    __os->write(jobTitle);
    __os->write(company);
    __os->write(zip);
}

void
WebMember::SUDBUserProfile::__read(::IceInternal::BasicStream* __is)
{
    __is->read(memberId);
    __is->read(realName);
    __is->read(password);
    __is->read(status);
    __is->read(email);
    __is->read(mobileNo);
    __is->read(phone);
    __is->read(country);
    __is->read(province);
    __is->read(city);
    __is->read(address);
    __is->read(homepageUrl);
    __is->read(memberLevel);
    __is->read(penName);
    __is->read(phoneStatus);
    __is->read(sex);
    __is->read(jobTitle);
    __is->read(company);
    __is->read(zip);
}

bool
WebMember::SUserLevel::operator==(const SUserLevel& __rhs) const
{
    return !operator!=(__rhs);
}

bool
WebMember::SUserLevel::operator!=(const SUserLevel& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(memberId != __rhs.memberId)
    {
        return true;
    }
    if(memberLevel != __rhs.memberLevel)
    {
        return true;
    }
    return false;
}

bool
WebMember::SUserLevel::operator<(const SUserLevel& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(memberId < __rhs.memberId)
    {
        return true;
    }
    else if(__rhs.memberId < memberId)
    {
        return false;
    }
    if(memberLevel < __rhs.memberLevel)
    {
        return true;
    }
    else if(__rhs.memberLevel < memberLevel)
    {
        return false;
    }
    return false;
}

void
WebMember::SUserLevel::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(memberId);
    __os->write(memberLevel);
}

void
WebMember::SUserLevel::__read(::IceInternal::BasicStream* __is)
{
    __is->read(memberId);
    __is->read(memberLevel);
}

bool
WebMember::SHalfUserProfile2::operator==(const SHalfUserProfile2& __rhs) const
{
    return !operator!=(__rhs);
}

bool
WebMember::SHalfUserProfile2::operator!=(const SHalfUserProfile2& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(uid != __rhs.uid)
    {
        return true;
    }
    if(password != __rhs.password)
    {
        return true;
    }
    if(status != __rhs.status)
    {
        return true;
    }
    if(realName != __rhs.realName)
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
    if(memberLevel != __rhs.memberLevel)
    {
        return true;
    }
    if(penName != __rhs.penName)
    {
        return true;
    }
    if(categoryId != __rhs.categoryId)
    {
        return true;
    }
    if(phoneArea != __rhs.phoneArea)
    {
        return true;
    }
    if(phoneStatus != __rhs.phoneStatus)
    {
        return true;
    }
    if(phone != __rhs.phone)
    {
        return true;
    }
    if(communityLevel != __rhs.communityLevel)
    {
        return true;
    }
    return false;
}

bool
WebMember::SHalfUserProfile2::operator<(const SHalfUserProfile2& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(uid < __rhs.uid)
    {
        return true;
    }
    else if(__rhs.uid < uid)
    {
        return false;
    }
    if(password < __rhs.password)
    {
        return true;
    }
    else if(__rhs.password < password)
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
    if(realName < __rhs.realName)
    {
        return true;
    }
    else if(__rhs.realName < realName)
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
    if(memberLevel < __rhs.memberLevel)
    {
        return true;
    }
    else if(__rhs.memberLevel < memberLevel)
    {
        return false;
    }
    if(penName < __rhs.penName)
    {
        return true;
    }
    else if(__rhs.penName < penName)
    {
        return false;
    }
    if(categoryId < __rhs.categoryId)
    {
        return true;
    }
    else if(__rhs.categoryId < categoryId)
    {
        return false;
    }
    if(phoneArea < __rhs.phoneArea)
    {
        return true;
    }
    else if(__rhs.phoneArea < phoneArea)
    {
        return false;
    }
    if(phoneStatus < __rhs.phoneStatus)
    {
        return true;
    }
    else if(__rhs.phoneStatus < phoneStatus)
    {
        return false;
    }
    if(phone < __rhs.phone)
    {
        return true;
    }
    else if(__rhs.phone < phone)
    {
        return false;
    }
    if(communityLevel < __rhs.communityLevel)
    {
        return true;
    }
    else if(__rhs.communityLevel < communityLevel)
    {
        return false;
    }
    return false;
}

void
WebMember::SHalfUserProfile2::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(uid);
    __os->write(password);
    __os->write(status);
    __os->write(realName);
    __os->write(company);
    __os->write(jobTitle);
    __os->write(memberLevel);
    __os->write(penName);
    __os->write(categoryId);
    __os->write(phoneArea);
    __os->write(phoneStatus);
    __os->write(phone);
    __os->write(communityLevel);
}

void
WebMember::SHalfUserProfile2::__read(::IceInternal::BasicStream* __is)
{
    __is->read(uid);
    __is->read(password);
    __is->read(status);
    __is->read(realName);
    __is->read(company);
    __is->read(jobTitle);
    __is->read(memberLevel);
    __is->read(penName);
    __is->read(categoryId);
    __is->read(phoneArea);
    __is->read(phoneStatus);
    __is->read(phone);
    __is->read(communityLevel);
}

bool
WebMember::SFullUserProfile2::operator==(const SFullUserProfile2& __rhs) const
{
    return !operator!=(__rhs);
}

bool
WebMember::SFullUserProfile2::operator!=(const SFullUserProfile2& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(uid != __rhs.uid)
    {
        return true;
    }
    if(password != __rhs.password)
    {
        return true;
    }
    if(status != __rhs.status)
    {
        return true;
    }
    if(realName != __rhs.realName)
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
    if(memberLevel != __rhs.memberLevel)
    {
        return true;
    }
    if(penName != __rhs.penName)
    {
        return true;
    }
    if(categoryId != __rhs.categoryId)
    {
        return true;
    }
    if(phoneArea != __rhs.phoneArea)
    {
        return true;
    }
    if(phoneStatus != __rhs.phoneStatus)
    {
        return true;
    }
    if(phone != __rhs.phone)
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
    if(sex != __rhs.sex)
    {
        return true;
    }
    if(address != __rhs.address)
    {
        return true;
    }
    if(buyKeywords != __rhs.buyKeywords)
    {
        return true;
    }
    if(saleKeywords != __rhs.saleKeywords)
    {
        return true;
    }
    if(faxNo != __rhs.faxNo)
    {
        return true;
    }
    if(homepageUrl != __rhs.homepageUrl)
    {
        return true;
    }
    if(communityLevel != __rhs.communityLevel)
    {
        return true;
    }
    return false;
}

bool
WebMember::SFullUserProfile2::operator<(const SFullUserProfile2& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(uid < __rhs.uid)
    {
        return true;
    }
    else if(__rhs.uid < uid)
    {
        return false;
    }
    if(password < __rhs.password)
    {
        return true;
    }
    else if(__rhs.password < password)
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
    if(realName < __rhs.realName)
    {
        return true;
    }
    else if(__rhs.realName < realName)
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
    if(memberLevel < __rhs.memberLevel)
    {
        return true;
    }
    else if(__rhs.memberLevel < memberLevel)
    {
        return false;
    }
    if(penName < __rhs.penName)
    {
        return true;
    }
    else if(__rhs.penName < penName)
    {
        return false;
    }
    if(categoryId < __rhs.categoryId)
    {
        return true;
    }
    else if(__rhs.categoryId < categoryId)
    {
        return false;
    }
    if(phoneArea < __rhs.phoneArea)
    {
        return true;
    }
    else if(__rhs.phoneArea < phoneArea)
    {
        return false;
    }
    if(phoneStatus < __rhs.phoneStatus)
    {
        return true;
    }
    else if(__rhs.phoneStatus < phoneStatus)
    {
        return false;
    }
    if(phone < __rhs.phone)
    {
        return true;
    }
    else if(__rhs.phone < phone)
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
    if(sex < __rhs.sex)
    {
        return true;
    }
    else if(__rhs.sex < sex)
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
    if(buyKeywords < __rhs.buyKeywords)
    {
        return true;
    }
    else if(__rhs.buyKeywords < buyKeywords)
    {
        return false;
    }
    if(saleKeywords < __rhs.saleKeywords)
    {
        return true;
    }
    else if(__rhs.saleKeywords < saleKeywords)
    {
        return false;
    }
    if(faxNo < __rhs.faxNo)
    {
        return true;
    }
    else if(__rhs.faxNo < faxNo)
    {
        return false;
    }
    if(homepageUrl < __rhs.homepageUrl)
    {
        return true;
    }
    else if(__rhs.homepageUrl < homepageUrl)
    {
        return false;
    }
    if(communityLevel < __rhs.communityLevel)
    {
        return true;
    }
    else if(__rhs.communityLevel < communityLevel)
    {
        return false;
    }
    return false;
}

void
WebMember::SFullUserProfile2::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(uid);
    __os->write(password);
    __os->write(status);
    __os->write(realName);
    __os->write(company);
    __os->write(jobTitle);
    __os->write(memberLevel);
    __os->write(penName);
    __os->write(categoryId);
    __os->write(phoneArea);
    __os->write(phoneStatus);
    __os->write(phone);
    __os->write(email);
    __os->write(mobileNo);
    __os->write(sex);
    __os->write(address);
    __os->write(buyKeywords);
    __os->write(saleKeywords);
    __os->write(faxNo);
    __os->write(homepageUrl);
    __os->write(communityLevel);
}

void
WebMember::SFullUserProfile2::__read(::IceInternal::BasicStream* __is)
{
    __is->read(uid);
    __is->read(password);
    __is->read(status);
    __is->read(realName);
    __is->read(company);
    __is->read(jobTitle);
    __is->read(memberLevel);
    __is->read(penName);
    __is->read(categoryId);
    __is->read(phoneArea);
    __is->read(phoneStatus);
    __is->read(phone);
    __is->read(email);
    __is->read(mobileNo);
    __is->read(sex);
    __is->read(address);
    __is->read(buyKeywords);
    __is->read(saleKeywords);
    __is->read(faxNo);
    __is->read(homepageUrl);
    __is->read(communityLevel);
}

void
WebMember::__write(::IceInternal::BasicStream* __os, const ::WebMember::SSimpleUserProfile* begin, const ::WebMember::SSimpleUserProfile* end, ::WebMember::__U__SUserSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
WebMember::__read(::IceInternal::BasicStream* __is, ::WebMember::SUserSeq& v, ::WebMember::__U__SUserSeq)
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
WebMember::__write(::IceInternal::BasicStream* __os, const ::WebMember::SHalfUserProfile* begin, const ::WebMember::SHalfUserProfile* end, ::WebMember::__U__HUserSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
WebMember::__read(::IceInternal::BasicStream* __is, ::WebMember::HUserSeq& v, ::WebMember::__U__HUserSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 15);
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
WebMember::__write(::IceInternal::BasicStream* __os, const ::WebMember::SFullUserProfile* begin, const ::WebMember::SFullUserProfile* end, ::WebMember::__U__FUserSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
WebMember::__read(::IceInternal::BasicStream* __is, ::WebMember::FUserSeq& v, ::WebMember::__U__FUserSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 23);
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
WebMember::__write(::IceInternal::BasicStream* __os, const ::WebMember::SUserLevel* begin, const ::WebMember::SUserLevel* end, ::WebMember::__U__UserLevelSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
WebMember::__read(::IceInternal::BasicStream* __is, ::WebMember::UserLevelSeq& v, ::WebMember::__U__UserLevelSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 2);
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
WebMember::__write(::IceInternal::BasicStream* __os, const ::WebMember::SHalfUserProfile2* begin, const ::WebMember::SHalfUserProfile2* end, ::WebMember::__U__HUserSeq2)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
WebMember::__read(::IceInternal::BasicStream* __is, ::WebMember::HUserSeq2& v, ::WebMember::__U__HUserSeq2)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 16);
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
WebMember::__write(::IceInternal::BasicStream* __os, const ::WebMember::SFullUserProfile2* begin, const ::WebMember::SFullUserProfile2* end, ::WebMember::__U__FUserSeq2)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
WebMember::__read(::IceInternal::BasicStream* __is, ::WebMember::FUserSeq2& v, ::WebMember::__U__FUserSeq2)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 24);
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
WebMember::__addObject(const UserProfilePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
WebMember::__usesClasses(const UserProfilePtr& p)
{
    return p->__usesClasses();
}

void
WebMember::__decRefUnsafe(const UserProfilePtr& p)
{
    p->__decRefUnsafe();
}

void
WebMember::__clearHandleUnsafe(UserProfilePtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::WebMember::UserProfile::GetSimpleUserProfile(const ::WebMember::UserIdSeq& userIds, ::WebMember::SUserSeq& userProfiles, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__WebMember__UserProfile__GetSimpleUserProfile_name);
            __delBase = __getDelegate();
            ::IceDelegate::WebMember::UserProfile* __del = dynamic_cast< ::IceDelegate::WebMember::UserProfile*>(__delBase.get());
            return __del->GetSimpleUserProfile(userIds, userProfiles, __ctx);
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
IceProxy::WebMember::UserProfile::GetHalfUserProfile(const ::WebMember::UserIdSeq& userIds, ::WebMember::HUserSeq& userProfiles, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__WebMember__UserProfile__GetHalfUserProfile_name);
            __delBase = __getDelegate();
            ::IceDelegate::WebMember::UserProfile* __del = dynamic_cast< ::IceDelegate::WebMember::UserProfile*>(__delBase.get());
            return __del->GetHalfUserProfile(userIds, userProfiles, __ctx);
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
IceProxy::WebMember::UserProfile::GetFullUserProfile(const ::WebMember::UserIdSeq& userIds, ::WebMember::FUserSeq& userProfiles, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__WebMember__UserProfile__GetFullUserProfile_name);
            __delBase = __getDelegate();
            ::IceDelegate::WebMember::UserProfile* __del = dynamic_cast< ::IceDelegate::WebMember::UserProfile*>(__delBase.get());
            return __del->GetFullUserProfile(userIds, userProfiles, __ctx);
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
IceProxy::WebMember::UserProfile::GetUserLevels(const ::WebMember::UserIdSeq& userIds, ::WebMember::UserLevelSeq& userProfiles, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__WebMember__UserProfile__GetUserLevels_name);
            __delBase = __getDelegate();
            ::IceDelegate::WebMember::UserProfile* __del = dynamic_cast< ::IceDelegate::WebMember::UserProfile*>(__delBase.get());
            return __del->GetUserLevels(userIds, userProfiles, __ctx);
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
IceProxy::WebMember::UserProfile::GetUidByPenname(const ::std::string& penName, ::std::string& userId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__WebMember__UserProfile__GetUidByPenname_name);
            __delBase = __getDelegate();
            ::IceDelegate::WebMember::UserProfile* __del = dynamic_cast< ::IceDelegate::WebMember::UserProfile*>(__delBase.get());
            return __del->GetUidByPenname(penName, userId, __ctx);
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
IceProxy::WebMember::UserProfile::GetPassword(const ::std::string& userId, ::std::string& password, ::std::string& status, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__WebMember__UserProfile__GetPassword_name);
            __delBase = __getDelegate();
            ::IceDelegate::WebMember::UserProfile* __del = dynamic_cast< ::IceDelegate::WebMember::UserProfile*>(__delBase.get());
            return __del->GetPassword(userId, password, status, __ctx);
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
IceProxy::WebMember::UserProfile::GetUDBUserProfile(const ::std::string& userId, ::WebMember::SUDBUserProfile& udbProfile, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__WebMember__UserProfile__GetUDBUserProfile_name);
            __delBase = __getDelegate();
            ::IceDelegate::WebMember::UserProfile* __del = dynamic_cast< ::IceDelegate::WebMember::UserProfile*>(__delBase.get());
            return __del->GetUDBUserProfile(userId, udbProfile, __ctx);
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
IceProxy::WebMember::UserProfile::GetHalfUserProfile2(const ::WebMember::UserIdSeq& userIds, ::WebMember::HUserSeq2& userProfiles, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__WebMember__UserProfile__GetHalfUserProfile2_name);
            __delBase = __getDelegate();
            ::IceDelegate::WebMember::UserProfile* __del = dynamic_cast< ::IceDelegate::WebMember::UserProfile*>(__delBase.get());
            return __del->GetHalfUserProfile2(userIds, userProfiles, __ctx);
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
IceProxy::WebMember::UserProfile::GetFullUserProfile2(const ::WebMember::UserIdSeq& userIds, ::WebMember::FUserSeq2& userProfiles, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__WebMember__UserProfile__GetFullUserProfile2_name);
            __delBase = __getDelegate();
            ::IceDelegate::WebMember::UserProfile* __del = dynamic_cast< ::IceDelegate::WebMember::UserProfile*>(__delBase.get());
            return __del->GetFullUserProfile2(userIds, userProfiles, __ctx);
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
IceProxy::WebMember::UserProfile::ice_staticId()
{
    return ::WebMember::UserProfile::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::WebMember::UserProfile::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::WebMember::UserProfile);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::WebMember::UserProfile::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::WebMember::UserProfile);
}

bool
IceProxy::WebMember::operator==(const ::IceProxy::WebMember::UserProfile& l, const ::IceProxy::WebMember::UserProfile& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::WebMember::operator!=(const ::IceProxy::WebMember::UserProfile& l, const ::IceProxy::WebMember::UserProfile& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::WebMember::operator<(const ::IceProxy::WebMember::UserProfile& l, const ::IceProxy::WebMember::UserProfile& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::WebMember::operator<=(const ::IceProxy::WebMember::UserProfile& l, const ::IceProxy::WebMember::UserProfile& r)
{
    return l < r || l == r;
}

bool
IceProxy::WebMember::operator>(const ::IceProxy::WebMember::UserProfile& l, const ::IceProxy::WebMember::UserProfile& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::WebMember::operator>=(const ::IceProxy::WebMember::UserProfile& l, const ::IceProxy::WebMember::UserProfile& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::WebMember::UserProfile::GetSimpleUserProfile(const ::WebMember::UserIdSeq& userIds, ::WebMember::SUserSeq& userProfiles, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __WebMember__UserProfile__GetSimpleUserProfile_name, ::Ice::Normal, __context, __compress);
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
        ::WebMember::__read(__is, userProfiles, ::WebMember::__U__SUserSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::WebMember::UserProfile::GetHalfUserProfile(const ::WebMember::UserIdSeq& userIds, ::WebMember::HUserSeq& userProfiles, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __WebMember__UserProfile__GetHalfUserProfile_name, ::Ice::Normal, __context, __compress);
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
        ::WebMember::__read(__is, userProfiles, ::WebMember::__U__HUserSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::WebMember::UserProfile::GetFullUserProfile(const ::WebMember::UserIdSeq& userIds, ::WebMember::FUserSeq& userProfiles, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __WebMember__UserProfile__GetFullUserProfile_name, ::Ice::Normal, __context, __compress);
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
        ::WebMember::__read(__is, userProfiles, ::WebMember::__U__FUserSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::WebMember::UserProfile::GetUserLevels(const ::WebMember::UserIdSeq& userIds, ::WebMember::UserLevelSeq& userProfiles, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __WebMember__UserProfile__GetUserLevels_name, ::Ice::Normal, __context, __compress);
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
        ::WebMember::__read(__is, userProfiles, ::WebMember::__U__UserLevelSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::WebMember::UserProfile::GetUidByPenname(const ::std::string& penName, ::std::string& userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __WebMember__UserProfile__GetUidByPenname_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(penName);
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
IceDelegateM::WebMember::UserProfile::GetPassword(const ::std::string& userId, ::std::string& password, ::std::string& status, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __WebMember__UserProfile__GetPassword_name, ::Ice::Normal, __context, __compress);
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
        __is->read(password);
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
IceDelegateM::WebMember::UserProfile::GetUDBUserProfile(const ::std::string& userId, ::WebMember::SUDBUserProfile& udbProfile, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __WebMember__UserProfile__GetUDBUserProfile_name, ::Ice::Normal, __context, __compress);
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
        udbProfile.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::WebMember::UserProfile::GetHalfUserProfile2(const ::WebMember::UserIdSeq& userIds, ::WebMember::HUserSeq2& userProfiles, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __WebMember__UserProfile__GetHalfUserProfile2_name, ::Ice::Normal, __context, __compress);
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
        ::WebMember::__read(__is, userProfiles, ::WebMember::__U__HUserSeq2());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::WebMember::UserProfile::GetFullUserProfile2(const ::WebMember::UserIdSeq& userIds, ::WebMember::FUserSeq2& userProfiles, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __WebMember__UserProfile__GetFullUserProfile2_name, ::Ice::Normal, __context, __compress);
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
        ::WebMember::__read(__is, userProfiles, ::WebMember::__U__FUserSeq2());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::WebMember::UserProfile::GetSimpleUserProfile(const ::WebMember::UserIdSeq& userIds, ::WebMember::SUserSeq& userProfiles, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __WebMember__UserProfile__GetSimpleUserProfile_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::WebMember::UserProfile* __servant = dynamic_cast< ::WebMember::UserProfile*>(__direct.servant().get());
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
                __ret = __servant->GetSimpleUserProfile(userIds, userProfiles, __current);
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
IceDelegateD::WebMember::UserProfile::GetHalfUserProfile(const ::WebMember::UserIdSeq& userIds, ::WebMember::HUserSeq& userProfiles, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __WebMember__UserProfile__GetHalfUserProfile_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::WebMember::UserProfile* __servant = dynamic_cast< ::WebMember::UserProfile*>(__direct.servant().get());
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
                __ret = __servant->GetHalfUserProfile(userIds, userProfiles, __current);
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
IceDelegateD::WebMember::UserProfile::GetFullUserProfile(const ::WebMember::UserIdSeq& userIds, ::WebMember::FUserSeq& userProfiles, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __WebMember__UserProfile__GetFullUserProfile_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::WebMember::UserProfile* __servant = dynamic_cast< ::WebMember::UserProfile*>(__direct.servant().get());
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
                __ret = __servant->GetFullUserProfile(userIds, userProfiles, __current);
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
IceDelegateD::WebMember::UserProfile::GetUserLevels(const ::WebMember::UserIdSeq& userIds, ::WebMember::UserLevelSeq& userProfiles, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __WebMember__UserProfile__GetUserLevels_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::WebMember::UserProfile* __servant = dynamic_cast< ::WebMember::UserProfile*>(__direct.servant().get());
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
                __ret = __servant->GetUserLevels(userIds, userProfiles, __current);
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
IceDelegateD::WebMember::UserProfile::GetUidByPenname(const ::std::string& penName, ::std::string& userId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __WebMember__UserProfile__GetUidByPenname_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::WebMember::UserProfile* __servant = dynamic_cast< ::WebMember::UserProfile*>(__direct.servant().get());
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
                __ret = __servant->GetUidByPenname(penName, userId, __current);
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
IceDelegateD::WebMember::UserProfile::GetPassword(const ::std::string& userId, ::std::string& password, ::std::string& status, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __WebMember__UserProfile__GetPassword_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::WebMember::UserProfile* __servant = dynamic_cast< ::WebMember::UserProfile*>(__direct.servant().get());
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
                __ret = __servant->GetPassword(userId, password, status, __current);
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
IceDelegateD::WebMember::UserProfile::GetUDBUserProfile(const ::std::string& userId, ::WebMember::SUDBUserProfile& udbProfile, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __WebMember__UserProfile__GetUDBUserProfile_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::WebMember::UserProfile* __servant = dynamic_cast< ::WebMember::UserProfile*>(__direct.servant().get());
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
                __ret = __servant->GetUDBUserProfile(userId, udbProfile, __current);
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
IceDelegateD::WebMember::UserProfile::GetHalfUserProfile2(const ::WebMember::UserIdSeq& userIds, ::WebMember::HUserSeq2& userProfiles, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __WebMember__UserProfile__GetHalfUserProfile2_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::WebMember::UserProfile* __servant = dynamic_cast< ::WebMember::UserProfile*>(__direct.servant().get());
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
                __ret = __servant->GetHalfUserProfile2(userIds, userProfiles, __current);
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
IceDelegateD::WebMember::UserProfile::GetFullUserProfile2(const ::WebMember::UserIdSeq& userIds, ::WebMember::FUserSeq2& userProfiles, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __WebMember__UserProfile__GetFullUserProfile2_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::WebMember::UserProfile* __servant = dynamic_cast< ::WebMember::UserProfile*>(__direct.servant().get());
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
                __ret = __servant->GetFullUserProfile2(userIds, userProfiles, __current);
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
WebMember::UserProfile::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __WebMember__UserProfile_ids[2] =
{
    "::Ice::Object",
    "::WebMember::UserProfile"
};

bool
WebMember::UserProfile::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__WebMember__UserProfile_ids, __WebMember__UserProfile_ids + 2, _s);
}

::std::vector< ::std::string>
WebMember::UserProfile::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__WebMember__UserProfile_ids[0], &__WebMember__UserProfile_ids[2]);
}

const ::std::string&
WebMember::UserProfile::ice_id(const ::Ice::Current&) const
{
    return __WebMember__UserProfile_ids[1];
}

const ::std::string&
WebMember::UserProfile::ice_staticId()
{
    return __WebMember__UserProfile_ids[1];
}

::IceInternal::DispatchStatus
WebMember::UserProfile::___GetSimpleUserProfile(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::WebMember::UserIdSeq userIds;
    __is->read(userIds);
    ::WebMember::SUserSeq userProfiles;
    ::Ice::Int __ret = GetSimpleUserProfile(userIds, userProfiles, __current);
    if(userProfiles.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::WebMember::__write(__os, &userProfiles[0], &userProfiles[0] + userProfiles.size(), ::WebMember::__U__SUserSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
WebMember::UserProfile::___GetHalfUserProfile(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::WebMember::UserIdSeq userIds;
    __is->read(userIds);
    ::WebMember::HUserSeq userProfiles;
    ::Ice::Int __ret = GetHalfUserProfile(userIds, userProfiles, __current);
    if(userProfiles.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::WebMember::__write(__os, &userProfiles[0], &userProfiles[0] + userProfiles.size(), ::WebMember::__U__HUserSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
WebMember::UserProfile::___GetFullUserProfile(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::WebMember::UserIdSeq userIds;
    __is->read(userIds);
    ::WebMember::FUserSeq userProfiles;
    ::Ice::Int __ret = GetFullUserProfile(userIds, userProfiles, __current);
    if(userProfiles.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::WebMember::__write(__os, &userProfiles[0], &userProfiles[0] + userProfiles.size(), ::WebMember::__U__FUserSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
WebMember::UserProfile::___GetUserLevels(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::WebMember::UserIdSeq userIds;
    __is->read(userIds);
    ::WebMember::UserLevelSeq userProfiles;
    ::Ice::Int __ret = GetUserLevels(userIds, userProfiles, __current);
    if(userProfiles.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::WebMember::__write(__os, &userProfiles[0], &userProfiles[0] + userProfiles.size(), ::WebMember::__U__UserLevelSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
WebMember::UserProfile::___GetUidByPenname(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string penName;
    __is->read(penName);
    ::std::string userId;
    ::Ice::Int __ret = GetUidByPenname(penName, userId, __current);
    __os->write(userId);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
WebMember::UserProfile::___GetPassword(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::std::string password;
    ::std::string status;
    ::Ice::Int __ret = GetPassword(userId, password, status, __current);
    __os->write(password);
    __os->write(status);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
WebMember::UserProfile::___GetUDBUserProfile(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::WebMember::SUDBUserProfile udbProfile;
    ::Ice::Int __ret = GetUDBUserProfile(userId, udbProfile, __current);
    udbProfile.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
WebMember::UserProfile::___GetHalfUserProfile2(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::WebMember::UserIdSeq userIds;
    __is->read(userIds);
    ::WebMember::HUserSeq2 userProfiles;
    ::Ice::Int __ret = GetHalfUserProfile2(userIds, userProfiles, __current);
    if(userProfiles.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::WebMember::__write(__os, &userProfiles[0], &userProfiles[0] + userProfiles.size(), ::WebMember::__U__HUserSeq2());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
WebMember::UserProfile::___GetFullUserProfile2(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::WebMember::UserIdSeq userIds;
    __is->read(userIds);
    ::WebMember::FUserSeq2 userProfiles;
    ::Ice::Int __ret = GetFullUserProfile2(userIds, userProfiles, __current);
    if(userProfiles.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::WebMember::__write(__os, &userProfiles[0], &userProfiles[0] + userProfiles.size(), ::WebMember::__U__FUserSeq2());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __WebMember__UserProfile_all[] =
{
    "GetFullUserProfile",
    "GetFullUserProfile2",
    "GetHalfUserProfile",
    "GetHalfUserProfile2",
    "GetPassword",
    "GetSimpleUserProfile",
    "GetUDBUserProfile",
    "GetUidByPenname",
    "GetUserLevels",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::IceInternal::DispatchStatus
WebMember::UserProfile::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__WebMember__UserProfile_all, __WebMember__UserProfile_all + 13, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __WebMember__UserProfile_all)
    {
        case 0:
        {
            return ___GetFullUserProfile(in, current);
        }
        case 1:
        {
            return ___GetFullUserProfile2(in, current);
        }
        case 2:
        {
            return ___GetHalfUserProfile(in, current);
        }
        case 3:
        {
            return ___GetHalfUserProfile2(in, current);
        }
        case 4:
        {
            return ___GetPassword(in, current);
        }
        case 5:
        {
            return ___GetSimpleUserProfile(in, current);
        }
        case 6:
        {
            return ___GetUDBUserProfile(in, current);
        }
        case 7:
        {
            return ___GetUidByPenname(in, current);
        }
        case 8:
        {
            return ___GetUserLevels(in, current);
        }
        case 9:
        {
            return ___ice_id(in, current);
        }
        case 10:
        {
            return ___ice_ids(in, current);
        }
        case 11:
        {
            return ___ice_isA(in, current);
        }
        case 12:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
WebMember::UserProfile::__write(::IceInternal::BasicStream* __os) const
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
WebMember::UserProfile::__read(::IceInternal::BasicStream* __is, bool __rid)
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
WebMember::UserProfile::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type WebMember::UserProfile was not generated with stream support";
    throw ex;
}

void
WebMember::UserProfile::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type WebMember::UserProfile was not generated with stream support";
    throw ex;
}

void 
WebMember::__patch__UserProfilePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::WebMember::UserProfilePtr* p = static_cast< ::WebMember::UserProfilePtr*>(__addr);
    assert(p);
    *p = ::WebMember::UserProfilePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::WebMember::UserProfile::ice_staticId();
        throw e;
    }
}

bool
WebMember::operator==(const ::WebMember::UserProfile& l, const ::WebMember::UserProfile& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
WebMember::operator!=(const ::WebMember::UserProfile& l, const ::WebMember::UserProfile& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
WebMember::operator<(const ::WebMember::UserProfile& l, const ::WebMember::UserProfile& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
WebMember::operator<=(const ::WebMember::UserProfile& l, const ::WebMember::UserProfile& r)
{
    return l < r || l == r;
}

bool
WebMember::operator>(const ::WebMember::UserProfile& l, const ::WebMember::UserProfile& r)
{
    return !(l < r) && !(l == r);
}

bool
WebMember::operator>=(const ::WebMember::UserProfile& l, const ::WebMember::UserProfile& r)
{
    return !(l < r);
}
