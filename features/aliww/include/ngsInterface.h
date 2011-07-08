// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `ngsInterface.ice'

#ifndef __ngsInterface_h__
#define __ngsInterface_h__

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

class NGSInterface;
bool operator==(const NGSInterface&, const NGSInterface&);
bool operator!=(const NGSInterface&, const NGSInterface&);
bool operator<(const NGSInterface&, const NGSInterface&);
bool operator<=(const NGSInterface&, const NGSInterface&);
bool operator>(const NGSInterface&, const NGSInterface&);
bool operator>=(const NGSInterface&, const NGSInterface&);

}

}

namespace AliIM
{

class NGSInterface;
bool operator==(const NGSInterface&, const NGSInterface&);
bool operator!=(const NGSInterface&, const NGSInterface&);
bool operator<(const NGSInterface&, const NGSInterface&);
bool operator<=(const NGSInterface&, const NGSInterface&);
bool operator>(const NGSInterface&, const NGSInterface&);
bool operator>=(const NGSInterface&, const NGSInterface&);

}

namespace IceInternal
{

void incRef(::AliIM::NGSInterface*);
void decRef(::AliIM::NGSInterface*);

void incRef(::IceProxy::AliIM::NGSInterface*);
void decRef(::IceProxy::AliIM::NGSInterface*);

}

namespace AliIM
{

typedef ::IceInternal::Handle< ::AliIM::NGSInterface> NGSInterfacePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::AliIM::NGSInterface> NGSInterfacePrx;

void __write(::IceInternal::BasicStream*, const NGSInterfacePrx&);
void __read(::IceInternal::BasicStream*, NGSInterfacePrx&);
void __write(::IceInternal::BasicStream*, const NGSInterfacePtr&);
void __patch__NGSInterfacePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const NGSInterfacePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const NGSInterfacePtr&);
void __decRefUnsafe(const NGSInterfacePtr&);
void __clearHandleUnsafe(NGSInterfacePtr&);

}

namespace AliIM
{

}

namespace IceProxy
{

namespace AliIM
{

class NGSInterface : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int notifyOperationTip(const ::std::string& uid, const ::std::string& cid, const ::std::string& message)
    {
        return notifyOperationTip(uid, cid, message, 0);
    }
    ::Ice::Int notifyOperationTip(const ::std::string& uid, const ::std::string& cid, const ::std::string& message, const ::Ice::Context& __ctx)
    {
        return notifyOperationTip(uid, cid, message, &__ctx);
    }
    
private:

    ::Ice::Int notifyOperationTip(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
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

class NGSInterface : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int notifyOperationTip(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace AliIM
{

class NGSInterface : virtual public ::IceDelegate::AliIM::NGSInterface,
                     virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int notifyOperationTip(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace AliIM
{

class NGSInterface : virtual public ::IceDelegate::AliIM::NGSInterface,
                     virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int notifyOperationTip(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
};

}

}

namespace AliIM
{

class NGSInterface : virtual public ::Ice::Object
{
public:

    typedef NGSInterfacePrx ProxyType;
    typedef NGSInterfacePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int notifyOperationTip(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___notifyOperationTip(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__NGSInterfacePtr(void*, ::Ice::ObjectPtr&);

}

#endif
