// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `user_info.ice'

#include <user_info.h>
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

static const ::std::string __IMServerData__UserInfoI__query_name = "query";

static const ::std::string __IMServerData__UserInfoI__insert_name = "insert";

static const ::std::string __IMServerData__UserInfoI__remove_name = "remove";

static const ::std::string __IMServerData__UserInfoI__loginNtfy_name = "loginNtfy";

static const ::std::string __IMServerData__UserInfoI__gettLoginNumBySite_name = "gettLoginNumBySite";

static const ::std::string __IMServerData__UserInfoI__getSiteIds_name = "getSiteIds";

static const ::std::string __IMServerData__UserInfoI__getOnlineCountBySite_name = "getOnlineCountBySite";

static const ::std::string __IMServerData__UserInfoI__getOneSiteOnlineStatus_name = "getOneSiteOnlineStatus";

void
IceInternal::incRef(::IMServerData::UserInfoI* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IMServerData::UserInfoI* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::IMServerData::UserInfoI* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::IMServerData::UserInfoI* p)
{
    p->__decRef();
}

void
IMServerData::__write(::IceInternal::BasicStream* __os, const ::IMServerData::UserInfoIPrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
IMServerData::__read(::IceInternal::BasicStream* __is, ::IMServerData::UserInfoIPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::IMServerData::UserInfoI;
        v->__copyFrom(proxy);
    }
}

void
IMServerData::__write(::IceInternal::BasicStream* __os, const ::IMServerData::UserInfoIPtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

bool
IMServerData::SWebBind::operator==(const SWebBind& __rhs) const
{
    return !operator!=(__rhs);
}

bool
IMServerData::SWebBind::operator!=(const SWebBind& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(serviceId != __rhs.serviceId)
    {
        return true;
    }
    if(siteId != __rhs.siteId)
    {
        return true;
    }
    if(webId != __rhs.webId)
    {
        return true;
    }
    if(webUid != __rhs.webUid)
    {
        return true;
    }
    if(webUrl != __rhs.webUrl)
    {
        return true;
    }
    return false;
}

bool
IMServerData::SWebBind::operator<(const SWebBind& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(serviceId < __rhs.serviceId)
    {
        return true;
    }
    else if(__rhs.serviceId < serviceId)
    {
        return false;
    }
    if(siteId < __rhs.siteId)
    {
        return true;
    }
    else if(__rhs.siteId < siteId)
    {
        return false;
    }
    if(webId < __rhs.webId)
    {
        return true;
    }
    else if(__rhs.webId < webId)
    {
        return false;
    }
    if(webUid < __rhs.webUid)
    {
        return true;
    }
    else if(__rhs.webUid < webUid)
    {
        return false;
    }
    if(webUrl < __rhs.webUrl)
    {
        return true;
    }
    else if(__rhs.webUrl < webUrl)
    {
        return false;
    }
    return false;
}

void
IMServerData::SWebBind::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(serviceId);
    __os->write(siteId);
    __os->write(webId);
    __os->write(webUid);
    if(webUrl.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&webUrl[0], &webUrl[0] + webUrl.size());
    }
}

void
IMServerData::SWebBind::__read(::IceInternal::BasicStream* __is)
{
    __is->read(serviceId);
    __is->read(siteId);
    __is->read(webId);
    __is->read(webUid);
    __is->read(webUrl);
}

void
IMServerData::__write(::IceInternal::BasicStream* __os, const ::IMServerData::SWebBind* begin, const ::IMServerData::SWebBind* end, ::IMServerData::__U__SWebBindSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
IMServerData::__read(::IceInternal::BasicStream* __is, ::IMServerData::SWebBindSeq& v, ::IMServerData::__U__SWebBindSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 5);
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
IMServerData::Statics::operator==(const Statics& __rhs) const
{
    return !operator!=(__rhs);
}

bool
IMServerData::Statics::operator!=(const Statics& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(servicId != __rhs.servicId)
    {
        return true;
    }
    if(webId != __rhs.webId)
    {
        return true;
    }
    if(count != __rhs.count)
    {
        return true;
    }
    return false;
}

bool
IMServerData::Statics::operator<(const Statics& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(servicId < __rhs.servicId)
    {
        return true;
    }
    else if(__rhs.servicId < servicId)
    {
        return false;
    }
    if(webId < __rhs.webId)
    {
        return true;
    }
    else if(__rhs.webId < webId)
    {
        return false;
    }
    if(count < __rhs.count)
    {
        return true;
    }
    else if(__rhs.count < count)
    {
        return false;
    }
    return false;
}

void
IMServerData::Statics::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(servicId);
    __os->write(webId);
    __os->write(count);
}

void
IMServerData::Statics::__read(::IceInternal::BasicStream* __is)
{
    __is->read(servicId);
    __is->read(webId);
    __is->read(count);
}

void
IMServerData::__write(::IceInternal::BasicStream* __os, const ::IMServerData::Statics* begin, const ::IMServerData::Statics* end, ::IMServerData::__U__StaticsSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
IMServerData::__read(::IceInternal::BasicStream* __is, ::IMServerData::StaticsSeq& v, ::IMServerData::__U__StaticsSeq)
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
IMServerData::__addObject(const UserInfoIPtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
IMServerData::__usesClasses(const UserInfoIPtr& p)
{
    return p->__usesClasses();
}

void
IMServerData::__decRefUnsafe(const UserInfoIPtr& p)
{
    p->__decRefUnsafe();
}

void
IMServerData::__clearHandleUnsafe(UserInfoIPtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::IMServerData::UserInfoI::query(const ::std::string& id, ::IMServerData::SWebBindSeq& binds, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMServerData__UserInfoI__query_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMServerData::UserInfoI* __del = dynamic_cast< ::IceDelegate::IMServerData::UserInfoI*>(__delBase.get());
            return __del->query(id, binds, __ctx);
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
IceProxy::IMServerData::UserInfoI::insert(const ::std::string& id, const ::IMServerData::SWebBindSeq& binds, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMServerData__UserInfoI__insert_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMServerData::UserInfoI* __del = dynamic_cast< ::IceDelegate::IMServerData::UserInfoI*>(__delBase.get());
            return __del->insert(id, binds, __ctx);
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
IceProxy::IMServerData::UserInfoI::remove(const ::std::string& id, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMServerData__UserInfoI__remove_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMServerData::UserInfoI* __del = dynamic_cast< ::IceDelegate::IMServerData::UserInfoI*>(__delBase.get());
            return __del->remove(id, __ctx);
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
IceProxy::IMServerData::UserInfoI::loginNtfy(const ::std::string& id, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMServerData__UserInfoI__loginNtfy_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMServerData::UserInfoI* __del = dynamic_cast< ::IceDelegate::IMServerData::UserInfoI*>(__delBase.get());
            return __del->loginNtfy(id, __ctx);
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
IceProxy::IMServerData::UserInfoI::gettLoginNumBySite(::IMServerData::StaticsSeq& lognum, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMServerData__UserInfoI__gettLoginNumBySite_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMServerData::UserInfoI* __del = dynamic_cast< ::IceDelegate::IMServerData::UserInfoI*>(__delBase.get());
            return __del->gettLoginNumBySite(lognum, __ctx);
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
IceProxy::IMServerData::UserInfoI::getSiteIds(const ::std::string& serviceid, const ::std::string& siteid, ::Ice::StringSeq& loginid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMServerData__UserInfoI__getSiteIds_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMServerData::UserInfoI* __del = dynamic_cast< ::IceDelegate::IMServerData::UserInfoI*>(__delBase.get());
            return __del->getSiteIds(serviceid, siteid, loginid, __ctx);
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
IceProxy::IMServerData::UserInfoI::getOnlineCountBySite(::IMServerData::StaticsSeq& statics, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMServerData__UserInfoI__getOnlineCountBySite_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMServerData::UserInfoI* __del = dynamic_cast< ::IceDelegate::IMServerData::UserInfoI*>(__delBase.get());
            return __del->getOnlineCountBySite(statics, __ctx);
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
IceProxy::IMServerData::UserInfoI::getOneSiteOnlineStatus(const ::std::string& serviceId, const ::std::string& siteid, ::Ice::Long& count, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMServerData__UserInfoI__getOneSiteOnlineStatus_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMServerData::UserInfoI* __del = dynamic_cast< ::IceDelegate::IMServerData::UserInfoI*>(__delBase.get());
            return __del->getOneSiteOnlineStatus(serviceId, siteid, count, __ctx);
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
IceProxy::IMServerData::UserInfoI::ice_staticId()
{
    return ::IMServerData::UserInfoI::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::IMServerData::UserInfoI::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::IMServerData::UserInfoI);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::IMServerData::UserInfoI::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::IMServerData::UserInfoI);
}

bool
IceProxy::IMServerData::operator==(const ::IceProxy::IMServerData::UserInfoI& l, const ::IceProxy::IMServerData::UserInfoI& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::IMServerData::operator!=(const ::IceProxy::IMServerData::UserInfoI& l, const ::IceProxy::IMServerData::UserInfoI& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::IMServerData::operator<(const ::IceProxy::IMServerData::UserInfoI& l, const ::IceProxy::IMServerData::UserInfoI& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::IMServerData::operator<=(const ::IceProxy::IMServerData::UserInfoI& l, const ::IceProxy::IMServerData::UserInfoI& r)
{
    return l < r || l == r;
}

bool
IceProxy::IMServerData::operator>(const ::IceProxy::IMServerData::UserInfoI& l, const ::IceProxy::IMServerData::UserInfoI& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::IMServerData::operator>=(const ::IceProxy::IMServerData::UserInfoI& l, const ::IceProxy::IMServerData::UserInfoI& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::IMServerData::UserInfoI::query(const ::std::string& id, ::IMServerData::SWebBindSeq& binds, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMServerData__UserInfoI__query_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(id);
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
        ::IMServerData::__read(__is, binds, ::IMServerData::__U__SWebBindSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMServerData::UserInfoI::insert(const ::std::string& id, const ::IMServerData::SWebBindSeq& binds, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMServerData__UserInfoI__insert_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(id);
        if(binds.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::IMServerData::__write(__os, &binds[0], &binds[0] + binds.size(), ::IMServerData::__U__SWebBindSeq());
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMServerData::UserInfoI::remove(const ::std::string& id, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMServerData__UserInfoI__remove_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(id);
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
IceDelegateM::IMServerData::UserInfoI::loginNtfy(const ::std::string& id, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMServerData__UserInfoI__loginNtfy_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(id);
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
IceDelegateM::IMServerData::UserInfoI::gettLoginNumBySite(::IMServerData::StaticsSeq& lognum, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMServerData__UserInfoI__gettLoginNumBySite_name, ::Ice::Normal, __context, __compress);
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
        ::IMServerData::__read(__is, lognum, ::IMServerData::__U__StaticsSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMServerData::UserInfoI::getSiteIds(const ::std::string& serviceid, const ::std::string& siteid, ::Ice::StringSeq& loginid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMServerData__UserInfoI__getSiteIds_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(serviceid);
        __os->write(siteid);
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
        __is->read(loginid);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMServerData::UserInfoI::getOnlineCountBySite(::IMServerData::StaticsSeq& statics, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMServerData__UserInfoI__getOnlineCountBySite_name, ::Ice::Normal, __context, __compress);
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
        ::IMServerData::__read(__is, statics, ::IMServerData::__U__StaticsSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMServerData::UserInfoI::getOneSiteOnlineStatus(const ::std::string& serviceId, const ::std::string& siteid, ::Ice::Long& count, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMServerData__UserInfoI__getOneSiteOnlineStatus_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(serviceId);
        __os->write(siteid);
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
        __is->read(count);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::IMServerData::UserInfoI::query(const ::std::string& id, ::IMServerData::SWebBindSeq& binds, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMServerData__UserInfoI__query_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMServerData::UserInfoI* __servant = dynamic_cast< ::IMServerData::UserInfoI*>(__direct.servant().get());
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
                __ret = __servant->query(id, binds, __current);
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
IceDelegateD::IMServerData::UserInfoI::insert(const ::std::string& id, const ::IMServerData::SWebBindSeq& binds, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMServerData__UserInfoI__insert_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMServerData::UserInfoI* __servant = dynamic_cast< ::IMServerData::UserInfoI*>(__direct.servant().get());
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
                __ret = __servant->insert(id, binds, __current);
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
IceDelegateD::IMServerData::UserInfoI::remove(const ::std::string& id, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMServerData__UserInfoI__remove_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMServerData::UserInfoI* __servant = dynamic_cast< ::IMServerData::UserInfoI*>(__direct.servant().get());
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
                __ret = __servant->remove(id, __current);
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
IceDelegateD::IMServerData::UserInfoI::loginNtfy(const ::std::string& id, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMServerData__UserInfoI__loginNtfy_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMServerData::UserInfoI* __servant = dynamic_cast< ::IMServerData::UserInfoI*>(__direct.servant().get());
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
                __ret = __servant->loginNtfy(id, __current);
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
IceDelegateD::IMServerData::UserInfoI::gettLoginNumBySite(::IMServerData::StaticsSeq& lognum, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMServerData__UserInfoI__gettLoginNumBySite_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMServerData::UserInfoI* __servant = dynamic_cast< ::IMServerData::UserInfoI*>(__direct.servant().get());
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
                __ret = __servant->gettLoginNumBySite(lognum, __current);
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
IceDelegateD::IMServerData::UserInfoI::getSiteIds(const ::std::string& serviceid, const ::std::string& siteid, ::Ice::StringSeq& loginid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMServerData__UserInfoI__getSiteIds_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMServerData::UserInfoI* __servant = dynamic_cast< ::IMServerData::UserInfoI*>(__direct.servant().get());
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
                __ret = __servant->getSiteIds(serviceid, siteid, loginid, __current);
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
IceDelegateD::IMServerData::UserInfoI::getOnlineCountBySite(::IMServerData::StaticsSeq& statics, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMServerData__UserInfoI__getOnlineCountBySite_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMServerData::UserInfoI* __servant = dynamic_cast< ::IMServerData::UserInfoI*>(__direct.servant().get());
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
                __ret = __servant->getOnlineCountBySite(statics, __current);
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
IceDelegateD::IMServerData::UserInfoI::getOneSiteOnlineStatus(const ::std::string& serviceId, const ::std::string& siteid, ::Ice::Long& count, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMServerData__UserInfoI__getOneSiteOnlineStatus_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMServerData::UserInfoI* __servant = dynamic_cast< ::IMServerData::UserInfoI*>(__direct.servant().get());
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
                __ret = __servant->getOneSiteOnlineStatus(serviceId, siteid, count, __current);
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
IMServerData::UserInfoI::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __IMServerData__UserInfoI_ids[2] =
{
    "::IMServerData::UserInfoI",
    "::Ice::Object"
};

bool
IMServerData::UserInfoI::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__IMServerData__UserInfoI_ids, __IMServerData__UserInfoI_ids + 2, _s);
}

::std::vector< ::std::string>
IMServerData::UserInfoI::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__IMServerData__UserInfoI_ids[0], &__IMServerData__UserInfoI_ids[2]);
}

const ::std::string&
IMServerData::UserInfoI::ice_id(const ::Ice::Current&) const
{
    return __IMServerData__UserInfoI_ids[0];
}

const ::std::string&
IMServerData::UserInfoI::ice_staticId()
{
    return __IMServerData__UserInfoI_ids[0];
}

::IceInternal::DispatchStatus
IMServerData::UserInfoI::___query(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string id;
    __is->read(id);
    ::IMServerData::SWebBindSeq binds;
    ::Ice::Int __ret = query(id, binds, __current);
    if(binds.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::IMServerData::__write(__os, &binds[0], &binds[0] + binds.size(), ::IMServerData::__U__SWebBindSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMServerData::UserInfoI::___insert(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string id;
    ::IMServerData::SWebBindSeq binds;
    __is->read(id);
    ::IMServerData::__read(__is, binds, ::IMServerData::__U__SWebBindSeq());
    ::Ice::Int __ret = insert(id, binds, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMServerData::UserInfoI::___remove(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string id;
    __is->read(id);
    ::Ice::Int __ret = remove(id, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMServerData::UserInfoI::___loginNtfy(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string id;
    __is->read(id);
    ::Ice::Int __ret = loginNtfy(id, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMServerData::UserInfoI::___gettLoginNumBySite(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::IMServerData::StaticsSeq lognum;
    ::Ice::Int __ret = gettLoginNumBySite(lognum, __current);
    if(lognum.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::IMServerData::__write(__os, &lognum[0], &lognum[0] + lognum.size(), ::IMServerData::__U__StaticsSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMServerData::UserInfoI::___getSiteIds(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string serviceid;
    ::std::string siteid;
    __is->read(serviceid);
    __is->read(siteid);
    ::Ice::StringSeq loginid;
    ::Ice::Int __ret = getSiteIds(serviceid, siteid, loginid, __current);
    if(loginid.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&loginid[0], &loginid[0] + loginid.size());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMServerData::UserInfoI::___getOnlineCountBySite(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::IMServerData::StaticsSeq statics;
    ::Ice::Int __ret = getOnlineCountBySite(statics, __current);
    if(statics.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::IMServerData::__write(__os, &statics[0], &statics[0] + statics.size(), ::IMServerData::__U__StaticsSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMServerData::UserInfoI::___getOneSiteOnlineStatus(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string serviceId;
    ::std::string siteid;
    __is->read(serviceId);
    __is->read(siteid);
    ::Ice::Long count;
    ::Ice::Int __ret = getOneSiteOnlineStatus(serviceId, siteid, count, __current);
    __os->write(count);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __IMServerData__UserInfoI_all[] =
{
    "getOneSiteOnlineStatus",
    "getOnlineCountBySite",
    "getSiteIds",
    "gettLoginNumBySite",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "insert",
    "loginNtfy",
    "query",
    "remove"
};

::IceInternal::DispatchStatus
IMServerData::UserInfoI::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__IMServerData__UserInfoI_all, __IMServerData__UserInfoI_all + 12, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __IMServerData__UserInfoI_all)
    {
        case 0:
        {
            return ___getOneSiteOnlineStatus(in, current);
        }
        case 1:
        {
            return ___getOnlineCountBySite(in, current);
        }
        case 2:
        {
            return ___getSiteIds(in, current);
        }
        case 3:
        {
            return ___gettLoginNumBySite(in, current);
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
            return ___insert(in, current);
        }
        case 9:
        {
            return ___loginNtfy(in, current);
        }
        case 10:
        {
            return ___query(in, current);
        }
        case 11:
        {
            return ___remove(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
IMServerData::UserInfoI::__write(::IceInternal::BasicStream* __os) const
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
IMServerData::UserInfoI::__read(::IceInternal::BasicStream* __is, bool __rid)
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
IMServerData::UserInfoI::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type IMServerData::UserInfoI was not generated with stream support";
    throw ex;
}

void
IMServerData::UserInfoI::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type IMServerData::UserInfoI was not generated with stream support";
    throw ex;
}

void 
IMServerData::__patch__UserInfoIPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::IMServerData::UserInfoIPtr* p = static_cast< ::IMServerData::UserInfoIPtr*>(__addr);
    assert(p);
    *p = ::IMServerData::UserInfoIPtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::IMServerData::UserInfoI::ice_staticId();
        throw e;
    }
}

bool
IMServerData::operator==(const ::IMServerData::UserInfoI& l, const ::IMServerData::UserInfoI& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
IMServerData::operator!=(const ::IMServerData::UserInfoI& l, const ::IMServerData::UserInfoI& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
IMServerData::operator<(const ::IMServerData::UserInfoI& l, const ::IMServerData::UserInfoI& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
IMServerData::operator<=(const ::IMServerData::UserInfoI& l, const ::IMServerData::UserInfoI& r)
{
    return l < r || l == r;
}

bool
IMServerData::operator>(const ::IMServerData::UserInfoI& l, const ::IMServerData::UserInfoI& r)
{
    return !(l < r) && !(l == r);
}

bool
IMServerData::operator>=(const ::IMServerData::UserInfoI& l, const ::IMServerData::UserInfoI& r)
{
    return !(l < r);
}
