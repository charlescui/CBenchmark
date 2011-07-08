// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `ftservice.ice'

#ifndef __ftservice_h__
#define __ftservice_h__

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

namespace alliFTServer
{

class IFTService;
bool operator==(const IFTService&, const IFTService&);
bool operator!=(const IFTService&, const IFTService&);
bool operator<(const IFTService&, const IFTService&);
bool operator<=(const IFTService&, const IFTService&);
bool operator>(const IFTService&, const IFTService&);
bool operator>=(const IFTService&, const IFTService&);

class IFTNewService;
bool operator==(const IFTNewService&, const IFTNewService&);
bool operator!=(const IFTNewService&, const IFTNewService&);
bool operator<(const IFTNewService&, const IFTNewService&);
bool operator<=(const IFTNewService&, const IFTNewService&);
bool operator>(const IFTNewService&, const IFTNewService&);
bool operator>=(const IFTNewService&, const IFTNewService&);

}

}

namespace alliFTServer
{

class IFTService;
bool operator==(const IFTService&, const IFTService&);
bool operator!=(const IFTService&, const IFTService&);
bool operator<(const IFTService&, const IFTService&);
bool operator<=(const IFTService&, const IFTService&);
bool operator>(const IFTService&, const IFTService&);
bool operator>=(const IFTService&, const IFTService&);

class IFTNewService;
bool operator==(const IFTNewService&, const IFTNewService&);
bool operator!=(const IFTNewService&, const IFTNewService&);
bool operator<(const IFTNewService&, const IFTNewService&);
bool operator<=(const IFTNewService&, const IFTNewService&);
bool operator>(const IFTNewService&, const IFTNewService&);
bool operator>=(const IFTNewService&, const IFTNewService&);

}

namespace IceInternal
{

void incRef(::alliFTServer::IFTService*);
void decRef(::alliFTServer::IFTService*);

void incRef(::IceProxy::alliFTServer::IFTService*);
void decRef(::IceProxy::alliFTServer::IFTService*);

void incRef(::alliFTServer::IFTNewService*);
void decRef(::alliFTServer::IFTNewService*);

void incRef(::IceProxy::alliFTServer::IFTNewService*);
void decRef(::IceProxy::alliFTServer::IFTNewService*);

}

namespace alliFTServer
{

typedef ::IceInternal::Handle< ::alliFTServer::IFTService> IFTServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::alliFTServer::IFTService> IFTServicePrx;

void __write(::IceInternal::BasicStream*, const IFTServicePrx&);
void __read(::IceInternal::BasicStream*, IFTServicePrx&);
void __write(::IceInternal::BasicStream*, const IFTServicePtr&);
void __patch__IFTServicePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const IFTServicePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const IFTServicePtr&);
void __decRefUnsafe(const IFTServicePtr&);
void __clearHandleUnsafe(IFTServicePtr&);

typedef ::IceInternal::Handle< ::alliFTServer::IFTNewService> IFTNewServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::alliFTServer::IFTNewService> IFTNewServicePrx;

void __write(::IceInternal::BasicStream*, const IFTNewServicePrx&);
void __read(::IceInternal::BasicStream*, IFTNewServicePrx&);
void __write(::IceInternal::BasicStream*, const IFTNewServicePtr&);
void __patch__IFTNewServicePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const IFTNewServicePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const IFTNewServicePtr&);
void __decRefUnsafe(const IFTNewServicePtr&);
void __clearHandleUnsafe(IFTNewServicePtr&);

}

namespace alliFTServer
{

}

namespace IceProxy
{

namespace alliFTServer
{

class IFTService : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int getServiceInfo(const ::std::string& senduid, const ::std::string& touid, ::std::string& srvIp, ::Ice::Short& srvPort)
    {
        return getServiceInfo(senduid, touid, srvIp, srvPort, 0);
    }
    ::Ice::Int getServiceInfo(const ::std::string& senduid, const ::std::string& touid, ::std::string& srvIp, ::Ice::Short& srvPort, const ::Ice::Context& __ctx)
    {
        return getServiceInfo(senduid, touid, srvIp, srvPort, &__ctx);
    }
    
private:

    ::Ice::Int getServiceInfo(const ::std::string&, const ::std::string&, ::std::string&, ::Ice::Short&, const ::Ice::Context*);
    
public:

    ::Ice::Int getTietuServiceInfo(const ::std::string& senduid, ::Ice::Int& sessionSum, ::std::string& srvIp, ::Ice::Short& srvPort)
    {
        return getTietuServiceInfo(senduid, sessionSum, srvIp, srvPort, 0);
    }
    ::Ice::Int getTietuServiceInfo(const ::std::string& senduid, ::Ice::Int& sessionSum, ::std::string& srvIp, ::Ice::Short& srvPort, const ::Ice::Context& __ctx)
    {
        return getTietuServiceInfo(senduid, sessionSum, srvIp, srvPort, &__ctx);
    }
    
private:

    ::Ice::Int getTietuServiceInfo(const ::std::string&, ::Ice::Int&, ::std::string&, ::Ice::Short&, const ::Ice::Context*);
    
public:
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
};

class IFTNewService : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int getAddr(::Ice::Short _cpp_typeid, const ::std::string& senduid, ::Ice::Long& ftsid, ::std::string& srvIp, ::Ice::Short& srvProt)
    {
        return getAddr(_cpp_typeid, senduid, ftsid, srvIp, srvProt, 0);
    }
    ::Ice::Int getAddr(::Ice::Short _cpp_typeid, const ::std::string& senduid, ::Ice::Long& ftsid, ::std::string& srvIp, ::Ice::Short& srvProt, const ::Ice::Context& __ctx)
    {
        return getAddr(_cpp_typeid, senduid, ftsid, srvIp, srvProt, &__ctx);
    }
    
private:

    ::Ice::Int getAddr(::Ice::Short, const ::std::string&, ::Ice::Long&, ::std::string&, ::Ice::Short&, const ::Ice::Context*);
    
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

namespace alliFTServer
{

class IFTService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int getServiceInfo(const ::std::string&, const ::std::string&, ::std::string&, ::Ice::Short&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getTietuServiceInfo(const ::std::string&, ::Ice::Int&, ::std::string&, ::Ice::Short&, const ::Ice::Context*) = 0;
};

class IFTNewService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int getAddr(::Ice::Short, const ::std::string&, ::Ice::Long&, ::std::string&, ::Ice::Short&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace alliFTServer
{

class IFTService : virtual public ::IceDelegate::alliFTServer::IFTService,
                   virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int getServiceInfo(const ::std::string&, const ::std::string&, ::std::string&, ::Ice::Short&, const ::Ice::Context*);

    virtual ::Ice::Int getTietuServiceInfo(const ::std::string&, ::Ice::Int&, ::std::string&, ::Ice::Short&, const ::Ice::Context*);
};

class IFTNewService : virtual public ::IceDelegate::alliFTServer::IFTNewService,
                      virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int getAddr(::Ice::Short, const ::std::string&, ::Ice::Long&, ::std::string&, ::Ice::Short&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace alliFTServer
{

class IFTService : virtual public ::IceDelegate::alliFTServer::IFTService,
                   virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int getServiceInfo(const ::std::string&, const ::std::string&, ::std::string&, ::Ice::Short&, const ::Ice::Context*);

    virtual ::Ice::Int getTietuServiceInfo(const ::std::string&, ::Ice::Int&, ::std::string&, ::Ice::Short&, const ::Ice::Context*);
};

class IFTNewService : virtual public ::IceDelegate::alliFTServer::IFTNewService,
                      virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int getAddr(::Ice::Short, const ::std::string&, ::Ice::Long&, ::std::string&, ::Ice::Short&, const ::Ice::Context*);
};

}

}

namespace alliFTServer
{

class IFTService : virtual public ::Ice::Object
{
public:

    typedef IFTServicePrx ProxyType;
    typedef IFTServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int getServiceInfo(const ::std::string&, const ::std::string&, ::std::string&, ::Ice::Short&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getServiceInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getTietuServiceInfo(const ::std::string&, ::Ice::Int&, ::std::string&, ::Ice::Short&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getTietuServiceInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__IFTServicePtr(void*, ::Ice::ObjectPtr&);

class IFTNewService : virtual public ::Ice::Object
{
public:

    typedef IFTNewServicePrx ProxyType;
    typedef IFTNewServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int getAddr(::Ice::Short, const ::std::string&, ::Ice::Long&, ::std::string&, ::Ice::Short&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getAddr(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__IFTNewServicePtr(void*, ::Ice::ObjectPtr&);

}

#endif
