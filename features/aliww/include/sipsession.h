// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `sipsession.ice'

#ifndef __sipsession_h__
#define __sipsession_h__

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

namespace sns
{

namespace session
{

class sessionService;
bool operator==(const sessionService&, const sessionService&);
bool operator!=(const sessionService&, const sessionService&);
bool operator<(const sessionService&, const sessionService&);
bool operator<=(const sessionService&, const sessionService&);
bool operator>(const sessionService&, const sessionService&);
bool operator>=(const sessionService&, const sessionService&);

}

}

}

}

}

}

}

}

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

namespace sns
{

namespace session
{

class sessionService;
bool operator==(const sessionService&, const sessionService&);
bool operator!=(const sessionService&, const sessionService&);
bool operator<(const sessionService&, const sessionService&);
bool operator<=(const sessionService&, const sessionService&);
bool operator>(const sessionService&, const sessionService&);
bool operator>=(const sessionService&, const sessionService&);

}

}

}

}

}

}

}

namespace IceInternal
{

void incRef(::com::alisoft::member::udb::api::sns::session::sessionService*);
void decRef(::com::alisoft::member::udb::api::sns::session::sessionService*);

void incRef(::IceProxy::com::alisoft::member::udb::api::sns::session::sessionService*);
void decRef(::IceProxy::com::alisoft::member::udb::api::sns::session::sessionService*);

}

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

namespace sns
{

namespace session
{

typedef ::IceInternal::Handle< ::com::alisoft::member::udb::api::sns::session::sessionService> sessionServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::alisoft::member::udb::api::sns::session::sessionService> sessionServicePrx;

void __write(::IceInternal::BasicStream*, const sessionServicePrx&);
void __read(::IceInternal::BasicStream*, sessionServicePrx&);
void __write(::IceInternal::BasicStream*, const sessionServicePtr&);
void __patch__sessionServicePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const sessionServicePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const sessionServicePtr&);
void __decRefUnsafe(const sessionServicePtr&);
void __clearHandleUnsafe(sessionServicePtr&);

}

}

}

}

}

}

}

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

namespace sns
{

namespace model
{

struct SessionInfo
{
    ::std::string sessionId;

    bool operator==(const SessionInfo&) const;
    bool operator!=(const SessionInfo&) const;
    bool operator<(const SessionInfo&) const;
    bool operator<=(const SessionInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SessionInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SessionInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

}

namespace session
{

}

}

}

}

}

}

}

namespace IceProxy
{

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

namespace sns
{

namespace session
{

class sessionService : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int bindSession(const ::std::string& appId, const ::std::string& userLongId, const ::std::string& type, ::com::alisoft::member::udb::api::sns::model::SessionInfo& sessionInfo)
    {
        return bindSession(appId, userLongId, type, sessionInfo, 0);
    }
    ::Ice::Int bindSession(const ::std::string& appId, const ::std::string& userLongId, const ::std::string& type, ::com::alisoft::member::udb::api::sns::model::SessionInfo& sessionInfo, const ::Ice::Context& __ctx)
    {
        return bindSession(appId, userLongId, type, sessionInfo, &__ctx);
    }
    
private:

    ::Ice::Int bindSession(const ::std::string&, const ::std::string&, const ::std::string&, ::com::alisoft::member::udb::api::sns::model::SessionInfo&, const ::Ice::Context*);
    
public:
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
};

}

}

}

}

}

}

}

}

namespace IceDelegate
{

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

namespace sns
{

namespace session
{

class sessionService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int bindSession(const ::std::string&, const ::std::string&, const ::std::string&, ::com::alisoft::member::udb::api::sns::model::SessionInfo&, const ::Ice::Context*) = 0;
};

}

}

}

}

}

}

}

}

namespace IceDelegateM
{

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

namespace sns
{

namespace session
{

class sessionService : virtual public ::IceDelegate::com::alisoft::member::udb::api::sns::session::sessionService,
                       virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int bindSession(const ::std::string&, const ::std::string&, const ::std::string&, ::com::alisoft::member::udb::api::sns::model::SessionInfo&, const ::Ice::Context*);
};

}

}

}

}

}

}

}

}

namespace IceDelegateD
{

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

namespace sns
{

namespace session
{

class sessionService : virtual public ::IceDelegate::com::alisoft::member::udb::api::sns::session::sessionService,
                       virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int bindSession(const ::std::string&, const ::std::string&, const ::std::string&, ::com::alisoft::member::udb::api::sns::model::SessionInfo&, const ::Ice::Context*);
};

}

}

}

}

}

}

}

}

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

namespace sns
{

namespace session
{

class sessionService : virtual public ::Ice::Object
{
public:

    typedef sessionServicePrx ProxyType;
    typedef sessionServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int bindSession(const ::std::string&, const ::std::string&, const ::std::string&, ::com::alisoft::member::udb::api::sns::model::SessionInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___bindSession(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__sessionServicePtr(void*, ::Ice::ObjectPtr&);

}

}

}

}

}

}

}

#endif
