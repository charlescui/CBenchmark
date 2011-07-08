// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `recentCnt.ice'

#include <recentCnt.h>
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

static const ::std::string __AliIM__RecentCntService__updateRcnt_name = "updateRcnt";

static const ::std::string __AliIM__RecentCntService__getRcntList_name = "getRcntList";

static const ::std::string __AliIM__RecentCntService__getUserInfo_name = "getUserInfo";

static const ::std::string __AliIM__RecentCntService__getRcntCount_name = "getRcntCount";

void
IceInternal::incRef(::AliIM::RecentCntService* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::AliIM::RecentCntService* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::AliIM::RecentCntService* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::AliIM::RecentCntService* p)
{
    p->__decRef();
}

void
AliIM::__write(::IceInternal::BasicStream* __os, const ::AliIM::RecentCntServicePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
AliIM::__read(::IceInternal::BasicStream* __is, ::AliIM::RecentCntServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::AliIM::RecentCntService;
        v->__copyFrom(proxy);
    }
}

void
AliIM::__write(::IceInternal::BasicStream* __os, const ::AliIM::RecentCntServicePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

void
AliIM::__addObject(const RecentCntServicePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
AliIM::__usesClasses(const RecentCntServicePtr& p)
{
    return p->__usesClasses();
}

void
AliIM::__decRefUnsafe(const RecentCntServicePtr& p)
{
    p->__decRefUnsafe();
}

void
AliIM::__clearHandleUnsafe(RecentCntServicePtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::AliIM::RecentCntService::updateRcnt(const ::std::string& loginId, ::Ice::Int pretimestamp, ::Ice::Int curtimestamp, const ::std::string& pcid, ::Ice::Int ip, const ::AliIM::SICERecentCntSeq& rcntlist, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__RecentCntService__updateRcnt_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::RecentCntService* __del = dynamic_cast< ::IceDelegate::AliIM::RecentCntService*>(__delBase.get());
            return __del->updateRcnt(loginId, pretimestamp, curtimestamp, pcid, ip, rcntlist, __ctx);
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
IceProxy::AliIM::RecentCntService::getRcntList(const ::std::string& loginId, ::Ice::Int num, const ::std::string& orderby, ::AliIM::SICERecentCntSeq& rcntlist, ::Ice::Int& timestamp, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__RecentCntService__getRcntList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::RecentCntService* __del = dynamic_cast< ::IceDelegate::AliIM::RecentCntService*>(__delBase.get());
            return __del->getRcntList(loginId, num, orderby, rcntlist, timestamp, __ctx);
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
IceProxy::AliIM::RecentCntService::getUserInfo(const ::std::string& loginId, ::std::string& pcid, ::Ice::Int& ip, ::Ice::Int& timestamp, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__RecentCntService__getUserInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::RecentCntService* __del = dynamic_cast< ::IceDelegate::AliIM::RecentCntService*>(__delBase.get());
            return __del->getUserInfo(loginId, pcid, ip, timestamp, __ctx);
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
IceProxy::AliIM::RecentCntService::getRcntCount(const ::std::string& loginId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__RecentCntService__getRcntCount_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::RecentCntService* __del = dynamic_cast< ::IceDelegate::AliIM::RecentCntService*>(__delBase.get());
            return __del->getRcntCount(loginId, __ctx);
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
IceProxy::AliIM::RecentCntService::ice_staticId()
{
    return ::AliIM::RecentCntService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::AliIM::RecentCntService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::AliIM::RecentCntService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::AliIM::RecentCntService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::AliIM::RecentCntService);
}

bool
IceProxy::AliIM::operator==(const ::IceProxy::AliIM::RecentCntService& l, const ::IceProxy::AliIM::RecentCntService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator!=(const ::IceProxy::AliIM::RecentCntService& l, const ::IceProxy::AliIM::RecentCntService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator<(const ::IceProxy::AliIM::RecentCntService& l, const ::IceProxy::AliIM::RecentCntService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator<=(const ::IceProxy::AliIM::RecentCntService& l, const ::IceProxy::AliIM::RecentCntService& r)
{
    return l < r || l == r;
}

bool
IceProxy::AliIM::operator>(const ::IceProxy::AliIM::RecentCntService& l, const ::IceProxy::AliIM::RecentCntService& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::AliIM::operator>=(const ::IceProxy::AliIM::RecentCntService& l, const ::IceProxy::AliIM::RecentCntService& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::AliIM::RecentCntService::updateRcnt(const ::std::string& loginId, ::Ice::Int pretimestamp, ::Ice::Int curtimestamp, const ::std::string& pcid, ::Ice::Int ip, const ::AliIM::SICERecentCntSeq& rcntlist, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__RecentCntService__updateRcnt_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(loginId);
        __os->write(pretimestamp);
        __os->write(curtimestamp);
        __os->write(pcid);
        __os->write(ip);
        if(rcntlist.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIM::__write(__os, &rcntlist[0], &rcntlist[0] + rcntlist.size(), ::AliIM::__U__SICERecentCntSeq());
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
IceDelegateM::AliIM::RecentCntService::getRcntList(const ::std::string& loginId, ::Ice::Int num, const ::std::string& orderby, ::AliIM::SICERecentCntSeq& rcntlist, ::Ice::Int& timestamp, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__RecentCntService__getRcntList_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(loginId);
        __os->write(num);
        __os->write(orderby);
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
        ::AliIM::__read(__is, rcntlist, ::AliIM::__U__SICERecentCntSeq());
        __is->read(timestamp);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIM::RecentCntService::getUserInfo(const ::std::string& loginId, ::std::string& pcid, ::Ice::Int& ip, ::Ice::Int& timestamp, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__RecentCntService__getUserInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(loginId);
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
        __is->read(pcid);
        __is->read(ip);
        __is->read(timestamp);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIM::RecentCntService::getRcntCount(const ::std::string& loginId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__RecentCntService__getRcntCount_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(loginId);
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
IceDelegateD::AliIM::RecentCntService::updateRcnt(const ::std::string& loginId, ::Ice::Int pretimestamp, ::Ice::Int curtimestamp, const ::std::string& pcid, ::Ice::Int ip, const ::AliIM::SICERecentCntSeq& rcntlist, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__RecentCntService__updateRcnt_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::RecentCntService* __servant = dynamic_cast< ::AliIM::RecentCntService*>(__direct.servant().get());
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
                __ret = __servant->updateRcnt(loginId, pretimestamp, curtimestamp, pcid, ip, rcntlist, __current);
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
IceDelegateD::AliIM::RecentCntService::getRcntList(const ::std::string& loginId, ::Ice::Int num, const ::std::string& orderby, ::AliIM::SICERecentCntSeq& rcntlist, ::Ice::Int& timestamp, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__RecentCntService__getRcntList_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::RecentCntService* __servant = dynamic_cast< ::AliIM::RecentCntService*>(__direct.servant().get());
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
                __ret = __servant->getRcntList(loginId, num, orderby, rcntlist, timestamp, __current);
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
IceDelegateD::AliIM::RecentCntService::getUserInfo(const ::std::string& loginId, ::std::string& pcid, ::Ice::Int& ip, ::Ice::Int& timestamp, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__RecentCntService__getUserInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::RecentCntService* __servant = dynamic_cast< ::AliIM::RecentCntService*>(__direct.servant().get());
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
                __ret = __servant->getUserInfo(loginId, pcid, ip, timestamp, __current);
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
IceDelegateD::AliIM::RecentCntService::getRcntCount(const ::std::string& loginId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__RecentCntService__getRcntCount_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::RecentCntService* __servant = dynamic_cast< ::AliIM::RecentCntService*>(__direct.servant().get());
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
                __ret = __servant->getRcntCount(loginId, __current);
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
AliIM::RecentCntService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __AliIM__RecentCntService_ids[2] =
{
    "::AliIM::RecentCntService",
    "::Ice::Object"
};

bool
AliIM::RecentCntService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__AliIM__RecentCntService_ids, __AliIM__RecentCntService_ids + 2, _s);
}

::std::vector< ::std::string>
AliIM::RecentCntService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__AliIM__RecentCntService_ids[0], &__AliIM__RecentCntService_ids[2]);
}

const ::std::string&
AliIM::RecentCntService::ice_id(const ::Ice::Current&) const
{
    return __AliIM__RecentCntService_ids[0];
}

const ::std::string&
AliIM::RecentCntService::ice_staticId()
{
    return __AliIM__RecentCntService_ids[0];
}

::IceInternal::DispatchStatus
AliIM::RecentCntService::___updateRcnt(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string loginId;
    ::Ice::Int pretimestamp;
    ::Ice::Int curtimestamp;
    ::std::string pcid;
    ::Ice::Int ip;
    ::AliIM::SICERecentCntSeq rcntlist;
    __is->read(loginId);
    __is->read(pretimestamp);
    __is->read(curtimestamp);
    __is->read(pcid);
    __is->read(ip);
    ::AliIM::__read(__is, rcntlist, ::AliIM::__U__SICERecentCntSeq());
    ::Ice::Int __ret = updateRcnt(loginId, pretimestamp, curtimestamp, pcid, ip, rcntlist, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::RecentCntService::___getRcntList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string loginId;
    ::Ice::Int num;
    ::std::string orderby;
    __is->read(loginId);
    __is->read(num);
    __is->read(orderby);
    ::AliIM::SICERecentCntSeq rcntlist;
    ::Ice::Int timestamp;
    ::Ice::Int __ret = getRcntList(loginId, num, orderby, rcntlist, timestamp, __current);
    if(rcntlist.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::AliIM::__write(__os, &rcntlist[0], &rcntlist[0] + rcntlist.size(), ::AliIM::__U__SICERecentCntSeq());
    }
    __os->write(timestamp);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::RecentCntService::___getUserInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string loginId;
    __is->read(loginId);
    ::std::string pcid;
    ::Ice::Int ip;
    ::Ice::Int timestamp;
    ::Ice::Int __ret = getUserInfo(loginId, pcid, ip, timestamp, __current);
    __os->write(pcid);
    __os->write(ip);
    __os->write(timestamp);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::RecentCntService::___getRcntCount(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string loginId;
    __is->read(loginId);
    ::Ice::Int __ret = getRcntCount(loginId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __AliIM__RecentCntService_all[] =
{
    "getRcntCount",
    "getRcntList",
    "getUserInfo",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "updateRcnt"
};

::IceInternal::DispatchStatus
AliIM::RecentCntService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__AliIM__RecentCntService_all, __AliIM__RecentCntService_all + 8, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __AliIM__RecentCntService_all)
    {
        case 0:
        {
            return ___getRcntCount(in, current);
        }
        case 1:
        {
            return ___getRcntList(in, current);
        }
        case 2:
        {
            return ___getUserInfo(in, current);
        }
        case 3:
        {
            return ___ice_id(in, current);
        }
        case 4:
        {
            return ___ice_ids(in, current);
        }
        case 5:
        {
            return ___ice_isA(in, current);
        }
        case 6:
        {
            return ___ice_ping(in, current);
        }
        case 7:
        {
            return ___updateRcnt(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
AliIM::RecentCntService::__write(::IceInternal::BasicStream* __os) const
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
AliIM::RecentCntService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
AliIM::RecentCntService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIM::RecentCntService was not generated with stream support";
    throw ex;
}

void
AliIM::RecentCntService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIM::RecentCntService was not generated with stream support";
    throw ex;
}

void 
AliIM::__patch__RecentCntServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::AliIM::RecentCntServicePtr* p = static_cast< ::AliIM::RecentCntServicePtr*>(__addr);
    assert(p);
    *p = ::AliIM::RecentCntServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::AliIM::RecentCntService::ice_staticId();
        throw e;
    }
}

bool
AliIM::operator==(const ::AliIM::RecentCntService& l, const ::AliIM::RecentCntService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator!=(const ::AliIM::RecentCntService& l, const ::AliIM::RecentCntService& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator<(const ::AliIM::RecentCntService& l, const ::AliIM::RecentCntService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator<=(const ::AliIM::RecentCntService& l, const ::AliIM::RecentCntService& r)
{
    return l < r || l == r;
}

bool
AliIM::operator>(const ::AliIM::RecentCntService& l, const ::AliIM::RecentCntService& r)
{
    return !(l < r) && !(l == r);
}

bool
AliIM::operator>=(const ::AliIM::RecentCntService& l, const ::AliIM::RecentCntService& r)
{
    return !(l < r);
}
