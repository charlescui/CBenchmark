// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `DBStruct.ice'

#include <DBStruct.h>
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
AliDDB::__write(::IceInternal::BasicStream* __os, const ::AliDDB::KVMap& v, ::AliDDB::__U__KVMap)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::AliDDB::KVMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
AliDDB::__read(::IceInternal::BasicStream* __is, ::AliDDB::KVMap& v, ::AliDDB::__U__KVMap)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::std::string, ::std::string> pair;
        __is->read(const_cast< ::std::string&>(pair.first));
        ::AliDDB::KVMap::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
AliDDB::__write(::IceInternal::BasicStream* __os, const ::AliDDB::KVMap* begin, const ::AliDDB::KVMap* end, ::AliDDB::__U__KVMapSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        ::AliDDB::__write(__os, begin[i], ::AliDDB::__U__KVMap());
    }
}

void
AliDDB::__read(::IceInternal::BasicStream* __is, ::AliDDB::KVMapSeq& v, ::AliDDB::__U__KVMapSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 1);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        ::AliDDB::__read(__is, v[i], ::AliDDB::__U__KVMap());
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

bool
AliDDB::DBRecord::operator==(const DBRecord& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AliDDB::DBRecord::operator!=(const DBRecord& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(fields != __rhs.fields)
    {
        return true;
    }
    if(blobField != __rhs.blobField)
    {
        return true;
    }
    return false;
}

bool
AliDDB::DBRecord::operator<(const DBRecord& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(fields < __rhs.fields)
    {
        return true;
    }
    else if(__rhs.fields < fields)
    {
        return false;
    }
    if(blobField < __rhs.blobField)
    {
        return true;
    }
    else if(__rhs.blobField < blobField)
    {
        return false;
    }
    return false;
}

void
AliDDB::DBRecord::__write(::IceInternal::BasicStream* __os) const
{
    ::AliDDB::__write(__os, fields, ::AliDDB::__U__KVMap());
    if(blobField.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::AliDDB::__write(__os, &blobField[0], &blobField[0] + blobField.size(), ::AliDDB::__U__KVMapSeq());
    }
}

void
AliDDB::DBRecord::__read(::IceInternal::BasicStream* __is)
{
    ::AliDDB::__read(__is, fields, ::AliDDB::__U__KVMap());
    ::AliDDB::__read(__is, blobField, ::AliDDB::__U__KVMapSeq());
}

void
AliDDB::__write(::IceInternal::BasicStream* __os, const ::AliDDB::DBRecord* begin, const ::AliDDB::DBRecord* end, ::AliDDB::__U__DBRecordSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
AliDDB::__read(::IceInternal::BasicStream* __is, ::AliDDB::DBRecordSeq& v, ::AliDDB::__U__DBRecordSeq)
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
