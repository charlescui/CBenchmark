// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `imcontrol_service.ice'

#ifndef __imcontrol_service_h__
#define __imcontrol_service_h__

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

namespace IMCoreControlService
{

class IMSecControlService;
bool operator==(const IMSecControlService&, const IMSecControlService&);
bool operator!=(const IMSecControlService&, const IMSecControlService&);
bool operator<(const IMSecControlService&, const IMSecControlService&);
bool operator<=(const IMSecControlService&, const IMSecControlService&);
bool operator>(const IMSecControlService&, const IMSecControlService&);
bool operator>=(const IMSecControlService&, const IMSecControlService&);

}

}

namespace IMCoreControlService
{

class IMSecControlService;
bool operator==(const IMSecControlService&, const IMSecControlService&);
bool operator!=(const IMSecControlService&, const IMSecControlService&);
bool operator<(const IMSecControlService&, const IMSecControlService&);
bool operator<=(const IMSecControlService&, const IMSecControlService&);
bool operator>(const IMSecControlService&, const IMSecControlService&);
bool operator>=(const IMSecControlService&, const IMSecControlService&);

}

namespace IceInternal
{

void incRef(::IMCoreControlService::IMSecControlService*);
void decRef(::IMCoreControlService::IMSecControlService*);

void incRef(::IceProxy::IMCoreControlService::IMSecControlService*);
void decRef(::IceProxy::IMCoreControlService::IMSecControlService*);

}

namespace IMCoreControlService
{

typedef ::IceInternal::Handle< ::IMCoreControlService::IMSecControlService> IMSecControlServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::IMCoreControlService::IMSecControlService> IMSecControlServicePrx;

void __write(::IceInternal::BasicStream*, const IMSecControlServicePrx&);
void __read(::IceInternal::BasicStream*, IMSecControlServicePrx&);
void __write(::IceInternal::BasicStream*, const IMSecControlServicePtr&);
void __patch__IMSecControlServicePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const IMSecControlServicePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const IMSecControlServicePtr&);
void __decRefUnsafe(const IMSecControlServicePtr&);
void __clearHandleUnsafe(IMSecControlServicePtr&);

}

namespace IMCoreControlService
{

typedef ::std::map< ::std::string, ::std::string> KVPair;

class __U__KVPair { };
void __write(::IceInternal::BasicStream*, const KVPair&, __U__KVPair);
void __read(::IceInternal::BasicStream*, KVPair&, __U__KVPair);

}

namespace IceProxy
{

namespace IMCoreControlService
{

class IMSecControlService : virtual public ::IceProxy::Ice::Object
{
public:

    bool filterMsg(const ::std::string& fromid, const ::std::string& toid, ::Ice::Int actdgree, const ::std::string& ip, const ::std::string& msg, const ::IMCoreControlService::KVPair& extraattrs)
    {
        return filterMsg(fromid, toid, actdgree, ip, msg, extraattrs, 0);
    }
    bool filterMsg(const ::std::string& fromid, const ::std::string& toid, ::Ice::Int actdgree, const ::std::string& ip, const ::std::string& msg, const ::IMCoreControlService::KVPair& extraattrs, const ::Ice::Context& __ctx)
    {
        return filterMsg(fromid, toid, actdgree, ip, msg, extraattrs, &__ctx);
    }
    
private:

    bool filterMsg(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::IMCoreControlService::KVPair&, const ::Ice::Context*);
    
public:

    bool filterMsg2(const ::std::string& fromid, const ::std::string& toid, ::Ice::Int actdgree, const ::std::string& ip, const ::std::string& msg, const ::IMCoreControlService::KVPair& extraattrs, ::std::string& newmsg)
    {
        return filterMsg2(fromid, toid, actdgree, ip, msg, extraattrs, newmsg, 0);
    }
    bool filterMsg2(const ::std::string& fromid, const ::std::string& toid, ::Ice::Int actdgree, const ::std::string& ip, const ::std::string& msg, const ::IMCoreControlService::KVPair& extraattrs, ::std::string& newmsg, const ::Ice::Context& __ctx)
    {
        return filterMsg2(fromid, toid, actdgree, ip, msg, extraattrs, newmsg, &__ctx);
    }
    
private:

    bool filterMsg2(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::IMCoreControlService::KVPair&, ::std::string&, const ::Ice::Context*);
    
public:

    bool filterMsgByFlag(const ::std::string& fromid, const ::std::string& toid, ::Ice::Int actdgree, const ::std::string& ip, const ::std::string& msg, const ::IMCoreControlService::KVPair& extraattrs, const ::std::string& checkmap)
    {
        return filterMsgByFlag(fromid, toid, actdgree, ip, msg, extraattrs, checkmap, 0);
    }
    bool filterMsgByFlag(const ::std::string& fromid, const ::std::string& toid, ::Ice::Int actdgree, const ::std::string& ip, const ::std::string& msg, const ::IMCoreControlService::KVPair& extraattrs, const ::std::string& checkmap, const ::Ice::Context& __ctx)
    {
        return filterMsgByFlag(fromid, toid, actdgree, ip, msg, extraattrs, checkmap, &__ctx);
    }
    
private:

    bool filterMsgByFlag(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::IMCoreControlService::KVPair&, const ::std::string&, const ::Ice::Context*);
    
public:

    bool checkOPAccess(const ::std::string& uid, ::Ice::Int actdgree, const ::std::string& ip, const ::std::string& packdata, const ::IMCoreControlService::KVPair& extraattrs)
    {
        return checkOPAccess(uid, actdgree, ip, packdata, extraattrs, 0);
    }
    bool checkOPAccess(const ::std::string& uid, ::Ice::Int actdgree, const ::std::string& ip, const ::std::string& packdata, const ::IMCoreControlService::KVPair& extraattrs, const ::Ice::Context& __ctx)
    {
        return checkOPAccess(uid, actdgree, ip, packdata, extraattrs, &__ctx);
    }
    
private:

    bool checkOPAccess(const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::IMCoreControlService::KVPair&, const ::Ice::Context*);
    
public:

    void writeAQLog(const ::std::string& data)
    {
        writeAQLog(data, 0);
    }
    void writeAQLog(const ::std::string& data, const ::Ice::Context& __ctx)
    {
        writeAQLog(data, &__ctx);
    }
    
private:

    void writeAQLog(const ::std::string&, const ::Ice::Context*);
    
public:

    bool checkControlAccess(const ::std::string& uid, ::Ice::Int actdegree, const ::std::string& ip, const ::std::string& version, ::Ice::Int checktype, const ::IMCoreControlService::KVPair& extraattrs)
    {
        return checkControlAccess(uid, actdegree, ip, version, checktype, extraattrs, 0);
    }
    bool checkControlAccess(const ::std::string& uid, ::Ice::Int actdegree, const ::std::string& ip, const ::std::string& version, ::Ice::Int checktype, const ::IMCoreControlService::KVPair& extraattrs, const ::Ice::Context& __ctx)
    {
        return checkControlAccess(uid, actdegree, ip, version, checktype, extraattrs, &__ctx);
    }
    
private:

    bool checkControlAccess(const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, ::Ice::Int, const ::IMCoreControlService::KVPair&, const ::Ice::Context*);
    
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

namespace IMCoreControlService
{

class IMSecControlService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual bool filterMsg(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::IMCoreControlService::KVPair&, const ::Ice::Context*) = 0;

    virtual bool filterMsg2(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::IMCoreControlService::KVPair&, ::std::string&, const ::Ice::Context*) = 0;

    virtual bool filterMsgByFlag(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::IMCoreControlService::KVPair&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual bool checkOPAccess(const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::IMCoreControlService::KVPair&, const ::Ice::Context*) = 0;

    virtual void writeAQLog(const ::std::string&, const ::Ice::Context*) = 0;

    virtual bool checkControlAccess(const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, ::Ice::Int, const ::IMCoreControlService::KVPair&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace IMCoreControlService
{

class IMSecControlService : virtual public ::IceDelegate::IMCoreControlService::IMSecControlService,
                            virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual bool filterMsg(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::IMCoreControlService::KVPair&, const ::Ice::Context*);

    virtual bool filterMsg2(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::IMCoreControlService::KVPair&, ::std::string&, const ::Ice::Context*);

    virtual bool filterMsgByFlag(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::IMCoreControlService::KVPair&, const ::std::string&, const ::Ice::Context*);

    virtual bool checkOPAccess(const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::IMCoreControlService::KVPair&, const ::Ice::Context*);

    virtual void writeAQLog(const ::std::string&, const ::Ice::Context*);

    virtual bool checkControlAccess(const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, ::Ice::Int, const ::IMCoreControlService::KVPair&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace IMCoreControlService
{

class IMSecControlService : virtual public ::IceDelegate::IMCoreControlService::IMSecControlService,
                            virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual bool filterMsg(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::IMCoreControlService::KVPair&, const ::Ice::Context*);

    virtual bool filterMsg2(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::IMCoreControlService::KVPair&, ::std::string&, const ::Ice::Context*);

    virtual bool filterMsgByFlag(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::IMCoreControlService::KVPair&, const ::std::string&, const ::Ice::Context*);

    virtual bool checkOPAccess(const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::IMCoreControlService::KVPair&, const ::Ice::Context*);

    virtual void writeAQLog(const ::std::string&, const ::Ice::Context*);

    virtual bool checkControlAccess(const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, ::Ice::Int, const ::IMCoreControlService::KVPair&, const ::Ice::Context*);
};

}

}

namespace IMCoreControlService
{

class IMSecControlService : virtual public ::Ice::Object
{
public:

    typedef IMSecControlServicePrx ProxyType;
    typedef IMSecControlServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual bool filterMsg(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::IMCoreControlService::KVPair&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___filterMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool filterMsg2(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::IMCoreControlService::KVPair&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___filterMsg2(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool filterMsgByFlag(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::IMCoreControlService::KVPair&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___filterMsgByFlag(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool checkOPAccess(const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::IMCoreControlService::KVPair&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___checkOPAccess(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void writeAQLog(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___writeAQLog(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool checkControlAccess(const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, ::Ice::Int, const ::IMCoreControlService::KVPair&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___checkControlAccess(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__IMSecControlServicePtr(void*, ::Ice::ObjectPtr&);

}

#endif
