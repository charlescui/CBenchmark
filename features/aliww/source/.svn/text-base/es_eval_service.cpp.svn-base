// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `es_eval_service.ice'

#include <es_eval_service.h>
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

static const ::std::string __IMSINNER__ESICEEval__setESEval_name = "setESEval";

static const ::std::string __IMSINNER__ESICEEval__getESEval_name = "getESEval";

static const ::std::string __IMSINNER__ESICEEval__setESEvalResult_name = "setESEvalResult";

static const ::std::string __IMSINNER__ESICEEval__getESEvalResult_name = "getESEvalResult";

static const ::std::string __IMSINNER__ESICEEval__getESEvalResultToday_name = "getESEvalResultToday";

static const ::std::string __IMSINNER__ESICEEval__getESEvalResultHistory_name = "getESEvalResultHistory";

static const ::std::string __IMSINNER__ESICEEval__getESEvalResultHistorybypage_name = "getESEvalResultHistorybypage";

void
IceInternal::incRef(::IMSINNER::ESICEEval* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IMSINNER::ESICEEval* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::IMSINNER::ESICEEval* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::IMSINNER::ESICEEval* p)
{
    p->__decRef();
}

void
IMSINNER::__write(::IceInternal::BasicStream* __os, const ::IMSINNER::ESICEEvalPrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
IMSINNER::__read(::IceInternal::BasicStream* __is, ::IMSINNER::ESICEEvalPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::IMSINNER::ESICEEval;
        v->__copyFrom(proxy);
    }
}

void
IMSINNER::__write(::IceInternal::BasicStream* __os, const ::IMSINNER::ESICEEvalPtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

bool
IMSINNER::SICEESEval::operator==(const SICEESEval& __rhs) const
{
    return !operator!=(__rhs);
}

bool
IMSINNER::SICEESEval::operator!=(const SICEESEval& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(code != __rhs.code)
    {
        return true;
    }
    if(codename != __rhs.codename)
    {
        return true;
    }
    if(welcome != __rhs.welcome)
    {
        return true;
    }
    return false;
}

bool
IMSINNER::SICEESEval::operator<(const SICEESEval& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(code < __rhs.code)
    {
        return true;
    }
    else if(__rhs.code < code)
    {
        return false;
    }
    if(codename < __rhs.codename)
    {
        return true;
    }
    else if(__rhs.codename < codename)
    {
        return false;
    }
    if(welcome < __rhs.welcome)
    {
        return true;
    }
    else if(__rhs.welcome < welcome)
    {
        return false;
    }
    return false;
}

void
IMSINNER::SICEESEval::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(code);
    __os->write(codename);
    __os->write(welcome);
}

void
IMSINNER::SICEESEval::__read(::IceInternal::BasicStream* __is)
{
    __is->read(code);
    __is->read(codename);
    __is->read(welcome);
}

void
IMSINNER::__write(::IceInternal::BasicStream* __os, const ::IMSINNER::SICEESEval* begin, const ::IMSINNER::SICEESEval* end, ::IMSINNER::__U__SICEESEvalSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
IMSINNER::__read(::IceInternal::BasicStream* __is, ::IMSINNER::SICEESEvalSeq& v, ::IMSINNER::__U__SICEESEvalSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 6);
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
IMSINNER::SICEESCode::operator==(const SICEESCode& __rhs) const
{
    return !operator!=(__rhs);
}

bool
IMSINNER::SICEESCode::operator!=(const SICEESCode& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(code != __rhs.code)
    {
        return true;
    }
    if(codename != __rhs.codename)
    {
        return true;
    }
    if(num != __rhs.num)
    {
        return true;
    }
    return false;
}

bool
IMSINNER::SICEESCode::operator<(const SICEESCode& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(code < __rhs.code)
    {
        return true;
    }
    else if(__rhs.code < code)
    {
        return false;
    }
    if(codename < __rhs.codename)
    {
        return true;
    }
    else if(__rhs.codename < codename)
    {
        return false;
    }
    if(num < __rhs.num)
    {
        return true;
    }
    else if(__rhs.num < num)
    {
        return false;
    }
    return false;
}

void
IMSINNER::SICEESCode::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(code);
    __os->write(codename);
    __os->write(num);
}

void
IMSINNER::SICEESCode::__read(::IceInternal::BasicStream* __is)
{
    __is->read(code);
    __is->read(codename);
    __is->read(num);
}

void
IMSINNER::__write(::IceInternal::BasicStream* __os, const ::IMSINNER::SICEESCode* begin, const ::IMSINNER::SICEESCode* end, ::IMSINNER::__U__SICEESCodeSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
IMSINNER::__read(::IceInternal::BasicStream* __is, ::IMSINNER::SICEESCodeSeq& v, ::IMSINNER::__U__SICEESCodeSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 9);
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
IMSINNER::SICEESEvalResult::operator==(const SICEESEvalResult& __rhs) const
{
    return !operator!=(__rhs);
}

bool
IMSINNER::SICEESEvalResult::operator!=(const SICEESEvalResult& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(uid != __rhs.uid)
    {
        return true;
    }
    if(sendNum != __rhs.sendNum)
    {
        return true;
    }
    if(receNum != __rhs.receNum)
    {
        return true;
    }
    if(codes != __rhs.codes)
    {
        return true;
    }
    return false;
}

bool
IMSINNER::SICEESEvalResult::operator<(const SICEESEvalResult& __rhs) const
{
    if(this == &__rhs)
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
    if(sendNum < __rhs.sendNum)
    {
        return true;
    }
    else if(__rhs.sendNum < sendNum)
    {
        return false;
    }
    if(receNum < __rhs.receNum)
    {
        return true;
    }
    else if(__rhs.receNum < receNum)
    {
        return false;
    }
    if(codes < __rhs.codes)
    {
        return true;
    }
    else if(__rhs.codes < codes)
    {
        return false;
    }
    return false;
}

void
IMSINNER::SICEESEvalResult::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(uid);
    __os->write(sendNum);
    __os->write(receNum);
    if(codes.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::IMSINNER::__write(__os, &codes[0], &codes[0] + codes.size(), ::IMSINNER::__U__SICEESCodeSeq());
    }
}

void
IMSINNER::SICEESEvalResult::__read(::IceInternal::BasicStream* __is)
{
    __is->read(uid);
    __is->read(sendNum);
    __is->read(receNum);
    ::IMSINNER::__read(__is, codes, ::IMSINNER::__U__SICEESCodeSeq());
}

void
IMSINNER::__write(::IceInternal::BasicStream* __os, const ::IMSINNER::SICEESEvalResult* begin, const ::IMSINNER::SICEESEvalResult* end, ::IMSINNER::__U__SICEESEvalResultSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
IMSINNER::__read(::IceInternal::BasicStream* __is, ::IMSINNER::SICEESEvalResultSeq& v, ::IMSINNER::__U__SICEESEvalResultSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 10);
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
IMSINNER::SICEESEvalResultEx::operator==(const SICEESEvalResultEx& __rhs) const
{
    return !operator!=(__rhs);
}

bool
IMSINNER::SICEESEvalResultEx::operator!=(const SICEESEvalResultEx& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(uid != __rhs.uid)
    {
        return true;
    }
    if(sendNum != __rhs.sendNum)
    {
        return true;
    }
    if(receNum != __rhs.receNum)
    {
        return true;
    }
    if(codes != __rhs.codes)
    {
        return true;
    }
    if(evalDate != __rhs.evalDate)
    {
        return true;
    }
    return false;
}

bool
IMSINNER::SICEESEvalResultEx::operator<(const SICEESEvalResultEx& __rhs) const
{
    if(this == &__rhs)
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
    if(sendNum < __rhs.sendNum)
    {
        return true;
    }
    else if(__rhs.sendNum < sendNum)
    {
        return false;
    }
    if(receNum < __rhs.receNum)
    {
        return true;
    }
    else if(__rhs.receNum < receNum)
    {
        return false;
    }
    if(codes < __rhs.codes)
    {
        return true;
    }
    else if(__rhs.codes < codes)
    {
        return false;
    }
    if(evalDate < __rhs.evalDate)
    {
        return true;
    }
    else if(__rhs.evalDate < evalDate)
    {
        return false;
    }
    return false;
}

void
IMSINNER::SICEESEvalResultEx::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(uid);
    __os->write(sendNum);
    __os->write(receNum);
    if(codes.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::IMSINNER::__write(__os, &codes[0], &codes[0] + codes.size(), ::IMSINNER::__U__SICEESCodeSeq());
    }
    __os->write(evalDate);
}

void
IMSINNER::SICEESEvalResultEx::__read(::IceInternal::BasicStream* __is)
{
    __is->read(uid);
    __is->read(sendNum);
    __is->read(receNum);
    ::IMSINNER::__read(__is, codes, ::IMSINNER::__U__SICEESCodeSeq());
    __is->read(evalDate);
}

void
IMSINNER::__write(::IceInternal::BasicStream* __os, const ::IMSINNER::SICEESEvalResultEx* begin, const ::IMSINNER::SICEESEvalResultEx* end, ::IMSINNER::__U__SICEESEvalResultExSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
IMSINNER::__read(::IceInternal::BasicStream* __is, ::IMSINNER::SICEESEvalResultExSeq& v, ::IMSINNER::__U__SICEESEvalResultExSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 11);
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
IMSINNER::__addObject(const ESICEEvalPtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
IMSINNER::__usesClasses(const ESICEEvalPtr& p)
{
    return p->__usesClasses();
}

void
IMSINNER::__decRefUnsafe(const ESICEEvalPtr& p)
{
    p->__decRefUnsafe();
}

void
IMSINNER::__clearHandleUnsafe(ESICEEvalPtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::IMSINNER::ESICEEval::setESEval(const ::std::string& uid, const ::std::string& evalcontent, const ::std::string& welcome, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__ESICEEval__setESEval_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::ESICEEval* __del = dynamic_cast< ::IceDelegate::IMSINNER::ESICEEval*>(__delBase.get());
            return __del->setESEval(uid, evalcontent, welcome, __ctx);
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
IceProxy::IMSINNER::ESICEEval::getESEval(const ::std::string& uid, ::std::string& evalcontent, ::std::string& welcome, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__ESICEEval__getESEval_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::ESICEEval* __del = dynamic_cast< ::IceDelegate::IMSINNER::ESICEEval*>(__delBase.get());
            return __del->getESEval(uid, evalcontent, welcome, __ctx);
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
IceProxy::IMSINNER::ESICEEval::setESEvalResult(const ::std::string& uid, const ::std::string& buyerid, ::Ice::Int evalId, const ::std::string& evalresult, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__ESICEEval__setESEvalResult_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::ESICEEval* __del = dynamic_cast< ::IceDelegate::IMSINNER::ESICEEval*>(__delBase.get());
            return __del->setESEvalResult(uid, buyerid, evalId, evalresult, __ctx);
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
IceProxy::IMSINNER::ESICEEval::getESEvalResult(const ::std::string& uid, const ::std::string& buyerid, ::Ice::Int evalId, ::std::string& evalresult, ::std::string& gmtcreate, ::std::string& gmtmodify, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__ESICEEval__getESEvalResult_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::ESICEEval* __del = dynamic_cast< ::IceDelegate::IMSINNER::ESICEEval*>(__delBase.get());
            return __del->getESEvalResult(uid, buyerid, evalId, evalresult, gmtcreate, gmtmodify, __ctx);
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
IceProxy::IMSINNER::ESICEEval::getESEvalResultToday(const ::std::string& uid, ::IMSINNER::SICEESEvalResultSeq& evalInfos, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__ESICEEval__getESEvalResultToday_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::ESICEEval* __del = dynamic_cast< ::IceDelegate::IMSINNER::ESICEEval*>(__delBase.get());
            return __del->getESEvalResultToday(uid, evalInfos, __ctx);
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
IceProxy::IMSINNER::ESICEEval::getESEvalResultHistory(const ::std::string& uid, const ::std::string& querytime, ::IMSINNER::SICEESEvalResultSeq& evalInfos, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__ESICEEval__getESEvalResultHistory_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::ESICEEval* __del = dynamic_cast< ::IceDelegate::IMSINNER::ESICEEval*>(__delBase.get());
            return __del->getESEvalResultHistory(uid, querytime, evalInfos, __ctx);
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
IceProxy::IMSINNER::ESICEEval::getESEvalResultHistorybypage(const ::std::string& uid, const ::std::string& childid, const ::std::string& begindate, const ::std::string& enddate, ::Ice::Int pageno, ::Ice::Int pagesize, ::Ice::Int& pagecount, ::IMSINNER::SICEESEvalResultExSeq& evalInfos, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__ESICEEval__getESEvalResultHistorybypage_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::ESICEEval* __del = dynamic_cast< ::IceDelegate::IMSINNER::ESICEEval*>(__delBase.get());
            return __del->getESEvalResultHistorybypage(uid, childid, begindate, enddate, pageno, pagesize, pagecount, evalInfos, __ctx);
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
IceProxy::IMSINNER::ESICEEval::ice_staticId()
{
    return ::IMSINNER::ESICEEval::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::IMSINNER::ESICEEval::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::IMSINNER::ESICEEval);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::IMSINNER::ESICEEval::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::IMSINNER::ESICEEval);
}

bool
IceProxy::IMSINNER::operator==(const ::IceProxy::IMSINNER::ESICEEval& l, const ::IceProxy::IMSINNER::ESICEEval& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::IMSINNER::operator!=(const ::IceProxy::IMSINNER::ESICEEval& l, const ::IceProxy::IMSINNER::ESICEEval& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::IMSINNER::operator<(const ::IceProxy::IMSINNER::ESICEEval& l, const ::IceProxy::IMSINNER::ESICEEval& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::IMSINNER::operator<=(const ::IceProxy::IMSINNER::ESICEEval& l, const ::IceProxy::IMSINNER::ESICEEval& r)
{
    return l < r || l == r;
}

bool
IceProxy::IMSINNER::operator>(const ::IceProxy::IMSINNER::ESICEEval& l, const ::IceProxy::IMSINNER::ESICEEval& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::IMSINNER::operator>=(const ::IceProxy::IMSINNER::ESICEEval& l, const ::IceProxy::IMSINNER::ESICEEval& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::IMSINNER::ESICEEval::setESEval(const ::std::string& uid, const ::std::string& evalcontent, const ::std::string& welcome, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__ESICEEval__setESEval_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(evalcontent);
        __os->write(welcome);
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
IceDelegateM::IMSINNER::ESICEEval::getESEval(const ::std::string& uid, ::std::string& evalcontent, ::std::string& welcome, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__ESICEEval__getESEval_name, ::Ice::Normal, __context, __compress);
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
        __is->read(evalcontent);
        __is->read(welcome);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::ESICEEval::setESEvalResult(const ::std::string& uid, const ::std::string& buyerid, ::Ice::Int evalId, const ::std::string& evalresult, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__ESICEEval__setESEvalResult_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(buyerid);
        __os->write(evalId);
        __os->write(evalresult);
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
IceDelegateM::IMSINNER::ESICEEval::getESEvalResult(const ::std::string& uid, const ::std::string& buyerid, ::Ice::Int evalId, ::std::string& evalresult, ::std::string& gmtcreate, ::std::string& gmtmodify, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__ESICEEval__getESEvalResult_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(buyerid);
        __os->write(evalId);
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
        __is->read(evalresult);
        __is->read(gmtcreate);
        __is->read(gmtmodify);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::ESICEEval::getESEvalResultToday(const ::std::string& uid, ::IMSINNER::SICEESEvalResultSeq& evalInfos, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__ESICEEval__getESEvalResultToday_name, ::Ice::Normal, __context, __compress);
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
        ::IMSINNER::__read(__is, evalInfos, ::IMSINNER::__U__SICEESEvalResultSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::ESICEEval::getESEvalResultHistory(const ::std::string& uid, const ::std::string& querytime, ::IMSINNER::SICEESEvalResultSeq& evalInfos, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__ESICEEval__getESEvalResultHistory_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(querytime);
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
        ::IMSINNER::__read(__is, evalInfos, ::IMSINNER::__U__SICEESEvalResultSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::ESICEEval::getESEvalResultHistorybypage(const ::std::string& uid, const ::std::string& childid, const ::std::string& begindate, const ::std::string& enddate, ::Ice::Int pageno, ::Ice::Int pagesize, ::Ice::Int& pagecount, ::IMSINNER::SICEESEvalResultExSeq& evalInfos, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__ESICEEval__getESEvalResultHistorybypage_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(childid);
        __os->write(begindate);
        __os->write(enddate);
        __os->write(pageno);
        __os->write(pagesize);
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
        __is->read(pagecount);
        ::IMSINNER::__read(__is, evalInfos, ::IMSINNER::__U__SICEESEvalResultExSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::IMSINNER::ESICEEval::setESEval(const ::std::string& uid, const ::std::string& evalcontent, const ::std::string& welcome, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__ESICEEval__setESEval_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::ESICEEval* __servant = dynamic_cast< ::IMSINNER::ESICEEval*>(__direct.servant().get());
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
                __ret = __servant->setESEval(uid, evalcontent, welcome, __current);
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
IceDelegateD::IMSINNER::ESICEEval::getESEval(const ::std::string& uid, ::std::string& evalcontent, ::std::string& welcome, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__ESICEEval__getESEval_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::ESICEEval* __servant = dynamic_cast< ::IMSINNER::ESICEEval*>(__direct.servant().get());
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
                __ret = __servant->getESEval(uid, evalcontent, welcome, __current);
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
IceDelegateD::IMSINNER::ESICEEval::setESEvalResult(const ::std::string& uid, const ::std::string& buyerid, ::Ice::Int evalId, const ::std::string& evalresult, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__ESICEEval__setESEvalResult_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::ESICEEval* __servant = dynamic_cast< ::IMSINNER::ESICEEval*>(__direct.servant().get());
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
                __ret = __servant->setESEvalResult(uid, buyerid, evalId, evalresult, __current);
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
IceDelegateD::IMSINNER::ESICEEval::getESEvalResult(const ::std::string& uid, const ::std::string& buyerid, ::Ice::Int evalId, ::std::string& evalresult, ::std::string& gmtcreate, ::std::string& gmtmodify, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__ESICEEval__getESEvalResult_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::ESICEEval* __servant = dynamic_cast< ::IMSINNER::ESICEEval*>(__direct.servant().get());
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
                __ret = __servant->getESEvalResult(uid, buyerid, evalId, evalresult, gmtcreate, gmtmodify, __current);
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
IceDelegateD::IMSINNER::ESICEEval::getESEvalResultToday(const ::std::string& uid, ::IMSINNER::SICEESEvalResultSeq& evalInfos, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__ESICEEval__getESEvalResultToday_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::ESICEEval* __servant = dynamic_cast< ::IMSINNER::ESICEEval*>(__direct.servant().get());
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
                __ret = __servant->getESEvalResultToday(uid, evalInfos, __current);
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
IceDelegateD::IMSINNER::ESICEEval::getESEvalResultHistory(const ::std::string& uid, const ::std::string& querytime, ::IMSINNER::SICEESEvalResultSeq& evalInfos, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__ESICEEval__getESEvalResultHistory_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::ESICEEval* __servant = dynamic_cast< ::IMSINNER::ESICEEval*>(__direct.servant().get());
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
                __ret = __servant->getESEvalResultHistory(uid, querytime, evalInfos, __current);
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
IceDelegateD::IMSINNER::ESICEEval::getESEvalResultHistorybypage(const ::std::string& uid, const ::std::string& childid, const ::std::string& begindate, const ::std::string& enddate, ::Ice::Int pageno, ::Ice::Int pagesize, ::Ice::Int& pagecount, ::IMSINNER::SICEESEvalResultExSeq& evalInfos, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__ESICEEval__getESEvalResultHistorybypage_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::ESICEEval* __servant = dynamic_cast< ::IMSINNER::ESICEEval*>(__direct.servant().get());
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
                __ret = __servant->getESEvalResultHistorybypage(uid, childid, begindate, enddate, pageno, pagesize, pagecount, evalInfos, __current);
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
IMSINNER::ESICEEval::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __IMSINNER__ESICEEval_ids[2] =
{
    "::IMSINNER::ESICEEval",
    "::Ice::Object"
};

bool
IMSINNER::ESICEEval::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__IMSINNER__ESICEEval_ids, __IMSINNER__ESICEEval_ids + 2, _s);
}

::std::vector< ::std::string>
IMSINNER::ESICEEval::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__IMSINNER__ESICEEval_ids[0], &__IMSINNER__ESICEEval_ids[2]);
}

const ::std::string&
IMSINNER::ESICEEval::ice_id(const ::Ice::Current&) const
{
    return __IMSINNER__ESICEEval_ids[0];
}

const ::std::string&
IMSINNER::ESICEEval::ice_staticId()
{
    return __IMSINNER__ESICEEval_ids[0];
}

::IceInternal::DispatchStatus
IMSINNER::ESICEEval::___setESEval(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string evalcontent;
    ::std::string welcome;
    __is->read(uid);
    __is->read(evalcontent);
    __is->read(welcome);
    ::Ice::Int __ret = setESEval(uid, evalcontent, welcome, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::ESICEEval::___getESEval(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::std::string evalcontent;
    ::std::string welcome;
    ::Ice::Int __ret = getESEval(uid, evalcontent, welcome, __current);
    __os->write(evalcontent);
    __os->write(welcome);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::ESICEEval::___setESEvalResult(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string buyerid;
    ::Ice::Int evalId;
    ::std::string evalresult;
    __is->read(uid);
    __is->read(buyerid);
    __is->read(evalId);
    __is->read(evalresult);
    ::Ice::Int __ret = setESEvalResult(uid, buyerid, evalId, evalresult, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::ESICEEval::___getESEvalResult(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string buyerid;
    ::Ice::Int evalId;
    __is->read(uid);
    __is->read(buyerid);
    __is->read(evalId);
    ::std::string evalresult;
    ::std::string gmtcreate;
    ::std::string gmtmodify;
    ::Ice::Int __ret = getESEvalResult(uid, buyerid, evalId, evalresult, gmtcreate, gmtmodify, __current);
    __os->write(evalresult);
    __os->write(gmtcreate);
    __os->write(gmtmodify);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::ESICEEval::___getESEvalResultToday(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::IMSINNER::SICEESEvalResultSeq evalInfos;
    ::Ice::Int __ret = getESEvalResultToday(uid, evalInfos, __current);
    if(evalInfos.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::IMSINNER::__write(__os, &evalInfos[0], &evalInfos[0] + evalInfos.size(), ::IMSINNER::__U__SICEESEvalResultSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::ESICEEval::___getESEvalResultHistory(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string querytime;
    __is->read(uid);
    __is->read(querytime);
    ::IMSINNER::SICEESEvalResultSeq evalInfos;
    ::Ice::Int __ret = getESEvalResultHistory(uid, querytime, evalInfos, __current);
    if(evalInfos.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::IMSINNER::__write(__os, &evalInfos[0], &evalInfos[0] + evalInfos.size(), ::IMSINNER::__U__SICEESEvalResultSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::ESICEEval::___getESEvalResultHistorybypage(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string childid;
    ::std::string begindate;
    ::std::string enddate;
    ::Ice::Int pageno;
    ::Ice::Int pagesize;
    __is->read(uid);
    __is->read(childid);
    __is->read(begindate);
    __is->read(enddate);
    __is->read(pageno);
    __is->read(pagesize);
    ::Ice::Int pagecount;
    ::IMSINNER::SICEESEvalResultExSeq evalInfos;
    ::Ice::Int __ret = getESEvalResultHistorybypage(uid, childid, begindate, enddate, pageno, pagesize, pagecount, evalInfos, __current);
    __os->write(pagecount);
    if(evalInfos.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::IMSINNER::__write(__os, &evalInfos[0], &evalInfos[0] + evalInfos.size(), ::IMSINNER::__U__SICEESEvalResultExSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __IMSINNER__ESICEEval_all[] =
{
    "getESEval",
    "getESEvalResult",
    "getESEvalResultHistory",
    "getESEvalResultHistorybypage",
    "getESEvalResultToday",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "setESEval",
    "setESEvalResult"
};

::IceInternal::DispatchStatus
IMSINNER::ESICEEval::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__IMSINNER__ESICEEval_all, __IMSINNER__ESICEEval_all + 11, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __IMSINNER__ESICEEval_all)
    {
        case 0:
        {
            return ___getESEval(in, current);
        }
        case 1:
        {
            return ___getESEvalResult(in, current);
        }
        case 2:
        {
            return ___getESEvalResultHistory(in, current);
        }
        case 3:
        {
            return ___getESEvalResultHistorybypage(in, current);
        }
        case 4:
        {
            return ___getESEvalResultToday(in, current);
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
            return ___setESEval(in, current);
        }
        case 10:
        {
            return ___setESEvalResult(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
IMSINNER::ESICEEval::__write(::IceInternal::BasicStream* __os) const
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
IMSINNER::ESICEEval::__read(::IceInternal::BasicStream* __is, bool __rid)
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
IMSINNER::ESICEEval::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type IMSINNER::ESICEEval was not generated with stream support";
    throw ex;
}

void
IMSINNER::ESICEEval::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type IMSINNER::ESICEEval was not generated with stream support";
    throw ex;
}

void 
IMSINNER::__patch__ESICEEvalPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::IMSINNER::ESICEEvalPtr* p = static_cast< ::IMSINNER::ESICEEvalPtr*>(__addr);
    assert(p);
    *p = ::IMSINNER::ESICEEvalPtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::IMSINNER::ESICEEval::ice_staticId();
        throw e;
    }
}

bool
IMSINNER::operator==(const ::IMSINNER::ESICEEval& l, const ::IMSINNER::ESICEEval& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
IMSINNER::operator!=(const ::IMSINNER::ESICEEval& l, const ::IMSINNER::ESICEEval& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
IMSINNER::operator<(const ::IMSINNER::ESICEEval& l, const ::IMSINNER::ESICEEval& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
IMSINNER::operator<=(const ::IMSINNER::ESICEEval& l, const ::IMSINNER::ESICEEval& r)
{
    return l < r || l == r;
}

bool
IMSINNER::operator>(const ::IMSINNER::ESICEEval& l, const ::IMSINNER::ESICEEval& r)
{
    return !(l < r) && !(l == r);
}

bool
IMSINNER::operator>=(const ::IMSINNER::ESICEEval& l, const ::IMSINNER::ESICEEval& r)
{
    return !(l < r);
}
