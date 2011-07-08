// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `login_info_center.ice'

#include <login_info_center.h>
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

static const ::std::string __LoginInfoCenter__LoginInfoInterface__SetLoginInfo_name = "SetLoginInfo";

static const ::std::string __LoginInfoCenter__LoginInfoInterface__UpdateLoginInfo_name = "UpdateLoginInfo";

static const ::std::string __LoginInfoCenter__LoginInfoInterface__DelLoginInfo_name = "DelLoginInfo";

static const ::std::string __LoginInfoCenter__LoginInfoInterface__GetLoginInfo_name = "GetLoginInfo";

void
IceInternal::incRef(::LoginInfoCenter::LoginInfoInterface* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::LoginInfoCenter::LoginInfoInterface* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::LoginInfoCenter::LoginInfoInterface* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::LoginInfoCenter::LoginInfoInterface* p)
{
    p->__decRef();
}

void
LoginInfoCenter::__write(::IceInternal::BasicStream* __os, const ::LoginInfoCenter::LoginInfoInterfacePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
LoginInfoCenter::__read(::IceInternal::BasicStream* __is, ::LoginInfoCenter::LoginInfoInterfacePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::LoginInfoCenter::LoginInfoInterface;
        v->__copyFrom(proxy);
    }
}

void
LoginInfoCenter::__write(::IceInternal::BasicStream* __os, const ::LoginInfoCenter::LoginInfoInterfacePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

bool
LoginInfoCenter::SICELoginInfo::operator==(const SICELoginInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
LoginInfoCenter::SICELoginInfo::operator!=(const SICELoginInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(clifd != __rhs.clifd)
    {
        return true;
    }
    if(cliip != __rhs.cliip)
    {
        return true;
    }
    if(onlineTime != __rhs.onlineTime)
    {
        return true;
    }
    if(sysMsgId != __rhs.sysMsgId)
    {
        return true;
    }
    if(language != __rhs.language)
    {
        return true;
    }
    if(activeState != __rhs.activeState)
    {
        return true;
    }
    if(userLevel != __rhs.userLevel)
    {
        return true;
    }
    if(userType != __rhs.userType)
    {
        return true;
    }
    if(vipType != __rhs.vipType)
    {
        return true;
    }
    if(mulMsgFlag != __rhs.mulMsgFlag)
    {
        return true;
    }
    if(totalActDegree != __rhs.totalActDegree)
    {
        return true;
    }
    if(uid != __rhs.uid)
    {
        return true;
    }
    if(deskey != __rhs.deskey)
    {
        return true;
    }
    if(version != __rhs.version)
    {
        return true;
    }
    return false;
}

bool
LoginInfoCenter::SICELoginInfo::operator<(const SICELoginInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(clifd < __rhs.clifd)
    {
        return true;
    }
    else if(__rhs.clifd < clifd)
    {
        return false;
    }
    if(cliip < __rhs.cliip)
    {
        return true;
    }
    else if(__rhs.cliip < cliip)
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
    if(sysMsgId < __rhs.sysMsgId)
    {
        return true;
    }
    else if(__rhs.sysMsgId < sysMsgId)
    {
        return false;
    }
    if(language < __rhs.language)
    {
        return true;
    }
    else if(__rhs.language < language)
    {
        return false;
    }
    if(activeState < __rhs.activeState)
    {
        return true;
    }
    else if(__rhs.activeState < activeState)
    {
        return false;
    }
    if(userLevel < __rhs.userLevel)
    {
        return true;
    }
    else if(__rhs.userLevel < userLevel)
    {
        return false;
    }
    if(userType < __rhs.userType)
    {
        return true;
    }
    else if(__rhs.userType < userType)
    {
        return false;
    }
    if(vipType < __rhs.vipType)
    {
        return true;
    }
    else if(__rhs.vipType < vipType)
    {
        return false;
    }
    if(mulMsgFlag < __rhs.mulMsgFlag)
    {
        return true;
    }
    else if(__rhs.mulMsgFlag < mulMsgFlag)
    {
        return false;
    }
    if(totalActDegree < __rhs.totalActDegree)
    {
        return true;
    }
    else if(__rhs.totalActDegree < totalActDegree)
    {
        return false;
    }
    if(uid < __rhs.uid)
    {
        return true;
    }
    else if(__rhs.uid < uid)
    {
        return false;
    }
    if(deskey < __rhs.deskey)
    {
        return true;
    }
    else if(__rhs.deskey < deskey)
    {
        return false;
    }
    if(version < __rhs.version)
    {
        return true;
    }
    else if(__rhs.version < version)
    {
        return false;
    }
    return false;
}

void
LoginInfoCenter::SICELoginInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(clifd);
    __os->write(cliip);
    __os->write(onlineTime);
    __os->write(sysMsgId);
    __os->write(language);
    __os->write(activeState);
    __os->write(userLevel);
    __os->write(userType);
    __os->write(vipType);
    __os->write(mulMsgFlag);
    __os->write(totalActDegree);
    __os->write(uid);
    __os->write(deskey);
    __os->write(version);
}

void
LoginInfoCenter::SICELoginInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(clifd);
    __is->read(cliip);
    __is->read(onlineTime);
    __is->read(sysMsgId);
    __is->read(language);
    __is->read(activeState);
    __is->read(userLevel);
    __is->read(userType);
    __is->read(vipType);
    __is->read(mulMsgFlag);
    __is->read(totalActDegree);
    __is->read(uid);
    __is->read(deskey);
    __is->read(version);
}

void
LoginInfoCenter::__addObject(const LoginInfoInterfacePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
LoginInfoCenter::__usesClasses(const LoginInfoInterfacePtr& p)
{
    return p->__usesClasses();
}

void
LoginInfoCenter::__decRefUnsafe(const LoginInfoInterfacePtr& p)
{
    p->__decRefUnsafe();
}

void
LoginInfoCenter::__clearHandleUnsafe(LoginInfoInterfacePtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::LoginInfoCenter::LoginInfoInterface::SetLoginInfo(const ::std::string& uid, const ::LoginInfoCenter::SICELoginInfo& info, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__LoginInfoCenter__LoginInfoInterface__SetLoginInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::LoginInfoCenter::LoginInfoInterface* __del = dynamic_cast< ::IceDelegate::LoginInfoCenter::LoginInfoInterface*>(__delBase.get());
            return __del->SetLoginInfo(uid, info, __ctx);
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
IceProxy::LoginInfoCenter::LoginInfoInterface::UpdateLoginInfo(const ::LoginInfoCenter::SICELoginInfo& info, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__LoginInfoCenter__LoginInfoInterface__UpdateLoginInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::LoginInfoCenter::LoginInfoInterface* __del = dynamic_cast< ::IceDelegate::LoginInfoCenter::LoginInfoInterface*>(__delBase.get());
            return __del->UpdateLoginInfo(info, __ctx);
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
IceProxy::LoginInfoCenter::LoginInfoInterface::DelLoginInfo(const ::std::string& uid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__LoginInfoCenter__LoginInfoInterface__DelLoginInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::LoginInfoCenter::LoginInfoInterface* __del = dynamic_cast< ::IceDelegate::LoginInfoCenter::LoginInfoInterface*>(__delBase.get());
            return __del->DelLoginInfo(uid, __ctx);
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
IceProxy::LoginInfoCenter::LoginInfoInterface::GetLoginInfo(const ::std::string& uid, ::LoginInfoCenter::SICELoginInfo& obj, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__LoginInfoCenter__LoginInfoInterface__GetLoginInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::LoginInfoCenter::LoginInfoInterface* __del = dynamic_cast< ::IceDelegate::LoginInfoCenter::LoginInfoInterface*>(__delBase.get());
            return __del->GetLoginInfo(uid, obj, __ctx);
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
IceProxy::LoginInfoCenter::LoginInfoInterface::ice_staticId()
{
    return ::LoginInfoCenter::LoginInfoInterface::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::LoginInfoCenter::LoginInfoInterface::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::LoginInfoCenter::LoginInfoInterface);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::LoginInfoCenter::LoginInfoInterface::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::LoginInfoCenter::LoginInfoInterface);
}

bool
IceProxy::LoginInfoCenter::operator==(const ::IceProxy::LoginInfoCenter::LoginInfoInterface& l, const ::IceProxy::LoginInfoCenter::LoginInfoInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::LoginInfoCenter::operator!=(const ::IceProxy::LoginInfoCenter::LoginInfoInterface& l, const ::IceProxy::LoginInfoCenter::LoginInfoInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::LoginInfoCenter::operator<(const ::IceProxy::LoginInfoCenter::LoginInfoInterface& l, const ::IceProxy::LoginInfoCenter::LoginInfoInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::LoginInfoCenter::operator<=(const ::IceProxy::LoginInfoCenter::LoginInfoInterface& l, const ::IceProxy::LoginInfoCenter::LoginInfoInterface& r)
{
    return l < r || l == r;
}

bool
IceProxy::LoginInfoCenter::operator>(const ::IceProxy::LoginInfoCenter::LoginInfoInterface& l, const ::IceProxy::LoginInfoCenter::LoginInfoInterface& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::LoginInfoCenter::operator>=(const ::IceProxy::LoginInfoCenter::LoginInfoInterface& l, const ::IceProxy::LoginInfoCenter::LoginInfoInterface& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::LoginInfoCenter::LoginInfoInterface::SetLoginInfo(const ::std::string& uid, const ::LoginInfoCenter::SICELoginInfo& info, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __LoginInfoCenter__LoginInfoInterface__SetLoginInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        info.__write(__os);
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
IceDelegateM::LoginInfoCenter::LoginInfoInterface::UpdateLoginInfo(const ::LoginInfoCenter::SICELoginInfo& info, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __LoginInfoCenter__LoginInfoInterface__UpdateLoginInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        info.__write(__os);
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
IceDelegateM::LoginInfoCenter::LoginInfoInterface::DelLoginInfo(const ::std::string& uid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __LoginInfoCenter__LoginInfoInterface__DelLoginInfo_name, ::Ice::Normal, __context, __compress);
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::LoginInfoCenter::LoginInfoInterface::GetLoginInfo(const ::std::string& uid, ::LoginInfoCenter::SICELoginInfo& obj, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __LoginInfoCenter__LoginInfoInterface__GetLoginInfo_name, ::Ice::Normal, __context, __compress);
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
        obj.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::LoginInfoCenter::LoginInfoInterface::SetLoginInfo(const ::std::string& uid, const ::LoginInfoCenter::SICELoginInfo& info, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __LoginInfoCenter__LoginInfoInterface__SetLoginInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::LoginInfoCenter::LoginInfoInterface* __servant = dynamic_cast< ::LoginInfoCenter::LoginInfoInterface*>(__direct.servant().get());
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
                __ret = __servant->SetLoginInfo(uid, info, __current);
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
IceDelegateD::LoginInfoCenter::LoginInfoInterface::UpdateLoginInfo(const ::LoginInfoCenter::SICELoginInfo& info, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __LoginInfoCenter__LoginInfoInterface__UpdateLoginInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::LoginInfoCenter::LoginInfoInterface* __servant = dynamic_cast< ::LoginInfoCenter::LoginInfoInterface*>(__direct.servant().get());
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
                __ret = __servant->UpdateLoginInfo(info, __current);
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
IceDelegateD::LoginInfoCenter::LoginInfoInterface::DelLoginInfo(const ::std::string& uid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __LoginInfoCenter__LoginInfoInterface__DelLoginInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::LoginInfoCenter::LoginInfoInterface* __servant = dynamic_cast< ::LoginInfoCenter::LoginInfoInterface*>(__direct.servant().get());
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
                __ret = __servant->DelLoginInfo(uid, __current);
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
IceDelegateD::LoginInfoCenter::LoginInfoInterface::GetLoginInfo(const ::std::string& uid, ::LoginInfoCenter::SICELoginInfo& obj, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __LoginInfoCenter__LoginInfoInterface__GetLoginInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::LoginInfoCenter::LoginInfoInterface* __servant = dynamic_cast< ::LoginInfoCenter::LoginInfoInterface*>(__direct.servant().get());
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
                __ret = __servant->GetLoginInfo(uid, obj, __current);
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
LoginInfoCenter::LoginInfoInterface::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __LoginInfoCenter__LoginInfoInterface_ids[2] =
{
    "::Ice::Object",
    "::LoginInfoCenter::LoginInfoInterface"
};

bool
LoginInfoCenter::LoginInfoInterface::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__LoginInfoCenter__LoginInfoInterface_ids, __LoginInfoCenter__LoginInfoInterface_ids + 2, _s);
}

::std::vector< ::std::string>
LoginInfoCenter::LoginInfoInterface::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__LoginInfoCenter__LoginInfoInterface_ids[0], &__LoginInfoCenter__LoginInfoInterface_ids[2]);
}

const ::std::string&
LoginInfoCenter::LoginInfoInterface::ice_id(const ::Ice::Current&) const
{
    return __LoginInfoCenter__LoginInfoInterface_ids[1];
}

const ::std::string&
LoginInfoCenter::LoginInfoInterface::ice_staticId()
{
    return __LoginInfoCenter__LoginInfoInterface_ids[1];
}

::IceInternal::DispatchStatus
LoginInfoCenter::LoginInfoInterface::___SetLoginInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::LoginInfoCenter::SICELoginInfo info;
    __is->read(uid);
    info.__read(__is);
    ::Ice::Int __ret = SetLoginInfo(uid, info, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
LoginInfoCenter::LoginInfoInterface::___UpdateLoginInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::LoginInfoCenter::SICELoginInfo info;
    info.__read(__is);
    ::Ice::Int __ret = UpdateLoginInfo(info, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
LoginInfoCenter::LoginInfoInterface::___DelLoginInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::Ice::Int __ret = DelLoginInfo(uid, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
LoginInfoCenter::LoginInfoInterface::___GetLoginInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::LoginInfoCenter::SICELoginInfo obj;
    ::Ice::Int __ret = GetLoginInfo(uid, obj, __current);
    obj.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __LoginInfoCenter__LoginInfoInterface_all[] =
{
    "DelLoginInfo",
    "GetLoginInfo",
    "SetLoginInfo",
    "UpdateLoginInfo",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::IceInternal::DispatchStatus
LoginInfoCenter::LoginInfoInterface::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__LoginInfoCenter__LoginInfoInterface_all, __LoginInfoCenter__LoginInfoInterface_all + 8, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __LoginInfoCenter__LoginInfoInterface_all)
    {
        case 0:
        {
            return ___DelLoginInfo(in, current);
        }
        case 1:
        {
            return ___GetLoginInfo(in, current);
        }
        case 2:
        {
            return ___SetLoginInfo(in, current);
        }
        case 3:
        {
            return ___UpdateLoginInfo(in, current);
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
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
LoginInfoCenter::LoginInfoInterface::__write(::IceInternal::BasicStream* __os) const
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
LoginInfoCenter::LoginInfoInterface::__read(::IceInternal::BasicStream* __is, bool __rid)
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
LoginInfoCenter::LoginInfoInterface::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type LoginInfoCenter::LoginInfoInterface was not generated with stream support";
    throw ex;
}

void
LoginInfoCenter::LoginInfoInterface::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type LoginInfoCenter::LoginInfoInterface was not generated with stream support";
    throw ex;
}

void 
LoginInfoCenter::__patch__LoginInfoInterfacePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::LoginInfoCenter::LoginInfoInterfacePtr* p = static_cast< ::LoginInfoCenter::LoginInfoInterfacePtr*>(__addr);
    assert(p);
    *p = ::LoginInfoCenter::LoginInfoInterfacePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::LoginInfoCenter::LoginInfoInterface::ice_staticId();
        throw e;
    }
}

bool
LoginInfoCenter::operator==(const ::LoginInfoCenter::LoginInfoInterface& l, const ::LoginInfoCenter::LoginInfoInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
LoginInfoCenter::operator!=(const ::LoginInfoCenter::LoginInfoInterface& l, const ::LoginInfoCenter::LoginInfoInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
LoginInfoCenter::operator<(const ::LoginInfoCenter::LoginInfoInterface& l, const ::LoginInfoCenter::LoginInfoInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
LoginInfoCenter::operator<=(const ::LoginInfoCenter::LoginInfoInterface& l, const ::LoginInfoCenter::LoginInfoInterface& r)
{
    return l < r || l == r;
}

bool
LoginInfoCenter::operator>(const ::LoginInfoCenter::LoginInfoInterface& l, const ::LoginInfoCenter::LoginInfoInterface& r)
{
    return !(l < r) && !(l == r);
}

bool
LoginInfoCenter::operator>=(const ::LoginInfoCenter::LoginInfoInterface& l, const ::LoginInfoCenter::LoginInfoInterface& r)
{
    return !(l < r);
}
