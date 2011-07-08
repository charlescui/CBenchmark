// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `tcservice.ice'

#ifndef __tcservice_h__
#define __tcservice_h__

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

namespace TribeCacheService
{

class TCSrvMgr;
bool operator==(const TCSrvMgr&, const TCSrvMgr&);
bool operator!=(const TCSrvMgr&, const TCSrvMgr&);
bool operator<(const TCSrvMgr&, const TCSrvMgr&);
bool operator<=(const TCSrvMgr&, const TCSrvMgr&);
bool operator>(const TCSrvMgr&, const TCSrvMgr&);
bool operator>=(const TCSrvMgr&, const TCSrvMgr&);

}

}

namespace TribeCacheService
{

class TCSrvMgr;
bool operator==(const TCSrvMgr&, const TCSrvMgr&);
bool operator!=(const TCSrvMgr&, const TCSrvMgr&);
bool operator<(const TCSrvMgr&, const TCSrvMgr&);
bool operator<=(const TCSrvMgr&, const TCSrvMgr&);
bool operator>(const TCSrvMgr&, const TCSrvMgr&);
bool operator>=(const TCSrvMgr&, const TCSrvMgr&);

}

namespace IceInternal
{

void incRef(::TribeCacheService::TCSrvMgr*);
void decRef(::TribeCacheService::TCSrvMgr*);

void incRef(::IceProxy::TribeCacheService::TCSrvMgr*);
void decRef(::IceProxy::TribeCacheService::TCSrvMgr*);

}

namespace TribeCacheService
{

typedef ::IceInternal::Handle< ::TribeCacheService::TCSrvMgr> TCSrvMgrPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::TribeCacheService::TCSrvMgr> TCSrvMgrPrx;

void __write(::IceInternal::BasicStream*, const TCSrvMgrPrx&);
void __read(::IceInternal::BasicStream*, TCSrvMgrPrx&);
void __write(::IceInternal::BasicStream*, const TCSrvMgrPtr&);
void __patch__TCSrvMgrPtr(void*, ::Ice::ObjectPtr&);

void __addObject(const TCSrvMgrPtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const TCSrvMgrPtr&);
void __decRefUnsafe(const TCSrvMgrPtr&);
void __clearHandleUnsafe(TCSrvMgrPtr&);

}

namespace TribeCacheService
{

struct STribeInfo
{
    ::Ice::Long tribeId;
    ::std::string name;
    ::Ice::Short tribeLevel;
    ::Ice::Short tribeStatus;
    ::std::string extSign;
    ::Ice::Int groupStamp;
    ::Ice::Short openTribe;

    bool operator==(const STribeInfo&) const;
    bool operator!=(const STribeInfo&) const;
    bool operator<(const STribeInfo&) const;
    bool operator<=(const STribeInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const STribeInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const STribeInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::TribeCacheService::STribeInfo> STribeInfoSeq;

class __U__STribeInfoSeq { };
void __write(::IceInternal::BasicStream*, const ::TribeCacheService::STribeInfo*, const ::TribeCacheService::STribeInfo*, __U__STribeInfoSeq);
void __read(::IceInternal::BasicStream*, STribeInfoSeq&, __U__STribeInfoSeq);

struct STribeInfo2
{
    ::Ice::Long tribeId;
    ::std::string name;
    ::Ice::Short tribeLevel;
    ::Ice::Short tribeStatus;
    ::std::string extSign;
    ::Ice::Int groupStamp;
    ::Ice::Short openTribe;
    ::Ice::Short popupFlag;

    bool operator==(const STribeInfo2&) const;
    bool operator!=(const STribeInfo2&) const;
    bool operator<(const STribeInfo2&) const;
    bool operator<=(const STribeInfo2& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const STribeInfo2& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const STribeInfo2& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::TribeCacheService::STribeInfo2> STribeInfoSeq2;

class __U__STribeInfoSeq2 { };
void __write(::IceInternal::BasicStream*, const ::TribeCacheService::STribeInfo2*, const ::TribeCacheService::STribeInfo2*, __U__STribeInfoSeq2);
void __read(::IceInternal::BasicStream*, STribeInfoSeq2&, __U__STribeInfoSeq2);

struct STribeOffMngMsg
{
    ::Ice::Long tribeId;
    ::std::string memberId;
    ::Ice::Short type;
    ::std::string message;
    ::Ice::Int sendTime;

    bool operator==(const STribeOffMngMsg&) const;
    bool operator!=(const STribeOffMngMsg&) const;
    bool operator<(const STribeOffMngMsg&) const;
    bool operator<=(const STribeOffMngMsg& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const STribeOffMngMsg& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const STribeOffMngMsg& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::TribeCacheService::STribeOffMngMsg> STribeOffMngMsgSeq;

class __U__STribeOffMngMsgSeq { };
void __write(::IceInternal::BasicStream*, const ::TribeCacheService::STribeOffMngMsg*, const ::TribeCacheService::STribeOffMngMsg*, __U__STribeOffMngMsgSeq);
void __read(::IceInternal::BasicStream*, STribeOffMngMsgSeq&, __U__STribeOffMngMsgSeq);

}

namespace IceProxy
{

namespace TribeCacheService
{

class TCSrvMgr : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int GetUserTribe(const ::std::string& userId, ::TribeCacheService::STribeInfoSeq& tribeList)
    {
        return GetUserTribe(userId, tribeList, 0);
    }
    ::Ice::Int GetUserTribe(const ::std::string& userId, ::TribeCacheService::STribeInfoSeq& tribeList, const ::Ice::Context& __ctx)
    {
        return GetUserTribe(userId, tribeList, &__ctx);
    }
    
private:

    ::Ice::Int GetUserTribe(const ::std::string&, ::TribeCacheService::STribeInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUserTribe2(const ::std::string& userId, ::TribeCacheService::STribeInfoSeq2& tribeList)
    {
        return GetUserTribe2(userId, tribeList, 0);
    }
    ::Ice::Int GetUserTribe2(const ::std::string& userId, ::TribeCacheService::STribeInfoSeq2& tribeList, const ::Ice::Context& __ctx)
    {
        return GetUserTribe2(userId, tribeList, &__ctx);
    }
    
private:

    ::Ice::Int GetUserTribe2(const ::std::string&, ::TribeCacheService::STribeInfoSeq2&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddUserTribes(const ::std::string& userId, const ::TribeCacheService::STribeInfoSeq& tribeList, const ::TribeCacheService::STribeOffMngMsgSeq& offMngMsg)
    {
        return AddUserTribes(userId, tribeList, offMngMsg, 0);
    }
    ::Ice::Int AddUserTribes(const ::std::string& userId, const ::TribeCacheService::STribeInfoSeq& tribeList, const ::TribeCacheService::STribeOffMngMsgSeq& offMngMsg, const ::Ice::Context& __ctx)
    {
        return AddUserTribes(userId, tribeList, offMngMsg, &__ctx);
    }
    
private:

    ::Ice::Int AddUserTribes(const ::std::string&, const ::TribeCacheService::STribeInfoSeq&, const ::TribeCacheService::STribeOffMngMsgSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddUserTribes2(const ::std::string& userId, const ::TribeCacheService::STribeInfoSeq2& tribeList, const ::TribeCacheService::STribeOffMngMsgSeq& offMngMsg)
    {
        return AddUserTribes2(userId, tribeList, offMngMsg, 0);
    }
    ::Ice::Int AddUserTribes2(const ::std::string& userId, const ::TribeCacheService::STribeInfoSeq2& tribeList, const ::TribeCacheService::STribeOffMngMsgSeq& offMngMsg, const ::Ice::Context& __ctx)
    {
        return AddUserTribes2(userId, tribeList, offMngMsg, &__ctx);
    }
    
private:

    ::Ice::Int AddUserTribes2(const ::std::string&, const ::TribeCacheService::STribeInfoSeq2&, const ::TribeCacheService::STribeOffMngMsgSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddUserTribe(const ::std::string& userId, const ::TribeCacheService::STribeInfo& tribeInfo)
    {
        return AddUserTribe(userId, tribeInfo, 0);
    }
    ::Ice::Int AddUserTribe(const ::std::string& userId, const ::TribeCacheService::STribeInfo& tribeInfo, const ::Ice::Context& __ctx)
    {
        return AddUserTribe(userId, tribeInfo, &__ctx);
    }
    
private:

    ::Ice::Int AddUserTribe(const ::std::string&, const ::TribeCacheService::STribeInfo&, const ::Ice::Context*);
    
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

    ::Ice::Int ChgUserTribe(const ::std::string& userId, const ::TribeCacheService::STribeInfo& tribeInfo)
    {
        return ChgUserTribe(userId, tribeInfo, 0);
    }
    ::Ice::Int ChgUserTribe(const ::std::string& userId, const ::TribeCacheService::STribeInfo& tribeInfo, const ::Ice::Context& __ctx)
    {
        return ChgUserTribe(userId, tribeInfo, &__ctx);
    }
    
private:

    ::Ice::Int ChgUserTribe(const ::std::string&, const ::TribeCacheService::STribeInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int ChgUserTribe2(const ::std::string& userId, const ::TribeCacheService::STribeInfo2& tribeInfo)
    {
        return ChgUserTribe2(userId, tribeInfo, 0);
    }
    ::Ice::Int ChgUserTribe2(const ::std::string& userId, const ::TribeCacheService::STribeInfo2& tribeInfo, const ::Ice::Context& __ctx)
    {
        return ChgUserTribe2(userId, tribeInfo, &__ctx);
    }
    
private:

    ::Ice::Int ChgUserTribe2(const ::std::string&, const ::TribeCacheService::STribeInfo2&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetOffMngMsg(const ::std::string& userId, ::Ice::Long tribeId, ::TribeCacheService::STribeOffMngMsgSeq& offMngMsgList)
    {
        return GetOffMngMsg(userId, tribeId, offMngMsgList, 0);
    }
    ::Ice::Int GetOffMngMsg(const ::std::string& userId, ::Ice::Long tribeId, ::TribeCacheService::STribeOffMngMsgSeq& offMngMsgList, const ::Ice::Context& __ctx)
    {
        return GetOffMngMsg(userId, tribeId, offMngMsgList, &__ctx);
    }
    
private:

    ::Ice::Int GetOffMngMsg(const ::std::string&, ::Ice::Long, ::TribeCacheService::STribeOffMngMsgSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddOffMngMsg(const ::std::string& userId, const ::TribeCacheService::STribeOffMngMsg& offMngMsg)
    {
        return AddOffMngMsg(userId, offMngMsg, 0);
    }
    ::Ice::Int AddOffMngMsg(const ::std::string& userId, const ::TribeCacheService::STribeOffMngMsg& offMngMsg, const ::Ice::Context& __ctx)
    {
        return AddOffMngMsg(userId, offMngMsg, &__ctx);
    }
    
private:

    ::Ice::Int AddOffMngMsg(const ::std::string&, const ::TribeCacheService::STribeOffMngMsg&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddMsgList(const ::std::string& userId, const ::TribeCacheService::STribeOffMngMsgSeq& msgList)
    {
        return AddMsgList(userId, msgList, 0);
    }
    ::Ice::Int AddMsgList(const ::std::string& userId, const ::TribeCacheService::STribeOffMngMsgSeq& msgList, const ::Ice::Context& __ctx)
    {
        return AddMsgList(userId, msgList, &__ctx);
    }
    
private:

    ::Ice::Int AddMsgList(const ::std::string&, const ::TribeCacheService::STribeOffMngMsgSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateTribe(const ::TribeCacheService::STribeInfo& tribeInfo)
    {
        return UpdateTribe(tribeInfo, 0);
    }
    ::Ice::Int UpdateTribe(const ::TribeCacheService::STribeInfo& tribeInfo, const ::Ice::Context& __ctx)
    {
        return UpdateTribe(tribeInfo, &__ctx);
    }
    
private:

    ::Ice::Int UpdateTribe(const ::TribeCacheService::STribeInfo&, const ::Ice::Context*);
    
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

    ::Ice::Int GetOfflineMsg(const ::std::string& userId, ::TribeCacheService::STribeOffMngMsgSeq& offMngMsgList)
    {
        return GetOfflineMsg(userId, offMngMsgList, 0);
    }
    ::Ice::Int GetOfflineMsg(const ::std::string& userId, ::TribeCacheService::STribeOffMngMsgSeq& offMngMsgList, const ::Ice::Context& __ctx)
    {
        return GetOfflineMsg(userId, offMngMsgList, &__ctx);
    }
    
private:

    ::Ice::Int GetOfflineMsg(const ::std::string&, ::TribeCacheService::STribeOffMngMsgSeq&, const ::Ice::Context*);
    
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

namespace TribeCacheService
{

class TCSrvMgr : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int GetUserTribe(const ::std::string&, ::TribeCacheService::STribeInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUserTribe2(const ::std::string&, ::TribeCacheService::STribeInfoSeq2&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddUserTribes(const ::std::string&, const ::TribeCacheService::STribeInfoSeq&, const ::TribeCacheService::STribeOffMngMsgSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddUserTribes2(const ::std::string&, const ::TribeCacheService::STribeInfoSeq2&, const ::TribeCacheService::STribeOffMngMsgSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddUserTribe(const ::std::string&, const ::TribeCacheService::STribeInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DelUserTribe(const ::std::string&, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::Ice::Int ChgUserTribe(const ::std::string&, const ::TribeCacheService::STribeInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int ChgUserTribe2(const ::std::string&, const ::TribeCacheService::STribeInfo2&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetOffMngMsg(const ::std::string&, ::Ice::Long, ::TribeCacheService::STribeOffMngMsgSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddOffMngMsg(const ::std::string&, const ::TribeCacheService::STribeOffMngMsg&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddMsgList(const ::std::string&, const ::TribeCacheService::STribeOffMngMsgSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateTribe(const ::TribeCacheService::STribeInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int RemoveTribe(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetOfflineMsg(const ::std::string&, ::TribeCacheService::STribeOffMngMsgSeq&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace TribeCacheService
{

class TCSrvMgr : virtual public ::IceDelegate::TribeCacheService::TCSrvMgr,
                 virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int GetUserTribe(const ::std::string&, ::TribeCacheService::STribeInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserTribe2(const ::std::string&, ::TribeCacheService::STribeInfoSeq2&, const ::Ice::Context*);

    virtual ::Ice::Int AddUserTribes(const ::std::string&, const ::TribeCacheService::STribeInfoSeq&, const ::TribeCacheService::STribeOffMngMsgSeq&, const ::Ice::Context*);

    virtual ::Ice::Int AddUserTribes2(const ::std::string&, const ::TribeCacheService::STribeInfoSeq2&, const ::TribeCacheService::STribeOffMngMsgSeq&, const ::Ice::Context*);

    virtual ::Ice::Int AddUserTribe(const ::std::string&, const ::TribeCacheService::STribeInfo&, const ::Ice::Context*);

    virtual ::Ice::Int DelUserTribe(const ::std::string&, ::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Int ChgUserTribe(const ::std::string&, const ::TribeCacheService::STribeInfo&, const ::Ice::Context*);

    virtual ::Ice::Int ChgUserTribe2(const ::std::string&, const ::TribeCacheService::STribeInfo2&, const ::Ice::Context*);

    virtual ::Ice::Int GetOffMngMsg(const ::std::string&, ::Ice::Long, ::TribeCacheService::STribeOffMngMsgSeq&, const ::Ice::Context*);

    virtual ::Ice::Int AddOffMngMsg(const ::std::string&, const ::TribeCacheService::STribeOffMngMsg&, const ::Ice::Context*);

    virtual ::Ice::Int AddMsgList(const ::std::string&, const ::TribeCacheService::STribeOffMngMsgSeq&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateTribe(const ::TribeCacheService::STribeInfo&, const ::Ice::Context*);

    virtual ::Ice::Int RemoveTribe(::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Int GetOfflineMsg(const ::std::string&, ::TribeCacheService::STribeOffMngMsgSeq&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace TribeCacheService
{

class TCSrvMgr : virtual public ::IceDelegate::TribeCacheService::TCSrvMgr,
                 virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int GetUserTribe(const ::std::string&, ::TribeCacheService::STribeInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserTribe2(const ::std::string&, ::TribeCacheService::STribeInfoSeq2&, const ::Ice::Context*);

    virtual ::Ice::Int AddUserTribes(const ::std::string&, const ::TribeCacheService::STribeInfoSeq&, const ::TribeCacheService::STribeOffMngMsgSeq&, const ::Ice::Context*);

    virtual ::Ice::Int AddUserTribes2(const ::std::string&, const ::TribeCacheService::STribeInfoSeq2&, const ::TribeCacheService::STribeOffMngMsgSeq&, const ::Ice::Context*);

    virtual ::Ice::Int AddUserTribe(const ::std::string&, const ::TribeCacheService::STribeInfo&, const ::Ice::Context*);

    virtual ::Ice::Int DelUserTribe(const ::std::string&, ::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Int ChgUserTribe(const ::std::string&, const ::TribeCacheService::STribeInfo&, const ::Ice::Context*);

    virtual ::Ice::Int ChgUserTribe2(const ::std::string&, const ::TribeCacheService::STribeInfo2&, const ::Ice::Context*);

    virtual ::Ice::Int GetOffMngMsg(const ::std::string&, ::Ice::Long, ::TribeCacheService::STribeOffMngMsgSeq&, const ::Ice::Context*);

    virtual ::Ice::Int AddOffMngMsg(const ::std::string&, const ::TribeCacheService::STribeOffMngMsg&, const ::Ice::Context*);

    virtual ::Ice::Int AddMsgList(const ::std::string&, const ::TribeCacheService::STribeOffMngMsgSeq&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateTribe(const ::TribeCacheService::STribeInfo&, const ::Ice::Context*);

    virtual ::Ice::Int RemoveTribe(::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Int GetOfflineMsg(const ::std::string&, ::TribeCacheService::STribeOffMngMsgSeq&, const ::Ice::Context*);
};

}

}

namespace TribeCacheService
{

class TCSrvMgr : virtual public ::Ice::Object
{
public:

    typedef TCSrvMgrPrx ProxyType;
    typedef TCSrvMgrPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int GetUserTribe(const ::std::string&, ::TribeCacheService::STribeInfoSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserTribe(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetUserTribe2(const ::std::string&, ::TribeCacheService::STribeInfoSeq2&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserTribe2(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int AddUserTribes(const ::std::string&, const ::TribeCacheService::STribeInfoSeq&, const ::TribeCacheService::STribeOffMngMsgSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddUserTribes(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int AddUserTribes2(const ::std::string&, const ::TribeCacheService::STribeInfoSeq2&, const ::TribeCacheService::STribeOffMngMsgSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddUserTribes2(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int AddUserTribe(const ::std::string&, const ::TribeCacheService::STribeInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddUserTribe(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DelUserTribe(const ::std::string&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DelUserTribe(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int ChgUserTribe(const ::std::string&, const ::TribeCacheService::STribeInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___ChgUserTribe(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int ChgUserTribe2(const ::std::string&, const ::TribeCacheService::STribeInfo2&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___ChgUserTribe2(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetOffMngMsg(const ::std::string&, ::Ice::Long, ::TribeCacheService::STribeOffMngMsgSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetOffMngMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int AddOffMngMsg(const ::std::string&, const ::TribeCacheService::STribeOffMngMsg&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddOffMngMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int AddMsgList(const ::std::string&, const ::TribeCacheService::STribeOffMngMsgSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddMsgList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int UpdateTribe(const ::TribeCacheService::STribeInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateTribe(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int RemoveTribe(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___RemoveTribe(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetOfflineMsg(const ::std::string&, ::TribeCacheService::STribeOffMngMsgSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetOfflineMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__TCSrvMgrPtr(void*, ::Ice::ObjectPtr&);

}

#endif
