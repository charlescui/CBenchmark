// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `tmpsession.ice'

#ifndef __tmpsession_h__
#define __tmpsession_h__

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

class TmpSessionMgr;
bool operator==(const TmpSessionMgr&, const TmpSessionMgr&);
bool operator!=(const TmpSessionMgr&, const TmpSessionMgr&);
bool operator<(const TmpSessionMgr&, const TmpSessionMgr&);
bool operator<=(const TmpSessionMgr&, const TmpSessionMgr&);
bool operator>(const TmpSessionMgr&, const TmpSessionMgr&);
bool operator>=(const TmpSessionMgr&, const TmpSessionMgr&);

}

}

namespace AliIM
{

class TmpSessionMgr;
bool operator==(const TmpSessionMgr&, const TmpSessionMgr&);
bool operator!=(const TmpSessionMgr&, const TmpSessionMgr&);
bool operator<(const TmpSessionMgr&, const TmpSessionMgr&);
bool operator<=(const TmpSessionMgr&, const TmpSessionMgr&);
bool operator>(const TmpSessionMgr&, const TmpSessionMgr&);
bool operator>=(const TmpSessionMgr&, const TmpSessionMgr&);

}

namespace IceInternal
{

void incRef(::AliIM::TmpSessionMgr*);
void decRef(::AliIM::TmpSessionMgr*);

void incRef(::IceProxy::AliIM::TmpSessionMgr*);
void decRef(::IceProxy::AliIM::TmpSessionMgr*);

}

namespace AliIM
{

typedef ::IceInternal::Handle< ::AliIM::TmpSessionMgr> TmpSessionMgrPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::AliIM::TmpSessionMgr> TmpSessionMgrPrx;

void __write(::IceInternal::BasicStream*, const TmpSessionMgrPrx&);
void __read(::IceInternal::BasicStream*, TmpSessionMgrPrx&);
void __write(::IceInternal::BasicStream*, const TmpSessionMgrPtr&);
void __patch__TmpSessionMgrPtr(void*, ::Ice::ObjectPtr&);

void __addObject(const TmpSessionMgrPtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const TmpSessionMgrPtr&);
void __decRefUnsafe(const TmpSessionMgrPtr&);
void __clearHandleUnsafe(TmpSessionMgrPtr&);

}

namespace AliIM
{

}

namespace IceProxy
{

namespace AliIM
{

class TmpSessionMgr : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int getUserSession(const ::std::string& uid, ::std::string& sessionNo)
    {
        return getUserSession(uid, sessionNo, 0);
    }
    ::Ice::Int getUserSession(const ::std::string& uid, ::std::string& sessionNo, const ::Ice::Context& __ctx)
    {
        return getUserSession(uid, sessionNo, &__ctx);
    }
    
private:

    ::Ice::Int getUserSession(const ::std::string&, ::std::string&, const ::Ice::Context*);
    
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

class TmpSessionMgr : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int getUserSession(const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int checkUserSession(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace AliIM
{

class TmpSessionMgr : virtual public ::IceDelegate::AliIM::TmpSessionMgr,
                      virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int getUserSession(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int checkUserSession(const ::std::string&, const ::std::string&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace AliIM
{

class TmpSessionMgr : virtual public ::IceDelegate::AliIM::TmpSessionMgr,
                      virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int getUserSession(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int checkUserSession(const ::std::string&, const ::std::string&, const ::Ice::Context*);
};

}

}

namespace AliIM
{

class TmpSessionMgr : virtual public ::Ice::Object
{
public:

    typedef TmpSessionMgrPrx ProxyType;
    typedef TmpSessionMgrPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int getUserSession(const ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserSession(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int checkUserSession(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___checkUserSession(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__TmpSessionMgrPtr(void*, ::Ice::ObjectPtr&);

}

#endif
