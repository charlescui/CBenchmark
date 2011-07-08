// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `Exhibitionservice.ice'

#include <Exhibitionservice.h>
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

static const ::std::string __AliIM__ExhibitionInterface__CheckUserWebPasswd_name = "CheckUserWebPasswd";

static const ::std::string __AliIM__ExhibitionInterface__getUserProfileByLongId_name = "getUserProfileByLongId";

void
IceInternal::incRef(::AliIM::ExhibitionInterface* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::AliIM::ExhibitionInterface* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::AliIM::ExhibitionInterface* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::AliIM::ExhibitionInterface* p)
{
    p->__decRef();
}

void
AliIM::__write(::IceInternal::BasicStream* __os, const ::AliIM::ExhibitionInterfacePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
AliIM::__read(::IceInternal::BasicStream* __is, ::AliIM::ExhibitionInterfacePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::AliIM::ExhibitionInterface;
        v->__copyFrom(proxy);
    }
}

void
AliIM::__write(::IceInternal::BasicStream* __os, const ::AliIM::ExhibitionInterfacePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

bool
AliIM::UserProfile::operator==(const UserProfile& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AliIM::UserProfile::operator!=(const UserProfile& __rhs) const
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
AliIM::UserProfile::operator<(const UserProfile& __rhs) const
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
AliIM::UserProfile::__write(::IceInternal::BasicStream* __os) const
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
AliIM::UserProfile::__read(::IceInternal::BasicStream* __is)
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
AliIM::__addObject(const ExhibitionInterfacePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
AliIM::__usesClasses(const ExhibitionInterfacePtr& p)
{
    return p->__usesClasses();
}

void
AliIM::__decRefUnsafe(const ExhibitionInterfacePtr& p)
{
    p->__decRefUnsafe();
}

void
AliIM::__clearHandleUnsafe(ExhibitionInterfacePtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::AliIM::ExhibitionInterface::CheckUserWebPasswd(const ::std::string& strCaller, const ::std::string& strServiceType, const ::std::string& userId, const ::std::string& passwd, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__ExhibitionInterface__CheckUserWebPasswd_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::ExhibitionInterface* __del = dynamic_cast< ::IceDelegate::AliIM::ExhibitionInterface*>(__delBase.get());
            return __del->CheckUserWebPasswd(strCaller, strServiceType, userId, passwd, __ctx);
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
IceProxy::AliIM::ExhibitionInterface::getUserProfileByLongId(const ::std::string& strCaller, const ::std::string& strServiceType, const ::std::string& longId, ::AliIM::UserProfile& userProfile, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__ExhibitionInterface__getUserProfileByLongId_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::ExhibitionInterface* __del = dynamic_cast< ::IceDelegate::AliIM::ExhibitionInterface*>(__delBase.get());
            return __del->getUserProfileByLongId(strCaller, strServiceType, longId, userProfile, __ctx);
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
IceProxy::AliIM::ExhibitionInterface::ice_staticId()
{
    return ::AliIM::ExhibitionInterface::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::AliIM::ExhibitionInterface::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::AliIM::ExhibitionInterface);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::AliIM::ExhibitionInterface::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::AliIM::ExhibitionInterface);
}

bool
IceProxy::AliIM::operator==(const ::IceProxy::AliIM::ExhibitionInterface& l, const ::IceProxy::AliIM::ExhibitionInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator!=(const ::IceProxy::AliIM::ExhibitionInterface& l, const ::IceProxy::AliIM::ExhibitionInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator<(const ::IceProxy::AliIM::ExhibitionInterface& l, const ::IceProxy::AliIM::ExhibitionInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator<=(const ::IceProxy::AliIM::ExhibitionInterface& l, const ::IceProxy::AliIM::ExhibitionInterface& r)
{
    return l < r || l == r;
}

bool
IceProxy::AliIM::operator>(const ::IceProxy::AliIM::ExhibitionInterface& l, const ::IceProxy::AliIM::ExhibitionInterface& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::AliIM::operator>=(const ::IceProxy::AliIM::ExhibitionInterface& l, const ::IceProxy::AliIM::ExhibitionInterface& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::AliIM::ExhibitionInterface::CheckUserWebPasswd(const ::std::string& strCaller, const ::std::string& strServiceType, const ::std::string& userId, const ::std::string& passwd, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__ExhibitionInterface__CheckUserWebPasswd_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(strCaller);
        __os->write(strServiceType);
        __os->write(userId);
        __os->write(passwd);
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
IceDelegateM::AliIM::ExhibitionInterface::getUserProfileByLongId(const ::std::string& strCaller, const ::std::string& strServiceType, const ::std::string& longId, ::AliIM::UserProfile& userProfile, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__ExhibitionInterface__getUserProfileByLongId_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(strCaller);
        __os->write(strServiceType);
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
IceDelegateD::AliIM::ExhibitionInterface::CheckUserWebPasswd(const ::std::string& strCaller, const ::std::string& strServiceType, const ::std::string& userId, const ::std::string& passwd, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__ExhibitionInterface__CheckUserWebPasswd_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::ExhibitionInterface* __servant = dynamic_cast< ::AliIM::ExhibitionInterface*>(__direct.servant().get());
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
                __ret = __servant->CheckUserWebPasswd(strCaller, strServiceType, userId, passwd, __current);
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
IceDelegateD::AliIM::ExhibitionInterface::getUserProfileByLongId(const ::std::string& strCaller, const ::std::string& strServiceType, const ::std::string& longId, ::AliIM::UserProfile& userProfile, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__ExhibitionInterface__getUserProfileByLongId_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::ExhibitionInterface* __servant = dynamic_cast< ::AliIM::ExhibitionInterface*>(__direct.servant().get());
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
                __ret = __servant->getUserProfileByLongId(strCaller, strServiceType, longId, userProfile, __current);
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
AliIM::ExhibitionInterface::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __AliIM__ExhibitionInterface_ids[2] =
{
    "::AliIM::ExhibitionInterface",
    "::Ice::Object"
};

bool
AliIM::ExhibitionInterface::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__AliIM__ExhibitionInterface_ids, __AliIM__ExhibitionInterface_ids + 2, _s);
}

::std::vector< ::std::string>
AliIM::ExhibitionInterface::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__AliIM__ExhibitionInterface_ids[0], &__AliIM__ExhibitionInterface_ids[2]);
}

const ::std::string&
AliIM::ExhibitionInterface::ice_id(const ::Ice::Current&) const
{
    return __AliIM__ExhibitionInterface_ids[0];
}

const ::std::string&
AliIM::ExhibitionInterface::ice_staticId()
{
    return __AliIM__ExhibitionInterface_ids[0];
}

::IceInternal::DispatchStatus
AliIM::ExhibitionInterface::___CheckUserWebPasswd(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string strCaller;
    ::std::string strServiceType;
    ::std::string userId;
    ::std::string passwd;
    __is->read(strCaller);
    __is->read(strServiceType);
    __is->read(userId);
    __is->read(passwd);
    ::Ice::Int __ret = CheckUserWebPasswd(strCaller, strServiceType, userId, passwd, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::ExhibitionInterface::___getUserProfileByLongId(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string strCaller;
    ::std::string strServiceType;
    ::std::string longId;
    __is->read(strCaller);
    __is->read(strServiceType);
    __is->read(longId);
    ::AliIM::UserProfile userProfile;
    ::Ice::Int __ret = getUserProfileByLongId(strCaller, strServiceType, longId, userProfile, __current);
    userProfile.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __AliIM__ExhibitionInterface_all[] =
{
    "CheckUserWebPasswd",
    "getUserProfileByLongId",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::IceInternal::DispatchStatus
AliIM::ExhibitionInterface::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__AliIM__ExhibitionInterface_all, __AliIM__ExhibitionInterface_all + 6, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __AliIM__ExhibitionInterface_all)
    {
        case 0:
        {
            return ___CheckUserWebPasswd(in, current);
        }
        case 1:
        {
            return ___getUserProfileByLongId(in, current);
        }
        case 2:
        {
            return ___ice_id(in, current);
        }
        case 3:
        {
            return ___ice_ids(in, current);
        }
        case 4:
        {
            return ___ice_isA(in, current);
        }
        case 5:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
AliIM::ExhibitionInterface::__write(::IceInternal::BasicStream* __os) const
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
AliIM::ExhibitionInterface::__read(::IceInternal::BasicStream* __is, bool __rid)
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
AliIM::ExhibitionInterface::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIM::ExhibitionInterface was not generated with stream support";
    throw ex;
}

void
AliIM::ExhibitionInterface::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIM::ExhibitionInterface was not generated with stream support";
    throw ex;
}

void 
AliIM::__patch__ExhibitionInterfacePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::AliIM::ExhibitionInterfacePtr* p = static_cast< ::AliIM::ExhibitionInterfacePtr*>(__addr);
    assert(p);
    *p = ::AliIM::ExhibitionInterfacePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::AliIM::ExhibitionInterface::ice_staticId();
        throw e;
    }
}

bool
AliIM::operator==(const ::AliIM::ExhibitionInterface& l, const ::AliIM::ExhibitionInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator!=(const ::AliIM::ExhibitionInterface& l, const ::AliIM::ExhibitionInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator<(const ::AliIM::ExhibitionInterface& l, const ::AliIM::ExhibitionInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator<=(const ::AliIM::ExhibitionInterface& l, const ::AliIM::ExhibitionInterface& r)
{
    return l < r || l == r;
}

bool
AliIM::operator>(const ::AliIM::ExhibitionInterface& l, const ::AliIM::ExhibitionInterface& r)
{
    return !(l < r) && !(l == r);
}

bool
AliIM::operator>=(const ::AliIM::ExhibitionInterface& l, const ::AliIM::ExhibitionInterface& r)
{
    return !(l < r);
}
