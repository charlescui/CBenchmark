// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `searchuser.ice'

#include <searchuser.h>
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

static const ::std::string __AliIM__SearchUserInterface__searchUser_name = "searchUser";

static const ::std::string __AliIM__SearchUserInterface__searchUserB2BFuzzy_name = "searchUserB2BFuzzy";

static const ::std::string __AliIM__SearchUserInterface__getRecommendUser_name = "getRecommendUser";

static const ::std::string __AliIM__SearchUserInterface__getUsersByName_name = "getUsersByName";

static const ::std::string __AliIM__SearchUserInterface__getTribeInfo_name = "getTribeInfo";

static const ::std::string __AliIM__SearchUserInterface__advancedSearchUser_name = "advancedSearchUser";

void
IceInternal::incRef(::AliIM::SearchUserInterface* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::AliIM::SearchUserInterface* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::AliIM::SearchUserInterface* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::AliIM::SearchUserInterface* p)
{
    p->__decRef();
}

void
AliIM::__write(::IceInternal::BasicStream* __os, const ::AliIM::SearchUserInterfacePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
AliIM::__read(::IceInternal::BasicStream* __is, ::AliIM::SearchUserInterfacePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::AliIM::SearchUserInterface;
        v->__copyFrom(proxy);
    }
}

void
AliIM::__write(::IceInternal::BasicStream* __os, const ::AliIM::SearchUserInterfacePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

bool
AliIM::SSearchUserRes::operator==(const SSearchUserRes& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AliIM::SSearchUserRes::operator!=(const SSearchUserRes& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(contactid != __rhs.contactid)
    {
        return true;
    }
    if(nickname != __rhs.nickname)
    {
        return true;
    }
    if(site != __rhs.site)
    {
        return true;
    }
    if(age != __rhs.age)
    {
        return true;
    }
    if(gender != __rhs.gender)
    {
        return true;
    }
    if(city != __rhs.city)
    {
        return true;
    }
    if(basicStatus != __rhs.basicStatus)
    {
        return true;
    }
    return false;
}

bool
AliIM::SSearchUserRes::operator<(const SSearchUserRes& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(contactid < __rhs.contactid)
    {
        return true;
    }
    else if(__rhs.contactid < contactid)
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
    if(site < __rhs.site)
    {
        return true;
    }
    else if(__rhs.site < site)
    {
        return false;
    }
    if(age < __rhs.age)
    {
        return true;
    }
    else if(__rhs.age < age)
    {
        return false;
    }
    if(gender < __rhs.gender)
    {
        return true;
    }
    else if(__rhs.gender < gender)
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
    if(basicStatus < __rhs.basicStatus)
    {
        return true;
    }
    else if(__rhs.basicStatus < basicStatus)
    {
        return false;
    }
    return false;
}

void
AliIM::SSearchUserRes::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(contactid);
    __os->write(nickname);
    __os->write(site);
    __os->write(age);
    __os->write(gender);
    __os->write(city);
    __os->write(basicStatus);
}

void
AliIM::SSearchUserRes::__read(::IceInternal::BasicStream* __is)
{
    __is->read(contactid);
    __is->read(nickname);
    __is->read(site);
    __is->read(age);
    __is->read(gender);
    __is->read(city);
    __is->read(basicStatus);
}

bool
AliIM::STribeInfo::operator==(const STribeInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AliIM::STribeInfo::operator!=(const STribeInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeid != __rhs.tribeid)
    {
        return true;
    }
    if(tribename != __rhs.tribename)
    {
        return true;
    }
    if(masterId != __rhs.masterId)
    {
        return true;
    }
    if(tribeclass != __rhs.tribeclass)
    {
        return true;
    }
    if(describe != __rhs.describe)
    {
        return true;
    }
    if(bulletin != __rhs.bulletin)
    {
        return true;
    }
    if(checkmode != __rhs.checkmode)
    {
        return true;
    }
    if(password != __rhs.password)
    {
        return true;
    }
    if(keyword != __rhs.keyword)
    {
        return true;
    }
    if(allowvisitor != __rhs.allowvisitor)
    {
        return true;
    }
    if(forbidsearch != __rhs.forbidsearch)
    {
        return true;
    }
    if(extsign != __rhs.extsign)
    {
        return true;
    }
    if(opentribe != __rhs.opentribe)
    {
        return true;
    }
    if(maxmembers != __rhs.maxmembers)
    {
        return true;
    }
    return false;
}

bool
AliIM::STribeInfo::operator<(const STribeInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeid < __rhs.tribeid)
    {
        return true;
    }
    else if(__rhs.tribeid < tribeid)
    {
        return false;
    }
    if(tribename < __rhs.tribename)
    {
        return true;
    }
    else if(__rhs.tribename < tribename)
    {
        return false;
    }
    if(masterId < __rhs.masterId)
    {
        return true;
    }
    else if(__rhs.masterId < masterId)
    {
        return false;
    }
    if(tribeclass < __rhs.tribeclass)
    {
        return true;
    }
    else if(__rhs.tribeclass < tribeclass)
    {
        return false;
    }
    if(describe < __rhs.describe)
    {
        return true;
    }
    else if(__rhs.describe < describe)
    {
        return false;
    }
    if(bulletin < __rhs.bulletin)
    {
        return true;
    }
    else if(__rhs.bulletin < bulletin)
    {
        return false;
    }
    if(checkmode < __rhs.checkmode)
    {
        return true;
    }
    else if(__rhs.checkmode < checkmode)
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
    if(keyword < __rhs.keyword)
    {
        return true;
    }
    else if(__rhs.keyword < keyword)
    {
        return false;
    }
    if(allowvisitor < __rhs.allowvisitor)
    {
        return true;
    }
    else if(__rhs.allowvisitor < allowvisitor)
    {
        return false;
    }
    if(forbidsearch < __rhs.forbidsearch)
    {
        return true;
    }
    else if(__rhs.forbidsearch < forbidsearch)
    {
        return false;
    }
    if(extsign < __rhs.extsign)
    {
        return true;
    }
    else if(__rhs.extsign < extsign)
    {
        return false;
    }
    if(opentribe < __rhs.opentribe)
    {
        return true;
    }
    else if(__rhs.opentribe < opentribe)
    {
        return false;
    }
    if(maxmembers < __rhs.maxmembers)
    {
        return true;
    }
    else if(__rhs.maxmembers < maxmembers)
    {
        return false;
    }
    return false;
}

void
AliIM::STribeInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(tribeid);
    __os->write(tribename);
    __os->write(masterId);
    __os->write(tribeclass);
    __os->write(describe);
    __os->write(bulletin);
    __os->write(checkmode);
    __os->write(password);
    __os->write(keyword);
    __os->write(allowvisitor);
    __os->write(forbidsearch);
    __os->write(extsign);
    __os->write(opentribe);
    __os->write(maxmembers);
}

void
AliIM::STribeInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(tribeid);
    __is->read(tribename);
    __is->read(masterId);
    __is->read(tribeclass);
    __is->read(describe);
    __is->read(bulletin);
    __is->read(checkmode);
    __is->read(password);
    __is->read(keyword);
    __is->read(allowvisitor);
    __is->read(forbidsearch);
    __is->read(extsign);
    __is->read(opentribe);
    __is->read(maxmembers);
}

void
AliIM::__write(::IceInternal::BasicStream* __os, const ::AliIM::SSearchUserRes* begin, const ::AliIM::SSearchUserRes* end, ::AliIM::__U__SearchuserResSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
AliIM::__read(::IceInternal::BasicStream* __is, ::AliIM::SearchuserResSeq& v, ::AliIM::__U__SearchuserResSeq)
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
AliIM::__addObject(const SearchUserInterfacePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
AliIM::__usesClasses(const SearchUserInterfacePtr& p)
{
    return p->__usesClasses();
}

void
AliIM::__decRefUnsafe(const SearchUserInterfacePtr& p)
{
    p->__decRefUnsafe();
}

void
AliIM::__clearHandleUnsafe(SearchUserInterfacePtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::AliIM::SearchUserInterface::searchUser(const ::std::string& uid, const ::std::string& targetUid, ::Ice::Int& retCode, ::AliIM::SearchuserResSeq& retVal, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__SearchUserInterface__searchUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::SearchUserInterface* __del = dynamic_cast< ::IceDelegate::AliIM::SearchUserInterface*>(__delBase.get());
            return __del->searchUser(uid, targetUid, retCode, retVal, __ctx);
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
IceProxy::AliIM::SearchUserInterface::searchUserB2BFuzzy(const ::std::string& uid, const ::std::string& targetUid, const ::std::string& reserve, ::Ice::Int& retCode, ::AliIM::SearchuserResSeq& retVal, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__SearchUserInterface__searchUserB2BFuzzy_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::SearchUserInterface* __del = dynamic_cast< ::IceDelegate::AliIM::SearchUserInterface*>(__delBase.get());
            return __del->searchUserB2BFuzzy(uid, targetUid, reserve, retCode, retVal, __ctx);
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
IceProxy::AliIM::SearchUserInterface::getRecommendUser(const ::std::string& uid, const ::std::string& targetUid, ::Ice::Int syncUser, ::Ice::Int& retCode, ::AliIM::SearchuserResSeq& retVal, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__SearchUserInterface__getRecommendUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::SearchUserInterface* __del = dynamic_cast< ::IceDelegate::AliIM::SearchUserInterface*>(__delBase.get());
            return __del->getRecommendUser(uid, targetUid, syncUser, retCode, retVal, __ctx);
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
IceProxy::AliIM::SearchUserInterface::getUsersByName(const ::std::string& uid, const ::std::string& targetUid, ::Ice::Int syncUser, ::Ice::Int& retCode, ::AliIM::SearchuserResSeq& retVal, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__SearchUserInterface__getUsersByName_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::SearchUserInterface* __del = dynamic_cast< ::IceDelegate::AliIM::SearchUserInterface*>(__delBase.get());
            return __del->getUsersByName(uid, targetUid, syncUser, retCode, retVal, __ctx);
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
IceProxy::AliIM::SearchUserInterface::getTribeInfo(const ::std::string& tribeId, ::AliIM::STribeInfo& tribeInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__SearchUserInterface__getTribeInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::SearchUserInterface* __del = dynamic_cast< ::IceDelegate::AliIM::SearchUserInterface*>(__delBase.get());
            return __del->getTribeInfo(tribeId, tribeInfo, __ctx);
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
IceProxy::AliIM::SearchUserInterface::advancedSearchUser(const ::std::string& site, const ::std::string& country, const ::std::string& province, const ::std::string& city, ::Ice::Int gender, ::Ice::Int age, const ::std::string& job, ::Ice::Int timestamp, ::AliIM::SearchuserResSeq& retVal, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__SearchUserInterface__advancedSearchUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::SearchUserInterface* __del = dynamic_cast< ::IceDelegate::AliIM::SearchUserInterface*>(__delBase.get());
            return __del->advancedSearchUser(site, country, province, city, gender, age, job, timestamp, retVal, __ctx);
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
IceProxy::AliIM::SearchUserInterface::ice_staticId()
{
    return ::AliIM::SearchUserInterface::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::AliIM::SearchUserInterface::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::AliIM::SearchUserInterface);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::AliIM::SearchUserInterface::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::AliIM::SearchUserInterface);
}

bool
IceProxy::AliIM::operator==(const ::IceProxy::AliIM::SearchUserInterface& l, const ::IceProxy::AliIM::SearchUserInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator!=(const ::IceProxy::AliIM::SearchUserInterface& l, const ::IceProxy::AliIM::SearchUserInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator<(const ::IceProxy::AliIM::SearchUserInterface& l, const ::IceProxy::AliIM::SearchUserInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator<=(const ::IceProxy::AliIM::SearchUserInterface& l, const ::IceProxy::AliIM::SearchUserInterface& r)
{
    return l < r || l == r;
}

bool
IceProxy::AliIM::operator>(const ::IceProxy::AliIM::SearchUserInterface& l, const ::IceProxy::AliIM::SearchUserInterface& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::AliIM::operator>=(const ::IceProxy::AliIM::SearchUserInterface& l, const ::IceProxy::AliIM::SearchUserInterface& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::AliIM::SearchUserInterface::searchUser(const ::std::string& uid, const ::std::string& targetUid, ::Ice::Int& retCode, ::AliIM::SearchuserResSeq& retVal, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__SearchUserInterface__searchUser_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(targetUid);
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
        __is->read(retCode);
        ::AliIM::__read(__is, retVal, ::AliIM::__U__SearchuserResSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIM::SearchUserInterface::searchUserB2BFuzzy(const ::std::string& uid, const ::std::string& targetUid, const ::std::string& reserve, ::Ice::Int& retCode, ::AliIM::SearchuserResSeq& retVal, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__SearchUserInterface__searchUserB2BFuzzy_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(targetUid);
        __os->write(reserve);
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
        __is->read(retCode);
        ::AliIM::__read(__is, retVal, ::AliIM::__U__SearchuserResSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIM::SearchUserInterface::getRecommendUser(const ::std::string& uid, const ::std::string& targetUid, ::Ice::Int syncUser, ::Ice::Int& retCode, ::AliIM::SearchuserResSeq& retVal, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__SearchUserInterface__getRecommendUser_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(targetUid);
        __os->write(syncUser);
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
        __is->read(retCode);
        ::AliIM::__read(__is, retVal, ::AliIM::__U__SearchuserResSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIM::SearchUserInterface::getUsersByName(const ::std::string& uid, const ::std::string& targetUid, ::Ice::Int syncUser, ::Ice::Int& retCode, ::AliIM::SearchuserResSeq& retVal, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__SearchUserInterface__getUsersByName_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(targetUid);
        __os->write(syncUser);
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
        __is->read(retCode);
        ::AliIM::__read(__is, retVal, ::AliIM::__U__SearchuserResSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIM::SearchUserInterface::getTribeInfo(const ::std::string& tribeId, ::AliIM::STribeInfo& tribeInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__SearchUserInterface__getTribeInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
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
        tribeInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIM::SearchUserInterface::advancedSearchUser(const ::std::string& site, const ::std::string& country, const ::std::string& province, const ::std::string& city, ::Ice::Int gender, ::Ice::Int age, const ::std::string& job, ::Ice::Int timestamp, ::AliIM::SearchuserResSeq& retVal, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__SearchUserInterface__advancedSearchUser_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(site);
        __os->write(country);
        __os->write(province);
        __os->write(city);
        __os->write(gender);
        __os->write(age);
        __os->write(job);
        __os->write(timestamp);
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
        ::AliIM::__read(__is, retVal, ::AliIM::__U__SearchuserResSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::AliIM::SearchUserInterface::searchUser(const ::std::string& uid, const ::std::string& targetUid, ::Ice::Int& retCode, ::AliIM::SearchuserResSeq& retVal, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__SearchUserInterface__searchUser_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::SearchUserInterface* __servant = dynamic_cast< ::AliIM::SearchUserInterface*>(__direct.servant().get());
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
                __ret = __servant->searchUser(uid, targetUid, retCode, retVal, __current);
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
IceDelegateD::AliIM::SearchUserInterface::searchUserB2BFuzzy(const ::std::string& uid, const ::std::string& targetUid, const ::std::string& reserve, ::Ice::Int& retCode, ::AliIM::SearchuserResSeq& retVal, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__SearchUserInterface__searchUserB2BFuzzy_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::SearchUserInterface* __servant = dynamic_cast< ::AliIM::SearchUserInterface*>(__direct.servant().get());
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
                __ret = __servant->searchUserB2BFuzzy(uid, targetUid, reserve, retCode, retVal, __current);
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
IceDelegateD::AliIM::SearchUserInterface::getRecommendUser(const ::std::string& uid, const ::std::string& targetUid, ::Ice::Int syncUser, ::Ice::Int& retCode, ::AliIM::SearchuserResSeq& retVal, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__SearchUserInterface__getRecommendUser_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::SearchUserInterface* __servant = dynamic_cast< ::AliIM::SearchUserInterface*>(__direct.servant().get());
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
                __ret = __servant->getRecommendUser(uid, targetUid, syncUser, retCode, retVal, __current);
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
IceDelegateD::AliIM::SearchUserInterface::getUsersByName(const ::std::string& uid, const ::std::string& targetUid, ::Ice::Int syncUser, ::Ice::Int& retCode, ::AliIM::SearchuserResSeq& retVal, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__SearchUserInterface__getUsersByName_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::SearchUserInterface* __servant = dynamic_cast< ::AliIM::SearchUserInterface*>(__direct.servant().get());
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
                __ret = __servant->getUsersByName(uid, targetUid, syncUser, retCode, retVal, __current);
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
IceDelegateD::AliIM::SearchUserInterface::getTribeInfo(const ::std::string& tribeId, ::AliIM::STribeInfo& tribeInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__SearchUserInterface__getTribeInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::SearchUserInterface* __servant = dynamic_cast< ::AliIM::SearchUserInterface*>(__direct.servant().get());
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
                __ret = __servant->getTribeInfo(tribeId, tribeInfo, __current);
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
IceDelegateD::AliIM::SearchUserInterface::advancedSearchUser(const ::std::string& site, const ::std::string& country, const ::std::string& province, const ::std::string& city, ::Ice::Int gender, ::Ice::Int age, const ::std::string& job, ::Ice::Int timestamp, ::AliIM::SearchuserResSeq& retVal, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__SearchUserInterface__advancedSearchUser_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::SearchUserInterface* __servant = dynamic_cast< ::AliIM::SearchUserInterface*>(__direct.servant().get());
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
                __ret = __servant->advancedSearchUser(site, country, province, city, gender, age, job, timestamp, retVal, __current);
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
AliIM::SearchUserInterface::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __AliIM__SearchUserInterface_ids[2] =
{
    "::AliIM::SearchUserInterface",
    "::Ice::Object"
};

bool
AliIM::SearchUserInterface::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__AliIM__SearchUserInterface_ids, __AliIM__SearchUserInterface_ids + 2, _s);
}

::std::vector< ::std::string>
AliIM::SearchUserInterface::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__AliIM__SearchUserInterface_ids[0], &__AliIM__SearchUserInterface_ids[2]);
}

const ::std::string&
AliIM::SearchUserInterface::ice_id(const ::Ice::Current&) const
{
    return __AliIM__SearchUserInterface_ids[0];
}

const ::std::string&
AliIM::SearchUserInterface::ice_staticId()
{
    return __AliIM__SearchUserInterface_ids[0];
}

::IceInternal::DispatchStatus
AliIM::SearchUserInterface::___searchUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string targetUid;
    __is->read(uid);
    __is->read(targetUid);
    ::Ice::Int retCode;
    ::AliIM::SearchuserResSeq retVal;
    ::Ice::Int __ret = searchUser(uid, targetUid, retCode, retVal, __current);
    __os->write(retCode);
    if(retVal.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::AliIM::__write(__os, &retVal[0], &retVal[0] + retVal.size(), ::AliIM::__U__SearchuserResSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::SearchUserInterface::___searchUserB2BFuzzy(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string targetUid;
    ::std::string reserve;
    __is->read(uid);
    __is->read(targetUid);
    __is->read(reserve);
    ::Ice::Int retCode;
    ::AliIM::SearchuserResSeq retVal;
    ::Ice::Int __ret = searchUserB2BFuzzy(uid, targetUid, reserve, retCode, retVal, __current);
    __os->write(retCode);
    if(retVal.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::AliIM::__write(__os, &retVal[0], &retVal[0] + retVal.size(), ::AliIM::__U__SearchuserResSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::SearchUserInterface::___getRecommendUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string targetUid;
    ::Ice::Int syncUser;
    __is->read(uid);
    __is->read(targetUid);
    __is->read(syncUser);
    ::Ice::Int retCode;
    ::AliIM::SearchuserResSeq retVal;
    ::Ice::Int __ret = getRecommendUser(uid, targetUid, syncUser, retCode, retVal, __current);
    __os->write(retCode);
    if(retVal.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::AliIM::__write(__os, &retVal[0], &retVal[0] + retVal.size(), ::AliIM::__U__SearchuserResSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::SearchUserInterface::___getUsersByName(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string targetUid;
    ::Ice::Int syncUser;
    __is->read(uid);
    __is->read(targetUid);
    __is->read(syncUser);
    ::Ice::Int retCode;
    ::AliIM::SearchuserResSeq retVal;
    ::Ice::Int __ret = getUsersByName(uid, targetUid, syncUser, retCode, retVal, __current);
    __os->write(retCode);
    if(retVal.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::AliIM::__write(__os, &retVal[0], &retVal[0] + retVal.size(), ::AliIM::__U__SearchuserResSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::SearchUserInterface::___getTribeInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string tribeId;
    __is->read(tribeId);
    ::AliIM::STribeInfo tribeInfo;
    ::Ice::Int __ret = getTribeInfo(tribeId, tribeInfo, __current);
    tribeInfo.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::SearchUserInterface::___advancedSearchUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string site;
    ::std::string country;
    ::std::string province;
    ::std::string city;
    ::Ice::Int gender;
    ::Ice::Int age;
    ::std::string job;
    ::Ice::Int timestamp;
    __is->read(site);
    __is->read(country);
    __is->read(province);
    __is->read(city);
    __is->read(gender);
    __is->read(age);
    __is->read(job);
    __is->read(timestamp);
    ::AliIM::SearchuserResSeq retVal;
    ::Ice::Int __ret = advancedSearchUser(site, country, province, city, gender, age, job, timestamp, retVal, __current);
    if(retVal.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::AliIM::__write(__os, &retVal[0], &retVal[0] + retVal.size(), ::AliIM::__U__SearchuserResSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __AliIM__SearchUserInterface_all[] =
{
    "advancedSearchUser",
    "getRecommendUser",
    "getTribeInfo",
    "getUsersByName",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "searchUser",
    "searchUserB2BFuzzy"
};

::IceInternal::DispatchStatus
AliIM::SearchUserInterface::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__AliIM__SearchUserInterface_all, __AliIM__SearchUserInterface_all + 10, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __AliIM__SearchUserInterface_all)
    {
        case 0:
        {
            return ___advancedSearchUser(in, current);
        }
        case 1:
        {
            return ___getRecommendUser(in, current);
        }
        case 2:
        {
            return ___getTribeInfo(in, current);
        }
        case 3:
        {
            return ___getUsersByName(in, current);
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
        case 8:
        {
            return ___searchUser(in, current);
        }
        case 9:
        {
            return ___searchUserB2BFuzzy(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
AliIM::SearchUserInterface::__write(::IceInternal::BasicStream* __os) const
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
AliIM::SearchUserInterface::__read(::IceInternal::BasicStream* __is, bool __rid)
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
AliIM::SearchUserInterface::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIM::SearchUserInterface was not generated with stream support";
    throw ex;
}

void
AliIM::SearchUserInterface::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIM::SearchUserInterface was not generated with stream support";
    throw ex;
}

void 
AliIM::__patch__SearchUserInterfacePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::AliIM::SearchUserInterfacePtr* p = static_cast< ::AliIM::SearchUserInterfacePtr*>(__addr);
    assert(p);
    *p = ::AliIM::SearchUserInterfacePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::AliIM::SearchUserInterface::ice_staticId();
        throw e;
    }
}

bool
AliIM::operator==(const ::AliIM::SearchUserInterface& l, const ::AliIM::SearchUserInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator!=(const ::AliIM::SearchUserInterface& l, const ::AliIM::SearchUserInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator<(const ::AliIM::SearchUserInterface& l, const ::AliIM::SearchUserInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator<=(const ::AliIM::SearchUserInterface& l, const ::AliIM::SearchUserInterface& r)
{
    return l < r || l == r;
}

bool
AliIM::operator>(const ::AliIM::SearchUserInterface& l, const ::AliIM::SearchUserInterface& r)
{
    return !(l < r) && !(l == r);
}

bool
AliIM::operator>=(const ::AliIM::SearchUserInterface& l, const ::AliIM::SearchUserInterface& r)
{
    return !(l < r);
}
