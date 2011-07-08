// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `crcservice.ice'

#ifndef __crcservice_h__
#define __crcservice_h__

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

namespace CRCSERVICE
{

class CRCSInterface;
bool operator==(const CRCSInterface&, const CRCSInterface&);
bool operator!=(const CRCSInterface&, const CRCSInterface&);
bool operator<(const CRCSInterface&, const CRCSInterface&);
bool operator<=(const CRCSInterface&, const CRCSInterface&);
bool operator>(const CRCSInterface&, const CRCSInterface&);
bool operator>=(const CRCSInterface&, const CRCSInterface&);

}

}

namespace CRCSERVICE
{

class CRCSInterface;
bool operator==(const CRCSInterface&, const CRCSInterface&);
bool operator!=(const CRCSInterface&, const CRCSInterface&);
bool operator<(const CRCSInterface&, const CRCSInterface&);
bool operator<=(const CRCSInterface&, const CRCSInterface&);
bool operator>(const CRCSInterface&, const CRCSInterface&);
bool operator>=(const CRCSInterface&, const CRCSInterface&);

}

namespace IceInternal
{

void incRef(::CRCSERVICE::CRCSInterface*);
void decRef(::CRCSERVICE::CRCSInterface*);

void incRef(::IceProxy::CRCSERVICE::CRCSInterface*);
void decRef(::IceProxy::CRCSERVICE::CRCSInterface*);

}

namespace CRCSERVICE
{

typedef ::IceInternal::Handle< ::CRCSERVICE::CRCSInterface> CRCSInterfacePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::CRCSERVICE::CRCSInterface> CRCSInterfacePrx;

void __write(::IceInternal::BasicStream*, const CRCSInterfacePrx&);
void __read(::IceInternal::BasicStream*, CRCSInterfacePrx&);
void __write(::IceInternal::BasicStream*, const CRCSInterfacePtr&);
void __patch__CRCSInterfacePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const CRCSInterfacePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const CRCSInterfacePtr&);
void __decRefUnsafe(const CRCSInterfacePtr&);
void __clearHandleUnsafe(CRCSInterfacePtr&);

}

namespace CRCSERVICE
{

struct CRDateInfo
{
    ::Ice::Int beginDay;
    ::Ice::Int dayCount;

    bool operator==(const CRDateInfo&) const;
    bool operator!=(const CRDateInfo&) const;
    bool operator<(const CRDateInfo&) const;
    bool operator<=(const CRDateInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const CRDateInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const CRDateInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct UserCRInfo
{
    ::Ice::Int cmdID;
    ::Ice::Int beginTime;

    bool operator==(const UserCRInfo&) const;
    bool operator!=(const UserCRInfo&) const;
    bool operator<(const UserCRInfo&) const;
    bool operator<=(const UserCRInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const UserCRInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const UserCRInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

}

namespace IceProxy
{

namespace CRCSERVICE
{

class CRCSInterface : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int GetChatRoamingServiceState()
    {
        return GetChatRoamingServiceState(0);
    }
    ::Ice::Int GetChatRoamingServiceState(const ::Ice::Context& __ctx)
    {
        return GetChatRoamingServiceState(&__ctx);
    }
    
private:

    ::Ice::Int GetChatRoamingServiceState(const ::Ice::Context*);
    
public:

    ::Ice::Int GetCRDays(const ::std::string& id, const ::std::string& version, ::CRCSERVICE::CRDateInfo& info)
    {
        return GetCRDays(id, version, info, 0);
    }
    ::Ice::Int GetCRDays(const ::std::string& id, const ::std::string& version, ::CRCSERVICE::CRDateInfo& info, const ::Ice::Context& __ctx)
    {
        return GetCRDays(id, version, info, &__ctx);
    }
    
private:

    ::Ice::Int GetCRDays(const ::std::string&, const ::std::string&, ::CRCSERVICE::CRDateInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int CheckUserInfo(const ::std::string& id, const ::std::string& version)
    {
        return CheckUserInfo(id, version, 0);
    }
    ::Ice::Int CheckUserInfo(const ::std::string& id, const ::std::string& version, const ::Ice::Context& __ctx)
    {
        return CheckUserInfo(id, version, &__ctx);
    }
    
private:

    ::Ice::Int CheckUserInfo(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUserCRState(const ::std::string& id, const ::std::string& version, ::CRCSERVICE::UserCRInfo& crinfo)
    {
        return GetUserCRState(id, version, crinfo, 0);
    }
    ::Ice::Int GetUserCRState(const ::std::string& id, const ::std::string& version, ::CRCSERVICE::UserCRInfo& crinfo, const ::Ice::Context& __ctx)
    {
        return GetUserCRState(id, version, crinfo, &__ctx);
    }
    
private:

    ::Ice::Int GetUserCRState(const ::std::string&, const ::std::string&, ::CRCSERVICE::UserCRInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int SetUserCRState(const ::std::string& id, const ::std::string& version, ::Ice::Int cmdId)
    {
        return SetUserCRState(id, version, cmdId, 0);
    }
    ::Ice::Int SetUserCRState(const ::std::string& id, const ::std::string& version, ::Ice::Int cmdId, const ::Ice::Context& __ctx)
    {
        return SetUserCRState(id, version, cmdId, &__ctx);
    }
    
private:

    ::Ice::Int SetUserCRState(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
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

namespace CRCSERVICE
{

class CRCSInterface : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int GetChatRoamingServiceState(const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetCRDays(const ::std::string&, const ::std::string&, ::CRCSERVICE::CRDateInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int CheckUserInfo(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUserCRState(const ::std::string&, const ::std::string&, ::CRCSERVICE::UserCRInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int SetUserCRState(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace CRCSERVICE
{

class CRCSInterface : virtual public ::IceDelegate::CRCSERVICE::CRCSInterface,
                      virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int GetChatRoamingServiceState(const ::Ice::Context*);

    virtual ::Ice::Int GetCRDays(const ::std::string&, const ::std::string&, ::CRCSERVICE::CRDateInfo&, const ::Ice::Context*);

    virtual ::Ice::Int CheckUserInfo(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserCRState(const ::std::string&, const ::std::string&, ::CRCSERVICE::UserCRInfo&, const ::Ice::Context*);

    virtual ::Ice::Int SetUserCRState(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace CRCSERVICE
{

class CRCSInterface : virtual public ::IceDelegate::CRCSERVICE::CRCSInterface,
                      virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int GetChatRoamingServiceState(const ::Ice::Context*);

    virtual ::Ice::Int GetCRDays(const ::std::string&, const ::std::string&, ::CRCSERVICE::CRDateInfo&, const ::Ice::Context*);

    virtual ::Ice::Int CheckUserInfo(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserCRState(const ::std::string&, const ::std::string&, ::CRCSERVICE::UserCRInfo&, const ::Ice::Context*);

    virtual ::Ice::Int SetUserCRState(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
};

}

}

namespace CRCSERVICE
{

class CRCSInterface : virtual public ::Ice::Object
{
public:

    typedef CRCSInterfacePrx ProxyType;
    typedef CRCSInterfacePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int GetChatRoamingServiceState(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetChatRoamingServiceState(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetCRDays(const ::std::string&, const ::std::string&, ::CRCSERVICE::CRDateInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetCRDays(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int CheckUserInfo(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___CheckUserInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetUserCRState(const ::std::string&, const ::std::string&, ::CRCSERVICE::UserCRInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserCRState(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int SetUserCRState(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___SetUserCRState(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__CRCSInterfacePtr(void*, ::Ice::ObjectPtr&);

}

#endif
