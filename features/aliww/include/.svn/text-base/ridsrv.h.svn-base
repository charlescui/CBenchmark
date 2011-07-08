// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `ridsrv.ice'

#ifndef __ridsrv_h__
#define __ridsrv_h__

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

namespace ridService
{

class ridSrvMgr;
bool operator==(const ridSrvMgr&, const ridSrvMgr&);
bool operator!=(const ridSrvMgr&, const ridSrvMgr&);
bool operator<(const ridSrvMgr&, const ridSrvMgr&);
bool operator<=(const ridSrvMgr&, const ridSrvMgr&);
bool operator>(const ridSrvMgr&, const ridSrvMgr&);
bool operator>=(const ridSrvMgr&, const ridSrvMgr&);

}

}

namespace ridService
{

class ridSrvMgr;
bool operator==(const ridSrvMgr&, const ridSrvMgr&);
bool operator!=(const ridSrvMgr&, const ridSrvMgr&);
bool operator<(const ridSrvMgr&, const ridSrvMgr&);
bool operator<=(const ridSrvMgr&, const ridSrvMgr&);
bool operator>(const ridSrvMgr&, const ridSrvMgr&);
bool operator>=(const ridSrvMgr&, const ridSrvMgr&);

}

namespace IceInternal
{

void incRef(::ridService::ridSrvMgr*);
void decRef(::ridService::ridSrvMgr*);

void incRef(::IceProxy::ridService::ridSrvMgr*);
void decRef(::IceProxy::ridService::ridSrvMgr*);

}

namespace ridService
{

typedef ::IceInternal::Handle< ::ridService::ridSrvMgr> ridSrvMgrPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::ridService::ridSrvMgr> ridSrvMgrPrx;

void __write(::IceInternal::BasicStream*, const ridSrvMgrPrx&);
void __read(::IceInternal::BasicStream*, ridSrvMgrPrx&);
void __write(::IceInternal::BasicStream*, const ridSrvMgrPtr&);
void __patch__ridSrvMgrPtr(void*, ::Ice::ObjectPtr&);

void __addObject(const ridSrvMgrPtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const ridSrvMgrPtr&);
void __decRefUnsafe(const ridSrvMgrPtr&);
void __clearHandleUnsafe(ridSrvMgrPtr&);

}

namespace ridService
{

}

namespace IceProxy
{

namespace ridService
{

class ridSrvMgr : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int CheckUser(const ::std::string& userId, ::Ice::Int ip, const ::std::string& srid, ::std::string& drid)
    {
        return CheckUser(userId, ip, srid, drid, 0);
    }
    ::Ice::Int CheckUser(const ::std::string& userId, ::Ice::Int ip, const ::std::string& srid, ::std::string& drid, const ::Ice::Context& __ctx)
    {
        return CheckUser(userId, ip, srid, drid, &__ctx);
    }
    
private:

    ::Ice::Int CheckUser(const ::std::string&, ::Ice::Int, const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int Forbiddenpcid(const ::std::string& pcid, ::Ice::Int interval)
    {
        return Forbiddenpcid(pcid, interval, 0);
    }
    ::Ice::Int Forbiddenpcid(const ::std::string& pcid, ::Ice::Int interval, const ::Ice::Context& __ctx)
    {
        return Forbiddenpcid(pcid, interval, &__ctx);
    }
    
private:

    ::Ice::Int Forbiddenpcid(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int Permitpcid(const ::std::string& pcid)
    {
        return Permitpcid(pcid, 0);
    }
    ::Ice::Int Permitpcid(const ::std::string& pcid, const ::Ice::Context& __ctx)
    {
        return Permitpcid(pcid, &__ctx);
    }
    
private:

    ::Ice::Int Permitpcid(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int ForbiddenIp(const ::std::string& ip, ::Ice::Int interval)
    {
        return ForbiddenIp(ip, interval, 0);
    }
    ::Ice::Int ForbiddenIp(const ::std::string& ip, ::Ice::Int interval, const ::Ice::Context& __ctx)
    {
        return ForbiddenIp(ip, interval, &__ctx);
    }
    
private:

    ::Ice::Int ForbiddenIp(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int Permitip(const ::std::string& ip)
    {
        return Permitip(ip, 0);
    }
    ::Ice::Int Permitip(const ::std::string& ip, const ::Ice::Context& __ctx)
    {
        return Permitip(ip, &__ctx);
    }
    
private:

    ::Ice::Int Permitip(const ::std::string&, const ::Ice::Context*);
    
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

namespace ridService
{

class ridSrvMgr : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int CheckUser(const ::std::string&, ::Ice::Int, const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int Forbiddenpcid(const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int Permitpcid(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int ForbiddenIp(const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int Permitip(const ::std::string&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace ridService
{

class ridSrvMgr : virtual public ::IceDelegate::ridService::ridSrvMgr,
                  virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int CheckUser(const ::std::string&, ::Ice::Int, const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int Forbiddenpcid(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int Permitpcid(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int ForbiddenIp(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int Permitip(const ::std::string&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace ridService
{

class ridSrvMgr : virtual public ::IceDelegate::ridService::ridSrvMgr,
                  virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int CheckUser(const ::std::string&, ::Ice::Int, const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int Forbiddenpcid(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int Permitpcid(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int ForbiddenIp(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int Permitip(const ::std::string&, const ::Ice::Context*);
};

}

}

namespace ridService
{

class ridSrvMgr : virtual public ::Ice::Object
{
public:

    typedef ridSrvMgrPrx ProxyType;
    typedef ridSrvMgrPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int CheckUser(const ::std::string&, ::Ice::Int, const ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___CheckUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int Forbiddenpcid(const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___Forbiddenpcid(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int Permitpcid(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___Permitpcid(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int ForbiddenIp(const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___ForbiddenIp(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int Permitip(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___Permitip(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__ridSrvMgrPtr(void*, ::Ice::ObjectPtr&);

}

#endif
