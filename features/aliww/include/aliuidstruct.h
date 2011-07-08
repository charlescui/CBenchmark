// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `aliuidstruct.ice'

#ifndef __aliuidstruct_h__
#define __aliuidstruct_h__

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

namespace AliUID
{

struct SMobileUserInfo
{
    ::std::string aliuid;
    ::std::string mobileNo;
    ::std::string mkey1;
    ::std::string mkey2;
    ::std::string clientKey;
    ::std::string wkey1;
    ::std::string wkey2;
    ::std::string token;
    ::Ice::StringSeq authServices;

    bool operator==(const SMobileUserInfo&) const;
    bool operator!=(const SMobileUserInfo&) const;
    bool operator<(const SMobileUserInfo&) const;
    bool operator<=(const SMobileUserInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SMobileUserInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SMobileUserInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SServiceUser
{
    ::std::string serviceId;
    ::std::string buid;
    ::std::string buToken;
    ::Ice::Short status;

    bool operator==(const SServiceUser&) const;
    bool operator!=(const SServiceUser&) const;
    bool operator<(const SServiceUser&) const;
    bool operator<=(const SServiceUser& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SServiceUser& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SServiceUser& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::AliUID::SServiceUser> SServiceUserSeq;

class __U__SServiceUserSeq { };
void __write(::IceInternal::BasicStream*, const ::AliUID::SServiceUser*, const ::AliUID::SServiceUser*, __U__SServiceUserSeq);
void __read(::IceInternal::BasicStream*, SServiceUserSeq&, __U__SServiceUserSeq);

struct SPassportAccount
{
    ::std::string aliuid;
    ::std::string email;
    ::std::string mobile;
    ::AliUID::SServiceUserSeq buids;

    bool operator==(const SPassportAccount&) const;
    bool operator!=(const SPassportAccount&) const;
    bool operator<(const SPassportAccount&) const;
    bool operator<=(const SPassportAccount& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SPassportAccount& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SPassportAccount& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SUrlInfo
{
    ::std::string baseUrl;
    ::std::string trustUrl;

    bool operator==(const SUrlInfo&) const;
    bool operator!=(const SUrlInfo&) const;
    bool operator<(const SUrlInfo&) const;
    bool operator<=(const SUrlInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SUrlInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SUrlInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::AliUID::SUrlInfo> SUrlInfoSeq;

class __U__SUrlInfoSeq { };
void __write(::IceInternal::BasicStream*, const ::AliUID::SUrlInfo*, const ::AliUID::SUrlInfo*, __U__SUrlInfoSeq);
void __read(::IceInternal::BasicStream*, SUrlInfoSeq&, __U__SUrlInfoSeq);

struct SWebBind
{
    ::std::string serviceId;
    ::std::string siteId;
    ::std::string webId;
    ::std::string webUid;
    ::Ice::StringSeq webUrl;

    bool operator==(const SWebBind&) const;
    bool operator!=(const SWebBind&) const;
    bool operator<(const SWebBind&) const;
    bool operator<=(const SWebBind& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SWebBind& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SWebBind& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::AliUID::SWebBind> SWebBindSeq;

class __U__SWebBindSeq { };
void __write(::IceInternal::BasicStream*, const ::AliUID::SWebBind*, const ::AliUID::SWebBind*, __U__SWebBindSeq);
void __read(::IceInternal::BasicStream*, SWebBindSeq&, __U__SWebBindSeq);

}

#endif
