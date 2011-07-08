// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `aepdbsadapter.ice'

#include <aepdbsadapter.h>
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

static const ::std::string __AliIMInterface__IAEPDBSAdapter__getBindedWebIdList_name = "getBindedWebIdList";

static const ::std::string __AliIMInterface__IAEPDBSAdapter__getBindedWebId_name = "getBindedWebId";

static const ::std::string __AliIMInterface__IAEPDBSAdapter__createWanghaoWebid_name = "createWanghaoWebid";

static const ::std::string __AliIMInterface__IAEPDBSAdapter__deleteWanghaoWebid_name = "deleteWanghaoWebid";

static const ::std::string __AliIMInterface__IAEPDBSAdapter__updateWanghaoLastLogintime_name = "updateWanghaoLastLogintime";

static const ::std::string __AliIMInterface__IAEPDBSAdapter__changeWanghaoPw_name = "changeWanghaoPw";

static const ::std::string __AliIMInterface__IAEPDBSAdapter__isChangableWanghao_name = "isChangableWanghao";

static const ::std::string __AliIMInterface__IAEPDBSAdapter__updateChangableWanghao_name = "updateChangableWanghao";

static const ::std::string __AliIMInterface__IAEPDBSAdapter__registerWanghao_name = "registerWanghao";

static const ::std::string __AliIMInterface__IAEPDBSAdapter__prohibitWanghao_name = "prohibitWanghao";

static const ::std::string __AliIMInterface__IAEPDBSAdapter__getWanghaoIMBind_name = "getWanghaoIMBind";

static const ::std::string __AliIMInterface__IAEPDBSAdapter__updateUserNameByUuid_name = "updateUserNameByUuid";

static const ::std::string __AliIMInterface__IAEPDBSAdapter__updateWanghaoToken_name = "updateWanghaoToken";

static const ::std::string __AliIMInterface__IAEPDBSAdapter__createWWWanghaoWebid_name = "createWWWanghaoWebid";

static const ::std::string __AliIMInterface__IAEPDBSAdapter__deleteWWWanghaoWebid_name = "deleteWWWanghaoWebid";

static const ::std::string __AliIMInterface__IAEPDBSAdapter__getUUIDWanghaoByWebid_name = "getUUIDWanghaoByWebid";

static const ::std::string __AliIMInterface__IAEPDBSAdapter__changeIMLongid_name = "changeIMLongid";

void
IceInternal::incRef(::AliIMInterface::IAEPDBSAdapter* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::AliIMInterface::IAEPDBSAdapter* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::AliIMInterface::IAEPDBSAdapter* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::AliIMInterface::IAEPDBSAdapter* p)
{
    p->__decRef();
}

void
AliIMInterface::__write(::IceInternal::BasicStream* __os, const ::AliIMInterface::IAEPDBSAdapterPrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
AliIMInterface::__read(::IceInternal::BasicStream* __is, ::AliIMInterface::IAEPDBSAdapterPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::AliIMInterface::IAEPDBSAdapter;
        v->__copyFrom(proxy);
    }
}

void
AliIMInterface::__write(::IceInternal::BasicStream* __os, const ::AliIMInterface::IAEPDBSAdapterPtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

bool
AliIMInterface::SWanghaoIMBind::operator==(const SWanghaoIMBind& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AliIMInterface::SWanghaoIMBind::operator!=(const SWanghaoIMBind& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(uuid != __rhs.uuid)
    {
        return true;
    }
    if(whid != __rhs.whid)
    {
        return true;
    }
    if(longuid != __rhs.longuid)
    {
        return true;
    }
    if(whmd5pw != __rhs.whmd5pw)
    {
        return true;
    }
    if(status != __rhs.status)
    {
        return true;
    }
    if(pwtoken != __rhs.pwtoken)
    {
        return true;
    }
    return false;
}

bool
AliIMInterface::SWanghaoIMBind::operator<(const SWanghaoIMBind& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(uuid < __rhs.uuid)
    {
        return true;
    }
    else if(__rhs.uuid < uuid)
    {
        return false;
    }
    if(whid < __rhs.whid)
    {
        return true;
    }
    else if(__rhs.whid < whid)
    {
        return false;
    }
    if(longuid < __rhs.longuid)
    {
        return true;
    }
    else if(__rhs.longuid < longuid)
    {
        return false;
    }
    if(whmd5pw < __rhs.whmd5pw)
    {
        return true;
    }
    else if(__rhs.whmd5pw < whmd5pw)
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
    if(pwtoken < __rhs.pwtoken)
    {
        return true;
    }
    else if(__rhs.pwtoken < pwtoken)
    {
        return false;
    }
    return false;
}

void
AliIMInterface::SWanghaoIMBind::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(uuid);
    __os->write(whid);
    __os->write(longuid);
    __os->write(whmd5pw);
    __os->write(status);
    __os->write(pwtoken);
}

void
AliIMInterface::SWanghaoIMBind::__read(::IceInternal::BasicStream* __is)
{
    __is->read(uuid);
    __is->read(whid);
    __is->read(longuid);
    __is->read(whmd5pw);
    __is->read(status);
    __is->read(pwtoken);
}

void
AliIMInterface::__addObject(const IAEPDBSAdapterPtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
AliIMInterface::__usesClasses(const IAEPDBSAdapterPtr& p)
{
    return p->__usesClasses();
}

void
AliIMInterface::__decRefUnsafe(const IAEPDBSAdapterPtr& p)
{
    p->__decRefUnsafe();
}

void
AliIMInterface::__clearHandleUnsafe(IAEPDBSAdapterPtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::AliIMInterface::IAEPDBSAdapter::getBindedWebIdList(const ::Ice::StringSeq& uuid, ::AliIMInterface::SWanghaoWebBindIdSeq& webids, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMInterface__IAEPDBSAdapter__getBindedWebIdList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMInterface::IAEPDBSAdapter* __del = dynamic_cast< ::IceDelegate::AliIMInterface::IAEPDBSAdapter*>(__delBase.get());
            return __del->getBindedWebIdList(uuid, webids, __ctx);
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
IceProxy::AliIMInterface::IAEPDBSAdapter::getBindedWebId(const ::std::string& uuid, ::AliIMInterface::SWebBindIdSeq& webids, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMInterface__IAEPDBSAdapter__getBindedWebId_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMInterface::IAEPDBSAdapter* __del = dynamic_cast< ::IceDelegate::AliIMInterface::IAEPDBSAdapter*>(__delBase.get());
            return __del->getBindedWebId(uuid, webids, __ctx);
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
IceProxy::AliIMInterface::IAEPDBSAdapter::createWanghaoWebid(const ::std::string& uuid, const ::std::string& longuid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMInterface__IAEPDBSAdapter__createWanghaoWebid_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMInterface::IAEPDBSAdapter* __del = dynamic_cast< ::IceDelegate::AliIMInterface::IAEPDBSAdapter*>(__delBase.get());
            return __del->createWanghaoWebid(uuid, longuid, __ctx);
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
IceProxy::AliIMInterface::IAEPDBSAdapter::deleteWanghaoWebid(const ::std::string& uuid, const ::std::string& longuid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMInterface__IAEPDBSAdapter__deleteWanghaoWebid_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMInterface::IAEPDBSAdapter* __del = dynamic_cast< ::IceDelegate::AliIMInterface::IAEPDBSAdapter*>(__delBase.get());
            return __del->deleteWanghaoWebid(uuid, longuid, __ctx);
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
IceProxy::AliIMInterface::IAEPDBSAdapter::updateWanghaoLastLogintime(const ::std::string& uuid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMInterface__IAEPDBSAdapter__updateWanghaoLastLogintime_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMInterface::IAEPDBSAdapter* __del = dynamic_cast< ::IceDelegate::AliIMInterface::IAEPDBSAdapter*>(__delBase.get());
            return __del->updateWanghaoLastLogintime(uuid, __ctx);
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
IceProxy::AliIMInterface::IAEPDBSAdapter::changeWanghaoPw(const ::std::string& uuid, const ::std::string& newmd5pw, const ::std::string& imtoken, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMInterface__IAEPDBSAdapter__changeWanghaoPw_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMInterface::IAEPDBSAdapter* __del = dynamic_cast< ::IceDelegate::AliIMInterface::IAEPDBSAdapter*>(__delBase.get());
            return __del->changeWanghaoPw(uuid, newmd5pw, imtoken, __ctx);
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
IceProxy::AliIMInterface::IAEPDBSAdapter::isChangableWanghao(const ::std::string& uuid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMInterface__IAEPDBSAdapter__isChangableWanghao_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMInterface::IAEPDBSAdapter* __del = dynamic_cast< ::IceDelegate::AliIMInterface::IAEPDBSAdapter*>(__delBase.get());
            return __del->isChangableWanghao(uuid, __ctx);
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
IceProxy::AliIMInterface::IAEPDBSAdapter::updateChangableWanghao(const ::std::string& uuid, bool bChangable, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMInterface__IAEPDBSAdapter__updateChangableWanghao_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMInterface::IAEPDBSAdapter* __del = dynamic_cast< ::IceDelegate::AliIMInterface::IAEPDBSAdapter*>(__delBase.get());
            return __del->updateChangableWanghao(uuid, bChangable, __ctx);
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
IceProxy::AliIMInterface::IAEPDBSAdapter::registerWanghao(const ::std::string& newwhid, const ::std::string& longuid, const ::std::string& md5pw, const ::std::string& imtoken, const ::AliIMInterface::KVMAP& attrs, ::std::string& uuid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMInterface__IAEPDBSAdapter__registerWanghao_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMInterface::IAEPDBSAdapter* __del = dynamic_cast< ::IceDelegate::AliIMInterface::IAEPDBSAdapter*>(__delBase.get());
            return __del->registerWanghao(newwhid, longuid, md5pw, imtoken, attrs, uuid, __ctx);
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
IceProxy::AliIMInterface::IAEPDBSAdapter::prohibitWanghao(const ::std::string& optor, const ::std::string& whid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMInterface__IAEPDBSAdapter__prohibitWanghao_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMInterface::IAEPDBSAdapter* __del = dynamic_cast< ::IceDelegate::AliIMInterface::IAEPDBSAdapter*>(__delBase.get());
            return __del->prohibitWanghao(optor, whid, __ctx);
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
IceProxy::AliIMInterface::IAEPDBSAdapter::getWanghaoIMBind(const ::std::string& id, ::Ice::Int idtype, ::AliIMInterface::SWanghaoIMBind& whimbind, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMInterface__IAEPDBSAdapter__getWanghaoIMBind_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMInterface::IAEPDBSAdapter* __del = dynamic_cast< ::IceDelegate::AliIMInterface::IAEPDBSAdapter*>(__delBase.get());
            return __del->getWanghaoIMBind(id, idtype, whimbind, __ctx);
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
IceProxy::AliIMInterface::IAEPDBSAdapter::updateUserNameByUuid(const ::std::string& uuid, const ::std::string& username, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMInterface__IAEPDBSAdapter__updateUserNameByUuid_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMInterface::IAEPDBSAdapter* __del = dynamic_cast< ::IceDelegate::AliIMInterface::IAEPDBSAdapter*>(__delBase.get());
            return __del->updateUserNameByUuid(uuid, username, __ctx);
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
IceProxy::AliIMInterface::IAEPDBSAdapter::updateWanghaoToken(const ::std::string& whid, const ::std::string& token, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMInterface__IAEPDBSAdapter__updateWanghaoToken_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMInterface::IAEPDBSAdapter* __del = dynamic_cast< ::IceDelegate::AliIMInterface::IAEPDBSAdapter*>(__delBase.get());
            return __del->updateWanghaoToken(whid, token, __ctx);
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
IceProxy::AliIMInterface::IAEPDBSAdapter::createWWWanghaoWebid(const ::std::string& whid, const ::std::string& longuid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMInterface__IAEPDBSAdapter__createWWWanghaoWebid_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMInterface::IAEPDBSAdapter* __del = dynamic_cast< ::IceDelegate::AliIMInterface::IAEPDBSAdapter*>(__delBase.get());
            return __del->createWWWanghaoWebid(whid, longuid, __ctx);
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
IceProxy::AliIMInterface::IAEPDBSAdapter::deleteWWWanghaoWebid(const ::std::string& whid, const ::std::string& longuid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMInterface__IAEPDBSAdapter__deleteWWWanghaoWebid_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMInterface::IAEPDBSAdapter* __del = dynamic_cast< ::IceDelegate::AliIMInterface::IAEPDBSAdapter*>(__delBase.get());
            return __del->deleteWWWanghaoWebid(whid, longuid, __ctx);
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
IceProxy::AliIMInterface::IAEPDBSAdapter::getUUIDWanghaoByWebid(const ::std::string& luid, ::std::string& uuid, ::std::string& whid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMInterface__IAEPDBSAdapter__getUUIDWanghaoByWebid_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMInterface::IAEPDBSAdapter* __del = dynamic_cast< ::IceDelegate::AliIMInterface::IAEPDBSAdapter*>(__delBase.get());
            return __del->getUUIDWanghaoByWebid(luid, uuid, whid, __ctx);
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
IceProxy::AliIMInterface::IAEPDBSAdapter::changeIMLongid(::Ice::Int idtype, const ::std::string& id, const ::std::string& newlongid, ::std::string& retswitcheduuid, ::std::string& retoldlongid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMInterface__IAEPDBSAdapter__changeIMLongid_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMInterface::IAEPDBSAdapter* __del = dynamic_cast< ::IceDelegate::AliIMInterface::IAEPDBSAdapter*>(__delBase.get());
            return __del->changeIMLongid(idtype, id, newlongid, retswitcheduuid, retoldlongid, __ctx);
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
IceProxy::AliIMInterface::IAEPDBSAdapter::ice_staticId()
{
    return ::AliIMInterface::IAEPDBSAdapter::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::AliIMInterface::IAEPDBSAdapter::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::AliIMInterface::IAEPDBSAdapter);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::AliIMInterface::IAEPDBSAdapter::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::AliIMInterface::IAEPDBSAdapter);
}

bool
IceProxy::AliIMInterface::operator==(const ::IceProxy::AliIMInterface::IAEPDBSAdapter& l, const ::IceProxy::AliIMInterface::IAEPDBSAdapter& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIMInterface::operator!=(const ::IceProxy::AliIMInterface::IAEPDBSAdapter& l, const ::IceProxy::AliIMInterface::IAEPDBSAdapter& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIMInterface::operator<(const ::IceProxy::AliIMInterface::IAEPDBSAdapter& l, const ::IceProxy::AliIMInterface::IAEPDBSAdapter& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIMInterface::operator<=(const ::IceProxy::AliIMInterface::IAEPDBSAdapter& l, const ::IceProxy::AliIMInterface::IAEPDBSAdapter& r)
{
    return l < r || l == r;
}

bool
IceProxy::AliIMInterface::operator>(const ::IceProxy::AliIMInterface::IAEPDBSAdapter& l, const ::IceProxy::AliIMInterface::IAEPDBSAdapter& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::AliIMInterface::operator>=(const ::IceProxy::AliIMInterface::IAEPDBSAdapter& l, const ::IceProxy::AliIMInterface::IAEPDBSAdapter& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::AliIMInterface::IAEPDBSAdapter::getBindedWebIdList(const ::Ice::StringSeq& uuid, ::AliIMInterface::SWanghaoWebBindIdSeq& webids, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMInterface__IAEPDBSAdapter__getBindedWebIdList_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(uuid.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&uuid[0], &uuid[0] + uuid.size());
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
        ::AliIMInterface::__read(__is, webids, ::AliIMInterface::__U__SWanghaoWebBindIdSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMInterface::IAEPDBSAdapter::getBindedWebId(const ::std::string& uuid, ::AliIMInterface::SWebBindIdSeq& webids, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMInterface__IAEPDBSAdapter__getBindedWebId_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uuid);
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
        ::AliIMInterface::__read(__is, webids, ::AliIMInterface::__U__SWebBindIdSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMInterface::IAEPDBSAdapter::createWanghaoWebid(const ::std::string& uuid, const ::std::string& longuid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMInterface__IAEPDBSAdapter__createWanghaoWebid_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uuid);
        __os->write(longuid);
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
IceDelegateM::AliIMInterface::IAEPDBSAdapter::deleteWanghaoWebid(const ::std::string& uuid, const ::std::string& longuid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMInterface__IAEPDBSAdapter__deleteWanghaoWebid_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uuid);
        __os->write(longuid);
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
IceDelegateM::AliIMInterface::IAEPDBSAdapter::updateWanghaoLastLogintime(const ::std::string& uuid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMInterface__IAEPDBSAdapter__updateWanghaoLastLogintime_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uuid);
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
IceDelegateM::AliIMInterface::IAEPDBSAdapter::changeWanghaoPw(const ::std::string& uuid, const ::std::string& newmd5pw, const ::std::string& imtoken, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMInterface__IAEPDBSAdapter__changeWanghaoPw_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uuid);
        __os->write(newmd5pw);
        __os->write(imtoken);
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
IceDelegateM::AliIMInterface::IAEPDBSAdapter::isChangableWanghao(const ::std::string& uuid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMInterface__IAEPDBSAdapter__isChangableWanghao_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uuid);
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
IceDelegateM::AliIMInterface::IAEPDBSAdapter::updateChangableWanghao(const ::std::string& uuid, bool bChangable, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMInterface__IAEPDBSAdapter__updateChangableWanghao_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uuid);
        __os->write(bChangable);
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
IceDelegateM::AliIMInterface::IAEPDBSAdapter::registerWanghao(const ::std::string& newwhid, const ::std::string& longuid, const ::std::string& md5pw, const ::std::string& imtoken, const ::AliIMInterface::KVMAP& attrs, ::std::string& uuid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMInterface__IAEPDBSAdapter__registerWanghao_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(newwhid);
        __os->write(longuid);
        __os->write(md5pw);
        __os->write(imtoken);
        ::AliIMInterface::__write(__os, attrs, ::AliIMInterface::__U__KVMAP());
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
        __is->read(uuid);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMInterface::IAEPDBSAdapter::prohibitWanghao(const ::std::string& optor, const ::std::string& whid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMInterface__IAEPDBSAdapter__prohibitWanghao_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(optor);
        __os->write(whid);
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
IceDelegateM::AliIMInterface::IAEPDBSAdapter::getWanghaoIMBind(const ::std::string& id, ::Ice::Int idtype, ::AliIMInterface::SWanghaoIMBind& whimbind, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMInterface__IAEPDBSAdapter__getWanghaoIMBind_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(id);
        __os->write(idtype);
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
        whimbind.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMInterface::IAEPDBSAdapter::updateUserNameByUuid(const ::std::string& uuid, const ::std::string& username, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMInterface__IAEPDBSAdapter__updateUserNameByUuid_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uuid);
        __os->write(username);
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
IceDelegateM::AliIMInterface::IAEPDBSAdapter::updateWanghaoToken(const ::std::string& whid, const ::std::string& token, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMInterface__IAEPDBSAdapter__updateWanghaoToken_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(whid);
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMInterface::IAEPDBSAdapter::createWWWanghaoWebid(const ::std::string& whid, const ::std::string& longuid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMInterface__IAEPDBSAdapter__createWWWanghaoWebid_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(whid);
        __os->write(longuid);
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
IceDelegateM::AliIMInterface::IAEPDBSAdapter::deleteWWWanghaoWebid(const ::std::string& whid, const ::std::string& longuid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMInterface__IAEPDBSAdapter__deleteWWWanghaoWebid_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(whid);
        __os->write(longuid);
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
IceDelegateM::AliIMInterface::IAEPDBSAdapter::getUUIDWanghaoByWebid(const ::std::string& luid, ::std::string& uuid, ::std::string& whid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMInterface__IAEPDBSAdapter__getUUIDWanghaoByWebid_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(luid);
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
        __is->read(uuid);
        __is->read(whid);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMInterface::IAEPDBSAdapter::changeIMLongid(::Ice::Int idtype, const ::std::string& id, const ::std::string& newlongid, ::std::string& retswitcheduuid, ::std::string& retoldlongid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMInterface__IAEPDBSAdapter__changeIMLongid_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(idtype);
        __os->write(id);
        __os->write(newlongid);
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
        __is->read(retswitcheduuid);
        __is->read(retoldlongid);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::AliIMInterface::IAEPDBSAdapter::getBindedWebIdList(const ::Ice::StringSeq& uuid, ::AliIMInterface::SWanghaoWebBindIdSeq& webids, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMInterface__IAEPDBSAdapter__getBindedWebIdList_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMInterface::IAEPDBSAdapter* __servant = dynamic_cast< ::AliIMInterface::IAEPDBSAdapter*>(__direct.servant().get());
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
                __ret = __servant->getBindedWebIdList(uuid, webids, __current);
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
IceDelegateD::AliIMInterface::IAEPDBSAdapter::getBindedWebId(const ::std::string& uuid, ::AliIMInterface::SWebBindIdSeq& webids, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMInterface__IAEPDBSAdapter__getBindedWebId_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMInterface::IAEPDBSAdapter* __servant = dynamic_cast< ::AliIMInterface::IAEPDBSAdapter*>(__direct.servant().get());
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
                __ret = __servant->getBindedWebId(uuid, webids, __current);
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
IceDelegateD::AliIMInterface::IAEPDBSAdapter::createWanghaoWebid(const ::std::string& uuid, const ::std::string& longuid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMInterface__IAEPDBSAdapter__createWanghaoWebid_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMInterface::IAEPDBSAdapter* __servant = dynamic_cast< ::AliIMInterface::IAEPDBSAdapter*>(__direct.servant().get());
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
                __ret = __servant->createWanghaoWebid(uuid, longuid, __current);
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
IceDelegateD::AliIMInterface::IAEPDBSAdapter::deleteWanghaoWebid(const ::std::string& uuid, const ::std::string& longuid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMInterface__IAEPDBSAdapter__deleteWanghaoWebid_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMInterface::IAEPDBSAdapter* __servant = dynamic_cast< ::AliIMInterface::IAEPDBSAdapter*>(__direct.servant().get());
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
                __ret = __servant->deleteWanghaoWebid(uuid, longuid, __current);
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
IceDelegateD::AliIMInterface::IAEPDBSAdapter::updateWanghaoLastLogintime(const ::std::string& uuid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMInterface__IAEPDBSAdapter__updateWanghaoLastLogintime_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMInterface::IAEPDBSAdapter* __servant = dynamic_cast< ::AliIMInterface::IAEPDBSAdapter*>(__direct.servant().get());
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
                __ret = __servant->updateWanghaoLastLogintime(uuid, __current);
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
IceDelegateD::AliIMInterface::IAEPDBSAdapter::changeWanghaoPw(const ::std::string& uuid, const ::std::string& newmd5pw, const ::std::string& imtoken, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMInterface__IAEPDBSAdapter__changeWanghaoPw_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMInterface::IAEPDBSAdapter* __servant = dynamic_cast< ::AliIMInterface::IAEPDBSAdapter*>(__direct.servant().get());
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
                __ret = __servant->changeWanghaoPw(uuid, newmd5pw, imtoken, __current);
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
IceDelegateD::AliIMInterface::IAEPDBSAdapter::isChangableWanghao(const ::std::string& uuid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMInterface__IAEPDBSAdapter__isChangableWanghao_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMInterface::IAEPDBSAdapter* __servant = dynamic_cast< ::AliIMInterface::IAEPDBSAdapter*>(__direct.servant().get());
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
                __ret = __servant->isChangableWanghao(uuid, __current);
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
IceDelegateD::AliIMInterface::IAEPDBSAdapter::updateChangableWanghao(const ::std::string& uuid, bool bChangable, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMInterface__IAEPDBSAdapter__updateChangableWanghao_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMInterface::IAEPDBSAdapter* __servant = dynamic_cast< ::AliIMInterface::IAEPDBSAdapter*>(__direct.servant().get());
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
                __ret = __servant->updateChangableWanghao(uuid, bChangable, __current);
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
IceDelegateD::AliIMInterface::IAEPDBSAdapter::registerWanghao(const ::std::string& newwhid, const ::std::string& longuid, const ::std::string& md5pw, const ::std::string& imtoken, const ::AliIMInterface::KVMAP& attrs, ::std::string& uuid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMInterface__IAEPDBSAdapter__registerWanghao_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMInterface::IAEPDBSAdapter* __servant = dynamic_cast< ::AliIMInterface::IAEPDBSAdapter*>(__direct.servant().get());
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
                __ret = __servant->registerWanghao(newwhid, longuid, md5pw, imtoken, attrs, uuid, __current);
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
IceDelegateD::AliIMInterface::IAEPDBSAdapter::prohibitWanghao(const ::std::string& optor, const ::std::string& whid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMInterface__IAEPDBSAdapter__prohibitWanghao_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMInterface::IAEPDBSAdapter* __servant = dynamic_cast< ::AliIMInterface::IAEPDBSAdapter*>(__direct.servant().get());
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
                __ret = __servant->prohibitWanghao(optor, whid, __current);
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
IceDelegateD::AliIMInterface::IAEPDBSAdapter::getWanghaoIMBind(const ::std::string& id, ::Ice::Int idtype, ::AliIMInterface::SWanghaoIMBind& whimbind, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMInterface__IAEPDBSAdapter__getWanghaoIMBind_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMInterface::IAEPDBSAdapter* __servant = dynamic_cast< ::AliIMInterface::IAEPDBSAdapter*>(__direct.servant().get());
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
                __ret = __servant->getWanghaoIMBind(id, idtype, whimbind, __current);
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
IceDelegateD::AliIMInterface::IAEPDBSAdapter::updateUserNameByUuid(const ::std::string& uuid, const ::std::string& username, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMInterface__IAEPDBSAdapter__updateUserNameByUuid_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMInterface::IAEPDBSAdapter* __servant = dynamic_cast< ::AliIMInterface::IAEPDBSAdapter*>(__direct.servant().get());
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
                __ret = __servant->updateUserNameByUuid(uuid, username, __current);
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
IceDelegateD::AliIMInterface::IAEPDBSAdapter::updateWanghaoToken(const ::std::string& whid, const ::std::string& token, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMInterface__IAEPDBSAdapter__updateWanghaoToken_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMInterface::IAEPDBSAdapter* __servant = dynamic_cast< ::AliIMInterface::IAEPDBSAdapter*>(__direct.servant().get());
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
                __ret = __servant->updateWanghaoToken(whid, token, __current);
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
IceDelegateD::AliIMInterface::IAEPDBSAdapter::createWWWanghaoWebid(const ::std::string& whid, const ::std::string& longuid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMInterface__IAEPDBSAdapter__createWWWanghaoWebid_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMInterface::IAEPDBSAdapter* __servant = dynamic_cast< ::AliIMInterface::IAEPDBSAdapter*>(__direct.servant().get());
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
                __ret = __servant->createWWWanghaoWebid(whid, longuid, __current);
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
IceDelegateD::AliIMInterface::IAEPDBSAdapter::deleteWWWanghaoWebid(const ::std::string& whid, const ::std::string& longuid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMInterface__IAEPDBSAdapter__deleteWWWanghaoWebid_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMInterface::IAEPDBSAdapter* __servant = dynamic_cast< ::AliIMInterface::IAEPDBSAdapter*>(__direct.servant().get());
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
                __ret = __servant->deleteWWWanghaoWebid(whid, longuid, __current);
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
IceDelegateD::AliIMInterface::IAEPDBSAdapter::getUUIDWanghaoByWebid(const ::std::string& luid, ::std::string& uuid, ::std::string& whid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMInterface__IAEPDBSAdapter__getUUIDWanghaoByWebid_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMInterface::IAEPDBSAdapter* __servant = dynamic_cast< ::AliIMInterface::IAEPDBSAdapter*>(__direct.servant().get());
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
                __ret = __servant->getUUIDWanghaoByWebid(luid, uuid, whid, __current);
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
IceDelegateD::AliIMInterface::IAEPDBSAdapter::changeIMLongid(::Ice::Int idtype, const ::std::string& id, const ::std::string& newlongid, ::std::string& retswitcheduuid, ::std::string& retoldlongid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMInterface__IAEPDBSAdapter__changeIMLongid_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMInterface::IAEPDBSAdapter* __servant = dynamic_cast< ::AliIMInterface::IAEPDBSAdapter*>(__direct.servant().get());
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
                __ret = __servant->changeIMLongid(idtype, id, newlongid, retswitcheduuid, retoldlongid, __current);
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
AliIMInterface::IAEPDBSAdapter::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __AliIMInterface__IAEPDBSAdapter_ids[2] =
{
    "::AliIMInterface::IAEPDBSAdapter",
    "::Ice::Object"
};

bool
AliIMInterface::IAEPDBSAdapter::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__AliIMInterface__IAEPDBSAdapter_ids, __AliIMInterface__IAEPDBSAdapter_ids + 2, _s);
}

::std::vector< ::std::string>
AliIMInterface::IAEPDBSAdapter::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__AliIMInterface__IAEPDBSAdapter_ids[0], &__AliIMInterface__IAEPDBSAdapter_ids[2]);
}

const ::std::string&
AliIMInterface::IAEPDBSAdapter::ice_id(const ::Ice::Current&) const
{
    return __AliIMInterface__IAEPDBSAdapter_ids[0];
}

const ::std::string&
AliIMInterface::IAEPDBSAdapter::ice_staticId()
{
    return __AliIMInterface__IAEPDBSAdapter_ids[0];
}

::IceInternal::DispatchStatus
AliIMInterface::IAEPDBSAdapter::___getBindedWebIdList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::StringSeq uuid;
    __is->read(uuid);
    ::AliIMInterface::SWanghaoWebBindIdSeq webids;
    ::Ice::Int __ret = getBindedWebIdList(uuid, webids, __current);
    if(webids.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::AliIMInterface::__write(__os, &webids[0], &webids[0] + webids.size(), ::AliIMInterface::__U__SWanghaoWebBindIdSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMInterface::IAEPDBSAdapter::___getBindedWebId(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uuid;
    __is->read(uuid);
    ::AliIMInterface::SWebBindIdSeq webids;
    ::Ice::Int __ret = getBindedWebId(uuid, webids, __current);
    if(webids.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::AliIMInterface::__write(__os, &webids[0], &webids[0] + webids.size(), ::AliIMInterface::__U__SWebBindIdSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMInterface::IAEPDBSAdapter::___createWanghaoWebid(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uuid;
    ::std::string longuid;
    __is->read(uuid);
    __is->read(longuid);
    ::Ice::Int __ret = createWanghaoWebid(uuid, longuid, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMInterface::IAEPDBSAdapter::___deleteWanghaoWebid(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uuid;
    ::std::string longuid;
    __is->read(uuid);
    __is->read(longuid);
    ::Ice::Int __ret = deleteWanghaoWebid(uuid, longuid, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMInterface::IAEPDBSAdapter::___updateWanghaoLastLogintime(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uuid;
    __is->read(uuid);
    ::Ice::Int __ret = updateWanghaoLastLogintime(uuid, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMInterface::IAEPDBSAdapter::___changeWanghaoPw(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uuid;
    ::std::string newmd5pw;
    ::std::string imtoken;
    __is->read(uuid);
    __is->read(newmd5pw);
    __is->read(imtoken);
    ::Ice::Int __ret = changeWanghaoPw(uuid, newmd5pw, imtoken, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMInterface::IAEPDBSAdapter::___isChangableWanghao(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uuid;
    __is->read(uuid);
    ::Ice::Int __ret = isChangableWanghao(uuid, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMInterface::IAEPDBSAdapter::___updateChangableWanghao(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uuid;
    bool bChangable;
    __is->read(uuid);
    __is->read(bChangable);
    ::Ice::Int __ret = updateChangableWanghao(uuid, bChangable, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMInterface::IAEPDBSAdapter::___registerWanghao(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string newwhid;
    ::std::string longuid;
    ::std::string md5pw;
    ::std::string imtoken;
    ::AliIMInterface::KVMAP attrs;
    __is->read(newwhid);
    __is->read(longuid);
    __is->read(md5pw);
    __is->read(imtoken);
    ::AliIMInterface::__read(__is, attrs, ::AliIMInterface::__U__KVMAP());
    ::std::string uuid;
    ::Ice::Int __ret = registerWanghao(newwhid, longuid, md5pw, imtoken, attrs, uuid, __current);
    __os->write(uuid);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMInterface::IAEPDBSAdapter::___prohibitWanghao(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string optor;
    ::std::string whid;
    __is->read(optor);
    __is->read(whid);
    ::Ice::Int __ret = prohibitWanghao(optor, whid, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMInterface::IAEPDBSAdapter::___getWanghaoIMBind(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string id;
    ::Ice::Int idtype;
    __is->read(id);
    __is->read(idtype);
    ::AliIMInterface::SWanghaoIMBind whimbind;
    ::Ice::Int __ret = getWanghaoIMBind(id, idtype, whimbind, __current);
    whimbind.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMInterface::IAEPDBSAdapter::___updateUserNameByUuid(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uuid;
    ::std::string username;
    __is->read(uuid);
    __is->read(username);
    ::Ice::Int __ret = updateUserNameByUuid(uuid, username, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMInterface::IAEPDBSAdapter::___updateWanghaoToken(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string whid;
    ::std::string token;
    __is->read(whid);
    __is->read(token);
    ::Ice::Int __ret = updateWanghaoToken(whid, token, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMInterface::IAEPDBSAdapter::___createWWWanghaoWebid(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string whid;
    ::std::string longuid;
    __is->read(whid);
    __is->read(longuid);
    ::Ice::Int __ret = createWWWanghaoWebid(whid, longuid, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMInterface::IAEPDBSAdapter::___deleteWWWanghaoWebid(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string whid;
    ::std::string longuid;
    __is->read(whid);
    __is->read(longuid);
    ::Ice::Int __ret = deleteWWWanghaoWebid(whid, longuid, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMInterface::IAEPDBSAdapter::___getUUIDWanghaoByWebid(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string luid;
    __is->read(luid);
    ::std::string uuid;
    ::std::string whid;
    ::Ice::Int __ret = getUUIDWanghaoByWebid(luid, uuid, whid, __current);
    __os->write(uuid);
    __os->write(whid);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMInterface::IAEPDBSAdapter::___changeIMLongid(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int idtype;
    ::std::string id;
    ::std::string newlongid;
    __is->read(idtype);
    __is->read(id);
    __is->read(newlongid);
    ::std::string retswitcheduuid;
    ::std::string retoldlongid;
    ::Ice::Int __ret = changeIMLongid(idtype, id, newlongid, retswitcheduuid, retoldlongid, __current);
    __os->write(retswitcheduuid);
    __os->write(retoldlongid);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __AliIMInterface__IAEPDBSAdapter_all[] =
{
    "changeIMLongid",
    "changeWanghaoPw",
    "createWWWanghaoWebid",
    "createWanghaoWebid",
    "deleteWWWanghaoWebid",
    "deleteWanghaoWebid",
    "getBindedWebId",
    "getBindedWebIdList",
    "getUUIDWanghaoByWebid",
    "getWanghaoIMBind",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "isChangableWanghao",
    "prohibitWanghao",
    "registerWanghao",
    "updateChangableWanghao",
    "updateUserNameByUuid",
    "updateWanghaoLastLogintime",
    "updateWanghaoToken"
};

::IceInternal::DispatchStatus
AliIMInterface::IAEPDBSAdapter::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__AliIMInterface__IAEPDBSAdapter_all, __AliIMInterface__IAEPDBSAdapter_all + 21, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __AliIMInterface__IAEPDBSAdapter_all)
    {
        case 0:
        {
            return ___changeIMLongid(in, current);
        }
        case 1:
        {
            return ___changeWanghaoPw(in, current);
        }
        case 2:
        {
            return ___createWWWanghaoWebid(in, current);
        }
        case 3:
        {
            return ___createWanghaoWebid(in, current);
        }
        case 4:
        {
            return ___deleteWWWanghaoWebid(in, current);
        }
        case 5:
        {
            return ___deleteWanghaoWebid(in, current);
        }
        case 6:
        {
            return ___getBindedWebId(in, current);
        }
        case 7:
        {
            return ___getBindedWebIdList(in, current);
        }
        case 8:
        {
            return ___getUUIDWanghaoByWebid(in, current);
        }
        case 9:
        {
            return ___getWanghaoIMBind(in, current);
        }
        case 10:
        {
            return ___ice_id(in, current);
        }
        case 11:
        {
            return ___ice_ids(in, current);
        }
        case 12:
        {
            return ___ice_isA(in, current);
        }
        case 13:
        {
            return ___ice_ping(in, current);
        }
        case 14:
        {
            return ___isChangableWanghao(in, current);
        }
        case 15:
        {
            return ___prohibitWanghao(in, current);
        }
        case 16:
        {
            return ___registerWanghao(in, current);
        }
        case 17:
        {
            return ___updateChangableWanghao(in, current);
        }
        case 18:
        {
            return ___updateUserNameByUuid(in, current);
        }
        case 19:
        {
            return ___updateWanghaoLastLogintime(in, current);
        }
        case 20:
        {
            return ___updateWanghaoToken(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
AliIMInterface::IAEPDBSAdapter::__write(::IceInternal::BasicStream* __os) const
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
AliIMInterface::IAEPDBSAdapter::__read(::IceInternal::BasicStream* __is, bool __rid)
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
AliIMInterface::IAEPDBSAdapter::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIMInterface::IAEPDBSAdapter was not generated with stream support";
    throw ex;
}

void
AliIMInterface::IAEPDBSAdapter::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIMInterface::IAEPDBSAdapter was not generated with stream support";
    throw ex;
}

void 
AliIMInterface::__patch__IAEPDBSAdapterPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::AliIMInterface::IAEPDBSAdapterPtr* p = static_cast< ::AliIMInterface::IAEPDBSAdapterPtr*>(__addr);
    assert(p);
    *p = ::AliIMInterface::IAEPDBSAdapterPtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::AliIMInterface::IAEPDBSAdapter::ice_staticId();
        throw e;
    }
}

bool
AliIMInterface::operator==(const ::AliIMInterface::IAEPDBSAdapter& l, const ::AliIMInterface::IAEPDBSAdapter& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
AliIMInterface::operator!=(const ::AliIMInterface::IAEPDBSAdapter& l, const ::AliIMInterface::IAEPDBSAdapter& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
AliIMInterface::operator<(const ::AliIMInterface::IAEPDBSAdapter& l, const ::AliIMInterface::IAEPDBSAdapter& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
AliIMInterface::operator<=(const ::AliIMInterface::IAEPDBSAdapter& l, const ::AliIMInterface::IAEPDBSAdapter& r)
{
    return l < r || l == r;
}

bool
AliIMInterface::operator>(const ::AliIMInterface::IAEPDBSAdapter& l, const ::AliIMInterface::IAEPDBSAdapter& r)
{
    return !(l < r) && !(l == r);
}

bool
AliIMInterface::operator>=(const ::AliIMInterface::IAEPDBSAdapter& l, const ::AliIMInterface::IAEPDBSAdapter& r)
{
    return !(l < r);
}
