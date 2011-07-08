// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `imicecommstruct.ice'

#include <imicecommstruct.h>
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

void
AliIMInterface::__write(::IceInternal::BasicStream* __os, const ::AliIMInterface::KVMAP& v, ::AliIMInterface::__U__KVMAP)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::AliIMInterface::KVMAP::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
AliIMInterface::__read(::IceInternal::BasicStream* __is, ::AliIMInterface::KVMAP& v, ::AliIMInterface::__U__KVMAP)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::std::string, ::std::string> pair;
        __is->read(const_cast< ::std::string&>(pair.first));
        ::AliIMInterface::KVMAP::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

bool
AliIMInterface::SWebBindId::operator==(const SWebBindId& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AliIMInterface::SWebBindId::operator!=(const SWebBindId& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(prefix != __rhs.prefix)
    {
        return true;
    }
    if(webid != __rhs.webid)
    {
        return true;
    }
    if(bIMBind != __rhs.bIMBind)
    {
        return true;
    }
    return false;
}

bool
AliIMInterface::SWebBindId::operator<(const SWebBindId& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(prefix < __rhs.prefix)
    {
        return true;
    }
    else if(__rhs.prefix < prefix)
    {
        return false;
    }
    if(webid < __rhs.webid)
    {
        return true;
    }
    else if(__rhs.webid < webid)
    {
        return false;
    }
    if(bIMBind < __rhs.bIMBind)
    {
        return true;
    }
    else if(__rhs.bIMBind < bIMBind)
    {
        return false;
    }
    return false;
}

void
AliIMInterface::SWebBindId::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(prefix);
    __os->write(webid);
    __os->write(bIMBind);
}

void
AliIMInterface::SWebBindId::__read(::IceInternal::BasicStream* __is)
{
    __is->read(prefix);
    __is->read(webid);
    __is->read(bIMBind);
}

void
AliIMInterface::__write(::IceInternal::BasicStream* __os, const ::AliIMInterface::SWebBindId* begin, const ::AliIMInterface::SWebBindId* end, ::AliIMInterface::__U__SWebBindIdSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
AliIMInterface::__read(::IceInternal::BasicStream* __is, ::AliIMInterface::SWebBindIdSeq& v, ::AliIMInterface::__U__SWebBindIdSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 3);
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
AliIMInterface::SWanghaoWebBindId::operator==(const SWanghaoWebBindId& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AliIMInterface::SWanghaoWebBindId::operator!=(const SWanghaoWebBindId& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(id != __rhs.id)
    {
        return true;
    }
    if(webids != __rhs.webids)
    {
        return true;
    }
    return false;
}

bool
AliIMInterface::SWanghaoWebBindId::operator<(const SWanghaoWebBindId& __rhs) const
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
    if(webids < __rhs.webids)
    {
        return true;
    }
    else if(__rhs.webids < webids)
    {
        return false;
    }
    return false;
}

void
AliIMInterface::SWanghaoWebBindId::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(id);
    if(webids.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::AliIMInterface::__write(__os, &webids[0], &webids[0] + webids.size(), ::AliIMInterface::__U__SWebBindIdSeq());
    }
}

void
AliIMInterface::SWanghaoWebBindId::__read(::IceInternal::BasicStream* __is)
{
    __is->read(id);
    ::AliIMInterface::__read(__is, webids, ::AliIMInterface::__U__SWebBindIdSeq());
}

void
AliIMInterface::__write(::IceInternal::BasicStream* __os, const ::AliIMInterface::SWanghaoWebBindId* begin, const ::AliIMInterface::SWanghaoWebBindId* end, ::AliIMInterface::__U__SWanghaoWebBindIdSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
AliIMInterface::__read(::IceInternal::BasicStream* __is, ::AliIMInterface::SWanghaoWebBindIdSeq& v, ::AliIMInterface::__U__SWanghaoWebBindIdSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 2);
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
AliIMInterface::__write(::IceInternal::BasicStream* __os, const ::AliIMInterface::KVMAP* begin, const ::AliIMInterface::KVMAP* end, ::AliIMInterface::__U__KVMAPSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        ::AliIMInterface::__write(__os, begin[i], ::AliIMInterface::__U__KVMAP());
    }
}

void
AliIMInterface::__read(::IceInternal::BasicStream* __is, ::AliIMInterface::KVMAPSeq& v, ::AliIMInterface::__U__KVMAPSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 1);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        ::AliIMInterface::__read(__is, v[i], ::AliIMInterface::__U__KVMAP());
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}
