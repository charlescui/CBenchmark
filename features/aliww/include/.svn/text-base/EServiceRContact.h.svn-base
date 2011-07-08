// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `EServiceRContact.ice'

#ifndef __EServiceRContact_h__
#define __EServiceRContact_h__

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

class EServiceRecentContact;
bool operator==(const EServiceRecentContact&, const EServiceRecentContact&);
bool operator!=(const EServiceRecentContact&, const EServiceRecentContact&);
bool operator<(const EServiceRecentContact&, const EServiceRecentContact&);
bool operator<=(const EServiceRecentContact&, const EServiceRecentContact&);
bool operator>(const EServiceRecentContact&, const EServiceRecentContact&);
bool operator>=(const EServiceRecentContact&, const EServiceRecentContact&);

}

}

namespace AliIM
{

class EServiceRecentContact;
bool operator==(const EServiceRecentContact&, const EServiceRecentContact&);
bool operator!=(const EServiceRecentContact&, const EServiceRecentContact&);
bool operator<(const EServiceRecentContact&, const EServiceRecentContact&);
bool operator<=(const EServiceRecentContact&, const EServiceRecentContact&);
bool operator>(const EServiceRecentContact&, const EServiceRecentContact&);
bool operator>=(const EServiceRecentContact&, const EServiceRecentContact&);

}

namespace IceInternal
{

void incRef(::AliIM::EServiceRecentContact*);
void decRef(::AliIM::EServiceRecentContact*);

void incRef(::IceProxy::AliIM::EServiceRecentContact*);
void decRef(::IceProxy::AliIM::EServiceRecentContact*);

}

namespace AliIM
{

typedef ::IceInternal::Handle< ::AliIM::EServiceRecentContact> EServiceRecentContactPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::AliIM::EServiceRecentContact> EServiceRecentContactPrx;

void __write(::IceInternal::BasicStream*, const EServiceRecentContactPrx&);
void __read(::IceInternal::BasicStream*, EServiceRecentContactPrx&);
void __write(::IceInternal::BasicStream*, const EServiceRecentContactPtr&);
void __patch__EServiceRecentContactPtr(void*, ::Ice::ObjectPtr&);

void __addObject(const EServiceRecentContactPtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const EServiceRecentContactPtr&);
void __decRefUnsafe(const EServiceRecentContactPtr&);
void __clearHandleUnsafe(EServiceRecentContactPtr&);

}

namespace AliIM
{

}

namespace IceProxy
{

namespace AliIM
{

class EServiceRecentContact : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int checkRCnt(const ::std::string& uid, const ::std::string& cid)
    {
        return checkRCnt(uid, cid, 0);
    }
    ::Ice::Int checkRCnt(const ::std::string& uid, const ::std::string& cid, const ::Ice::Context& __ctx)
    {
        return checkRCnt(uid, cid, &__ctx);
    }
    
private:

    ::Ice::Int checkRCnt(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int addRcnt(const ::std::string& uid, const ::AliIM::SICERecentCnt& rcnt)
    {
        return addRcnt(uid, rcnt, 0);
    }
    ::Ice::Int addRcnt(const ::std::string& uid, const ::AliIM::SICERecentCnt& rcnt, const ::Ice::Context& __ctx)
    {
        return addRcnt(uid, rcnt, &__ctx);
    }
    
private:

    ::Ice::Int addRcnt(const ::std::string&, const ::AliIM::SICERecentCnt&, const ::Ice::Context*);
    
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

class EServiceRecentContact : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int checkRCnt(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int addRcnt(const ::std::string&, const ::AliIM::SICERecentCnt&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace AliIM
{

class EServiceRecentContact : virtual public ::IceDelegate::AliIM::EServiceRecentContact,
                              virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int checkRCnt(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int addRcnt(const ::std::string&, const ::AliIM::SICERecentCnt&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace AliIM
{

class EServiceRecentContact : virtual public ::IceDelegate::AliIM::EServiceRecentContact,
                              virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int checkRCnt(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int addRcnt(const ::std::string&, const ::AliIM::SICERecentCnt&, const ::Ice::Context*);
};

}

}

namespace AliIM
{

class EServiceRecentContact : virtual public ::Ice::Object
{
public:

    typedef EServiceRecentContactPrx ProxyType;
    typedef EServiceRecentContactPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int checkRCnt(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___checkRCnt(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int addRcnt(const ::std::string&, const ::AliIM::SICERecentCnt&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___addRcnt(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__EServiceRecentContactPtr(void*, ::Ice::ObjectPtr&);

}

#endif
