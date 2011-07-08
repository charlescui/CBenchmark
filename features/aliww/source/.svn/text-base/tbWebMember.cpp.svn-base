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

#include <tbWebMember.h>
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

static const ::std::string __tbWebMember__UserProfile__GetSimpleUserProfile_name = "GetSimpleUserProfile";

static const ::std::string __tbWebMember__UserProfile__GetFullUserProfile_name = "GetFullUserProfile";

static const ::std::string __tbWebMember__UserProfile__GetUidByPenname_name = "GetUidByPenname";

static const ::std::string __tbWebMember__UserProfile__GetUserPwd_name = "GetUserPwd";

static const ::std::string __tbWebMember__UserProfile__CheckUser_name = "CheckUser";

static const ::std::string __tbWebMember__UserProfile__GetUserInfo_name = "GetUserInfo";

static const ::std::string __tbWebMember__UserProfile__GetTName_name = "GetTName";

static const ::std::string __tbWebMember__UserProfile__GetUDBData_name = "GetUDBData";

static const ::std::string __tbWebMember__UserProfile__GetExUDBData_name = "GetExUDBData";

static const ::std::string __tbWebMember__UserProfile__GetRates_name = "GetRates";

static const ::std::string __tbWebMember__UserProfile__GetBasicLoginInfo_name = "GetBasicLoginInfo";

static const ::std::string __tbWebMember__UserProfile__CheckUserWebToken_name = "CheckUserWebToken";

void
IceInternal::incRef(::tbWebMember::UserProfile* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::tbWebMember::UserProfile* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::tbWebMember::UserProfile* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::tbWebMember::UserProfile* p)
{
    p->__decRef();
}

void
tbWebMember::__write(::IceInternal::BasicStream* __os, const ::tbWebMember::UserProfilePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
tbWebMember::__read(::IceInternal::BasicStream* __is, ::tbWebMember::UserProfilePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::tbWebMember::UserProfile;
        v->__copyFrom(proxy);
    }
}

void
tbWebMember::__write(::IceInternal::BasicStream* __os, const ::tbWebMember::UserProfilePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

bool
tbWebMember::stbuserStatus::operator==(const stbuserStatus& __rhs) const
{
    return !operator!=(__rhs);
}

bool
tbWebMember::stbuserStatus::operator!=(const stbuserStatus& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(uid != __rhs.uid)
    {
        return true;
    }
    if(id != __rhs.id)
    {
        return true;
    }
    if(exists != __rhs.exists)
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
tbWebMember::stbuserStatus::operator<(const stbuserStatus& __rhs) const
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
    if(id < __rhs.id)
    {
        return true;
    }
    else if(__rhs.id < id)
    {
        return false;
    }
    if(exists < __rhs.exists)
    {
        return true;
    }
    else if(__rhs.exists < exists)
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
tbWebMember::stbuserStatus::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(uid);
    __os->write(id);
    __os->write(exists);
    __os->write(status);
}

void
tbWebMember::stbuserStatus::__read(::IceInternal::BasicStream* __is)
{
    __is->read(uid);
    __is->read(id);
    __is->read(exists);
    __is->read(status);
}

bool
tbWebMember::stbuserPwd::operator==(const stbuserPwd& __rhs) const
{
    return !operator!=(__rhs);
}

bool
tbWebMember::stbuserPwd::operator!=(const stbuserPwd& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(uid != __rhs.uid)
    {
        return true;
    }
    if(passwd != __rhs.passwd)
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
tbWebMember::stbuserPwd::operator<(const stbuserPwd& __rhs) const
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
    if(passwd < __rhs.passwd)
    {
        return true;
    }
    else if(__rhs.passwd < passwd)
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
tbWebMember::stbuserPwd::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(uid);
    __os->write(passwd);
    __os->write(status);
}

void
tbWebMember::stbuserPwd::__read(::IceInternal::BasicStream* __is)
{
    __is->read(uid);
    __is->read(passwd);
    __is->read(status);
}

bool
tbWebMember::stbuserInfo::operator==(const stbuserInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
tbWebMember::stbuserInfo::operator!=(const stbuserInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(uid != __rhs.uid)
    {
        return true;
    }
    if(ratesum != __rhs.ratesum)
    {
        return true;
    }
    if(userLevel != __rhs.userLevel)
    {
        return true;
    }
    if(promotedtype != __rhs.promotedtype)
    {
        return true;
    }
    if(active != __rhs.active)
    {
        return true;
    }
    if(id != __rhs.id)
    {
        return true;
    }
    return false;
}

bool
tbWebMember::stbuserInfo::operator<(const stbuserInfo& __rhs) const
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
    if(ratesum < __rhs.ratesum)
    {
        return true;
    }
    else if(__rhs.ratesum < ratesum)
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
    if(promotedtype < __rhs.promotedtype)
    {
        return true;
    }
    else if(__rhs.promotedtype < promotedtype)
    {
        return false;
    }
    if(active < __rhs.active)
    {
        return true;
    }
    else if(__rhs.active < active)
    {
        return false;
    }
    if(id < __rhs.id)
    {
        return true;
    }
    else if(__rhs.id < id)
    {
        return false;
    }
    return false;
}

void
tbWebMember::stbuserInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(uid);
    __os->write(ratesum);
    __os->write(userLevel);
    __os->write(promotedtype);
    __os->write(active);
    __os->write(id);
}

void
tbWebMember::stbuserInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(uid);
    __is->read(ratesum);
    __is->read(userLevel);
    __is->read(promotedtype);
    __is->read(active);
    __is->read(id);
}

bool
tbWebMember::SSimpleUserProfile::operator==(const SSimpleUserProfile& __rhs) const
{
    return !operator!=(__rhs);
}

bool
tbWebMember::SSimpleUserProfile::operator!=(const SSimpleUserProfile& __rhs) const
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
tbWebMember::SSimpleUserProfile::operator<(const SSimpleUserProfile& __rhs) const
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
tbWebMember::SSimpleUserProfile::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(uid);
    __os->write(password);
    __os->write(status);
}

void
tbWebMember::SSimpleUserProfile::__read(::IceInternal::BasicStream* __is)
{
    __is->read(uid);
    __is->read(password);
    __is->read(status);
}

bool
tbWebMember::SHalfUserProfile::operator==(const SHalfUserProfile& __rhs) const
{
    return !operator!=(__rhs);
}

bool
tbWebMember::SHalfUserProfile::operator!=(const SHalfUserProfile& __rhs) const
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
tbWebMember::SHalfUserProfile::operator<(const SHalfUserProfile& __rhs) const
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
tbWebMember::SHalfUserProfile::__write(::IceInternal::BasicStream* __os) const
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
tbWebMember::SHalfUserProfile::__read(::IceInternal::BasicStream* __is)
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
tbWebMember::StbFullUserProfile::operator==(const StbFullUserProfile& __rhs) const
{
    return !operator!=(__rhs);
}

bool
tbWebMember::StbFullUserProfile::operator!=(const StbFullUserProfile& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(uid != __rhs.uid)
    {
        return true;
    }
    if(address != __rhs.address)
    {
        return true;
    }
    if(zip != __rhs.zip)
    {
        return true;
    }
    if(email != __rhs.email)
    {
        return true;
    }
    if(birthdate != __rhs.birthdate)
    {
        return true;
    }
    if(activated != __rhs.activated)
    {
        return true;
    }
    if(id != __rhs.id)
    {
        return true;
    }
    return false;
}

bool
tbWebMember::StbFullUserProfile::operator<(const StbFullUserProfile& __rhs) const
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
    if(address < __rhs.address)
    {
        return true;
    }
    else if(__rhs.address < address)
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
    if(email < __rhs.email)
    {
        return true;
    }
    else if(__rhs.email < email)
    {
        return false;
    }
    if(birthdate < __rhs.birthdate)
    {
        return true;
    }
    else if(__rhs.birthdate < birthdate)
    {
        return false;
    }
    if(activated < __rhs.activated)
    {
        return true;
    }
    else if(__rhs.activated < activated)
    {
        return false;
    }
    if(id < __rhs.id)
    {
        return true;
    }
    else if(__rhs.id < id)
    {
        return false;
    }
    return false;
}

void
tbWebMember::StbFullUserProfile::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(uid);
    __os->write(address);
    __os->write(zip);
    __os->write(email);
    __os->write(birthdate);
    __os->write(activated);
    __os->write(id);
}

void
tbWebMember::StbFullUserProfile::__read(::IceInternal::BasicStream* __is)
{
    __is->read(uid);
    __is->read(address);
    __is->read(zip);
    __is->read(email);
    __is->read(birthdate);
    __is->read(activated);
    __is->read(id);
}

bool
tbWebMember::sUdbData::operator==(const sUdbData& __rhs) const
{
    return !operator!=(__rhs);
}

bool
tbWebMember::sUdbData::operator!=(const sUdbData& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(id != __rhs.id)
    {
        return true;
    }
    if(nick != __rhs.nick)
    {
        return true;
    }
    if(fullname != __rhs.fullname)
    {
        return true;
    }
    if(password != __rhs.password)
    {
        return true;
    }
    if(email != __rhs.email)
    {
        return true;
    }
    if(zip != __rhs.zip)
    {
        return true;
    }
    if(address != __rhs.address)
    {
        return true;
    }
    if(phone != __rhs.phone)
    {
        return true;
    }
    if(mobilephone != __rhs.mobilephone)
    {
        return true;
    }
    if(prov != __rhs.prov)
    {
        return true;
    }
    if(city != __rhs.city)
    {
        return true;
    }
    if(usergender != __rhs.usergender)
    {
        return true;
    }
    if(birthdate != __rhs.birthdate)
    {
        return true;
    }
    return false;
}

bool
tbWebMember::sUdbData::operator<(const sUdbData& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(id < __rhs.id)
    {
        return true;
    }
    else if(__rhs.id < id)
    {
        return false;
    }
    if(nick < __rhs.nick)
    {
        return true;
    }
    else if(__rhs.nick < nick)
    {
        return false;
    }
    if(fullname < __rhs.fullname)
    {
        return true;
    }
    else if(__rhs.fullname < fullname)
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
    if(email < __rhs.email)
    {
        return true;
    }
    else if(__rhs.email < email)
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
    if(address < __rhs.address)
    {
        return true;
    }
    else if(__rhs.address < address)
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
    if(mobilephone < __rhs.mobilephone)
    {
        return true;
    }
    else if(__rhs.mobilephone < mobilephone)
    {
        return false;
    }
    if(prov < __rhs.prov)
    {
        return true;
    }
    else if(__rhs.prov < prov)
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
    if(usergender < __rhs.usergender)
    {
        return true;
    }
    else if(__rhs.usergender < usergender)
    {
        return false;
    }
    if(birthdate < __rhs.birthdate)
    {
        return true;
    }
    else if(__rhs.birthdate < birthdate)
    {
        return false;
    }
    return false;
}

void
tbWebMember::sUdbData::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(id);
    __os->write(nick);
    __os->write(fullname);
    __os->write(password);
    __os->write(email);
    __os->write(zip);
    __os->write(address);
    __os->write(phone);
    __os->write(mobilephone);
    __os->write(prov);
    __os->write(city);
    __os->write(usergender);
    __os->write(birthdate);
}

void
tbWebMember::sUdbData::__read(::IceInternal::BasicStream* __is)
{
    __is->read(id);
    __is->read(nick);
    __is->read(fullname);
    __is->read(password);
    __is->read(email);
    __is->read(zip);
    __is->read(address);
    __is->read(phone);
    __is->read(mobilephone);
    __is->read(prov);
    __is->read(city);
    __is->read(usergender);
    __is->read(birthdate);
}

bool
tbWebMember::SExUdbData::operator==(const SExUdbData& __rhs) const
{
    return !operator!=(__rhs);
}

bool
tbWebMember::SExUdbData::operator!=(const SExUdbData& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(id != __rhs.id)
    {
        return true;
    }
    if(nick != __rhs.nick)
    {
        return true;
    }
    if(fullname != __rhs.fullname)
    {
        return true;
    }
    if(password != __rhs.password)
    {
        return true;
    }
    if(email != __rhs.email)
    {
        return true;
    }
    if(zip != __rhs.zip)
    {
        return true;
    }
    if(address != __rhs.address)
    {
        return true;
    }
    if(phone != __rhs.phone)
    {
        return true;
    }
    if(mobilephone != __rhs.mobilephone)
    {
        return true;
    }
    if(prov != __rhs.prov)
    {
        return true;
    }
    if(city != __rhs.city)
    {
        return true;
    }
    if(usergender != __rhs.usergender)
    {
        return true;
    }
    if(birthdate != __rhs.birthdate)
    {
        return true;
    }
    if(district != __rhs.district)
    {
        return true;
    }
    if(website != __rhs.website)
    {
        return true;
    }
    if(interesting != __rhs.interesting)
    {
        return true;
    }
    return false;
}

bool
tbWebMember::SExUdbData::operator<(const SExUdbData& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(id < __rhs.id)
    {
        return true;
    }
    else if(__rhs.id < id)
    {
        return false;
    }
    if(nick < __rhs.nick)
    {
        return true;
    }
    else if(__rhs.nick < nick)
    {
        return false;
    }
    if(fullname < __rhs.fullname)
    {
        return true;
    }
    else if(__rhs.fullname < fullname)
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
    if(email < __rhs.email)
    {
        return true;
    }
    else if(__rhs.email < email)
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
    if(address < __rhs.address)
    {
        return true;
    }
    else if(__rhs.address < address)
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
    if(mobilephone < __rhs.mobilephone)
    {
        return true;
    }
    else if(__rhs.mobilephone < mobilephone)
    {
        return false;
    }
    if(prov < __rhs.prov)
    {
        return true;
    }
    else if(__rhs.prov < prov)
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
    if(usergender < __rhs.usergender)
    {
        return true;
    }
    else if(__rhs.usergender < usergender)
    {
        return false;
    }
    if(birthdate < __rhs.birthdate)
    {
        return true;
    }
    else if(__rhs.birthdate < birthdate)
    {
        return false;
    }
    if(district < __rhs.district)
    {
        return true;
    }
    else if(__rhs.district < district)
    {
        return false;
    }
    if(website < __rhs.website)
    {
        return true;
    }
    else if(__rhs.website < website)
    {
        return false;
    }
    if(interesting < __rhs.interesting)
    {
        return true;
    }
    else if(__rhs.interesting < interesting)
    {
        return false;
    }
    return false;
}

void
tbWebMember::SExUdbData::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(id);
    __os->write(nick);
    __os->write(fullname);
    __os->write(password);
    __os->write(email);
    __os->write(zip);
    __os->write(address);
    __os->write(phone);
    __os->write(mobilephone);
    __os->write(prov);
    __os->write(city);
    __os->write(usergender);
    __os->write(birthdate);
    __os->write(district);
    __os->write(website);
    __os->write(interesting);
}

void
tbWebMember::SExUdbData::__read(::IceInternal::BasicStream* __is)
{
    __is->read(id);
    __is->read(nick);
    __is->read(fullname);
    __is->read(password);
    __is->read(email);
    __is->read(zip);
    __is->read(address);
    __is->read(phone);
    __is->read(mobilephone);
    __is->read(prov);
    __is->read(city);
    __is->read(usergender);
    __is->read(birthdate);
    __is->read(district);
    __is->read(website);
    __is->read(interesting);
}

bool
tbWebMember::SBLoginInfo::operator==(const SBLoginInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
tbWebMember::SBLoginInfo::operator!=(const SBLoginInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(uid != __rhs.uid)
    {
        return true;
    }
    if(passwd != __rhs.passwd)
    {
        return true;
    }
    if(actived != __rhs.actived)
    {
        return true;
    }
    if(status != __rhs.status)
    {
        return true;
    }
    if(extraInfo != __rhs.extraInfo)
    {
        return true;
    }
    return false;
}

bool
tbWebMember::SBLoginInfo::operator<(const SBLoginInfo& __rhs) const
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
    if(passwd < __rhs.passwd)
    {
        return true;
    }
    else if(__rhs.passwd < passwd)
    {
        return false;
    }
    if(actived < __rhs.actived)
    {
        return true;
    }
    else if(__rhs.actived < actived)
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
    if(extraInfo < __rhs.extraInfo)
    {
        return true;
    }
    else if(__rhs.extraInfo < extraInfo)
    {
        return false;
    }
    return false;
}

void
tbWebMember::SBLoginInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(uid);
    __os->write(passwd);
    __os->write(actived);
    __os->write(status);
    __os->write(extraInfo);
}

void
tbWebMember::SBLoginInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(uid);
    __is->read(passwd);
    __is->read(actived);
    __is->read(status);
    __is->read(extraInfo);
}

void
tbWebMember::__write(::IceInternal::BasicStream* __os, const ::tbWebMember::SSimpleUserProfile* begin, const ::tbWebMember::SSimpleUserProfile* end, ::tbWebMember::__U__SUserSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
tbWebMember::__read(::IceInternal::BasicStream* __is, ::tbWebMember::SUserSeq& v, ::tbWebMember::__U__SUserSeq)
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
tbWebMember::__write(::IceInternal::BasicStream* __os, const ::tbWebMember::SHalfUserProfile* begin, const ::tbWebMember::SHalfUserProfile* end, ::tbWebMember::__U__HUserSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
tbWebMember::__read(::IceInternal::BasicStream* __is, ::tbWebMember::HUserSeq& v, ::tbWebMember::__U__HUserSeq)
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
tbWebMember::__write(::IceInternal::BasicStream* __os, const ::tbWebMember::StbFullUserProfile* begin, const ::tbWebMember::StbFullUserProfile* end, ::tbWebMember::__U__tbFUserSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
tbWebMember::__read(::IceInternal::BasicStream* __is, ::tbWebMember::tbFUserSeq& v, ::tbWebMember::__U__tbFUserSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 10);
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
tbWebMember::__addObject(const UserProfilePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
tbWebMember::__usesClasses(const UserProfilePtr& p)
{
    return p->__usesClasses();
}

void
tbWebMember::__decRefUnsafe(const UserProfilePtr& p)
{
    p->__decRefUnsafe();
}

void
tbWebMember::__clearHandleUnsafe(UserProfilePtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::tbWebMember::UserProfile::GetSimpleUserProfile(const ::std::string& uid, ::tbWebMember::SSimpleUserProfile& userProfiles, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__tbWebMember__UserProfile__GetSimpleUserProfile_name);
            __delBase = __getDelegate();
            ::IceDelegate::tbWebMember::UserProfile* __del = dynamic_cast< ::IceDelegate::tbWebMember::UserProfile*>(__delBase.get());
            return __del->GetSimpleUserProfile(uid, userProfiles, __ctx);
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
IceProxy::tbWebMember::UserProfile::GetFullUserProfile(const ::std::string& uid, ::tbWebMember::StbFullUserProfile& userProfiles, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__tbWebMember__UserProfile__GetFullUserProfile_name);
            __delBase = __getDelegate();
            ::IceDelegate::tbWebMember::UserProfile* __del = dynamic_cast< ::IceDelegate::tbWebMember::UserProfile*>(__delBase.get());
            return __del->GetFullUserProfile(uid, userProfiles, __ctx);
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
IceProxy::tbWebMember::UserProfile::GetUidByPenname(const ::std::string& penName, ::std::string& userId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__tbWebMember__UserProfile__GetUidByPenname_name);
            __delBase = __getDelegate();
            ::IceDelegate::tbWebMember::UserProfile* __del = dynamic_cast< ::IceDelegate::tbWebMember::UserProfile*>(__delBase.get());
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
IceProxy::tbWebMember::UserProfile::GetUserPwd(const ::std::string& uid, ::tbWebMember::stbuserPwd& pwd, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__tbWebMember__UserProfile__GetUserPwd_name);
            __delBase = __getDelegate();
            ::IceDelegate::tbWebMember::UserProfile* __del = dynamic_cast< ::IceDelegate::tbWebMember::UserProfile*>(__delBase.get());
            return __del->GetUserPwd(uid, pwd, __ctx);
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
IceProxy::tbWebMember::UserProfile::CheckUser(const ::std::string& uid, ::tbWebMember::stbuserStatus& st, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__tbWebMember__UserProfile__CheckUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::tbWebMember::UserProfile* __del = dynamic_cast< ::IceDelegate::tbWebMember::UserProfile*>(__delBase.get());
            return __del->CheckUser(uid, st, __ctx);
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
IceProxy::tbWebMember::UserProfile::GetUserInfo(const ::std::string& uid, ::tbWebMember::stbuserInfo& info, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__tbWebMember__UserProfile__GetUserInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::tbWebMember::UserProfile* __del = dynamic_cast< ::IceDelegate::tbWebMember::UserProfile*>(__delBase.get());
            return __del->GetUserInfo(uid, info, __ctx);
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
IceProxy::tbWebMember::UserProfile::GetTName(const ::std::string& uid, ::std::string& tname, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__tbWebMember__UserProfile__GetTName_name);
            __delBase = __getDelegate();
            ::IceDelegate::tbWebMember::UserProfile* __del = dynamic_cast< ::IceDelegate::tbWebMember::UserProfile*>(__delBase.get());
            return __del->GetTName(uid, tname, __ctx);
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
IceProxy::tbWebMember::UserProfile::GetUDBData(const ::std::string& uid, ::tbWebMember::sUdbData& udbInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__tbWebMember__UserProfile__GetUDBData_name);
            __delBase = __getDelegate();
            ::IceDelegate::tbWebMember::UserProfile* __del = dynamic_cast< ::IceDelegate::tbWebMember::UserProfile*>(__delBase.get());
            return __del->GetUDBData(uid, udbInfo, __ctx);
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
IceProxy::tbWebMember::UserProfile::GetExUDBData(const ::std::string& uid, ::tbWebMember::SExUdbData& exudbInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__tbWebMember__UserProfile__GetExUDBData_name);
            __delBase = __getDelegate();
            ::IceDelegate::tbWebMember::UserProfile* __del = dynamic_cast< ::IceDelegate::tbWebMember::UserProfile*>(__delBase.get());
            return __del->GetExUDBData(uid, exudbInfo, __ctx);
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
IceProxy::tbWebMember::UserProfile::GetRates(const ::std::string& uid, ::Ice::Int& buyrates, ::Ice::Int& sellrates, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__tbWebMember__UserProfile__GetRates_name);
            __delBase = __getDelegate();
            ::IceDelegate::tbWebMember::UserProfile* __del = dynamic_cast< ::IceDelegate::tbWebMember::UserProfile*>(__delBase.get());
            return __del->GetRates(uid, buyrates, sellrates, __ctx);
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
IceProxy::tbWebMember::UserProfile::GetBasicLoginInfo(const ::std::string& uid, ::tbWebMember::SBLoginInfo& info, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__tbWebMember__UserProfile__GetBasicLoginInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::tbWebMember::UserProfile* __del = dynamic_cast< ::IceDelegate::tbWebMember::UserProfile*>(__delBase.get());
            return __del->GetBasicLoginInfo(uid, info, __ctx);
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
IceProxy::tbWebMember::UserProfile::CheckUserWebToken(const ::std::string& uid, const ::std::string& token, ::std::string& reason, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__tbWebMember__UserProfile__CheckUserWebToken_name);
            __delBase = __getDelegate();
            ::IceDelegate::tbWebMember::UserProfile* __del = dynamic_cast< ::IceDelegate::tbWebMember::UserProfile*>(__delBase.get());
            return __del->CheckUserWebToken(uid, token, reason, __ctx);
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
IceProxy::tbWebMember::UserProfile::ice_staticId()
{
    return ::tbWebMember::UserProfile::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::tbWebMember::UserProfile::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::tbWebMember::UserProfile);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::tbWebMember::UserProfile::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::tbWebMember::UserProfile);
}

bool
IceProxy::tbWebMember::operator==(const ::IceProxy::tbWebMember::UserProfile& l, const ::IceProxy::tbWebMember::UserProfile& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::tbWebMember::operator!=(const ::IceProxy::tbWebMember::UserProfile& l, const ::IceProxy::tbWebMember::UserProfile& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::tbWebMember::operator<(const ::IceProxy::tbWebMember::UserProfile& l, const ::IceProxy::tbWebMember::UserProfile& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::tbWebMember::operator<=(const ::IceProxy::tbWebMember::UserProfile& l, const ::IceProxy::tbWebMember::UserProfile& r)
{
    return l < r || l == r;
}

bool
IceProxy::tbWebMember::operator>(const ::IceProxy::tbWebMember::UserProfile& l, const ::IceProxy::tbWebMember::UserProfile& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::tbWebMember::operator>=(const ::IceProxy::tbWebMember::UserProfile& l, const ::IceProxy::tbWebMember::UserProfile& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::tbWebMember::UserProfile::GetSimpleUserProfile(const ::std::string& uid, ::tbWebMember::SSimpleUserProfile& userProfiles, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __tbWebMember__UserProfile__GetSimpleUserProfile_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
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
        userProfiles.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::tbWebMember::UserProfile::GetFullUserProfile(const ::std::string& uid, ::tbWebMember::StbFullUserProfile& userProfiles, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __tbWebMember__UserProfile__GetFullUserProfile_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
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
        userProfiles.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::tbWebMember::UserProfile::GetUidByPenname(const ::std::string& penName, ::std::string& userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __tbWebMember__UserProfile__GetUidByPenname_name, ::Ice::Normal, __context, __compress);
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
IceDelegateM::tbWebMember::UserProfile::GetUserPwd(const ::std::string& uid, ::tbWebMember::stbuserPwd& pwd, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __tbWebMember__UserProfile__GetUserPwd_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
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
        pwd.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::tbWebMember::UserProfile::CheckUser(const ::std::string& uid, ::tbWebMember::stbuserStatus& st, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __tbWebMember__UserProfile__CheckUser_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
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
        st.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::tbWebMember::UserProfile::GetUserInfo(const ::std::string& uid, ::tbWebMember::stbuserInfo& info, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __tbWebMember__UserProfile__GetUserInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
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
        info.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::tbWebMember::UserProfile::GetTName(const ::std::string& uid, ::std::string& tname, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __tbWebMember__UserProfile__GetTName_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
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
        __is->read(tname);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::tbWebMember::UserProfile::GetUDBData(const ::std::string& uid, ::tbWebMember::sUdbData& udbInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __tbWebMember__UserProfile__GetUDBData_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
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
        udbInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::tbWebMember::UserProfile::GetExUDBData(const ::std::string& uid, ::tbWebMember::SExUdbData& exudbInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __tbWebMember__UserProfile__GetExUDBData_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
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
        exudbInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::tbWebMember::UserProfile::GetRates(const ::std::string& uid, ::Ice::Int& buyrates, ::Ice::Int& sellrates, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __tbWebMember__UserProfile__GetRates_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
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
        __is->read(buyrates);
        __is->read(sellrates);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::tbWebMember::UserProfile::GetBasicLoginInfo(const ::std::string& uid, ::tbWebMember::SBLoginInfo& info, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __tbWebMember__UserProfile__GetBasicLoginInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
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
        info.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::tbWebMember::UserProfile::CheckUserWebToken(const ::std::string& uid, const ::std::string& token, ::std::string& reason, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __tbWebMember__UserProfile__CheckUserWebToken_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(token);
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
        __is->read(reason);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::tbWebMember::UserProfile::GetSimpleUserProfile(const ::std::string& uid, ::tbWebMember::SSimpleUserProfile& userProfiles, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __tbWebMember__UserProfile__GetSimpleUserProfile_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::tbWebMember::UserProfile* __servant = dynamic_cast< ::tbWebMember::UserProfile*>(__direct.servant().get());
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
                __ret = __servant->GetSimpleUserProfile(uid, userProfiles, __current);
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
IceDelegateD::tbWebMember::UserProfile::GetFullUserProfile(const ::std::string& uid, ::tbWebMember::StbFullUserProfile& userProfiles, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __tbWebMember__UserProfile__GetFullUserProfile_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::tbWebMember::UserProfile* __servant = dynamic_cast< ::tbWebMember::UserProfile*>(__direct.servant().get());
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
                __ret = __servant->GetFullUserProfile(uid, userProfiles, __current);
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
IceDelegateD::tbWebMember::UserProfile::GetUidByPenname(const ::std::string& penName, ::std::string& userId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __tbWebMember__UserProfile__GetUidByPenname_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::tbWebMember::UserProfile* __servant = dynamic_cast< ::tbWebMember::UserProfile*>(__direct.servant().get());
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
IceDelegateD::tbWebMember::UserProfile::GetUserPwd(const ::std::string& uid, ::tbWebMember::stbuserPwd& pwd, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __tbWebMember__UserProfile__GetUserPwd_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::tbWebMember::UserProfile* __servant = dynamic_cast< ::tbWebMember::UserProfile*>(__direct.servant().get());
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
                __ret = __servant->GetUserPwd(uid, pwd, __current);
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
IceDelegateD::tbWebMember::UserProfile::CheckUser(const ::std::string& uid, ::tbWebMember::stbuserStatus& st, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __tbWebMember__UserProfile__CheckUser_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::tbWebMember::UserProfile* __servant = dynamic_cast< ::tbWebMember::UserProfile*>(__direct.servant().get());
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
                __ret = __servant->CheckUser(uid, st, __current);
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
IceDelegateD::tbWebMember::UserProfile::GetUserInfo(const ::std::string& uid, ::tbWebMember::stbuserInfo& info, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __tbWebMember__UserProfile__GetUserInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::tbWebMember::UserProfile* __servant = dynamic_cast< ::tbWebMember::UserProfile*>(__direct.servant().get());
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
                __ret = __servant->GetUserInfo(uid, info, __current);
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
IceDelegateD::tbWebMember::UserProfile::GetTName(const ::std::string& uid, ::std::string& tname, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __tbWebMember__UserProfile__GetTName_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::tbWebMember::UserProfile* __servant = dynamic_cast< ::tbWebMember::UserProfile*>(__direct.servant().get());
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
                __ret = __servant->GetTName(uid, tname, __current);
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
IceDelegateD::tbWebMember::UserProfile::GetUDBData(const ::std::string& uid, ::tbWebMember::sUdbData& udbInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __tbWebMember__UserProfile__GetUDBData_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::tbWebMember::UserProfile* __servant = dynamic_cast< ::tbWebMember::UserProfile*>(__direct.servant().get());
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
                __ret = __servant->GetUDBData(uid, udbInfo, __current);
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
IceDelegateD::tbWebMember::UserProfile::GetExUDBData(const ::std::string& uid, ::tbWebMember::SExUdbData& exudbInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __tbWebMember__UserProfile__GetExUDBData_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::tbWebMember::UserProfile* __servant = dynamic_cast< ::tbWebMember::UserProfile*>(__direct.servant().get());
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
                __ret = __servant->GetExUDBData(uid, exudbInfo, __current);
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
IceDelegateD::tbWebMember::UserProfile::GetRates(const ::std::string& uid, ::Ice::Int& buyrates, ::Ice::Int& sellrates, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __tbWebMember__UserProfile__GetRates_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::tbWebMember::UserProfile* __servant = dynamic_cast< ::tbWebMember::UserProfile*>(__direct.servant().get());
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
                __ret = __servant->GetRates(uid, buyrates, sellrates, __current);
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
IceDelegateD::tbWebMember::UserProfile::GetBasicLoginInfo(const ::std::string& uid, ::tbWebMember::SBLoginInfo& info, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __tbWebMember__UserProfile__GetBasicLoginInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::tbWebMember::UserProfile* __servant = dynamic_cast< ::tbWebMember::UserProfile*>(__direct.servant().get());
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
                __ret = __servant->GetBasicLoginInfo(uid, info, __current);
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
IceDelegateD::tbWebMember::UserProfile::CheckUserWebToken(const ::std::string& uid, const ::std::string& token, ::std::string& reason, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __tbWebMember__UserProfile__CheckUserWebToken_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::tbWebMember::UserProfile* __servant = dynamic_cast< ::tbWebMember::UserProfile*>(__direct.servant().get());
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
                __ret = __servant->CheckUserWebToken(uid, token, reason, __current);
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
tbWebMember::UserProfile::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __tbWebMember__UserProfile_ids[2] =
{
    "::Ice::Object",
    "::tbWebMember::UserProfile"
};

bool
tbWebMember::UserProfile::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__tbWebMember__UserProfile_ids, __tbWebMember__UserProfile_ids + 2, _s);
}

::std::vector< ::std::string>
tbWebMember::UserProfile::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__tbWebMember__UserProfile_ids[0], &__tbWebMember__UserProfile_ids[2]);
}

const ::std::string&
tbWebMember::UserProfile::ice_id(const ::Ice::Current&) const
{
    return __tbWebMember__UserProfile_ids[1];
}

const ::std::string&
tbWebMember::UserProfile::ice_staticId()
{
    return __tbWebMember__UserProfile_ids[1];
}

::IceInternal::DispatchStatus
tbWebMember::UserProfile::___GetSimpleUserProfile(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::tbWebMember::SSimpleUserProfile userProfiles;
    ::Ice::Int __ret = GetSimpleUserProfile(uid, userProfiles, __current);
    userProfiles.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
tbWebMember::UserProfile::___GetFullUserProfile(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::tbWebMember::StbFullUserProfile userProfiles;
    ::Ice::Int __ret = GetFullUserProfile(uid, userProfiles, __current);
    userProfiles.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
tbWebMember::UserProfile::___GetUidByPenname(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
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
tbWebMember::UserProfile::___GetUserPwd(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::tbWebMember::stbuserPwd pwd;
    ::Ice::Int __ret = GetUserPwd(uid, pwd, __current);
    pwd.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
tbWebMember::UserProfile::___CheckUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::tbWebMember::stbuserStatus st;
    ::Ice::Int __ret = CheckUser(uid, st, __current);
    st.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
tbWebMember::UserProfile::___GetUserInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::tbWebMember::stbuserInfo info;
    ::Ice::Int __ret = GetUserInfo(uid, info, __current);
    info.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
tbWebMember::UserProfile::___GetTName(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::std::string tname;
    ::Ice::Int __ret = GetTName(uid, tname, __current);
    __os->write(tname);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
tbWebMember::UserProfile::___GetUDBData(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::tbWebMember::sUdbData udbInfo;
    ::Ice::Int __ret = GetUDBData(uid, udbInfo, __current);
    udbInfo.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
tbWebMember::UserProfile::___GetExUDBData(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::tbWebMember::SExUdbData exudbInfo;
    ::Ice::Int __ret = GetExUDBData(uid, exudbInfo, __current);
    exudbInfo.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
tbWebMember::UserProfile::___GetRates(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::Ice::Int buyrates;
    ::Ice::Int sellrates;
    ::Ice::Int __ret = GetRates(uid, buyrates, sellrates, __current);
    __os->write(buyrates);
    __os->write(sellrates);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
tbWebMember::UserProfile::___GetBasicLoginInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::tbWebMember::SBLoginInfo info;
    ::Ice::Int __ret = GetBasicLoginInfo(uid, info, __current);
    info.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
tbWebMember::UserProfile::___CheckUserWebToken(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string token;
    __is->read(uid);
    __is->read(token);
    ::std::string reason;
    ::Ice::Int __ret = CheckUserWebToken(uid, token, reason, __current);
    __os->write(reason);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __tbWebMember__UserProfile_all[] =
{
    "CheckUser",
    "CheckUserWebToken",
    "GetBasicLoginInfo",
    "GetExUDBData",
    "GetFullUserProfile",
    "GetRates",
    "GetSimpleUserProfile",
    "GetTName",
    "GetUDBData",
    "GetUidByPenname",
    "GetUserInfo",
    "GetUserPwd",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::IceInternal::DispatchStatus
tbWebMember::UserProfile::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__tbWebMember__UserProfile_all, __tbWebMember__UserProfile_all + 16, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __tbWebMember__UserProfile_all)
    {
        case 0:
        {
            return ___CheckUser(in, current);
        }
        case 1:
        {
            return ___CheckUserWebToken(in, current);
        }
        case 2:
        {
            return ___GetBasicLoginInfo(in, current);
        }
        case 3:
        {
            return ___GetExUDBData(in, current);
        }
        case 4:
        {
            return ___GetFullUserProfile(in, current);
        }
        case 5:
        {
            return ___GetRates(in, current);
        }
        case 6:
        {
            return ___GetSimpleUserProfile(in, current);
        }
        case 7:
        {
            return ___GetTName(in, current);
        }
        case 8:
        {
            return ___GetUDBData(in, current);
        }
        case 9:
        {
            return ___GetUidByPenname(in, current);
        }
        case 10:
        {
            return ___GetUserInfo(in, current);
        }
        case 11:
        {
            return ___GetUserPwd(in, current);
        }
        case 12:
        {
            return ___ice_id(in, current);
        }
        case 13:
        {
            return ___ice_ids(in, current);
        }
        case 14:
        {
            return ___ice_isA(in, current);
        }
        case 15:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
tbWebMember::UserProfile::__write(::IceInternal::BasicStream* __os) const
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
tbWebMember::UserProfile::__read(::IceInternal::BasicStream* __is, bool __rid)
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
tbWebMember::UserProfile::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type tbWebMember::UserProfile was not generated with stream support";
    throw ex;
}

void
tbWebMember::UserProfile::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type tbWebMember::UserProfile was not generated with stream support";
    throw ex;
}

void 
tbWebMember::__patch__UserProfilePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::tbWebMember::UserProfilePtr* p = static_cast< ::tbWebMember::UserProfilePtr*>(__addr);
    assert(p);
    *p = ::tbWebMember::UserProfilePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::tbWebMember::UserProfile::ice_staticId();
        throw e;
    }
}

bool
tbWebMember::operator==(const ::tbWebMember::UserProfile& l, const ::tbWebMember::UserProfile& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
tbWebMember::operator!=(const ::tbWebMember::UserProfile& l, const ::tbWebMember::UserProfile& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
tbWebMember::operator<(const ::tbWebMember::UserProfile& l, const ::tbWebMember::UserProfile& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
tbWebMember::operator<=(const ::tbWebMember::UserProfile& l, const ::tbWebMember::UserProfile& r)
{
    return l < r || l == r;
}

bool
tbWebMember::operator>(const ::tbWebMember::UserProfile& l, const ::tbWebMember::UserProfile& r)
{
    return !(l < r) && !(l == r);
}

bool
tbWebMember::operator>=(const ::tbWebMember::UserProfile& l, const ::tbWebMember::UserProfile& r)
{
    return !(l < r);
}
