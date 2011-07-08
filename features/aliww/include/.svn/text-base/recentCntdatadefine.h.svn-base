// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `recentCntdatadefine.ice'

#ifndef __recentCntdatadefine_h__
#define __recentCntdatadefine_h__

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

namespace AliIM
{

struct SICERecentCnt
{
    ::std::string contactId;
    ::Ice::Long cntmsgSnd;
    ::Ice::Long cntmsgRcv;
    ::Ice::Long validTime;
    ::Ice::Int sndflag;
    ::Ice::Int revflag;
    ::Ice::Int strangerflag;

    bool operator==(const SICERecentCnt&) const;
    bool operator!=(const SICERecentCnt&) const;
    bool operator<(const SICERecentCnt&) const;
    bool operator<=(const SICERecentCnt& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICERecentCnt& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICERecentCnt& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::AliIM::SICERecentCnt> SICERecentCntSeq;

class __U__SICERecentCntSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIM::SICERecentCnt*, const ::AliIM::SICERecentCnt*, __U__SICERecentCntSeq);
void __read(::IceInternal::BasicStream*, SICERecentCntSeq&, __U__SICERecentCntSeq);

}

#endif
