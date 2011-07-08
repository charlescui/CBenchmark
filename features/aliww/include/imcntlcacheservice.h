// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `imcntlcacheservice.ice'

#ifndef __imcntlcacheservice_h__
#define __imcntlcacheservice_h__

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

class IUserCntLCacheService;
bool operator==(const IUserCntLCacheService&, const IUserCntLCacheService&);
bool operator!=(const IUserCntLCacheService&, const IUserCntLCacheService&);
bool operator<(const IUserCntLCacheService&, const IUserCntLCacheService&);
bool operator<=(const IUserCntLCacheService&, const IUserCntLCacheService&);
bool operator>(const IUserCntLCacheService&, const IUserCntLCacheService&);
bool operator>=(const IUserCntLCacheService&, const IUserCntLCacheService&);

}

}

namespace AliIM
{

class IUserCntLCacheService;
bool operator==(const IUserCntLCacheService&, const IUserCntLCacheService&);
bool operator!=(const IUserCntLCacheService&, const IUserCntLCacheService&);
bool operator<(const IUserCntLCacheService&, const IUserCntLCacheService&);
bool operator<=(const IUserCntLCacheService&, const IUserCntLCacheService&);
bool operator>(const IUserCntLCacheService&, const IUserCntLCacheService&);
bool operator>=(const IUserCntLCacheService&, const IUserCntLCacheService&);

}

namespace IceInternal
{

void incRef(::AliIM::IUserCntLCacheService*);
void decRef(::AliIM::IUserCntLCacheService*);

void incRef(::IceProxy::AliIM::IUserCntLCacheService*);
void decRef(::IceProxy::AliIM::IUserCntLCacheService*);

}

namespace AliIM
{

typedef ::IceInternal::Handle< ::AliIM::IUserCntLCacheService> IUserCntLCacheServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::AliIM::IUserCntLCacheService> IUserCntLCacheServicePrx;

void __write(::IceInternal::BasicStream*, const IUserCntLCacheServicePrx&);
void __read(::IceInternal::BasicStream*, IUserCntLCacheServicePrx&);
void __write(::IceInternal::BasicStream*, const IUserCntLCacheServicePtr&);
void __patch__IUserCntLCacheServicePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const IUserCntLCacheServicePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const IUserCntLCacheServicePtr&);
void __decRefUnsafe(const IUserCntLCacheServicePtr&);
void __clearHandleUnsafe(IUserCntLCacheServicePtr&);

}

namespace AliIM
{

}

namespace IceProxy
{

namespace AliIM
{

class IUserCntLCacheService : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int getUserCntTimeStamps(const ::std::string& longuid, ::Ice::Int& cnttimes)
    {
        return getUserCntTimeStamps(longuid, cnttimes, 0);
    }
    ::Ice::Int getUserCntTimeStamps(const ::std::string& longuid, ::Ice::Int& cnttimes, const ::Ice::Context& __ctx)
    {
        return getUserCntTimeStamps(longuid, cnttimes, &__ctx);
    }
    
private:

    ::Ice::Int getUserCntTimeStamps(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int removeUser(const ::std::string& longuid)
    {
        return removeUser(longuid, 0);
    }
    ::Ice::Int removeUser(const ::std::string& longuid, const ::Ice::Context& __ctx)
    {
        return removeUser(longuid, &__ctx);
    }
    
private:

    ::Ice::Int removeUser(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int backupUserContacts(const ::std::string& longuid, ::Ice::Int cnttimes, const ::Ice::StringSeq& cntids)
    {
        return backupUserContacts(longuid, cnttimes, cntids, 0);
    }
    ::Ice::Int backupUserContacts(const ::std::string& longuid, ::Ice::Int cnttimes, const ::Ice::StringSeq& cntids, const ::Ice::Context& __ctx)
    {
        return backupUserContacts(longuid, cnttimes, cntids, &__ctx);
    }
    
private:

    ::Ice::Int backupUserContacts(const ::std::string&, ::Ice::Int, const ::Ice::StringSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getBackupedUserContacts(const ::std::string& longuid, ::Ice::Int& cnttimes, ::Ice::StringSeq& cntids)
    {
        return getBackupedUserContacts(longuid, cnttimes, cntids, 0);
    }
    ::Ice::Int getBackupedUserContacts(const ::std::string& longuid, ::Ice::Int& cnttimes, ::Ice::StringSeq& cntids, const ::Ice::Context& __ctx)
    {
        return getBackupedUserContacts(longuid, cnttimes, cntids, &__ctx);
    }
    
private:

    ::Ice::Int getBackupedUserContacts(const ::std::string&, ::Ice::Int&, ::Ice::StringSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int addUserContact(const ::std::string& longuid, ::Ice::Int cnttimes, const ::std::string& cntid)
    {
        return addUserContact(longuid, cnttimes, cntid, 0);
    }
    ::Ice::Int addUserContact(const ::std::string& longuid, ::Ice::Int cnttimes, const ::std::string& cntid, const ::Ice::Context& __ctx)
    {
        return addUserContact(longuid, cnttimes, cntid, &__ctx);
    }
    
private:

    ::Ice::Int addUserContact(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int delUserContact(const ::std::string& longuid, ::Ice::Int cnttimes, const ::std::string& cntid)
    {
        return delUserContact(longuid, cnttimes, cntid, 0);
    }
    ::Ice::Int delUserContact(const ::std::string& longuid, ::Ice::Int cnttimes, const ::std::string& cntid, const ::Ice::Context& __ctx)
    {
        return delUserContact(longuid, cnttimes, cntid, &__ctx);
    }
    
private:

    ::Ice::Int delUserContact(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
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

class IUserCntLCacheService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int getUserCntTimeStamps(const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int removeUser(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int backupUserContacts(const ::std::string&, ::Ice::Int, const ::Ice::StringSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getBackupedUserContacts(const ::std::string&, ::Ice::Int&, ::Ice::StringSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int addUserContact(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int delUserContact(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace AliIM
{

class IUserCntLCacheService : virtual public ::IceDelegate::AliIM::IUserCntLCacheService,
                              virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int getUserCntTimeStamps(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int removeUser(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int backupUserContacts(const ::std::string&, ::Ice::Int, const ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getBackupedUserContacts(const ::std::string&, ::Ice::Int&, ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int addUserContact(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int delUserContact(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace AliIM
{

class IUserCntLCacheService : virtual public ::IceDelegate::AliIM::IUserCntLCacheService,
                              virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int getUserCntTimeStamps(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int removeUser(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int backupUserContacts(const ::std::string&, ::Ice::Int, const ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getBackupedUserContacts(const ::std::string&, ::Ice::Int&, ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int addUserContact(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int delUserContact(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);
};

}

}

namespace AliIM
{

class IUserCntLCacheService : virtual public ::Ice::Object
{
public:

    typedef IUserCntLCacheServicePrx ProxyType;
    typedef IUserCntLCacheServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int getUserCntTimeStamps(const ::std::string&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserCntTimeStamps(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int removeUser(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___removeUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int backupUserContacts(const ::std::string&, ::Ice::Int, const ::Ice::StringSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___backupUserContacts(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getBackupedUserContacts(const ::std::string&, ::Ice::Int&, ::Ice::StringSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getBackupedUserContacts(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int addUserContact(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___addUserContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int delUserContact(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___delUserContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__IUserCntLCacheServicePtr(void*, ::Ice::ObjectPtr&);

}

#endif
