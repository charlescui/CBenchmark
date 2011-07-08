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

#ifndef __struct_h__
#define __struct_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
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

namespace com
{

namespace alisoft
{

namespace member
{

namespace udb
{

namespace api
{

namespace model
{

typedef ::std::map< ::std::string, ::std::string> Map;

class __U__Map { };
void __write(::IceInternal::BasicStream*, const Map&, __U__Map);
void __read(::IceInternal::BasicStream*, Map&, __U__Map);

}

}

}

}

}

}

#endif
