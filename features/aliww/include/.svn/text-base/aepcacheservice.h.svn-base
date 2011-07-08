// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `aepcacheservice.ice'

#ifndef __aepcacheservice_h__
#define __aepcacheservice_h__

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

namespace IceProxy
{

namespace AliIM
{

class IAEPCacheService;
bool operator==(const IAEPCacheService&, const IAEPCacheService&);
bool operator!=(const IAEPCacheService&, const IAEPCacheService&);
bool operator<(const IAEPCacheService&, const IAEPCacheService&);
bool operator<=(const IAEPCacheService&, const IAEPCacheService&);
bool operator>(const IAEPCacheService&, const IAEPCacheService&);
bool operator>=(const IAEPCacheService&, const IAEPCacheService&);

}

}

namespace AliIM
{

class IAEPCacheService;
bool operator==(const IAEPCacheService&, const IAEPCacheService&);
bool operator!=(const IAEPCacheService&, const IAEPCacheService&);
bool operator<(const IAEPCacheService&, const IAEPCacheService&);
bool operator<=(const IAEPCacheService&, const IAEPCacheService&);
bool operator>(const IAEPCacheService&, const IAEPCacheService&);
bool operator>=(const IAEPCacheService&, const IAEPCacheService&);

}

namespace IceInternal
{

void incRef(::AliIM::IAEPCacheService*);
void decRef(::AliIM::IAEPCacheService*);

void incRef(::IceProxy::AliIM::IAEPCacheService*);
void decRef(::IceProxy::AliIM::IAEPCacheService*);

}

namespace AliIM
{

typedef ::IceInternal::Handle< ::AliIM::IAEPCacheService> IAEPCacheServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::AliIM::IAEPCacheService> IAEPCacheServicePrx;

void __write(::IceInternal::BasicStream*, const IAEPCacheServicePrx&);
void __read(::IceInternal::BasicStream*, IAEPCacheServicePrx&);
void __write(::IceInternal::BasicStream*, const IAEPCacheServicePtr&);
void __patch__IAEPCacheServicePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const IAEPCacheServicePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const IAEPCacheServicePtr&);
void __decRefUnsafe(const IAEPCacheServicePtr&);
void __clearHandleUnsafe(IAEPCacheServicePtr&);

}

namespace AliIM
{

struct SWanghaoInfoIce
{
    ::std::string uuid;
    ::std::string whid;
    ::std::string longuid;
    ::std::string md5pw;
    ::std::string imtoken;
    ::Ice::Byte status;

    bool operator==(const SWanghaoInfoIce&) const;
    bool operator!=(const SWanghaoInfoIce&) const;
    bool operator<(const SWanghaoInfoIce&) const;
    bool operator<=(const SWanghaoInfoIce& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SWanghaoInfoIce& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SWanghaoInfoIce& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

}

namespace IceProxy
{

namespace AliIM
{

class IAEPCacheService : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int getWanghaoInfo(::Ice::Int idtype, const ::std::string& id, ::AliIM::SWanghaoInfoIce& info)
    {
        return getWanghaoInfo(idtype, id, info, 0);
    }
    ::Ice::Int getWanghaoInfo(::Ice::Int idtype, const ::std::string& id, ::AliIM::SWanghaoInfoIce& info, const ::Ice::Context& __ctx)
    {
        return getWanghaoInfo(idtype, id, info, &__ctx);
    }
    
private:

    ::Ice::Int getWanghaoInfo(::Ice::Int, const ::std::string&, ::AliIM::SWanghaoInfoIce&, const ::Ice::Context*);
    
public:

    ::Ice::Int getBindlist(::Ice::Int idtype, const ::std::string& id, ::Ice::StringSeq& bindids)
    {
        return getBindlist(idtype, id, bindids, 0);
    }
    ::Ice::Int getBindlist(::Ice::Int idtype, const ::std::string& id, ::Ice::StringSeq& bindids, const ::Ice::Context& __ctx)
    {
        return getBindlist(idtype, id, bindids, &__ctx);
    }
    
private:

    ::Ice::Int getBindlist(::Ice::Int, const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int addWanghao(const ::AliIM::SWanghaoInfoIce& info)
    {
        return addWanghao(info, 0);
    }
    ::Ice::Int addWanghao(const ::AliIM::SWanghaoInfoIce& info, const ::Ice::Context& __ctx)
    {
        return addWanghao(info, &__ctx);
    }
    
private:

    ::Ice::Int addWanghao(const ::AliIM::SWanghaoInfoIce&, const ::Ice::Context*);
    
public:

    ::Ice::Int setWanghaoStatus(::Ice::Int idtype, const ::std::string& id, ::Ice::Int status)
    {
        return setWanghaoStatus(idtype, id, status, 0);
    }
    ::Ice::Int setWanghaoStatus(::Ice::Int idtype, const ::std::string& id, ::Ice::Int status, const ::Ice::Context& __ctx)
    {
        return setWanghaoStatus(idtype, id, status, &__ctx);
    }
    
private:

    ::Ice::Int setWanghaoStatus(::Ice::Int, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int setBindlist(::Ice::Int idtype, const ::std::string& id, const ::Ice::StringSeq& bindids)
    {
        return setBindlist(idtype, id, bindids, 0);
    }
    ::Ice::Int setBindlist(::Ice::Int idtype, const ::std::string& id, const ::Ice::StringSeq& bindids, const ::Ice::Context& __ctx)
    {
        return setBindlist(idtype, id, bindids, &__ctx);
    }
    
private:

    ::Ice::Int setBindlist(::Ice::Int, const ::std::string&, const ::Ice::StringSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int addBindId(::Ice::Int idtype, const ::std::string& id, const ::std::string& weblongid)
    {
        return addBindId(idtype, id, weblongid, 0);
    }
    ::Ice::Int addBindId(::Ice::Int idtype, const ::std::string& id, const ::std::string& weblongid, const ::Ice::Context& __ctx)
    {
        return addBindId(idtype, id, weblongid, &__ctx);
    }
    
private:

    ::Ice::Int addBindId(::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int delBindId(::Ice::Int idtype, const ::std::string& id, const ::std::string& weblongid)
    {
        return delBindId(idtype, id, weblongid, 0);
    }
    ::Ice::Int delBindId(::Ice::Int idtype, const ::std::string& id, const ::std::string& weblongid, const ::Ice::Context& __ctx)
    {
        return delBindId(idtype, id, weblongid, &__ctx);
    }
    
private:

    ::Ice::Int delBindId(::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int removeCache(::Ice::Int idtype, const ::std::string& id)
    {
        return removeCache(idtype, id, 0);
    }
    ::Ice::Int removeCache(::Ice::Int idtype, const ::std::string& id, const ::Ice::Context& __ctx)
    {
        return removeCache(idtype, id, &__ctx);
    }
    
private:

    ::Ice::Int removeCache(::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int changeWanghaoPw(::Ice::Int idtype, const ::std::string& id, const ::std::string& newmd5pw)
    {
        return changeWanghaoPw(idtype, id, newmd5pw, 0);
    }
    ::Ice::Int changeWanghaoPw(::Ice::Int idtype, const ::std::string& id, const ::std::string& newmd5pw, const ::Ice::Context& __ctx)
    {
        return changeWanghaoPw(idtype, id, newmd5pw, &__ctx);
    }
    
private:

    ::Ice::Int changeWanghaoPw(::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
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

class IAEPCacheService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int getWanghaoInfo(::Ice::Int, const ::std::string&, ::AliIM::SWanghaoInfoIce&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getBindlist(::Ice::Int, const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int addWanghao(const ::AliIM::SWanghaoInfoIce&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int setWanghaoStatus(::Ice::Int, const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int setBindlist(::Ice::Int, const ::std::string&, const ::Ice::StringSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int addBindId(::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int delBindId(::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int removeCache(::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int changeWanghaoPw(::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace AliIM
{

class IAEPCacheService : virtual public ::IceDelegate::AliIM::IAEPCacheService,
                         virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int getWanghaoInfo(::Ice::Int, const ::std::string&, ::AliIM::SWanghaoInfoIce&, const ::Ice::Context*);

    virtual ::Ice::Int getBindlist(::Ice::Int, const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int addWanghao(const ::AliIM::SWanghaoInfoIce&, const ::Ice::Context*);

    virtual ::Ice::Int setWanghaoStatus(::Ice::Int, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int setBindlist(::Ice::Int, const ::std::string&, const ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int addBindId(::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int delBindId(::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int removeCache(::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int changeWanghaoPw(::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace AliIM
{

class IAEPCacheService : virtual public ::IceDelegate::AliIM::IAEPCacheService,
                         virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int getWanghaoInfo(::Ice::Int, const ::std::string&, ::AliIM::SWanghaoInfoIce&, const ::Ice::Context*);

    virtual ::Ice::Int getBindlist(::Ice::Int, const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int addWanghao(const ::AliIM::SWanghaoInfoIce&, const ::Ice::Context*);

    virtual ::Ice::Int setWanghaoStatus(::Ice::Int, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int setBindlist(::Ice::Int, const ::std::string&, const ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int addBindId(::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int delBindId(::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int removeCache(::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int changeWanghaoPw(::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*);
};

}

}

namespace AliIM
{

class IAEPCacheService : virtual public ::Ice::Object
{
public:

    typedef IAEPCacheServicePrx ProxyType;
    typedef IAEPCacheServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int getWanghaoInfo(::Ice::Int, const ::std::string&, ::AliIM::SWanghaoInfoIce&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getWanghaoInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getBindlist(::Ice::Int, const ::std::string&, ::Ice::StringSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getBindlist(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int addWanghao(const ::AliIM::SWanghaoInfoIce&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___addWanghao(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int setWanghaoStatus(::Ice::Int, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___setWanghaoStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int setBindlist(::Ice::Int, const ::std::string&, const ::Ice::StringSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___setBindlist(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int addBindId(::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___addBindId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int delBindId(::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___delBindId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int removeCache(::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___removeCache(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int changeWanghaoPw(::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___changeWanghaoPw(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__IAEPCacheServicePtr(void*, ::Ice::ObjectPtr&);

}

#endif
