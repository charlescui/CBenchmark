// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `recentContactExternal.ice'

#ifndef __recentContactExternal_h__
#define __recentContactExternal_h__

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

class IRecentContactExternal;
bool operator==(const IRecentContactExternal&, const IRecentContactExternal&);
bool operator!=(const IRecentContactExternal&, const IRecentContactExternal&);
bool operator<(const IRecentContactExternal&, const IRecentContactExternal&);
bool operator<=(const IRecentContactExternal&, const IRecentContactExternal&);
bool operator>(const IRecentContactExternal&, const IRecentContactExternal&);
bool operator>=(const IRecentContactExternal&, const IRecentContactExternal&);

}

}

namespace AliIM
{

class IRecentContactExternal;
bool operator==(const IRecentContactExternal&, const IRecentContactExternal&);
bool operator!=(const IRecentContactExternal&, const IRecentContactExternal&);
bool operator<(const IRecentContactExternal&, const IRecentContactExternal&);
bool operator<=(const IRecentContactExternal&, const IRecentContactExternal&);
bool operator>(const IRecentContactExternal&, const IRecentContactExternal&);
bool operator>=(const IRecentContactExternal&, const IRecentContactExternal&);

}

namespace IceInternal
{

void incRef(::AliIM::IRecentContactExternal*);
void decRef(::AliIM::IRecentContactExternal*);

void incRef(::IceProxy::AliIM::IRecentContactExternal*);
void decRef(::IceProxy::AliIM::IRecentContactExternal*);

}

namespace AliIM
{

typedef ::IceInternal::Handle< ::AliIM::IRecentContactExternal> IRecentContactExternalPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::AliIM::IRecentContactExternal> IRecentContactExternalPrx;

void __write(::IceInternal::BasicStream*, const IRecentContactExternalPrx&);
void __read(::IceInternal::BasicStream*, IRecentContactExternalPrx&);
void __write(::IceInternal::BasicStream*, const IRecentContactExternalPtr&);
void __patch__IRecentContactExternalPtr(void*, ::Ice::ObjectPtr&);

void __addObject(const IRecentContactExternalPtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const IRecentContactExternalPtr&);
void __decRefUnsafe(const IRecentContactExternalPtr&);
void __clearHandleUnsafe(IRecentContactExternalPtr&);

}

namespace AliIM
{

}

namespace IceProxy
{

namespace AliIM
{

class IRecentContactExternal : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int addRecentContact(const ::std::string& strCaller, const ::std::string& strServiceType, const ::std::string& loginId, const ::std::string& contactId, ::Ice::Int type, ::Ice::Int optime)
    {
        return addRecentContact(strCaller, strServiceType, loginId, contactId, type, optime, 0);
    }
    ::Ice::Int addRecentContact(const ::std::string& strCaller, const ::std::string& strServiceType, const ::std::string& loginId, const ::std::string& contactId, ::Ice::Int type, ::Ice::Int optime, const ::Ice::Context& __ctx)
    {
        return addRecentContact(strCaller, strServiceType, loginId, contactId, type, optime, &__ctx);
    }
    
private:

    ::Ice::Int addRecentContact(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
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

class IRecentContactExternal : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int addRecentContact(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace AliIM
{

class IRecentContactExternal : virtual public ::IceDelegate::AliIM::IRecentContactExternal,
                               virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int addRecentContact(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace AliIM
{

class IRecentContactExternal : virtual public ::IceDelegate::AliIM::IRecentContactExternal,
                               virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int addRecentContact(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
};

}

}

namespace AliIM
{

class IRecentContactExternal : virtual public ::Ice::Object
{
public:

    typedef IRecentContactExternalPrx ProxyType;
    typedef IRecentContactExternalPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int addRecentContact(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___addRecentContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__IRecentContactExternalPtr(void*, ::Ice::ObjectPtr&);

}

#endif
