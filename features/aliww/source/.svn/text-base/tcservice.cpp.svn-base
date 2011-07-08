// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `tcservice.ice'

#include <tcservice.h>
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

static const ::std::string __TribeCacheService__TCSrvMgr__GetUserTribe_name = "GetUserTribe";

static const ::std::string __TribeCacheService__TCSrvMgr__GetUserTribe2_name = "GetUserTribe2";

static const ::std::string __TribeCacheService__TCSrvMgr__AddUserTribes_name = "AddUserTribes";

static const ::std::string __TribeCacheService__TCSrvMgr__AddUserTribes2_name = "AddUserTribes2";

static const ::std::string __TribeCacheService__TCSrvMgr__AddUserTribe_name = "AddUserTribe";

static const ::std::string __TribeCacheService__TCSrvMgr__DelUserTribe_name = "DelUserTribe";

static const ::std::string __TribeCacheService__TCSrvMgr__ChgUserTribe_name = "ChgUserTribe";

static const ::std::string __TribeCacheService__TCSrvMgr__ChgUserTribe2_name = "ChgUserTribe2";

static const ::std::string __TribeCacheService__TCSrvMgr__GetOffMngMsg_name = "GetOffMngMsg";

static const ::std::string __TribeCacheService__TCSrvMgr__AddOffMngMsg_name = "AddOffMngMsg";

static const ::std::string __TribeCacheService__TCSrvMgr__AddMsgList_name = "AddMsgList";

static const ::std::string __TribeCacheService__TCSrvMgr__UpdateTribe_name = "UpdateTribe";

static const ::std::string __TribeCacheService__TCSrvMgr__RemoveTribe_name = "RemoveTribe";

static const ::std::string __TribeCacheService__TCSrvMgr__GetOfflineMsg_name = "GetOfflineMsg";

void
IceInternal::incRef(::TribeCacheService::TCSrvMgr* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::TribeCacheService::TCSrvMgr* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::TribeCacheService::TCSrvMgr* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::TribeCacheService::TCSrvMgr* p)
{
    p->__decRef();
}

void
TribeCacheService::__write(::IceInternal::BasicStream* __os, const ::TribeCacheService::TCSrvMgrPrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
TribeCacheService::__read(::IceInternal::BasicStream* __is, ::TribeCacheService::TCSrvMgrPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::TribeCacheService::TCSrvMgr;
        v->__copyFrom(proxy);
    }
}

void
TribeCacheService::__write(::IceInternal::BasicStream* __os, const ::TribeCacheService::TCSrvMgrPtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

bool
TribeCacheService::STribeInfo::operator==(const STribeInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
TribeCacheService::STribeInfo::operator!=(const STribeInfo& __rhs) const
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
    return false;
}

bool
TribeCacheService::STribeInfo::operator<(const STribeInfo& __rhs) const
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
    return false;
}

void
TribeCacheService::STribeInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(tribeId);
    __os->write(name);
    __os->write(tribeLevel);
    __os->write(tribeStatus);
    __os->write(extSign);
    __os->write(groupStamp);
    __os->write(openTribe);
}

void
TribeCacheService::STribeInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(tribeId);
    __is->read(name);
    __is->read(tribeLevel);
    __is->read(tribeStatus);
    __is->read(extSign);
    __is->read(groupStamp);
    __is->read(openTribe);
}

void
TribeCacheService::__write(::IceInternal::BasicStream* __os, const ::TribeCacheService::STribeInfo* begin, const ::TribeCacheService::STribeInfo* end, ::TribeCacheService::__U__STribeInfoSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
TribeCacheService::__read(::IceInternal::BasicStream* __is, ::TribeCacheService::STribeInfoSeq& v, ::TribeCacheService::__U__STribeInfoSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 20);
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
TribeCacheService::STribeInfo2::operator==(const STribeInfo2& __rhs) const
{
    return !operator!=(__rhs);
}

bool
TribeCacheService::STribeInfo2::operator!=(const STribeInfo2& __rhs) const
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
    if(popupFlag != __rhs.popupFlag)
    {
        return true;
    }
    return false;
}

bool
TribeCacheService::STribeInfo2::operator<(const STribeInfo2& __rhs) const
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
    if(popupFlag < __rhs.popupFlag)
    {
        return true;
    }
    else if(__rhs.popupFlag < popupFlag)
    {
        return false;
    }
    return false;
}

void
TribeCacheService::STribeInfo2::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(tribeId);
    __os->write(name);
    __os->write(tribeLevel);
    __os->write(tribeStatus);
    __os->write(extSign);
    __os->write(groupStamp);
    __os->write(openTribe);
    __os->write(popupFlag);
}

void
TribeCacheService::STribeInfo2::__read(::IceInternal::BasicStream* __is)
{
    __is->read(tribeId);
    __is->read(name);
    __is->read(tribeLevel);
    __is->read(tribeStatus);
    __is->read(extSign);
    __is->read(groupStamp);
    __is->read(openTribe);
    __is->read(popupFlag);
}

void
TribeCacheService::__write(::IceInternal::BasicStream* __os, const ::TribeCacheService::STribeInfo2* begin, const ::TribeCacheService::STribeInfo2* end, ::TribeCacheService::__U__STribeInfoSeq2)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
TribeCacheService::__read(::IceInternal::BasicStream* __is, ::TribeCacheService::STribeInfoSeq2& v, ::TribeCacheService::__U__STribeInfoSeq2)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 22);
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
TribeCacheService::STribeOffMngMsg::operator==(const STribeOffMngMsg& __rhs) const
{
    return !operator!=(__rhs);
}

bool
TribeCacheService::STribeOffMngMsg::operator!=(const STribeOffMngMsg& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeId != __rhs.tribeId)
    {
        return true;
    }
    if(memberId != __rhs.memberId)
    {
        return true;
    }
    if(type != __rhs.type)
    {
        return true;
    }
    if(message != __rhs.message)
    {
        return true;
    }
    if(sendTime != __rhs.sendTime)
    {
        return true;
    }
    return false;
}

bool
TribeCacheService::STribeOffMngMsg::operator<(const STribeOffMngMsg& __rhs) const
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
    if(memberId < __rhs.memberId)
    {
        return true;
    }
    else if(__rhs.memberId < memberId)
    {
        return false;
    }
    if(type < __rhs.type)
    {
        return true;
    }
    else if(__rhs.type < type)
    {
        return false;
    }
    if(message < __rhs.message)
    {
        return true;
    }
    else if(__rhs.message < message)
    {
        return false;
    }
    if(sendTime < __rhs.sendTime)
    {
        return true;
    }
    else if(__rhs.sendTime < sendTime)
    {
        return false;
    }
    return false;
}

void
TribeCacheService::STribeOffMngMsg::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(tribeId);
    __os->write(memberId);
    __os->write(type);
    __os->write(message);
    __os->write(sendTime);
}

void
TribeCacheService::STribeOffMngMsg::__read(::IceInternal::BasicStream* __is)
{
    __is->read(tribeId);
    __is->read(memberId);
    __is->read(type);
    __is->read(message);
    __is->read(sendTime);
}

void
TribeCacheService::__write(::IceInternal::BasicStream* __os, const ::TribeCacheService::STribeOffMngMsg* begin, const ::TribeCacheService::STribeOffMngMsg* end, ::TribeCacheService::__U__STribeOffMngMsgSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
TribeCacheService::__read(::IceInternal::BasicStream* __is, ::TribeCacheService::STribeOffMngMsgSeq& v, ::TribeCacheService::__U__STribeOffMngMsgSeq)
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
TribeCacheService::__addObject(const TCSrvMgrPtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
TribeCacheService::__usesClasses(const TCSrvMgrPtr& p)
{
    return p->__usesClasses();
}

void
TribeCacheService::__decRefUnsafe(const TCSrvMgrPtr& p)
{
    p->__decRefUnsafe();
}

void
TribeCacheService::__clearHandleUnsafe(TCSrvMgrPtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::TribeCacheService::TCSrvMgr::GetUserTribe(const ::std::string& userId, ::TribeCacheService::STribeInfoSeq& tribeList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__TribeCacheService__TCSrvMgr__GetUserTribe_name);
            __delBase = __getDelegate();
            ::IceDelegate::TribeCacheService::TCSrvMgr* __del = dynamic_cast< ::IceDelegate::TribeCacheService::TCSrvMgr*>(__delBase.get());
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
IceProxy::TribeCacheService::TCSrvMgr::GetUserTribe2(const ::std::string& userId, ::TribeCacheService::STribeInfoSeq2& tribeList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__TribeCacheService__TCSrvMgr__GetUserTribe2_name);
            __delBase = __getDelegate();
            ::IceDelegate::TribeCacheService::TCSrvMgr* __del = dynamic_cast< ::IceDelegate::TribeCacheService::TCSrvMgr*>(__delBase.get());
            return __del->GetUserTribe2(userId, tribeList, __ctx);
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
IceProxy::TribeCacheService::TCSrvMgr::AddUserTribes(const ::std::string& userId, const ::TribeCacheService::STribeInfoSeq& tribeList, const ::TribeCacheService::STribeOffMngMsgSeq& offMngMsg, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__TribeCacheService__TCSrvMgr__AddUserTribes_name);
            __delBase = __getDelegate();
            ::IceDelegate::TribeCacheService::TCSrvMgr* __del = dynamic_cast< ::IceDelegate::TribeCacheService::TCSrvMgr*>(__delBase.get());
            return __del->AddUserTribes(userId, tribeList, offMngMsg, __ctx);
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
IceProxy::TribeCacheService::TCSrvMgr::AddUserTribes2(const ::std::string& userId, const ::TribeCacheService::STribeInfoSeq2& tribeList, const ::TribeCacheService::STribeOffMngMsgSeq& offMngMsg, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__TribeCacheService__TCSrvMgr__AddUserTribes2_name);
            __delBase = __getDelegate();
            ::IceDelegate::TribeCacheService::TCSrvMgr* __del = dynamic_cast< ::IceDelegate::TribeCacheService::TCSrvMgr*>(__delBase.get());
            return __del->AddUserTribes2(userId, tribeList, offMngMsg, __ctx);
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
IceProxy::TribeCacheService::TCSrvMgr::AddUserTribe(const ::std::string& userId, const ::TribeCacheService::STribeInfo& tribeInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__TribeCacheService__TCSrvMgr__AddUserTribe_name);
            __delBase = __getDelegate();
            ::IceDelegate::TribeCacheService::TCSrvMgr* __del = dynamic_cast< ::IceDelegate::TribeCacheService::TCSrvMgr*>(__delBase.get());
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
IceProxy::TribeCacheService::TCSrvMgr::DelUserTribe(const ::std::string& userId, ::Ice::Long tribeId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__TribeCacheService__TCSrvMgr__DelUserTribe_name);
            __delBase = __getDelegate();
            ::IceDelegate::TribeCacheService::TCSrvMgr* __del = dynamic_cast< ::IceDelegate::TribeCacheService::TCSrvMgr*>(__delBase.get());
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
IceProxy::TribeCacheService::TCSrvMgr::ChgUserTribe(const ::std::string& userId, const ::TribeCacheService::STribeInfo& tribeInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__TribeCacheService__TCSrvMgr__ChgUserTribe_name);
            __delBase = __getDelegate();
            ::IceDelegate::TribeCacheService::TCSrvMgr* __del = dynamic_cast< ::IceDelegate::TribeCacheService::TCSrvMgr*>(__delBase.get());
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
IceProxy::TribeCacheService::TCSrvMgr::ChgUserTribe2(const ::std::string& userId, const ::TribeCacheService::STribeInfo2& tribeInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__TribeCacheService__TCSrvMgr__ChgUserTribe2_name);
            __delBase = __getDelegate();
            ::IceDelegate::TribeCacheService::TCSrvMgr* __del = dynamic_cast< ::IceDelegate::TribeCacheService::TCSrvMgr*>(__delBase.get());
            return __del->ChgUserTribe2(userId, tribeInfo, __ctx);
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
IceProxy::TribeCacheService::TCSrvMgr::GetOffMngMsg(const ::std::string& userId, ::Ice::Long tribeId, ::TribeCacheService::STribeOffMngMsgSeq& offMngMsgList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__TribeCacheService__TCSrvMgr__GetOffMngMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::TribeCacheService::TCSrvMgr* __del = dynamic_cast< ::IceDelegate::TribeCacheService::TCSrvMgr*>(__delBase.get());
            return __del->GetOffMngMsg(userId, tribeId, offMngMsgList, __ctx);
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
IceProxy::TribeCacheService::TCSrvMgr::AddOffMngMsg(const ::std::string& userId, const ::TribeCacheService::STribeOffMngMsg& offMngMsg, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__TribeCacheService__TCSrvMgr__AddOffMngMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::TribeCacheService::TCSrvMgr* __del = dynamic_cast< ::IceDelegate::TribeCacheService::TCSrvMgr*>(__delBase.get());
            return __del->AddOffMngMsg(userId, offMngMsg, __ctx);
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
IceProxy::TribeCacheService::TCSrvMgr::AddMsgList(const ::std::string& userId, const ::TribeCacheService::STribeOffMngMsgSeq& msgList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__TribeCacheService__TCSrvMgr__AddMsgList_name);
            __delBase = __getDelegate();
            ::IceDelegate::TribeCacheService::TCSrvMgr* __del = dynamic_cast< ::IceDelegate::TribeCacheService::TCSrvMgr*>(__delBase.get());
            return __del->AddMsgList(userId, msgList, __ctx);
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
IceProxy::TribeCacheService::TCSrvMgr::UpdateTribe(const ::TribeCacheService::STribeInfo& tribeInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__TribeCacheService__TCSrvMgr__UpdateTribe_name);
            __delBase = __getDelegate();
            ::IceDelegate::TribeCacheService::TCSrvMgr* __del = dynamic_cast< ::IceDelegate::TribeCacheService::TCSrvMgr*>(__delBase.get());
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
IceProxy::TribeCacheService::TCSrvMgr::RemoveTribe(::Ice::Long tribeId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__TribeCacheService__TCSrvMgr__RemoveTribe_name);
            __delBase = __getDelegate();
            ::IceDelegate::TribeCacheService::TCSrvMgr* __del = dynamic_cast< ::IceDelegate::TribeCacheService::TCSrvMgr*>(__delBase.get());
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
IceProxy::TribeCacheService::TCSrvMgr::GetOfflineMsg(const ::std::string& userId, ::TribeCacheService::STribeOffMngMsgSeq& offMngMsgList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__TribeCacheService__TCSrvMgr__GetOfflineMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::TribeCacheService::TCSrvMgr* __del = dynamic_cast< ::IceDelegate::TribeCacheService::TCSrvMgr*>(__delBase.get());
            return __del->GetOfflineMsg(userId, offMngMsgList, __ctx);
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
IceProxy::TribeCacheService::TCSrvMgr::ice_staticId()
{
    return ::TribeCacheService::TCSrvMgr::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::TribeCacheService::TCSrvMgr::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::TribeCacheService::TCSrvMgr);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::TribeCacheService::TCSrvMgr::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::TribeCacheService::TCSrvMgr);
}

bool
IceProxy::TribeCacheService::operator==(const ::IceProxy::TribeCacheService::TCSrvMgr& l, const ::IceProxy::TribeCacheService::TCSrvMgr& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::TribeCacheService::operator!=(const ::IceProxy::TribeCacheService::TCSrvMgr& l, const ::IceProxy::TribeCacheService::TCSrvMgr& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::TribeCacheService::operator<(const ::IceProxy::TribeCacheService::TCSrvMgr& l, const ::IceProxy::TribeCacheService::TCSrvMgr& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::TribeCacheService::operator<=(const ::IceProxy::TribeCacheService::TCSrvMgr& l, const ::IceProxy::TribeCacheService::TCSrvMgr& r)
{
    return l < r || l == r;
}

bool
IceProxy::TribeCacheService::operator>(const ::IceProxy::TribeCacheService::TCSrvMgr& l, const ::IceProxy::TribeCacheService::TCSrvMgr& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::TribeCacheService::operator>=(const ::IceProxy::TribeCacheService::TCSrvMgr& l, const ::IceProxy::TribeCacheService::TCSrvMgr& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::TribeCacheService::TCSrvMgr::GetUserTribe(const ::std::string& userId, ::TribeCacheService::STribeInfoSeq& tribeList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __TribeCacheService__TCSrvMgr__GetUserTribe_name, ::Ice::Normal, __context, __compress);
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
        ::TribeCacheService::__read(__is, tribeList, ::TribeCacheService::__U__STribeInfoSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::TribeCacheService::TCSrvMgr::GetUserTribe2(const ::std::string& userId, ::TribeCacheService::STribeInfoSeq2& tribeList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __TribeCacheService__TCSrvMgr__GetUserTribe2_name, ::Ice::Normal, __context, __compress);
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
        ::TribeCacheService::__read(__is, tribeList, ::TribeCacheService::__U__STribeInfoSeq2());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::TribeCacheService::TCSrvMgr::AddUserTribes(const ::std::string& userId, const ::TribeCacheService::STribeInfoSeq& tribeList, const ::TribeCacheService::STribeOffMngMsgSeq& offMngMsg, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __TribeCacheService__TCSrvMgr__AddUserTribes_name, ::Ice::Normal, __context, __compress);
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
            ::TribeCacheService::__write(__os, &tribeList[0], &tribeList[0] + tribeList.size(), ::TribeCacheService::__U__STribeInfoSeq());
        }
        if(offMngMsg.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::TribeCacheService::__write(__os, &offMngMsg[0], &offMngMsg[0] + offMngMsg.size(), ::TribeCacheService::__U__STribeOffMngMsgSeq());
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
IceDelegateM::TribeCacheService::TCSrvMgr::AddUserTribes2(const ::std::string& userId, const ::TribeCacheService::STribeInfoSeq2& tribeList, const ::TribeCacheService::STribeOffMngMsgSeq& offMngMsg, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __TribeCacheService__TCSrvMgr__AddUserTribes2_name, ::Ice::Normal, __context, __compress);
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
            ::TribeCacheService::__write(__os, &tribeList[0], &tribeList[0] + tribeList.size(), ::TribeCacheService::__U__STribeInfoSeq2());
        }
        if(offMngMsg.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::TribeCacheService::__write(__os, &offMngMsg[0], &offMngMsg[0] + offMngMsg.size(), ::TribeCacheService::__U__STribeOffMngMsgSeq());
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
IceDelegateM::TribeCacheService::TCSrvMgr::AddUserTribe(const ::std::string& userId, const ::TribeCacheService::STribeInfo& tribeInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __TribeCacheService__TCSrvMgr__AddUserTribe_name, ::Ice::Normal, __context, __compress);
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
IceDelegateM::TribeCacheService::TCSrvMgr::DelUserTribe(const ::std::string& userId, ::Ice::Long tribeId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __TribeCacheService__TCSrvMgr__DelUserTribe_name, ::Ice::Normal, __context, __compress);
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
IceDelegateM::TribeCacheService::TCSrvMgr::ChgUserTribe(const ::std::string& userId, const ::TribeCacheService::STribeInfo& tribeInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __TribeCacheService__TCSrvMgr__ChgUserTribe_name, ::Ice::Normal, __context, __compress);
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
IceDelegateM::TribeCacheService::TCSrvMgr::ChgUserTribe2(const ::std::string& userId, const ::TribeCacheService::STribeInfo2& tribeInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __TribeCacheService__TCSrvMgr__ChgUserTribe2_name, ::Ice::Normal, __context, __compress);
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
IceDelegateM::TribeCacheService::TCSrvMgr::GetOffMngMsg(const ::std::string& userId, ::Ice::Long tribeId, ::TribeCacheService::STribeOffMngMsgSeq& offMngMsgList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __TribeCacheService__TCSrvMgr__GetOffMngMsg_name, ::Ice::Normal, __context, __compress);
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
        ::TribeCacheService::__read(__is, offMngMsgList, ::TribeCacheService::__U__STribeOffMngMsgSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::TribeCacheService::TCSrvMgr::AddOffMngMsg(const ::std::string& userId, const ::TribeCacheService::STribeOffMngMsg& offMngMsg, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __TribeCacheService__TCSrvMgr__AddOffMngMsg_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        offMngMsg.__write(__os);
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
IceDelegateM::TribeCacheService::TCSrvMgr::AddMsgList(const ::std::string& userId, const ::TribeCacheService::STribeOffMngMsgSeq& msgList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __TribeCacheService__TCSrvMgr__AddMsgList_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        if(msgList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::TribeCacheService::__write(__os, &msgList[0], &msgList[0] + msgList.size(), ::TribeCacheService::__U__STribeOffMngMsgSeq());
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
IceDelegateM::TribeCacheService::TCSrvMgr::UpdateTribe(const ::TribeCacheService::STribeInfo& tribeInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __TribeCacheService__TCSrvMgr__UpdateTribe_name, ::Ice::Normal, __context, __compress);
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
IceDelegateM::TribeCacheService::TCSrvMgr::RemoveTribe(::Ice::Long tribeId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __TribeCacheService__TCSrvMgr__RemoveTribe_name, ::Ice::Normal, __context, __compress);
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
IceDelegateM::TribeCacheService::TCSrvMgr::GetOfflineMsg(const ::std::string& userId, ::TribeCacheService::STribeOffMngMsgSeq& offMngMsgList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __TribeCacheService__TCSrvMgr__GetOfflineMsg_name, ::Ice::Normal, __context, __compress);
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
        ::TribeCacheService::__read(__is, offMngMsgList, ::TribeCacheService::__U__STribeOffMngMsgSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::TribeCacheService::TCSrvMgr::GetUserTribe(const ::std::string& userId, ::TribeCacheService::STribeInfoSeq& tribeList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __TribeCacheService__TCSrvMgr__GetUserTribe_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::TribeCacheService::TCSrvMgr* __servant = dynamic_cast< ::TribeCacheService::TCSrvMgr*>(__direct.servant().get());
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
IceDelegateD::TribeCacheService::TCSrvMgr::GetUserTribe2(const ::std::string& userId, ::TribeCacheService::STribeInfoSeq2& tribeList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __TribeCacheService__TCSrvMgr__GetUserTribe2_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::TribeCacheService::TCSrvMgr* __servant = dynamic_cast< ::TribeCacheService::TCSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->GetUserTribe2(userId, tribeList, __current);
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
IceDelegateD::TribeCacheService::TCSrvMgr::AddUserTribes(const ::std::string& userId, const ::TribeCacheService::STribeInfoSeq& tribeList, const ::TribeCacheService::STribeOffMngMsgSeq& offMngMsg, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __TribeCacheService__TCSrvMgr__AddUserTribes_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::TribeCacheService::TCSrvMgr* __servant = dynamic_cast< ::TribeCacheService::TCSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->AddUserTribes(userId, tribeList, offMngMsg, __current);
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
IceDelegateD::TribeCacheService::TCSrvMgr::AddUserTribes2(const ::std::string& userId, const ::TribeCacheService::STribeInfoSeq2& tribeList, const ::TribeCacheService::STribeOffMngMsgSeq& offMngMsg, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __TribeCacheService__TCSrvMgr__AddUserTribes2_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::TribeCacheService::TCSrvMgr* __servant = dynamic_cast< ::TribeCacheService::TCSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->AddUserTribes2(userId, tribeList, offMngMsg, __current);
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
IceDelegateD::TribeCacheService::TCSrvMgr::AddUserTribe(const ::std::string& userId, const ::TribeCacheService::STribeInfo& tribeInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __TribeCacheService__TCSrvMgr__AddUserTribe_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::TribeCacheService::TCSrvMgr* __servant = dynamic_cast< ::TribeCacheService::TCSrvMgr*>(__direct.servant().get());
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
IceDelegateD::TribeCacheService::TCSrvMgr::DelUserTribe(const ::std::string& userId, ::Ice::Long tribeId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __TribeCacheService__TCSrvMgr__DelUserTribe_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::TribeCacheService::TCSrvMgr* __servant = dynamic_cast< ::TribeCacheService::TCSrvMgr*>(__direct.servant().get());
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
IceDelegateD::TribeCacheService::TCSrvMgr::ChgUserTribe(const ::std::string& userId, const ::TribeCacheService::STribeInfo& tribeInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __TribeCacheService__TCSrvMgr__ChgUserTribe_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::TribeCacheService::TCSrvMgr* __servant = dynamic_cast< ::TribeCacheService::TCSrvMgr*>(__direct.servant().get());
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
IceDelegateD::TribeCacheService::TCSrvMgr::ChgUserTribe2(const ::std::string& userId, const ::TribeCacheService::STribeInfo2& tribeInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __TribeCacheService__TCSrvMgr__ChgUserTribe2_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::TribeCacheService::TCSrvMgr* __servant = dynamic_cast< ::TribeCacheService::TCSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->ChgUserTribe2(userId, tribeInfo, __current);
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
IceDelegateD::TribeCacheService::TCSrvMgr::GetOffMngMsg(const ::std::string& userId, ::Ice::Long tribeId, ::TribeCacheService::STribeOffMngMsgSeq& offMngMsgList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __TribeCacheService__TCSrvMgr__GetOffMngMsg_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::TribeCacheService::TCSrvMgr* __servant = dynamic_cast< ::TribeCacheService::TCSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->GetOffMngMsg(userId, tribeId, offMngMsgList, __current);
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
IceDelegateD::TribeCacheService::TCSrvMgr::AddOffMngMsg(const ::std::string& userId, const ::TribeCacheService::STribeOffMngMsg& offMngMsg, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __TribeCacheService__TCSrvMgr__AddOffMngMsg_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::TribeCacheService::TCSrvMgr* __servant = dynamic_cast< ::TribeCacheService::TCSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->AddOffMngMsg(userId, offMngMsg, __current);
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
IceDelegateD::TribeCacheService::TCSrvMgr::AddMsgList(const ::std::string& userId, const ::TribeCacheService::STribeOffMngMsgSeq& msgList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __TribeCacheService__TCSrvMgr__AddMsgList_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::TribeCacheService::TCSrvMgr* __servant = dynamic_cast< ::TribeCacheService::TCSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->AddMsgList(userId, msgList, __current);
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
IceDelegateD::TribeCacheService::TCSrvMgr::UpdateTribe(const ::TribeCacheService::STribeInfo& tribeInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __TribeCacheService__TCSrvMgr__UpdateTribe_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::TribeCacheService::TCSrvMgr* __servant = dynamic_cast< ::TribeCacheService::TCSrvMgr*>(__direct.servant().get());
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
IceDelegateD::TribeCacheService::TCSrvMgr::RemoveTribe(::Ice::Long tribeId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __TribeCacheService__TCSrvMgr__RemoveTribe_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::TribeCacheService::TCSrvMgr* __servant = dynamic_cast< ::TribeCacheService::TCSrvMgr*>(__direct.servant().get());
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
IceDelegateD::TribeCacheService::TCSrvMgr::GetOfflineMsg(const ::std::string& userId, ::TribeCacheService::STribeOffMngMsgSeq& offMngMsgList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __TribeCacheService__TCSrvMgr__GetOfflineMsg_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::TribeCacheService::TCSrvMgr* __servant = dynamic_cast< ::TribeCacheService::TCSrvMgr*>(__direct.servant().get());
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
                __ret = __servant->GetOfflineMsg(userId, offMngMsgList, __current);
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
TribeCacheService::TCSrvMgr::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __TribeCacheService__TCSrvMgr_ids[2] =
{
    "::Ice::Object",
    "::TribeCacheService::TCSrvMgr"
};

bool
TribeCacheService::TCSrvMgr::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__TribeCacheService__TCSrvMgr_ids, __TribeCacheService__TCSrvMgr_ids + 2, _s);
}

::std::vector< ::std::string>
TribeCacheService::TCSrvMgr::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__TribeCacheService__TCSrvMgr_ids[0], &__TribeCacheService__TCSrvMgr_ids[2]);
}

const ::std::string&
TribeCacheService::TCSrvMgr::ice_id(const ::Ice::Current&) const
{
    return __TribeCacheService__TCSrvMgr_ids[1];
}

const ::std::string&
TribeCacheService::TCSrvMgr::ice_staticId()
{
    return __TribeCacheService__TCSrvMgr_ids[1];
}

::IceInternal::DispatchStatus
TribeCacheService::TCSrvMgr::___GetUserTribe(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::TribeCacheService::STribeInfoSeq tribeList;
    ::Ice::Int __ret = GetUserTribe(userId, tribeList, __current);
    if(tribeList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::TribeCacheService::__write(__os, &tribeList[0], &tribeList[0] + tribeList.size(), ::TribeCacheService::__U__STribeInfoSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
TribeCacheService::TCSrvMgr::___GetUserTribe2(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::TribeCacheService::STribeInfoSeq2 tribeList;
    ::Ice::Int __ret = GetUserTribe2(userId, tribeList, __current);
    if(tribeList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::TribeCacheService::__write(__os, &tribeList[0], &tribeList[0] + tribeList.size(), ::TribeCacheService::__U__STribeInfoSeq2());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
TribeCacheService::TCSrvMgr::___AddUserTribes(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::TribeCacheService::STribeInfoSeq tribeList;
    ::TribeCacheService::STribeOffMngMsgSeq offMngMsg;
    __is->read(userId);
    ::TribeCacheService::__read(__is, tribeList, ::TribeCacheService::__U__STribeInfoSeq());
    ::TribeCacheService::__read(__is, offMngMsg, ::TribeCacheService::__U__STribeOffMngMsgSeq());
    ::Ice::Int __ret = AddUserTribes(userId, tribeList, offMngMsg, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
TribeCacheService::TCSrvMgr::___AddUserTribes2(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::TribeCacheService::STribeInfoSeq2 tribeList;
    ::TribeCacheService::STribeOffMngMsgSeq offMngMsg;
    __is->read(userId);
    ::TribeCacheService::__read(__is, tribeList, ::TribeCacheService::__U__STribeInfoSeq2());
    ::TribeCacheService::__read(__is, offMngMsg, ::TribeCacheService::__U__STribeOffMngMsgSeq());
    ::Ice::Int __ret = AddUserTribes2(userId, tribeList, offMngMsg, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
TribeCacheService::TCSrvMgr::___AddUserTribe(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::TribeCacheService::STribeInfo tribeInfo;
    __is->read(userId);
    tribeInfo.__read(__is);
    ::Ice::Int __ret = AddUserTribe(userId, tribeInfo, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
TribeCacheService::TCSrvMgr::___DelUserTribe(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
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
TribeCacheService::TCSrvMgr::___ChgUserTribe(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::TribeCacheService::STribeInfo tribeInfo;
    __is->read(userId);
    tribeInfo.__read(__is);
    ::Ice::Int __ret = ChgUserTribe(userId, tribeInfo, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
TribeCacheService::TCSrvMgr::___ChgUserTribe2(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::TribeCacheService::STribeInfo2 tribeInfo;
    __is->read(userId);
    tribeInfo.__read(__is);
    ::Ice::Int __ret = ChgUserTribe2(userId, tribeInfo, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
TribeCacheService::TCSrvMgr::___GetOffMngMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::Ice::Long tribeId;
    __is->read(userId);
    __is->read(tribeId);
    ::TribeCacheService::STribeOffMngMsgSeq offMngMsgList;
    ::Ice::Int __ret = GetOffMngMsg(userId, tribeId, offMngMsgList, __current);
    if(offMngMsgList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::TribeCacheService::__write(__os, &offMngMsgList[0], &offMngMsgList[0] + offMngMsgList.size(), ::TribeCacheService::__U__STribeOffMngMsgSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
TribeCacheService::TCSrvMgr::___AddOffMngMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::TribeCacheService::STribeOffMngMsg offMngMsg;
    __is->read(userId);
    offMngMsg.__read(__is);
    ::Ice::Int __ret = AddOffMngMsg(userId, offMngMsg, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
TribeCacheService::TCSrvMgr::___AddMsgList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::TribeCacheService::STribeOffMngMsgSeq msgList;
    __is->read(userId);
    ::TribeCacheService::__read(__is, msgList, ::TribeCacheService::__U__STribeOffMngMsgSeq());
    ::Ice::Int __ret = AddMsgList(userId, msgList, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
TribeCacheService::TCSrvMgr::___UpdateTribe(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::TribeCacheService::STribeInfo tribeInfo;
    tribeInfo.__read(__is);
    ::Ice::Int __ret = UpdateTribe(tribeInfo, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
TribeCacheService::TCSrvMgr::___RemoveTribe(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
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
TribeCacheService::TCSrvMgr::___GetOfflineMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::TribeCacheService::STribeOffMngMsgSeq offMngMsgList;
    ::Ice::Int __ret = GetOfflineMsg(userId, offMngMsgList, __current);
    if(offMngMsgList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::TribeCacheService::__write(__os, &offMngMsgList[0], &offMngMsgList[0] + offMngMsgList.size(), ::TribeCacheService::__U__STribeOffMngMsgSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __TribeCacheService__TCSrvMgr_all[] =
{
    "AddMsgList",
    "AddOffMngMsg",
    "AddUserTribe",
    "AddUserTribes",
    "AddUserTribes2",
    "ChgUserTribe",
    "ChgUserTribe2",
    "DelUserTribe",
    "GetOffMngMsg",
    "GetOfflineMsg",
    "GetUserTribe",
    "GetUserTribe2",
    "RemoveTribe",
    "UpdateTribe",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::IceInternal::DispatchStatus
TribeCacheService::TCSrvMgr::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__TribeCacheService__TCSrvMgr_all, __TribeCacheService__TCSrvMgr_all + 18, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __TribeCacheService__TCSrvMgr_all)
    {
        case 0:
        {
            return ___AddMsgList(in, current);
        }
        case 1:
        {
            return ___AddOffMngMsg(in, current);
        }
        case 2:
        {
            return ___AddUserTribe(in, current);
        }
        case 3:
        {
            return ___AddUserTribes(in, current);
        }
        case 4:
        {
            return ___AddUserTribes2(in, current);
        }
        case 5:
        {
            return ___ChgUserTribe(in, current);
        }
        case 6:
        {
            return ___ChgUserTribe2(in, current);
        }
        case 7:
        {
            return ___DelUserTribe(in, current);
        }
        case 8:
        {
            return ___GetOffMngMsg(in, current);
        }
        case 9:
        {
            return ___GetOfflineMsg(in, current);
        }
        case 10:
        {
            return ___GetUserTribe(in, current);
        }
        case 11:
        {
            return ___GetUserTribe2(in, current);
        }
        case 12:
        {
            return ___RemoveTribe(in, current);
        }
        case 13:
        {
            return ___UpdateTribe(in, current);
        }
        case 14:
        {
            return ___ice_id(in, current);
        }
        case 15:
        {
            return ___ice_ids(in, current);
        }
        case 16:
        {
            return ___ice_isA(in, current);
        }
        case 17:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
TribeCacheService::TCSrvMgr::__write(::IceInternal::BasicStream* __os) const
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
TribeCacheService::TCSrvMgr::__read(::IceInternal::BasicStream* __is, bool __rid)
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
TribeCacheService::TCSrvMgr::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type TribeCacheService::TCSrvMgr was not generated with stream support";
    throw ex;
}

void
TribeCacheService::TCSrvMgr::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type TribeCacheService::TCSrvMgr was not generated with stream support";
    throw ex;
}

void 
TribeCacheService::__patch__TCSrvMgrPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::TribeCacheService::TCSrvMgrPtr* p = static_cast< ::TribeCacheService::TCSrvMgrPtr*>(__addr);
    assert(p);
    *p = ::TribeCacheService::TCSrvMgrPtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::TribeCacheService::TCSrvMgr::ice_staticId();
        throw e;
    }
}

bool
TribeCacheService::operator==(const ::TribeCacheService::TCSrvMgr& l, const ::TribeCacheService::TCSrvMgr& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
TribeCacheService::operator!=(const ::TribeCacheService::TCSrvMgr& l, const ::TribeCacheService::TCSrvMgr& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
TribeCacheService::operator<(const ::TribeCacheService::TCSrvMgr& l, const ::TribeCacheService::TCSrvMgr& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
TribeCacheService::operator<=(const ::TribeCacheService::TCSrvMgr& l, const ::TribeCacheService::TCSrvMgr& r)
{
    return l < r || l == r;
}

bool
TribeCacheService::operator>(const ::TribeCacheService::TCSrvMgr& l, const ::TribeCacheService::TCSrvMgr& r)
{
    return !(l < r) && !(l == r);
}

bool
TribeCacheService::operator>=(const ::TribeCacheService::TCSrvMgr& l, const ::TribeCacheService::TCSrvMgr& r)
{
    return !(l < r);
}
