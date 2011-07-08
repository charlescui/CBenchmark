// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `arcacheservice.ice'

#ifndef __arcacheservice_h__
#define __arcacheservice_h__

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

class IARCacheService;
bool operator==(const IARCacheService&, const IARCacheService&);
bool operator!=(const IARCacheService&, const IARCacheService&);
bool operator<(const IARCacheService&, const IARCacheService&);
bool operator<=(const IARCacheService&, const IARCacheService&);
bool operator>(const IARCacheService&, const IARCacheService&);
bool operator>=(const IARCacheService&, const IARCacheService&);

}

}

namespace AliIM
{

class IARCacheService;
bool operator==(const IARCacheService&, const IARCacheService&);
bool operator!=(const IARCacheService&, const IARCacheService&);
bool operator<(const IARCacheService&, const IARCacheService&);
bool operator<=(const IARCacheService&, const IARCacheService&);
bool operator>(const IARCacheService&, const IARCacheService&);
bool operator>=(const IARCacheService&, const IARCacheService&);

}

namespace IceInternal
{

void incRef(::AliIM::IARCacheService*);
void decRef(::AliIM::IARCacheService*);

void incRef(::IceProxy::AliIM::IARCacheService*);
void decRef(::IceProxy::AliIM::IARCacheService*);

}

namespace AliIM
{

typedef ::IceInternal::Handle< ::AliIM::IARCacheService> IARCacheServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::AliIM::IARCacheService> IARCacheServicePrx;

void __write(::IceInternal::BasicStream*, const IARCacheServicePrx&);
void __read(::IceInternal::BasicStream*, IARCacheServicePrx&);
void __write(::IceInternal::BasicStream*, const IARCacheServicePtr&);
void __patch__IARCacheServicePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const IARCacheServicePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const IARCacheServicePtr&);
void __decRefUnsafe(const IARCacheServicePtr&);
void __clearHandleUnsafe(IARCacheServicePtr&);

}

namespace AliIM
{

struct ARUSERINFO
{
    ::Ice::Int strangerMsgCount;
    ::Ice::Int addContactCount;
    ::Ice::Int reqContactCount;
    ::Ice::Int addTribeCount;
    ::Ice::Int lastLogonTime;
    ::Ice::Int sysMsgId;
    ::Ice::Int onlineTime;
    ::std::string loginIp;

    bool operator==(const ARUSERINFO&) const;
    bool operator!=(const ARUSERINFO&) const;
    bool operator<(const ARUSERINFO&) const;
    bool operator<=(const ARUSERINFO& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const ARUSERINFO& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const ARUSERINFO& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct ARUSERCONTROLINFO
{
    ::Ice::Int strangerMsgCount;
    ::Ice::Int addContactCount;
    ::Ice::Int reqContactCount;
    ::Ice::Int addTribeCount;

    bool operator==(const ARUSERCONTROLINFO&) const;
    bool operator!=(const ARUSERCONTROLINFO&) const;
    bool operator<(const ARUSERCONTROLINFO&) const;
    bool operator<=(const ARUSERCONTROLINFO& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const ARUSERCONTROLINFO& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const ARUSERCONTROLINFO& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::map< ::Ice::Int, ::Ice::Int> RIGHTTABLE;

class __U__RIGHTTABLE { };
void __write(::IceInternal::BasicStream*, const RIGHTTABLE&, __U__RIGHTTABLE);
void __read(::IceInternal::BasicStream*, RIGHTTABLE&, __U__RIGHTTABLE);

struct ARUSERINFO2
{
    ::AliIM::RIGHTTABLE rightMap;
    ::Ice::Int lastLogonTime;
    ::Ice::Int sysMsgId;
    ::Ice::Int onlineTime;
    ::std::string loginIp;

    bool operator==(const ARUSERINFO2&) const;
    bool operator!=(const ARUSERINFO2&) const;
    bool operator<(const ARUSERINFO2&) const;
    bool operator<=(const ARUSERINFO2& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const ARUSERINFO2& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const ARUSERINFO2& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct ARUSERCONTROLINFO2
{
    ::AliIM::RIGHTTABLE rightMap;

    bool operator==(const ARUSERCONTROLINFO2&) const;
    bool operator!=(const ARUSERCONTROLINFO2&) const;
    bool operator<(const ARUSERCONTROLINFO2&) const;
    bool operator<=(const ARUSERCONTROLINFO2& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const ARUSERCONTROLINFO2& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const ARUSERCONTROLINFO2& __rhs) const
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

class IARCacheService : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int getUserInfo(const ::std::string& uid, ::AliIM::ARUSERINFO& userInfo)
    {
        return getUserInfo(uid, userInfo, 0);
    }
    ::Ice::Int getUserInfo(const ::std::string& uid, ::AliIM::ARUSERINFO& userInfo, const ::Ice::Context& __ctx)
    {
        return getUserInfo(uid, userInfo, &__ctx);
    }
    
private:

    ::Ice::Int getUserInfo(const ::std::string&, ::AliIM::ARUSERINFO&, const ::Ice::Context*);
    
public:

    ::Ice::Int updateUserLoginEx(const ::std::string& uid, ::Ice::Int sysMsgId, const ::std::string& loginIp)
    {
        return updateUserLoginEx(uid, sysMsgId, loginIp, 0);
    }
    ::Ice::Int updateUserLoginEx(const ::std::string& uid, ::Ice::Int sysMsgId, const ::std::string& loginIp, const ::Ice::Context& __ctx)
    {
        return updateUserLoginEx(uid, sysMsgId, loginIp, &__ctx);
    }
    
private:

    ::Ice::Int updateUserLoginEx(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int updateUserLoginEx2(const ::std::string& uid, ::Ice::Int sysMsgId, const ::std::string& loginIp)
    {
        return updateUserLoginEx2(uid, sysMsgId, loginIp, 0);
    }
    ::Ice::Int updateUserLoginEx2(const ::std::string& uid, ::Ice::Int sysMsgId, const ::std::string& loginIp, const ::Ice::Context& __ctx)
    {
        return updateUserLoginEx2(uid, sysMsgId, loginIp, &__ctx);
    }
    
private:

    ::Ice::Int updateUserLoginEx2(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int updateUserLastLoginTime(const ::std::string& uid, ::Ice::Int lastLoginTime)
    {
        return updateUserLastLoginTime(uid, lastLoginTime, 0);
    }
    ::Ice::Int updateUserLastLoginTime(const ::std::string& uid, ::Ice::Int lastLoginTime, const ::Ice::Context& __ctx)
    {
        return updateUserLastLoginTime(uid, lastLoginTime, &__ctx);
    }
    
private:

    ::Ice::Int updateUserLastLoginTime(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int updateSysMsgId(const ::std::string& uid, ::Ice::Int sysMsgId)
    {
        return updateSysMsgId(uid, sysMsgId, 0);
    }
    ::Ice::Int updateSysMsgId(const ::std::string& uid, ::Ice::Int sysMsgId, const ::Ice::Context& __ctx)
    {
        return updateSysMsgId(uid, sysMsgId, &__ctx);
    }
    
private:

    ::Ice::Int updateSysMsgId(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int updateUserDataInfo(const ::std::string& uid, const ::AliIM::ARUSERCONTROLINFO& controlInfo, ::Ice::Int onlineTime)
    {
        return updateUserDataInfo(uid, controlInfo, onlineTime, 0);
    }
    ::Ice::Int updateUserDataInfo(const ::std::string& uid, const ::AliIM::ARUSERCONTROLINFO& controlInfo, ::Ice::Int onlineTime, const ::Ice::Context& __ctx)
    {
        return updateUserDataInfo(uid, controlInfo, onlineTime, &__ctx);
    }
    
private:

    ::Ice::Int updateUserDataInfo(const ::std::string&, const ::AliIM::ARUSERCONTROLINFO&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserInfo2(const ::std::string& uid, ::AliIM::ARUSERINFO2& userInfo)
    {
        return getUserInfo2(uid, userInfo, 0);
    }
    ::Ice::Int getUserInfo2(const ::std::string& uid, ::AliIM::ARUSERINFO2& userInfo, const ::Ice::Context& __ctx)
    {
        return getUserInfo2(uid, userInfo, &__ctx);
    }
    
private:

    ::Ice::Int getUserInfo2(const ::std::string&, ::AliIM::ARUSERINFO2&, const ::Ice::Context*);
    
public:

    ::Ice::Int updateUserDataInfo2(const ::std::string& uid, const ::AliIM::ARUSERCONTROLINFO2& controlInfo, ::Ice::Int onlineTime)
    {
        return updateUserDataInfo2(uid, controlInfo, onlineTime, 0);
    }
    ::Ice::Int updateUserDataInfo2(const ::std::string& uid, const ::AliIM::ARUSERCONTROLINFO2& controlInfo, ::Ice::Int onlineTime, const ::Ice::Context& __ctx)
    {
        return updateUserDataInfo2(uid, controlInfo, onlineTime, &__ctx);
    }
    
private:

    ::Ice::Int updateUserDataInfo2(const ::std::string&, const ::AliIM::ARUSERCONTROLINFO2&, ::Ice::Int, const ::Ice::Context*);
    
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

class IARCacheService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int getUserInfo(const ::std::string&, ::AliIM::ARUSERINFO&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int updateUserLoginEx(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int updateUserLoginEx2(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int updateUserLastLoginTime(const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int updateSysMsgId(const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int updateUserDataInfo(const ::std::string&, const ::AliIM::ARUSERCONTROLINFO&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserInfo2(const ::std::string&, ::AliIM::ARUSERINFO2&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int updateUserDataInfo2(const ::std::string&, const ::AliIM::ARUSERCONTROLINFO2&, ::Ice::Int, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace AliIM
{

class IARCacheService : virtual public ::IceDelegate::AliIM::IARCacheService,
                        virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int getUserInfo(const ::std::string&, ::AliIM::ARUSERINFO&, const ::Ice::Context*);

    virtual ::Ice::Int updateUserLoginEx(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int updateUserLoginEx2(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int updateUserLastLoginTime(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int updateSysMsgId(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int updateUserDataInfo(const ::std::string&, const ::AliIM::ARUSERCONTROLINFO&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int getUserInfo2(const ::std::string&, ::AliIM::ARUSERINFO2&, const ::Ice::Context*);

    virtual ::Ice::Int updateUserDataInfo2(const ::std::string&, const ::AliIM::ARUSERCONTROLINFO2&, ::Ice::Int, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace AliIM
{

class IARCacheService : virtual public ::IceDelegate::AliIM::IARCacheService,
                        virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int getUserInfo(const ::std::string&, ::AliIM::ARUSERINFO&, const ::Ice::Context*);

    virtual ::Ice::Int updateUserLoginEx(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int updateUserLoginEx2(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int updateUserLastLoginTime(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int updateSysMsgId(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int updateUserDataInfo(const ::std::string&, const ::AliIM::ARUSERCONTROLINFO&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int getUserInfo2(const ::std::string&, ::AliIM::ARUSERINFO2&, const ::Ice::Context*);

    virtual ::Ice::Int updateUserDataInfo2(const ::std::string&, const ::AliIM::ARUSERCONTROLINFO2&, ::Ice::Int, const ::Ice::Context*);
};

}

}

namespace AliIM
{

class IARCacheService : virtual public ::Ice::Object
{
public:

    typedef IARCacheServicePrx ProxyType;
    typedef IARCacheServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int getUserInfo(const ::std::string&, ::AliIM::ARUSERINFO&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int updateUserLoginEx(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___updateUserLoginEx(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int updateUserLoginEx2(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___updateUserLoginEx2(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int updateUserLastLoginTime(const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___updateUserLastLoginTime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int updateSysMsgId(const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___updateSysMsgId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int updateUserDataInfo(const ::std::string&, const ::AliIM::ARUSERCONTROLINFO&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___updateUserDataInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUserInfo2(const ::std::string&, ::AliIM::ARUSERINFO2&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserInfo2(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int updateUserDataInfo2(const ::std::string&, const ::AliIM::ARUSERCONTROLINFO2&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___updateUserDataInfo2(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__IARCacheServicePtr(void*, ::Ice::ObjectPtr&);

}

#endif
