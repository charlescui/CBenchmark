// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `udbservice.ice'

#ifndef __udbservice_h__
#define __udbservice_h__

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

namespace AliICEUDB
{

class IUDBService;
bool operator==(const IUDBService&, const IUDBService&);
bool operator!=(const IUDBService&, const IUDBService&);
bool operator<(const IUDBService&, const IUDBService&);
bool operator<=(const IUDBService&, const IUDBService&);
bool operator>(const IUDBService&, const IUDBService&);
bool operator>=(const IUDBService&, const IUDBService&);

class IUDBInfo;
bool operator==(const IUDBInfo&, const IUDBInfo&);
bool operator!=(const IUDBInfo&, const IUDBInfo&);
bool operator<(const IUDBInfo&, const IUDBInfo&);
bool operator<=(const IUDBInfo&, const IUDBInfo&);
bool operator>(const IUDBInfo&, const IUDBInfo&);
bool operator>=(const IUDBInfo&, const IUDBInfo&);

}

}

namespace AliICEUDB
{

class IUDBService;
bool operator==(const IUDBService&, const IUDBService&);
bool operator!=(const IUDBService&, const IUDBService&);
bool operator<(const IUDBService&, const IUDBService&);
bool operator<=(const IUDBService&, const IUDBService&);
bool operator>(const IUDBService&, const IUDBService&);
bool operator>=(const IUDBService&, const IUDBService&);

class IUDBInfo;
bool operator==(const IUDBInfo&, const IUDBInfo&);
bool operator!=(const IUDBInfo&, const IUDBInfo&);
bool operator<(const IUDBInfo&, const IUDBInfo&);
bool operator<=(const IUDBInfo&, const IUDBInfo&);
bool operator>(const IUDBInfo&, const IUDBInfo&);
bool operator>=(const IUDBInfo&, const IUDBInfo&);

}

namespace IceInternal
{

void incRef(::AliICEUDB::IUDBService*);
void decRef(::AliICEUDB::IUDBService*);

void incRef(::IceProxy::AliICEUDB::IUDBService*);
void decRef(::IceProxy::AliICEUDB::IUDBService*);

void incRef(::AliICEUDB::IUDBInfo*);
void decRef(::AliICEUDB::IUDBInfo*);

void incRef(::IceProxy::AliICEUDB::IUDBInfo*);
void decRef(::IceProxy::AliICEUDB::IUDBInfo*);

}

namespace AliICEUDB
{

typedef ::IceInternal::Handle< ::AliICEUDB::IUDBService> IUDBServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::AliICEUDB::IUDBService> IUDBServicePrx;

void __write(::IceInternal::BasicStream*, const IUDBServicePrx&);
void __read(::IceInternal::BasicStream*, IUDBServicePrx&);
void __write(::IceInternal::BasicStream*, const IUDBServicePtr&);
void __patch__IUDBServicePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const IUDBServicePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const IUDBServicePtr&);
void __decRefUnsafe(const IUDBServicePtr&);
void __clearHandleUnsafe(IUDBServicePtr&);

typedef ::IceInternal::Handle< ::AliICEUDB::IUDBInfo> IUDBInfoPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::AliICEUDB::IUDBInfo> IUDBInfoPrx;

void __write(::IceInternal::BasicStream*, const IUDBInfoPrx&);
void __read(::IceInternal::BasicStream*, IUDBInfoPrx&);
void __write(::IceInternal::BasicStream*, const IUDBInfoPtr&);
void __patch__IUDBInfoPtr(void*, ::Ice::ObjectPtr&);

void __addObject(const IUDBInfoPtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const IUDBInfoPtr&);
void __decRefUnsafe(const IUDBInfoPtr&);
void __clearHandleUnsafe(IUDBInfoPtr&);

}

namespace AliICEUDB
{

typedef ::std::map< ::std::string, ::std::string> KVMap;

class __U__KVMap { };
void __write(::IceInternal::BasicStream*, const KVMap&, __U__KVMap);
void __read(::IceInternal::BasicStream*, KVMap&, __U__KVMap);

}

namespace IceProxy
{

namespace AliICEUDB
{

class IUDBService : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int validateUDBUser(const ::std::string& site, const ::std::string& siteid, const ::std::string& sitemd5pw)
    {
        return validateUDBUser(site, siteid, sitemd5pw, 0);
    }
    ::Ice::Int validateUDBUser(const ::std::string& site, const ::std::string& siteid, const ::std::string& sitemd5pw, const ::Ice::Context& __ctx)
    {
        return validateUDBUser(site, siteid, sitemd5pw, &__ctx);
    }
    
private:

    ::Ice::Int validateUDBUser(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
};

class IUDBInfo : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int addUserProfile(const ::std::string& lid, const ::AliICEUDB::KVMap& kvMapArgs)
    {
        return addUserProfile(lid, kvMapArgs, 0);
    }
    ::Ice::Int addUserProfile(const ::std::string& lid, const ::AliICEUDB::KVMap& kvMapArgs, const ::Ice::Context& __ctx)
    {
        return addUserProfile(lid, kvMapArgs, &__ctx);
    }
    
private:

    ::Ice::Int addUserProfile(const ::std::string&, const ::AliICEUDB::KVMap&, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserProfile(const ::std::string& lid, const ::AliICEUDB::KVMap& kvMapArgs)
    {
        return getUserProfile(lid, kvMapArgs, 0);
    }
    ::Ice::Int getUserProfile(const ::std::string& lid, const ::AliICEUDB::KVMap& kvMapArgs, const ::Ice::Context& __ctx)
    {
        return getUserProfile(lid, kvMapArgs, &__ctx);
    }
    
private:

    ::Ice::Int getUserProfile(const ::std::string&, const ::AliICEUDB::KVMap&, const ::Ice::Context*);
    
public:

    ::Ice::Int updateUserProfile(const ::std::string& lid, const ::AliICEUDB::KVMap& kvMapArgs)
    {
        return updateUserProfile(lid, kvMapArgs, 0);
    }
    ::Ice::Int updateUserProfile(const ::std::string& lid, const ::AliICEUDB::KVMap& kvMapArgs, const ::Ice::Context& __ctx)
    {
        return updateUserProfile(lid, kvMapArgs, &__ctx);
    }
    
private:

    ::Ice::Int updateUserProfile(const ::std::string&, const ::AliICEUDB::KVMap&, const ::Ice::Context*);
    
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

namespace AliICEUDB
{

class IUDBService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int validateUDBUser(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;
};

class IUDBInfo : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int addUserProfile(const ::std::string&, const ::AliICEUDB::KVMap&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserProfile(const ::std::string&, const ::AliICEUDB::KVMap&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int updateUserProfile(const ::std::string&, const ::AliICEUDB::KVMap&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace AliICEUDB
{

class IUDBService : virtual public ::IceDelegate::AliICEUDB::IUDBService,
                    virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int validateUDBUser(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
};

class IUDBInfo : virtual public ::IceDelegate::AliICEUDB::IUDBInfo,
                 virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int addUserProfile(const ::std::string&, const ::AliICEUDB::KVMap&, const ::Ice::Context*);

    virtual ::Ice::Int getUserProfile(const ::std::string&, const ::AliICEUDB::KVMap&, const ::Ice::Context*);

    virtual ::Ice::Int updateUserProfile(const ::std::string&, const ::AliICEUDB::KVMap&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace AliICEUDB
{

class IUDBService : virtual public ::IceDelegate::AliICEUDB::IUDBService,
                    virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int validateUDBUser(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
};

class IUDBInfo : virtual public ::IceDelegate::AliICEUDB::IUDBInfo,
                 virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int addUserProfile(const ::std::string&, const ::AliICEUDB::KVMap&, const ::Ice::Context*);

    virtual ::Ice::Int getUserProfile(const ::std::string&, const ::AliICEUDB::KVMap&, const ::Ice::Context*);

    virtual ::Ice::Int updateUserProfile(const ::std::string&, const ::AliICEUDB::KVMap&, const ::Ice::Context*);
};

}

}

namespace AliICEUDB
{

class IUDBService : virtual public ::Ice::Object
{
public:

    typedef IUDBServicePrx ProxyType;
    typedef IUDBServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int validateUDBUser(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___validateUDBUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__IUDBServicePtr(void*, ::Ice::ObjectPtr&);

class IUDBInfo : virtual public ::Ice::Object
{
public:

    typedef IUDBInfoPrx ProxyType;
    typedef IUDBInfoPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int addUserProfile(const ::std::string&, const ::AliICEUDB::KVMap&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___addUserProfile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUserProfile(const ::std::string&, const ::AliICEUDB::KVMap&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserProfile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int updateUserProfile(const ::std::string&, const ::AliICEUDB::KVMap&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___updateUserProfile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__IUDBInfoPtr(void*, ::Ice::ObjectPtr&);

}

#endif
