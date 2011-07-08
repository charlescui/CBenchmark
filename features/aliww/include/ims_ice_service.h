// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `ims_ice_service.ice'

#ifndef __ims_ice_service_h__
#define __ims_ice_service_h__

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

namespace IMSINNER
{

class IMSICEService;
bool operator==(const IMSICEService&, const IMSICEService&);
bool operator!=(const IMSICEService&, const IMSICEService&);
bool operator<(const IMSICEService&, const IMSICEService&);
bool operator<=(const IMSICEService&, const IMSICEService&);
bool operator>(const IMSICEService&, const IMSICEService&);
bool operator>=(const IMSICEService&, const IMSICEService&);

}

}

namespace IMSINNER
{

class IMSICEService;
bool operator==(const IMSICEService&, const IMSICEService&);
bool operator!=(const IMSICEService&, const IMSICEService&);
bool operator<(const IMSICEService&, const IMSICEService&);
bool operator<=(const IMSICEService&, const IMSICEService&);
bool operator>(const IMSICEService&, const IMSICEService&);
bool operator>=(const IMSICEService&, const IMSICEService&);

}

namespace IceInternal
{

void incRef(::IMSINNER::IMSICEService*);
void decRef(::IMSINNER::IMSICEService*);

void incRef(::IceProxy::IMSINNER::IMSICEService*);
void decRef(::IceProxy::IMSINNER::IMSICEService*);

}

namespace IMSINNER
{

typedef ::IceInternal::Handle< ::IMSINNER::IMSICEService> IMSICEServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::IMSINNER::IMSICEService> IMSICEServicePrx;

void __write(::IceInternal::BasicStream*, const IMSICEServicePrx&);
void __read(::IceInternal::BasicStream*, IMSICEServicePrx&);
void __write(::IceInternal::BasicStream*, const IMSICEServicePtr&);
void __patch__IMSICEServicePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const IMSICEServicePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const IMSICEServicePtr&);
void __decRefUnsafe(const IMSICEServicePtr&);
void __clearHandleUnsafe(IMSICEServicePtr&);

}

namespace IMSINNER
{

struct SHMSBuddyStatus
{
    ::std::string uid;
    ::Ice::Short onlinestatus;
    ::Ice::Short servicestatus;
    ::Ice::Int status;
    ::Ice::Int totalnum;
    ::Ice::Int daynum;

    bool operator==(const SHMSBuddyStatus&) const;
    bool operator!=(const SHMSBuddyStatus&) const;
    bool operator<(const SHMSBuddyStatus&) const;
    bool operator<=(const SHMSBuddyStatus& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SHMSBuddyStatus& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SHMSBuddyStatus& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SHMSBuddyStatus6
{
    ::std::string childid;
    ::std::string childnick;
    ::Ice::Short basicstatus;
    ::Ice::Short predefstatus;
    ::Ice::Short servicestatus;
    ::Ice::Int maxservice;
    ::Ice::Int curservice;
    ::Ice::Int version;

    bool operator==(const SHMSBuddyStatus6&) const;
    bool operator!=(const SHMSBuddyStatus6&) const;
    bool operator<(const SHMSBuddyStatus6&) const;
    bool operator<=(const SHMSBuddyStatus6& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SHMSBuddyStatus6& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SHMSBuddyStatus6& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SICEReceptNum
{
    ::std::string eserviceid;
    ::Ice::Int receptnum;

    bool operator==(const SICEReceptNum&) const;
    bool operator!=(const SICEReceptNum&) const;
    bool operator<(const SICEReceptNum&) const;
    bool operator<=(const SICEReceptNum& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEReceptNum& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEReceptNum& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::IMSINNER::SICEReceptNum> SICEReceptNumSeq;

class __U__SICEReceptNumSeq { };
void __write(::IceInternal::BasicStream*, const ::IMSINNER::SICEReceptNum*, const ::IMSINNER::SICEReceptNum*, __U__SICEReceptNumSeq);
void __read(::IceInternal::BasicStream*, SICEReceptNumSeq&, __U__SICEReceptNumSeq);

struct SICEReceptStatus
{
    ::std::string eserviceid;
    ::Ice::Int receptnumNow;
    ::Ice::Int receptnumMax;
    ::Ice::Int receptnumDaily;

    bool operator==(const SICEReceptStatus&) const;
    bool operator!=(const SICEReceptStatus&) const;
    bool operator<(const SICEReceptStatus&) const;
    bool operator<=(const SICEReceptStatus& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEReceptStatus& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEReceptStatus& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::IMSINNER::SICEReceptStatus> SICEReceptStatusSeq;

class __U__SICEReceptStatusSeq { };
void __write(::IceInternal::BasicStream*, const ::IMSINNER::SICEReceptStatus*, const ::IMSINNER::SICEReceptStatus*, __U__SICEReceptStatusSeq);
void __read(::IceInternal::BasicStream*, SICEReceptStatusSeq&, __U__SICEReceptStatusSeq);

struct SICEReceptPriority
{
    ::std::string eserviceid;
    ::Ice::Int receptpriority;

    bool operator==(const SICEReceptPriority&) const;
    bool operator!=(const SICEReceptPriority&) const;
    bool operator<(const SICEReceptPriority&) const;
    bool operator<=(const SICEReceptPriority& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEReceptPriority& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEReceptPriority& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::IMSINNER::SICEReceptPriority> SICEReceptPrioritySeq;

class __U__SICEReceptPrioritySeq { };
void __write(::IceInternal::BasicStream*, const ::IMSINNER::SICEReceptPriority*, const ::IMSINNER::SICEReceptPriority*, __U__SICEReceptPrioritySeq);
void __read(::IceInternal::BasicStream*, SICEReceptPrioritySeq&, __U__SICEReceptPrioritySeq);

struct SICERecvOffMsg
{
    ::std::string eserviceid;
    ::Ice::Int recvoffmsg;

    bool operator==(const SICERecvOffMsg&) const;
    bool operator!=(const SICERecvOffMsg&) const;
    bool operator<(const SICERecvOffMsg&) const;
    bool operator<=(const SICERecvOffMsg& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICERecvOffMsg& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICERecvOffMsg& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::IMSINNER::SICERecvOffMsg> SICERecvOffMsgSeq;

class __U__SICERecvOffMsgSeq { };
void __write(::IceInternal::BasicStream*, const ::IMSINNER::SICERecvOffMsg*, const ::IMSINNER::SICERecvOffMsg*, __U__SICERecvOffMsgSeq);
void __read(::IceInternal::BasicStream*, SICERecvOffMsgSeq&, __U__SICERecvOffMsgSeq);

struct SICEESGroupInfo
{
    ::std::string groupName;
    ::Ice::Int groupId;
    ::std::string adminId;
    ::Ice::StringSeq eservicelist;

    bool operator==(const SICEESGroupInfo&) const;
    bool operator!=(const SICEESGroupInfo&) const;
    bool operator<(const SICEESGroupInfo&) const;
    bool operator<=(const SICEESGroupInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEESGroupInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEESGroupInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::IMSINNER::SICEESGroupInfo> SICEESGroupInfoSeq;

class __U__SICEESGroupInfoSeq { };
void __write(::IceInternal::BasicStream*, const ::IMSINNER::SICEESGroupInfo*, const ::IMSINNER::SICEESGroupInfo*, __U__SICEESGroupInfoSeq);
void __read(::IceInternal::BasicStream*, SICEESGroupInfoSeq&, __U__SICEESGroupInfoSeq);

struct SICEBaseGroupInfo
{
    ::std::string groupName;
    ::Ice::Int groupId;
    ::std::string adminId;

    bool operator==(const SICEBaseGroupInfo&) const;
    bool operator!=(const SICEBaseGroupInfo&) const;
    bool operator<(const SICEBaseGroupInfo&) const;
    bool operator<=(const SICEBaseGroupInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEBaseGroupInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEBaseGroupInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::IMSINNER::SHMSBuddyStatus> SHMSBuddyStatusSeq;

class __U__SHMSBuddyStatusSeq { };
void __write(::IceInternal::BasicStream*, const ::IMSINNER::SHMSBuddyStatus*, const ::IMSINNER::SHMSBuddyStatus*, __U__SHMSBuddyStatusSeq);
void __read(::IceInternal::BasicStream*, SHMSBuddyStatusSeq&, __U__SHMSBuddyStatusSeq);

struct SICEChildShuntInfo
{
    ::std::string childId;
    ::std::string groupName;
    ::Ice::Int groupId;
    ::std::string needUseOnline;
    ::std::string shuntInfo;

    bool operator==(const SICEChildShuntInfo&) const;
    bool operator!=(const SICEChildShuntInfo&) const;
    bool operator<(const SICEChildShuntInfo&) const;
    bool operator<=(const SICEChildShuntInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEChildShuntInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEChildShuntInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::IMSINNER::SICEChildShuntInfo> SICEChildShuntInfoSeq;

class __U__SICEChildShuntInfoSeq { };
void __write(::IceInternal::BasicStream*, const ::IMSINNER::SICEChildShuntInfo*, const ::IMSINNER::SICEChildShuntInfo*, __U__SICEChildShuntInfoSeq);
void __read(::IceInternal::BasicStream*, SICEChildShuntInfoSeq&, __U__SICEChildShuntInfoSeq);

typedef ::std::vector< ::IMSINNER::SHMSBuddyStatus6> SHMSBuddyStatusSeq6;

class __U__SHMSBuddyStatusSeq6 { };
void __write(::IceInternal::BasicStream*, const ::IMSINNER::SHMSBuddyStatus6*, const ::IMSINNER::SHMSBuddyStatus6*, __U__SHMSBuddyStatusSeq6);
void __read(::IceInternal::BasicStream*, SHMSBuddyStatusSeq6&, __U__SHMSBuddyStatusSeq6);

}

namespace IceProxy
{

namespace IMSINNER
{

class IMSICEService : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int getLastVisit(const ::std::string& host, const ::std::string& visitor, ::std::string& hostess)
    {
        return getLastVisit(host, visitor, hostess, 0);
    }
    ::Ice::Int getLastVisit(const ::std::string& host, const ::std::string& visitor, ::std::string& hostess, const ::Ice::Context& __ctx)
    {
        return getLastVisit(host, visitor, hostess, &__ctx);
    }
    
private:

    ::Ice::Int getLastVisit(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int setShareContact(const ::std::string& uid, const ::Ice::StringSeq& cids, ::Ice::Int value)
    {
        return setShareContact(uid, cids, value, 0);
    }
    ::Ice::Int setShareContact(const ::std::string& uid, const ::Ice::StringSeq& cids, ::Ice::Int value, const ::Ice::Context& __ctx)
    {
        return setShareContact(uid, cids, value, &__ctx);
    }
    
private:

    ::Ice::Int setShareContact(const ::std::string&, const ::Ice::StringSeq&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int clearLastVisit(const ::std::string& host, const ::std::string& visitor)
    {
        return clearLastVisit(host, visitor, 0);
    }
    ::Ice::Int clearLastVisit(const ::std::string& host, const ::std::string& visitor, const ::Ice::Context& __ctx)
    {
        return clearLastVisit(host, visitor, &__ctx);
    }
    
private:

    ::Ice::Int clearLastVisit(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int getLastVisitEx(const ::std::string& host, const ::std::string& visitor, ::Ice::Int groupId, ::Ice::Int addServiceNum, ::IMSINNER::SHMSBuddyStatus6& hostess)
    {
        return getLastVisitEx(host, visitor, groupId, addServiceNum, hostess, 0);
    }
    ::Ice::Int getLastVisitEx(const ::std::string& host, const ::std::string& visitor, ::Ice::Int groupId, ::Ice::Int addServiceNum, ::IMSINNER::SHMSBuddyStatus6& hostess, const ::Ice::Context& __ctx)
    {
        return getLastVisitEx(host, visitor, groupId, addServiceNum, hostess, &__ctx);
    }
    
private:

    ::Ice::Int getLastVisitEx(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::IMSINNER::SHMSBuddyStatus6&, const ::Ice::Context*);
    
public:

    ::Ice::Int HmsLogin(const ::std::string& uid, ::Ice::StringSeq& cids)
    {
        return HmsLogin(uid, cids, 0);
    }
    ::Ice::Int HmsLogin(const ::std::string& uid, ::Ice::StringSeq& cids, const ::Ice::Context& __ctx)
    {
        return HmsLogin(uid, cids, &__ctx);
    }
    
private:

    ::Ice::Int HmsLogin(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getWorkingBuddy(const ::std::string& uid, ::Ice::StringSeq& cids)
    {
        return getWorkingBuddy(uid, cids, 0);
    }
    ::Ice::Int getWorkingBuddy(const ::std::string& uid, ::Ice::StringSeq& cids, const ::Ice::Context& __ctx)
    {
        return getWorkingBuddy(uid, cids, &__ctx);
    }
    
private:

    ::Ice::Int getWorkingBuddy(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int setWaiterDenyService(const ::std::string& uid, ::Ice::Int status)
    {
        return setWaiterDenyService(uid, status, 0);
    }
    ::Ice::Int setWaiterDenyService(const ::std::string& uid, ::Ice::Int status, const ::Ice::Context& __ctx)
    {
        return setWaiterDenyService(uid, status, &__ctx);
    }
    
private:

    ::Ice::Int setWaiterDenyService(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int setLastVisit(const ::std::string& host, const ::std::string& visitor)
    {
        return setLastVisit(host, visitor, 0);
    }
    ::Ice::Int setLastVisit(const ::std::string& host, const ::std::string& visitor, const ::Ice::Context& __ctx)
    {
        return setLastVisit(host, visitor, &__ctx);
    }
    
private:

    ::Ice::Int setLastVisit(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int setLastVisitandSrvnum(const ::std::string& host, const ::std::string& visitor, ::Ice::Int srvnum)
    {
        return setLastVisitandSrvnum(host, visitor, srvnum, 0);
    }
    ::Ice::Int setLastVisitandSrvnum(const ::std::string& host, const ::std::string& visitor, ::Ice::Int srvnum, const ::Ice::Context& __ctx)
    {
        return setLastVisitandSrvnum(host, visitor, srvnum, &__ctx);
    }
    
private:

    ::Ice::Int setLastVisitandSrvnum(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int HmsLogin6(const ::std::string& uid, ::Ice::Int imsid, ::Ice::StringSeq& cids)
    {
        return HmsLogin6(uid, imsid, cids, 0);
    }
    ::Ice::Int HmsLogin6(const ::std::string& uid, ::Ice::Int imsid, ::Ice::StringSeq& cids, const ::Ice::Context& __ctx)
    {
        return HmsLogin6(uid, imsid, cids, &__ctx);
    }
    
private:

    ::Ice::Int HmsLogin6(const ::std::string&, ::Ice::Int, ::Ice::StringSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int setWaiterServerID(const ::std::string& uid, ::Ice::Int status)
    {
        return setWaiterServerID(uid, status, 0);
    }
    ::Ice::Int setWaiterServerID(const ::std::string& uid, ::Ice::Int status, const ::Ice::Context& __ctx)
    {
        return setWaiterServerID(uid, status, &__ctx);
    }
    
private:

    ::Ice::Int setWaiterServerID(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int isFakeOnline(const ::std::string& uid, bool& status)
    {
        return isFakeOnline(uid, status, 0);
    }
    ::Ice::Int isFakeOnline(const ::std::string& uid, bool& status, const ::Ice::Context& __ctx)
    {
        return isFakeOnline(uid, status, &__ctx);
    }
    
private:

    ::Ice::Int isFakeOnline(const ::std::string&, bool&, const ::Ice::Context*);
    
public:

    ::Ice::Int setWaiterStatus(const ::std::string& uid, ::Ice::Int status, ::Ice::Int imsid, bool& bneedsendfakestatus, ::Ice::Int& before, ::Ice::Int& afteronlinestatus)
    {
        return setWaiterStatus(uid, status, imsid, bneedsendfakestatus, before, afteronlinestatus, 0);
    }
    ::Ice::Int setWaiterStatus(const ::std::string& uid, ::Ice::Int status, ::Ice::Int imsid, bool& bneedsendfakestatus, ::Ice::Int& before, ::Ice::Int& afteronlinestatus, const ::Ice::Context& __ctx)
    {
        return setWaiterStatus(uid, status, imsid, bneedsendfakestatus, before, afteronlinestatus, &__ctx);
    }
    
private:

    ::Ice::Int setWaiterStatus(const ::std::string&, ::Ice::Int, ::Ice::Int, bool&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int getHelperstatus(const ::std::string& uid)
    {
        return getHelperstatus(uid, 0);
    }
    ::Ice::Int getHelperstatus(const ::std::string& uid, const ::Ice::Context& __ctx)
    {
        return getHelperstatus(uid, &__ctx);
    }
    
private:

    ::Ice::Int getHelperstatus(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int getOfflineHelpers(const ::std::string& uid, ::Ice::StringSeq& childs, ::Ice::IntSeq& childsimsids)
    {
        return getOfflineHelpers(uid, childs, childsimsids, 0);
    }
    ::Ice::Int getOfflineHelpers(const ::std::string& uid, ::Ice::StringSeq& childs, ::Ice::IntSeq& childsimsids, const ::Ice::Context& __ctx)
    {
        return getOfflineHelpers(uid, childs, childsimsids, &__ctx);
    }
    
private:

    ::Ice::Int getOfflineHelpers(const ::std::string&, ::Ice::StringSeq&, ::Ice::IntSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getAllOtherHelpers(const ::std::string& uid, ::Ice::StringSeq& childs, ::Ice::IntSeq& childsimsids)
    {
        return getAllOtherHelpers(uid, childs, childsimsids, 0);
    }
    ::Ice::Int getAllOtherHelpers(const ::std::string& uid, ::Ice::StringSeq& childs, ::Ice::IntSeq& childsimsids, const ::Ice::Context& __ctx)
    {
        return getAllOtherHelpers(uid, childs, childsimsids, &__ctx);
    }
    
private:

    ::Ice::Int getAllOtherHelpers(const ::std::string&, ::Ice::StringSeq&, ::Ice::IntSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int setMaxServiceNum(const ::std::string& uid, const ::std::string& childid, ::Ice::Int num)
    {
        return setMaxServiceNum(uid, childid, num, 0);
    }
    ::Ice::Int setMaxServiceNum(const ::std::string& uid, const ::std::string& childid, ::Ice::Int num, const ::Ice::Context& __ctx)
    {
        return setMaxServiceNum(uid, childid, num, &__ctx);
    }
    
private:

    ::Ice::Int setMaxServiceNum(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int chgATMHelpersServiceNum(const ::std::string& uid, const ::std::string& childid, const ::std::string& contactid, ::Ice::Int type)
    {
        return chgATMHelpersServiceNum(uid, childid, contactid, type, 0);
    }
    ::Ice::Int chgATMHelpersServiceNum(const ::std::string& uid, const ::std::string& childid, const ::std::string& contactid, ::Ice::Int type, const ::Ice::Context& __ctx)
    {
        return chgATMHelpersServiceNum(uid, childid, contactid, type, &__ctx);
    }
    
private:

    ::Ice::Int chgATMHelpersServiceNum(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int HmsLoginOff(const ::std::string& uid, const ::std::string& childid)
    {
        return HmsLoginOff(uid, childid, 0);
    }
    ::Ice::Int HmsLoginOff(const ::std::string& uid, const ::std::string& childid, const ::Ice::Context& __ctx)
    {
        return HmsLoginOff(uid, childid, &__ctx);
    }
    
private:

    ::Ice::Int HmsLoginOff(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int HmsLoginOff6(const ::std::string& uid, const ::std::string& childid, ::Ice::Int imsid)
    {
        return HmsLoginOff6(uid, childid, imsid, 0);
    }
    ::Ice::Int HmsLoginOff6(const ::std::string& uid, const ::std::string& childid, ::Ice::Int imsid, const ::Ice::Context& __ctx)
    {
        return HmsLoginOff6(uid, childid, imsid, &__ctx);
    }
    
private:

    ::Ice::Int HmsLoginOff6(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int getBuddyStatus(const ::std::string& uid, ::IMSINNER::SHMSBuddyStatusSeq& buddystatus)
    {
        return getBuddyStatus(uid, buddystatus, 0);
    }
    ::Ice::Int getBuddyStatus(const ::std::string& uid, ::IMSINNER::SHMSBuddyStatusSeq& buddystatus, const ::Ice::Context& __ctx)
    {
        return getBuddyStatus(uid, buddystatus, &__ctx);
    }
    
private:

    ::Ice::Int getBuddyStatus(const ::std::string&, ::IMSINNER::SHMSBuddyStatusSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int EHmsLogin6(const ::std::string& uid, const ::std::string& fid, ::Ice::Int imsid, ::Ice::Int logintype)
    {
        return EHmsLogin6(uid, fid, imsid, logintype, 0);
    }
    ::Ice::Int EHmsLogin6(const ::std::string& uid, const ::std::string& fid, ::Ice::Int imsid, ::Ice::Int logintype, const ::Ice::Context& __ctx)
    {
        return EHmsLogin6(uid, fid, imsid, logintype, &__ctx);
    }
    
private:

    ::Ice::Int EHmsLogin6(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int getBuddyStatus6(const ::std::string& uid, const ::std::string& fid, ::IMSINNER::SHMSBuddyStatusSeq6& buddystatus)
    {
        return getBuddyStatus6(uid, fid, buddystatus, 0);
    }
    ::Ice::Int getBuddyStatus6(const ::std::string& uid, const ::std::string& fid, ::IMSINNER::SHMSBuddyStatusSeq6& buddystatus, const ::Ice::Context& __ctx)
    {
        return getBuddyStatus6(uid, fid, buddystatus, &__ctx);
    }
    
private:

    ::Ice::Int getBuddyStatus6(const ::std::string&, const ::std::string&, ::IMSINNER::SHMSBuddyStatusSeq6&, const ::Ice::Context*);
    
public:

    ::Ice::Int getForWardList(const ::std::string& uid, const ::std::string& fid, ::IMSINNER::SHMSBuddyStatusSeq6& buddystatus)
    {
        return getForWardList(uid, fid, buddystatus, 0);
    }
    ::Ice::Int getForWardList(const ::std::string& uid, const ::std::string& fid, ::IMSINNER::SHMSBuddyStatusSeq6& buddystatus, const ::Ice::Context& __ctx)
    {
        return getForWardList(uid, fid, buddystatus, &__ctx);
    }
    
private:

    ::Ice::Int getForWardList(const ::std::string&, const ::std::string&, ::IMSINNER::SHMSBuddyStatusSeq6&, const ::Ice::Context*);
    
public:

    ::Ice::Int forWardServiceUser(const ::std::string& uid, const ::std::string& fid, const ::std::string& conatctid, const ::std::string& tochildid)
    {
        return forWardServiceUser(uid, fid, conatctid, tochildid, 0);
    }
    ::Ice::Int forWardServiceUser(const ::std::string& uid, const ::std::string& fid, const ::std::string& conatctid, const ::std::string& tochildid, const ::Ice::Context& __ctx)
    {
        return forWardServiceUser(uid, fid, conatctid, tochildid, &__ctx);
    }
    
private:

    ::Ice::Int forWardServiceUser(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int closeHMSSession(const ::std::string& uid, const ::std::string& fid, const ::std::string& conatctid, ::Ice::Int type)
    {
        return closeHMSSession(uid, fid, conatctid, type, 0);
    }
    ::Ice::Int closeHMSSession(const ::std::string& uid, const ::std::string& fid, const ::std::string& conatctid, ::Ice::Int type, const ::Ice::Context& __ctx)
    {
        return closeHMSSession(uid, fid, conatctid, type, &__ctx);
    }
    
private:

    ::Ice::Int closeHMSSession(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int NotifyHMSMsg(const ::std::string& fromid, const ::std::string& uid, ::Ice::Int srvid, ::Ice::Int type, const ::std::string& msg)
    {
        return NotifyHMSMsg(fromid, uid, srvid, type, msg, 0);
    }
    ::Ice::Int NotifyHMSMsg(const ::std::string& fromid, const ::std::string& uid, ::Ice::Int srvid, ::Ice::Int type, const ::std::string& msg, const ::Ice::Context& __ctx)
    {
        return NotifyHMSMsg(fromid, uid, srvid, type, msg, &__ctx);
    }
    
private:

    ::Ice::Int NotifyHMSMsg(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int SendHMSMsg(const ::std::string& fid, const ::std::string& uid, const ::std::string& conatctid, ::Ice::Int srvid, ::Ice::Int type, const ::std::string& msg)
    {
        return SendHMSMsg(fid, uid, conatctid, srvid, type, msg, 0);
    }
    ::Ice::Int SendHMSMsg(const ::std::string& fid, const ::std::string& uid, const ::std::string& conatctid, ::Ice::Int srvid, ::Ice::Int type, const ::std::string& msg, const ::Ice::Context& __ctx)
    {
        return SendHMSMsg(fid, uid, conatctid, srvid, type, msg, &__ctx);
    }
    
private:

    ::Ice::Int SendHMSMsg(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int changeUserStatus(const ::std::string& uid, ::Ice::Int Stauts)
    {
        return changeUserStatus(uid, Stauts, 0);
    }
    ::Ice::Int changeUserStatus(const ::std::string& uid, ::Ice::Int Stauts, const ::Ice::Context& __ctx)
    {
        return changeUserStatus(uid, Stauts, &__ctx);
    }
    
private:

    ::Ice::Int changeUserStatus(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int getESShuntStatus(const ::std::string& uid, ::std::string& shunt)
    {
        return getESShuntStatus(uid, shunt, 0);
    }
    ::Ice::Int getESShuntStatus(const ::std::string& uid, ::std::string& shunt, const ::Ice::Context& __ctx)
    {
        return getESShuntStatus(uid, shunt, &__ctx);
    }
    
private:

    ::Ice::Int getESShuntStatus(const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int setESShuntStatus(const ::std::string& uid, const ::std::string& shunt)
    {
        return setESShuntStatus(uid, shunt, 0);
    }
    ::Ice::Int setESShuntStatus(const ::std::string& uid, const ::std::string& shunt, const ::Ice::Context& __ctx)
    {
        return setESShuntStatus(uid, shunt, &__ctx);
    }
    
private:

    ::Ice::Int setESShuntStatus(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int getMaxESReceptNum(const ::std::string& uid, ::Ice::Int groupId, ::IMSINNER::SICEReceptNumSeq& eserviceList)
    {
        return getMaxESReceptNum(uid, groupId, eserviceList, 0);
    }
    ::Ice::Int getMaxESReceptNum(const ::std::string& uid, ::Ice::Int groupId, ::IMSINNER::SICEReceptNumSeq& eserviceList, const ::Ice::Context& __ctx)
    {
        return getMaxESReceptNum(uid, groupId, eserviceList, &__ctx);
    }
    
private:

    ::Ice::Int getMaxESReceptNum(const ::std::string&, ::Ice::Int, ::IMSINNER::SICEReceptNumSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int setMaxESReceptNum(const ::std::string& uid, ::Ice::Int groupId, const ::IMSINNER::SICEReceptNumSeq& eserviceList)
    {
        return setMaxESReceptNum(uid, groupId, eserviceList, 0);
    }
    ::Ice::Int setMaxESReceptNum(const ::std::string& uid, ::Ice::Int groupId, const ::IMSINNER::SICEReceptNumSeq& eserviceList, const ::Ice::Context& __ctx)
    {
        return setMaxESReceptNum(uid, groupId, eserviceList, &__ctx);
    }
    
private:

    ::Ice::Int setMaxESReceptNum(const ::std::string&, ::Ice::Int, const ::IMSINNER::SICEReceptNumSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getESPriority(const ::std::string& uid, ::Ice::Int groupId, ::IMSINNER::SICEReceptPrioritySeq& eserviceList)
    {
        return getESPriority(uid, groupId, eserviceList, 0);
    }
    ::Ice::Int getESPriority(const ::std::string& uid, ::Ice::Int groupId, ::IMSINNER::SICEReceptPrioritySeq& eserviceList, const ::Ice::Context& __ctx)
    {
        return getESPriority(uid, groupId, eserviceList, &__ctx);
    }
    
private:

    ::Ice::Int getESPriority(const ::std::string&, ::Ice::Int, ::IMSINNER::SICEReceptPrioritySeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int setESPriority(const ::std::string& uid, ::Ice::Int groupId, const ::IMSINNER::SICEReceptPrioritySeq& eserviceList)
    {
        return setESPriority(uid, groupId, eserviceList, 0);
    }
    ::Ice::Int setESPriority(const ::std::string& uid, ::Ice::Int groupId, const ::IMSINNER::SICEReceptPrioritySeq& eserviceList, const ::Ice::Context& __ctx)
    {
        return setESPriority(uid, groupId, eserviceList, &__ctx);
    }
    
private:

    ::Ice::Int setESPriority(const ::std::string&, ::Ice::Int, const ::IMSINNER::SICEReceptPrioritySeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getESRecvOffMsg(const ::std::string& uid, ::Ice::Int groupId, ::IMSINNER::SICERecvOffMsgSeq& eserviceList)
    {
        return getESRecvOffMsg(uid, groupId, eserviceList, 0);
    }
    ::Ice::Int getESRecvOffMsg(const ::std::string& uid, ::Ice::Int groupId, ::IMSINNER::SICERecvOffMsgSeq& eserviceList, const ::Ice::Context& __ctx)
    {
        return getESRecvOffMsg(uid, groupId, eserviceList, &__ctx);
    }
    
private:

    ::Ice::Int getESRecvOffMsg(const ::std::string&, ::Ice::Int, ::IMSINNER::SICERecvOffMsgSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int setESRecvOffMsg(const ::std::string& uid, ::Ice::Int groupId, const ::IMSINNER::SICERecvOffMsgSeq& eserviceList)
    {
        return setESRecvOffMsg(uid, groupId, eserviceList, 0);
    }
    ::Ice::Int setESRecvOffMsg(const ::std::string& uid, ::Ice::Int groupId, const ::IMSINNER::SICERecvOffMsgSeq& eserviceList, const ::Ice::Context& __ctx)
    {
        return setESRecvOffMsg(uid, groupId, eserviceList, &__ctx);
    }
    
private:

    ::Ice::Int setESRecvOffMsg(const ::std::string&, ::Ice::Int, const ::IMSINNER::SICERecvOffMsgSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getESGroupList(const ::std::string& uid, ::Ice::IntSeq& groupList)
    {
        return getESGroupList(uid, groupList, 0);
    }
    ::Ice::Int getESGroupList(const ::std::string& uid, ::Ice::IntSeq& groupList, const ::Ice::Context& __ctx)
    {
        return getESGroupList(uid, groupList, &__ctx);
    }
    
private:

    ::Ice::Int getESGroupList(const ::std::string&, ::Ice::IntSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int insertESGroupInfo(const ::std::string& uid, const ::IMSINNER::SICEESGroupInfo& groupInfo)
    {
        return insertESGroupInfo(uid, groupInfo, 0);
    }
    ::Ice::Int insertESGroupInfo(const ::std::string& uid, const ::IMSINNER::SICEESGroupInfo& groupInfo, const ::Ice::Context& __ctx)
    {
        return insertESGroupInfo(uid, groupInfo, &__ctx);
    }
    
private:

    ::Ice::Int insertESGroupInfo(const ::std::string&, const ::IMSINNER::SICEESGroupInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int updateESGroupInfo(const ::std::string& uid, const ::IMSINNER::SICEESGroupInfo& group)
    {
        return updateESGroupInfo(uid, group, 0);
    }
    ::Ice::Int updateESGroupInfo(const ::std::string& uid, const ::IMSINNER::SICEESGroupInfo& group, const ::Ice::Context& __ctx)
    {
        return updateESGroupInfo(uid, group, &__ctx);
    }
    
private:

    ::Ice::Int updateESGroupInfo(const ::std::string&, const ::IMSINNER::SICEESGroupInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int delESGroup(const ::std::string& uid, ::Ice::Int groupid)
    {
        return delESGroup(uid, groupid, 0);
    }
    ::Ice::Int delESGroup(const ::std::string& uid, ::Ice::Int groupid, const ::Ice::Context& __ctx)
    {
        return delESGroup(uid, groupid, &__ctx);
    }
    
private:

    ::Ice::Int delESGroup(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int getESGroupInfo(const ::std::string& uid, ::IMSINNER::SICEESGroupInfoSeq& groupList)
    {
        return getESGroupInfo(uid, groupList, 0);
    }
    ::Ice::Int getESGroupInfo(const ::std::string& uid, ::IMSINNER::SICEESGroupInfoSeq& groupList, const ::Ice::Context& __ctx)
    {
        return getESGroupInfo(uid, groupList, &__ctx);
    }
    
private:

    ::Ice::Int getESGroupInfo(const ::std::string&, ::IMSINNER::SICEESGroupInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getESGroupInfoByID(const ::std::string& uid, ::Ice::Int groupId, ::IMSINNER::SICEESGroupInfo& groupInfo)
    {
        return getESGroupInfoByID(uid, groupId, groupInfo, 0);
    }
    ::Ice::Int getESGroupInfoByID(const ::std::string& uid, ::Ice::Int groupId, ::IMSINNER::SICEESGroupInfo& groupInfo, const ::Ice::Context& __ctx)
    {
        return getESGroupInfoByID(uid, groupId, groupInfo, &__ctx);
    }
    
private:

    ::Ice::Int getESGroupInfoByID(const ::std::string&, ::Ice::Int, ::IMSINNER::SICEESGroupInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int getESUnJoinGroup(const ::std::string& uid, ::Ice::StringSeq& eserviceList)
    {
        return getESUnJoinGroup(uid, eserviceList, 0);
    }
    ::Ice::Int getESUnJoinGroup(const ::std::string& uid, ::Ice::StringSeq& eserviceList, const ::Ice::Context& __ctx)
    {
        return getESUnJoinGroup(uid, eserviceList, &__ctx);
    }
    
private:

    ::Ice::Int getESUnJoinGroup(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getESReceptList(const ::std::string& uid, ::Ice::Int groupId, ::IMSINNER::SICEReceptStatusSeq& eserviceList)
    {
        return getESReceptList(uid, groupId, eserviceList, 0);
    }
    ::Ice::Int getESReceptList(const ::std::string& uid, ::Ice::Int groupId, ::IMSINNER::SICEReceptStatusSeq& eserviceList, const ::Ice::Context& __ctx)
    {
        return getESReceptList(uid, groupId, eserviceList, &__ctx);
    }
    
private:

    ::Ice::Int getESReceptList(const ::std::string&, ::Ice::Int, ::IMSINNER::SICEReceptStatusSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int checkESRole(const ::std::string& uid, ::Ice::Int& groupId)
    {
        return checkESRole(uid, groupId, 0);
    }
    ::Ice::Int checkESRole(const ::std::string& uid, ::Ice::Int& groupId, const ::Ice::Context& __ctx)
    {
        return checkESRole(uid, groupId, &__ctx);
    }
    
private:

    ::Ice::Int checkESRole(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int getChildShuntInfos(const ::std::string& uid, ::IMSINNER::SICEChildShuntInfoSeq& childInfos)
    {
        return getChildShuntInfos(uid, childInfos, 0);
    }
    ::Ice::Int getChildShuntInfos(const ::std::string& uid, ::IMSINNER::SICEChildShuntInfoSeq& childInfos, const ::Ice::Context& __ctx)
    {
        return getChildShuntInfos(uid, childInfos, &__ctx);
    }
    
private:

    ::Ice::Int getChildShuntInfos(const ::std::string&, ::IMSINNER::SICEChildShuntInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int setChildShuntInfos(const ::std::string& uid, const ::IMSINNER::SICEChildShuntInfoSeq& childInfos)
    {
        return setChildShuntInfos(uid, childInfos, 0);
    }
    ::Ice::Int setChildShuntInfos(const ::std::string& uid, const ::IMSINNER::SICEChildShuntInfoSeq& childInfos, const ::Ice::Context& __ctx)
    {
        return setChildShuntInfos(uid, childInfos, &__ctx);
    }
    
private:

    ::Ice::Int setChildShuntInfos(const ::std::string&, const ::IMSINNER::SICEChildShuntInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getAgentChild(const ::std::string& uid, ::std::string& agentId)
    {
        return getAgentChild(uid, agentId, 0);
    }
    ::Ice::Int getAgentChild(const ::std::string& uid, ::std::string& agentId, const ::Ice::Context& __ctx)
    {
        return getAgentChild(uid, agentId, &__ctx);
    }
    
private:

    ::Ice::Int getAgentChild(const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int setAgentChild(const ::std::string& uid, const ::std::string& agentId)
    {
        return setAgentChild(uid, agentId, 0);
    }
    ::Ice::Int setAgentChild(const ::std::string& uid, const ::std::string& agentId, const ::Ice::Context& __ctx)
    {
        return setAgentChild(uid, agentId, &__ctx);
    }
    
private:

    ::Ice::Int setAgentChild(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int getAgentList(const ::std::string& uid, ::Ice::StringSeq& agentIds)
    {
        return getAgentList(uid, agentIds, 0);
    }
    ::Ice::Int getAgentList(const ::std::string& uid, ::Ice::StringSeq& agentIds, const ::Ice::Context& __ctx)
    {
        return getAgentList(uid, agentIds, &__ctx);
    }
    
private:

    ::Ice::Int getAgentList(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int helperMsg(const ::std::string& uid, const ::std::string& targetUid, const ::std::string& message, ::Ice::Int originalSid)
    {
        return helperMsg(uid, targetUid, message, originalSid, 0);
    }
    ::Ice::Int helperMsg(const ::std::string& uid, const ::std::string& targetUid, const ::std::string& message, ::Ice::Int originalSid, const ::Ice::Context& __ctx)
    {
        return helperMsg(uid, targetUid, message, originalSid, &__ctx);
    }
    
private:

    ::Ice::Int helperMsg(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
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

namespace IMSINNER
{

class IMSICEService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int getLastVisit(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int setShareContact(const ::std::string&, const ::Ice::StringSeq&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int clearLastVisit(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getLastVisitEx(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::IMSINNER::SHMSBuddyStatus6&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int HmsLogin(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getWorkingBuddy(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int setWaiterDenyService(const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int setLastVisit(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int setLastVisitandSrvnum(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int HmsLogin6(const ::std::string&, ::Ice::Int, ::Ice::StringSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int setWaiterServerID(const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int isFakeOnline(const ::std::string&, bool&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int setWaiterStatus(const ::std::string&, ::Ice::Int, ::Ice::Int, bool&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getHelperstatus(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getOfflineHelpers(const ::std::string&, ::Ice::StringSeq&, ::Ice::IntSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getAllOtherHelpers(const ::std::string&, ::Ice::StringSeq&, ::Ice::IntSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int setMaxServiceNum(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int chgATMHelpersServiceNum(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int HmsLoginOff(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int HmsLoginOff6(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getBuddyStatus(const ::std::string&, ::IMSINNER::SHMSBuddyStatusSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int EHmsLogin6(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getBuddyStatus6(const ::std::string&, const ::std::string&, ::IMSINNER::SHMSBuddyStatusSeq6&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getForWardList(const ::std::string&, const ::std::string&, ::IMSINNER::SHMSBuddyStatusSeq6&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int forWardServiceUser(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int closeHMSSession(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int NotifyHMSMsg(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int SendHMSMsg(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int changeUserStatus(const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESShuntStatus(const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int setESShuntStatus(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getMaxESReceptNum(const ::std::string&, ::Ice::Int, ::IMSINNER::SICEReceptNumSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int setMaxESReceptNum(const ::std::string&, ::Ice::Int, const ::IMSINNER::SICEReceptNumSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESPriority(const ::std::string&, ::Ice::Int, ::IMSINNER::SICEReceptPrioritySeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int setESPriority(const ::std::string&, ::Ice::Int, const ::IMSINNER::SICEReceptPrioritySeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESRecvOffMsg(const ::std::string&, ::Ice::Int, ::IMSINNER::SICERecvOffMsgSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int setESRecvOffMsg(const ::std::string&, ::Ice::Int, const ::IMSINNER::SICERecvOffMsgSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESGroupList(const ::std::string&, ::Ice::IntSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int insertESGroupInfo(const ::std::string&, const ::IMSINNER::SICEESGroupInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int updateESGroupInfo(const ::std::string&, const ::IMSINNER::SICEESGroupInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int delESGroup(const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESGroupInfo(const ::std::string&, ::IMSINNER::SICEESGroupInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESGroupInfoByID(const ::std::string&, ::Ice::Int, ::IMSINNER::SICEESGroupInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESUnJoinGroup(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESReceptList(const ::std::string&, ::Ice::Int, ::IMSINNER::SICEReceptStatusSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int checkESRole(const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getChildShuntInfos(const ::std::string&, ::IMSINNER::SICEChildShuntInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int setChildShuntInfos(const ::std::string&, const ::IMSINNER::SICEChildShuntInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getAgentChild(const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int setAgentChild(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getAgentList(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int helperMsg(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace IMSINNER
{

class IMSICEService : virtual public ::IceDelegate::IMSINNER::IMSICEService,
                      virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int getLastVisit(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int setShareContact(const ::std::string&, const ::Ice::StringSeq&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int clearLastVisit(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getLastVisitEx(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::IMSINNER::SHMSBuddyStatus6&, const ::Ice::Context*);

    virtual ::Ice::Int HmsLogin(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getWorkingBuddy(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int setWaiterDenyService(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int setLastVisit(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int setLastVisitandSrvnum(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int HmsLogin6(const ::std::string&, ::Ice::Int, ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int setWaiterServerID(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int isFakeOnline(const ::std::string&, bool&, const ::Ice::Context*);

    virtual ::Ice::Int setWaiterStatus(const ::std::string&, ::Ice::Int, ::Ice::Int, bool&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int getHelperstatus(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getOfflineHelpers(const ::std::string&, ::Ice::StringSeq&, ::Ice::IntSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getAllOtherHelpers(const ::std::string&, ::Ice::StringSeq&, ::Ice::IntSeq&, const ::Ice::Context*);

    virtual ::Ice::Int setMaxServiceNum(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int chgATMHelpersServiceNum(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int HmsLoginOff(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int HmsLoginOff6(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int getBuddyStatus(const ::std::string&, ::IMSINNER::SHMSBuddyStatusSeq&, const ::Ice::Context*);

    virtual ::Ice::Int EHmsLogin6(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int getBuddyStatus6(const ::std::string&, const ::std::string&, ::IMSINNER::SHMSBuddyStatusSeq6&, const ::Ice::Context*);

    virtual ::Ice::Int getForWardList(const ::std::string&, const ::std::string&, ::IMSINNER::SHMSBuddyStatusSeq6&, const ::Ice::Context*);

    virtual ::Ice::Int forWardServiceUser(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int closeHMSSession(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int NotifyHMSMsg(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int SendHMSMsg(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int changeUserStatus(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int getESShuntStatus(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int setESShuntStatus(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getMaxESReceptNum(const ::std::string&, ::Ice::Int, ::IMSINNER::SICEReceptNumSeq&, const ::Ice::Context*);

    virtual ::Ice::Int setMaxESReceptNum(const ::std::string&, ::Ice::Int, const ::IMSINNER::SICEReceptNumSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESPriority(const ::std::string&, ::Ice::Int, ::IMSINNER::SICEReceptPrioritySeq&, const ::Ice::Context*);

    virtual ::Ice::Int setESPriority(const ::std::string&, ::Ice::Int, const ::IMSINNER::SICEReceptPrioritySeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESRecvOffMsg(const ::std::string&, ::Ice::Int, ::IMSINNER::SICERecvOffMsgSeq&, const ::Ice::Context*);

    virtual ::Ice::Int setESRecvOffMsg(const ::std::string&, ::Ice::Int, const ::IMSINNER::SICERecvOffMsgSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESGroupList(const ::std::string&, ::Ice::IntSeq&, const ::Ice::Context*);

    virtual ::Ice::Int insertESGroupInfo(const ::std::string&, const ::IMSINNER::SICEESGroupInfo&, const ::Ice::Context*);

    virtual ::Ice::Int updateESGroupInfo(const ::std::string&, const ::IMSINNER::SICEESGroupInfo&, const ::Ice::Context*);

    virtual ::Ice::Int delESGroup(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int getESGroupInfo(const ::std::string&, ::IMSINNER::SICEESGroupInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESGroupInfoByID(const ::std::string&, ::Ice::Int, ::IMSINNER::SICEESGroupInfo&, const ::Ice::Context*);

    virtual ::Ice::Int getESUnJoinGroup(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESReceptList(const ::std::string&, ::Ice::Int, ::IMSINNER::SICEReceptStatusSeq&, const ::Ice::Context*);

    virtual ::Ice::Int checkESRole(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int getChildShuntInfos(const ::std::string&, ::IMSINNER::SICEChildShuntInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int setChildShuntInfos(const ::std::string&, const ::IMSINNER::SICEChildShuntInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getAgentChild(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int setAgentChild(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getAgentList(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int helperMsg(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace IMSINNER
{

class IMSICEService : virtual public ::IceDelegate::IMSINNER::IMSICEService,
                      virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int getLastVisit(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int setShareContact(const ::std::string&, const ::Ice::StringSeq&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int clearLastVisit(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getLastVisitEx(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::IMSINNER::SHMSBuddyStatus6&, const ::Ice::Context*);

    virtual ::Ice::Int HmsLogin(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getWorkingBuddy(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int setWaiterDenyService(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int setLastVisit(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int setLastVisitandSrvnum(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int HmsLogin6(const ::std::string&, ::Ice::Int, ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int setWaiterServerID(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int isFakeOnline(const ::std::string&, bool&, const ::Ice::Context*);

    virtual ::Ice::Int setWaiterStatus(const ::std::string&, ::Ice::Int, ::Ice::Int, bool&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int getHelperstatus(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getOfflineHelpers(const ::std::string&, ::Ice::StringSeq&, ::Ice::IntSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getAllOtherHelpers(const ::std::string&, ::Ice::StringSeq&, ::Ice::IntSeq&, const ::Ice::Context*);

    virtual ::Ice::Int setMaxServiceNum(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int chgATMHelpersServiceNum(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int HmsLoginOff(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int HmsLoginOff6(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int getBuddyStatus(const ::std::string&, ::IMSINNER::SHMSBuddyStatusSeq&, const ::Ice::Context*);

    virtual ::Ice::Int EHmsLogin6(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int getBuddyStatus6(const ::std::string&, const ::std::string&, ::IMSINNER::SHMSBuddyStatusSeq6&, const ::Ice::Context*);

    virtual ::Ice::Int getForWardList(const ::std::string&, const ::std::string&, ::IMSINNER::SHMSBuddyStatusSeq6&, const ::Ice::Context*);

    virtual ::Ice::Int forWardServiceUser(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int closeHMSSession(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int NotifyHMSMsg(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int SendHMSMsg(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int changeUserStatus(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int getESShuntStatus(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int setESShuntStatus(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getMaxESReceptNum(const ::std::string&, ::Ice::Int, ::IMSINNER::SICEReceptNumSeq&, const ::Ice::Context*);

    virtual ::Ice::Int setMaxESReceptNum(const ::std::string&, ::Ice::Int, const ::IMSINNER::SICEReceptNumSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESPriority(const ::std::string&, ::Ice::Int, ::IMSINNER::SICEReceptPrioritySeq&, const ::Ice::Context*);

    virtual ::Ice::Int setESPriority(const ::std::string&, ::Ice::Int, const ::IMSINNER::SICEReceptPrioritySeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESRecvOffMsg(const ::std::string&, ::Ice::Int, ::IMSINNER::SICERecvOffMsgSeq&, const ::Ice::Context*);

    virtual ::Ice::Int setESRecvOffMsg(const ::std::string&, ::Ice::Int, const ::IMSINNER::SICERecvOffMsgSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESGroupList(const ::std::string&, ::Ice::IntSeq&, const ::Ice::Context*);

    virtual ::Ice::Int insertESGroupInfo(const ::std::string&, const ::IMSINNER::SICEESGroupInfo&, const ::Ice::Context*);

    virtual ::Ice::Int updateESGroupInfo(const ::std::string&, const ::IMSINNER::SICEESGroupInfo&, const ::Ice::Context*);

    virtual ::Ice::Int delESGroup(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int getESGroupInfo(const ::std::string&, ::IMSINNER::SICEESGroupInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESGroupInfoByID(const ::std::string&, ::Ice::Int, ::IMSINNER::SICEESGroupInfo&, const ::Ice::Context*);

    virtual ::Ice::Int getESUnJoinGroup(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESReceptList(const ::std::string&, ::Ice::Int, ::IMSINNER::SICEReceptStatusSeq&, const ::Ice::Context*);

    virtual ::Ice::Int checkESRole(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int getChildShuntInfos(const ::std::string&, ::IMSINNER::SICEChildShuntInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int setChildShuntInfos(const ::std::string&, const ::IMSINNER::SICEChildShuntInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getAgentChild(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int setAgentChild(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getAgentList(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int helperMsg(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
};

}

}

namespace IMSINNER
{

class IMSICEService : virtual public ::Ice::Object
{
public:

    typedef IMSICEServicePrx ProxyType;
    typedef IMSICEServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int getLastVisit(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getLastVisit(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int setShareContact(const ::std::string&, const ::Ice::StringSeq&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___setShareContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int clearLastVisit(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___clearLastVisit(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getLastVisitEx(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::IMSINNER::SHMSBuddyStatus6&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getLastVisitEx(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int HmsLogin(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___HmsLogin(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getWorkingBuddy(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getWorkingBuddy(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int setWaiterDenyService(const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___setWaiterDenyService(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int setLastVisit(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___setLastVisit(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int setLastVisitandSrvnum(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___setLastVisitandSrvnum(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int HmsLogin6(const ::std::string&, ::Ice::Int, ::Ice::StringSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___HmsLogin6(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int setWaiterServerID(const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___setWaiterServerID(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int isFakeOnline(const ::std::string&, bool&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___isFakeOnline(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int setWaiterStatus(const ::std::string&, ::Ice::Int, ::Ice::Int, bool&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___setWaiterStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getHelperstatus(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getHelperstatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getOfflineHelpers(const ::std::string&, ::Ice::StringSeq&, ::Ice::IntSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getOfflineHelpers(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getAllOtherHelpers(const ::std::string&, ::Ice::StringSeq&, ::Ice::IntSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getAllOtherHelpers(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int setMaxServiceNum(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___setMaxServiceNum(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int chgATMHelpersServiceNum(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___chgATMHelpersServiceNum(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int HmsLoginOff(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___HmsLoginOff(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int HmsLoginOff6(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___HmsLoginOff6(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getBuddyStatus(const ::std::string&, ::IMSINNER::SHMSBuddyStatusSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getBuddyStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int EHmsLogin6(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___EHmsLogin6(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getBuddyStatus6(const ::std::string&, const ::std::string&, ::IMSINNER::SHMSBuddyStatusSeq6&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getBuddyStatus6(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getForWardList(const ::std::string&, const ::std::string&, ::IMSINNER::SHMSBuddyStatusSeq6&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getForWardList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int forWardServiceUser(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___forWardServiceUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int closeHMSSession(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___closeHMSSession(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int NotifyHMSMsg(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___NotifyHMSMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int SendHMSMsg(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___SendHMSMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int changeUserStatus(const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___changeUserStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getESShuntStatus(const ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESShuntStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int setESShuntStatus(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___setESShuntStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getMaxESReceptNum(const ::std::string&, ::Ice::Int, ::IMSINNER::SICEReceptNumSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getMaxESReceptNum(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int setMaxESReceptNum(const ::std::string&, ::Ice::Int, const ::IMSINNER::SICEReceptNumSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___setMaxESReceptNum(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getESPriority(const ::std::string&, ::Ice::Int, ::IMSINNER::SICEReceptPrioritySeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESPriority(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int setESPriority(const ::std::string&, ::Ice::Int, const ::IMSINNER::SICEReceptPrioritySeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___setESPriority(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getESRecvOffMsg(const ::std::string&, ::Ice::Int, ::IMSINNER::SICERecvOffMsgSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESRecvOffMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int setESRecvOffMsg(const ::std::string&, ::Ice::Int, const ::IMSINNER::SICERecvOffMsgSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___setESRecvOffMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getESGroupList(const ::std::string&, ::Ice::IntSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESGroupList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int insertESGroupInfo(const ::std::string&, const ::IMSINNER::SICEESGroupInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___insertESGroupInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int updateESGroupInfo(const ::std::string&, const ::IMSINNER::SICEESGroupInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___updateESGroupInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int delESGroup(const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___delESGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getESGroupInfo(const ::std::string&, ::IMSINNER::SICEESGroupInfoSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESGroupInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getESGroupInfoByID(const ::std::string&, ::Ice::Int, ::IMSINNER::SICEESGroupInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESGroupInfoByID(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getESUnJoinGroup(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESUnJoinGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getESReceptList(const ::std::string&, ::Ice::Int, ::IMSINNER::SICEReceptStatusSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESReceptList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int checkESRole(const ::std::string&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___checkESRole(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getChildShuntInfos(const ::std::string&, ::IMSINNER::SICEChildShuntInfoSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getChildShuntInfos(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int setChildShuntInfos(const ::std::string&, const ::IMSINNER::SICEChildShuntInfoSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___setChildShuntInfos(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getAgentChild(const ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getAgentChild(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int setAgentChild(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___setAgentChild(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getAgentList(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getAgentList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int helperMsg(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___helperMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__IMSICEServicePtr(void*, ::Ice::ObjectPtr&);

}

#endif
