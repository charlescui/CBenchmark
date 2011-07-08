// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `imsession.ice'

#ifndef __imsession_h__
#define __imsession_h__

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

namespace AliIM
{

class SessionMgr;
bool operator==(const SessionMgr&, const SessionMgr&);
bool operator!=(const SessionMgr&, const SessionMgr&);
bool operator<(const SessionMgr&, const SessionMgr&);
bool operator<=(const SessionMgr&, const SessionMgr&);
bool operator>(const SessionMgr&, const SessionMgr&);
bool operator>=(const SessionMgr&, const SessionMgr&);

}

}

namespace AliIM
{

class SessionMgr;
bool operator==(const SessionMgr&, const SessionMgr&);
bool operator!=(const SessionMgr&, const SessionMgr&);
bool operator<(const SessionMgr&, const SessionMgr&);
bool operator<=(const SessionMgr&, const SessionMgr&);
bool operator>(const SessionMgr&, const SessionMgr&);
bool operator>=(const SessionMgr&, const SessionMgr&);

}

namespace IceInternal
{

void incRef(::AliIM::SessionMgr*);
void decRef(::AliIM::SessionMgr*);

void incRef(::IceProxy::AliIM::SessionMgr*);
void decRef(::IceProxy::AliIM::SessionMgr*);

}

namespace AliIM
{

typedef ::IceInternal::Handle< ::AliIM::SessionMgr> SessionMgrPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::AliIM::SessionMgr> SessionMgrPrx;

void __write(::IceInternal::BasicStream*, const SessionMgrPrx&);
void __read(::IceInternal::BasicStream*, SessionMgrPrx&);
void __write(::IceInternal::BasicStream*, const SessionMgrPtr&);
void __patch__SessionMgrPtr(void*, ::Ice::ObjectPtr&);

void __addObject(const SessionMgrPtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const SessionMgrPtr&);
void __decRefUnsafe(const SessionMgrPtr&);
void __clearHandleUnsafe(SessionMgrPtr&);

}

namespace AliIM
{

struct SIceSession
{
    ::std::string uid;
    ::std::string sessionNo;
    ::Ice::Int expiretime;

    bool operator==(const SIceSession&) const;
    bool operator!=(const SIceSession&) const;
    bool operator<(const SIceSession&) const;
    bool operator<=(const SIceSession& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SIceSession& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SIceSession& __rhs) const
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

class SessionMgr : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int getUserSession(const ::std::string& uid, ::AliIM::SIceSession& retsession)
    {
        return getUserSession(uid, retsession, 0);
    }
    ::Ice::Int getUserSession(const ::std::string& uid, ::AliIM::SIceSession& retsession, const ::Ice::Context& __ctx)
    {
        return getUserSession(uid, retsession, &__ctx);
    }
    
private:

    ::Ice::Int getUserSession(const ::std::string&, ::AliIM::SIceSession&, const ::Ice::Context*);
    
public:

    ::Ice::Int checkUserSession(const ::std::string& uid, const ::std::string& sessionNo)
    {
        return checkUserSession(uid, sessionNo, 0);
    }
    ::Ice::Int checkUserSession(const ::std::string& uid, const ::std::string& sessionNo, const ::Ice::Context& __ctx)
    {
        return checkUserSession(uid, sessionNo, &__ctx);
    }
    
private:

    ::Ice::Int checkUserSession(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int removeSession(const ::std::string& uid)
    {
        return removeSession(uid, 0);
    }
    ::Ice::Int removeSession(const ::std::string& uid, const ::Ice::Context& __ctx)
    {
        return removeSession(uid, &__ctx);
    }
    
private:

    ::Ice::Int removeSession(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserExistSession(const ::std::string& uid, ::AliIM::SIceSession& retsession)
    {
        return getUserExistSession(uid, retsession, 0);
    }
    ::Ice::Int getUserExistSession(const ::std::string& uid, ::AliIM::SIceSession& retsession, const ::Ice::Context& __ctx)
    {
        return getUserExistSession(uid, retsession, &__ctx);
    }
    
private:

    ::Ice::Int getUserExistSession(const ::std::string&, ::AliIM::SIceSession&, const ::Ice::Context*);
    
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

class SessionMgr : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int getUserSession(const ::std::string&, ::AliIM::SIceSession&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int checkUserSession(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int removeSession(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserExistSession(const ::std::string&, ::AliIM::SIceSession&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace AliIM
{

class SessionMgr : virtual public ::IceDelegate::AliIM::SessionMgr,
                   virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int getUserSession(const ::std::string&, ::AliIM::SIceSession&, const ::Ice::Context*);

    virtual ::Ice::Int checkUserSession(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int removeSession(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getUserExistSession(const ::std::string&, ::AliIM::SIceSession&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace AliIM
{

class SessionMgr : virtual public ::IceDelegate::AliIM::SessionMgr,
                   virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int getUserSession(const ::std::string&, ::AliIM::SIceSession&, const ::Ice::Context*);

    virtual ::Ice::Int checkUserSession(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int removeSession(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getUserExistSession(const ::std::string&, ::AliIM::SIceSession&, const ::Ice::Context*);
};

}

}

namespace AliIM
{

class SessionMgr : virtual public ::Ice::Object
{
public:

    typedef SessionMgrPrx ProxyType;
    typedef SessionMgrPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int getUserSession(const ::std::string&, ::AliIM::SIceSession&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserSession(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int checkUserSession(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___checkUserSession(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int removeSession(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___removeSession(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUserExistSession(const ::std::string&, ::AliIM::SIceSession&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserExistSession(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__SessionMgrPtr(void*, ::Ice::ObjectPtr&);

}

#endif
