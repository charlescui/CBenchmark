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

#ifndef __DBStruct_h__
#define __DBStruct_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/BuiltinSequences.h>
#include <Ice/UndefSysMacros.h>

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

namespace AliDDB
{

typedef ::std::map< ::std::string, ::std::string> KVMap;

class __U__KVMap { };
void __write(::IceInternal::BasicStream*, const KVMap&, __U__KVMap);
void __read(::IceInternal::BasicStream*, KVMap&, __U__KVMap);

typedef ::std::vector< ::AliDDB::KVMap> KVMapSeq;

class __U__KVMapSeq { };
void __write(::IceInternal::BasicStream*, const ::AliDDB::KVMap*, const ::AliDDB::KVMap*, __U__KVMapSeq);
void __read(::IceInternal::BasicStream*, KVMapSeq&, __U__KVMapSeq);

struct DBRecord
{
    ::AliDDB::KVMap fields;
    ::AliDDB::KVMapSeq blobField;

    bool operator==(const DBRecord&) const;
    bool operator!=(const DBRecord&) const;
    bool operator<(const DBRecord&) const;
    bool operator<=(const DBRecord& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const DBRecord& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const DBRecord& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::AliDDB::DBRecord> DBRecordSeq;

class __U__DBRecordSeq { };
void __write(::IceInternal::BasicStream*, const ::AliDDB::DBRecord*, const ::AliDDB::DBRecord*, __U__DBRecordSeq);
void __read(::IceInternal::BasicStream*, DBRecordSeq&, __U__DBRecordSeq);

}

#endif
