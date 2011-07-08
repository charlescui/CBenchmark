// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `recentCntCache.ice'

#include <recentCntCache.h>
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

static const ::std::string __AliIM__RecentCntCacheService__updateRcnt_name = "updateRcnt";

static const ::std::string __AliIM__RecentCntCacheService__getRcntList_name = "getRcntList";

void
IceInternal::incRef(::AliIM::RecentCntCacheService* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::AliIM::RecentCntCacheService* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::AliIM::RecentCntCacheService* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::AliIM::RecentCntCacheService* p)
{
    p->__decRef();
}

void
AliIM::__write(::IceInternal::BasicStream* __os, const ::AliIM::RecentCntCacheServicePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
AliIM::__read(::IceInternal::BasicStream* __is, ::AliIM::RecentCntCacheServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::AliIM::RecentCntCacheService;
        v->__copyFrom(proxy);
    }
}

void
AliIM::__write(::IceInternal::BasicStream* __os, const ::AliIM::RecentCntCacheServicePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

void
AliIM::__addObject(const RecentCntCacheServicePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
AliIM::__usesClasses(const RecentCntCacheServicePtr& p)
{
    return p->__usesClasses();
}

void
AliIM::__decRefUnsafe(const RecentCntCacheServicePtr& p)
{
    p->__decRefUnsafe();
}

void
AliIM::__clearHandleUnsafe(RecentCntCacheServicePtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::AliIM::RecentCntCacheService::updateRcnt(const ::std::string& loginId, ::Ice::Int curtimestamp, const ::std::string& pcid, ::Ice::Int ip, const ::AliIM::SICERecentCntSeq& rcntlist, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__RecentCntCacheService__updateRcnt_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::RecentCntCacheService* __del = dynamic_cast< ::IceDelegate::AliIM::RecentCntCacheService*>(__delBase.get());
            return __del->updateRcnt(loginId, curtimestamp, pcid, ip, rcntlist, __ctx);
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
IceProxy::AliIM::RecentCntCacheService::getRcntList(const ::std::string& loginId, ::Ice::Int timestamp, ::AliIM::SICERecentCntSeq& rcntlist, ::Ice::Int& ip, ::std::string& pcid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIM__RecentCntCacheService__getRcntList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIM::RecentCntCacheService* __del = dynamic_cast< ::IceDelegate::AliIM::RecentCntCacheService*>(__delBase.get());
            return __del->getRcntList(loginId, timestamp, rcntlist, ip, pcid, __ctx);
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
IceProxy::AliIM::RecentCntCacheService::ice_staticId()
{
    return ::AliIM::RecentCntCacheService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::AliIM::RecentCntCacheService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::AliIM::RecentCntCacheService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::AliIM::RecentCntCacheService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::AliIM::RecentCntCacheService);
}

bool
IceProxy::AliIM::operator==(const ::IceProxy::AliIM::RecentCntCacheService& l, const ::IceProxy::AliIM::RecentCntCacheService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator!=(const ::IceProxy::AliIM::RecentCntCacheService& l, const ::IceProxy::AliIM::RecentCntCacheService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator<(const ::IceProxy::AliIM::RecentCntCacheService& l, const ::IceProxy::AliIM::RecentCntCacheService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIM::operator<=(const ::IceProxy::AliIM::RecentCntCacheService& l, const ::IceProxy::AliIM::RecentCntCacheService& r)
{
    return l < r || l == r;
}

bool
IceProxy::AliIM::operator>(const ::IceProxy::AliIM::RecentCntCacheService& l, const ::IceProxy::AliIM::RecentCntCacheService& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::AliIM::operator>=(const ::IceProxy::AliIM::RecentCntCacheService& l, const ::IceProxy::AliIM::RecentCntCacheService& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::AliIM::RecentCntCacheService::updateRcnt(const ::std::string& loginId, ::Ice::Int curtimestamp, const ::std::string& pcid, ::Ice::Int ip, const ::AliIM::SICERecentCntSeq& rcntlist, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__RecentCntCacheService__updateRcnt_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(loginId);
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
IceDelegateM::AliIM::RecentCntCacheService::getRcntList(const ::std::string& loginId, ::Ice::Int timestamp, ::AliIM::SICERecentCntSeq& rcntlist, ::Ice::Int& ip, ::std::string& pcid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIM__RecentCntCacheService__getRcntList_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(loginId);
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
        ::AliIM::__read(__is, rcntlist, ::AliIM::__U__SICERecentCntSeq());
        __is->read(ip);
        __is->read(pcid);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::AliIM::RecentCntCacheService::updateRcnt(const ::std::string& loginId, ::Ice::Int curtimestamp, const ::std::string& pcid, ::Ice::Int ip, const ::AliIM::SICERecentCntSeq& rcntlist, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__RecentCntCacheService__updateRcnt_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::RecentCntCacheService* __servant = dynamic_cast< ::AliIM::RecentCntCacheService*>(__direct.servant().get());
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
                __ret = __servant->updateRcnt(loginId, curtimestamp, pcid, ip, rcntlist, __current);
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
IceDelegateD::AliIM::RecentCntCacheService::getRcntList(const ::std::string& loginId, ::Ice::Int timestamp, ::AliIM::SICERecentCntSeq& rcntlist, ::Ice::Int& ip, ::std::string& pcid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIM__RecentCntCacheService__getRcntList_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIM::RecentCntCacheService* __servant = dynamic_cast< ::AliIM::RecentCntCacheService*>(__direct.servant().get());
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
                __ret = __servant->getRcntList(loginId, timestamp, rcntlist, ip, pcid, __current);
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
AliIM::RecentCntCacheService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __AliIM__RecentCntCacheService_ids[2] =
{
    "::AliIM::RecentCntCacheService",
    "::Ice::Object"
};

bool
AliIM::RecentCntCacheService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__AliIM__RecentCntCacheService_ids, __AliIM__RecentCntCacheService_ids + 2, _s);
}

::std::vector< ::std::string>
AliIM::RecentCntCacheService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__AliIM__RecentCntCacheService_ids[0], &__AliIM__RecentCntCacheService_ids[2]);
}

const ::std::string&
AliIM::RecentCntCacheService::ice_id(const ::Ice::Current&) const
{
    return __AliIM__RecentCntCacheService_ids[0];
}

const ::std::string&
AliIM::RecentCntCacheService::ice_staticId()
{
    return __AliIM__RecentCntCacheService_ids[0];
}

::IceInternal::DispatchStatus
AliIM::RecentCntCacheService::___updateRcnt(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string loginId;
    ::Ice::Int curtimestamp;
    ::std::string pcid;
    ::Ice::Int ip;
    ::AliIM::SICERecentCntSeq rcntlist;
    __is->read(loginId);
    __is->read(curtimestamp);
    __is->read(pcid);
    __is->read(ip);
    ::AliIM::__read(__is, rcntlist, ::AliIM::__U__SICERecentCntSeq());
    ::Ice::Int __ret = updateRcnt(loginId, curtimestamp, pcid, ip, rcntlist, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIM::RecentCntCacheService::___getRcntList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string loginId;
    ::Ice::Int timestamp;
    __is->read(loginId);
    __is->read(timestamp);
    ::AliIM::SICERecentCntSeq rcntlist;
    ::Ice::Int ip;
    ::std::string pcid;
    ::Ice::Int __ret = getRcntList(loginId, timestamp, rcntlist, ip, pcid, __current);
    if(rcntlist.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::AliIM::__write(__os, &rcntlist[0], &rcntlist[0] + rcntlist.size(), ::AliIM::__U__SICERecentCntSeq());
    }
    __os->write(ip);
    __os->write(pcid);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __AliIM__RecentCntCacheService_all[] =
{
    "getRcntList",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "updateRcnt"
};

::IceInternal::DispatchStatus
AliIM::RecentCntCacheService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__AliIM__RecentCntCacheService_all, __AliIM__RecentCntCacheService_all + 6, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __AliIM__RecentCntCacheService_all)
    {
        case 0:
        {
            return ___getRcntList(in, current);
        }
        case 1:
        {
            return ___ice_id(in, current);
        }
        case 2:
        {
            return ___ice_ids(in, current);
        }
        case 3:
        {
            return ___ice_isA(in, current);
        }
        case 4:
        {
            return ___ice_ping(in, current);
        }
        case 5:
        {
            return ___updateRcnt(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
AliIM::RecentCntCacheService::__write(::IceInternal::BasicStream* __os) const
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
AliIM::RecentCntCacheService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
AliIM::RecentCntCacheService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIM::RecentCntCacheService was not generated with stream support";
    throw ex;
}

void
AliIM::RecentCntCacheService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIM::RecentCntCacheService was not generated with stream support";
    throw ex;
}

void 
AliIM::__patch__RecentCntCacheServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::AliIM::RecentCntCacheServicePtr* p = static_cast< ::AliIM::RecentCntCacheServicePtr*>(__addr);
    assert(p);
    *p = ::AliIM::RecentCntCacheServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::AliIM::RecentCntCacheService::ice_staticId();
        throw e;
    }
}

bool
AliIM::operator==(const ::AliIM::RecentCntCacheService& l, const ::AliIM::RecentCntCacheService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator!=(const ::AliIM::RecentCntCacheService& l, const ::AliIM::RecentCntCacheService& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator<(const ::AliIM::RecentCntCacheService& l, const ::AliIM::RecentCntCacheService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
AliIM::operator<=(const ::AliIM::RecentCntCacheService& l, const ::AliIM::RecentCntCacheService& r)
{
    return l < r || l == r;
}

bool
AliIM::operator>(const ::AliIM::RecentCntCacheService& l, const ::AliIM::RecentCntCacheService& r)
{
    return !(l < r) && !(l == r);
}

bool
AliIM::operator>=(const ::AliIM::RecentCntCacheService& l, const ::AliIM::RecentCntCacheService& r)
{
    return !(l < r);
}
