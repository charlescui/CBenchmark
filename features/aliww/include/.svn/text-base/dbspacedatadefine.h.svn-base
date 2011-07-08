// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `dbspacedatadefine.ice'

#ifndef __dbspacedatadefine_h__
#define __dbspacedatadefine_h__

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

namespace spaceContact
{

struct SICESpaceContactInfo
{
    ::std::string contactId;
    ::Ice::Int groupId;
    ::std::string nickName;
    ::Ice::Int status;
    ::std::string spaceCreateTime;
    ::std::string cid;
    ::Ice::Short spacecnttype;
    ::std::string modseqid;

    bool operator==(const SICESpaceContactInfo&) const;
    bool operator!=(const SICESpaceContactInfo&) const;
    bool operator<(const SICESpaceContactInfo&) const;
    bool operator<=(const SICESpaceContactInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICESpaceContactInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICESpaceContactInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICESpaceGroupInfo
{
    ::Ice::Long groupId;
    ::Ice::Long parentId;
    ::std::string groupName;
    ::Ice::Int cntNum;

    bool operator==(const SICESpaceGroupInfo&) const;
    bool operator!=(const SICESpaceGroupInfo&) const;
    bool operator<(const SICESpaceGroupInfo&) const;
    bool operator<=(const SICESpaceGroupInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICESpaceGroupInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICESpaceGroupInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::spaceContact::SICESpaceGroupInfo> SICESpaceGroupInfoSeq;

class __U__SICESpaceGroupInfoSeq { };
void __write(::IceInternal::BasicStream*, const ::spaceContact::SICESpaceGroupInfo*, const ::spaceContact::SICESpaceGroupInfo*, __U__SICESpaceGroupInfoSeq);
void __read(::IceInternal::BasicStream*, SICESpaceGroupInfoSeq&, __U__SICESpaceGroupInfoSeq);

typedef ::std::vector< ::spaceContact::SICESpaceContactInfo> SICESpaceContactInfoSeq;

class __U__SICESpaceContactInfoSeq { };
void __write(::IceInternal::BasicStream*, const ::spaceContact::SICESpaceContactInfo*, const ::spaceContact::SICESpaceContactInfo*, __U__SICESpaceContactInfoSeq);
void __read(::IceInternal::BasicStream*, SICESpaceContactInfoSeq&, __U__SICESpaceContactInfoSeq);

}

#endif
