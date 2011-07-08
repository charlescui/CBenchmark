// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `arcacheservice.ice'

#include <arcacheservice.h>
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

static const ::std::string __AliIM__IARCacheService__getUserInfo_name = "getUserInfo";

static const ::std::string __AliIM__IARCacheService__updateUserLoginEx_name = "updateUserLoginEx";

static const ::std::string __AliIM__IARCacheService__updateUserLoginEx2_name = "updateUserLoginEx2";

static const ::std::string __AliIM__IARCacheService__updateUserLastLoginTime_name = "updateUserLastLoginTime";

static const ::std::string __AliIM__IARCacheService__updateSysMsgId_name = "updateSysMsgId";

static const ::std::string __AliIM__IARCacheService__updateUserDataInfo_name = "updateUserDataInfo";

static const ::std::string __AliIM__IARCacheService__getUserInfo2_name = "getUserInfo2";

static const ::std::string __AliIM__IARCacheService__updateUserDataInfo2_name = "updateUserDataInfo2";

void
IceInternal::incRef(::AliIM::IARCacheService* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::AliIM::IARCacheService* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::AliIM::IARCacheService* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::AliIM::IARCacheService* p)
{
    p->__decRef();
}

void
AliIM::__write(::IceInternal::BasicStream* __os, const ::AliIM::IARCacheServicePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
AliIM::__read(::IceInternal::BasicStream* __is, ::AliIM::IARCacheServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::AliIM::IARCacheService;
        v->__copyFrom(proxy);
    }
}

void
AliIM::__write(::IceInternal::BasicStream* __os, const ::AliIM::IARCacheServicePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

bool
AliIM::ARUSERINFO::operator==(const ARUSERINFO& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AliIM::ARUSERINFO::operator!=(const ARUSERINFO& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(strangerMsgCount != __rhs.strangerMsgCount)
    {
        return true;
    }
    if(addContactCount != __rhs.addContactCount)
    {
        return true;
    }
    if(reqContactCount != __rhs.reqContactCount)
    {
        return true;
    }
    if(addTribeCount != __rhs.addTribeCount)
    {
        return true;
    }
    if(lastLogonTime != __rhs.lastLogonTime)
    {
        return true;
    }
    if(sysMsgId != __rhs.sysMsgId)
    {
        return true;
    }
    if(onlineTime != __rhs.onlineTime)
    {
        return true;
    }
    if(loginIp != __rhs.loginIp)
    {
        return true;
    }
    return false;
}

bool
AliIM::ARUSERINFO::operator<(const ARUSERINFO& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(strangerMsgCount < __rhs.strangerMsgCount)
    {
        return true;
    }
    else if(__rhs.strangerMsgCount < strangerMsgCount)
    {
        return false;
    }
    if(addContactCount < __rhs.addContactCount)
    {
        return true;
    }
    else if(__rhs.addContactCount < addContactCount)
    {
        return false;
    }
    if(reqContactCount < __rhs.reqContactCount)
    {
        return true;
    }
    else if(__rhs.reqContactCount < reqContactCount)
    {
        return false;
    }
    if(addTribeCount < __rhs.addTribeCount)
    {
        return true;
    }
    else if(__rhs.addTribeCount < addTribeCount)
    {
        return false;
    }
    if(lastLogonTime < __rhs.lastLogonTime)
    {
        return true;
    }
    else if(__rhs.lastLogonTime < lastLogonTime)
    {
        return false;
    }
    if(sysMsgId < __rhs.sysMsgId)
    {
        return true;
    }
    else if(__rhs.sysMsgId < sysMsgId)
    {
        return false;
    }
    if(onlineTime < __rhs.onlineTime)
    {
        return true;
    }
    else if(__rhs.onlineTime < onlineTime)
    {
        return false;
    }
    if(loginIp < __rhs.loginIp)
    {
        return true;
    }
    else if(__rhs.loginIp < loginIp)
    {
        return false;
    }
    return false;
}

void
AliIM::ARUSERINFO::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(strangerMsgCount);
    __os->write(addContactCount);
    __os->write(reqContactCount);
    __os->write(addTribeCount);
    __os->write(lastLogonTime);
    __os->write(sysMsgId);
    __os->write(onlineTime);
    __os->write(loginIp);
}

void
AliIM::ARUSERINFO::__read(::IceInternal::BasicStream* __is)
{
    __is->read(strangerMsgCount);
    __is->read(addContactCount);
    __is->read(reqContactCount);
    __is->read(addTribeCount);
    __is->read(lastLogonTime);
    __is->read(sysMsgId);
    __is->read(onlineTime);
    __is->read(loginIp);
}

bool
AliIM::ARUSERCONTROLINFO::operator==(const ARUSERCONTROLINFO& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AliIM::ARUSERCONTROLINFO::operator!=(const ARUSERCONTROLINFO& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(strangerMsgCount != __rhs.strangerMsgCount)
    {
        return true;
    }
    if(addContactCount != __rhs.addContactCount)
    {
        return true;
    }
    if(reqContactCount != __rhs.reqContactCount)
    {
        return true;
    }
    if(addTribeCount != __rhs.addTribeCount)
    {
        return true;
    }
    return false;
}

bool
AliIM::ARUSERCONTROLINFO::operator<(const ARUSERCONTROLINFO& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(strangerMsgCount < __rhs.strangerMsgCount)
    {
        return true;
    }
    else if(__rhs.strangerMsgCount < strangerMsgCount)
    {
        return false;
    }
    if(addContactCount < __rhs.addContactCount)
    {
        return true;
    }
    else if(__rhs.addContactCount < addContactCount)
    {
        return false;
    }
    if(reqContactCount < __rhs.reqContactCount)
    {
        return true;
    }
    else if(__rhs.reqContactCount < reqContactCount)
    {
        return false;
    }
    if(addTribeCount < __rhs.addTribeCount)
    {
        return true;
    }
    else if(__rhs.addTribeCount < addTribeCount)
    {
        return false;
    }
    return false;
}

void
AliIM::ARUSERCONTROLINFO::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(strangerMsgCount);
    __os->write(addContactCount);
    __os->write(reqContactCount);
    __os->write(addTribeCount);
}

void
AliIM::ARUSERCONTROLINFO::__read(::IceInternal::BasicStream* __is)
{
    __is->read(strangerMsgCount);
    __is->read(addContactCount);
    __is->read(reqContactCount);
    __is->read(addTribeCount);
}

void
AliIM::__write(::IceInternal::BasicStream* __os, const ::AliIM::RIGHTTABLE& v, ::AliIM::__U__RIGHTTABLE)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::AliIM::RIGHTTABLE::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
AliIM::__read(::IceInternal::BasicStream* __is, ::AliIM::RIGHTTABLE& v, ::AliIM::__U__RIGHTTABLE)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Int, ::Ice::Int> pair;
        __is->read(const_cast< ::Ice::Int&>(pair.first));
        ::AliIM::RIGHTTABLE::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

bool
AliIM::ARUSERINFO2::operator==(const ARUSERINFO2& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AliIM::ARUSERINFO2::operator!=(const ARUSERINFO2& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(rightMap != __rhs.rightMap)
    {
        return true;
    }
    if(lastLogonTime != __rhs.lastLogonTime)
    {
        return true;
    }
    if(sysMsgId != __rhs.sysMsgId)
    {
        return true;
    }
    if(onlineTime != __rhs.onlineTime)
    {
        return true;
    }
    if(loginIp != __rhs.loginIp)
    {
        return true;
    }
    return false;
}

bool
AliIM::ARUSERINFO2::operator<(const ARUSERINFO2& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(rightMap < __rhs.rightMap)
    {
        return true;
    }
    else if(__rhs.rightMap < rightMap)
    {
        return false;
    }
    if(lastLogonTime < __rhs.lastLogonTime)
    {
        return true;
    }
    else if(__rhs.lastLogonTime < lastLogonTime)
    {
        return false;
    }
    if(sysMsgId < __rhs.sysMsgId)
    {
        return true;
    }
    else if(__rhs.sysMsgId < sysMsgId)
    {
        return false;
    }
    if(onlineTime < __rhs.onlineTime)
    {
        return true;
    }
    else if(__rhs.onlineTime < onlineTime)
    {
        return false;
    }
    if(loginIp < __rhs.loginIp)
    {
        return true;
    }
    else if(__rhs.loginIp < loginIp)
    {
        return false;
    }
    return false;
}

void
AliIM::ARUSERINFO2::__write(::IceInternal::BasicStream* __os) const
{
    ::AliIM::__write(__os, rightMap, ::AliIM::__U__RIGHTTABLE());
    __os->write(lastLogonTime);
    __os->write(sysMsgId);
    __os->write(onlineTime);
    __os->write(loginIp);
}

void
AliIM::ARUSERINFO2::__read(::IceInternal::BasicStream* __is)
{
    ::AliIM::__read(__is, rightMap, ::AliIM::__U__RIGHTTABLE());
    __is->read(lastLogonTime);
    __is->read(sysMsgId);
    __is->read(onlineTime);
    __is->read(loginIp);
}

bool
AliIM::ARUSERCONTROLINFO2::operator==(const ARUSERCONTROLINFO2& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AliIM::ARUSERCONTROLINFO2::operator!=(const ARUSERCONTROLINFO2& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(rightMap != __rhs.rightMap)
    {
        return true;
    }
    return false;
}

bool
AliIM::ARUSERCONTROLINFO2::operator<(const ARUSERCONTROLINFO2& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(rightMap < __rhs.rightMap)
    {
        return true;
    }
    else if(__rhs.rightMap < rightMap)
    {
        return false;
    }
    return false;
}

void
AliIM::ARUSERCONTROLINFO2::__write(::IceInternal::BasicStream* __os) const
{
    ::AliIM::__write(__os, rightMap, ::AliIM::__U__RIGHTTABLE());
}

void
AliIM::ARUSERCONTROLINFO2::__read(::IceInternal::BasicStream* __is)
{
    ::AliIM::__read(__is, rightMap, ::AliIM::__U__RIGHTTABLE());
}

void
AliIM::__addObject(const IARCacheServicePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
AliIM::__usesClasses(const IARCacheServicePtr& p)
{
    return p->__usesClasses();
}

void
AliIM::__decRefUnsafe(const IARCacheServicePtr& p)
{
    p->__decRefUnsafe();
}

void
AliIM::__clearHandleUnsafe(IARCacheServicePtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::AliIM::IARCacheService::getUserInfo(const ::std::string& uid, ::AliIM::ARUSERINFO& userInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IARCacheService__getUserInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IARCacheService* __del = dynamic_cast< ::IceDelegate::AliIM::IARCacheService*>(__delBase.get());
            return __del->getUserInfo(uid, userInfo, __ctx);
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
IceProxy::AliIM::IARCacheService::updateUserLoginEx(const ::std::string& uid, ::Ice::Int sysMsgId, const ::std::string& loginIp, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IARCacheService__updateUserLoginEx_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IARCacheService* __del = dynamic_cast< ::IceDelegate::AliIM::IARCacheService*>(__delBase.get());
            return __del->updateUserLoginEx(uid, sysMsgId, loginIp, __ctx);
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
IceProxy::AliIM::IARCacheService::updateUserLoginEx2(const ::std::string& uid, ::Ice::Int sysMsgId, const ::std::string& loginIp, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IARCacheService__updateUserLoginEx2_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IARCacheService* __del = dynamic_cast< ::IceDelegate::AliIM::IARCacheService*>(__delBase.get());
            return __del->updateUserLoginEx2(uid, sysMsgId, loginIp, __ctx);
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
IceProxy::AliIM::IARCacheService::updateUserLastLoginTime(const ::std::string& uid, ::Ice::Int lastLoginTime, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IARCacheService__updateUserLastLoginTime_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IARCacheService* __del = dynamic_cast< ::IceDelegate::AliIM::IARCacheService*>(__delBase.get());
            return __del->updateUserLastLoginTime(uid, lastLoginTime, __ctx);
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
IceProxy::AliIM::IARCacheService::updateSysMsgId(const ::std::string& uid, ::Ice::Int sysMsgId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IARCacheService__updateSysMsgId_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IARCacheService* __del = dynamic_cast< ::IceDelegate::AliIM::IARCacheService*>(__delBase.get());
            return __del->updateSysMsgId(uid, sysMsgId, __ctx);
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
IceProxy::AliIM::IARCacheService::updateUserDataInfo(const ::std::string& uid, const ::AliIM::ARUSERCONTROLINFO& controlInfo, ::Ice::Int onlineTime, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IARCacheService__updateUserDataInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IARCacheService* __del = dynamic_cast< ::IceDelegate::AliIM::IARCacheService*>(__delBase.get());
            return __del->updateUserDataInfo(uid, controlInfo, onlineTime, __ctx);
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
IceProxy::AliIM::IARCacheService::getUserInfo2(const ::std::string& uid, ::AliIM::ARUSERINFO2& userInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IARCacheService__getUserInfo2_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IARCacheService* __del = dynamic_cast< ::IceDelegate::AliIM::IARCacheService*>(__delBase.get());
            return __del->getUserInfo2(uid, userInfo, __ctx);
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
IceProxy::AliIM::IARCacheService::updateUserDataInfo2(const ::std::string& uid, const ::AliIM::ARUSERCONTROLINFO2& controlInfo, ::Ice::Int onlineTime, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__IARCacheService__updateUserDataInfo2_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::IARCacheService* __del = dynamic_cast< ::IceDelegate::AliIM::IARCacheService*>(__delBase.get());
            return __del->updateUserDataInfo2(uid, controlInfo, onlineTime, __ctx);
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
IceProxy::AliIM::IARCacheService::ice_staticId()
{
    return ::AliIM::IARCacheService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::AliIM::IARCacheService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::AliIM::IARCacheService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::AliIM::IARCacheService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::AliIM::IARCacheService);
}

bool
IceProxy::AliIM::operator==(const ::IceProxy::AliIM::IARCacheService& l, const ::IceProxy::AliIM::IARCacheService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator!=(const ::IceProxy::AliIM::IARCacheService& l, const ::IceProxy::AliIM::IARCacheService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator<(const ::IceProxy::AliIM::IARCacheService& l, const ::IceProxy::AliIM::IARCacheService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator<=(const ::IceProxy::AliIM::IARCacheService& l, const ::IceProxy::AliIM::IARCacheService& r)
{
    return l < r || l == r;
}

bool
IceProxy::AliIM::operator>(const ::IceProxy::AliIM::IARCacheService& l, const ::IceProxy::AliIM::IARCacheService& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::AliIM::operator>=(const ::IceProxy::AliIM::IARCacheService& l, const ::IceProxy::AliIM::IARCacheService& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::AliIM::IARCacheService::getUserInfo(const ::std::string& uid, ::AliIM::ARUSERINFO& userInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IARCacheService__getUserInfo_name, ::Ice::Normal, __context, __compress);
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
        userInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIM::IARCacheService::updateUserLoginEx(const ::std::string& uid, ::Ice::Int sysMsgId, const ::std::string& loginIp, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IARCacheService__updateUserLoginEx_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(sysMsgId);
        __os->write(loginIp);
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
IceDelegateM::AliIM::IARCacheService::updateUserLoginEx2(const ::std::string& uid, ::Ice::Int sysMsgId, const ::std::string& loginIp, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IARCacheService__updateUserLoginEx2_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(sysMsgId);
        __os->write(loginIp);
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
IceDelegateM::AliIM::IARCacheService::updateUserLastLoginTime(const ::std::string& uid, ::Ice::Int lastLoginTime, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IARCacheService__updateUserLastLoginTime_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(lastLoginTime);
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
IceDelegateM::AliIM::IARCacheService::updateSysMsgId(const ::std::string& uid, ::Ice::Int sysMsgId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IARCacheService__updateSysMsgId_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(sysMsgId);
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
IceDelegateM::AliIM::IARCacheService::updateUserDataInfo(const ::std::string& uid, const ::AliIM::ARUSERCONTROLINFO& controlInfo, ::Ice::Int onlineTime, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IARCacheService__updateUserDataInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        controlInfo.__write(__os);
        __os->write(onlineTime);
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
IceDelegateM::AliIM::IARCacheService::getUserInfo2(const ::std::string& uid, ::AliIM::ARUSERINFO2& userInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IARCacheService__getUserInfo2_name, ::Ice::Normal, __context, __compress);
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
        userInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIM::IARCacheService::updateUserDataInfo2(const ::std::string& uid, const ::AliIM::ARUSERCONTROLINFO2& controlInfo, ::Ice::Int onlineTime, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__IARCacheService__updateUserDataInfo2_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        controlInfo.__write(__os);
        __os->write(onlineTime);
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
IceDelegateD::AliIM::IARCacheService::getUserInfo(const ::std::string& uid, ::AliIM::ARUSERINFO& userInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IARCacheService__getUserInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IARCacheService* __servant = dynamic_cast< ::AliIM::IARCacheService*>(__direct.servant().get());
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
                __ret = __servant->getUserInfo(uid, userInfo, __current);
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
IceDelegateD::AliIM::IARCacheService::updateUserLoginEx(const ::std::string& uid, ::Ice::Int sysMsgId, const ::std::string& loginIp, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IARCacheService__updateUserLoginEx_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IARCacheService* __servant = dynamic_cast< ::AliIM::IARCacheService*>(__direct.servant().get());
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
                __ret = __servant->updateUserLoginEx(uid, sysMsgId, loginIp, __current);
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
IceDelegateD::AliIM::IARCacheService::updateUserLoginEx2(const ::std::string& uid, ::Ice::Int sysMsgId, const ::std::string& loginIp, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IARCacheService__updateUserLoginEx2_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IARCacheService* __servant = dynamic_cast< ::AliIM::IARCacheService*>(__direct.servant().get());
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
                __ret = __servant->updateUserLoginEx2(uid, sysMsgId, loginIp, __current);
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
IceDelegateD::AliIM::IARCacheService::updateUserLastLoginTime(const ::std::string& uid, ::Ice::Int lastLoginTime, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IARCacheService__updateUserLastLoginTime_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IARCacheService* __servant = dynamic_cast< ::AliIM::IARCacheService*>(__direct.servant().get());
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
                __ret = __servant->updateUserLastLoginTime(uid, lastLoginTime, __current);
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
IceDelegateD::AliIM::IARCacheService::updateSysMsgId(const ::std::string& uid, ::Ice::Int sysMsgId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IARCacheService__updateSysMsgId_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IARCacheService* __servant = dynamic_cast< ::AliIM::IARCacheService*>(__direct.servant().get());
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
                __ret = __servant->updateSysMsgId(uid, sysMsgId, __current);
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
IceDelegateD::AliIM::IARCacheService::updateUserDataInfo(const ::std::string& uid, const ::AliIM::ARUSERCONTROLINFO& controlInfo, ::Ice::Int onlineTime, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IARCacheService__updateUserDataInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IARCacheService* __servant = dynamic_cast< ::AliIM::IARCacheService*>(__direct.servant().get());
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
                __ret = __servant->updateUserDataInfo(uid, controlInfo, onlineTime, __current);
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
IceDelegateD::AliIM::IARCacheService::getUserInfo2(const ::std::string& uid, ::AliIM::ARUSERINFO2& userInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IARCacheService__getUserInfo2_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IARCacheService* __servant = dynamic_cast< ::AliIM::IARCacheService*>(__direct.servant().get());
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
                __ret = __servant->getUserInfo2(uid, userInfo, __current);
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
IceDelegateD::AliIM::IARCacheService::updateUserDataInfo2(const ::std::string& uid, const ::AliIM::ARUSERCONTROLINFO2& controlInfo, ::Ice::Int onlineTime, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__IARCacheService__updateUserDataInfo2_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::IARCacheService* __servant = dynamic_cast< ::AliIM::IARCacheService*>(__direct.servant().get());
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
                __ret = __servant->updateUserDataInfo2(uid, controlInfo, onlineTime, __current);
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
AliIM::IARCacheService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __AliIM__IARCacheService_ids[2] =
{
    "::AliIM::IARCacheService",
    "::Ice::Object"
};

bool
AliIM::IARCacheService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__AliIM__IARCacheService_ids, __AliIM__IARCacheService_ids + 2, _s);
}

::std::vector< ::std::string>
AliIM::IARCacheService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__AliIM__IARCacheService_ids[0], &__AliIM__IARCacheService_ids[2]);
}

const ::std::string&
AliIM::IARCacheService::ice_id(const ::Ice::Current&) const
{
    return __AliIM__IARCacheService_ids[0];
}

const ::std::string&
AliIM::IARCacheService::ice_staticId()
{
    return __AliIM__IARCacheService_ids[0];
}

::IceInternal::DispatchStatus
AliIM::IARCacheService::___getUserInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::AliIM::ARUSERINFO userInfo;
    ::Ice::Int __ret = getUserInfo(uid, userInfo, __current);
    userInfo.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IARCacheService::___updateUserLoginEx(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::Ice::Int sysMsgId;
    ::std::string loginIp;
    __is->read(uid);
    __is->read(sysMsgId);
    __is->read(loginIp);
    ::Ice::Int __ret = updateUserLoginEx(uid, sysMsgId, loginIp, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IARCacheService::___updateUserLoginEx2(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::Ice::Int sysMsgId;
    ::std::string loginIp;
    __is->read(uid);
    __is->read(sysMsgId);
    __is->read(loginIp);
    ::Ice::Int __ret = updateUserLoginEx2(uid, sysMsgId, loginIp, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IARCacheService::___updateUserLastLoginTime(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::Ice::Int lastLoginTime;
    __is->read(uid);
    __is->read(lastLoginTime);
    ::Ice::Int __ret = updateUserLastLoginTime(uid, lastLoginTime, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IARCacheService::___updateSysMsgId(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::Ice::Int sysMsgId;
    __is->read(uid);
    __is->read(sysMsgId);
    ::Ice::Int __ret = updateSysMsgId(uid, sysMsgId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IARCacheService::___updateUserDataInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::AliIM::ARUSERCONTROLINFO controlInfo;
    ::Ice::Int onlineTime;
    __is->read(uid);
    controlInfo.__read(__is);
    __is->read(onlineTime);
    ::Ice::Int __ret = updateUserDataInfo(uid, controlInfo, onlineTime, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IARCacheService::___getUserInfo2(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::AliIM::ARUSERINFO2 userInfo;
    ::Ice::Int __ret = getUserInfo2(uid, userInfo, __current);
    userInfo.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::IARCacheService::___updateUserDataInfo2(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::AliIM::ARUSERCONTROLINFO2 controlInfo;
    ::Ice::Int onlineTime;
    __is->read(uid);
    controlInfo.__read(__is);
    __is->read(onlineTime);
    ::Ice::Int __ret = updateUserDataInfo2(uid, controlInfo, onlineTime, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __AliIM__IARCacheService_all[] =
{
    "getUserInfo",
    "getUserInfo2",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "updateSysMsgId",
    "updateUserDataInfo",
    "updateUserDataInfo2",
    "updateUserLastLoginTime",
    "updateUserLoginEx",
    "updateUserLoginEx2"
};

::IceInternal::DispatchStatus
AliIM::IARCacheService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__AliIM__IARCacheService_all, __AliIM__IARCacheService_all + 12, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __AliIM__IARCacheService_all)
    {
        case 0:
        {
            return ___getUserInfo(in, current);
        }
        case 1:
        {
            return ___getUserInfo2(in, current);
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
        case 6:
        {
            return ___updateSysMsgId(in, current);
        }
        case 7:
        {
            return ___updateUserDataInfo(in, current);
        }
        case 8:
        {
            return ___updateUserDataInfo2(in, current);
        }
        case 9:
        {
            return ___updateUserLastLoginTime(in, current);
        }
        case 10:
        {
            return ___updateUserLoginEx(in, current);
        }
        case 11:
        {
            return ___updateUserLoginEx2(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
AliIM::IARCacheService::__write(::IceInternal::BasicStream* __os) const
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
AliIM::IARCacheService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
AliIM::IARCacheService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIM::IARCacheService was not generated with stream support";
    throw ex;
}

void
AliIM::IARCacheService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIM::IARCacheService was not generated with stream support";
    throw ex;
}

void 
AliIM::__patch__IARCacheServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::AliIM::IARCacheServicePtr* p = static_cast< ::AliIM::IARCacheServicePtr*>(__addr);
    assert(p);
    *p = ::AliIM::IARCacheServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::AliIM::IARCacheService::ice_staticId();
        throw e;
    }
}

bool
AliIM::operator==(const ::AliIM::IARCacheService& l, const ::AliIM::IARCacheService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator!=(const ::AliIM::IARCacheService& l, const ::AliIM::IARCacheService& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator<(const ::AliIM::IARCacheService& l, const ::AliIM::IARCacheService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator<=(const ::AliIM::IARCacheService& l, const ::AliIM::IARCacheService& r)
{
    return l < r || l == r;
}

bool
AliIM::operator>(const ::AliIM::IARCacheService& l, const ::AliIM::IARCacheService& r)
{
    return !(l < r) && !(l == r);
}

bool
AliIM::operator>=(const ::AliIM::IARCacheService& l, const ::AliIM::IARCacheService& r)
{
    return !(l < r);
}
