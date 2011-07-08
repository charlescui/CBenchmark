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

#include <recentCntdatadefine.h>
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
AliIM::SICERecentCnt::operator==(const SICERecentCnt& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AliIM::SICERecentCnt::operator!=(const SICERecentCnt& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(contactId != __rhs.contactId)
    {
        return true;
    }
    if(cntmsgSnd != __rhs.cntmsgSnd)
    {
        return true;
    }
    if(cntmsgRcv != __rhs.cntmsgRcv)
    {
        return true;
    }
    if(validTime != __rhs.validTime)
    {
        return true;
    }
    if(sndflag != __rhs.sndflag)
    {
        return true;
    }
    if(revflag != __rhs.revflag)
    {
        return true;
    }
    if(strangerflag != __rhs.strangerflag)
    {
        return true;
    }
    return false;
}

bool
AliIM::SICERecentCnt::operator<(const SICERecentCnt& __rhs) const
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
    if(cntmsgSnd < __rhs.cntmsgSnd)
    {
        return true;
    }
    else if(__rhs.cntmsgSnd < cntmsgSnd)
    {
        return false;
    }
    if(cntmsgRcv < __rhs.cntmsgRcv)
    {
        return true;
    }
    else if(__rhs.cntmsgRcv < cntmsgRcv)
    {
        return false;
    }
    if(validTime < __rhs.validTime)
    {
        return true;
    }
    else if(__rhs.validTime < validTime)
    {
        return false;
    }
    if(sndflag < __rhs.sndflag)
    {
        return true;
    }
    else if(__rhs.sndflag < sndflag)
    {
        return false;
    }
    if(revflag < __rhs.revflag)
    {
        return true;
    }
    else if(__rhs.revflag < revflag)
    {
        return false;
    }
    if(strangerflag < __rhs.strangerflag)
    {
        return true;
    }
    else if(__rhs.strangerflag < strangerflag)
    {
        return false;
    }
    return false;
}

void
AliIM::SICERecentCnt::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(contactId);
    __os->write(cntmsgSnd);
    __os->write(cntmsgRcv);
    __os->write(validTime);
    __os->write(sndflag);
    __os->write(revflag);
    __os->write(strangerflag);
}

void
AliIM::SICERecentCnt::__read(::IceInternal::BasicStream* __is)
{
    __is->read(contactId);
    __is->read(cntmsgSnd);
    __is->read(cntmsgRcv);
    __is->read(validTime);
    __is->read(sndflag);
    __is->read(revflag);
    __is->read(strangerflag);
}

void
AliIM::__write(::IceInternal::BasicStream* __os, const ::AliIM::SICERecentCnt* begin, const ::AliIM::SICERecentCnt* end, ::AliIM::__U__SICERecentCntSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
AliIM::__read(::IceInternal::BasicStream* __is, ::AliIM::SICERecentCntSeq& v, ::AliIM::__U__SICERecentCntSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 37);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}
