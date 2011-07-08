// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `imcontrol_service.ice'

#include <imcontrol_service.h>
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

static const ::std::string __IMCoreControlService__IMSecControlService__filterMsg_name = "filterMsg";

static const ::std::string __IMCoreControlService__IMSecControlService__filterMsg2_name = "filterMsg2";

static const ::std::string __IMCoreControlService__IMSecControlService__filterMsgByFlag_name = "filterMsgByFlag";

static const ::std::string __IMCoreControlService__IMSecControlService__checkOPAccess_name = "checkOPAccess";

static const ::std::string __IMCoreControlService__IMSecControlService__writeAQLog_name = "writeAQLog";

static const ::std::string __IMCoreControlService__IMSecControlService__checkControlAccess_name = "checkControlAccess";

void
IceInternal::incRef(::IMCoreControlService::IMSecControlService* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IMCoreControlService::IMSecControlService* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::IMCoreControlService::IMSecControlService* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::IMCoreControlService::IMSecControlService* p)
{
    p->__decRef();
}

void
IMCoreControlService::__write(::IceInternal::BasicStream* __os, const ::IMCoreControlService::IMSecControlServicePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
IMCoreControlService::__read(::IceInternal::BasicStream* __is, ::IMCoreControlService::IMSecControlServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::IMCoreControlService::IMSecControlService;
        v->__copyFrom(proxy);
    }
}

void
IMCoreControlService::__write(::IceInternal::BasicStream* __os, const ::IMCoreControlService::IMSecControlServicePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

void
IMCoreControlService::__write(::IceInternal::BasicStream* __os, const ::IMCoreControlService::KVPair& v, ::IMCoreControlService::__U__KVPair)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::IMCoreControlService::KVPair::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
IMCoreControlService::__read(::IceInternal::BasicStream* __is, ::IMCoreControlService::KVPair& v, ::IMCoreControlService::__U__KVPair)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::std::string, ::std::string> pair;
        __is->read(const_cast< ::std::string&>(pair.first));
        ::IMCoreControlService::KVPair::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
IMCoreControlService::__addObject(const IMSecControlServicePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
IMCoreControlService::__usesClasses(const IMSecControlServicePtr& p)
{
    return p->__usesClasses();
}

void
IMCoreControlService::__decRefUnsafe(const IMSecControlServicePtr& p)
{
    p->__decRefUnsafe();
}

void
IMCoreControlService::__clearHandleUnsafe(IMSecControlServicePtr& p)
{
    p.__clearHandleUnsafe();
}

bool
IceProxy::IMCoreControlService::IMSecControlService::filterMsg(const ::std::string& fromid, const ::std::string& toid, ::Ice::Int actdgree, const ::std::string& ip, const ::std::string& msg, const ::IMCoreControlService::KVPair& extraattrs, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMCoreControlService__IMSecControlService__filterMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMCoreControlService::IMSecControlService* __del = dynamic_cast< ::IceDelegate::IMCoreControlService::IMSecControlService*>(__delBase.get());
            return __del->filterMsg(fromid, toid, actdgree, ip, msg, extraattrs, __ctx);
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

bool
IceProxy::IMCoreControlService::IMSecControlService::filterMsg2(const ::std::string& fromid, const ::std::string& toid, ::Ice::Int actdgree, const ::std::string& ip, const ::std::string& msg, const ::IMCoreControlService::KVPair& extraattrs, ::std::string& newmsg, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMCoreControlService__IMSecControlService__filterMsg2_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMCoreControlService::IMSecControlService* __del = dynamic_cast< ::IceDelegate::IMCoreControlService::IMSecControlService*>(__delBase.get());
            return __del->filterMsg2(fromid, toid, actdgree, ip, msg, extraattrs, newmsg, __ctx);
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

bool
IceProxy::IMCoreControlService::IMSecControlService::filterMsgByFlag(const ::std::string& fromid, const ::std::string& toid, ::Ice::Int actdgree, const ::std::string& ip, const ::std::string& msg, const ::IMCoreControlService::KVPair& extraattrs, const ::std::string& checkmap, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMCoreControlService__IMSecControlService__filterMsgByFlag_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMCoreControlService::IMSecControlService* __del = dynamic_cast< ::IceDelegate::IMCoreControlService::IMSecControlService*>(__delBase.get());
            return __del->filterMsgByFlag(fromid, toid, actdgree, ip, msg, extraattrs, checkmap, __ctx);
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

bool
IceProxy::IMCoreControlService::IMSecControlService::checkOPAccess(const ::std::string& uid, ::Ice::Int actdgree, const ::std::string& ip, const ::std::string& packdata, const ::IMCoreControlService::KVPair& extraattrs, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMCoreControlService__IMSecControlService__checkOPAccess_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMCoreControlService::IMSecControlService* __del = dynamic_cast< ::IceDelegate::IMCoreControlService::IMSecControlService*>(__delBase.get());
            return __del->checkOPAccess(uid, actdgree, ip, packdata, extraattrs, __ctx);
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

void
IceProxy::IMCoreControlService::IMSecControlService::writeAQLog(const ::std::string& data, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __delBase = __getDelegate();
            ::IceDelegate::IMCoreControlService::IMSecControlService* __del = dynamic_cast< ::IceDelegate::IMCoreControlService::IMSecControlService*>(__delBase.get());
            __del->writeAQLog(data, __ctx);
            return;
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

bool
IceProxy::IMCoreControlService::IMSecControlService::checkControlAccess(const ::std::string& uid, ::Ice::Int actdegree, const ::std::string& ip, const ::std::string& version, ::Ice::Int checktype, const ::IMCoreControlService::KVPair& extraattrs, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMCoreControlService__IMSecControlService__checkControlAccess_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMCoreControlService::IMSecControlService* __del = dynamic_cast< ::IceDelegate::IMCoreControlService::IMSecControlService*>(__delBase.get());
            return __del->checkControlAccess(uid, actdegree, ip, version, checktype, extraattrs, __ctx);
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
IceProxy::IMCoreControlService::IMSecControlService::ice_staticId()
{
    return ::IMCoreControlService::IMSecControlService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::IMCoreControlService::IMSecControlService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::IMCoreControlService::IMSecControlService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::IMCoreControlService::IMSecControlService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::IMCoreControlService::IMSecControlService);
}

bool
IceProxy::IMCoreControlService::operator==(const ::IceProxy::IMCoreControlService::IMSecControlService& l, const ::IceProxy::IMCoreControlService::IMSecControlService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::IMCoreControlService::operator!=(const ::IceProxy::IMCoreControlService::IMSecControlService& l, const ::IceProxy::IMCoreControlService::IMSecControlService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::IMCoreControlService::operator<(const ::IceProxy::IMCoreControlService::IMSecControlService& l, const ::IceProxy::IMCoreControlService::IMSecControlService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::IMCoreControlService::operator<=(const ::IceProxy::IMCoreControlService::IMSecControlService& l, const ::IceProxy::IMCoreControlService::IMSecControlService& r)
{
    return l < r || l == r;
}

bool
IceProxy::IMCoreControlService::operator>(const ::IceProxy::IMCoreControlService::IMSecControlService& l, const ::IceProxy::IMCoreControlService::IMSecControlService& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::IMCoreControlService::operator>=(const ::IceProxy::IMCoreControlService::IMSecControlService& l, const ::IceProxy::IMCoreControlService::IMSecControlService& r)
{
    return !(l < r);
}

bool
IceDelegateM::IMCoreControlService::IMSecControlService::filterMsg(const ::std::string& fromid, const ::std::string& toid, ::Ice::Int actdgree, const ::std::string& ip, const ::std::string& msg, const ::IMCoreControlService::KVPair& extraattrs, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMCoreControlService__IMSecControlService__filterMsg_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(fromid);
        __os->write(toid);
        __os->write(actdgree);
        __os->write(ip);
        __os->write(msg);
        ::IMCoreControlService::__write(__os, extraattrs, ::IMCoreControlService::__U__KVPair());
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
        bool __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

bool
IceDelegateM::IMCoreControlService::IMSecControlService::filterMsg2(const ::std::string& fromid, const ::std::string& toid, ::Ice::Int actdgree, const ::std::string& ip, const ::std::string& msg, const ::IMCoreControlService::KVPair& extraattrs, ::std::string& newmsg, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMCoreControlService__IMSecControlService__filterMsg2_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(fromid);
        __os->write(toid);
        __os->write(actdgree);
        __os->write(ip);
        __os->write(msg);
        ::IMCoreControlService::__write(__os, extraattrs, ::IMCoreControlService::__U__KVPair());
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
        bool __ret;
        __is->read(newmsg);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

bool
IceDelegateM::IMCoreControlService::IMSecControlService::filterMsgByFlag(const ::std::string& fromid, const ::std::string& toid, ::Ice::Int actdgree, const ::std::string& ip, const ::std::string& msg, const ::IMCoreControlService::KVPair& extraattrs, const ::std::string& checkmap, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMCoreControlService__IMSecControlService__filterMsgByFlag_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(fromid);
        __os->write(toid);
        __os->write(actdgree);
        __os->write(ip);
        __os->write(msg);
        ::IMCoreControlService::__write(__os, extraattrs, ::IMCoreControlService::__U__KVPair());
        __os->write(checkmap);
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
        bool __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

bool
IceDelegateM::IMCoreControlService::IMSecControlService::checkOPAccess(const ::std::string& uid, ::Ice::Int actdgree, const ::std::string& ip, const ::std::string& packdata, const ::IMCoreControlService::KVPair& extraattrs, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMCoreControlService__IMSecControlService__checkOPAccess_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(actdgree);
        __os->write(ip);
        __os->write(packdata);
        ::IMCoreControlService::__write(__os, extraattrs, ::IMCoreControlService::__U__KVPair());
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
        bool __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

void
IceDelegateM::IMCoreControlService::IMSecControlService::writeAQLog(const ::std::string& data, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMCoreControlService__IMSecControlService__writeAQLog_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(data);
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
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

bool
IceDelegateM::IMCoreControlService::IMSecControlService::checkControlAccess(const ::std::string& uid, ::Ice::Int actdegree, const ::std::string& ip, const ::std::string& version, ::Ice::Int checktype, const ::IMCoreControlService::KVPair& extraattrs, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMCoreControlService__IMSecControlService__checkControlAccess_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(actdegree);
        __os->write(ip);
        __os->write(version);
        __os->write(checktype);
        ::IMCoreControlService::__write(__os, extraattrs, ::IMCoreControlService::__U__KVPair());
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
        bool __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

bool
IceDelegateD::IMCoreControlService::IMSecControlService::filterMsg(const ::std::string& fromid, const ::std::string& toid, ::Ice::Int actdgree, const ::std::string& ip, const ::std::string& msg, const ::IMCoreControlService::KVPair& extraattrs, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMCoreControlService__IMSecControlService__filterMsg_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        bool __ret;
        try
        {
            ::IMCoreControlService::IMSecControlService* __servant = dynamic_cast< ::IMCoreControlService::IMSecControlService*>(__direct.servant().get());
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
                __ret = __servant->filterMsg(fromid, toid, actdgree, ip, msg, extraattrs, __current);
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

bool
IceDelegateD::IMCoreControlService::IMSecControlService::filterMsg2(const ::std::string& fromid, const ::std::string& toid, ::Ice::Int actdgree, const ::std::string& ip, const ::std::string& msg, const ::IMCoreControlService::KVPair& extraattrs, ::std::string& newmsg, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMCoreControlService__IMSecControlService__filterMsg2_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        bool __ret;
        try
        {
            ::IMCoreControlService::IMSecControlService* __servant = dynamic_cast< ::IMCoreControlService::IMSecControlService*>(__direct.servant().get());
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
                __ret = __servant->filterMsg2(fromid, toid, actdgree, ip, msg, extraattrs, newmsg, __current);
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

bool
IceDelegateD::IMCoreControlService::IMSecControlService::filterMsgByFlag(const ::std::string& fromid, const ::std::string& toid, ::Ice::Int actdgree, const ::std::string& ip, const ::std::string& msg, const ::IMCoreControlService::KVPair& extraattrs, const ::std::string& checkmap, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMCoreControlService__IMSecControlService__filterMsgByFlag_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        bool __ret;
        try
        {
            ::IMCoreControlService::IMSecControlService* __servant = dynamic_cast< ::IMCoreControlService::IMSecControlService*>(__direct.servant().get());
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
                __ret = __servant->filterMsgByFlag(fromid, toid, actdgree, ip, msg, extraattrs, checkmap, __current);
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

bool
IceDelegateD::IMCoreControlService::IMSecControlService::checkOPAccess(const ::std::string& uid, ::Ice::Int actdgree, const ::std::string& ip, const ::std::string& packdata, const ::IMCoreControlService::KVPair& extraattrs, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMCoreControlService__IMSecControlService__checkOPAccess_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        bool __ret;
        try
        {
            ::IMCoreControlService::IMSecControlService* __servant = dynamic_cast< ::IMCoreControlService::IMSecControlService*>(__direct.servant().get());
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
                __ret = __servant->checkOPAccess(uid, actdgree, ip, packdata, extraattrs, __current);
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

void
IceDelegateD::IMCoreControlService::IMSecControlService::writeAQLog(const ::std::string& data, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMCoreControlService__IMSecControlService__writeAQLog_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        try
        {
            ::IMCoreControlService::IMSecControlService* __servant = dynamic_cast< ::IMCoreControlService::IMSecControlService*>(__direct.servant().get());
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
                __servant->writeAQLog(data, __current);
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
        return;
    }
}

bool
IceDelegateD::IMCoreControlService::IMSecControlService::checkControlAccess(const ::std::string& uid, ::Ice::Int actdegree, const ::std::string& ip, const ::std::string& version, ::Ice::Int checktype, const ::IMCoreControlService::KVPair& extraattrs, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMCoreControlService__IMSecControlService__checkControlAccess_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        bool __ret;
        try
        {
            ::IMCoreControlService::IMSecControlService* __servant = dynamic_cast< ::IMCoreControlService::IMSecControlService*>(__direct.servant().get());
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
                __ret = __servant->checkControlAccess(uid, actdegree, ip, version, checktype, extraattrs, __current);
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
IMCoreControlService::IMSecControlService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __IMCoreControlService__IMSecControlService_ids[2] =
{
    "::IMCoreControlService::IMSecControlService",
    "::Ice::Object"
};

bool
IMCoreControlService::IMSecControlService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__IMCoreControlService__IMSecControlService_ids, __IMCoreControlService__IMSecControlService_ids + 2, _s);
}

::std::vector< ::std::string>
IMCoreControlService::IMSecControlService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__IMCoreControlService__IMSecControlService_ids[0], &__IMCoreControlService__IMSecControlService_ids[2]);
}

const ::std::string&
IMCoreControlService::IMSecControlService::ice_id(const ::Ice::Current&) const
{
    return __IMCoreControlService__IMSecControlService_ids[0];
}

const ::std::string&
IMCoreControlService::IMSecControlService::ice_staticId()
{
    return __IMCoreControlService__IMSecControlService_ids[0];
}

::IceInternal::DispatchStatus
IMCoreControlService::IMSecControlService::___filterMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string fromid;
    ::std::string toid;
    ::Ice::Int actdgree;
    ::std::string ip;
    ::std::string msg;
    ::IMCoreControlService::KVPair extraattrs;
    __is->read(fromid);
    __is->read(toid);
    __is->read(actdgree);
    __is->read(ip);
    __is->read(msg);
    ::IMCoreControlService::__read(__is, extraattrs, ::IMCoreControlService::__U__KVPair());
    bool __ret = filterMsg(fromid, toid, actdgree, ip, msg, extraattrs, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMCoreControlService::IMSecControlService::___filterMsg2(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string fromid;
    ::std::string toid;
    ::Ice::Int actdgree;
    ::std::string ip;
    ::std::string msg;
    ::IMCoreControlService::KVPair extraattrs;
    __is->read(fromid);
    __is->read(toid);
    __is->read(actdgree);
    __is->read(ip);
    __is->read(msg);
    ::IMCoreControlService::__read(__is, extraattrs, ::IMCoreControlService::__U__KVPair());
    ::std::string newmsg;
    bool __ret = filterMsg2(fromid, toid, actdgree, ip, msg, extraattrs, newmsg, __current);
    __os->write(newmsg);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMCoreControlService::IMSecControlService::___filterMsgByFlag(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string fromid;
    ::std::string toid;
    ::Ice::Int actdgree;
    ::std::string ip;
    ::std::string msg;
    ::IMCoreControlService::KVPair extraattrs;
    ::std::string checkmap;
    __is->read(fromid);
    __is->read(toid);
    __is->read(actdgree);
    __is->read(ip);
    __is->read(msg);
    ::IMCoreControlService::__read(__is, extraattrs, ::IMCoreControlService::__U__KVPair());
    __is->read(checkmap);
    bool __ret = filterMsgByFlag(fromid, toid, actdgree, ip, msg, extraattrs, checkmap, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMCoreControlService::IMSecControlService::___checkOPAccess(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::Ice::Int actdgree;
    ::std::string ip;
    ::std::string packdata;
    ::IMCoreControlService::KVPair extraattrs;
    __is->read(uid);
    __is->read(actdgree);
    __is->read(ip);
    __is->read(packdata);
    ::IMCoreControlService::__read(__is, extraattrs, ::IMCoreControlService::__U__KVPair());
    bool __ret = checkOPAccess(uid, actdgree, ip, packdata, extraattrs, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMCoreControlService::IMSecControlService::___writeAQLog(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string data;
    __is->read(data);
    writeAQLog(data, __current);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMCoreControlService::IMSecControlService::___checkControlAccess(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::Ice::Int actdegree;
    ::std::string ip;
    ::std::string version;
    ::Ice::Int checktype;
    ::IMCoreControlService::KVPair extraattrs;
    __is->read(uid);
    __is->read(actdegree);
    __is->read(ip);
    __is->read(version);
    __is->read(checktype);
    ::IMCoreControlService::__read(__is, extraattrs, ::IMCoreControlService::__U__KVPair());
    bool __ret = checkControlAccess(uid, actdegree, ip, version, checktype, extraattrs, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __IMCoreControlService__IMSecControlService_all[] =
{
    "checkControlAccess",
    "checkOPAccess",
    "filterMsg",
    "filterMsg2",
    "filterMsgByFlag",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "writeAQLog"
};

::IceInternal::DispatchStatus
IMCoreControlService::IMSecControlService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__IMCoreControlService__IMSecControlService_all, __IMCoreControlService__IMSecControlService_all + 10, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __IMCoreControlService__IMSecControlService_all)
    {
        case 0:
        {
            return ___checkControlAccess(in, current);
        }
        case 1:
        {
            return ___checkOPAccess(in, current);
        }
        case 2:
        {
            return ___filterMsg(in, current);
        }
        case 3:
        {
            return ___filterMsg2(in, current);
        }
        case 4:
        {
            return ___filterMsgByFlag(in, current);
        }
        case 5:
        {
            return ___ice_id(in, current);
        }
        case 6:
        {
            return ___ice_ids(in, current);
        }
        case 7:
        {
            return ___ice_isA(in, current);
        }
        case 8:
        {
            return ___ice_ping(in, current);
        }
        case 9:
        {
            return ___writeAQLog(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
IMCoreControlService::IMSecControlService::__write(::IceInternal::BasicStream* __os) const
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
IMCoreControlService::IMSecControlService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
IMCoreControlService::IMSecControlService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type IMCoreControlService::IMSecControlService was not generated with stream support";
    throw ex;
}

void
IMCoreControlService::IMSecControlService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type IMCoreControlService::IMSecControlService was not generated with stream support";
    throw ex;
}

void 
IMCoreControlService::__patch__IMSecControlServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::IMCoreControlService::IMSecControlServicePtr* p = static_cast< ::IMCoreControlService::IMSecControlServicePtr*>(__addr);
    assert(p);
    *p = ::IMCoreControlService::IMSecControlServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::IMCoreControlService::IMSecControlService::ice_staticId();
        throw e;
    }
}

bool
IMCoreControlService::operator==(const ::IMCoreControlService::IMSecControlService& l, const ::IMCoreControlService::IMSecControlService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
IMCoreControlService::operator!=(const ::IMCoreControlService::IMSecControlService& l, const ::IMCoreControlService::IMSecControlService& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
IMCoreControlService::operator<(const ::IMCoreControlService::IMSecControlService& l, const ::IMCoreControlService::IMSecControlService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
IMCoreControlService::operator<=(const ::IMCoreControlService::IMSecControlService& l, const ::IMCoreControlService::IMSecControlService& r)
{
    return l < r || l == r;
}

bool
IMCoreControlService::operator>(const ::IMCoreControlService::IMSecControlService& l, const ::IMCoreControlService::IMSecControlService& r)
{
    return !(l < r) && !(l == r);
}

bool
IMCoreControlService::operator>=(const ::IMCoreControlService::IMSecControlService& l, const ::IMCoreControlService::IMSecControlService& r)
{
    return !(l < r);
}
