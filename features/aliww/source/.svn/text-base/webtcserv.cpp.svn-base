// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `webtcserv.ice'

#include <webtcserv.h>
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

static const ::std::string __WebTribeCacheService__WebTCSrvMgr__GetUserTribe_name = "GetUserTribe";

static const ::std::string __WebTribeCacheService__WebTCSrvMgr__AddUserTribes_name = "AddUserTribes";

static const ::std::string __WebTribeCacheService__WebTCSrvMgr__AddUserTribe_name = "AddUserTribe";

static const ::std::string __WebTribeCacheService__WebTCSrvMgr__DelUserTribe_name = "DelUserTribe";

static const ::std::string __WebTribeCacheService__WebTCSrvMgr__ChgUserTribe_name = "ChgUserTribe";

static const ::std::string __WebTribeCacheService__WebTCSrvMgr__UpdateTribe_name = "UpdateTribe";

static const ::std::string __WebTribeCacheService__WebTCSrvMgr__RemoveTribe_name = "RemoveTribe";

static const ::std::string __WebTribeCacheService__WebTCSrvMgr__AddWebTribeGroup_name = "AddWebTribeGroup";

static const ::std::string __WebTribeCacheService__WebTCSrvMgr__ChgWebTribeGroupName_name = "ChgWebTribeGroupName";

static const ::std::string __WebTribeCacheService__WebTCSrvMgr__DelWebTribeGroup_name = "DelWebTribeGroup";

static const ::std::string __WebTribeCacheService__WebTCSrvMgr__GetWebTribeGroup_name = "GetWebTribeGroup";

static const ::std::string __WebTribeCacheService__WebTCSrvMgr__GetServiceWebGroup_name = "GetServiceWebGroup";

static const ::std::string __WebTribeCacheService__WebTCSrvMgr__GetUserWebGroup_name = "GetUserWebGroup";

void
IceInternal::incRef(::WebTribeCacheService::WebTCSrvMgr* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::WebTribeCacheService::WebTCSrvMgr* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::WebTribeCacheService::WebTCSrvMgr* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::WebTribeCacheService::WebTCSrvMgr* p)
{
    p->__decRef();
}

void
WebTribeCacheService::__write(::IceInternal::BasicStream* __os, const ::WebTribeCacheService::WebTCSrvMgrPrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
WebTribeCacheService::__read(::IceInternal::BasicStream* __is, ::WebTribeCacheService::WebTCSrvMgrPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::WebTribeCacheService::WebTCSrvMgr;
        v->__copyFrom(proxy);
    }
}

void
WebTribeCacheService::__write(::IceInternal::BasicStream* __os, const ::WebTribeCacheService::WebTCSrvMgrPtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

bool
WebTribeCacheService::SWebTribeInfo::operator==(const SWebTribeInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
WebTribeCacheService::SWebTribeInfo::operator!=(const SWebTribeInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeId != __rhs.tribeId)
    {
        return true;
    }
    if(name != __rhs.name)
    {
        return true;
    }
    if(tribeLevel != __rhs.tribeLevel)
    {
        return true;
    }
    if(tribeStatus != __rhs.tribeStatus)
    {
        return true;
    }
    if(extSign != __rhs.extSign)
    {
        return true;
    }
    if(groupStamp != __rhs.groupStamp)
    {
        return true;
    }
    if(openTribe != __rhs.openTribe)
    {
        return true;
    }
    if(groupId != __rhs.groupId)
    {
        return true;
    }
    return false;
}

bool
WebTribeCacheService::SWebTribeInfo::operator<(const SWebTribeInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeId < __rhs.tribeId)
    {
        return true;
    }
    else if(__rhs.tribeId < tribeId)
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
    if(tribeLevel < __rhs.tribeLevel)
    {
        return true;
    }
    else if(__rhs.tribeLevel < tribeLevel)
    {
        return false;
    }
    if(tribeStatus < __rhs.tribeStatus)
    {
        return true;
    }
    else if(__rhs.tribeStatus < tribeStatus)
    {
        return false;
    }
    if(extSign < __rhs.extSign)
    {
        return true;
    }
    else if(__rhs.extSign < extSign)
    {
        return false;
    }
    if(groupStamp < __rhs.groupStamp)
    {
        return true;
    }
    else if(__rhs.groupStamp < groupStamp)
    {
        return false;
    }
    if(openTribe < __rhs.openTribe)
    {
        return true;
    }
    else if(__rhs.openTribe < openTribe)
    {
        return false;
    }
    if(groupId < __rhs.groupId)
    {
        return true;
    }
    else if(__rhs.groupId < groupId)
    {
        return false;
    }
    return false;
}

void
WebTribeCacheService::SWebTribeInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(tribeId);
    __os->write(name);
    __os->write(tribeLevel);
    __os->write(tribeStatus);
    __os->write(extSign);
    __os->write(groupStamp);
    __os->write(openTribe);
    __os->write(groupId);
}

void
WebTribeCacheService::SWebTribeInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(tribeId);
    __is->read(name);
    __is->read(tribeLevel);
    __is->read(tribeStatus);
    __is->read(extSign);
    __is->read(groupStamp);
    __is->read(openTribe);
    __is->read(groupId);
}

void
WebTribeCacheService::__write(::IceInternal::BasicStream* __os, const ::WebTribeCacheService::SWebTribeInfo* begin, const ::WebTribeCacheService::SWebTribeInfo* end, ::WebTribeCacheService::__U__SWebTribeInfoSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
WebTribeCacheService::__read(::IceInternal::BasicStream* __is, ::WebTribeCacheService::SWebTribeInfoSeq& v, ::WebTribeCacheService::__U__SWebTribeInfoSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 28);
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
WebTribeCacheService::SWebTribeGroup::operator==(const SWebTribeGroup& __rhs) const
{
    return !operator!=(__rhs);
}

bool
WebTribeCacheService::SWebTribeGroup::operator!=(const SWebTribeGroup& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(groupId != __rhs.groupId)
    {
        return true;
    }
    if(groupName != __rhs.groupName)
    {
        return true;
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
    return false;
}

bool
WebTribeCacheService::SWebTribeGroup::operator<(const SWebTribeGroup& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(groupId < __rhs.groupId)
    {
        return true;
    }
    else if(__rhs.groupId < groupId)
    {
        return false;
    }
    if(groupName < __rhs.groupName)
    {
        return true;
    }
    else if(__rhs.groupName < groupName)
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
    return false;
}

void
WebTribeCacheService::SWebTribeGroup::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(groupId);
    __os->write(groupName);
    __os->write(serviceId);
    __os->write(siteId);
    __os->write(webId);
}

void
WebTribeCacheService::SWebTribeGroup::__read(::IceInternal::BasicStream* __is)
{
    __is->read(groupId);
    __is->read(groupName);
    __is->read(serviceId);
    __is->read(siteId);
    __is->read(webId);
}

void
WebTribeCacheService::__write(::IceInternal::BasicStream* __os, const ::WebTribeCacheService::SWebTribeGroup* begin, const ::WebTribeCacheService::SWebTribeGroup* end, ::WebTribeCacheService::__U__SWebTribeGroupSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
WebTribeCacheService::__read(::IceInternal::BasicStream* __is, ::WebTribeCacheService::SWebTribeGroupSeq& v, ::WebTribeCacheService::__U__SWebTribeGroupSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 12);
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
WebTribeCacheService::__addObject(const WebTCSrvMgrPtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
WebTribeCacheService::__usesClasses(const WebTCSrvMgrPtr& p)
{
    return p->__usesClasses();
}

void
WebTribeCacheService::__decRefUnsafe(const WebTCSrvMgrPtr& p)
{
    p->__decRefUnsafe();
}

void
WebTribeCacheService::__clearHandleUnsafe(WebTCSrvMgrPtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::WebTribeCacheService::WebTCSrvMgr::GetUserTribe(const ::std::string& userId, ::WebTribeCacheService::SWebTribeInfoSeq& tribeList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__WebTribeCacheService__WebTCSrvMgr__GetUserTribe_name);
            __delBase = __getDelegate();
            ::IceDelegate::WebTribeCacheService::WebTCSrvMgr* __del = dynamic_cast< ::IceDelegate::WebTribeCacheService::WebTCSrvMgr*>(__delBase.get());
            return __del->GetUserTribe(userId, tribeList, __ctx);
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
IceProxy::WebTribeCacheService::WebTCSrvMgr::AddUserTribes(const ::std::string& userId, const ::WebTribeCacheService::SWebTribeInfoSeq& tribeList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__WebTribeCacheService__WebTCSrvMgr__AddUserTribes_name);
            __delBase = __getDelegate();
            ::IceDelegate::WebTribeCacheService::WebTCSrvMgr* __del = dynamic_cast< ::IceDelegate::WebTribeCacheService::WebTCSrvMgr*>(__delBase.get());
            return __del->AddUserTribes(userId, tribeList, __ctx);
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
IceProxy::WebTribeCacheService::WebTCSrvMgr::AddUserTribe(const ::std::string& userId, const ::WebTribeCacheService::SWebTribeInfo& tribeInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__WebTribeCacheService__WebTCSrvMgr__AddUserTribe_name);
            __delBase = __getDelegate();
            ::IceDelegate::WebTribeCacheService::WebTCSrvMgr* __del = dynamic_cast< ::IceDelegate::WebTribeCacheService::WebTCSrvMgr*>(__delBase.get());
            return __del->AddUserTribe(userId, tribeInfo, __ctx);
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
IceProxy::WebTribeCacheService::WebTCSrvMgr::DelUserTribe(const ::std::string& userId, ::Ice::Long tribeId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__WebTribeCacheService__WebTCSrvMgr__DelUserTribe_name);
            __delBase = __getDelegate();
            ::IceDelegate::WebTribeCacheService::WebTCSrvMgr* __del = dynamic_cast< ::IceDelegate::WebTribeCacheService::WebTCSrvMgr*>(__delBase.get());
            return __del->DelUserTribe(userId, tribeId, __ctx);
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
IceProxy::WebTribeCacheService::WebTCSrvMgr::ChgUserTribe(const ::std::string& userId, const ::WebTribeCacheService::SWebTribeInfo& tribeInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__WebTribeCacheService__WebTCSrvMgr__ChgUserTribe_name);
            __delBase = __getDelegate();
            ::IceDelegate::WebTribeCacheService::WebTCSrvMgr* __del = dynamic_cast< ::IceDelegate::WebTribeCacheService::WebTCSrvMgr*>(__delBase.get());
            return __del->ChgUserTribe(userId, tribeInfo, __ctx);
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
IceProxy::WebTribeCacheService::WebTCSrvMgr::UpdateTribe(const ::WebTribeCacheService::SWebTribeInfo& tribeInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__WebTribeCacheService__WebTCSrvMgr__UpdateTribe_name);
            __delBase = __getDelegate();
            ::IceDelegate::WebTribeCacheService::WebTCSrvMgr* __del = dynamic_cast< ::IceDelegate::WebTribeCacheService::WebTCSrvMgr*>(__delBase.get());
            return __del->UpdateTribe(tribeInfo, __ctx);
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
IceProxy::WebTribeCacheService::WebTCSrvMgr::RemoveTribe(::Ice::Long tribeId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__WebTribeCacheService__WebTCSrvMgr__RemoveTribe_name);
            __delBase = __getDelegate();
            ::IceDelegate::WebTribeCacheService::WebTCSrvMgr* __del = dynamic_cast< ::IceDelegate::WebTribeCacheService::WebTCSrvMgr*>(__delBase.get());
            return __del->RemoveTribe(tribeId, __ctx);
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
IceProxy::WebTribeCacheService::WebTCSrvMgr::AddWebTribeGroup(const ::WebTribeCacheService::SWebTribeGroup& webGroup, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__WebTribeCacheService__WebTCSrvMgr__AddWebTribeGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::WebTribeCacheService::WebTCSrvMgr* __del = dynamic_cast< ::IceDelegate::WebTribeCacheService::WebTCSrvMgr*>(__delBase.get());
            return __del->AddWebTribeGroup(webGroup, __ctx);
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
IceProxy::WebTribeCacheService::WebTCSrvMgr::ChgWebTribeGroupName(::Ice::Long groupId, const ::std::string& groupName, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__WebTribeCacheService__WebTCSrvMgr__ChgWebTribeGroupName_name);
            __delBase = __getDelegate();
            ::IceDelegate::WebTribeCacheService::WebTCSrvMgr* __del = dynamic_cast< ::IceDelegate::WebTribeCacheService::WebTCSrvMgr*>(__delBase.get());
            return __del->ChgWebTribeGroupName(groupId, groupName, __ctx);
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
IceProxy::WebTribeCacheService::WebTCSrvMgr::DelWebTribeGroup(::Ice::Long groupId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__WebTribeCacheService__WebTCSrvMgr__DelWebTribeGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::WebTribeCacheService::WebTCSrvMgr* __del = dynamic_cast< ::IceDelegate::WebTribeCacheService::WebTCSrvMgr*>(__delBase.get());
            return __del->DelWebTribeGroup(groupId, __ctx);
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
IceProxy::WebTribeCacheService::WebTCSrvMgr::GetWebTribeGroup(::Ice::Long groupId, ::WebTribeCacheService::SWebTribeGroup& groupInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__WebTribeCacheService__WebTCSrvMgr__GetWebTribeGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::WebTribeCacheService::WebTCSrvMgr* __del = dynamic_cast< ::IceDelegate::WebTribeCacheService::WebTCSrvMgr*>(__delBase.get());
            return __del->GetWebTribeGroup(groupId, groupInfo, __ctx);
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
IceProxy::WebTribeCacheService::WebTCSrvMgr::GetServiceWebGroup(const ::Ice::StringSeq& webServices, ::WebTribeCacheService::SWebTribeGroupSeq& groupList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__WebTribeCacheService__WebTCSrvMgr__GetServiceWebGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::WebTribeCacheService::WebTCSrvMgr* __del = dynamic_cast< ::IceDelegate::WebTribeCacheService::WebTCSrvMgr*>(__delBase.get());
            return __del->GetServiceWebGroup(webServices, groupList, __ctx);
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
IceProxy::WebTribeCacheService::WebTCSrvMgr::GetUserWebGroup(const ::std::string& userId, ::WebTribeCacheService::SWebTribeGroupSeq& groupList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__WebTribeCacheService__WebTCSrvMgr__GetUserWebGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::WebTribeCacheService::WebTCSrvMgr* __del = dynamic_cast< ::IceDelegate::WebTribeCacheService::WebTCSrvMgr*>(__delBase.get());
            return __del->GetUserWebGroup(userId, groupList, __ctx);
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
IceProxy::WebTribeCacheService::WebTCSrvMgr::ice_staticId()
{
    return ::WebTribeCacheService::WebTCSrvMgr::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::WebTribeCacheService::WebTCSrvMgr::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::WebTribeCacheService::WebTCSrvMgr);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::WebTribeCacheService::WebTCSrvMgr::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::WebTribeCacheService::WebTCSrvMgr);
}

bool
IceProxy::WebTribeCacheService::operator==(const ::IceProxy::WebTribeCacheService::WebTCSrvMgr& l, const ::IceProxy::WebTribeCacheService::WebTCSrvMgr& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::WebTribeCacheService::operator!=(const ::IceProxy::WebTribeCacheService::WebTCSrvMgr& l, const ::IceProxy::WebTribeCacheService::WebTCSrvMgr& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::WebTribeCacheService::operator<(const ::IceProxy::WebTribeCacheService::WebTCSrvMgr& l, const ::IceProxy::WebTribeCacheService::WebTCSrvMgr& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::WebTribeCacheService::operator<=(const ::IceProxy::WebTribeCacheService::WebTCSrvMgr& l, const ::IceProxy::WebTribeCacheService::WebTCSrvMgr& r)
{
    return l < r || l == r;
}

bool
IceProxy::WebTribeCacheService::operator>(const ::IceProxy::WebTribeCacheService::WebTCSrvMgr& l, const ::IceProxy::WebTribeCacheService::WebTCSrvMgr& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::WebTribeCacheService::operator>=(const ::IceProxy::WebTribeCacheService::WebTCSrvMgr& l, const ::IceProxy::WebTribeCacheService::WebTCSrvMgr& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::WebTribeCacheService::WebTCSrvMgr::GetUserTribe(const ::std::string& userId, ::WebTribeCacheService::SWebTribeInfoSeq& tribeList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __WebTribeCacheService__WebTCSrvMgr__GetUserTribe_name, ::Ice::Normal, __context, __compress);
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
        ::WebTribeCacheService::__read(__is, tribeList, ::WebTribeCacheService::__U__SWebTribeInfoSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::WebTribeCacheService::WebTCSrvMgr::AddUserTribes(const ::std::string& userId, const ::WebTribeCacheService::SWebTribeInfoSeq& tribeList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __WebTribeCacheService__WebTCSrvMgr__AddUserTribes_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        if(tribeList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::WebTribeCacheService::__write(__os, &tribeList[0], &tribeList[0] + tribeList.size(), ::WebTribeCacheService::__U__SWebTribeInfoSeq());
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
IceDelegateM::WebTribeCacheService::WebTCSrvMgr::AddUserTribe(const ::std::string& userId, const ::WebTribeCacheService::SWebTribeInfo& tribeInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __WebTribeCacheService__WebTCSrvMgr__AddUserTribe_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        tribeInfo.__write(__os);
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
IceDelegateM::WebTribeCacheService::WebTCSrvMgr::DelUserTribe(const ::std::string& userId, ::Ice::Long tribeId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __WebTribeCacheService__WebTCSrvMgr__DelUserTribe_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::WebTribeCacheService::WebTCSrvMgr::ChgUserTribe(const ::std::string& userId, const ::WebTribeCacheService::SWebTribeInfo& tribeInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __WebTribeCacheService__WebTCSrvMgr__ChgUserTribe_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        tribeInfo.__write(__os);
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
IceDelegateM::WebTribeCacheService::WebTCSrvMgr::UpdateTribe(const ::WebTribeCacheService::SWebTribeInfo& tribeInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __WebTribeCacheService__WebTCSrvMgr__UpdateTribe_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        tribeInfo.__write(__os);
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
IceDelegateM::WebTribeCacheService::WebTCSrvMgr::RemoveTribe(::Ice::Long tribeId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __WebTribeCacheService__WebTCSrvMgr__RemoveTribe_name, ::Ice::Normal, __context, __compress);
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::WebTribeCacheService::WebTCSrvMgr::AddWebTribeGroup(const ::WebTribeCacheService::SWebTribeGroup& webGroup, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __WebTribeCacheService__WebTCSrvMgr__AddWebTribeGroup_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        webGroup.__write(__os);
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
IceDelegateM::WebTribeCacheService::WebTCSrvMgr::ChgWebTribeGroupName(::Ice::Long groupId, const ::std::string& groupName, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __WebTribeCacheService__WebTCSrvMgr__ChgWebTribeGroupName_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(groupId);
        __os->write(groupName);
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
IceDelegateM::WebTribeCacheService::WebTCSrvMgr::DelWebTribeGroup(::Ice::Long groupId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __WebTribeCacheService__WebTCSrvMgr__DelWebTribeGroup_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(groupId);
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
IceDelegateM::WebTribeCacheService::WebTCSrvMgr::GetWebTribeGroup(::Ice::Long groupId, ::WebTribeCacheService::SWebTribeGroup& groupInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __WebTribeCacheService__WebTCSrvMgr__GetWebTribeGroup_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(groupId);
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
        groupInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::WebTribeCacheService::WebTCSrvMgr::GetServiceWebGroup(const ::Ice::StringSeq& webServices, ::WebTribeCacheService::SWebTribeGroupSeq& groupList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __WebTribeCacheService__WebTCSrvMgr__GetServiceWebGroup_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(webServices.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&webServices[0], &webServices[0] + webServices.size());
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
        ::WebTribeCacheService::__read(__is, groupList, ::WebTribeCacheService::__U__SWebTribeGroupSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::WebTribeCacheService::WebTCSrvMgr::GetUserWebGroup(const ::std::string& userId, ::WebTribeCacheService::SWebTribeGroupSeq& groupList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __WebTribeCacheService__WebTCSrvMgr__GetUserWebGroup_name, ::Ice::Normal, __context, __compress);
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
        ::WebTribeCacheService::__read(__is, groupList, ::WebTribeCacheService::__U__SWebTribeGroupSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::WebTribeCacheService::WebTCSrvMgr::GetUserTribe(const ::std::string& userId, ::WebTribeCacheService::SWebTribeInfoSeq& tribeList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __WebTribeCacheService__WebTCSrvMgr__GetUserTribe_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::WebTribeCacheService::WebTCSrvMgr* __servant = dynamic_cast< ::WebTribeCacheService::WebTCSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->GetUserTribe(userId, tribeList, __current);
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
IceDelegateD::WebTribeCacheService::WebTCSrvMgr::AddUserTribes(const ::std::string& userId, const ::WebTribeCacheService::SWebTribeInfoSeq& tribeList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __WebTribeCacheService__WebTCSrvMgr__AddUserTribes_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::WebTribeCacheService::WebTCSrvMgr* __servant = dynamic_cast< ::WebTribeCacheService::WebTCSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->AddUserTribes(userId, tribeList, __current);
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
IceDelegateD::WebTribeCacheService::WebTCSrvMgr::AddUserTribe(const ::std::string& userId, const ::WebTribeCacheService::SWebTribeInfo& tribeInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __WebTribeCacheService__WebTCSrvMgr__AddUserTribe_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::WebTribeCacheService::WebTCSrvMgr* __servant = dynamic_cast< ::WebTribeCacheService::WebTCSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->AddUserTribe(userId, tribeInfo, __current);
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
IceDelegateD::WebTribeCacheService::WebTCSrvMgr::DelUserTribe(const ::std::string& userId, ::Ice::Long tribeId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __WebTribeCacheService__WebTCSrvMgr__DelUserTribe_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::WebTribeCacheService::WebTCSrvMgr* __servant = dynamic_cast< ::WebTribeCacheService::WebTCSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->DelUserTribe(userId, tribeId, __current);
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
IceDelegateD::WebTribeCacheService::WebTCSrvMgr::ChgUserTribe(const ::std::string& userId, const ::WebTribeCacheService::SWebTribeInfo& tribeInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __WebTribeCacheService__WebTCSrvMgr__ChgUserTribe_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::WebTribeCacheService::WebTCSrvMgr* __servant = dynamic_cast< ::WebTribeCacheService::WebTCSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->ChgUserTribe(userId, tribeInfo, __current);
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
IceDelegateD::WebTribeCacheService::WebTCSrvMgr::UpdateTribe(const ::WebTribeCacheService::SWebTribeInfo& tribeInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __WebTribeCacheService__WebTCSrvMgr__UpdateTribe_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::WebTribeCacheService::WebTCSrvMgr* __servant = dynamic_cast< ::WebTribeCacheService::WebTCSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->UpdateTribe(tribeInfo, __current);
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
IceDelegateD::WebTribeCacheService::WebTCSrvMgr::RemoveTribe(::Ice::Long tribeId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __WebTribeCacheService__WebTCSrvMgr__RemoveTribe_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::WebTribeCacheService::WebTCSrvMgr* __servant = dynamic_cast< ::WebTribeCacheService::WebTCSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->RemoveTribe(tribeId, __current);
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
IceDelegateD::WebTribeCacheService::WebTCSrvMgr::AddWebTribeGroup(const ::WebTribeCacheService::SWebTribeGroup& webGroup, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __WebTribeCacheService__WebTCSrvMgr__AddWebTribeGroup_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::WebTribeCacheService::WebTCSrvMgr* __servant = dynamic_cast< ::WebTribeCacheService::WebTCSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->AddWebTribeGroup(webGroup, __current);
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
IceDelegateD::WebTribeCacheService::WebTCSrvMgr::ChgWebTribeGroupName(::Ice::Long groupId, const ::std::string& groupName, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __WebTribeCacheService__WebTCSrvMgr__ChgWebTribeGroupName_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::WebTribeCacheService::WebTCSrvMgr* __servant = dynamic_cast< ::WebTribeCacheService::WebTCSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->ChgWebTribeGroupName(groupId, groupName, __current);
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
IceDelegateD::WebTribeCacheService::WebTCSrvMgr::DelWebTribeGroup(::Ice::Long groupId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __WebTribeCacheService__WebTCSrvMgr__DelWebTribeGroup_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::WebTribeCacheService::WebTCSrvMgr* __servant = dynamic_cast< ::WebTribeCacheService::WebTCSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->DelWebTribeGroup(groupId, __current);
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
IceDelegateD::WebTribeCacheService::WebTCSrvMgr::GetWebTribeGroup(::Ice::Long groupId, ::WebTribeCacheService::SWebTribeGroup& groupInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __WebTribeCacheService__WebTCSrvMgr__GetWebTribeGroup_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::WebTribeCacheService::WebTCSrvMgr* __servant = dynamic_cast< ::WebTribeCacheService::WebTCSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->GetWebTribeGroup(groupId, groupInfo, __current);
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
IceDelegateD::WebTribeCacheService::WebTCSrvMgr::GetServiceWebGroup(const ::Ice::StringSeq& webServices, ::WebTribeCacheService::SWebTribeGroupSeq& groupList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __WebTribeCacheService__WebTCSrvMgr__GetServiceWebGroup_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::WebTribeCacheService::WebTCSrvMgr* __servant = dynamic_cast< ::WebTribeCacheService::WebTCSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->GetServiceWebGroup(webServices, groupList, __current);
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
IceDelegateD::WebTribeCacheService::WebTCSrvMgr::GetUserWebGroup(const ::std::string& userId, ::WebTribeCacheService::SWebTribeGroupSeq& groupList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __WebTribeCacheService__WebTCSrvMgr__GetUserWebGroup_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::WebTribeCacheService::WebTCSrvMgr* __servant = dynamic_cast< ::WebTribeCacheService::WebTCSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->GetUserWebGroup(userId, groupList, __current);
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
WebTribeCacheService::WebTCSrvMgr::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __WebTribeCacheService__WebTCSrvMgr_ids[2] =
{
    "::Ice::Object",
    "::WebTribeCacheService::WebTCSrvMgr"
};

bool
WebTribeCacheService::WebTCSrvMgr::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__WebTribeCacheService__WebTCSrvMgr_ids, __WebTribeCacheService__WebTCSrvMgr_ids + 2, _s);
}

::std::vector< ::std::string>
WebTribeCacheService::WebTCSrvMgr::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__WebTribeCacheService__WebTCSrvMgr_ids[0], &__WebTribeCacheService__WebTCSrvMgr_ids[2]);
}

const ::std::string&
WebTribeCacheService::WebTCSrvMgr::ice_id(const ::Ice::Current&) const
{
    return __WebTribeCacheService__WebTCSrvMgr_ids[1];
}

const ::std::string&
WebTribeCacheService::WebTCSrvMgr::ice_staticId()
{
    return __WebTribeCacheService__WebTCSrvMgr_ids[1];
}

::IceInternal::DispatchStatus
WebTribeCacheService::WebTCSrvMgr::___GetUserTribe(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::WebTribeCacheService::SWebTribeInfoSeq tribeList;
    ::Ice::Int __ret = GetUserTribe(userId, tribeList, __current);
    if(tribeList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::WebTribeCacheService::__write(__os, &tribeList[0], &tribeList[0] + tribeList.size(), ::WebTribeCacheService::__U__SWebTribeInfoSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
WebTribeCacheService::WebTCSrvMgr::___AddUserTribes(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::WebTribeCacheService::SWebTribeInfoSeq tribeList;
    __is->read(userId);
    ::WebTribeCacheService::__read(__is, tribeList, ::WebTribeCacheService::__U__SWebTribeInfoSeq());
    ::Ice::Int __ret = AddUserTribes(userId, tribeList, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
WebTribeCacheService::WebTCSrvMgr::___AddUserTribe(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::WebTribeCacheService::SWebTribeInfo tribeInfo;
    __is->read(userId);
    tribeInfo.__read(__is);
    ::Ice::Int __ret = AddUserTribe(userId, tribeInfo, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
WebTribeCacheService::WebTCSrvMgr::___DelUserTribe(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::Ice::Long tribeId;
    __is->read(userId);
    __is->read(tribeId);
    ::Ice::Int __ret = DelUserTribe(userId, tribeId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
WebTribeCacheService::WebTCSrvMgr::___ChgUserTribe(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::WebTribeCacheService::SWebTribeInfo tribeInfo;
    __is->read(userId);
    tribeInfo.__read(__is);
    ::Ice::Int __ret = ChgUserTribe(userId, tribeInfo, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
WebTribeCacheService::WebTCSrvMgr::___UpdateTribe(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::WebTribeCacheService::SWebTribeInfo tribeInfo;
    tribeInfo.__read(__is);
    ::Ice::Int __ret = UpdateTribe(tribeInfo, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
WebTribeCacheService::WebTCSrvMgr::___RemoveTribe(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Long tribeId;
    __is->read(tribeId);
    ::Ice::Int __ret = RemoveTribe(tribeId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
WebTribeCacheService::WebTCSrvMgr::___AddWebTribeGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::WebTribeCacheService::SWebTribeGroup webGroup;
    webGroup.__read(__is);
    ::Ice::Int __ret = AddWebTribeGroup(webGroup, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
WebTribeCacheService::WebTCSrvMgr::___ChgWebTribeGroupName(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Long groupId;
    ::std::string groupName;
    __is->read(groupId);
    __is->read(groupName);
    ::Ice::Int __ret = ChgWebTribeGroupName(groupId, groupName, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
WebTribeCacheService::WebTCSrvMgr::___DelWebTribeGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Long groupId;
    __is->read(groupId);
    ::Ice::Int __ret = DelWebTribeGroup(groupId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
WebTribeCacheService::WebTCSrvMgr::___GetWebTribeGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Long groupId;
    __is->read(groupId);
    ::WebTribeCacheService::SWebTribeGroup groupInfo;
    ::Ice::Int __ret = GetWebTribeGroup(groupId, groupInfo, __current);
    groupInfo.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
WebTribeCacheService::WebTCSrvMgr::___GetServiceWebGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::StringSeq webServices;
    __is->read(webServices);
    ::WebTribeCacheService::SWebTribeGroupSeq groupList;
    ::Ice::Int __ret = GetServiceWebGroup(webServices, groupList, __current);
    if(groupList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::WebTribeCacheService::__write(__os, &groupList[0], &groupList[0] + groupList.size(), ::WebTribeCacheService::__U__SWebTribeGroupSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
WebTribeCacheService::WebTCSrvMgr::___GetUserWebGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::WebTribeCacheService::SWebTribeGroupSeq groupList;
    ::Ice::Int __ret = GetUserWebGroup(userId, groupList, __current);
    if(groupList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::WebTribeCacheService::__write(__os, &groupList[0], &groupList[0] + groupList.size(), ::WebTribeCacheService::__U__SWebTribeGroupSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __WebTribeCacheService__WebTCSrvMgr_all[] =
{
    "AddUserTribe",
    "AddUserTribes",
    "AddWebTribeGroup",
    "ChgUserTribe",
    "ChgWebTribeGroupName",
    "DelUserTribe",
    "DelWebTribeGroup",
    "GetServiceWebGroup",
    "GetUserTribe",
    "GetUserWebGroup",
    "GetWebTribeGroup",
    "RemoveTribe",
    "UpdateTribe",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::IceInternal::DispatchStatus
WebTribeCacheService::WebTCSrvMgr::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__WebTribeCacheService__WebTCSrvMgr_all, __WebTribeCacheService__WebTCSrvMgr_all + 17, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __WebTribeCacheService__WebTCSrvMgr_all)
    {
        case 0:
        {
            return ___AddUserTribe(in, current);
        }
        case 1:
        {
            return ___AddUserTribes(in, current);
        }
        case 2:
        {
            return ___AddWebTribeGroup(in, current);
        }
        case 3:
        {
            return ___ChgUserTribe(in, current);
        }
        case 4:
        {
            return ___ChgWebTribeGroupName(in, current);
        }
        case 5:
        {
            return ___DelUserTribe(in, current);
        }
        case 6:
        {
            return ___DelWebTribeGroup(in, current);
        }
        case 7:
        {
            return ___GetServiceWebGroup(in, current);
        }
        case 8:
        {
            return ___GetUserTribe(in, current);
        }
        case 9:
        {
            return ___GetUserWebGroup(in, current);
        }
        case 10:
        {
            return ___GetWebTribeGroup(in, current);
        }
        case 11:
        {
            return ___RemoveTribe(in, current);
        }
        case 12:
        {
            return ___UpdateTribe(in, current);
        }
        case 13:
        {
            return ___ice_id(in, current);
        }
        case 14:
        {
            return ___ice_ids(in, current);
        }
        case 15:
        {
            return ___ice_isA(in, current);
        }
        case 16:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
WebTribeCacheService::WebTCSrvMgr::__write(::IceInternal::BasicStream* __os) const
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
WebTribeCacheService::WebTCSrvMgr::__read(::IceInternal::BasicStream* __is, bool __rid)
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
WebTribeCacheService::WebTCSrvMgr::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type WebTribeCacheService::WebTCSrvMgr was not generated with stream support";
    throw ex;
}

void
WebTribeCacheService::WebTCSrvMgr::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type WebTribeCacheService::WebTCSrvMgr was not generated with stream support";
    throw ex;
}

void 
WebTribeCacheService::__patch__WebTCSrvMgrPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::WebTribeCacheService::WebTCSrvMgrPtr* p = static_cast< ::WebTribeCacheService::WebTCSrvMgrPtr*>(__addr);
    assert(p);
    *p = ::WebTribeCacheService::WebTCSrvMgrPtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::WebTribeCacheService::WebTCSrvMgr::ice_staticId();
        throw e;
    }
}

bool
WebTribeCacheService::operator==(const ::WebTribeCacheService::WebTCSrvMgr& l, const ::WebTribeCacheService::WebTCSrvMgr& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
WebTribeCacheService::operator!=(const ::WebTribeCacheService::WebTCSrvMgr& l, const ::WebTribeCacheService::WebTCSrvMgr& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
WebTribeCacheService::operator<(const ::WebTribeCacheService::WebTCSrvMgr& l, const ::WebTribeCacheService::WebTCSrvMgr& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
WebTribeCacheService::operator<=(const ::WebTribeCacheService::WebTCSrvMgr& l, const ::WebTribeCacheService::WebTCSrvMgr& r)
{
    return l < r || l == r;
}

bool
WebTribeCacheService::operator>(const ::WebTribeCacheService::WebTCSrvMgr& l, const ::WebTribeCacheService::WebTCSrvMgr& r)
{
    return !(l < r) && !(l == r);
}

bool
WebTribeCacheService::operator>=(const ::WebTribeCacheService::WebTCSrvMgr& l, const ::WebTribeCacheService::WebTCSrvMgr& r)
{
    return !(l < r);
}
