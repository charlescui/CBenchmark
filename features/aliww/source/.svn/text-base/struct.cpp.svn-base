// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `struct.ice'

#include <struct.h>
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
com::alisoft::member::udb::api::model::__write(::IceInternal::BasicStream* __os, const ::com::alisoft::member::udb::api::model::Map& v, ::com::alisoft::member::udb::api::model::__U__Map)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::com::alisoft::member::udb::api::model::Map::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
com::alisoft::member::udb::api::model::__read(::IceInternal::BasicStream* __is, ::com::alisoft::member::udb::api::model::Map& v, ::com::alisoft::member::udb::api::model::__U__Map)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::std::string, ::std::string> pair;
        __is->read(const_cast< ::std::string&>(pair.first));
        ::com::alisoft::member::udb::api::model::Map::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}
