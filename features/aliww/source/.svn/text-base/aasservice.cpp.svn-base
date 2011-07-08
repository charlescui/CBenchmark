// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `aasservice.ice'

#include <aasservice.h>
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

static const ::std::string __AASSERVICE__AasInterface__textget_name = "textget";

static const ::std::string __AASSERVICE__AasInterface__textput_name = "textput";

static const ::std::string __AASSERVICE__AasInterface__textbatchput_name = "textbatchput";

static const ::std::string __AASSERVICE__AasInterface__textupdate_name = "textupdate";

static const ::std::string __AASSERVICE__AasInterface__textdelete_name = "textdelete";

static const ::std::string __AASSERVICE__AasInterface__textbatchdelete_name = "textbatchdelete";

static const ::std::string __AASSERVICE__AasInterface__picquery_name = "picquery";

static const ::std::string __AASSERVICE__AasInterface__picbatchquery_name = "picbatchquery";

static const ::std::string __AASSERVICE__AasInterface__picget_name = "picget";

static const ::std::string __AASSERVICE__AasInterface__picput_name = "picput";

void
IceInternal::incRef(::AASSERVICE::AasInterface* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::AASSERVICE::AasInterface* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::AASSERVICE::AasInterface* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::AASSERVICE::AasInterface* p)
{
    p->__decRef();
}

void
AASSERVICE::__write(::IceInternal::BasicStream* __os, const ::AASSERVICE::AasInterfacePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
AASSERVICE::__read(::IceInternal::BasicStream* __is, ::AASSERVICE::AasInterfacePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::AASSERVICE::AasInterface;
        v->__copyFrom(proxy);
    }
}

void
AASSERVICE::__write(::IceInternal::BasicStream* __os, const ::AASSERVICE::AasInterfacePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

bool
AASSERVICE::CChatRecord::operator==(const CChatRecord& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AASSERVICE::CChatRecord::operator!=(const CChatRecord& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(userid != __rhs.userid)
    {
        return true;
    }
    if(peeruid != __rhs.peeruid)
    {
        return true;
    }
    if(tm != __rhs.tm)
    {
        return true;
    }
    if(seq != __rhs.seq)
    {
        return true;
    }
    if(msg != __rhs.msg)
    {
        return true;
    }
    return false;
}

bool
AASSERVICE::CChatRecord::operator<(const CChatRecord& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(userid < __rhs.userid)
    {
        return true;
    }
    else if(__rhs.userid < userid)
    {
        return false;
    }
    if(peeruid < __rhs.peeruid)
    {
        return true;
    }
    else if(__rhs.peeruid < peeruid)
    {
        return false;
    }
    if(tm < __rhs.tm)
    {
        return true;
    }
    else if(__rhs.tm < tm)
    {
        return false;
    }
    if(seq < __rhs.seq)
    {
        return true;
    }
    else if(__rhs.seq < seq)
    {
        return false;
    }
    if(msg < __rhs.msg)
    {
        return true;
    }
    else if(__rhs.msg < msg)
    {
        return false;
    }
    return false;
}

void
AASSERVICE::CChatRecord::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(userid);
    __os->write(peeruid);
    __os->write(tm);
    __os->write(seq);
    __os->write(msg);
}

void
AASSERVICE::CChatRecord::__read(::IceInternal::BasicStream* __is)
{
    __is->read(userid);
    __is->read(peeruid);
    __is->read(tm);
    __is->read(seq);
    __is->read(msg);
}

bool
AASSERVICE::CChatRecordInfo::operator==(const CChatRecordInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AASSERVICE::CChatRecordInfo::operator!=(const CChatRecordInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(dir != __rhs.dir)
    {
        return true;
    }
    if(seq != __rhs.seq)
    {
        return true;
    }
    if(tm != __rhs.tm)
    {
        return true;
    }
    if(msg != __rhs.msg)
    {
        return true;
    }
    return false;
}

bool
AASSERVICE::CChatRecordInfo::operator<(const CChatRecordInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(dir < __rhs.dir)
    {
        return true;
    }
    else if(__rhs.dir < dir)
    {
        return false;
    }
    if(seq < __rhs.seq)
    {
        return true;
    }
    else if(__rhs.seq < seq)
    {
        return false;
    }
    if(tm < __rhs.tm)
    {
        return true;
    }
    else if(__rhs.tm < tm)
    {
        return false;
    }
    if(msg < __rhs.msg)
    {
        return true;
    }
    else if(__rhs.msg < msg)
    {
        return false;
    }
    return false;
}

void
AASSERVICE::CChatRecordInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(dir);
    __os->write(seq);
    __os->write(tm);
    __os->write(msg);
}

void
AASSERVICE::CChatRecordInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(dir);
    __is->read(seq);
    __is->read(tm);
    __is->read(msg);
}

bool
AASSERVICE::CChatRecordID::operator==(const CChatRecordID& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AASSERVICE::CChatRecordID::operator!=(const CChatRecordID& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(userid != __rhs.userid)
    {
        return true;
    }
    if(peeruid != __rhs.peeruid)
    {
        return true;
    }
    if(tm != __rhs.tm)
    {
        return true;
    }
    if(seq != __rhs.seq)
    {
        return true;
    }
    if(dir != __rhs.dir)
    {
        return true;
    }
    return false;
}

bool
AASSERVICE::CChatRecordID::operator<(const CChatRecordID& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(userid < __rhs.userid)
    {
        return true;
    }
    else if(__rhs.userid < userid)
    {
        return false;
    }
    if(peeruid < __rhs.peeruid)
    {
        return true;
    }
    else if(__rhs.peeruid < peeruid)
    {
        return false;
    }
    if(tm < __rhs.tm)
    {
        return true;
    }
    else if(__rhs.tm < tm)
    {
        return false;
    }
    if(seq < __rhs.seq)
    {
        return true;
    }
    else if(__rhs.seq < seq)
    {
        return false;
    }
    if(dir < __rhs.dir)
    {
        return true;
    }
    else if(__rhs.dir < dir)
    {
        return false;
    }
    return false;
}

void
AASSERVICE::CChatRecordID::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(userid);
    __os->write(peeruid);
    __os->write(tm);
    __os->write(seq);
    __os->write(dir);
}

void
AASSERVICE::CChatRecordID::__read(::IceInternal::BasicStream* __is)
{
    __is->read(userid);
    __is->read(peeruid);
    __is->read(tm);
    __is->read(seq);
    __is->read(dir);
}

void
AASSERVICE::__write(::IceInternal::BasicStream* __os, const ::AASSERVICE::CChatRecordInfo* begin, const ::AASSERVICE::CChatRecordInfo* end, ::AASSERVICE::__U__ChatRecordInfoSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
AASSERVICE::__read(::IceInternal::BasicStream* __is, ::AASSERVICE::ChatRecordInfoSeq& v, ::AASSERVICE::__U__ChatRecordInfoSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 17);
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
AASSERVICE::__write(::IceInternal::BasicStream* __os, const ::AASSERVICE::CChatRecordID* begin, const ::AASSERVICE::CChatRecordID* end, ::AASSERVICE::__U__ChatRecordIDSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
AASSERVICE::__read(::IceInternal::BasicStream* __is, ::AASSERVICE::ChatRecordIDSeq& v, ::AASSERVICE::__U__ChatRecordIDSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 18);
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
AASSERVICE::__write(::IceInternal::BasicStream* __os, const ::AASSERVICE::CChatRecord* begin, const ::AASSERVICE::CChatRecord* end, ::AASSERVICE::__U__ChatRecordSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
AASSERVICE::__read(::IceInternal::BasicStream* __is, ::AASSERVICE::ChatRecordSeq& v, ::AASSERVICE::__U__ChatRecordSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 15);
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
AASSERVICE::__addObject(const AasInterfacePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
AASSERVICE::__usesClasses(const AasInterfacePtr& p)
{
    return p->__usesClasses();
}

void
AASSERVICE::__decRefUnsafe(const AasInterfacePtr& p)
{
    p->__decRefUnsafe();
}

void
AASSERVICE::__clearHandleUnsafe(AasInterfacePtr& p)
{
    p.__clearHandleUnsafe();
}

IceAsync::AASSERVICE::AMD_AasInterface_textget::AMD_AasInterface_textget(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AASSERVICE::AMD_AasInterface_textget::ice_response(::Ice::Int __ret, const ::AASSERVICE::ChatRecordInfoSeq& record)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(record.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AASSERVICE::__write(__os, &record[0], &record[0] + record.size(), ::AASSERVICE::__U__ChatRecordInfoSeq());
        }
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_textget::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_textget::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_textget::ice_exception()
{
    __exception();
}

IceAsync::AASSERVICE::AMD_AasInterface_textput::AMD_AasInterface_textput(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AASSERVICE::AMD_AasInterface_textput::ice_response(::Ice::Int __ret)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_textput::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_textput::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_textput::ice_exception()
{
    __exception();
}

IceAsync::AASSERVICE::AMD_AasInterface_textbatchput::AMD_AasInterface_textbatchput(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AASSERVICE::AMD_AasInterface_textbatchput::ice_response(::Ice::Int __ret)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_textbatchput::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_textbatchput::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_textbatchput::ice_exception()
{
    __exception();
}

IceAsync::AASSERVICE::AMD_AasInterface_textupdate::AMD_AasInterface_textupdate(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AASSERVICE::AMD_AasInterface_textupdate::ice_response(::Ice::Int __ret)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_textupdate::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_textupdate::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_textupdate::ice_exception()
{
    __exception();
}

IceAsync::AASSERVICE::AMD_AasInterface_textdelete::AMD_AasInterface_textdelete(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AASSERVICE::AMD_AasInterface_textdelete::ice_response(::Ice::Int __ret)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_textdelete::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_textdelete::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_textdelete::ice_exception()
{
    __exception();
}

IceAsync::AASSERVICE::AMD_AasInterface_textbatchdelete::AMD_AasInterface_textbatchdelete(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AASSERVICE::AMD_AasInterface_textbatchdelete::ice_response(::Ice::Int __ret, const ::AASSERVICE::ChatRecordIDSeq& respseq)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(respseq.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AASSERVICE::__write(__os, &respseq[0], &respseq[0] + respseq.size(), ::AASSERVICE::__U__ChatRecordIDSeq());
        }
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_textbatchdelete::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_textbatchdelete::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_textbatchdelete::ice_exception()
{
    __exception();
}

IceAsync::AASSERVICE::AMD_AasInterface_picquery::AMD_AasInterface_picquery(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AASSERVICE::AMD_AasInterface_picquery::ice_response(::Ice::Int __ret, bool exist)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(exist);
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_picquery::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_picquery::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_picquery::ice_exception()
{
    __exception();
}

IceAsync::AASSERVICE::AMD_AasInterface_picbatchquery::AMD_AasInterface_picbatchquery(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AASSERVICE::AMD_AasInterface_picbatchquery::ice_response(::Ice::Int __ret, const ::AASSERVICE::ChatPicFileNameSeq& respseq)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(respseq.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&respseq[0], &respseq[0] + respseq.size());
        }
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_picbatchquery::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_picbatchquery::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_picbatchquery::ice_exception()
{
    __exception();
}

IceAsync::AASSERVICE::AMD_AasInterface_picget::AMD_AasInterface_picget(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AASSERVICE::AMD_AasInterface_picget::ice_response(::Ice::Int __ret, const ::AASSERVICE::ByteSeq& pic)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(pic.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&pic[0], &pic[0] + pic.size());
        }
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_picget::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_picget::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_picget::ice_exception()
{
    __exception();
}

IceAsync::AASSERVICE::AMD_AasInterface_picput::AMD_AasInterface_picput(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AASSERVICE::AMD_AasInterface_picput::ice_response(::Ice::Int __ret)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_picput::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_picput::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AASSERVICE::AMD_AasInterface_picput::ice_exception()
{
    __exception();
}

::Ice::Int
IceProxy::AASSERVICE::AasInterface::textget(const ::std::string& userid, const ::std::string& peeruid, ::Ice::Long begintime, ::Ice::Long endtime, ::Ice::Int maxret, ::AASSERVICE::ChatRecordInfoSeq& record, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AASSERVICE__AasInterface__textget_name);
            __delBase = __getDelegate();
            ::IceDelegate::AASSERVICE::AasInterface* __del = dynamic_cast< ::IceDelegate::AASSERVICE::AasInterface*>(__delBase.get());
            return __del->textget(userid, peeruid, begintime, endtime, maxret, record, __ctx);
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
IceProxy::AASSERVICE::AasInterface::textput(const ::std::string& fromid, const ::std::string& toid, ::Ice::Long time, ::Ice::Int seq, const ::std::string& msg, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AASSERVICE__AasInterface__textput_name);
            __delBase = __getDelegate();
            ::IceDelegate::AASSERVICE::AasInterface* __del = dynamic_cast< ::IceDelegate::AASSERVICE::AasInterface*>(__delBase.get());
            return __del->textput(fromid, toid, time, seq, msg, __ctx);
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
IceProxy::AASSERVICE::AasInterface::textbatchput(const ::AASSERVICE::ChatRecordSeq& seq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AASSERVICE__AasInterface__textbatchput_name);
            __delBase = __getDelegate();
            ::IceDelegate::AASSERVICE::AasInterface* __del = dynamic_cast< ::IceDelegate::AASSERVICE::AasInterface*>(__delBase.get());
            return __del->textbatchput(seq, __ctx);
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
IceProxy::AASSERVICE::AasInterface::textupdate(const ::std::string& fromid, const ::std::string& toid, ::Ice::Long time, ::Ice::Int seq, const ::std::string& msg, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AASSERVICE__AasInterface__textupdate_name);
            __delBase = __getDelegate();
            ::IceDelegate::AASSERVICE::AasInterface* __del = dynamic_cast< ::IceDelegate::AASSERVICE::AasInterface*>(__delBase.get());
            return __del->textupdate(fromid, toid, time, seq, msg, __ctx);
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
IceProxy::AASSERVICE::AasInterface::textdelete(const ::std::string& userid, const ::std::string& peeruid, ::Ice::Long time, ::Ice::Int seq, ::Ice::Int direction, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AASSERVICE__AasInterface__textdelete_name);
            __delBase = __getDelegate();
            ::IceDelegate::AASSERVICE::AasInterface* __del = dynamic_cast< ::IceDelegate::AASSERVICE::AasInterface*>(__delBase.get());
            return __del->textdelete(userid, peeruid, time, seq, direction, __ctx);
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
IceProxy::AASSERVICE::AasInterface::textbatchdelete(const ::AASSERVICE::ChatRecordIDSeq& recordidseq, ::AASSERVICE::ChatRecordIDSeq& respseq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AASSERVICE__AasInterface__textbatchdelete_name);
            __delBase = __getDelegate();
            ::IceDelegate::AASSERVICE::AasInterface* __del = dynamic_cast< ::IceDelegate::AASSERVICE::AasInterface*>(__delBase.get());
            return __del->textbatchdelete(recordidseq, respseq, __ctx);
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
IceProxy::AASSERVICE::AasInterface::picquery(const ::std::string& fileName, bool& exist, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AASSERVICE__AasInterface__picquery_name);
            __delBase = __getDelegate();
            ::IceDelegate::AASSERVICE::AasInterface* __del = dynamic_cast< ::IceDelegate::AASSERVICE::AasInterface*>(__delBase.get());
            return __del->picquery(fileName, exist, __ctx);
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
IceProxy::AASSERVICE::AasInterface::picbatchquery(const ::AASSERVICE::ChatPicFileNameSeq& filenameseq, ::AASSERVICE::ChatPicFileNameSeq& respseq, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AASSERVICE__AasInterface__picbatchquery_name);
            __delBase = __getDelegate();
            ::IceDelegate::AASSERVICE::AasInterface* __del = dynamic_cast< ::IceDelegate::AASSERVICE::AasInterface*>(__delBase.get());
            return __del->picbatchquery(filenameseq, respseq, __ctx);
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
IceProxy::AASSERVICE::AasInterface::picget(const ::std::string& filename, ::AASSERVICE::ByteSeq& pic, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AASSERVICE__AasInterface__picget_name);
            __delBase = __getDelegate();
            ::IceDelegate::AASSERVICE::AasInterface* __del = dynamic_cast< ::IceDelegate::AASSERVICE::AasInterface*>(__delBase.get());
            return __del->picget(filename, pic, __ctx);
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
IceProxy::AASSERVICE::AasInterface::picput(const ::std::string& filename, const ::AASSERVICE::ByteSeq& pic, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AASSERVICE__AasInterface__picput_name);
            __delBase = __getDelegate();
            ::IceDelegate::AASSERVICE::AasInterface* __del = dynamic_cast< ::IceDelegate::AASSERVICE::AasInterface*>(__delBase.get());
            return __del->picput(filename, pic, __ctx);
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
IceProxy::AASSERVICE::AasInterface::ice_staticId()
{
    return ::AASSERVICE::AasInterface::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::AASSERVICE::AasInterface::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::AASSERVICE::AasInterface);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::AASSERVICE::AasInterface::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::AASSERVICE::AasInterface);
}

bool
IceProxy::AASSERVICE::operator==(const ::IceProxy::AASSERVICE::AasInterface& l, const ::IceProxy::AASSERVICE::AasInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AASSERVICE::operator!=(const ::IceProxy::AASSERVICE::AasInterface& l, const ::IceProxy::AASSERVICE::AasInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AASSERVICE::operator<(const ::IceProxy::AASSERVICE::AasInterface& l, const ::IceProxy::AASSERVICE::AasInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AASSERVICE::operator<=(const ::IceProxy::AASSERVICE::AasInterface& l, const ::IceProxy::AASSERVICE::AasInterface& r)
{
    return l < r || l == r;
}

bool
IceProxy::AASSERVICE::operator>(const ::IceProxy::AASSERVICE::AasInterface& l, const ::IceProxy::AASSERVICE::AasInterface& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::AASSERVICE::operator>=(const ::IceProxy::AASSERVICE::AasInterface& l, const ::IceProxy::AASSERVICE::AasInterface& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::AASSERVICE::AasInterface::textget(const ::std::string& userid, const ::std::string& peeruid, ::Ice::Long begintime, ::Ice::Long endtime, ::Ice::Int maxret, ::AASSERVICE::ChatRecordInfoSeq& record, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AASSERVICE__AasInterface__textget_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userid);
        __os->write(peeruid);
        __os->write(begintime);
        __os->write(endtime);
        __os->write(maxret);
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
        ::AASSERVICE::__read(__is, record, ::AASSERVICE::__U__ChatRecordInfoSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AASSERVICE::AasInterface::textput(const ::std::string& fromid, const ::std::string& toid, ::Ice::Long time, ::Ice::Int seq, const ::std::string& msg, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AASSERVICE__AasInterface__textput_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(fromid);
        __os->write(toid);
        __os->write(time);
        __os->write(seq);
        __os->write(msg);
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
IceDelegateM::AASSERVICE::AasInterface::textbatchput(const ::AASSERVICE::ChatRecordSeq& seq, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AASSERVICE__AasInterface__textbatchput_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(seq.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AASSERVICE::__write(__os, &seq[0], &seq[0] + seq.size(), ::AASSERVICE::__U__ChatRecordSeq());
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
IceDelegateM::AASSERVICE::AasInterface::textupdate(const ::std::string& fromid, const ::std::string& toid, ::Ice::Long time, ::Ice::Int seq, const ::std::string& msg, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AASSERVICE__AasInterface__textupdate_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(fromid);
        __os->write(toid);
        __os->write(time);
        __os->write(seq);
        __os->write(msg);
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
IceDelegateM::AASSERVICE::AasInterface::textdelete(const ::std::string& userid, const ::std::string& peeruid, ::Ice::Long time, ::Ice::Int seq, ::Ice::Int direction, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AASSERVICE__AasInterface__textdelete_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userid);
        __os->write(peeruid);
        __os->write(time);
        __os->write(seq);
        __os->write(direction);
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
IceDelegateM::AASSERVICE::AasInterface::textbatchdelete(const ::AASSERVICE::ChatRecordIDSeq& recordidseq, ::AASSERVICE::ChatRecordIDSeq& respseq, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AASSERVICE__AasInterface__textbatchdelete_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(recordidseq.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AASSERVICE::__write(__os, &recordidseq[0], &recordidseq[0] + recordidseq.size(), ::AASSERVICE::__U__ChatRecordIDSeq());
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
        ::AASSERVICE::__read(__is, respseq, ::AASSERVICE::__U__ChatRecordIDSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AASSERVICE::AasInterface::picquery(const ::std::string& fileName, bool& exist, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AASSERVICE__AasInterface__picquery_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(fileName);
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
        __is->read(exist);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AASSERVICE::AasInterface::picbatchquery(const ::AASSERVICE::ChatPicFileNameSeq& filenameseq, ::AASSERVICE::ChatPicFileNameSeq& respseq, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AASSERVICE__AasInterface__picbatchquery_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(filenameseq.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&filenameseq[0], &filenameseq[0] + filenameseq.size());
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
        __is->read(respseq);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AASSERVICE::AasInterface::picget(const ::std::string& filename, ::AASSERVICE::ByteSeq& pic, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AASSERVICE__AasInterface__picget_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(filename);
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
        ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*> ___pic;
        __is->read(___pic);
        ::std::vector< ::Ice::Byte>(___pic.first, ___pic.second).swap(pic);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AASSERVICE::AasInterface::picput(const ::std::string& filename, const ::AASSERVICE::ByteSeq& pic, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AASSERVICE__AasInterface__picput_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(filename);
        if(pic.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&pic[0], &pic[0] + pic.size());
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
IceDelegateD::AASSERVICE::AasInterface::textget(const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Long, ::Ice::Int, ::AASSERVICE::ChatRecordInfoSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AASSERVICE::AasInterface::textput(const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Int, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AASSERVICE::AasInterface::textbatchput(const ::AASSERVICE::ChatRecordSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AASSERVICE::AasInterface::textupdate(const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Int, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AASSERVICE::AasInterface::textdelete(const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AASSERVICE::AasInterface::textbatchdelete(const ::AASSERVICE::ChatRecordIDSeq&, ::AASSERVICE::ChatRecordIDSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AASSERVICE::AasInterface::picquery(const ::std::string&, bool&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AASSERVICE::AasInterface::picbatchquery(const ::AASSERVICE::ChatPicFileNameSeq&, ::AASSERVICE::ChatPicFileNameSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AASSERVICE::AasInterface::picget(const ::std::string&, ::AASSERVICE::ByteSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AASSERVICE::AasInterface::picput(const ::std::string&, const ::AASSERVICE::ByteSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::ObjectPtr
AASSERVICE::AasInterface::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __AASSERVICE__AasInterface_ids[2] =
{
    "::AASSERVICE::AasInterface",
    "::Ice::Object"
};

bool
AASSERVICE::AasInterface::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__AASSERVICE__AasInterface_ids, __AASSERVICE__AasInterface_ids + 2, _s);
}

::std::vector< ::std::string>
AASSERVICE::AasInterface::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__AASSERVICE__AasInterface_ids[0], &__AASSERVICE__AasInterface_ids[2]);
}

const ::std::string&
AASSERVICE::AasInterface::ice_id(const ::Ice::Current&) const
{
    return __AASSERVICE__AasInterface_ids[0];
}

const ::std::string&
AASSERVICE::AasInterface::ice_staticId()
{
    return __AASSERVICE__AasInterface_ids[0];
}

::IceInternal::DispatchStatus
AASSERVICE::AasInterface::___textget(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userid;
    ::std::string peeruid;
    ::Ice::Long begintime;
    ::Ice::Long endtime;
    ::Ice::Int maxret;
    __is->read(userid);
    __is->read(peeruid);
    __is->read(begintime);
    __is->read(endtime);
    __is->read(maxret);
    ::AASSERVICE::AMD_AasInterface_textgetPtr __cb = new IceAsync::AASSERVICE::AMD_AasInterface_textget(__inS);
    try
    {
        textget_async(__cb, userid, peeruid, begintime, endtime, maxret, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AASSERVICE::AasInterface::___textput(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string fromid;
    ::std::string toid;
    ::Ice::Long time;
    ::Ice::Int seq;
    ::std::string msg;
    __is->read(fromid);
    __is->read(toid);
    __is->read(time);
    __is->read(seq);
    __is->read(msg);
    ::AASSERVICE::AMD_AasInterface_textputPtr __cb = new IceAsync::AASSERVICE::AMD_AasInterface_textput(__inS);
    try
    {
        textput_async(__cb, fromid, toid, time, seq, msg, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AASSERVICE::AasInterface::___textbatchput(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::AASSERVICE::ChatRecordSeq seq;
    ::AASSERVICE::__read(__is, seq, ::AASSERVICE::__U__ChatRecordSeq());
    ::AASSERVICE::AMD_AasInterface_textbatchputPtr __cb = new IceAsync::AASSERVICE::AMD_AasInterface_textbatchput(__inS);
    try
    {
        textbatchput_async(__cb, seq, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AASSERVICE::AasInterface::___textupdate(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string fromid;
    ::std::string toid;
    ::Ice::Long time;
    ::Ice::Int seq;
    ::std::string msg;
    __is->read(fromid);
    __is->read(toid);
    __is->read(time);
    __is->read(seq);
    __is->read(msg);
    ::AASSERVICE::AMD_AasInterface_textupdatePtr __cb = new IceAsync::AASSERVICE::AMD_AasInterface_textupdate(__inS);
    try
    {
        textupdate_async(__cb, fromid, toid, time, seq, msg, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AASSERVICE::AasInterface::___textdelete(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userid;
    ::std::string peeruid;
    ::Ice::Long time;
    ::Ice::Int seq;
    ::Ice::Int direction;
    __is->read(userid);
    __is->read(peeruid);
    __is->read(time);
    __is->read(seq);
    __is->read(direction);
    ::AASSERVICE::AMD_AasInterface_textdeletePtr __cb = new IceAsync::AASSERVICE::AMD_AasInterface_textdelete(__inS);
    try
    {
        textdelete_async(__cb, userid, peeruid, time, seq, direction, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AASSERVICE::AasInterface::___textbatchdelete(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::AASSERVICE::ChatRecordIDSeq recordidseq;
    ::AASSERVICE::__read(__is, recordidseq, ::AASSERVICE::__U__ChatRecordIDSeq());
    ::AASSERVICE::AMD_AasInterface_textbatchdeletePtr __cb = new IceAsync::AASSERVICE::AMD_AasInterface_textbatchdelete(__inS);
    try
    {
        textbatchdelete_async(__cb, recordidseq, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AASSERVICE::AasInterface::___picquery(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string fileName;
    __is->read(fileName);
    ::AASSERVICE::AMD_AasInterface_picqueryPtr __cb = new IceAsync::AASSERVICE::AMD_AasInterface_picquery(__inS);
    try
    {
        picquery_async(__cb, fileName, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AASSERVICE::AasInterface::___picbatchquery(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::AASSERVICE::ChatPicFileNameSeq filenameseq;
    __is->read(filenameseq);
    ::AASSERVICE::AMD_AasInterface_picbatchqueryPtr __cb = new IceAsync::AASSERVICE::AMD_AasInterface_picbatchquery(__inS);
    try
    {
        picbatchquery_async(__cb, filenameseq, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AASSERVICE::AasInterface::___picget(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string filename;
    __is->read(filename);
    ::AASSERVICE::AMD_AasInterface_picgetPtr __cb = new IceAsync::AASSERVICE::AMD_AasInterface_picget(__inS);
    try
    {
        picget_async(__cb, filename, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AASSERVICE::AasInterface::___picput(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string filename;
    ::AASSERVICE::ByteSeq pic;
    __is->read(filename);
    ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*> ___pic;
    __is->read(___pic);
    ::std::vector< ::Ice::Byte>(___pic.first, ___pic.second).swap(pic);
    ::AASSERVICE::AMD_AasInterface_picputPtr __cb = new IceAsync::AASSERVICE::AMD_AasInterface_picput(__inS);
    try
    {
        picput_async(__cb, filename, pic, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

static ::std::string __AASSERVICE__AasInterface_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "picbatchquery",
    "picget",
    "picput",
    "picquery",
    "textbatchdelete",
    "textbatchput",
    "textdelete",
    "textget",
    "textput",
    "textupdate"
};

::IceInternal::DispatchStatus
AASSERVICE::AasInterface::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__AASSERVICE__AasInterface_all, __AASSERVICE__AasInterface_all + 14, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __AASSERVICE__AasInterface_all)
    {
        case 0:
        {
            return ___ice_id(in, current);
        }
        case 1:
        {
            return ___ice_ids(in, current);
        }
        case 2:
        {
            return ___ice_isA(in, current);
        }
        case 3:
        {
            return ___ice_ping(in, current);
        }
        case 4:
        {
            return ___picbatchquery(in, current);
        }
        case 5:
        {
            return ___picget(in, current);
        }
        case 6:
        {
            return ___picput(in, current);
        }
        case 7:
        {
            return ___picquery(in, current);
        }
        case 8:
        {
            return ___textbatchdelete(in, current);
        }
        case 9:
        {
            return ___textbatchput(in, current);
        }
        case 10:
        {
            return ___textdelete(in, current);
        }
        case 11:
        {
            return ___textget(in, current);
        }
        case 12:
        {
            return ___textput(in, current);
        }
        case 13:
        {
            return ___textupdate(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
AASSERVICE::AasInterface::__write(::IceInternal::BasicStream* __os) const
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
AASSERVICE::AasInterface::__read(::IceInternal::BasicStream* __is, bool __rid)
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
AASSERVICE::AasInterface::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AASSERVICE::AasInterface was not generated with stream support";
    throw ex;
}

void
AASSERVICE::AasInterface::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AASSERVICE::AasInterface was not generated with stream support";
    throw ex;
}

void 
AASSERVICE::__patch__AasInterfacePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::AASSERVICE::AasInterfacePtr* p = static_cast< ::AASSERVICE::AasInterfacePtr*>(__addr);
    assert(p);
    *p = ::AASSERVICE::AasInterfacePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::AASSERVICE::AasInterface::ice_staticId();
        throw e;
    }
}

bool
AASSERVICE::operator==(const ::AASSERVICE::AasInterface& l, const ::AASSERVICE::AasInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
AASSERVICE::operator!=(const ::AASSERVICE::AasInterface& l, const ::AASSERVICE::AasInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
AASSERVICE::operator<(const ::AASSERVICE::AasInterface& l, const ::AASSERVICE::AasInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
AASSERVICE::operator<=(const ::AASSERVICE::AasInterface& l, const ::AASSERVICE::AasInterface& r)
{
    return l < r || l == r;
}

bool
AASSERVICE::operator>(const ::AASSERVICE::AasInterface& l, const ::AASSERVICE::AasInterface& r)
{
    return !(l < r) && !(l == r);
}

bool
AASSERVICE::operator>=(const ::AASSERVICE::AasInterface& l, const ::AASSERVICE::AasInterface& r)
{
    return !(l < r);
}
