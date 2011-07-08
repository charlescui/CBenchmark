// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `ftservice.ice'

#include <ftservice.h>
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

static const ::std::string __alliFTServer__IFTService__getServiceInfo_name = "getServiceInfo";

static const ::std::string __alliFTServer__IFTService__getTietuServiceInfo_name = "getTietuServiceInfo";

static const ::std::string __alliFTServer__IFTNewService__getAddr_name = "getAddr";

void
IceInternal::incRef(::alliFTServer::IFTService* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::alliFTServer::IFTService* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::alliFTServer::IFTService* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::alliFTServer::IFTService* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::alliFTServer::IFTNewService* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::alliFTServer::IFTNewService* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::alliFTServer::IFTNewService* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::alliFTServer::IFTNewService* p)
{
    p->__decRef();
}

void
alliFTServer::__write(::IceInternal::BasicStream* __os, const ::alliFTServer::IFTServicePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
alliFTServer::__read(::IceInternal::BasicStream* __is, ::alliFTServer::IFTServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::alliFTServer::IFTService;
        v->__copyFrom(proxy);
    }
}

void
alliFTServer::__write(::IceInternal::BasicStream* __os, const ::alliFTServer::IFTServicePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

void
alliFTServer::__write(::IceInternal::BasicStream* __os, const ::alliFTServer::IFTNewServicePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
alliFTServer::__read(::IceInternal::BasicStream* __is, ::alliFTServer::IFTNewServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::alliFTServer::IFTNewService;
        v->__copyFrom(proxy);
    }
}

void
alliFTServer::__write(::IceInternal::BasicStream* __os, const ::alliFTServer::IFTNewServicePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

void
alliFTServer::__addObject(const IFTServicePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
alliFTServer::__usesClasses(const IFTServicePtr& p)
{
    return p->__usesClasses();
}

void
alliFTServer::__decRefUnsafe(const IFTServicePtr& p)
{
    p->__decRefUnsafe();
}

void
alliFTServer::__clearHandleUnsafe(IFTServicePtr& p)
{
    p.__clearHandleUnsafe();
}

void
alliFTServer::__addObject(const IFTNewServicePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
alliFTServer::__usesClasses(const IFTNewServicePtr& p)
{
    return p->__usesClasses();
}

void
alliFTServer::__decRefUnsafe(const IFTNewServicePtr& p)
{
    p->__decRefUnsafe();
}

void
alliFTServer::__clearHandleUnsafe(IFTNewServicePtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::alliFTServer::IFTService::getServiceInfo(const ::std::string& senduid, const ::std::string& touid, ::std::string& srvIp, ::Ice::Short& srvPort, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__alliFTServer__IFTService__getServiceInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::alliFTServer::IFTService* __del = dynamic_cast< ::IceDelegate::alliFTServer::IFTService*>(__delBase.get());
            return __del->getServiceInfo(senduid, touid, srvIp, srvPort, __ctx);
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
IceProxy::alliFTServer::IFTService::getTietuServiceInfo(const ::std::string& senduid, ::Ice::Int& sessionSum, ::std::string& srvIp, ::Ice::Short& srvPort, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__alliFTServer__IFTService__getTietuServiceInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::alliFTServer::IFTService* __del = dynamic_cast< ::IceDelegate::alliFTServer::IFTService*>(__delBase.get());
            return __del->getTietuServiceInfo(senduid, sessionSum, srvIp, srvPort, __ctx);
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
IceProxy::alliFTServer::IFTService::ice_staticId()
{
    return ::alliFTServer::IFTService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::alliFTServer::IFTService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::alliFTServer::IFTService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::alliFTServer::IFTService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::alliFTServer::IFTService);
}

bool
IceProxy::alliFTServer::operator==(const ::IceProxy::alliFTServer::IFTService& l, const ::IceProxy::alliFTServer::IFTService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::alliFTServer::operator!=(const ::IceProxy::alliFTServer::IFTService& l, const ::IceProxy::alliFTServer::IFTService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::alliFTServer::operator<(const ::IceProxy::alliFTServer::IFTService& l, const ::IceProxy::alliFTServer::IFTService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::alliFTServer::operator<=(const ::IceProxy::alliFTServer::IFTService& l, const ::IceProxy::alliFTServer::IFTService& r)
{
    return l < r || l == r;
}

bool
IceProxy::alliFTServer::operator>(const ::IceProxy::alliFTServer::IFTService& l, const ::IceProxy::alliFTServer::IFTService& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::alliFTServer::operator>=(const ::IceProxy::alliFTServer::IFTService& l, const ::IceProxy::alliFTServer::IFTService& r)
{
    return !(l < r);
}

::Ice::Int
IceProxy::alliFTServer::IFTNewService::getAddr(::Ice::Short _cpp_typeid, const ::std::string& senduid, ::Ice::Long& ftsid, ::std::string& srvIp, ::Ice::Short& srvProt, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__alliFTServer__IFTNewService__getAddr_name);
            __delBase = __getDelegate();
            ::IceDelegate::alliFTServer::IFTNewService* __del = dynamic_cast< ::IceDelegate::alliFTServer::IFTNewService*>(__delBase.get());
            return __del->getAddr(_cpp_typeid, senduid, ftsid, srvIp, srvProt, __ctx);
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
IceProxy::alliFTServer::IFTNewService::ice_staticId()
{
    return ::alliFTServer::IFTNewService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::alliFTServer::IFTNewService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::alliFTServer::IFTNewService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::alliFTServer::IFTNewService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::alliFTServer::IFTNewService);
}

bool
IceProxy::alliFTServer::operator==(const ::IceProxy::alliFTServer::IFTNewService& l, const ::IceProxy::alliFTServer::IFTNewService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::alliFTServer::operator!=(const ::IceProxy::alliFTServer::IFTNewService& l, const ::IceProxy::alliFTServer::IFTNewService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::alliFTServer::operator<(const ::IceProxy::alliFTServer::IFTNewService& l, const ::IceProxy::alliFTServer::IFTNewService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::alliFTServer::operator<=(const ::IceProxy::alliFTServer::IFTNewService& l, const ::IceProxy::alliFTServer::IFTNewService& r)
{
    return l < r || l == r;
}

bool
IceProxy::alliFTServer::operator>(const ::IceProxy::alliFTServer::IFTNewService& l, const ::IceProxy::alliFTServer::IFTNewService& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::alliFTServer::operator>=(const ::IceProxy::alliFTServer::IFTNewService& l, const ::IceProxy::alliFTServer::IFTNewService& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::alliFTServer::IFTService::getServiceInfo(const ::std::string& senduid, const ::std::string& touid, ::std::string& srvIp, ::Ice::Short& srvPort, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __alliFTServer__IFTService__getServiceInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(senduid);
        __os->write(touid);
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
        __is->read(srvIp);
        __is->read(srvPort);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::alliFTServer::IFTService::getTietuServiceInfo(const ::std::string& senduid, ::Ice::Int& sessionSum, ::std::string& srvIp, ::Ice::Short& srvPort, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __alliFTServer__IFTService__getTietuServiceInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(senduid);
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
        __is->read(sessionSum);
        __is->read(srvIp);
        __is->read(srvPort);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::alliFTServer::IFTNewService::getAddr(::Ice::Short _cpp_typeid, const ::std::string& senduid, ::Ice::Long& ftsid, ::std::string& srvIp, ::Ice::Short& srvProt, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __alliFTServer__IFTNewService__getAddr_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(_cpp_typeid);
        __os->write(senduid);
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
        __is->read(ftsid);
        __is->read(srvIp);
        __is->read(srvProt);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::alliFTServer::IFTService::getServiceInfo(const ::std::string& senduid, const ::std::string& touid, ::std::string& srvIp, ::Ice::Short& srvPort, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __alliFTServer__IFTService__getServiceInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::alliFTServer::IFTService* __servant = dynamic_cast< ::alliFTServer::IFTService*>(__direct.servant().get());
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
                __ret = __servant->getServiceInfo(senduid, touid, srvIp, srvPort, __current);
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
IceDelegateD::alliFTServer::IFTService::getTietuServiceInfo(const ::std::string& senduid, ::Ice::Int& sessionSum, ::std::string& srvIp, ::Ice::Short& srvPort, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __alliFTServer__IFTService__getTietuServiceInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::alliFTServer::IFTService* __servant = dynamic_cast< ::alliFTServer::IFTService*>(__direct.servant().get());
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
                __ret = __servant->getTietuServiceInfo(senduid, sessionSum, srvIp, srvPort, __current);
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
IceDelegateD::alliFTServer::IFTNewService::getAddr(::Ice::Short _cpp_typeid, const ::std::string& senduid, ::Ice::Long& ftsid, ::std::string& srvIp, ::Ice::Short& srvProt, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __alliFTServer__IFTNewService__getAddr_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::alliFTServer::IFTNewService* __servant = dynamic_cast< ::alliFTServer::IFTNewService*>(__direct.servant().get());
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
                __ret = __servant->getAddr(_cpp_typeid, senduid, ftsid, srvIp, srvProt, __current);
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
alliFTServer::IFTService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __alliFTServer__IFTService_ids[2] =
{
    "::Ice::Object",
    "::alliFTServer::IFTService"
};

bool
alliFTServer::IFTService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__alliFTServer__IFTService_ids, __alliFTServer__IFTService_ids + 2, _s);
}

::std::vector< ::std::string>
alliFTServer::IFTService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__alliFTServer__IFTService_ids[0], &__alliFTServer__IFTService_ids[2]);
}

const ::std::string&
alliFTServer::IFTService::ice_id(const ::Ice::Current&) const
{
    return __alliFTServer__IFTService_ids[1];
}

const ::std::string&
alliFTServer::IFTService::ice_staticId()
{
    return __alliFTServer__IFTService_ids[1];
}

::IceInternal::DispatchStatus
alliFTServer::IFTService::___getServiceInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string senduid;
    ::std::string touid;
    __is->read(senduid);
    __is->read(touid);
    ::std::string srvIp;
    ::Ice::Short srvPort;
    ::Ice::Int __ret = getServiceInfo(senduid, touid, srvIp, srvPort, __current);
    __os->write(srvIp);
    __os->write(srvPort);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
alliFTServer::IFTService::___getTietuServiceInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string senduid;
    __is->read(senduid);
    ::Ice::Int sessionSum;
    ::std::string srvIp;
    ::Ice::Short srvPort;
    ::Ice::Int __ret = getTietuServiceInfo(senduid, sessionSum, srvIp, srvPort, __current);
    __os->write(sessionSum);
    __os->write(srvIp);
    __os->write(srvPort);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __alliFTServer__IFTService_all[] =
{
    "getServiceInfo",
    "getTietuServiceInfo",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::IceInternal::DispatchStatus
alliFTServer::IFTService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__alliFTServer__IFTService_all, __alliFTServer__IFTService_all + 6, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __alliFTServer__IFTService_all)
    {
        case 0:
        {
            return ___getServiceInfo(in, current);
        }
        case 1:
        {
            return ___getTietuServiceInfo(in, current);
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
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
alliFTServer::IFTService::__write(::IceInternal::BasicStream* __os) const
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
alliFTServer::IFTService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
alliFTServer::IFTService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type alliFTServer::IFTService was not generated with stream support";
    throw ex;
}

void
alliFTServer::IFTService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type alliFTServer::IFTService was not generated with stream support";
    throw ex;
}

void 
alliFTServer::__patch__IFTServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::alliFTServer::IFTServicePtr* p = static_cast< ::alliFTServer::IFTServicePtr*>(__addr);
    assert(p);
    *p = ::alliFTServer::IFTServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::alliFTServer::IFTService::ice_staticId();
        throw e;
    }
}

bool
alliFTServer::operator==(const ::alliFTServer::IFTService& l, const ::alliFTServer::IFTService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
alliFTServer::operator!=(const ::alliFTServer::IFTService& l, const ::alliFTServer::IFTService& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
alliFTServer::operator<(const ::alliFTServer::IFTService& l, const ::alliFTServer::IFTService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
alliFTServer::operator<=(const ::alliFTServer::IFTService& l, const ::alliFTServer::IFTService& r)
{
    return l < r || l == r;
}

bool
alliFTServer::operator>(const ::alliFTServer::IFTService& l, const ::alliFTServer::IFTService& r)
{
    return !(l < r) && !(l == r);
}

bool
alliFTServer::operator>=(const ::alliFTServer::IFTService& l, const ::alliFTServer::IFTService& r)
{
    return !(l < r);
}

::Ice::ObjectPtr
alliFTServer::IFTNewService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __alliFTServer__IFTNewService_ids[2] =
{
    "::Ice::Object",
    "::alliFTServer::IFTNewService"
};

bool
alliFTServer::IFTNewService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__alliFTServer__IFTNewService_ids, __alliFTServer__IFTNewService_ids + 2, _s);
}

::std::vector< ::std::string>
alliFTServer::IFTNewService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__alliFTServer__IFTNewService_ids[0], &__alliFTServer__IFTNewService_ids[2]);
}

const ::std::string&
alliFTServer::IFTNewService::ice_id(const ::Ice::Current&) const
{
    return __alliFTServer__IFTNewService_ids[1];
}

const ::std::string&
alliFTServer::IFTNewService::ice_staticId()
{
    return __alliFTServer__IFTNewService_ids[1];
}

::IceInternal::DispatchStatus
alliFTServer::IFTNewService::___getAddr(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Short _cpp_typeid;
    ::std::string senduid;
    __is->read(_cpp_typeid);
    __is->read(senduid);
    ::Ice::Long ftsid;
    ::std::string srvIp;
    ::Ice::Short srvProt;
    ::Ice::Int __ret = getAddr(_cpp_typeid, senduid, ftsid, srvIp, srvProt, __current);
    __os->write(ftsid);
    __os->write(srvIp);
    __os->write(srvProt);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __alliFTServer__IFTNewService_all[] =
{
    "getAddr",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::IceInternal::DispatchStatus
alliFTServer::IFTNewService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__alliFTServer__IFTNewService_all, __alliFTServer__IFTNewService_all + 5, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __alliFTServer__IFTNewService_all)
    {
        case 0:
        {
            return ___getAddr(in, current);
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
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
alliFTServer::IFTNewService::__write(::IceInternal::BasicStream* __os) const
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
alliFTServer::IFTNewService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
alliFTServer::IFTNewService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type alliFTServer::IFTNewService was not generated with stream support";
    throw ex;
}

void
alliFTServer::IFTNewService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type alliFTServer::IFTNewService was not generated with stream support";
    throw ex;
}

void 
alliFTServer::__patch__IFTNewServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::alliFTServer::IFTNewServicePtr* p = static_cast< ::alliFTServer::IFTNewServicePtr*>(__addr);
    assert(p);
    *p = ::alliFTServer::IFTNewServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::alliFTServer::IFTNewService::ice_staticId();
        throw e;
    }
}

bool
alliFTServer::operator==(const ::alliFTServer::IFTNewService& l, const ::alliFTServer::IFTNewService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
alliFTServer::operator!=(const ::alliFTServer::IFTNewService& l, const ::alliFTServer::IFTNewService& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
alliFTServer::operator<(const ::alliFTServer::IFTNewService& l, const ::alliFTServer::IFTNewService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
alliFTServer::operator<=(const ::alliFTServer::IFTNewService& l, const ::alliFTServer::IFTNewService& r)
{
    return l < r || l == r;
}

bool
alliFTServer::operator>(const ::alliFTServer::IFTNewService& l, const ::alliFTServer::IFTNewService& r)
{
    return !(l < r) && !(l == r);
}

bool
alliFTServer::operator>=(const ::alliFTServer::IFTNewService& l, const ::alliFTServer::IFTNewService& r)
{
    return !(l < r);
}
