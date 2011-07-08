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

#include <dbspacedatadefine.h>
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

bool
spaceContact::SICESpaceContactInfo::operator==(const SICESpaceContactInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
spaceContact::SICESpaceContactInfo::operator!=(const SICESpaceContactInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(contactId != __rhs.contactId)
    {
        return true;
    }
    if(groupId != __rhs.groupId)
    {
        return true;
    }
    if(nickName != __rhs.nickName)
    {
        return true;
    }
    if(status != __rhs.status)
    {
        return true;
    }
    if(spaceCreateTime != __rhs.spaceCreateTime)
    {
        return true;
    }
    if(cid != __rhs.cid)
    {
        return true;
    }
    if(spacecnttype != __rhs.spacecnttype)
    {
        return true;
    }
    if(modseqid != __rhs.modseqid)
    {
        return true;
    }
    return false;
}

bool
spaceContact::SICESpaceContactInfo::operator<(const SICESpaceContactInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(contactId < __rhs.contactId)
    {
        return true;
    }
    else if(__rhs.contactId < contactId)
    {
        return false;
    }
    if(groupId < __rhs.groupId)
    {
        return true;
    }
    else if(__rhs.groupId < groupId)
    {
        return false;
    }
    if(nickName < __rhs.nickName)
    {
        return true;
    }
    else if(__rhs.nickName < nickName)
    {
        return false;
    }
    if(status < __rhs.status)
    {
        return true;
    }
    else if(__rhs.status < status)
    {
        return false;
    }
    if(spaceCreateTime < __rhs.spaceCreateTime)
    {
        return true;
    }
    else if(__rhs.spaceCreateTime < spaceCreateTime)
    {
        return false;
    }
    if(cid < __rhs.cid)
    {
        return true;
    }
    else if(__rhs.cid < cid)
    {
        return false;
    }
    if(spacecnttype < __rhs.spacecnttype)
    {
        return true;
    }
    else if(__rhs.spacecnttype < spacecnttype)
    {
        return false;
    }
    if(modseqid < __rhs.modseqid)
    {
        return true;
    }
    else if(__rhs.modseqid < modseqid)
    {
        return false;
    }
    return false;
}

void
spaceContact::SICESpaceContactInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(contactId);
    __os->write(groupId);
    __os->write(nickName);
    __os->write(status);
    __os->write(spaceCreateTime);
    __os->write(cid);
    __os->write(spacecnttype);
    __os->write(modseqid);
}

void
spaceContact::SICESpaceContactInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(contactId);
    __is->read(groupId);
    __is->read(nickName);
    __is->read(status);
    __is->read(spaceCreateTime);
    __is->read(cid);
    __is->read(spacecnttype);
    __is->read(modseqid);
}

bool
spaceContact::SICESpaceGroupInfo::operator==(const SICESpaceGroupInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
spaceContact::SICESpaceGroupInfo::operator!=(const SICESpaceGroupInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(groupId != __rhs.groupId)
    {
        return true;
    }
    if(parentId != __rhs.parentId)
    {
        return true;
    }
    if(groupName != __rhs.groupName)
    {
        return true;
    }
    if(cntNum != __rhs.cntNum)
    {
        return true;
    }
    return false;
}

bool
spaceContact::SICESpaceGroupInfo::operator<(const SICESpaceGroupInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(groupId < __rhs.groupId)
    {
        return true;
    }
    else if(__rhs.groupId < groupId)
    {
        return false;
    }
    if(parentId < __rhs.parentId)
    {
        return true;
    }
    else if(__rhs.parentId < parentId)
    {
        return false;
    }
    if(groupName < __rhs.groupName)
    {
        return true;
    }
    else if(__rhs.groupName < groupName)
    {
        return false;
    }
    if(cntNum < __rhs.cntNum)
    {
        return true;
    }
    else if(__rhs.cntNum < cntNum)
    {
        return false;
    }
    return false;
}

void
spaceContact::SICESpaceGroupInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(groupId);
    __os->write(parentId);
    __os->write(groupName);
    __os->write(cntNum);
}

void
spaceContact::SICESpaceGroupInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(groupId);
    __is->read(parentId);
    __is->read(groupName);
    __is->read(cntNum);
}

void
spaceContact::__write(::IceInternal::BasicStream* __os, const ::spaceContact::SICESpaceGroupInfo* begin, const ::spaceContact::SICESpaceGroupInfo* end, ::spaceContact::__U__SICESpaceGroupInfoSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
spaceContact::__read(::IceInternal::BasicStream* __is, ::spaceContact::SICESpaceGroupInfoSeq& v, ::spaceContact::__U__SICESpaceGroupInfoSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 21);
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
spaceContact::__write(::IceInternal::BasicStream* __os, const ::spaceContact::SICESpaceContactInfo* begin, const ::spaceContact::SICESpaceContactInfo* end, ::spaceContact::__U__SICESpaceContactInfoSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
spaceContact::__read(::IceInternal::BasicStream* __is, ::spaceContact::SICESpaceContactInfoSeq& v, ::spaceContact::__U__SICESpaceContactInfoSeq)
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
