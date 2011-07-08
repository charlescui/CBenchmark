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

#include <atmMember.h>
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

static const ::std::string __atmWebMember__UserProfile__GetUserPwd_name = "GetUserPwd";

static const ::std::string __atmWebMember__UserProfile__GetUDBData_name = "GetUDBData";

static const ::std::string __atmWebMember__UserProfile__GetBasicProfile_name = "GetBasicProfile";

static const ::std::string __atmWebMember__UserProfile__GetContactInfo_name = "GetContactInfo";

void
IceInternal::incRef(::atmWebMember::UserProfile* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::atmWebMember::UserProfile* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::atmWebMember::UserProfile* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::atmWebMember::UserProfile* p)
{
    p->__decRef();
}

void
atmWebMember::__write(::IceInternal::BasicStream* __os, const ::atmWebMember::UserProfilePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
atmWebMember::__read(::IceInternal::BasicStream* __is, ::atmWebMember::UserProfilePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::atmWebMember::UserProfile;
        v->__copyFrom(proxy);
    }
}

void
atmWebMember::__write(::IceInternal::BasicStream* __os, const ::atmWebMember::UserProfilePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

bool
atmWebMember::sBasicProfile::operator==(const sBasicProfile& __rhs) const
{
    return !operator!=(__rhs);
}

bool
atmWebMember::sBasicProfile::operator!=(const sBasicProfile& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(longid != __rhs.longid)
    {
        return true;
    }
    if(isExist != __rhs.isExist)
    {
        return true;
    }
    if(status != __rhs.status)
    {
        return true;
    }
    if(username != __rhs.username)
    {
        return true;
    }
    if(password != __rhs.password)
    {
        return true;
    }
    if(companyname != __rhs.companyname)
    {
        return true;
    }
    if(jobTitle != __rhs.jobTitle)
    {
        return true;
    }
    if(oldOverseaLevel != __rhs.oldOverseaLevel)
    {
        return true;
    }
    if(oldGslevel != __rhs.oldGslevel)
    {
        return true;
    }
    if(memberLevel != __rhs.memberLevel)
    {
        return true;
    }
    if(categoryids != __rhs.categoryids)
    {
        return true;
    }
    if(area != __rhs.area)
    {
        return true;
    }
    if(country != __rhs.country)
    {
        return true;
    }
    if(companyId != __rhs.companyId)
    {
        return true;
    }
    return false;
}

bool
atmWebMember::sBasicProfile::operator<(const sBasicProfile& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(longid < __rhs.longid)
    {
        return true;
    }
    else if(__rhs.longid < longid)
    {
        return false;
    }
    if(isExist < __rhs.isExist)
    {
        return true;
    }
    else if(__rhs.isExist < isExist)
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
    if(username < __rhs.username)
    {
        return true;
    }
    else if(__rhs.username < username)
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
    if(companyname < __rhs.companyname)
    {
        return true;
    }
    else if(__rhs.companyname < companyname)
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
    if(oldOverseaLevel < __rhs.oldOverseaLevel)
    {
        return true;
    }
    else if(__rhs.oldOverseaLevel < oldOverseaLevel)
    {
        return false;
    }
    if(oldGslevel < __rhs.oldGslevel)
    {
        return true;
    }
    else if(__rhs.oldGslevel < oldGslevel)
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
    if(categoryids < __rhs.categoryids)
    {
        return true;
    }
    else if(__rhs.categoryids < categoryids)
    {
        return false;
    }
    if(area < __rhs.area)
    {
        return true;
    }
    else if(__rhs.area < area)
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
    if(companyId < __rhs.companyId)
    {
        return true;
    }
    else if(__rhs.companyId < companyId)
    {
        return false;
    }
    return false;
}

void
atmWebMember::sBasicProfile::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(longid);
    __os->write(isExist);
    __os->write(status);
    __os->write(username);
    __os->write(password);
    __os->write(companyname);
    __os->write(jobTitle);
    __os->write(oldOverseaLevel);
    __os->write(oldGslevel);
    __os->write(memberLevel);
    __os->write(categoryids);
    __os->write(area);
    __os->write(country);
    __os->write(companyId);
}

void
atmWebMember::sBasicProfile::__read(::IceInternal::BasicStream* __is)
{
    __is->read(longid);
    __is->read(isExist);
    __is->read(status);
    __is->read(username);
    __is->read(password);
    __is->read(companyname);
    __is->read(jobTitle);
    __is->read(oldOverseaLevel);
    __is->read(oldGslevel);
    __is->read(memberLevel);
    __is->read(categoryids);
    __is->read(area);
    __is->read(country);
    __is->read(companyId);
}

bool
atmWebMember::sUdbData::operator==(const sUdbData& __rhs) const
{
    return !operator!=(__rhs);
}

bool
atmWebMember::sUdbData::operator!=(const sUdbData& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(longid != __rhs.longid)
    {
        return true;
    }
    if(isExist != __rhs.isExist)
    {
        return true;
    }
    if(status != __rhs.status)
    {
        return true;
    }
    if(password != __rhs.password)
    {
        return true;
    }
    if(username != __rhs.username)
    {
        return true;
    }
    if(country != __rhs.country)
    {
        return true;
    }
    if(companyname != __rhs.companyname)
    {
        return true;
    }
    if(jobTitle != __rhs.jobTitle)
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
    if(companyaddress != __rhs.companyaddress)
    {
        return true;
    }
    if(companyfax != __rhs.companyfax)
    {
        return true;
    }
    if(companyzip != __rhs.companyzip)
    {
        return true;
    }
    if(companyemail != __rhs.companyemail)
    {
        return true;
    }
    if(companyurl != __rhs.companyurl)
    {
        return true;
    }
    if(purchase != __rhs.purchase)
    {
        return true;
    }
    if(provide != __rhs.provide)
    {
        return true;
    }
    if(department != __rhs.department)
    {
        return true;
    }
    return false;
}

bool
atmWebMember::sUdbData::operator<(const sUdbData& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(longid < __rhs.longid)
    {
        return true;
    }
    else if(__rhs.longid < longid)
    {
        return false;
    }
    if(isExist < __rhs.isExist)
    {
        return true;
    }
    else if(__rhs.isExist < isExist)
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
    if(password < __rhs.password)
    {
        return true;
    }
    else if(__rhs.password < password)
    {
        return false;
    }
    if(username < __rhs.username)
    {
        return true;
    }
    else if(__rhs.username < username)
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
    if(companyname < __rhs.companyname)
    {
        return true;
    }
    else if(__rhs.companyname < companyname)
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
    if(companyaddress < __rhs.companyaddress)
    {
        return true;
    }
    else if(__rhs.companyaddress < companyaddress)
    {
        return false;
    }
    if(companyfax < __rhs.companyfax)
    {
        return true;
    }
    else if(__rhs.companyfax < companyfax)
    {
        return false;
    }
    if(companyzip < __rhs.companyzip)
    {
        return true;
    }
    else if(__rhs.companyzip < companyzip)
    {
        return false;
    }
    if(companyemail < __rhs.companyemail)
    {
        return true;
    }
    else if(__rhs.companyemail < companyemail)
    {
        return false;
    }
    if(companyurl < __rhs.companyurl)
    {
        return true;
    }
    else if(__rhs.companyurl < companyurl)
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
    if(provide < __rhs.provide)
    {
        return true;
    }
    else if(__rhs.provide < provide)
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
    return false;
}

void
atmWebMember::sUdbData::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(longid);
    __os->write(isExist);
    __os->write(status);
    __os->write(password);
    __os->write(username);
    __os->write(country);
    __os->write(companyname);
    __os->write(jobTitle);
    __os->write(email);
    __os->write(zip);
    __os->write(address);
    __os->write(phone);
    __os->write(mobilephone);
    __os->write(prov);
    __os->write(city);
    __os->write(usergender);
    __os->write(companyaddress);
    __os->write(companyfax);
    __os->write(companyzip);
    __os->write(companyemail);
    __os->write(companyurl);
    __os->write(purchase);
    __os->write(provide);
    __os->write(department);
}

void
atmWebMember::sUdbData::__read(::IceInternal::BasicStream* __is)
{
    __is->read(longid);
    __is->read(isExist);
    __is->read(status);
    __is->read(password);
    __is->read(username);
    __is->read(country);
    __is->read(companyname);
    __is->read(jobTitle);
    __is->read(email);
    __is->read(zip);
    __is->read(address);
    __is->read(phone);
    __is->read(mobilephone);
    __is->read(prov);
    __is->read(city);
    __is->read(usergender);
    __is->read(companyaddress);
    __is->read(companyfax);
    __is->read(companyzip);
    __is->read(companyemail);
    __is->read(companyurl);
    __is->read(purchase);
    __is->read(provide);
    __is->read(department);
}

bool
atmWebMember::sContactInfo::operator==(const sContactInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
atmWebMember::sContactInfo::operator!=(const sContactInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(longid != __rhs.longid)
    {
        return true;
    }
    if(isExist != __rhs.isExist)
    {
        return true;
    }
    if(firstname != __rhs.firstname)
    {
        return true;
    }
    if(lastname != __rhs.lastname)
    {
        return true;
    }
    if(country != __rhs.country)
    {
        return true;
    }
    if(companyId != __rhs.companyId)
    {
        return true;
    }
    if(companyname != __rhs.companyname)
    {
        return true;
    }
    if(companyaddress != __rhs.companyaddress)
    {
        return true;
    }
    if(companyZip != __rhs.companyZip)
    {
        return true;
    }
    if(homepageUrl != __rhs.homepageUrl)
    {
        return true;
    }
    if(bizType != __rhs.bizType)
    {
        return true;
    }
    if(provideProducts != __rhs.provideProducts)
    {
        return true;
    }
    if(jobTitle != __rhs.jobTitle)
    {
        return true;
    }
    if(categoryids != __rhs.categoryids)
    {
        return true;
    }
    if(email != __rhs.email)
    {
        return true;
    }
    if(phone != __rhs.phone)
    {
        return true;
    }
    if(faxNumber != __rhs.faxNumber)
    {
        return true;
    }
    if(mobilephone != __rhs.mobilephone)
    {
        return true;
    }
    if(usergender != __rhs.usergender)
    {
        return true;
    }
    return false;
}

bool
atmWebMember::sContactInfo::operator<(const sContactInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(longid < __rhs.longid)
    {
        return true;
    }
    else if(__rhs.longid < longid)
    {
        return false;
    }
    if(isExist < __rhs.isExist)
    {
        return true;
    }
    else if(__rhs.isExist < isExist)
    {
        return false;
    }
    if(firstname < __rhs.firstname)
    {
        return true;
    }
    else if(__rhs.firstname < firstname)
    {
        return false;
    }
    if(lastname < __rhs.lastname)
    {
        return true;
    }
    else if(__rhs.lastname < lastname)
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
    if(companyId < __rhs.companyId)
    {
        return true;
    }
    else if(__rhs.companyId < companyId)
    {
        return false;
    }
    if(companyname < __rhs.companyname)
    {
        return true;
    }
    else if(__rhs.companyname < companyname)
    {
        return false;
    }
    if(companyaddress < __rhs.companyaddress)
    {
        return true;
    }
    else if(__rhs.companyaddress < companyaddress)
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
    if(homepageUrl < __rhs.homepageUrl)
    {
        return true;
    }
    else if(__rhs.homepageUrl < homepageUrl)
    {
        return false;
    }
    if(bizType < __rhs.bizType)
    {
        return true;
    }
    else if(__rhs.bizType < bizType)
    {
        return false;
    }
    if(provideProducts < __rhs.provideProducts)
    {
        return true;
    }
    else if(__rhs.provideProducts < provideProducts)
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
    if(categoryids < __rhs.categoryids)
    {
        return true;
    }
    else if(__rhs.categoryids < categoryids)
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
    if(phone < __rhs.phone)
    {
        return true;
    }
    else if(__rhs.phone < phone)
    {
        return false;
    }
    if(faxNumber < __rhs.faxNumber)
    {
        return true;
    }
    else if(__rhs.faxNumber < faxNumber)
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
    if(usergender < __rhs.usergender)
    {
        return true;
    }
    else if(__rhs.usergender < usergender)
    {
        return false;
    }
    return false;
}

void
atmWebMember::sContactInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(longid);
    __os->write(isExist);
    __os->write(firstname);
    __os->write(lastname);
    __os->write(country);
    __os->write(companyId);
    __os->write(companyname);
    __os->write(companyaddress);
    __os->write(companyZip);
    __os->write(homepageUrl);
    __os->write(bizType);
    __os->write(provideProducts);
    __os->write(jobTitle);
    __os->write(categoryids);
    __os->write(email);
    __os->write(phone);
    __os->write(faxNumber);
    __os->write(mobilephone);
    __os->write(usergender);
}

void
atmWebMember::sContactInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(longid);
    __is->read(isExist);
    __is->read(firstname);
    __is->read(lastname);
    __is->read(country);
    __is->read(companyId);
    __is->read(companyname);
    __is->read(companyaddress);
    __is->read(companyZip);
    __is->read(homepageUrl);
    __is->read(bizType);
    __is->read(provideProducts);
    __is->read(jobTitle);
    __is->read(categoryids);
    __is->read(email);
    __is->read(phone);
    __is->read(faxNumber);
    __is->read(mobilephone);
    __is->read(usergender);
}

bool
atmWebMember::SBLoginInfo::operator==(const SBLoginInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
atmWebMember::SBLoginInfo::operator!=(const SBLoginInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(longid != __rhs.longid)
    {
        return true;
    }
    if(isExist != __rhs.isExist)
    {
        return true;
    }
    if(status != __rhs.status)
    {
        return true;
    }
    if(passwd != __rhs.passwd)
    {
        return true;
    }
    if(email != __rhs.email)
    {
        return true;
    }
    if(seq != __rhs.seq)
    {
        return true;
    }
    return false;
}

bool
atmWebMember::SBLoginInfo::operator<(const SBLoginInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(longid < __rhs.longid)
    {
        return true;
    }
    else if(__rhs.longid < longid)
    {
        return false;
    }
    if(isExist < __rhs.isExist)
    {
        return true;
    }
    else if(__rhs.isExist < isExist)
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
    if(passwd < __rhs.passwd)
    {
        return true;
    }
    else if(__rhs.passwd < passwd)
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
    if(seq < __rhs.seq)
    {
        return true;
    }
    else if(__rhs.seq < seq)
    {
        return false;
    }
    return false;
}

void
atmWebMember::SBLoginInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(longid);
    __os->write(isExist);
    __os->write(status);
    __os->write(passwd);
    __os->write(email);
    __os->write(seq);
}

void
atmWebMember::SBLoginInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(longid);
    __is->read(isExist);
    __is->read(status);
    __is->read(passwd);
    __is->read(email);
    __is->read(seq);
}

void
atmWebMember::__addObject(const UserProfilePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
atmWebMember::__usesClasses(const UserProfilePtr& p)
{
    return p->__usesClasses();
}

void
atmWebMember::__decRefUnsafe(const UserProfilePtr& p)
{
    p->__decRefUnsafe();
}

void
atmWebMember::__clearHandleUnsafe(UserProfilePtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::atmWebMember::UserProfile::GetUserPwd(const ::std::string& uid, ::atmWebMember::SBLoginInfo& pwdinfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__atmWebMember__UserProfile__GetUserPwd_name);
            __delBase = __getDelegate();
            ::IceDelegate::atmWebMember::UserProfile* __del = dynamic_cast< ::IceDelegate::atmWebMember::UserProfile*>(__delBase.get());
            return __del->GetUserPwd(uid, pwdinfo, __ctx);
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
IceProxy::atmWebMember::UserProfile::GetUDBData(const ::std::string& uid, ::atmWebMember::sUdbData& udbInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__atmWebMember__UserProfile__GetUDBData_name);
            __delBase = __getDelegate();
            ::IceDelegate::atmWebMember::UserProfile* __del = dynamic_cast< ::IceDelegate::atmWebMember::UserProfile*>(__delBase.get());
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
IceProxy::atmWebMember::UserProfile::GetBasicProfile(const ::std::string& uid, ::atmWebMember::sBasicProfile& info, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__atmWebMember__UserProfile__GetBasicProfile_name);
            __delBase = __getDelegate();
            ::IceDelegate::atmWebMember::UserProfile* __del = dynamic_cast< ::IceDelegate::atmWebMember::UserProfile*>(__delBase.get());
            return __del->GetBasicProfile(uid, info, __ctx);
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
IceProxy::atmWebMember::UserProfile::GetContactInfo(const ::std::string& uid, ::atmWebMember::sContactInfo& cinfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__atmWebMember__UserProfile__GetContactInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::atmWebMember::UserProfile* __del = dynamic_cast< ::IceDelegate::atmWebMember::UserProfile*>(__delBase.get());
            return __del->GetContactInfo(uid, cinfo, __ctx);
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
IceProxy::atmWebMember::UserProfile::ice_staticId()
{
    return ::atmWebMember::UserProfile::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::atmWebMember::UserProfile::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::atmWebMember::UserProfile);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::atmWebMember::UserProfile::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::atmWebMember::UserProfile);
}

bool
IceProxy::atmWebMember::operator==(const ::IceProxy::atmWebMember::UserProfile& l, const ::IceProxy::atmWebMember::UserProfile& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::atmWebMember::operator!=(const ::IceProxy::atmWebMember::UserProfile& l, const ::IceProxy::atmWebMember::UserProfile& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::atmWebMember::operator<(const ::IceProxy::atmWebMember::UserProfile& l, const ::IceProxy::atmWebMember::UserProfile& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::atmWebMember::operator<=(const ::IceProxy::atmWebMember::UserProfile& l, const ::IceProxy::atmWebMember::UserProfile& r)
{
    return l < r || l == r;
}

bool
IceProxy::atmWebMember::operator>(const ::IceProxy::atmWebMember::UserProfile& l, const ::IceProxy::atmWebMember::UserProfile& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::atmWebMember::operator>=(const ::IceProxy::atmWebMember::UserProfile& l, const ::IceProxy::atmWebMember::UserProfile& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::atmWebMember::UserProfile::GetUserPwd(const ::std::string& uid, ::atmWebMember::SBLoginInfo& pwdinfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __atmWebMember__UserProfile__GetUserPwd_name, ::Ice::Normal, __context, __compress);
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
        pwdinfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::atmWebMember::UserProfile::GetUDBData(const ::std::string& uid, ::atmWebMember::sUdbData& udbInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __atmWebMember__UserProfile__GetUDBData_name, ::Ice::Normal, __context, __compress);
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
IceDelegateM::atmWebMember::UserProfile::GetBasicProfile(const ::std::string& uid, ::atmWebMember::sBasicProfile& info, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __atmWebMember__UserProfile__GetBasicProfile_name, ::Ice::Normal, __context, __compress);
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
IceDelegateM::atmWebMember::UserProfile::GetContactInfo(const ::std::string& uid, ::atmWebMember::sContactInfo& cinfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __atmWebMember__UserProfile__GetContactInfo_name, ::Ice::Normal, __context, __compress);
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
        cinfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::atmWebMember::UserProfile::GetUserPwd(const ::std::string& uid, ::atmWebMember::SBLoginInfo& pwdinfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __atmWebMember__UserProfile__GetUserPwd_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::atmWebMember::UserProfile* __servant = dynamic_cast< ::atmWebMember::UserProfile*>(__direct.servant().get());
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
                __ret = __servant->GetUserPwd(uid, pwdinfo, __current);
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
IceDelegateD::atmWebMember::UserProfile::GetUDBData(const ::std::string& uid, ::atmWebMember::sUdbData& udbInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __atmWebMember__UserProfile__GetUDBData_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::atmWebMember::UserProfile* __servant = dynamic_cast< ::atmWebMember::UserProfile*>(__direct.servant().get());
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
IceDelegateD::atmWebMember::UserProfile::GetBasicProfile(const ::std::string& uid, ::atmWebMember::sBasicProfile& info, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __atmWebMember__UserProfile__GetBasicProfile_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::atmWebMember::UserProfile* __servant = dynamic_cast< ::atmWebMember::UserProfile*>(__direct.servant().get());
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
                __ret = __servant->GetBasicProfile(uid, info, __current);
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
IceDelegateD::atmWebMember::UserProfile::GetContactInfo(const ::std::string& uid, ::atmWebMember::sContactInfo& cinfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __atmWebMember__UserProfile__GetContactInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::atmWebMember::UserProfile* __servant = dynamic_cast< ::atmWebMember::UserProfile*>(__direct.servant().get());
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
                __ret = __servant->GetContactInfo(uid, cinfo, __current);
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
atmWebMember::UserProfile::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __atmWebMember__UserProfile_ids[2] =
{
    "::Ice::Object",
    "::atmWebMember::UserProfile"
};

bool
atmWebMember::UserProfile::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__atmWebMember__UserProfile_ids, __atmWebMember__UserProfile_ids + 2, _s);
}

::std::vector< ::std::string>
atmWebMember::UserProfile::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__atmWebMember__UserProfile_ids[0], &__atmWebMember__UserProfile_ids[2]);
}

const ::std::string&
atmWebMember::UserProfile::ice_id(const ::Ice::Current&) const
{
    return __atmWebMember__UserProfile_ids[1];
}

const ::std::string&
atmWebMember::UserProfile::ice_staticId()
{
    return __atmWebMember__UserProfile_ids[1];
}

::IceInternal::DispatchStatus
atmWebMember::UserProfile::___GetUserPwd(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::atmWebMember::SBLoginInfo pwdinfo;
    ::Ice::Int __ret = GetUserPwd(uid, pwdinfo, __current);
    pwdinfo.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
atmWebMember::UserProfile::___GetUDBData(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::atmWebMember::sUdbData udbInfo;
    ::Ice::Int __ret = GetUDBData(uid, udbInfo, __current);
    udbInfo.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
atmWebMember::UserProfile::___GetBasicProfile(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::atmWebMember::sBasicProfile info;
    ::Ice::Int __ret = GetBasicProfile(uid, info, __current);
    info.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
atmWebMember::UserProfile::___GetContactInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::atmWebMember::sContactInfo cinfo;
    ::Ice::Int __ret = GetContactInfo(uid, cinfo, __current);
    cinfo.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __atmWebMember__UserProfile_all[] =
{
    "GetBasicProfile",
    "GetContactInfo",
    "GetUDBData",
    "GetUserPwd",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::IceInternal::DispatchStatus
atmWebMember::UserProfile::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__atmWebMember__UserProfile_all, __atmWebMember__UserProfile_all + 8, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __atmWebMember__UserProfile_all)
    {
        case 0:
        {
            return ___GetBasicProfile(in, current);
        }
        case 1:
        {
            return ___GetContactInfo(in, current);
        }
        case 2:
        {
            return ___GetUDBData(in, current);
        }
        case 3:
        {
            return ___GetUserPwd(in, current);
        }
        case 4:
        {
            return ___ice_id(in, current);
        }
        case 5:
        {
            return ___ice_ids(in, current);
        }
        case 6:
        {
            return ___ice_isA(in, current);
        }
        case 7:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
atmWebMember::UserProfile::__write(::IceInternal::BasicStream* __os) const
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
atmWebMember::UserProfile::__read(::IceInternal::BasicStream* __is, bool __rid)
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
atmWebMember::UserProfile::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type atmWebMember::UserProfile was not generated with stream support";
    throw ex;
}

void
atmWebMember::UserProfile::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type atmWebMember::UserProfile was not generated with stream support";
    throw ex;
}

void 
atmWebMember::__patch__UserProfilePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::atmWebMember::UserProfilePtr* p = static_cast< ::atmWebMember::UserProfilePtr*>(__addr);
    assert(p);
    *p = ::atmWebMember::UserProfilePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::atmWebMember::UserProfile::ice_staticId();
        throw e;
    }
}

bool
atmWebMember::operator==(const ::atmWebMember::UserProfile& l, const ::atmWebMember::UserProfile& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
atmWebMember::operator!=(const ::atmWebMember::UserProfile& l, const ::atmWebMember::UserProfile& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
atmWebMember::operator<(const ::atmWebMember::UserProfile& l, const ::atmWebMember::UserProfile& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
atmWebMember::operator<=(const ::atmWebMember::UserProfile& l, const ::atmWebMember::UserProfile& r)
{
    return l < r || l == r;
}

bool
atmWebMember::operator>(const ::atmWebMember::UserProfile& l, const ::atmWebMember::UserProfile& r)
{
    return !(l < r) && !(l == r);
}

bool
atmWebMember::operator>=(const ::atmWebMember::UserProfile& l, const ::atmWebMember::UserProfile& r)
{
    return !(l < r);
}
