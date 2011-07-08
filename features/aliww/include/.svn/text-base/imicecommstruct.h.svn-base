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

#ifndef __imicecommstruct_h__
#define __imicecommstruct_h__

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

namespace AliIMInterface
{

typedef ::std::map< ::std::string, ::std::string> KVMAP;

class __U__KVMAP { };
void __write(::IceInternal::BasicStream*, const KVMAP&, __U__KVMAP);
void __read(::IceInternal::BasicStream*, KVMAP&, __U__KVMAP);

struct SWebBindId
{
    ::std::string prefix;
    ::std::string webid;
    bool bIMBind;

    bool operator==(const SWebBindId&) const;
    bool operator!=(const SWebBindId&) const;
    bool operator<(const SWebBindId&) const;
    bool operator<=(const SWebBindId& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SWebBindId& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SWebBindId& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::AliIMInterface::SWebBindId> SWebBindIdSeq;

class __U__SWebBindIdSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMInterface::SWebBindId*, const ::AliIMInterface::SWebBindId*, __U__SWebBindIdSeq);
void __read(::IceInternal::BasicStream*, SWebBindIdSeq&, __U__SWebBindIdSeq);

struct SWanghaoWebBindId
{
    ::std::string id;
    ::AliIMInterface::SWebBindIdSeq webids;

    bool operator==(const SWanghaoWebBindId&) const;
    bool operator!=(const SWanghaoWebBindId&) const;
    bool operator<(const SWanghaoWebBindId&) const;
    bool operator<=(const SWanghaoWebBindId& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SWanghaoWebBindId& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SWanghaoWebBindId& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::AliIMInterface::SWanghaoWebBindId> SWanghaoWebBindIdSeq;

class __U__SWanghaoWebBindIdSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMInterface::SWanghaoWebBindId*, const ::AliIMInterface::SWanghaoWebBindId*, __U__SWanghaoWebBindIdSeq);
void __read(::IceInternal::BasicStream*, SWanghaoWebBindIdSeq&, __U__SWanghaoWebBindIdSeq);

typedef ::std::vector< ::AliIMInterface::KVMAP> KVMAPSeq;

class __U__KVMAPSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIMInterface::KVMAP*, const ::AliIMInterface::KVMAP*, __U__KVMAPSeq);
void __read(::IceInternal::BasicStream*, KVMAPSeq&, __U__KVMAPSeq);

}

#endif
