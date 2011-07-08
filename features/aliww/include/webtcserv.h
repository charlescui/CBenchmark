// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `webtcserv.ice'

#ifndef __webtcserv_h__
#define __webtcserv_h__

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

namespace WebTribeCacheService
{

class WebTCSrvMgr;
bool operator==(const WebTCSrvMgr&, const WebTCSrvMgr&);
bool operator!=(const WebTCSrvMgr&, const WebTCSrvMgr&);
bool operator<(const WebTCSrvMgr&, const WebTCSrvMgr&);
bool operator<=(const WebTCSrvMgr&, const WebTCSrvMgr&);
bool operator>(const WebTCSrvMgr&, const WebTCSrvMgr&);
bool operator>=(const WebTCSrvMgr&, const WebTCSrvMgr&);

}

}

namespace WebTribeCacheService
{

class WebTCSrvMgr;
bool operator==(const WebTCSrvMgr&, const WebTCSrvMgr&);
bool operator!=(const WebTCSrvMgr&, const WebTCSrvMgr&);
bool operator<(const WebTCSrvMgr&, const WebTCSrvMgr&);
bool operator<=(const WebTCSrvMgr&, const WebTCSrvMgr&);
bool operator>(const WebTCSrvMgr&, const WebTCSrvMgr&);
bool operator>=(const WebTCSrvMgr&, const WebTCSrvMgr&);

}

namespace IceInternal
{

void incRef(::WebTribeCacheService::WebTCSrvMgr*);
void decRef(::WebTribeCacheService::WebTCSrvMgr*);

void incRef(::IceProxy::WebTribeCacheService::WebTCSrvMgr*);
void decRef(::IceProxy::WebTribeCacheService::WebTCSrvMgr*);

}

namespace WebTribeCacheService
{

typedef ::IceInternal::Handle< ::WebTribeCacheService::WebTCSrvMgr> WebTCSrvMgrPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::WebTribeCacheService::WebTCSrvMgr> WebTCSrvMgrPrx;

void __write(::IceInternal::BasicStream*, const WebTCSrvMgrPrx&);
void __read(::IceInternal::BasicStream*, WebTCSrvMgrPrx&);
void __write(::IceInternal::BasicStream*, const WebTCSrvMgrPtr&);
void __patch__WebTCSrvMgrPtr(void*, ::Ice::ObjectPtr&);

void __addObject(const WebTCSrvMgrPtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const WebTCSrvMgrPtr&);
void __decRefUnsafe(const WebTCSrvMgrPtr&);
void __clearHandleUnsafe(WebTCSrvMgrPtr&);

}

namespace WebTribeCacheService
{

struct SWebTribeInfo
{
    ::Ice::Long tribeId;
    ::std::string name;
    ::Ice::Short tribeLevel;
    ::Ice::Short tribeStatus;
    ::std::string extSign;
    ::Ice::Int groupStamp;
    ::Ice::Short openTribe;
    ::Ice::Long groupId;

    bool operator==(const SWebTribeInfo&) const;
    bool operator!=(const SWebTribeInfo&) const;
    bool operator<(const SWebTribeInfo&) const;
    bool operator<=(const SWebTribeInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SWebTribeInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SWebTribeInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::WebTribeCacheService::SWebTribeInfo> SWebTribeInfoSeq;

class __U__SWebTribeInfoSeq { };
void __write(::IceInternal::BasicStream*, const ::WebTribeCacheService::SWebTribeInfo*, const ::WebTribeCacheService::SWebTribeInfo*, __U__SWebTribeInfoSeq);
void __read(::IceInternal::BasicStream*, SWebTribeInfoSeq&, __U__SWebTribeInfoSeq);

struct SWebTribeGroup
{
    ::Ice::Long groupId;
    ::std::string groupName;
    ::std::string serviceId;
    ::std::string siteId;
    ::std::string webId;

    bool operator==(const SWebTribeGroup&) const;
    bool operator!=(const SWebTribeGroup&) const;
    bool operator<(const SWebTribeGroup&) const;
    bool operator<=(const SWebTribeGroup& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SWebTribeGroup& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SWebTribeGroup& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::WebTribeCacheService::SWebTribeGroup> SWebTribeGroupSeq;

class __U__SWebTribeGroupSeq { };
void __write(::IceInternal::BasicStream*, const ::WebTribeCacheService::SWebTribeGroup*, const ::WebTribeCacheService::SWebTribeGroup*, __U__SWebTribeGroupSeq);
void __read(::IceInternal::BasicStream*, SWebTribeGroupSeq&, __U__SWebTribeGroupSeq);

}

namespace IceProxy
{

namespace WebTribeCacheService
{

class WebTCSrvMgr : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int GetUserTribe(const ::std::string& userId, ::WebTribeCacheService::SWebTribeInfoSeq& tribeList)
    {
        return GetUserTribe(userId, tribeList, 0);
    }
    ::Ice::Int GetUserTribe(const ::std::string& userId, ::WebTribeCacheService::SWebTribeInfoSeq& tribeList, const ::Ice::Context& __ctx)
    {
        return GetUserTribe(userId, tribeList, &__ctx);
    }
    
private:

    ::Ice::Int GetUserTribe(const ::std::string&, ::WebTribeCacheService::SWebTribeInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddUserTribes(const ::std::string& userId, const ::WebTribeCacheService::SWebTribeInfoSeq& tribeList)
    {
        return AddUserTribes(userId, tribeList, 0);
    }
    ::Ice::Int AddUserTribes(const ::std::string& userId, const ::WebTribeCacheService::SWebTribeInfoSeq& tribeList, const ::Ice::Context& __ctx)
    {
        return AddUserTribes(userId, tribeList, &__ctx);
    }
    
private:

    ::Ice::Int AddUserTribes(const ::std::string&, const ::WebTribeCacheService::SWebTribeInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddUserTribe(const ::std::string& userId, const ::WebTribeCacheService::SWebTribeInfo& tribeInfo)
    {
        return AddUserTribe(userId, tribeInfo, 0);
    }
    ::Ice::Int AddUserTribe(const ::std::string& userId, const ::WebTribeCacheService::SWebTribeInfo& tribeInfo, const ::Ice::Context& __ctx)
    {
        return AddUserTribe(userId, tribeInfo, &__ctx);
    }
    
private:

    ::Ice::Int AddUserTribe(const ::std::string&, const ::WebTribeCacheService::SWebTribeInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int DelUserTribe(const ::std::string& userId, ::Ice::Long tribeId)
    {
        return DelUserTribe(userId, tribeId, 0);
    }
    ::Ice::Int DelUserTribe(const ::std::string& userId, ::Ice::Long tribeId, const ::Ice::Context& __ctx)
    {
        return DelUserTribe(userId, tribeId, &__ctx);
    }
    
private:

    ::Ice::Int DelUserTribe(const ::std::string&, ::Ice::Long, const ::Ice::Context*);
    
public:

    ::Ice::Int ChgUserTribe(const ::std::string& userId, const ::WebTribeCacheService::SWebTribeInfo& tribeInfo)
    {
        return ChgUserTribe(userId, tribeInfo, 0);
    }
    ::Ice::Int ChgUserTribe(const ::std::string& userId, const ::WebTribeCacheService::SWebTribeInfo& tribeInfo, const ::Ice::Context& __ctx)
    {
        return ChgUserTribe(userId, tribeInfo, &__ctx);
    }
    
private:

    ::Ice::Int ChgUserTribe(const ::std::string&, const ::WebTribeCacheService::SWebTribeInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateTribe(const ::WebTribeCacheService::SWebTribeInfo& tribeInfo)
    {
        return UpdateTribe(tribeInfo, 0);
    }
    ::Ice::Int UpdateTribe(const ::WebTribeCacheService::SWebTribeInfo& tribeInfo, const ::Ice::Context& __ctx)
    {
        return UpdateTribe(tribeInfo, &__ctx);
    }
    
private:

    ::Ice::Int UpdateTribe(const ::WebTribeCacheService::SWebTribeInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int RemoveTribe(::Ice::Long tribeId)
    {
        return RemoveTribe(tribeId, 0);
    }
    ::Ice::Int RemoveTribe(::Ice::Long tribeId, const ::Ice::Context& __ctx)
    {
        return RemoveTribe(tribeId, &__ctx);
    }
    
private:

    ::Ice::Int RemoveTribe(::Ice::Long, const ::Ice::Context*);
    
public:

    ::Ice::Int AddWebTribeGroup(const ::WebTribeCacheService::SWebTribeGroup& webGroup)
    {
        return AddWebTribeGroup(webGroup, 0);
    }
    ::Ice::Int AddWebTribeGroup(const ::WebTribeCacheService::SWebTribeGroup& webGroup, const ::Ice::Context& __ctx)
    {
        return AddWebTribeGroup(webGroup, &__ctx);
    }
    
private:

    ::Ice::Int AddWebTribeGroup(const ::WebTribeCacheService::SWebTribeGroup&, const ::Ice::Context*);
    
public:

    ::Ice::Int ChgWebTribeGroupName(::Ice::Long groupId, const ::std::string& groupName)
    {
        return ChgWebTribeGroupName(groupId, groupName, 0);
    }
    ::Ice::Int ChgWebTribeGroupName(::Ice::Long groupId, const ::std::string& groupName, const ::Ice::Context& __ctx)
    {
        return ChgWebTribeGroupName(groupId, groupName, &__ctx);
    }
    
private:

    ::Ice::Int ChgWebTribeGroupName(::Ice::Long, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DelWebTribeGroup(::Ice::Long groupId)
    {
        return DelWebTribeGroup(groupId, 0);
    }
    ::Ice::Int DelWebTribeGroup(::Ice::Long groupId, const ::Ice::Context& __ctx)
    {
        return DelWebTribeGroup(groupId, &__ctx);
    }
    
private:

    ::Ice::Int DelWebTribeGroup(::Ice::Long, const ::Ice::Context*);
    
public:

    ::Ice::Int GetWebTribeGroup(::Ice::Long groupId, ::WebTribeCacheService::SWebTribeGroup& groupInfo)
    {
        return GetWebTribeGroup(groupId, groupInfo, 0);
    }
    ::Ice::Int GetWebTribeGroup(::Ice::Long groupId, ::WebTribeCacheService::SWebTribeGroup& groupInfo, const ::Ice::Context& __ctx)
    {
        return GetWebTribeGroup(groupId, groupInfo, &__ctx);
    }
    
private:

    ::Ice::Int GetWebTribeGroup(::Ice::Long, ::WebTribeCacheService::SWebTribeGroup&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetServiceWebGroup(const ::Ice::StringSeq& webServices, ::WebTribeCacheService::SWebTribeGroupSeq& groupList)
    {
        return GetServiceWebGroup(webServices, groupList, 0);
    }
    ::Ice::Int GetServiceWebGroup(const ::Ice::StringSeq& webServices, ::WebTribeCacheService::SWebTribeGroupSeq& groupList, const ::Ice::Context& __ctx)
    {
        return GetServiceWebGroup(webServices, groupList, &__ctx);
    }
    
private:

    ::Ice::Int GetServiceWebGroup(const ::Ice::StringSeq&, ::WebTribeCacheService::SWebTribeGroupSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUserWebGroup(const ::std::string& userId, ::WebTribeCacheService::SWebTribeGroupSeq& groupList)
    {
        return GetUserWebGroup(userId, groupList, 0);
    }
    ::Ice::Int GetUserWebGroup(const ::std::string& userId, ::WebTribeCacheService::SWebTribeGroupSeq& groupList, const ::Ice::Context& __ctx)
    {
        return GetUserWebGroup(userId, groupList, &__ctx);
    }
    
private:

    ::Ice::Int GetUserWebGroup(const ::std::string&, ::WebTribeCacheService::SWebTribeGroupSeq&, const ::Ice::Context*);
    
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

namespace WebTribeCacheService
{

class WebTCSrvMgr : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int GetUserTribe(const ::std::string&, ::WebTribeCacheService::SWebTribeInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddUserTribes(const ::std::string&, const ::WebTribeCacheService::SWebTribeInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddUserTribe(const ::std::string&, const ::WebTribeCacheService::SWebTribeInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DelUserTribe(const ::std::string&, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::Ice::Int ChgUserTribe(const ::std::string&, const ::WebTribeCacheService::SWebTribeInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateTribe(const ::WebTribeCacheService::SWebTribeInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int RemoveTribe(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddWebTribeGroup(const ::WebTribeCacheService::SWebTribeGroup&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int ChgWebTribeGroupName(::Ice::Long, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DelWebTribeGroup(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetWebTribeGroup(::Ice::Long, ::WebTribeCacheService::SWebTribeGroup&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetServiceWebGroup(const ::Ice::StringSeq&, ::WebTribeCacheService::SWebTribeGroupSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUserWebGroup(const ::std::string&, ::WebTribeCacheService::SWebTribeGroupSeq&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace WebTribeCacheService
{

class WebTCSrvMgr : virtual public ::IceDelegate::WebTribeCacheService::WebTCSrvMgr,
                    virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int GetUserTribe(const ::std::string&, ::WebTribeCacheService::SWebTribeInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int AddUserTribes(const ::std::string&, const ::WebTribeCacheService::SWebTribeInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int AddUserTribe(const ::std::string&, const ::WebTribeCacheService::SWebTribeInfo&, const ::Ice::Context*);

    virtual ::Ice::Int DelUserTribe(const ::std::string&, ::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Int ChgUserTribe(const ::std::string&, const ::WebTribeCacheService::SWebTribeInfo&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateTribe(const ::WebTribeCacheService::SWebTribeInfo&, const ::Ice::Context*);

    virtual ::Ice::Int RemoveTribe(::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Int AddWebTribeGroup(const ::WebTribeCacheService::SWebTribeGroup&, const ::Ice::Context*);

    virtual ::Ice::Int ChgWebTribeGroupName(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DelWebTribeGroup(::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Int GetWebTribeGroup(::Ice::Long, ::WebTribeCacheService::SWebTribeGroup&, const ::Ice::Context*);

    virtual ::Ice::Int GetServiceWebGroup(const ::Ice::StringSeq&, ::WebTribeCacheService::SWebTribeGroupSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserWebGroup(const ::std::string&, ::WebTribeCacheService::SWebTribeGroupSeq&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace WebTribeCacheService
{

class WebTCSrvMgr : virtual public ::IceDelegate::WebTribeCacheService::WebTCSrvMgr,
                    virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int GetUserTribe(const ::std::string&, ::WebTribeCacheService::SWebTribeInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int AddUserTribes(const ::std::string&, const ::WebTribeCacheService::SWebTribeInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int AddUserTribe(const ::std::string&, const ::WebTribeCacheService::SWebTribeInfo&, const ::Ice::Context*);

    virtual ::Ice::Int DelUserTribe(const ::std::string&, ::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Int ChgUserTribe(const ::std::string&, const ::WebTribeCacheService::SWebTribeInfo&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateTribe(const ::WebTribeCacheService::SWebTribeInfo&, const ::Ice::Context*);

    virtual ::Ice::Int RemoveTribe(::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Int AddWebTribeGroup(const ::WebTribeCacheService::SWebTribeGroup&, const ::Ice::Context*);

    virtual ::Ice::Int ChgWebTribeGroupName(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DelWebTribeGroup(::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Int GetWebTribeGroup(::Ice::Long, ::WebTribeCacheService::SWebTribeGroup&, const ::Ice::Context*);

    virtual ::Ice::Int GetServiceWebGroup(const ::Ice::StringSeq&, ::WebTribeCacheService::SWebTribeGroupSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserWebGroup(const ::std::string&, ::WebTribeCacheService::SWebTribeGroupSeq&, const ::Ice::Context*);
};

}

}

namespace WebTribeCacheService
{

class WebTCSrvMgr : virtual public ::Ice::Object
{
public:

    typedef WebTCSrvMgrPrx ProxyType;
    typedef WebTCSrvMgrPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int GetUserTribe(const ::std::string&, ::WebTribeCacheService::SWebTribeInfoSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserTribe(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int AddUserTribes(const ::std::string&, const ::WebTribeCacheService::SWebTribeInfoSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddUserTribes(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int AddUserTribe(const ::std::string&, const ::WebTribeCacheService::SWebTribeInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddUserTribe(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DelUserTribe(const ::std::string&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DelUserTribe(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int ChgUserTribe(const ::std::string&, const ::WebTribeCacheService::SWebTribeInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___ChgUserTribe(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int UpdateTribe(const ::WebTribeCacheService::SWebTribeInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateTribe(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int RemoveTribe(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___RemoveTribe(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int AddWebTribeGroup(const ::WebTribeCacheService::SWebTribeGroup&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddWebTribeGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int ChgWebTribeGroupName(::Ice::Long, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___ChgWebTribeGroupName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DelWebTribeGroup(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DelWebTribeGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetWebTribeGroup(::Ice::Long, ::WebTribeCacheService::SWebTribeGroup&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetWebTribeGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetServiceWebGroup(const ::Ice::StringSeq&, ::WebTribeCacheService::SWebTribeGroupSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetServiceWebGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetUserWebGroup(const ::std::string&, ::WebTribeCacheService::SWebTribeGroupSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserWebGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__WebTCSrvMgrPtr(void*, ::Ice::ObjectPtr&);

}

#endif
