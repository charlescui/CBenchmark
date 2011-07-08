// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `notifycontact.ice'

#ifndef __notifycontact_h__
#define __notifycontact_h__

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

class NotifyContactInterface;
bool operator==(const NotifyContactInterface&, const NotifyContactInterface&);
bool operator!=(const NotifyContactInterface&, const NotifyContactInterface&);
bool operator<(const NotifyContactInterface&, const NotifyContactInterface&);
bool operator<=(const NotifyContactInterface&, const NotifyContactInterface&);
bool operator>(const NotifyContactInterface&, const NotifyContactInterface&);
bool operator>=(const NotifyContactInterface&, const NotifyContactInterface&);

}

}

namespace AliIM
{

class NotifyContactInterface;
bool operator==(const NotifyContactInterface&, const NotifyContactInterface&);
bool operator!=(const NotifyContactInterface&, const NotifyContactInterface&);
bool operator<(const NotifyContactInterface&, const NotifyContactInterface&);
bool operator<=(const NotifyContactInterface&, const NotifyContactInterface&);
bool operator>(const NotifyContactInterface&, const NotifyContactInterface&);
bool operator>=(const NotifyContactInterface&, const NotifyContactInterface&);

}

namespace IceInternal
{

void incRef(::AliIM::NotifyContactInterface*);
void decRef(::AliIM::NotifyContactInterface*);

void incRef(::IceProxy::AliIM::NotifyContactInterface*);
void decRef(::IceProxy::AliIM::NotifyContactInterface*);

}

namespace AliIM
{

typedef ::IceInternal::Handle< ::AliIM::NotifyContactInterface> NotifyContactInterfacePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::AliIM::NotifyContactInterface> NotifyContactInterfacePrx;

void __write(::IceInternal::BasicStream*, const NotifyContactInterfacePrx&);
void __read(::IceInternal::BasicStream*, NotifyContactInterfacePrx&);
void __write(::IceInternal::BasicStream*, const NotifyContactInterfacePtr&);
void __patch__NotifyContactInterfacePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const NotifyContactInterfacePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const NotifyContactInterfacePtr&);
void __decRefUnsafe(const NotifyContactInterfacePtr&);
void __clearHandleUnsafe(NotifyContactInterfacePtr&);

}

namespace AliIM
{

}

namespace IceProxy
{

namespace AliIM
{

class NotifyContactInterface : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int NotifyDelContact(const ::std::string& loginId, const ::std::string& contactId)
    {
        return NotifyDelContact(loginId, contactId, 0);
    }
    ::Ice::Int NotifyDelContact(const ::std::string& loginId, const ::std::string& contactId, const ::Ice::Context& __ctx)
    {
        return NotifyDelContact(loginId, contactId, &__ctx);
    }
    
private:

    ::Ice::Int NotifyDelContact(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int NotifyAddContact(const ::std::string& loginId, const ::std::string& contactId, const ::std::string& groupName, ::Ice::Int groupId)
    {
        return NotifyAddContact(loginId, contactId, groupName, groupId, 0);
    }
    ::Ice::Int NotifyAddContact(const ::std::string& loginId, const ::std::string& contactId, const ::std::string& groupName, ::Ice::Int groupId, const ::Ice::Context& __ctx)
    {
        return NotifyAddContact(loginId, contactId, groupName, groupId, &__ctx);
    }
    
private:

    ::Ice::Int NotifyAddContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
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

class NotifyContactInterface : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int NotifyDelContact(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int NotifyAddContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace AliIM
{

class NotifyContactInterface : virtual public ::IceDelegate::AliIM::NotifyContactInterface,
                               virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int NotifyDelContact(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int NotifyAddContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace AliIM
{

class NotifyContactInterface : virtual public ::IceDelegate::AliIM::NotifyContactInterface,
                               virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int NotifyDelContact(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int NotifyAddContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
};

}

}

namespace AliIM
{

class NotifyContactInterface : virtual public ::Ice::Object
{
public:

    typedef NotifyContactInterfacePrx ProxyType;
    typedef NotifyContactInterfacePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int NotifyDelContact(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___NotifyDelContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int NotifyAddContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___NotifyAddContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__NotifyContactInterfacePtr(void*, ::Ice::ObjectPtr&);

}

#endif
