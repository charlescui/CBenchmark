// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `recentCnt.ice'

#ifndef __recentCnt_h__
#define __recentCnt_h__

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

class RecentCntService;
bool operator==(const RecentCntService&, const RecentCntService&);
bool operator!=(const RecentCntService&, const RecentCntService&);
bool operator<(const RecentCntService&, const RecentCntService&);
bool operator<=(const RecentCntService&, const RecentCntService&);
bool operator>(const RecentCntService&, const RecentCntService&);
bool operator>=(const RecentCntService&, const RecentCntService&);

}

}

namespace AliIM
{

class RecentCntService;
bool operator==(const RecentCntService&, const RecentCntService&);
bool operator!=(const RecentCntService&, const RecentCntService&);
bool operator<(const RecentCntService&, const RecentCntService&);
bool operator<=(const RecentCntService&, const RecentCntService&);
bool operator>(const RecentCntService&, const RecentCntService&);
bool operator>=(const RecentCntService&, const RecentCntService&);

}

namespace IceInternal
{

void incRef(::AliIM::RecentCntService*);
void decRef(::AliIM::RecentCntService*);

void incRef(::IceProxy::AliIM::RecentCntService*);
void decRef(::IceProxy::AliIM::RecentCntService*);

}

namespace AliIM
{

typedef ::IceInternal::Handle< ::AliIM::RecentCntService> RecentCntServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::AliIM::RecentCntService> RecentCntServicePrx;

void __write(::IceInternal::BasicStream*, const RecentCntServicePrx&);
void __read(::IceInternal::BasicStream*, RecentCntServicePrx&);
void __write(::IceInternal::BasicStream*, const RecentCntServicePtr&);
void __patch__RecentCntServicePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const RecentCntServicePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const RecentCntServicePtr&);
void __decRefUnsafe(const RecentCntServicePtr&);
void __clearHandleUnsafe(RecentCntServicePtr&);

}

namespace AliIM
{

}

namespace IceProxy
{

namespace AliIM
{

class RecentCntService : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int updateRcnt(const ::std::string& loginId, ::Ice::Int pretimestamp, ::Ice::Int curtimestamp, const ::std::string& pcid, ::Ice::Int ip, const ::AliIM::SICERecentCntSeq& rcntlist)
    {
        return updateRcnt(loginId, pretimestamp, curtimestamp, pcid, ip, rcntlist, 0);
    }
    ::Ice::Int updateRcnt(const ::std::string& loginId, ::Ice::Int pretimestamp, ::Ice::Int curtimestamp, const ::std::string& pcid, ::Ice::Int ip, const ::AliIM::SICERecentCntSeq& rcntlist, const ::Ice::Context& __ctx)
    {
        return updateRcnt(loginId, pretimestamp, curtimestamp, pcid, ip, rcntlist, &__ctx);
    }
    
private:

    ::Ice::Int updateRcnt(const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, ::Ice::Int, const ::AliIM::SICERecentCntSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getRcntList(const ::std::string& loginId, ::Ice::Int num, const ::std::string& orderby, ::AliIM::SICERecentCntSeq& rcntlist, ::Ice::Int& timestamp)
    {
        return getRcntList(loginId, num, orderby, rcntlist, timestamp, 0);
    }
    ::Ice::Int getRcntList(const ::std::string& loginId, ::Ice::Int num, const ::std::string& orderby, ::AliIM::SICERecentCntSeq& rcntlist, ::Ice::Int& timestamp, const ::Ice::Context& __ctx)
    {
        return getRcntList(loginId, num, orderby, rcntlist, timestamp, &__ctx);
    }
    
private:

    ::Ice::Int getRcntList(const ::std::string&, ::Ice::Int, const ::std::string&, ::AliIM::SICERecentCntSeq&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserInfo(const ::std::string& loginId, ::std::string& pcid, ::Ice::Int& ip, ::Ice::Int& timestamp)
    {
        return getUserInfo(loginId, pcid, ip, timestamp, 0);
    }
    ::Ice::Int getUserInfo(const ::std::string& loginId, ::std::string& pcid, ::Ice::Int& ip, ::Ice::Int& timestamp, const ::Ice::Context& __ctx)
    {
        return getUserInfo(loginId, pcid, ip, timestamp, &__ctx);
    }
    
private:

    ::Ice::Int getUserInfo(const ::std::string&, ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int getRcntCount(const ::std::string& loginId)
    {
        return getRcntCount(loginId, 0);
    }
    ::Ice::Int getRcntCount(const ::std::string& loginId, const ::Ice::Context& __ctx)
    {
        return getRcntCount(loginId, &__ctx);
    }
    
private:

    ::Ice::Int getRcntCount(const ::std::string&, const ::Ice::Context*);
    
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

class RecentCntService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int updateRcnt(const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, ::Ice::Int, const ::AliIM::SICERecentCntSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getRcntList(const ::std::string&, ::Ice::Int, const ::std::string&, ::AliIM::SICERecentCntSeq&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserInfo(const ::std::string&, ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getRcntCount(const ::std::string&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace AliIM
{

class RecentCntService : virtual public ::IceDelegate::AliIM::RecentCntService,
                         virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int updateRcnt(const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, ::Ice::Int, const ::AliIM::SICERecentCntSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getRcntList(const ::std::string&, ::Ice::Int, const ::std::string&, ::AliIM::SICERecentCntSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int getUserInfo(const ::std::string&, ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int getRcntCount(const ::std::string&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace AliIM
{

class RecentCntService : virtual public ::IceDelegate::AliIM::RecentCntService,
                         virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int updateRcnt(const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, ::Ice::Int, const ::AliIM::SICERecentCntSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getRcntList(const ::std::string&, ::Ice::Int, const ::std::string&, ::AliIM::SICERecentCntSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int getUserInfo(const ::std::string&, ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int getRcntCount(const ::std::string&, const ::Ice::Context*);
};

}

}

namespace AliIM
{

class RecentCntService : virtual public ::Ice::Object
{
public:

    typedef RecentCntServicePrx ProxyType;
    typedef RecentCntServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int updateRcnt(const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, ::Ice::Int, const ::AliIM::SICERecentCntSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___updateRcnt(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getRcntList(const ::std::string&, ::Ice::Int, const ::std::string&, ::AliIM::SICERecentCntSeq&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getRcntList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUserInfo(const ::std::string&, ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getRcntCount(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getRcntCount(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__RecentCntServicePtr(void*, ::Ice::ObjectPtr&);

}

#endif
