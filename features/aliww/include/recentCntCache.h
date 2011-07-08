// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `recentCntCache.ice'

#ifndef __recentCntCache_h__
#define __recentCntCache_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/Incoming.h>
#include <Ice/Direct.h>
#include <Ice/StreamF.h>
#include <recentCntdatadefine.h>
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

namespace IceProxy
{

namespace AliIM
{

class RecentCntCacheService;
bool operator==(const RecentCntCacheService&, const RecentCntCacheService&);
bool operator!=(const RecentCntCacheService&, const RecentCntCacheService&);
bool operator<(const RecentCntCacheService&, const RecentCntCacheService&);
bool operator<=(const RecentCntCacheService&, const RecentCntCacheService&);
bool operator>(const RecentCntCacheService&, const RecentCntCacheService&);
bool operator>=(const RecentCntCacheService&, const RecentCntCacheService&);

}

}

namespace AliIM
{

class RecentCntCacheService;
bool operator==(const RecentCntCacheService&, const RecentCntCacheService&);
bool operator!=(const RecentCntCacheService&, const RecentCntCacheService&);
bool operator<(const RecentCntCacheService&, const RecentCntCacheService&);
bool operator<=(const RecentCntCacheService&, const RecentCntCacheService&);
bool operator>(const RecentCntCacheService&, const RecentCntCacheService&);
bool operator>=(const RecentCntCacheService&, const RecentCntCacheService&);

}

namespace IceInternal
{

void incRef(::AliIM::RecentCntCacheService*);
void decRef(::AliIM::RecentCntCacheService*);

void incRef(::IceProxy::AliIM::RecentCntCacheService*);
void decRef(::IceProxy::AliIM::RecentCntCacheService*);

}

namespace AliIM
{

typedef ::IceInternal::Handle< ::AliIM::RecentCntCacheService> RecentCntCacheServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::AliIM::RecentCntCacheService> RecentCntCacheServicePrx;

void __write(::IceInternal::BasicStream*, const RecentCntCacheServicePrx&);
void __read(::IceInternal::BasicStream*, RecentCntCacheServicePrx&);
void __write(::IceInternal::BasicStream*, const RecentCntCacheServicePtr&);
void __patch__RecentCntCacheServicePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const RecentCntCacheServicePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const RecentCntCacheServicePtr&);
void __decRefUnsafe(const RecentCntCacheServicePtr&);
void __clearHandleUnsafe(RecentCntCacheServicePtr&);

}

namespace AliIM
{

}

namespace IceProxy
{

namespace AliIM
{

class RecentCntCacheService : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int updateRcnt(const ::std::string& loginId, ::Ice::Int curtimestamp, const ::std::string& pcid, ::Ice::Int ip, const ::AliIM::SICERecentCntSeq& rcntlist)
    {
        return updateRcnt(loginId, curtimestamp, pcid, ip, rcntlist, 0);
    }
    ::Ice::Int updateRcnt(const ::std::string& loginId, ::Ice::Int curtimestamp, const ::std::string& pcid, ::Ice::Int ip, const ::AliIM::SICERecentCntSeq& rcntlist, const ::Ice::Context& __ctx)
    {
        return updateRcnt(loginId, curtimestamp, pcid, ip, rcntlist, &__ctx);
    }
    
private:

    ::Ice::Int updateRcnt(const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Int, const ::AliIM::SICERecentCntSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getRcntList(const ::std::string& loginId, ::Ice::Int timestamp, ::AliIM::SICERecentCntSeq& rcntlist, ::Ice::Int& ip, ::std::string& pcid)
    {
        return getRcntList(loginId, timestamp, rcntlist, ip, pcid, 0);
    }
    ::Ice::Int getRcntList(const ::std::string& loginId, ::Ice::Int timestamp, ::AliIM::SICERecentCntSeq& rcntlist, ::Ice::Int& ip, ::std::string& pcid, const ::Ice::Context& __ctx)
    {
        return getRcntList(loginId, timestamp, rcntlist, ip, pcid, &__ctx);
    }
    
private:

    ::Ice::Int getRcntList(const ::std::string&, ::Ice::Int, ::AliIM::SICERecentCntSeq&, ::Ice::Int&, ::std::string&, const ::Ice::Context*);
    
public:
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
};

}

}

namespace IceDelegate
{

namespace AliIM
{

class RecentCntCacheService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int updateRcnt(const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Int, const ::AliIM::SICERecentCntSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getRcntList(const ::std::string&, ::Ice::Int, ::AliIM::SICERecentCntSeq&, ::Ice::Int&, ::std::string&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace AliIM
{

class RecentCntCacheService : virtual public ::IceDelegate::AliIM::RecentCntCacheService,
                              virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int updateRcnt(const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Int, const ::AliIM::SICERecentCntSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getRcntList(const ::std::string&, ::Ice::Int, ::AliIM::SICERecentCntSeq&, ::Ice::Int&, ::std::string&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace AliIM
{

class RecentCntCacheService : virtual public ::IceDelegate::AliIM::RecentCntCacheService,
                              virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int updateRcnt(const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Int, const ::AliIM::SICERecentCntSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getRcntList(const ::std::string&, ::Ice::Int, ::AliIM::SICERecentCntSeq&, ::Ice::Int&, ::std::string&, const ::Ice::Context*);
};

}

}

namespace AliIM
{

class RecentCntCacheService : virtual public ::Ice::Object
{
public:

    typedef RecentCntCacheServicePrx ProxyType;
    typedef RecentCntCacheServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int updateRcnt(const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Int, const ::AliIM::SICERecentCntSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___updateRcnt(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getRcntList(const ::std::string&, ::Ice::Int, ::AliIM::SICERecentCntSeq&, ::Ice::Int&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getRcntList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__RecentCntCacheServicePtr(void*, ::Ice::ObjectPtr&);

}

#endif
