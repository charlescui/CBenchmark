// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `infoservice.ice'

#include <infoservice.h>
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

static const ::std::string __AliIM__IUserExtInfoService__getUserExtInfo_name = "getUserExtInfo";

static const ::std::string __AliIM__IUserExtInfoService__updateUserExtInfo_name = "updateUserExtInfo";

static const ::std::string __AliIM__IUserExtInfoService__notifySpaceOpen_name = "notifySpaceOpen";

static const ::std::string __AliIM__IUserExtInfoService__addBlogSign_name = "addBlogSign";

static const ::std::string __AliIM__IUserExtInfoService__NotifyPluginMsg_name = "NotifyPluginMsg";

static const ::std::string __AliIM__IUserExtInfoService__UpdateSignature_name = "UpdateSignature";

static const ::std::string __AliIM__IUserExtInfoService__getBatchSignature_name = "getBatchSignature";

static const ::std::string __AliIM__IUserExtInfoService__NotifyUserDoings_name = "NotifyUserDoings";

static const ::std::string __AliIM__IUserExtInfoService__NotifyUserDoingsClose_name = "NotifyUserDoingsClose";

static const ::std::string __AliIM__IUserExtInfoService__NotifyPluginMsg2_name = "NotifyPluginMsg2";

static const ::std::string __AliIM__IUserExtInfoService__getSpaceOpen_name = "getSpaceOpen";

static const ::std::string __AliIM__IUserExtInfoService__NotifyUserVip_name = "NotifyUserVip";

static const ::std::string __AliIM__IUserExtInfoService__NotifyAppMsg_name = "NotifyAppMsg";

void
IceInternal::incRef(::AliIM::IUserExtInfoService* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::AliIM::IUserExtInfoService* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::AliIM::IUserExtInfoService* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::AliIM::IUserExtInfoService* p)
{
    p->__decRef();
}

void
AliIM::__write(::IceInternal::BasicStream* __os, const ::AliIM::IUserExtInfoServicePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
AliIM::__read(::IceInternal::BasicStream* __is, ::AliIM::IUserExtInfoServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::AliIM::IUserExtInfoService;
        v->__copyFrom(proxy);
    }
}

void
AliIM::__write(::IceInternal::BasicStream* __os, const ::AliIM::IUserExtInfoServicePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

void
AliIM::__write(::IceInternal::BasicStream* __os, const ::AliIM::KVMAP& v, ::AliIM::__U__KVMAP)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::AliIM::KVMAP::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
AliIM::__read(::IceInternal::BasicStream* __is, ::AliIM::KVMAP& v, ::AliIM::__U__KVMAP)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::std::string, ::std::string> pair;
        __is->read(const_cast< ::std::string&>(pair.first));
        ::AliIM::KVMAP::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

bool
AliIM::SImSign::operator==(const SImSign& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AliIM::SImSign::operator!=(const SImSign& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(longuid != __rhs.longuid)
    {
        return true;
    }
    if(sign != __rhs.sign)
    {
        return true;
    }
    return false;
}

bool
AliIM::SImSign::operator<(const SImSign& __rhs) const
{
    if(this == &__rhs)
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
    if(sign < __rhs.sign)
    {
        return true;
    }
    else if(__rhs.sign < sign)
    {
        return false;
    }
    return false;
}

void
AliIM::SImSign::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(longuid);
    __os->write(sign);
}

void
AliIM::SImSign::__read(::IceInternal::BasicStream* __is)
{
    __is->read(longuid);
    __is->read(sign);
}

void
AliIM::__write(::IceInternal::BasicStream* __os, const ::AliIM::SImSign* begin, const ::AliIM::SImSign* end, ::AliIM::__U__SIMSignSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
AliIM::__read(::IceInternal::BasicStream* __is, ::AliIM::SIMSignSeq& v, ::AliIM::__U__SIMSignSeq)
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
AliIM::__addObject(const IUserExtInfoServicePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
AliIM::__usesClasses(const IUserExtInfoServicePtr& p)
{
    return p->__usesClasses();
}

void
AliIM::__decRefUnsafe(const IUserExtInfoServicePtr& p)
{
    p->__decRefUnsafe();
}

void
AliIM::__clearHandleUnsafe(IUserExtInfoServicePtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::AliIM::IUserExtInfoService::getUserExtInfo(::Ice::Int srvid, const ::std::string& longuid, ::AliIM::KVMAP& attrs, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IUserExtInfoService__getUserExtInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IUserExtInfoService* __del = dynamic_cast< ::IceDelegate::AliIM::IUserExtInfoService*>(__delBase.get());
            return __del->getUserExtInfo(srvid, longuid, attrs, __ctx);
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
IceProxy::AliIM::IUserExtInfoService::updateUserExtInfo(::Ice::Int srvid, const ::std::string& longuid, ::Ice::Int reserved, ::Ice::Int neednotify, const ::AliIM::KVMAP& attrs, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IUserExtInfoService__updateUserExtInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IUserExtInfoService* __del = dynamic_cast< ::IceDelegate::AliIM::IUserExtInfoService*>(__delBase.get());
            return __del->updateUserExtInfo(srvid, longuid, reserved, neednotify, attrs, __ctx);
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
IceProxy::AliIM::IUserExtInfoService::notifySpaceOpen(const ::std::string& longuid, ::Ice::Int neednotify, const ::AliIM::KVMAP& attrs, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IUserExtInfoService__notifySpaceOpen_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IUserExtInfoService* __del = dynamic_cast< ::IceDelegate::AliIM::IUserExtInfoService*>(__delBase.get());
            return __del->notifySpaceOpen(longuid, neednotify, attrs, __ctx);
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
IceProxy::AliIM::IUserExtInfoService::addBlogSign(const ::std::string& longuid, const ::std::string& text, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IUserExtInfoService__addBlogSign_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IUserExtInfoService* __del = dynamic_cast< ::IceDelegate::AliIM::IUserExtInfoService*>(__delBase.get());
            return __del->addBlogSign(longuid, text, __ctx);
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
IceProxy::AliIM::IUserExtInfoService::NotifyPluginMsg(const ::std::string& longuid, const ::std::string& xmltext, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IUserExtInfoService__NotifyPluginMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IUserExtInfoService* __del = dynamic_cast< ::IceDelegate::AliIM::IUserExtInfoService*>(__delBase.get());
            return __del->NotifyPluginMsg(longuid, xmltext, __ctx);
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
IceProxy::AliIM::IUserExtInfoService::UpdateSignature(const ::std::string& uid, const ::std::string& xmlsignature, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IUserExtInfoService__UpdateSignature_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IUserExtInfoService* __del = dynamic_cast< ::IceDelegate::AliIM::IUserExtInfoService*>(__delBase.get());
            return __del->UpdateSignature(uid, xmlsignature, __ctx);
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
IceProxy::AliIM::IUserExtInfoService::getBatchSignature(const ::Ice::StringSeq& uids, ::AliIM::SIMSignSeq& signlist, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IUserExtInfoService__getBatchSignature_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IUserExtInfoService* __del = dynamic_cast< ::IceDelegate::AliIM::IUserExtInfoService*>(__delBase.get());
            return __del->getBatchSignature(uids, signlist, __ctx);
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
IceProxy::AliIM::IUserExtInfoService::NotifyUserDoings(const ::std::string& longuid, ::Ice::Int neednotify, const ::AliIM::KVMAP& attrs, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IUserExtInfoService__NotifyUserDoings_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IUserExtInfoService* __del = dynamic_cast< ::IceDelegate::AliIM::IUserExtInfoService*>(__delBase.get());
            return __del->NotifyUserDoings(longuid, neednotify, attrs, __ctx);
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
IceProxy::AliIM::IUserExtInfoService::NotifyUserDoingsClose(const ::std::string& longuid, ::Ice::Int neednotify, const ::AliIM::KVMAP& attrs, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IUserExtInfoService__NotifyUserDoingsClose_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IUserExtInfoService* __del = dynamic_cast< ::IceDelegate::AliIM::IUserExtInfoService*>(__delBase.get());
            return __del->NotifyUserDoingsClose(longuid, neednotify, attrs, __ctx);
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
IceProxy::AliIM::IUserExtInfoService::NotifyPluginMsg2(const ::std::string& longuid, const ::std::string& xmltext, const ::AliIM::KVMAP& attrs, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IUserExtInfoService__NotifyPluginMsg2_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IUserExtInfoService* __del = dynamic_cast< ::IceDelegate::AliIM::IUserExtInfoService*>(__delBase.get());
            return __del->NotifyPluginMsg2(longuid, xmltext, attrs, __ctx);
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
IceProxy::AliIM::IUserExtInfoService::getSpaceOpen(const ::std::string& longuid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IUserExtInfoService__getSpaceOpen_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IUserExtInfoService* __del = dynamic_cast< ::IceDelegate::AliIM::IUserExtInfoService*>(__delBase.get());
            return __del->getSpaceOpen(longuid, __ctx);
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
IceProxy::AliIM::IUserExtInfoService::NotifyUserVip(const ::std::string& longuid, ::Ice::Int viplevel, ::Ice::Int neednotify, const ::AliIM::KVMAP& attrs, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IUserExtInfoService__NotifyUserVip_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IUserExtInfoService* __del = dynamic_cast< ::IceDelegate::AliIM::IUserExtInfoService*>(__delBase.get());
            return __del->NotifyUserVip(longuid, viplevel, neednotify, attrs, __ctx);
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
IceProxy::AliIM::IUserExtInfoService::NotifyAppMsg(const ::std::string& longUid, const ::std::string& xmlstr, const ::AliIM::KVMAP& attrs, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IUserExtInfoService__NotifyAppMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IUserExtInfoService* __del = dynamic_cast< ::IceDelegate::AliIM::IUserExtInfoService*>(__delBase.get());
            return __del->NotifyAppMsg(longUid, xmlstr, attrs, __ctx);
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
IceProxy::AliIM::IUserExtInfoService::ice_staticId()
{
    return ::AliIM::IUserExtInfoService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::AliIM::IUserExtInfoService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::AliIM::IUserExtInfoService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::AliIM::IUserExtInfoService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::AliIM::IUserExtInfoService);
}

bool
IceProxy::AliIM::operator==(const ::IceProxy::AliIM::IUserExtInfoService& l, const ::IceProxy::AliIM::IUserExtInfoService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator!=(const ::IceProxy::AliIM::IUserExtInfoService& l, const ::IceProxy::AliIM::IUserExtInfoService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator<(const ::IceProxy::AliIM::IUserExtInfoService& l, const ::IceProxy::AliIM::IUserExtInfoService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator<=(const ::IceProxy::AliIM::IUserExtInfoService& l, const ::IceProxy::AliIM::IUserExtInfoService& r)
{
    return l < r || l == r;
}

bool
IceProxy::AliIM::operator>(const ::IceProxy::AliIM::IUserExtInfoService& l, const ::IceProxy::AliIM::IUserExtInfoService& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::AliIM::operator>=(const ::IceProxy::AliIM::IUserExtInfoService& l, const ::IceProxy::AliIM::IUserExtInfoService& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::AliIM::IUserExtInfoService::getUserExtInfo(::Ice::Int srvid, const ::std::string& longuid, ::AliIM::KVMAP& attrs, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IUserExtInfoService__getUserExtInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(srvid);
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
        ::AliIM::__read(__is, attrs, ::AliIM::__U__KVMAP());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIM::IUserExtInfoService::updateUserExtInfo(::Ice::Int srvid, const ::std::string& longuid, ::Ice::Int reserved, ::Ice::Int neednotify, const ::AliIM::KVMAP& attrs, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IUserExtInfoService__updateUserExtInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(srvid);
        __os->write(longuid);
        __os->write(reserved);
        __os->write(neednotify);
        ::AliIM::__write(__os, attrs, ::AliIM::__U__KVMAP());
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
IceDelegateM::AliIM::IUserExtInfoService::notifySpaceOpen(const ::std::string& longuid, ::Ice::Int neednotify, const ::AliIM::KVMAP& attrs, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IUserExtInfoService__notifySpaceOpen_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longuid);
        __os->write(neednotify);
        ::AliIM::__write(__os, attrs, ::AliIM::__U__KVMAP());
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
IceDelegateM::AliIM::IUserExtInfoService::addBlogSign(const ::std::string& longuid, const ::std::string& text, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IUserExtInfoService__addBlogSign_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longuid);
        __os->write(text);
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
IceDelegateM::AliIM::IUserExtInfoService::NotifyPluginMsg(const ::std::string& longuid, const ::std::string& xmltext, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IUserExtInfoService__NotifyPluginMsg_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longuid);
        __os->write(xmltext);
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
IceDelegateM::AliIM::IUserExtInfoService::UpdateSignature(const ::std::string& uid, const ::std::string& xmlsignature, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IUserExtInfoService__UpdateSignature_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(xmlsignature);
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
IceDelegateM::AliIM::IUserExtInfoService::getBatchSignature(const ::Ice::StringSeq& uids, ::AliIM::SIMSignSeq& signlist, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IUserExtInfoService__getBatchSignature_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(uids.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&uids[0], &uids[0] + uids.size());
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
        ::AliIM::__read(__is, signlist, ::AliIM::__U__SIMSignSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIM::IUserExtInfoService::NotifyUserDoings(const ::std::string& longuid, ::Ice::Int neednotify, const ::AliIM::KVMAP& attrs, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IUserExtInfoService__NotifyUserDoings_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longuid);
        __os->write(neednotify);
        ::AliIM::__write(__os, attrs, ::AliIM::__U__KVMAP());
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
IceDelegateM::AliIM::IUserExtInfoService::NotifyUserDoingsClose(const ::std::string& longuid, ::Ice::Int neednotify, const ::AliIM::KVMAP& attrs, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IUserExtInfoService__NotifyUserDoingsClose_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longuid);
        __os->write(neednotify);
        ::AliIM::__write(__os, attrs, ::AliIM::__U__KVMAP());
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
IceDelegateM::AliIM::IUserExtInfoService::NotifyPluginMsg2(const ::std::string& longuid, const ::std::string& xmltext, const ::AliIM::KVMAP& attrs, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IUserExtInfoService__NotifyPluginMsg2_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longuid);
        __os->write(xmltext);
        ::AliIM::__write(__os, attrs, ::AliIM::__U__KVMAP());
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
IceDelegateM::AliIM::IUserExtInfoService::getSpaceOpen(const ::std::string& longuid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IUserExtInfoService__getSpaceOpen_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
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
IceDelegateM::AliIM::IUserExtInfoService::NotifyUserVip(const ::std::string& longuid, ::Ice::Int viplevel, ::Ice::Int neednotify, const ::AliIM::KVMAP& attrs, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IUserExtInfoService__NotifyUserVip_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longuid);
        __os->write(viplevel);
        __os->write(neednotify);
        ::AliIM::__write(__os, attrs, ::AliIM::__U__KVMAP());
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
IceDelegateM::AliIM::IUserExtInfoService::NotifyAppMsg(const ::std::string& longUid, const ::std::string& xmlstr, const ::AliIM::KVMAP& attrs, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IUserExtInfoService__NotifyAppMsg_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longUid);
        __os->write(xmlstr);
        ::AliIM::__write(__os, attrs, ::AliIM::__U__KVMAP());
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
IceDelegateD::AliIM::IUserExtInfoService::getUserExtInfo(::Ice::Int srvid, const ::std::string& longuid, ::AliIM::KVMAP& attrs, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IUserExtInfoService__getUserExtInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IUserExtInfoService* __servant = dynamic_cast< ::AliIM::IUserExtInfoService*>(__direct.servant().get());
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
                __ret = __servant->getUserExtInfo(srvid, longuid, attrs, __current);
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
IceDelegateD::AliIM::IUserExtInfoService::updateUserExtInfo(::Ice::Int srvid, const ::std::string& longuid, ::Ice::Int reserved, ::Ice::Int neednotify, const ::AliIM::KVMAP& attrs, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IUserExtInfoService__updateUserExtInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IUserExtInfoService* __servant = dynamic_cast< ::AliIM::IUserExtInfoService*>(__direct.servant().get());
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
                __ret = __servant->updateUserExtInfo(srvid, longuid, reserved, neednotify, attrs, __current);
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
IceDelegateD::AliIM::IUserExtInfoService::notifySpaceOpen(const ::std::string& longuid, ::Ice::Int neednotify, const ::AliIM::KVMAP& attrs, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IUserExtInfoService__notifySpaceOpen_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IUserExtInfoService* __servant = dynamic_cast< ::AliIM::IUserExtInfoService*>(__direct.servant().get());
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
                __ret = __servant->notifySpaceOpen(longuid, neednotify, attrs, __current);
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
IceDelegateD::AliIM::IUserExtInfoService::addBlogSign(const ::std::string& longuid, const ::std::string& text, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IUserExtInfoService__addBlogSign_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IUserExtInfoService* __servant = dynamic_cast< ::AliIM::IUserExtInfoService*>(__direct.servant().get());
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
                __ret = __servant->addBlogSign(longuid, text, __current);
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
IceDelegateD::AliIM::IUserExtInfoService::NotifyPluginMsg(const ::std::string& longuid, const ::std::string& xmltext, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IUserExtInfoService__NotifyPluginMsg_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IUserExtInfoService* __servant = dynamic_cast< ::AliIM::IUserExtInfoService*>(__direct.servant().get());
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
                __ret = __servant->NotifyPluginMsg(longuid, xmltext, __current);
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
IceDelegateD::AliIM::IUserExtInfoService::UpdateSignature(const ::std::string& uid, const ::std::string& xmlsignature, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IUserExtInfoService__UpdateSignature_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IUserExtInfoService* __servant = dynamic_cast< ::AliIM::IUserExtInfoService*>(__direct.servant().get());
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
                __ret = __servant->UpdateSignature(uid, xmlsignature, __current);
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
IceDelegateD::AliIM::IUserExtInfoService::getBatchSignature(const ::Ice::StringSeq& uids, ::AliIM::SIMSignSeq& signlist, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IUserExtInfoService__getBatchSignature_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IUserExtInfoService* __servant = dynamic_cast< ::AliIM::IUserExtInfoService*>(__direct.servant().get());
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
                __ret = __servant->getBatchSignature(uids, signlist, __current);
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
IceDelegateD::AliIM::IUserExtInfoService::NotifyUserDoings(const ::std::string& longuid, ::Ice::Int neednotify, const ::AliIM::KVMAP& attrs, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IUserExtInfoService__NotifyUserDoings_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IUserExtInfoService* __servant = dynamic_cast< ::AliIM::IUserExtInfoService*>(__direct.servant().get());
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
                __ret = __servant->NotifyUserDoings(longuid, neednotify, attrs, __current);
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
IceDelegateD::AliIM::IUserExtInfoService::NotifyUserDoingsClose(const ::std::string& longuid, ::Ice::Int neednotify, const ::AliIM::KVMAP& attrs, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IUserExtInfoService__NotifyUserDoingsClose_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IUserExtInfoService* __servant = dynamic_cast< ::AliIM::IUserExtInfoService*>(__direct.servant().get());
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
                __ret = __servant->NotifyUserDoingsClose(longuid, neednotify, attrs, __current);
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
IceDelegateD::AliIM::IUserExtInfoService::NotifyPluginMsg2(const ::std::string& longuid, const ::std::string& xmltext, const ::AliIM::KVMAP& attrs, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IUserExtInfoService__NotifyPluginMsg2_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IUserExtInfoService* __servant = dynamic_cast< ::AliIM::IUserExtInfoService*>(__direct.servant().get());
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
                __ret = __servant->NotifyPluginMsg2(longuid, xmltext, attrs, __current);
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
IceDelegateD::AliIM::IUserExtInfoService::getSpaceOpen(const ::std::string& longuid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IUserExtInfoService__getSpaceOpen_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IUserExtInfoService* __servant = dynamic_cast< ::AliIM::IUserExtInfoService*>(__direct.servant().get());
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
                __ret = __servant->getSpaceOpen(longuid, __current);
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
IceDelegateD::AliIM::IUserExtInfoService::NotifyUserVip(const ::std::string& longuid, ::Ice::Int viplevel, ::Ice::Int neednotify, const ::AliIM::KVMAP& attrs, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IUserExtInfoService__NotifyUserVip_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IUserExtInfoService* __servant = dynamic_cast< ::AliIM::IUserExtInfoService*>(__direct.servant().get());
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
                __ret = __servant->NotifyUserVip(longuid, viplevel, neednotify, attrs, __current);
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
IceDelegateD::AliIM::IUserExtInfoService::NotifyAppMsg(const ::std::string& longUid, const ::std::string& xmlstr, const ::AliIM::KVMAP& attrs, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IUserExtInfoService__NotifyAppMsg_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IUserExtInfoService* __servant = dynamic_cast< ::AliIM::IUserExtInfoService*>(__direct.servant().get());
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
                __ret = __servant->NotifyAppMsg(longUid, xmlstr, attrs, __current);
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
AliIM::IUserExtInfoService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __AliIM__IUserExtInfoService_ids[2] =
{
    "::AliIM::IUserExtInfoService",
    "::Ice::Object"
};

bool
AliIM::IUserExtInfoService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__AliIM__IUserExtInfoService_ids, __AliIM__IUserExtInfoService_ids + 2, _s);
}

::std::vector< ::std::string>
AliIM::IUserExtInfoService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__AliIM__IUserExtInfoService_ids[0], &__AliIM__IUserExtInfoService_ids[2]);
}

const ::std::string&
AliIM::IUserExtInfoService::ice_id(const ::Ice::Current&) const
{
    return __AliIM__IUserExtInfoService_ids[0];
}

const ::std::string&
AliIM::IUserExtInfoService::ice_staticId()
{
    return __AliIM__IUserExtInfoService_ids[0];
}

::IceInternal::DispatchStatus
AliIM::IUserExtInfoService::___getUserExtInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int srvid;
    ::std::string longuid;
    __is->read(srvid);
    __is->read(longuid);
    ::AliIM::KVMAP attrs;
    ::Ice::Int __ret = getUserExtInfo(srvid, longuid, attrs, __current);
    ::AliIM::__write(__os, attrs, ::AliIM::__U__KVMAP());
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IUserExtInfoService::___updateUserExtInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int srvid;
    ::std::string longuid;
    ::Ice::Int reserved;
    ::Ice::Int neednotify;
    ::AliIM::KVMAP attrs;
    __is->read(srvid);
    __is->read(longuid);
    __is->read(reserved);
    __is->read(neednotify);
    ::AliIM::__read(__is, attrs, ::AliIM::__U__KVMAP());
    ::Ice::Int __ret = updateUserExtInfo(srvid, longuid, reserved, neednotify, attrs, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IUserExtInfoService::___notifySpaceOpen(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longuid;
    ::Ice::Int neednotify;
    ::AliIM::KVMAP attrs;
    __is->read(longuid);
    __is->read(neednotify);
    ::AliIM::__read(__is, attrs, ::AliIM::__U__KVMAP());
    ::Ice::Int __ret = notifySpaceOpen(longuid, neednotify, attrs, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IUserExtInfoService::___addBlogSign(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longuid;
    ::std::string text;
    __is->read(longuid);
    __is->read(text);
    ::Ice::Int __ret = addBlogSign(longuid, text, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IUserExtInfoService::___NotifyPluginMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longuid;
    ::std::string xmltext;
    __is->read(longuid);
    __is->read(xmltext);
    ::Ice::Int __ret = NotifyPluginMsg(longuid, xmltext, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IUserExtInfoService::___UpdateSignature(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string xmlsignature;
    __is->read(uid);
    __is->read(xmlsignature);
    ::Ice::Int __ret = UpdateSignature(uid, xmlsignature, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IUserExtInfoService::___getBatchSignature(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::StringSeq uids;
    __is->read(uids);
    ::AliIM::SIMSignSeq signlist;
    ::Ice::Int __ret = getBatchSignature(uids, signlist, __current);
    if(signlist.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::AliIM::__write(__os, &signlist[0], &signlist[0] + signlist.size(), ::AliIM::__U__SIMSignSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IUserExtInfoService::___NotifyUserDoings(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longuid;
    ::Ice::Int neednotify;
    ::AliIM::KVMAP attrs;
    __is->read(longuid);
    __is->read(neednotify);
    ::AliIM::__read(__is, attrs, ::AliIM::__U__KVMAP());
    ::Ice::Int __ret = NotifyUserDoings(longuid, neednotify, attrs, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IUserExtInfoService::___NotifyUserDoingsClose(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longuid;
    ::Ice::Int neednotify;
    ::AliIM::KVMAP attrs;
    __is->read(longuid);
    __is->read(neednotify);
    ::AliIM::__read(__is, attrs, ::AliIM::__U__KVMAP());
    ::Ice::Int __ret = NotifyUserDoingsClose(longuid, neednotify, attrs, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IUserExtInfoService::___NotifyPluginMsg2(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longuid;
    ::std::string xmltext;
    ::AliIM::KVMAP attrs;
    __is->read(longuid);
    __is->read(xmltext);
    ::AliIM::__read(__is, attrs, ::AliIM::__U__KVMAP());
    ::Ice::Int __ret = NotifyPluginMsg2(longuid, xmltext, attrs, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IUserExtInfoService::___getSpaceOpen(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longuid;
    __is->read(longuid);
    ::Ice::Int __ret = getSpaceOpen(longuid, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IUserExtInfoService::___NotifyUserVip(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longuid;
    ::Ice::Int viplevel;
    ::Ice::Int neednotify;
    ::AliIM::KVMAP attrs;
    __is->read(longuid);
    __is->read(viplevel);
    __is->read(neednotify);
    ::AliIM::__read(__is, attrs, ::AliIM::__U__KVMAP());
    ::Ice::Int __ret = NotifyUserVip(longuid, viplevel, neednotify, attrs, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IUserExtInfoService::___NotifyAppMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string longUid;
    ::std::string xmlstr;
    ::AliIM::KVMAP attrs;
    __is->read(longUid);
    __is->read(xmlstr);
    ::AliIM::__read(__is, attrs, ::AliIM::__U__KVMAP());
    ::Ice::Int __ret = NotifyAppMsg(longUid, xmlstr, attrs, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __AliIM__IUserExtInfoService_all[] =
{
    "NotifyAppMsg",
    "NotifyPluginMsg",
    "NotifyPluginMsg2",
    "NotifyUserDoings",
    "NotifyUserDoingsClose",
    "NotifyUserVip",
    "UpdateSignature",
    "addBlogSign",
    "getBatchSignature",
    "getSpaceOpen",
    "getUserExtInfo",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "notifySpaceOpen",
    "updateUserExtInfo"
};

::IceInternal::DispatchStatus
AliIM::IUserExtInfoService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__AliIM__IUserExtInfoService_all, __AliIM__IUserExtInfoService_all + 17, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __AliIM__IUserExtInfoService_all)
    {
        case 0:
        {
            return ___NotifyAppMsg(in, current);
        }
        case 1:
        {
            return ___NotifyPluginMsg(in, current);
        }
        case 2:
        {
            return ___NotifyPluginMsg2(in, current);
        }
        case 3:
        {
            return ___NotifyUserDoings(in, current);
        }
        case 4:
        {
            return ___NotifyUserDoingsClose(in, current);
        }
        case 5:
        {
            return ___NotifyUserVip(in, current);
        }
        case 6:
        {
            return ___UpdateSignature(in, current);
        }
        case 7:
        {
            return ___addBlogSign(in, current);
        }
        case 8:
        {
            return ___getBatchSignature(in, current);
        }
        case 9:
        {
            return ___getSpaceOpen(in, current);
        }
        case 10:
        {
            return ___getUserExtInfo(in, current);
        }
        case 11:
        {
            return ___ice_id(in, current);
        }
        case 12:
        {
            return ___ice_ids(in, current);
        }
        case 13:
        {
            return ___ice_isA(in, current);
        }
        case 14:
        {
            return ___ice_ping(in, current);
        }
        case 15:
        {
            return ___notifySpaceOpen(in, current);
        }
        case 16:
        {
            return ___updateUserExtInfo(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
AliIM::IUserExtInfoService::__write(::IceInternal::BasicStream* __os) const
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
AliIM::IUserExtInfoService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
AliIM::IUserExtInfoService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIM::IUserExtInfoService was not generated with stream support";
    throw ex;
}

void
AliIM::IUserExtInfoService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIM::IUserExtInfoService was not generated with stream support";
    throw ex;
}

void 
AliIM::__patch__IUserExtInfoServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::AliIM::IUserExtInfoServicePtr* p = static_cast< ::AliIM::IUserExtInfoServicePtr*>(__addr);
    assert(p);
    *p = ::AliIM::IUserExtInfoServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::AliIM::IUserExtInfoService::ice_staticId();
        throw e;
    }
}

bool
AliIM::operator==(const ::AliIM::IUserExtInfoService& l, const ::AliIM::IUserExtInfoService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator!=(const ::AliIM::IUserExtInfoService& l, const ::AliIM::IUserExtInfoService& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator<(const ::AliIM::IUserExtInfoService& l, const ::AliIM::IUserExtInfoService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator<=(const ::AliIM::IUserExtInfoService& l, const ::AliIM::IUserExtInfoService& r)
{
    return l < r || l == r;
}

bool
AliIM::operator>(const ::AliIM::IUserExtInfoService& l, const ::AliIM::IUserExtInfoService& r)
{
    return !(l < r) && !(l == r);
}

bool
AliIM::operator>=(const ::AliIM::IUserExtInfoService& l, const ::AliIM::IUserExtInfoService& r)
{
    return !(l < r);
}
