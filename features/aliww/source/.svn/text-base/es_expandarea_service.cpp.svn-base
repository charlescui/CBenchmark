// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `es_expandarea_service.ice'

#include <es_expandarea_service.h>
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

static const ::std::string __IMSINNER__ESICEExpandArea__getESExpandArea_name = "getESExpandArea";

static const ::std::string __IMSINNER__ESICEExpandArea__getESExpandAreaById_name = "getESExpandAreaById";

static const ::std::string __IMSINNER__ESICEExpandArea__addESExpandArea_name = "addESExpandArea";

static const ::std::string __IMSINNER__ESICEExpandArea__updateESExpandArea_name = "updateESExpandArea";

static const ::std::string __IMSINNER__ESICEExpandArea__delESExpandArea_name = "delESExpandArea";

void
IceInternal::incRef(::IMSINNER::ESICEExpandArea* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IMSINNER::ESICEExpandArea* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::IMSINNER::ESICEExpandArea* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::IMSINNER::ESICEExpandArea* p)
{
    p->__decRef();
}

void
IMSINNER::__write(::IceInternal::BasicStream* __os, const ::IMSINNER::ESICEExpandAreaPrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
IMSINNER::__read(::IceInternal::BasicStream* __is, ::IMSINNER::ESICEExpandAreaPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::IMSINNER::ESICEExpandArea;
        v->__copyFrom(proxy);
    }
}

void
IMSINNER::__write(::IceInternal::BasicStream* __os, const ::IMSINNER::ESICEExpandAreaPtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

bool
IMSINNER::SICEExpandArea::operator==(const SICEExpandArea& __rhs) const
{
    return !operator!=(__rhs);
}

bool
IMSINNER::SICEExpandArea::operator!=(const SICEExpandArea& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(id != __rhs.id)
    {
        return true;
    }
    if(areaname != __rhs.areaname)
    {
        return true;
    }
    if(url != __rhs.url)
    {
        return true;
    }
    if(picpath != __rhs.picpath)
    {
        return true;
    }
    if(createtime != __rhs.createtime)
    {
        return true;
    }
    return false;
}

bool
IMSINNER::SICEExpandArea::operator<(const SICEExpandArea& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(id < __rhs.id)
    {
        return true;
    }
    else if(__rhs.id < id)
    {
        return false;
    }
    if(areaname < __rhs.areaname)
    {
        return true;
    }
    else if(__rhs.areaname < areaname)
    {
        return false;
    }
    if(url < __rhs.url)
    {
        return true;
    }
    else if(__rhs.url < url)
    {
        return false;
    }
    if(picpath < __rhs.picpath)
    {
        return true;
    }
    else if(__rhs.picpath < picpath)
    {
        return false;
    }
    if(createtime < __rhs.createtime)
    {
        return true;
    }
    else if(__rhs.createtime < createtime)
    {
        return false;
    }
    return false;
}

void
IMSINNER::SICEExpandArea::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(id);
    __os->write(areaname);
    __os->write(url);
    __os->write(picpath);
    __os->write(createtime);
}

void
IMSINNER::SICEExpandArea::__read(::IceInternal::BasicStream* __is)
{
    __is->read(id);
    __is->read(areaname);
    __is->read(url);
    __is->read(picpath);
    __is->read(createtime);
}

void
IMSINNER::__write(::IceInternal::BasicStream* __os, const ::IMSINNER::SICEExpandArea* begin, const ::IMSINNER::SICEExpandArea* end, ::IMSINNER::__U__SICEExpandAreaSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
IMSINNER::__read(::IceInternal::BasicStream* __is, ::IMSINNER::SICEExpandAreaSeq& v, ::IMSINNER::__U__SICEExpandAreaSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 8);
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
IMSINNER::__addObject(const ESICEExpandAreaPtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
IMSINNER::__usesClasses(const ESICEExpandAreaPtr& p)
{
    return p->__usesClasses();
}

void
IMSINNER::__decRefUnsafe(const ESICEExpandAreaPtr& p)
{
    p->__decRefUnsafe();
}

void
IMSINNER::__clearHandleUnsafe(ESICEExpandAreaPtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::IMSINNER::ESICEExpandArea::getESExpandArea(const ::std::string& uid, ::IMSINNER::SICEExpandAreaSeq& areaInfos, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__ESICEExpandArea__getESExpandArea_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::ESICEExpandArea* __del = dynamic_cast< ::IceDelegate::IMSINNER::ESICEExpandArea*>(__delBase.get());
            return __del->getESExpandArea(uid, areaInfos, __ctx);
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
IceProxy::IMSINNER::ESICEExpandArea::getESExpandAreaById(const ::std::string& uid, ::Ice::Int id, ::IMSINNER::SICEExpandArea& areaInfos, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__ESICEExpandArea__getESExpandAreaById_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::ESICEExpandArea* __del = dynamic_cast< ::IceDelegate::IMSINNER::ESICEExpandArea*>(__delBase.get());
            return __del->getESExpandAreaById(uid, id, areaInfos, __ctx);
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
IceProxy::IMSINNER::ESICEExpandArea::addESExpandArea(const ::std::string& uid, const ::IMSINNER::SICEExpandArea& areaInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__ESICEExpandArea__addESExpandArea_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::ESICEExpandArea* __del = dynamic_cast< ::IceDelegate::IMSINNER::ESICEExpandArea*>(__delBase.get());
            return __del->addESExpandArea(uid, areaInfo, __ctx);
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
IceProxy::IMSINNER::ESICEExpandArea::updateESExpandArea(const ::std::string& uid, const ::IMSINNER::SICEExpandArea& areaInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__ESICEExpandArea__updateESExpandArea_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::ESICEExpandArea* __del = dynamic_cast< ::IceDelegate::IMSINNER::ESICEExpandArea*>(__delBase.get());
            return __del->updateESExpandArea(uid, areaInfo, __ctx);
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
IceProxy::IMSINNER::ESICEExpandArea::delESExpandArea(const ::std::string& uid, ::Ice::Int id, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__ESICEExpandArea__delESExpandArea_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::ESICEExpandArea* __del = dynamic_cast< ::IceDelegate::IMSINNER::ESICEExpandArea*>(__delBase.get());
            return __del->delESExpandArea(uid, id, __ctx);
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
IceProxy::IMSINNER::ESICEExpandArea::ice_staticId()
{
    return ::IMSINNER::ESICEExpandArea::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::IMSINNER::ESICEExpandArea::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::IMSINNER::ESICEExpandArea);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::IMSINNER::ESICEExpandArea::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::IMSINNER::ESICEExpandArea);
}

bool
IceProxy::IMSINNER::operator==(const ::IceProxy::IMSINNER::ESICEExpandArea& l, const ::IceProxy::IMSINNER::ESICEExpandArea& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::IMSINNER::operator!=(const ::IceProxy::IMSINNER::ESICEExpandArea& l, const ::IceProxy::IMSINNER::ESICEExpandArea& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::IMSINNER::operator<(const ::IceProxy::IMSINNER::ESICEExpandArea& l, const ::IceProxy::IMSINNER::ESICEExpandArea& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::IMSINNER::operator<=(const ::IceProxy::IMSINNER::ESICEExpandArea& l, const ::IceProxy::IMSINNER::ESICEExpandArea& r)
{
    return l < r || l == r;
}

bool
IceProxy::IMSINNER::operator>(const ::IceProxy::IMSINNER::ESICEExpandArea& l, const ::IceProxy::IMSINNER::ESICEExpandArea& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::IMSINNER::operator>=(const ::IceProxy::IMSINNER::ESICEExpandArea& l, const ::IceProxy::IMSINNER::ESICEExpandArea& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::IMSINNER::ESICEExpandArea::getESExpandArea(const ::std::string& uid, ::IMSINNER::SICEExpandAreaSeq& areaInfos, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__ESICEExpandArea__getESExpandArea_name, ::Ice::Normal, __context, __compress);
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
        ::IMSINNER::__read(__is, areaInfos, ::IMSINNER::__U__SICEExpandAreaSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::ESICEExpandArea::getESExpandAreaById(const ::std::string& uid, ::Ice::Int id, ::IMSINNER::SICEExpandArea& areaInfos, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__ESICEExpandArea__getESExpandAreaById_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
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
        areaInfos.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::ESICEExpandArea::addESExpandArea(const ::std::string& uid, const ::IMSINNER::SICEExpandArea& areaInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__ESICEExpandArea__addESExpandArea_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        areaInfo.__write(__os);
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
IceDelegateM::IMSINNER::ESICEExpandArea::updateESExpandArea(const ::std::string& uid, const ::IMSINNER::SICEExpandArea& areaInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__ESICEExpandArea__updateESExpandArea_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        areaInfo.__write(__os);
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
IceDelegateM::IMSINNER::ESICEExpandArea::delESExpandArea(const ::std::string& uid, ::Ice::Int id, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__ESICEExpandArea__delESExpandArea_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
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
IceDelegateD::IMSINNER::ESICEExpandArea::getESExpandArea(const ::std::string& uid, ::IMSINNER::SICEExpandAreaSeq& areaInfos, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__ESICEExpandArea__getESExpandArea_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::ESICEExpandArea* __servant = dynamic_cast< ::IMSINNER::ESICEExpandArea*>(__direct.servant().get());
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
                __ret = __servant->getESExpandArea(uid, areaInfos, __current);
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
IceDelegateD::IMSINNER::ESICEExpandArea::getESExpandAreaById(const ::std::string& uid, ::Ice::Int id, ::IMSINNER::SICEExpandArea& areaInfos, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__ESICEExpandArea__getESExpandAreaById_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::ESICEExpandArea* __servant = dynamic_cast< ::IMSINNER::ESICEExpandArea*>(__direct.servant().get());
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
                __ret = __servant->getESExpandAreaById(uid, id, areaInfos, __current);
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
IceDelegateD::IMSINNER::ESICEExpandArea::addESExpandArea(const ::std::string& uid, const ::IMSINNER::SICEExpandArea& areaInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__ESICEExpandArea__addESExpandArea_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::ESICEExpandArea* __servant = dynamic_cast< ::IMSINNER::ESICEExpandArea*>(__direct.servant().get());
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
                __ret = __servant->addESExpandArea(uid, areaInfo, __current);
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
IceDelegateD::IMSINNER::ESICEExpandArea::updateESExpandArea(const ::std::string& uid, const ::IMSINNER::SICEExpandArea& areaInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__ESICEExpandArea__updateESExpandArea_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::ESICEExpandArea* __servant = dynamic_cast< ::IMSINNER::ESICEExpandArea*>(__direct.servant().get());
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
                __ret = __servant->updateESExpandArea(uid, areaInfo, __current);
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
IceDelegateD::IMSINNER::ESICEExpandArea::delESExpandArea(const ::std::string& uid, ::Ice::Int id, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__ESICEExpandArea__delESExpandArea_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::ESICEExpandArea* __servant = dynamic_cast< ::IMSINNER::ESICEExpandArea*>(__direct.servant().get());
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
                __ret = __servant->delESExpandArea(uid, id, __current);
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
IMSINNER::ESICEExpandArea::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __IMSINNER__ESICEExpandArea_ids[2] =
{
    "::IMSINNER::ESICEExpandArea",
    "::Ice::Object"
};

bool
IMSINNER::ESICEExpandArea::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__IMSINNER__ESICEExpandArea_ids, __IMSINNER__ESICEExpandArea_ids + 2, _s);
}

::std::vector< ::std::string>
IMSINNER::ESICEExpandArea::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__IMSINNER__ESICEExpandArea_ids[0], &__IMSINNER__ESICEExpandArea_ids[2]);
}

const ::std::string&
IMSINNER::ESICEExpandArea::ice_id(const ::Ice::Current&) const
{
    return __IMSINNER__ESICEExpandArea_ids[0];
}

const ::std::string&
IMSINNER::ESICEExpandArea::ice_staticId()
{
    return __IMSINNER__ESICEExpandArea_ids[0];
}

::IceInternal::DispatchStatus
IMSINNER::ESICEExpandArea::___getESExpandArea(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::IMSINNER::SICEExpandAreaSeq areaInfos;
    ::Ice::Int __ret = getESExpandArea(uid, areaInfos, __current);
    if(areaInfos.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::IMSINNER::__write(__os, &areaInfos[0], &areaInfos[0] + areaInfos.size(), ::IMSINNER::__U__SICEExpandAreaSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::ESICEExpandArea::___getESExpandAreaById(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::Ice::Int id;
    __is->read(uid);
    __is->read(id);
    ::IMSINNER::SICEExpandArea areaInfos;
    ::Ice::Int __ret = getESExpandAreaById(uid, id, areaInfos, __current);
    areaInfos.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::ESICEExpandArea::___addESExpandArea(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::IMSINNER::SICEExpandArea areaInfo;
    __is->read(uid);
    areaInfo.__read(__is);
    ::Ice::Int __ret = addESExpandArea(uid, areaInfo, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::ESICEExpandArea::___updateESExpandArea(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::IMSINNER::SICEExpandArea areaInfo;
    __is->read(uid);
    areaInfo.__read(__is);
    ::Ice::Int __ret = updateESExpandArea(uid, areaInfo, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::ESICEExpandArea::___delESExpandArea(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::Ice::Int id;
    __is->read(uid);
    __is->read(id);
    ::Ice::Int __ret = delESExpandArea(uid, id, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __IMSINNER__ESICEExpandArea_all[] =
{
    "addESExpandArea",
    "delESExpandArea",
    "getESExpandArea",
    "getESExpandAreaById",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "updateESExpandArea"
};

::IceInternal::DispatchStatus
IMSINNER::ESICEExpandArea::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__IMSINNER__ESICEExpandArea_all, __IMSINNER__ESICEExpandArea_all + 9, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __IMSINNER__ESICEExpandArea_all)
    {
        case 0:
        {
            return ___addESExpandArea(in, current);
        }
        case 1:
        {
            return ___delESExpandArea(in, current);
        }
        case 2:
        {
            return ___getESExpandArea(in, current);
        }
        case 3:
        {
            return ___getESExpandAreaById(in, current);
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
            return ___updateESExpandArea(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
IMSINNER::ESICEExpandArea::__write(::IceInternal::BasicStream* __os) const
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
IMSINNER::ESICEExpandArea::__read(::IceInternal::BasicStream* __is, bool __rid)
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
IMSINNER::ESICEExpandArea::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type IMSINNER::ESICEExpandArea was not generated with stream support";
    throw ex;
}

void
IMSINNER::ESICEExpandArea::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type IMSINNER::ESICEExpandArea was not generated with stream support";
    throw ex;
}

void 
IMSINNER::__patch__ESICEExpandAreaPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::IMSINNER::ESICEExpandAreaPtr* p = static_cast< ::IMSINNER::ESICEExpandAreaPtr*>(__addr);
    assert(p);
    *p = ::IMSINNER::ESICEExpandAreaPtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::IMSINNER::ESICEExpandArea::ice_staticId();
        throw e;
    }
}

bool
IMSINNER::operator==(const ::IMSINNER::ESICEExpandArea& l, const ::IMSINNER::ESICEExpandArea& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
IMSINNER::operator!=(const ::IMSINNER::ESICEExpandArea& l, const ::IMSINNER::ESICEExpandArea& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
IMSINNER::operator<(const ::IMSINNER::ESICEExpandArea& l, const ::IMSINNER::ESICEExpandArea& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
IMSINNER::operator<=(const ::IMSINNER::ESICEExpandArea& l, const ::IMSINNER::ESICEExpandArea& r)
{
    return l < r || l == r;
}

bool
IMSINNER::operator>(const ::IMSINNER::ESICEExpandArea& l, const ::IMSINNER::ESICEExpandArea& r)
{
    return !(l < r) && !(l == r);
}

bool
IMSINNER::operator>=(const ::IMSINNER::ESICEExpandArea& l, const ::IMSINNER::ESICEExpandArea& r)
{
    return !(l < r);
}
