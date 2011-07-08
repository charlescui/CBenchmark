// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `aepdbsadapter.ice'

#ifndef __aepdbsadapter_h__
#define __aepdbsadapter_h__

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
#include <imicecommstruct.h>
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

namespace AliIMInterface
{

class IAEPDBSAdapter;
bool operator==(const IAEPDBSAdapter&, const IAEPDBSAdapter&);
bool operator!=(const IAEPDBSAdapter&, const IAEPDBSAdapter&);
bool operator<(const IAEPDBSAdapter&, const IAEPDBSAdapter&);
bool operator<=(const IAEPDBSAdapter&, const IAEPDBSAdapter&);
bool operator>(const IAEPDBSAdapter&, const IAEPDBSAdapter&);
bool operator>=(const IAEPDBSAdapter&, const IAEPDBSAdapter&);

}

}

namespace AliIMInterface
{

class IAEPDBSAdapter;
bool operator==(const IAEPDBSAdapter&, const IAEPDBSAdapter&);
bool operator!=(const IAEPDBSAdapter&, const IAEPDBSAdapter&);
bool operator<(const IAEPDBSAdapter&, const IAEPDBSAdapter&);
bool operator<=(const IAEPDBSAdapter&, const IAEPDBSAdapter&);
bool operator>(const IAEPDBSAdapter&, const IAEPDBSAdapter&);
bool operator>=(const IAEPDBSAdapter&, const IAEPDBSAdapter&);

}

namespace IceInternal
{

void incRef(::AliIMInterface::IAEPDBSAdapter*);
void decRef(::AliIMInterface::IAEPDBSAdapter*);

void incRef(::IceProxy::AliIMInterface::IAEPDBSAdapter*);
void decRef(::IceProxy::AliIMInterface::IAEPDBSAdapter*);

}

namespace AliIMInterface
{

typedef ::IceInternal::Handle< ::AliIMInterface::IAEPDBSAdapter> IAEPDBSAdapterPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::AliIMInterface::IAEPDBSAdapter> IAEPDBSAdapterPrx;

void __write(::IceInternal::BasicStream*, const IAEPDBSAdapterPrx&);
void __read(::IceInternal::BasicStream*, IAEPDBSAdapterPrx&);
void __write(::IceInternal::BasicStream*, const IAEPDBSAdapterPtr&);
void __patch__IAEPDBSAdapterPtr(void*, ::Ice::ObjectPtr&);

void __addObject(const IAEPDBSAdapterPtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const IAEPDBSAdapterPtr&);
void __decRefUnsafe(const IAEPDBSAdapterPtr&);
void __clearHandleUnsafe(IAEPDBSAdapterPtr&);

}

namespace AliIMInterface
{

struct SWanghaoIMBind
{
    ::std::string uuid;
    ::std::string whid;
    ::std::string longuid;
    ::std::string whmd5pw;
    ::Ice::Int status;
    ::std::string pwtoken;

    bool operator==(const SWanghaoIMBind&) const;
    bool operator!=(const SWanghaoIMBind&) const;
    bool operator<(const SWanghaoIMBind&) const;
    bool operator<=(const SWanghaoIMBind& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SWanghaoIMBind& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SWanghaoIMBind& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

}

namespace IceProxy
{

namespace AliIMInterface
{

class IAEPDBSAdapter : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int getBindedWebIdList(const ::Ice::StringSeq& uuid, ::AliIMInterface::SWanghaoWebBindIdSeq& webids)
    {
        return getBindedWebIdList(uuid, webids, 0);
    }
    ::Ice::Int getBindedWebIdList(const ::Ice::StringSeq& uuid, ::AliIMInterface::SWanghaoWebBindIdSeq& webids, const ::Ice::Context& __ctx)
    {
        return getBindedWebIdList(uuid, webids, &__ctx);
    }
    
private:

    ::Ice::Int getBindedWebIdList(const ::Ice::StringSeq&, ::AliIMInterface::SWanghaoWebBindIdSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getBindedWebId(const ::std::string& uuid, ::AliIMInterface::SWebBindIdSeq& webids)
    {
        return getBindedWebId(uuid, webids, 0);
    }
    ::Ice::Int getBindedWebId(const ::std::string& uuid, ::AliIMInterface::SWebBindIdSeq& webids, const ::Ice::Context& __ctx)
    {
        return getBindedWebId(uuid, webids, &__ctx);
    }
    
private:

    ::Ice::Int getBindedWebId(const ::std::string&, ::AliIMInterface::SWebBindIdSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int createWanghaoWebid(const ::std::string& uuid, const ::std::string& longuid)
    {
        return createWanghaoWebid(uuid, longuid, 0);
    }
    ::Ice::Int createWanghaoWebid(const ::std::string& uuid, const ::std::string& longuid, const ::Ice::Context& __ctx)
    {
        return createWanghaoWebid(uuid, longuid, &__ctx);
    }
    
private:

    ::Ice::Int createWanghaoWebid(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int deleteWanghaoWebid(const ::std::string& uuid, const ::std::string& longuid)
    {
        return deleteWanghaoWebid(uuid, longuid, 0);
    }
    ::Ice::Int deleteWanghaoWebid(const ::std::string& uuid, const ::std::string& longuid, const ::Ice::Context& __ctx)
    {
        return deleteWanghaoWebid(uuid, longuid, &__ctx);
    }
    
private:

    ::Ice::Int deleteWanghaoWebid(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int updateWanghaoLastLogintime(const ::std::string& uuid)
    {
        return updateWanghaoLastLogintime(uuid, 0);
    }
    ::Ice::Int updateWanghaoLastLogintime(const ::std::string& uuid, const ::Ice::Context& __ctx)
    {
        return updateWanghaoLastLogintime(uuid, &__ctx);
    }
    
private:

    ::Ice::Int updateWanghaoLastLogintime(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int changeWanghaoPw(const ::std::string& uuid, const ::std::string& newmd5pw, const ::std::string& imtoken)
    {
        return changeWanghaoPw(uuid, newmd5pw, imtoken, 0);
    }
    ::Ice::Int changeWanghaoPw(const ::std::string& uuid, const ::std::string& newmd5pw, const ::std::string& imtoken, const ::Ice::Context& __ctx)
    {
        return changeWanghaoPw(uuid, newmd5pw, imtoken, &__ctx);
    }
    
private:

    ::Ice::Int changeWanghaoPw(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int isChangableWanghao(const ::std::string& uuid)
    {
        return isChangableWanghao(uuid, 0);
    }
    ::Ice::Int isChangableWanghao(const ::std::string& uuid, const ::Ice::Context& __ctx)
    {
        return isChangableWanghao(uuid, &__ctx);
    }
    
private:

    ::Ice::Int isChangableWanghao(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int updateChangableWanghao(const ::std::string& uuid, bool bChangable)
    {
        return updateChangableWanghao(uuid, bChangable, 0);
    }
    ::Ice::Int updateChangableWanghao(const ::std::string& uuid, bool bChangable, const ::Ice::Context& __ctx)
    {
        return updateChangableWanghao(uuid, bChangable, &__ctx);
    }
    
private:

    ::Ice::Int updateChangableWanghao(const ::std::string&, bool, const ::Ice::Context*);
    
public:

    ::Ice::Int registerWanghao(const ::std::string& newwhid, const ::std::string& longuid, const ::std::string& md5pw, const ::std::string& imtoken, const ::AliIMInterface::KVMAP& attrs, ::std::string& uuid)
    {
        return registerWanghao(newwhid, longuid, md5pw, imtoken, attrs, uuid, 0);
    }
    ::Ice::Int registerWanghao(const ::std::string& newwhid, const ::std::string& longuid, const ::std::string& md5pw, const ::std::string& imtoken, const ::AliIMInterface::KVMAP& attrs, ::std::string& uuid, const ::Ice::Context& __ctx)
    {
        return registerWanghao(newwhid, longuid, md5pw, imtoken, attrs, uuid, &__ctx);
    }
    
private:

    ::Ice::Int registerWanghao(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::AliIMInterface::KVMAP&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int prohibitWanghao(const ::std::string& optor, const ::std::string& whid)
    {
        return prohibitWanghao(optor, whid, 0);
    }
    ::Ice::Int prohibitWanghao(const ::std::string& optor, const ::std::string& whid, const ::Ice::Context& __ctx)
    {
        return prohibitWanghao(optor, whid, &__ctx);
    }
    
private:

    ::Ice::Int prohibitWanghao(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int getWanghaoIMBind(const ::std::string& id, ::Ice::Int idtype, ::AliIMInterface::SWanghaoIMBind& whimbind)
    {
        return getWanghaoIMBind(id, idtype, whimbind, 0);
    }
    ::Ice::Int getWanghaoIMBind(const ::std::string& id, ::Ice::Int idtype, ::AliIMInterface::SWanghaoIMBind& whimbind, const ::Ice::Context& __ctx)
    {
        return getWanghaoIMBind(id, idtype, whimbind, &__ctx);
    }
    
private:

    ::Ice::Int getWanghaoIMBind(const ::std::string&, ::Ice::Int, ::AliIMInterface::SWanghaoIMBind&, const ::Ice::Context*);
    
public:

    ::Ice::Int updateUserNameByUuid(const ::std::string& uuid, const ::std::string& username)
    {
        return updateUserNameByUuid(uuid, username, 0);
    }
    ::Ice::Int updateUserNameByUuid(const ::std::string& uuid, const ::std::string& username, const ::Ice::Context& __ctx)
    {
        return updateUserNameByUuid(uuid, username, &__ctx);
    }
    
private:

    ::Ice::Int updateUserNameByUuid(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int updateWanghaoToken(const ::std::string& whid, const ::std::string& token)
    {
        return updateWanghaoToken(whid, token, 0);
    }
    ::Ice::Int updateWanghaoToken(const ::std::string& whid, const ::std::string& token, const ::Ice::Context& __ctx)
    {
        return updateWanghaoToken(whid, token, &__ctx);
    }
    
private:

    ::Ice::Int updateWanghaoToken(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int createWWWanghaoWebid(const ::std::string& whid, const ::std::string& longuid)
    {
        return createWWWanghaoWebid(whid, longuid, 0);
    }
    ::Ice::Int createWWWanghaoWebid(const ::std::string& whid, const ::std::string& longuid, const ::Ice::Context& __ctx)
    {
        return createWWWanghaoWebid(whid, longuid, &__ctx);
    }
    
private:

    ::Ice::Int createWWWanghaoWebid(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int deleteWWWanghaoWebid(const ::std::string& whid, const ::std::string& longuid)
    {
        return deleteWWWanghaoWebid(whid, longuid, 0);
    }
    ::Ice::Int deleteWWWanghaoWebid(const ::std::string& whid, const ::std::string& longuid, const ::Ice::Context& __ctx)
    {
        return deleteWWWanghaoWebid(whid, longuid, &__ctx);
    }
    
private:

    ::Ice::Int deleteWWWanghaoWebid(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int getUUIDWanghaoByWebid(const ::std::string& luid, ::std::string& uuid, ::std::string& whid)
    {
        return getUUIDWanghaoByWebid(luid, uuid, whid, 0);
    }
    ::Ice::Int getUUIDWanghaoByWebid(const ::std::string& luid, ::std::string& uuid, ::std::string& whid, const ::Ice::Context& __ctx)
    {
        return getUUIDWanghaoByWebid(luid, uuid, whid, &__ctx);
    }
    
private:

    ::Ice::Int getUUIDWanghaoByWebid(const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int changeIMLongid(::Ice::Int idtype, const ::std::string& id, const ::std::string& newlongid, ::std::string& retswitcheduuid, ::std::string& retoldlongid)
    {
        return changeIMLongid(idtype, id, newlongid, retswitcheduuid, retoldlongid, 0);
    }
    ::Ice::Int changeIMLongid(::Ice::Int idtype, const ::std::string& id, const ::std::string& newlongid, ::std::string& retswitcheduuid, ::std::string& retoldlongid, const ::Ice::Context& __ctx)
    {
        return changeIMLongid(idtype, id, newlongid, retswitcheduuid, retoldlongid, &__ctx);
    }
    
private:

    ::Ice::Int changeIMLongid(::Ice::Int, const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);
    
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

namespace AliIMInterface
{

class IAEPDBSAdapter : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int getBindedWebIdList(const ::Ice::StringSeq&, ::AliIMInterface::SWanghaoWebBindIdSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getBindedWebId(const ::std::string&, ::AliIMInterface::SWebBindIdSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int createWanghaoWebid(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int deleteWanghaoWebid(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int updateWanghaoLastLogintime(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int changeWanghaoPw(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int isChangableWanghao(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int updateChangableWanghao(const ::std::string&, bool, const ::Ice::Context*) = 0;

    virtual ::Ice::Int registerWanghao(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::AliIMInterface::KVMAP&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int prohibitWanghao(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getWanghaoIMBind(const ::std::string&, ::Ice::Int, ::AliIMInterface::SWanghaoIMBind&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int updateUserNameByUuid(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int updateWanghaoToken(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int createWWWanghaoWebid(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int deleteWWWanghaoWebid(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUUIDWanghaoByWebid(const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int changeIMLongid(::Ice::Int, const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace AliIMInterface
{

class IAEPDBSAdapter : virtual public ::IceDelegate::AliIMInterface::IAEPDBSAdapter,
                       virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int getBindedWebIdList(const ::Ice::StringSeq&, ::AliIMInterface::SWanghaoWebBindIdSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getBindedWebId(const ::std::string&, ::AliIMInterface::SWebBindIdSeq&, const ::Ice::Context*);

    virtual ::Ice::Int createWanghaoWebid(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int deleteWanghaoWebid(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int updateWanghaoLastLogintime(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int changeWanghaoPw(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int isChangableWanghao(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int updateChangableWanghao(const ::std::string&, bool, const ::Ice::Context*);

    virtual ::Ice::Int registerWanghao(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::AliIMInterface::KVMAP&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int prohibitWanghao(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getWanghaoIMBind(const ::std::string&, ::Ice::Int, ::AliIMInterface::SWanghaoIMBind&, const ::Ice::Context*);

    virtual ::Ice::Int updateUserNameByUuid(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int updateWanghaoToken(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int createWWWanghaoWebid(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int deleteWWWanghaoWebid(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getUUIDWanghaoByWebid(const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int changeIMLongid(::Ice::Int, const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace AliIMInterface
{

class IAEPDBSAdapter : virtual public ::IceDelegate::AliIMInterface::IAEPDBSAdapter,
                       virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int getBindedWebIdList(const ::Ice::StringSeq&, ::AliIMInterface::SWanghaoWebBindIdSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getBindedWebId(const ::std::string&, ::AliIMInterface::SWebBindIdSeq&, const ::Ice::Context*);

    virtual ::Ice::Int createWanghaoWebid(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int deleteWanghaoWebid(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int updateWanghaoLastLogintime(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int changeWanghaoPw(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int isChangableWanghao(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int updateChangableWanghao(const ::std::string&, bool, const ::Ice::Context*);

    virtual ::Ice::Int registerWanghao(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::AliIMInterface::KVMAP&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int prohibitWanghao(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getWanghaoIMBind(const ::std::string&, ::Ice::Int, ::AliIMInterface::SWanghaoIMBind&, const ::Ice::Context*);

    virtual ::Ice::Int updateUserNameByUuid(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int updateWanghaoToken(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int createWWWanghaoWebid(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int deleteWWWanghaoWebid(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getUUIDWanghaoByWebid(const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int changeIMLongid(::Ice::Int, const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);
};

}

}

namespace AliIMInterface
{

class IAEPDBSAdapter : virtual public ::Ice::Object
{
public:

    typedef IAEPDBSAdapterPrx ProxyType;
    typedef IAEPDBSAdapterPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int getBindedWebIdList(const ::Ice::StringSeq&, ::AliIMInterface::SWanghaoWebBindIdSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getBindedWebIdList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getBindedWebId(const ::std::string&, ::AliIMInterface::SWebBindIdSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getBindedWebId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int createWanghaoWebid(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___createWanghaoWebid(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int deleteWanghaoWebid(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___deleteWanghaoWebid(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int updateWanghaoLastLogintime(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___updateWanghaoLastLogintime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int changeWanghaoPw(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___changeWanghaoPw(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int isChangableWanghao(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___isChangableWanghao(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int updateChangableWanghao(const ::std::string&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___updateChangableWanghao(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int registerWanghao(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::AliIMInterface::KVMAP&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___registerWanghao(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int prohibitWanghao(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___prohibitWanghao(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getWanghaoIMBind(const ::std::string&, ::Ice::Int, ::AliIMInterface::SWanghaoIMBind&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getWanghaoIMBind(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int updateUserNameByUuid(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___updateUserNameByUuid(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int updateWanghaoToken(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___updateWanghaoToken(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int createWWWanghaoWebid(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___createWWWanghaoWebid(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int deleteWWWanghaoWebid(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___deleteWWWanghaoWebid(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUUIDWanghaoByWebid(const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUUIDWanghaoByWebid(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int changeIMLongid(::Ice::Int, const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___changeIMLongid(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__IAEPDBSAdapterPtr(void*, ::Ice::ObjectPtr&);

}

#endif
