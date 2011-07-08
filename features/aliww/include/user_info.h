// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `user_info.ice'

#ifndef __user_info_h__
#define __user_info_h__

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

namespace IMServerData
{

class UserInfoI;
bool operator==(const UserInfoI&, const UserInfoI&);
bool operator!=(const UserInfoI&, const UserInfoI&);
bool operator<(const UserInfoI&, const UserInfoI&);
bool operator<=(const UserInfoI&, const UserInfoI&);
bool operator>(const UserInfoI&, const UserInfoI&);
bool operator>=(const UserInfoI&, const UserInfoI&);

}

}

namespace IMServerData
{

class UserInfoI;
bool operator==(const UserInfoI&, const UserInfoI&);
bool operator!=(const UserInfoI&, const UserInfoI&);
bool operator<(const UserInfoI&, const UserInfoI&);
bool operator<=(const UserInfoI&, const UserInfoI&);
bool operator>(const UserInfoI&, const UserInfoI&);
bool operator>=(const UserInfoI&, const UserInfoI&);

}

namespace IceInternal
{

void incRef(::IMServerData::UserInfoI*);
void decRef(::IMServerData::UserInfoI*);

void incRef(::IceProxy::IMServerData::UserInfoI*);
void decRef(::IceProxy::IMServerData::UserInfoI*);

}

namespace IMServerData
{

typedef ::IceInternal::Handle< ::IMServerData::UserInfoI> UserInfoIPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::IMServerData::UserInfoI> UserInfoIPrx;

void __write(::IceInternal::BasicStream*, const UserInfoIPrx&);
void __read(::IceInternal::BasicStream*, UserInfoIPrx&);
void __write(::IceInternal::BasicStream*, const UserInfoIPtr&);
void __patch__UserInfoIPtr(void*, ::Ice::ObjectPtr&);

void __addObject(const UserInfoIPtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const UserInfoIPtr&);
void __decRefUnsafe(const UserInfoIPtr&);
void __clearHandleUnsafe(UserInfoIPtr&);

}

namespace IMServerData
{

struct SWebBind
{
    ::std::string serviceId;
    ::std::string siteId;
    ::std::string webId;
    ::std::string webUid;
    ::Ice::StringSeq webUrl;

    bool operator==(const SWebBind&) const;
    bool operator!=(const SWebBind&) const;
    bool operator<(const SWebBind&) const;
    bool operator<=(const SWebBind& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SWebBind& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SWebBind& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::IMServerData::SWebBind> SWebBindSeq;

class __U__SWebBindSeq { };
void __write(::IceInternal::BasicStream*, const ::IMServerData::SWebBind*, const ::IMServerData::SWebBind*, __U__SWebBindSeq);
void __read(::IceInternal::BasicStream*, SWebBindSeq&, __U__SWebBindSeq);

struct Statics
{
    ::std::string servicId;
    ::std::string webId;
    ::Ice::Long count;

    bool operator==(const Statics&) const;
    bool operator!=(const Statics&) const;
    bool operator<(const Statics&) const;
    bool operator<=(const Statics& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const Statics& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const Statics& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::IMServerData::Statics> StaticsSeq;

class __U__StaticsSeq { };
void __write(::IceInternal::BasicStream*, const ::IMServerData::Statics*, const ::IMServerData::Statics*, __U__StaticsSeq);
void __read(::IceInternal::BasicStream*, StaticsSeq&, __U__StaticsSeq);

}

namespace IceProxy
{

namespace IMServerData
{

class UserInfoI : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int query(const ::std::string& id, ::IMServerData::SWebBindSeq& binds)
    {
        return query(id, binds, 0);
    }
    ::Ice::Int query(const ::std::string& id, ::IMServerData::SWebBindSeq& binds, const ::Ice::Context& __ctx)
    {
        return query(id, binds, &__ctx);
    }
    
private:

    ::Ice::Int query(const ::std::string&, ::IMServerData::SWebBindSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int insert(const ::std::string& id, const ::IMServerData::SWebBindSeq& binds)
    {
        return insert(id, binds, 0);
    }
    ::Ice::Int insert(const ::std::string& id, const ::IMServerData::SWebBindSeq& binds, const ::Ice::Context& __ctx)
    {
        return insert(id, binds, &__ctx);
    }
    
private:

    ::Ice::Int insert(const ::std::string&, const ::IMServerData::SWebBindSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int remove(const ::std::string& id)
    {
        return remove(id, 0);
    }
    ::Ice::Int remove(const ::std::string& id, const ::Ice::Context& __ctx)
    {
        return remove(id, &__ctx);
    }
    
private:

    ::Ice::Int remove(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int loginNtfy(const ::std::string& id)
    {
        return loginNtfy(id, 0);
    }
    ::Ice::Int loginNtfy(const ::std::string& id, const ::Ice::Context& __ctx)
    {
        return loginNtfy(id, &__ctx);
    }
    
private:

    ::Ice::Int loginNtfy(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int gettLoginNumBySite(::IMServerData::StaticsSeq& lognum)
    {
        return gettLoginNumBySite(lognum, 0);
    }
    ::Ice::Int gettLoginNumBySite(::IMServerData::StaticsSeq& lognum, const ::Ice::Context& __ctx)
    {
        return gettLoginNumBySite(lognum, &__ctx);
    }
    
private:

    ::Ice::Int gettLoginNumBySite(::IMServerData::StaticsSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getSiteIds(const ::std::string& serviceid, const ::std::string& siteid, ::Ice::StringSeq& loginid)
    {
        return getSiteIds(serviceid, siteid, loginid, 0);
    }
    ::Ice::Int getSiteIds(const ::std::string& serviceid, const ::std::string& siteid, ::Ice::StringSeq& loginid, const ::Ice::Context& __ctx)
    {
        return getSiteIds(serviceid, siteid, loginid, &__ctx);
    }
    
private:

    ::Ice::Int getSiteIds(const ::std::string&, const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getOnlineCountBySite(::IMServerData::StaticsSeq& statics)
    {
        return getOnlineCountBySite(statics, 0);
    }
    ::Ice::Int getOnlineCountBySite(::IMServerData::StaticsSeq& statics, const ::Ice::Context& __ctx)
    {
        return getOnlineCountBySite(statics, &__ctx);
    }
    
private:

    ::Ice::Int getOnlineCountBySite(::IMServerData::StaticsSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getOneSiteOnlineStatus(const ::std::string& serviceId, const ::std::string& siteid, ::Ice::Long& count)
    {
        return getOneSiteOnlineStatus(serviceId, siteid, count, 0);
    }
    ::Ice::Int getOneSiteOnlineStatus(const ::std::string& serviceId, const ::std::string& siteid, ::Ice::Long& count, const ::Ice::Context& __ctx)
    {
        return getOneSiteOnlineStatus(serviceId, siteid, count, &__ctx);
    }
    
private:

    ::Ice::Int getOneSiteOnlineStatus(const ::std::string&, const ::std::string&, ::Ice::Long&, const ::Ice::Context*);
    
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

namespace IMServerData
{

class UserInfoI : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int query(const ::std::string&, ::IMServerData::SWebBindSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int insert(const ::std::string&, const ::IMServerData::SWebBindSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int remove(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int loginNtfy(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int gettLoginNumBySite(::IMServerData::StaticsSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getSiteIds(const ::std::string&, const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getOnlineCountBySite(::IMServerData::StaticsSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getOneSiteOnlineStatus(const ::std::string&, const ::std::string&, ::Ice::Long&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace IMServerData
{

class UserInfoI : virtual public ::IceDelegate::IMServerData::UserInfoI,
                  virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int query(const ::std::string&, ::IMServerData::SWebBindSeq&, const ::Ice::Context*);

    virtual ::Ice::Int insert(const ::std::string&, const ::IMServerData::SWebBindSeq&, const ::Ice::Context*);

    virtual ::Ice::Int remove(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int loginNtfy(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int gettLoginNumBySite(::IMServerData::StaticsSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getSiteIds(const ::std::string&, const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getOnlineCountBySite(::IMServerData::StaticsSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getOneSiteOnlineStatus(const ::std::string&, const ::std::string&, ::Ice::Long&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace IMServerData
{

class UserInfoI : virtual public ::IceDelegate::IMServerData::UserInfoI,
                  virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int query(const ::std::string&, ::IMServerData::SWebBindSeq&, const ::Ice::Context*);

    virtual ::Ice::Int insert(const ::std::string&, const ::IMServerData::SWebBindSeq&, const ::Ice::Context*);

    virtual ::Ice::Int remove(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int loginNtfy(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int gettLoginNumBySite(::IMServerData::StaticsSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getSiteIds(const ::std::string&, const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getOnlineCountBySite(::IMServerData::StaticsSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getOneSiteOnlineStatus(const ::std::string&, const ::std::string&, ::Ice::Long&, const ::Ice::Context*);
};

}

}

namespace IMServerData
{

class UserInfoI : virtual public ::Ice::Object
{
public:

    typedef UserInfoIPrx ProxyType;
    typedef UserInfoIPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int query(const ::std::string&, ::IMServerData::SWebBindSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___query(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int insert(const ::std::string&, const ::IMServerData::SWebBindSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___insert(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int remove(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___remove(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int loginNtfy(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___loginNtfy(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int gettLoginNumBySite(::IMServerData::StaticsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___gettLoginNumBySite(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getSiteIds(const ::std::string&, const ::std::string&, ::Ice::StringSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getSiteIds(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getOnlineCountBySite(::IMServerData::StaticsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getOnlineCountBySite(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getOneSiteOnlineStatus(const ::std::string&, const ::std::string&, ::Ice::Long&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getOneSiteOnlineStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__UserInfoIPtr(void*, ::Ice::ObjectPtr&);

}

#endif
