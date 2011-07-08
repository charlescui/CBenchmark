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

#include <ims_ice_service.h>
#include <Ice/LocalException.h>
#include <Ice/ObjectFactory.h>
#include <Ice/BasicStream.h>
#include <Ice/Object.h>
#include <IceUtil/Iterator.h>
#include <IceUtil/ScopedArray.h>

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

static const ::std::string __IMSINNER__IMSICEService__getLastVisit_name = "getLastVisit";

static const ::std::string __IMSINNER__IMSICEService__setShareContact_name = "setShareContact";

static const ::std::string __IMSINNER__IMSICEService__clearLastVisit_name = "clearLastVisit";

static const ::std::string __IMSINNER__IMSICEService__getLastVisitEx_name = "getLastVisitEx";

static const ::std::string __IMSINNER__IMSICEService__HmsLogin_name = "HmsLogin";

static const ::std::string __IMSINNER__IMSICEService__getWorkingBuddy_name = "getWorkingBuddy";

static const ::std::string __IMSINNER__IMSICEService__setWaiterDenyService_name = "setWaiterDenyService";

static const ::std::string __IMSINNER__IMSICEService__setLastVisit_name = "setLastVisit";

static const ::std::string __IMSINNER__IMSICEService__setLastVisitandSrvnum_name = "setLastVisitandSrvnum";

static const ::std::string __IMSINNER__IMSICEService__HmsLogin6_name = "HmsLogin6";

static const ::std::string __IMSINNER__IMSICEService__setWaiterServerID_name = "setWaiterServerID";

static const ::std::string __IMSINNER__IMSICEService__isFakeOnline_name = "isFakeOnline";

static const ::std::string __IMSINNER__IMSICEService__setWaiterStatus_name = "setWaiterStatus";

static const ::std::string __IMSINNER__IMSICEService__getHelperstatus_name = "getHelperstatus";

static const ::std::string __IMSINNER__IMSICEService__getOfflineHelpers_name = "getOfflineHelpers";

static const ::std::string __IMSINNER__IMSICEService__getAllOtherHelpers_name = "getAllOtherHelpers";

static const ::std::string __IMSINNER__IMSICEService__setMaxServiceNum_name = "setMaxServiceNum";

static const ::std::string __IMSINNER__IMSICEService__chgATMHelpersServiceNum_name = "chgATMHelpersServiceNum";

static const ::std::string __IMSINNER__IMSICEService__HmsLoginOff_name = "HmsLoginOff";

static const ::std::string __IMSINNER__IMSICEService__HmsLoginOff6_name = "HmsLoginOff6";

static const ::std::string __IMSINNER__IMSICEService__getBuddyStatus_name = "getBuddyStatus";

static const ::std::string __IMSINNER__IMSICEService__EHmsLogin6_name = "EHmsLogin6";

static const ::std::string __IMSINNER__IMSICEService__getBuddyStatus6_name = "getBuddyStatus6";

static const ::std::string __IMSINNER__IMSICEService__getForWardList_name = "getForWardList";

static const ::std::string __IMSINNER__IMSICEService__forWardServiceUser_name = "forWardServiceUser";

static const ::std::string __IMSINNER__IMSICEService__closeHMSSession_name = "closeHMSSession";

static const ::std::string __IMSINNER__IMSICEService__NotifyHMSMsg_name = "NotifyHMSMsg";

static const ::std::string __IMSINNER__IMSICEService__SendHMSMsg_name = "SendHMSMsg";

static const ::std::string __IMSINNER__IMSICEService__changeUserStatus_name = "changeUserStatus";

static const ::std::string __IMSINNER__IMSICEService__getESShuntStatus_name = "getESShuntStatus";

static const ::std::string __IMSINNER__IMSICEService__setESShuntStatus_name = "setESShuntStatus";

static const ::std::string __IMSINNER__IMSICEService__getMaxESReceptNum_name = "getMaxESReceptNum";

static const ::std::string __IMSINNER__IMSICEService__setMaxESReceptNum_name = "setMaxESReceptNum";

static const ::std::string __IMSINNER__IMSICEService__getESPriority_name = "getESPriority";

static const ::std::string __IMSINNER__IMSICEService__setESPriority_name = "setESPriority";

static const ::std::string __IMSINNER__IMSICEService__getESRecvOffMsg_name = "getESRecvOffMsg";

static const ::std::string __IMSINNER__IMSICEService__setESRecvOffMsg_name = "setESRecvOffMsg";

static const ::std::string __IMSINNER__IMSICEService__getESGroupList_name = "getESGroupList";

static const ::std::string __IMSINNER__IMSICEService__insertESGroupInfo_name = "insertESGroupInfo";

static const ::std::string __IMSINNER__IMSICEService__updateESGroupInfo_name = "updateESGroupInfo";

static const ::std::string __IMSINNER__IMSICEService__delESGroup_name = "delESGroup";

static const ::std::string __IMSINNER__IMSICEService__getESGroupInfo_name = "getESGroupInfo";

static const ::std::string __IMSINNER__IMSICEService__getESGroupInfoByID_name = "getESGroupInfoByID";

static const ::std::string __IMSINNER__IMSICEService__getESUnJoinGroup_name = "getESUnJoinGroup";

static const ::std::string __IMSINNER__IMSICEService__getESReceptList_name = "getESReceptList";

static const ::std::string __IMSINNER__IMSICEService__checkESRole_name = "checkESRole";

static const ::std::string __IMSINNER__IMSICEService__getChildShuntInfos_name = "getChildShuntInfos";

static const ::std::string __IMSINNER__IMSICEService__setChildShuntInfos_name = "setChildShuntInfos";

static const ::std::string __IMSINNER__IMSICEService__getAgentChild_name = "getAgentChild";

static const ::std::string __IMSINNER__IMSICEService__setAgentChild_name = "setAgentChild";

static const ::std::string __IMSINNER__IMSICEService__getAgentList_name = "getAgentList";

static const ::std::string __IMSINNER__IMSICEService__helperMsg_name = "helperMsg";

void
IceInternal::incRef(::IMSINNER::IMSICEService* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IMSINNER::IMSICEService* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::IMSINNER::IMSICEService* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::IMSINNER::IMSICEService* p)
{
    p->__decRef();
}

void
IMSINNER::__write(::IceInternal::BasicStream* __os, const ::IMSINNER::IMSICEServicePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
IMSINNER::__read(::IceInternal::BasicStream* __is, ::IMSINNER::IMSICEServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::IMSINNER::IMSICEService;
        v->__copyFrom(proxy);
    }
}

void
IMSINNER::__write(::IceInternal::BasicStream* __os, const ::IMSINNER::IMSICEServicePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

bool
IMSINNER::SHMSBuddyStatus::operator==(const SHMSBuddyStatus& __rhs) const
{
    return !operator!=(__rhs);
}

bool
IMSINNER::SHMSBuddyStatus::operator!=(const SHMSBuddyStatus& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(uid != __rhs.uid)
    {
        return true;
    }
    if(onlinestatus != __rhs.onlinestatus)
    {
        return true;
    }
    if(servicestatus != __rhs.servicestatus)
    {
        return true;
    }
    if(status != __rhs.status)
    {
        return true;
    }
    if(totalnum != __rhs.totalnum)
    {
        return true;
    }
    if(daynum != __rhs.daynum)
    {
        return true;
    }
    return false;
}

bool
IMSINNER::SHMSBuddyStatus::operator<(const SHMSBuddyStatus& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(uid < __rhs.uid)
    {
        return true;
    }
    else if(__rhs.uid < uid)
    {
        return false;
    }
    if(onlinestatus < __rhs.onlinestatus)
    {
        return true;
    }
    else if(__rhs.onlinestatus < onlinestatus)
    {
        return false;
    }
    if(servicestatus < __rhs.servicestatus)
    {
        return true;
    }
    else if(__rhs.servicestatus < servicestatus)
    {
        return false;
    }
    if(status < __rhs.status)
    {
        return true;
    }
    else if(__rhs.status < status)
    {
        return false;
    }
    if(totalnum < __rhs.totalnum)
    {
        return true;
    }
    else if(__rhs.totalnum < totalnum)
    {
        return false;
    }
    if(daynum < __rhs.daynum)
    {
        return true;
    }
    else if(__rhs.daynum < daynum)
    {
        return false;
    }
    return false;
}

void
IMSINNER::SHMSBuddyStatus::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(uid);
    __os->write(onlinestatus);
    __os->write(servicestatus);
    __os->write(status);
    __os->write(totalnum);
    __os->write(daynum);
}

void
IMSINNER::SHMSBuddyStatus::__read(::IceInternal::BasicStream* __is)
{
    __is->read(uid);
    __is->read(onlinestatus);
    __is->read(servicestatus);
    __is->read(status);
    __is->read(totalnum);
    __is->read(daynum);
}

bool
IMSINNER::SHMSBuddyStatus6::operator==(const SHMSBuddyStatus6& __rhs) const
{
    return !operator!=(__rhs);
}

bool
IMSINNER::SHMSBuddyStatus6::operator!=(const SHMSBuddyStatus6& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(childid != __rhs.childid)
    {
        return true;
    }
    if(childnick != __rhs.childnick)
    {
        return true;
    }
    if(basicstatus != __rhs.basicstatus)
    {
        return true;
    }
    if(predefstatus != __rhs.predefstatus)
    {
        return true;
    }
    if(servicestatus != __rhs.servicestatus)
    {
        return true;
    }
    if(maxservice != __rhs.maxservice)
    {
        return true;
    }
    if(curservice != __rhs.curservice)
    {
        return true;
    }
    if(version != __rhs.version)
    {
        return true;
    }
    return false;
}

bool
IMSINNER::SHMSBuddyStatus6::operator<(const SHMSBuddyStatus6& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(childid < __rhs.childid)
    {
        return true;
    }
    else if(__rhs.childid < childid)
    {
        return false;
    }
    if(childnick < __rhs.childnick)
    {
        return true;
    }
    else if(__rhs.childnick < childnick)
    {
        return false;
    }
    if(basicstatus < __rhs.basicstatus)
    {
        return true;
    }
    else if(__rhs.basicstatus < basicstatus)
    {
        return false;
    }
    if(predefstatus < __rhs.predefstatus)
    {
        return true;
    }
    else if(__rhs.predefstatus < predefstatus)
    {
        return false;
    }
    if(servicestatus < __rhs.servicestatus)
    {
        return true;
    }
    else if(__rhs.servicestatus < servicestatus)
    {
        return false;
    }
    if(maxservice < __rhs.maxservice)
    {
        return true;
    }
    else if(__rhs.maxservice < maxservice)
    {
        return false;
    }
    if(curservice < __rhs.curservice)
    {
        return true;
    }
    else if(__rhs.curservice < curservice)
    {
        return false;
    }
    if(version < __rhs.version)
    {
        return true;
    }
    else if(__rhs.version < version)
    {
        return false;
    }
    return false;
}

void
IMSINNER::SHMSBuddyStatus6::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(childid);
    __os->write(childnick);
    __os->write(basicstatus);
    __os->write(predefstatus);
    __os->write(servicestatus);
    __os->write(maxservice);
    __os->write(curservice);
    __os->write(version);
}

void
IMSINNER::SHMSBuddyStatus6::__read(::IceInternal::BasicStream* __is)
{
    __is->read(childid);
    __is->read(childnick);
    __is->read(basicstatus);
    __is->read(predefstatus);
    __is->read(servicestatus);
    __is->read(maxservice);
    __is->read(curservice);
    __is->read(version);
}

bool
IMSINNER::SICEReceptNum::operator==(const SICEReceptNum& __rhs) const
{
    return !operator!=(__rhs);
}

bool
IMSINNER::SICEReceptNum::operator!=(const SICEReceptNum& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(eserviceid != __rhs.eserviceid)
    {
        return true;
    }
    if(receptnum != __rhs.receptnum)
    {
        return true;
    }
    return false;
}

bool
IMSINNER::SICEReceptNum::operator<(const SICEReceptNum& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(eserviceid < __rhs.eserviceid)
    {
        return true;
    }
    else if(__rhs.eserviceid < eserviceid)
    {
        return false;
    }
    if(receptnum < __rhs.receptnum)
    {
        return true;
    }
    else if(__rhs.receptnum < receptnum)
    {
        return false;
    }
    return false;
}

void
IMSINNER::SICEReceptNum::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(eserviceid);
    __os->write(receptnum);
}

void
IMSINNER::SICEReceptNum::__read(::IceInternal::BasicStream* __is)
{
    __is->read(eserviceid);
    __is->read(receptnum);
}

void
IMSINNER::__write(::IceInternal::BasicStream* __os, const ::IMSINNER::SICEReceptNum* begin, const ::IMSINNER::SICEReceptNum* end, ::IMSINNER::__U__SICEReceptNumSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
IMSINNER::__read(::IceInternal::BasicStream* __is, ::IMSINNER::SICEReceptNumSeq& v, ::IMSINNER::__U__SICEReceptNumSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 5);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

bool
IMSINNER::SICEReceptStatus::operator==(const SICEReceptStatus& __rhs) const
{
    return !operator!=(__rhs);
}

bool
IMSINNER::SICEReceptStatus::operator!=(const SICEReceptStatus& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(eserviceid != __rhs.eserviceid)
    {
        return true;
    }
    if(receptnumNow != __rhs.receptnumNow)
    {
        return true;
    }
    if(receptnumMax != __rhs.receptnumMax)
    {
        return true;
    }
    if(receptnumDaily != __rhs.receptnumDaily)
    {
        return true;
    }
    return false;
}

bool
IMSINNER::SICEReceptStatus::operator<(const SICEReceptStatus& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(eserviceid < __rhs.eserviceid)
    {
        return true;
    }
    else if(__rhs.eserviceid < eserviceid)
    {
        return false;
    }
    if(receptnumNow < __rhs.receptnumNow)
    {
        return true;
    }
    else if(__rhs.receptnumNow < receptnumNow)
    {
        return false;
    }
    if(receptnumMax < __rhs.receptnumMax)
    {
        return true;
    }
    else if(__rhs.receptnumMax < receptnumMax)
    {
        return false;
    }
    if(receptnumDaily < __rhs.receptnumDaily)
    {
        return true;
    }
    else if(__rhs.receptnumDaily < receptnumDaily)
    {
        return false;
    }
    return false;
}

void
IMSINNER::SICEReceptStatus::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(eserviceid);
    __os->write(receptnumNow);
    __os->write(receptnumMax);
    __os->write(receptnumDaily);
}

void
IMSINNER::SICEReceptStatus::__read(::IceInternal::BasicStream* __is)
{
    __is->read(eserviceid);
    __is->read(receptnumNow);
    __is->read(receptnumMax);
    __is->read(receptnumDaily);
}

void
IMSINNER::__write(::IceInternal::BasicStream* __os, const ::IMSINNER::SICEReceptStatus* begin, const ::IMSINNER::SICEReceptStatus* end, ::IMSINNER::__U__SICEReceptStatusSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
IMSINNER::__read(::IceInternal::BasicStream* __is, ::IMSINNER::SICEReceptStatusSeq& v, ::IMSINNER::__U__SICEReceptStatusSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 13);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

bool
IMSINNER::SICEReceptPriority::operator==(const SICEReceptPriority& __rhs) const
{
    return !operator!=(__rhs);
}

bool
IMSINNER::SICEReceptPriority::operator!=(const SICEReceptPriority& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(eserviceid != __rhs.eserviceid)
    {
        return true;
    }
    if(receptpriority != __rhs.receptpriority)
    {
        return true;
    }
    return false;
}

bool
IMSINNER::SICEReceptPriority::operator<(const SICEReceptPriority& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(eserviceid < __rhs.eserviceid)
    {
        return true;
    }
    else if(__rhs.eserviceid < eserviceid)
    {
        return false;
    }
    if(receptpriority < __rhs.receptpriority)
    {
        return true;
    }
    else if(__rhs.receptpriority < receptpriority)
    {
        return false;
    }
    return false;
}

void
IMSINNER::SICEReceptPriority::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(eserviceid);
    __os->write(receptpriority);
}

void
IMSINNER::SICEReceptPriority::__read(::IceInternal::BasicStream* __is)
{
    __is->read(eserviceid);
    __is->read(receptpriority);
}

void
IMSINNER::__write(::IceInternal::BasicStream* __os, const ::IMSINNER::SICEReceptPriority* begin, const ::IMSINNER::SICEReceptPriority* end, ::IMSINNER::__U__SICEReceptPrioritySeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
IMSINNER::__read(::IceInternal::BasicStream* __is, ::IMSINNER::SICEReceptPrioritySeq& v, ::IMSINNER::__U__SICEReceptPrioritySeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 5);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

bool
IMSINNER::SICERecvOffMsg::operator==(const SICERecvOffMsg& __rhs) const
{
    return !operator!=(__rhs);
}

bool
IMSINNER::SICERecvOffMsg::operator!=(const SICERecvOffMsg& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(eserviceid != __rhs.eserviceid)
    {
        return true;
    }
    if(recvoffmsg != __rhs.recvoffmsg)
    {
        return true;
    }
    return false;
}

bool
IMSINNER::SICERecvOffMsg::operator<(const SICERecvOffMsg& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(eserviceid < __rhs.eserviceid)
    {
        return true;
    }
    else if(__rhs.eserviceid < eserviceid)
    {
        return false;
    }
    if(recvoffmsg < __rhs.recvoffmsg)
    {
        return true;
    }
    else if(__rhs.recvoffmsg < recvoffmsg)
    {
        return false;
    }
    return false;
}

void
IMSINNER::SICERecvOffMsg::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(eserviceid);
    __os->write(recvoffmsg);
}

void
IMSINNER::SICERecvOffMsg::__read(::IceInternal::BasicStream* __is)
{
    __is->read(eserviceid);
    __is->read(recvoffmsg);
}

void
IMSINNER::__write(::IceInternal::BasicStream* __os, const ::IMSINNER::SICERecvOffMsg* begin, const ::IMSINNER::SICERecvOffMsg* end, ::IMSINNER::__U__SICERecvOffMsgSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
IMSINNER::__read(::IceInternal::BasicStream* __is, ::IMSINNER::SICERecvOffMsgSeq& v, ::IMSINNER::__U__SICERecvOffMsgSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 5);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

bool
IMSINNER::SICEESGroupInfo::operator==(const SICEESGroupInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
IMSINNER::SICEESGroupInfo::operator!=(const SICEESGroupInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(groupName != __rhs.groupName)
    {
        return true;
    }
    if(groupId != __rhs.groupId)
    {
        return true;
    }
    if(adminId != __rhs.adminId)
    {
        return true;
    }
    if(eservicelist != __rhs.eservicelist)
    {
        return true;
    }
    return false;
}

bool
IMSINNER::SICEESGroupInfo::operator<(const SICEESGroupInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(groupName < __rhs.groupName)
    {
        return true;
    }
    else if(__rhs.groupName < groupName)
    {
        return false;
    }
    if(groupId < __rhs.groupId)
    {
        return true;
    }
    else if(__rhs.groupId < groupId)
    {
        return false;
    }
    if(adminId < __rhs.adminId)
    {
        return true;
    }
    else if(__rhs.adminId < adminId)
    {
        return false;
    }
    if(eservicelist < __rhs.eservicelist)
    {
        return true;
    }
    else if(__rhs.eservicelist < eservicelist)
    {
        return false;
    }
    return false;
}

void
IMSINNER::SICEESGroupInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(groupName);
    __os->write(groupId);
    __os->write(adminId);
    if(eservicelist.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&eservicelist[0], &eservicelist[0] + eservicelist.size());
    }
}

void
IMSINNER::SICEESGroupInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(groupName);
    __is->read(groupId);
    __is->read(adminId);
    __is->read(eservicelist);
}

void
IMSINNER::__write(::IceInternal::BasicStream* __os, const ::IMSINNER::SICEESGroupInfo* begin, const ::IMSINNER::SICEESGroupInfo* end, ::IMSINNER::__U__SICEESGroupInfoSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
IMSINNER::__read(::IceInternal::BasicStream* __is, ::IMSINNER::SICEESGroupInfoSeq& v, ::IMSINNER::__U__SICEESGroupInfoSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 7);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

bool
IMSINNER::SICEBaseGroupInfo::operator==(const SICEBaseGroupInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
IMSINNER::SICEBaseGroupInfo::operator!=(const SICEBaseGroupInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(groupName != __rhs.groupName)
    {
        return true;
    }
    if(groupId != __rhs.groupId)
    {
        return true;
    }
    if(adminId != __rhs.adminId)
    {
        return true;
    }
    return false;
}

bool
IMSINNER::SICEBaseGroupInfo::operator<(const SICEBaseGroupInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(groupName < __rhs.groupName)
    {
        return true;
    }
    else if(__rhs.groupName < groupName)
    {
        return false;
    }
    if(groupId < __rhs.groupId)
    {
        return true;
    }
    else if(__rhs.groupId < groupId)
    {
        return false;
    }
    if(adminId < __rhs.adminId)
    {
        return true;
    }
    else if(__rhs.adminId < adminId)
    {
        return false;
    }
    return false;
}

void
IMSINNER::SICEBaseGroupInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(groupName);
    __os->write(groupId);
    __os->write(adminId);
}

void
IMSINNER::SICEBaseGroupInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(groupName);
    __is->read(groupId);
    __is->read(adminId);
}

void
IMSINNER::__write(::IceInternal::BasicStream* __os, const ::IMSINNER::SHMSBuddyStatus* begin, const ::IMSINNER::SHMSBuddyStatus* end, ::IMSINNER::__U__SHMSBuddyStatusSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
IMSINNER::__read(::IceInternal::BasicStream* __is, ::IMSINNER::SHMSBuddyStatusSeq& v, ::IMSINNER::__U__SHMSBuddyStatusSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 17);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

bool
IMSINNER::SICEChildShuntInfo::operator==(const SICEChildShuntInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
IMSINNER::SICEChildShuntInfo::operator!=(const SICEChildShuntInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(childId != __rhs.childId)
    {
        return true;
    }
    if(groupName != __rhs.groupName)
    {
        return true;
    }
    if(groupId != __rhs.groupId)
    {
        return true;
    }
    if(needUseOnline != __rhs.needUseOnline)
    {
        return true;
    }
    if(shuntInfo != __rhs.shuntInfo)
    {
        return true;
    }
    return false;
}

bool
IMSINNER::SICEChildShuntInfo::operator<(const SICEChildShuntInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(childId < __rhs.childId)
    {
        return true;
    }
    else if(__rhs.childId < childId)
    {
        return false;
    }
    if(groupName < __rhs.groupName)
    {
        return true;
    }
    else if(__rhs.groupName < groupName)
    {
        return false;
    }
    if(groupId < __rhs.groupId)
    {
        return true;
    }
    else if(__rhs.groupId < groupId)
    {
        return false;
    }
    if(needUseOnline < __rhs.needUseOnline)
    {
        return true;
    }
    else if(__rhs.needUseOnline < needUseOnline)
    {
        return false;
    }
    if(shuntInfo < __rhs.shuntInfo)
    {
        return true;
    }
    else if(__rhs.shuntInfo < shuntInfo)
    {
        return false;
    }
    return false;
}

void
IMSINNER::SICEChildShuntInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(childId);
    __os->write(groupName);
    __os->write(groupId);
    __os->write(needUseOnline);
    __os->write(shuntInfo);
}

void
IMSINNER::SICEChildShuntInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(childId);
    __is->read(groupName);
    __is->read(groupId);
    __is->read(needUseOnline);
    __is->read(shuntInfo);
}

void
IMSINNER::__write(::IceInternal::BasicStream* __os, const ::IMSINNER::SICEChildShuntInfo* begin, const ::IMSINNER::SICEChildShuntInfo* end, ::IMSINNER::__U__SICEChildShuntInfoSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
IMSINNER::__read(::IceInternal::BasicStream* __is, ::IMSINNER::SICEChildShuntInfoSeq& v, ::IMSINNER::__U__SICEChildShuntInfoSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 8);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
IMSINNER::__write(::IceInternal::BasicStream* __os, const ::IMSINNER::SHMSBuddyStatus6* begin, const ::IMSINNER::SHMSBuddyStatus6* end, ::IMSINNER::__U__SHMSBuddyStatusSeq6)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
IMSINNER::__read(::IceInternal::BasicStream* __is, ::IMSINNER::SHMSBuddyStatusSeq6& v, ::IMSINNER::__U__SHMSBuddyStatusSeq6)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 20);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
IMSINNER::__addObject(const IMSICEServicePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
IMSINNER::__usesClasses(const IMSICEServicePtr& p)
{
    return p->__usesClasses();
}

void
IMSINNER::__decRefUnsafe(const IMSICEServicePtr& p)
{
    p->__decRefUnsafe();
}

void
IMSINNER::__clearHandleUnsafe(IMSICEServicePtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::getLastVisit(const ::std::string& host, const ::std::string& visitor, ::std::string& hostess, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__getLastVisit_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->getLastVisit(host, visitor, hostess, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::setShareContact(const ::std::string& uid, const ::Ice::StringSeq& cids, ::Ice::Int value, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__setShareContact_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->setShareContact(uid, cids, value, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::clearLastVisit(const ::std::string& host, const ::std::string& visitor, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__clearLastVisit_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->clearLastVisit(host, visitor, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::getLastVisitEx(const ::std::string& host, const ::std::string& visitor, ::Ice::Int groupId, ::Ice::Int addServiceNum, ::IMSINNER::SHMSBuddyStatus6& hostess, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__getLastVisitEx_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->getLastVisitEx(host, visitor, groupId, addServiceNum, hostess, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::HmsLogin(const ::std::string& uid, ::Ice::StringSeq& cids, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__HmsLogin_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->HmsLogin(uid, cids, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::getWorkingBuddy(const ::std::string& uid, ::Ice::StringSeq& cids, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__getWorkingBuddy_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->getWorkingBuddy(uid, cids, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::setWaiterDenyService(const ::std::string& uid, ::Ice::Int status, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__setWaiterDenyService_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->setWaiterDenyService(uid, status, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::setLastVisit(const ::std::string& host, const ::std::string& visitor, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__setLastVisit_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->setLastVisit(host, visitor, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::setLastVisitandSrvnum(const ::std::string& host, const ::std::string& visitor, ::Ice::Int srvnum, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__setLastVisitandSrvnum_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->setLastVisitandSrvnum(host, visitor, srvnum, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::HmsLogin6(const ::std::string& uid, ::Ice::Int imsid, ::Ice::StringSeq& cids, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__HmsLogin6_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->HmsLogin6(uid, imsid, cids, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::setWaiterServerID(const ::std::string& uid, ::Ice::Int status, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__setWaiterServerID_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->setWaiterServerID(uid, status, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::isFakeOnline(const ::std::string& uid, bool& status, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__isFakeOnline_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->isFakeOnline(uid, status, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::setWaiterStatus(const ::std::string& uid, ::Ice::Int status, ::Ice::Int imsid, bool& bneedsendfakestatus, ::Ice::Int& before, ::Ice::Int& afteronlinestatus, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__setWaiterStatus_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->setWaiterStatus(uid, status, imsid, bneedsendfakestatus, before, afteronlinestatus, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::getHelperstatus(const ::std::string& uid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__getHelperstatus_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->getHelperstatus(uid, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::getOfflineHelpers(const ::std::string& uid, ::Ice::StringSeq& childs, ::Ice::IntSeq& childsimsids, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__getOfflineHelpers_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->getOfflineHelpers(uid, childs, childsimsids, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::getAllOtherHelpers(const ::std::string& uid, ::Ice::StringSeq& childs, ::Ice::IntSeq& childsimsids, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__getAllOtherHelpers_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->getAllOtherHelpers(uid, childs, childsimsids, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::setMaxServiceNum(const ::std::string& uid, const ::std::string& childid, ::Ice::Int num, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__setMaxServiceNum_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->setMaxServiceNum(uid, childid, num, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::chgATMHelpersServiceNum(const ::std::string& uid, const ::std::string& childid, const ::std::string& contactid, ::Ice::Int type, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__chgATMHelpersServiceNum_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->chgATMHelpersServiceNum(uid, childid, contactid, type, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::HmsLoginOff(const ::std::string& uid, const ::std::string& childid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__HmsLoginOff_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->HmsLoginOff(uid, childid, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::HmsLoginOff6(const ::std::string& uid, const ::std::string& childid, ::Ice::Int imsid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__HmsLoginOff6_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->HmsLoginOff6(uid, childid, imsid, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::getBuddyStatus(const ::std::string& uid, ::IMSINNER::SHMSBuddyStatusSeq& buddystatus, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__getBuddyStatus_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->getBuddyStatus(uid, buddystatus, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::EHmsLogin6(const ::std::string& uid, const ::std::string& fid, ::Ice::Int imsid, ::Ice::Int logintype, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__EHmsLogin6_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->EHmsLogin6(uid, fid, imsid, logintype, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::getBuddyStatus6(const ::std::string& uid, const ::std::string& fid, ::IMSINNER::SHMSBuddyStatusSeq6& buddystatus, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__getBuddyStatus6_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->getBuddyStatus6(uid, fid, buddystatus, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::getForWardList(const ::std::string& uid, const ::std::string& fid, ::IMSINNER::SHMSBuddyStatusSeq6& buddystatus, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__getForWardList_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->getForWardList(uid, fid, buddystatus, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::forWardServiceUser(const ::std::string& uid, const ::std::string& fid, const ::std::string& conatctid, const ::std::string& tochildid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__forWardServiceUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->forWardServiceUser(uid, fid, conatctid, tochildid, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::closeHMSSession(const ::std::string& uid, const ::std::string& fid, const ::std::string& conatctid, ::Ice::Int type, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__closeHMSSession_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->closeHMSSession(uid, fid, conatctid, type, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::NotifyHMSMsg(const ::std::string& fromid, const ::std::string& uid, ::Ice::Int srvid, ::Ice::Int type, const ::std::string& msg, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__NotifyHMSMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->NotifyHMSMsg(fromid, uid, srvid, type, msg, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::SendHMSMsg(const ::std::string& fid, const ::std::string& uid, const ::std::string& conatctid, ::Ice::Int srvid, ::Ice::Int type, const ::std::string& msg, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__SendHMSMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->SendHMSMsg(fid, uid, conatctid, srvid, type, msg, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::changeUserStatus(const ::std::string& uid, ::Ice::Int Stauts, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__changeUserStatus_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->changeUserStatus(uid, Stauts, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::getESShuntStatus(const ::std::string& uid, ::std::string& shunt, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__getESShuntStatus_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->getESShuntStatus(uid, shunt, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::setESShuntStatus(const ::std::string& uid, const ::std::string& shunt, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__setESShuntStatus_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->setESShuntStatus(uid, shunt, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::getMaxESReceptNum(const ::std::string& uid, ::Ice::Int groupId, ::IMSINNER::SICEReceptNumSeq& eserviceList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__getMaxESReceptNum_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->getMaxESReceptNum(uid, groupId, eserviceList, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::setMaxESReceptNum(const ::std::string& uid, ::Ice::Int groupId, const ::IMSINNER::SICEReceptNumSeq& eserviceList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__setMaxESReceptNum_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->setMaxESReceptNum(uid, groupId, eserviceList, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::getESPriority(const ::std::string& uid, ::Ice::Int groupId, ::IMSINNER::SICEReceptPrioritySeq& eserviceList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__getESPriority_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->getESPriority(uid, groupId, eserviceList, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::setESPriority(const ::std::string& uid, ::Ice::Int groupId, const ::IMSINNER::SICEReceptPrioritySeq& eserviceList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__setESPriority_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->setESPriority(uid, groupId, eserviceList, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::getESRecvOffMsg(const ::std::string& uid, ::Ice::Int groupId, ::IMSINNER::SICERecvOffMsgSeq& eserviceList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__getESRecvOffMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->getESRecvOffMsg(uid, groupId, eserviceList, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::setESRecvOffMsg(const ::std::string& uid, ::Ice::Int groupId, const ::IMSINNER::SICERecvOffMsgSeq& eserviceList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__setESRecvOffMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->setESRecvOffMsg(uid, groupId, eserviceList, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::getESGroupList(const ::std::string& uid, ::Ice::IntSeq& groupList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__getESGroupList_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->getESGroupList(uid, groupList, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::insertESGroupInfo(const ::std::string& uid, const ::IMSINNER::SICEESGroupInfo& groupInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__insertESGroupInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->insertESGroupInfo(uid, groupInfo, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::updateESGroupInfo(const ::std::string& uid, const ::IMSINNER::SICEESGroupInfo& group, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__updateESGroupInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->updateESGroupInfo(uid, group, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::delESGroup(const ::std::string& uid, ::Ice::Int groupid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__delESGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->delESGroup(uid, groupid, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::getESGroupInfo(const ::std::string& uid, ::IMSINNER::SICEESGroupInfoSeq& groupList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__getESGroupInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->getESGroupInfo(uid, groupList, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::getESGroupInfoByID(const ::std::string& uid, ::Ice::Int groupId, ::IMSINNER::SICEESGroupInfo& groupInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__getESGroupInfoByID_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->getESGroupInfoByID(uid, groupId, groupInfo, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::getESUnJoinGroup(const ::std::string& uid, ::Ice::StringSeq& eserviceList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__getESUnJoinGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->getESUnJoinGroup(uid, eserviceList, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::getESReceptList(const ::std::string& uid, ::Ice::Int groupId, ::IMSINNER::SICEReceptStatusSeq& eserviceList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__getESReceptList_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->getESReceptList(uid, groupId, eserviceList, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::checkESRole(const ::std::string& uid, ::Ice::Int& groupId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__checkESRole_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->checkESRole(uid, groupId, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::getChildShuntInfos(const ::std::string& uid, ::IMSINNER::SICEChildShuntInfoSeq& childInfos, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__getChildShuntInfos_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->getChildShuntInfos(uid, childInfos, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::setChildShuntInfos(const ::std::string& uid, const ::IMSINNER::SICEChildShuntInfoSeq& childInfos, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__setChildShuntInfos_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->setChildShuntInfos(uid, childInfos, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::getAgentChild(const ::std::string& uid, ::std::string& agentId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__getAgentChild_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->getAgentChild(uid, agentId, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::setAgentChild(const ::std::string& uid, const ::std::string& agentId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__setAgentChild_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->setAgentChild(uid, agentId, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::getAgentList(const ::std::string& uid, ::Ice::StringSeq& agentIds, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__getAgentList_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->getAgentList(uid, agentIds, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

::Ice::Int
IceProxy::IMSINNER::IMSICEService::helperMsg(const ::std::string& uid, const ::std::string& targetUid, const ::std::string& message, ::Ice::Int originalSid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__IMSINNER__IMSICEService__helperMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::IMSINNER::IMSICEService* __del = dynamic_cast< ::IceDelegate::IMSINNER::IMSICEService*>(__delBase.get());
            return __del->helperMsg(uid, targetUid, message, originalSid, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, __cnt);
        }
    }
}

const ::std::string&
IceProxy::IMSINNER::IMSICEService::ice_staticId()
{
    return ::IMSINNER::IMSICEService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::IMSINNER::IMSICEService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::IMSINNER::IMSICEService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::IMSINNER::IMSICEService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::IMSINNER::IMSICEService);
}

bool
IceProxy::IMSINNER::operator==(const ::IceProxy::IMSINNER::IMSICEService& l, const ::IceProxy::IMSINNER::IMSICEService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::IMSINNER::operator!=(const ::IceProxy::IMSINNER::IMSICEService& l, const ::IceProxy::IMSINNER::IMSICEService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::IMSINNER::operator<(const ::IceProxy::IMSINNER::IMSICEService& l, const ::IceProxy::IMSINNER::IMSICEService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::IMSINNER::operator<=(const ::IceProxy::IMSINNER::IMSICEService& l, const ::IceProxy::IMSINNER::IMSICEService& r)
{
    return l < r || l == r;
}

bool
IceProxy::IMSINNER::operator>(const ::IceProxy::IMSINNER::IMSICEService& l, const ::IceProxy::IMSINNER::IMSICEService& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::IMSINNER::operator>=(const ::IceProxy::IMSINNER::IMSICEService& l, const ::IceProxy::IMSINNER::IMSICEService& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::getLastVisit(const ::std::string& host, const ::std::string& visitor, ::std::string& hostess, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__getLastVisit_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(host);
        __os->write(visitor);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(hostess);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::setShareContact(const ::std::string& uid, const ::Ice::StringSeq& cids, ::Ice::Int value, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__setShareContact_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        if(cids.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&cids[0], &cids[0] + cids.size());
        }
        __os->write(value);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::clearLastVisit(const ::std::string& host, const ::std::string& visitor, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__clearLastVisit_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(host);
        __os->write(visitor);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::getLastVisitEx(const ::std::string& host, const ::std::string& visitor, ::Ice::Int groupId, ::Ice::Int addServiceNum, ::IMSINNER::SHMSBuddyStatus6& hostess, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__getLastVisitEx_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(host);
        __os->write(visitor);
        __os->write(groupId);
        __os->write(addServiceNum);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        hostess.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::HmsLogin(const ::std::string& uid, ::Ice::StringSeq& cids, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__HmsLogin_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(cids);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::getWorkingBuddy(const ::std::string& uid, ::Ice::StringSeq& cids, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__getWorkingBuddy_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(cids);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::setWaiterDenyService(const ::std::string& uid, ::Ice::Int status, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__setWaiterDenyService_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(status);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::setLastVisit(const ::std::string& host, const ::std::string& visitor, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__setLastVisit_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(host);
        __os->write(visitor);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::setLastVisitandSrvnum(const ::std::string& host, const ::std::string& visitor, ::Ice::Int srvnum, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__setLastVisitandSrvnum_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(host);
        __os->write(visitor);
        __os->write(srvnum);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::HmsLogin6(const ::std::string& uid, ::Ice::Int imsid, ::Ice::StringSeq& cids, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__HmsLogin6_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(imsid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(cids);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::setWaiterServerID(const ::std::string& uid, ::Ice::Int status, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__setWaiterServerID_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(status);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::isFakeOnline(const ::std::string& uid, bool& status, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__isFakeOnline_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(status);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::setWaiterStatus(const ::std::string& uid, ::Ice::Int status, ::Ice::Int imsid, bool& bneedsendfakestatus, ::Ice::Int& before, ::Ice::Int& afteronlinestatus, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__setWaiterStatus_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(status);
        __os->write(imsid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(bneedsendfakestatus);
        __is->read(before);
        __is->read(afteronlinestatus);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::getHelperstatus(const ::std::string& uid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__getHelperstatus_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::getOfflineHelpers(const ::std::string& uid, ::Ice::StringSeq& childs, ::Ice::IntSeq& childsimsids, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__getOfflineHelpers_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(childs);
        __is->read(childsimsids);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::getAllOtherHelpers(const ::std::string& uid, ::Ice::StringSeq& childs, ::Ice::IntSeq& childsimsids, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__getAllOtherHelpers_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(childs);
        __is->read(childsimsids);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::setMaxServiceNum(const ::std::string& uid, const ::std::string& childid, ::Ice::Int num, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__setMaxServiceNum_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(childid);
        __os->write(num);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::chgATMHelpersServiceNum(const ::std::string& uid, const ::std::string& childid, const ::std::string& contactid, ::Ice::Int type, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__chgATMHelpersServiceNum_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(childid);
        __os->write(contactid);
        __os->write(type);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::HmsLoginOff(const ::std::string& uid, const ::std::string& childid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__HmsLoginOff_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(childid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::HmsLoginOff6(const ::std::string& uid, const ::std::string& childid, ::Ice::Int imsid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__HmsLoginOff6_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(childid);
        __os->write(imsid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::getBuddyStatus(const ::std::string& uid, ::IMSINNER::SHMSBuddyStatusSeq& buddystatus, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__getBuddyStatus_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        ::IMSINNER::__read(__is, buddystatus, ::IMSINNER::__U__SHMSBuddyStatusSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::EHmsLogin6(const ::std::string& uid, const ::std::string& fid, ::Ice::Int imsid, ::Ice::Int logintype, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__EHmsLogin6_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(fid);
        __os->write(imsid);
        __os->write(logintype);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::getBuddyStatus6(const ::std::string& uid, const ::std::string& fid, ::IMSINNER::SHMSBuddyStatusSeq6& buddystatus, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__getBuddyStatus6_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(fid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        ::IMSINNER::__read(__is, buddystatus, ::IMSINNER::__U__SHMSBuddyStatusSeq6());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::getForWardList(const ::std::string& uid, const ::std::string& fid, ::IMSINNER::SHMSBuddyStatusSeq6& buddystatus, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__getForWardList_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(fid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        ::IMSINNER::__read(__is, buddystatus, ::IMSINNER::__U__SHMSBuddyStatusSeq6());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::forWardServiceUser(const ::std::string& uid, const ::std::string& fid, const ::std::string& conatctid, const ::std::string& tochildid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__forWardServiceUser_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(fid);
        __os->write(conatctid);
        __os->write(tochildid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::closeHMSSession(const ::std::string& uid, const ::std::string& fid, const ::std::string& conatctid, ::Ice::Int type, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__closeHMSSession_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(fid);
        __os->write(conatctid);
        __os->write(type);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::NotifyHMSMsg(const ::std::string& fromid, const ::std::string& uid, ::Ice::Int srvid, ::Ice::Int type, const ::std::string& msg, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__NotifyHMSMsg_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(fromid);
        __os->write(uid);
        __os->write(srvid);
        __os->write(type);
        __os->write(msg);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::SendHMSMsg(const ::std::string& fid, const ::std::string& uid, const ::std::string& conatctid, ::Ice::Int srvid, ::Ice::Int type, const ::std::string& msg, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__SendHMSMsg_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(fid);
        __os->write(uid);
        __os->write(conatctid);
        __os->write(srvid);
        __os->write(type);
        __os->write(msg);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::changeUserStatus(const ::std::string& uid, ::Ice::Int Stauts, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__changeUserStatus_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(Stauts);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::getESShuntStatus(const ::std::string& uid, ::std::string& shunt, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__getESShuntStatus_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(shunt);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::setESShuntStatus(const ::std::string& uid, const ::std::string& shunt, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__setESShuntStatus_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(shunt);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::getMaxESReceptNum(const ::std::string& uid, ::Ice::Int groupId, ::IMSINNER::SICEReceptNumSeq& eserviceList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__getMaxESReceptNum_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(groupId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        ::IMSINNER::__read(__is, eserviceList, ::IMSINNER::__U__SICEReceptNumSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::setMaxESReceptNum(const ::std::string& uid, ::Ice::Int groupId, const ::IMSINNER::SICEReceptNumSeq& eserviceList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__setMaxESReceptNum_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(groupId);
        if(eserviceList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::IMSINNER::__write(__os, &eserviceList[0], &eserviceList[0] + eserviceList.size(), ::IMSINNER::__U__SICEReceptNumSeq());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::getESPriority(const ::std::string& uid, ::Ice::Int groupId, ::IMSINNER::SICEReceptPrioritySeq& eserviceList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__getESPriority_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(groupId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        ::IMSINNER::__read(__is, eserviceList, ::IMSINNER::__U__SICEReceptPrioritySeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::setESPriority(const ::std::string& uid, ::Ice::Int groupId, const ::IMSINNER::SICEReceptPrioritySeq& eserviceList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__setESPriority_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(groupId);
        if(eserviceList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::IMSINNER::__write(__os, &eserviceList[0], &eserviceList[0] + eserviceList.size(), ::IMSINNER::__U__SICEReceptPrioritySeq());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::getESRecvOffMsg(const ::std::string& uid, ::Ice::Int groupId, ::IMSINNER::SICERecvOffMsgSeq& eserviceList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__getESRecvOffMsg_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(groupId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        ::IMSINNER::__read(__is, eserviceList, ::IMSINNER::__U__SICERecvOffMsgSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::setESRecvOffMsg(const ::std::string& uid, ::Ice::Int groupId, const ::IMSINNER::SICERecvOffMsgSeq& eserviceList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__setESRecvOffMsg_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(groupId);
        if(eserviceList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::IMSINNER::__write(__os, &eserviceList[0], &eserviceList[0] + eserviceList.size(), ::IMSINNER::__U__SICERecvOffMsgSeq());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::getESGroupList(const ::std::string& uid, ::Ice::IntSeq& groupList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__getESGroupList_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(groupList);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::insertESGroupInfo(const ::std::string& uid, const ::IMSINNER::SICEESGroupInfo& groupInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__insertESGroupInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        groupInfo.__write(__os);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::updateESGroupInfo(const ::std::string& uid, const ::IMSINNER::SICEESGroupInfo& group, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__updateESGroupInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        group.__write(__os);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::delESGroup(const ::std::string& uid, ::Ice::Int groupid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__delESGroup_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(groupid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::getESGroupInfo(const ::std::string& uid, ::IMSINNER::SICEESGroupInfoSeq& groupList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__getESGroupInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        ::IMSINNER::__read(__is, groupList, ::IMSINNER::__U__SICEESGroupInfoSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::getESGroupInfoByID(const ::std::string& uid, ::Ice::Int groupId, ::IMSINNER::SICEESGroupInfo& groupInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__getESGroupInfoByID_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(groupId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        groupInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::getESUnJoinGroup(const ::std::string& uid, ::Ice::StringSeq& eserviceList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__getESUnJoinGroup_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(eserviceList);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::getESReceptList(const ::std::string& uid, ::Ice::Int groupId, ::IMSINNER::SICEReceptStatusSeq& eserviceList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__getESReceptList_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(groupId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        ::IMSINNER::__read(__is, eserviceList, ::IMSINNER::__U__SICEReceptStatusSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::checkESRole(const ::std::string& uid, ::Ice::Int& groupId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__checkESRole_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(groupId);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::getChildShuntInfos(const ::std::string& uid, ::IMSINNER::SICEChildShuntInfoSeq& childInfos, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__getChildShuntInfos_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        ::IMSINNER::__read(__is, childInfos, ::IMSINNER::__U__SICEChildShuntInfoSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::setChildShuntInfos(const ::std::string& uid, const ::IMSINNER::SICEChildShuntInfoSeq& childInfos, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__setChildShuntInfos_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        if(childInfos.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::IMSINNER::__write(__os, &childInfos[0], &childInfos[0] + childInfos.size(), ::IMSINNER::__U__SICEChildShuntInfoSeq());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::getAgentChild(const ::std::string& uid, ::std::string& agentId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__getAgentChild_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(agentId);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::setAgentChild(const ::std::string& uid, const ::std::string& agentId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__setAgentChild_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(agentId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::getAgentList(const ::std::string& uid, ::Ice::StringSeq& agentIds, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__getAgentList_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(agentIds);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::IMSINNER::IMSICEService::helperMsg(const ::std::string& uid, const ::std::string& targetUid, const ::std::string& message, ::Ice::Int originalSid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __IMSINNER__IMSICEService__helperMsg_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(targetUid);
        __os->write(message);
        __os->write(originalSid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        ::IceInternal::BasicStream* __is = __og.is();
        if(!__ok)
        {
            try
            {
                __is->throwException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::Ice::Int __ret;
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::getLastVisit(const ::std::string& host, const ::std::string& visitor, ::std::string& hostess, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__getLastVisit_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getLastVisit(host, visitor, hostess, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::setShareContact(const ::std::string& uid, const ::Ice::StringSeq& cids, ::Ice::Int value, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__setShareContact_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->setShareContact(uid, cids, value, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::clearLastVisit(const ::std::string& host, const ::std::string& visitor, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__clearLastVisit_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->clearLastVisit(host, visitor, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::getLastVisitEx(const ::std::string& host, const ::std::string& visitor, ::Ice::Int groupId, ::Ice::Int addServiceNum, ::IMSINNER::SHMSBuddyStatus6& hostess, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__getLastVisitEx_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getLastVisitEx(host, visitor, groupId, addServiceNum, hostess, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::HmsLogin(const ::std::string& uid, ::Ice::StringSeq& cids, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__HmsLogin_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->HmsLogin(uid, cids, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::getWorkingBuddy(const ::std::string& uid, ::Ice::StringSeq& cids, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__getWorkingBuddy_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getWorkingBuddy(uid, cids, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::setWaiterDenyService(const ::std::string& uid, ::Ice::Int status, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__setWaiterDenyService_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->setWaiterDenyService(uid, status, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::setLastVisit(const ::std::string& host, const ::std::string& visitor, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__setLastVisit_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->setLastVisit(host, visitor, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::setLastVisitandSrvnum(const ::std::string& host, const ::std::string& visitor, ::Ice::Int srvnum, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__setLastVisitandSrvnum_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->setLastVisitandSrvnum(host, visitor, srvnum, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::HmsLogin6(const ::std::string& uid, ::Ice::Int imsid, ::Ice::StringSeq& cids, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__HmsLogin6_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->HmsLogin6(uid, imsid, cids, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::setWaiterServerID(const ::std::string& uid, ::Ice::Int status, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__setWaiterServerID_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->setWaiterServerID(uid, status, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::isFakeOnline(const ::std::string& uid, bool& status, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__isFakeOnline_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->isFakeOnline(uid, status, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::setWaiterStatus(const ::std::string& uid, ::Ice::Int status, ::Ice::Int imsid, bool& bneedsendfakestatus, ::Ice::Int& before, ::Ice::Int& afteronlinestatus, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__setWaiterStatus_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->setWaiterStatus(uid, status, imsid, bneedsendfakestatus, before, afteronlinestatus, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::getHelperstatus(const ::std::string& uid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__getHelperstatus_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getHelperstatus(uid, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::getOfflineHelpers(const ::std::string& uid, ::Ice::StringSeq& childs, ::Ice::IntSeq& childsimsids, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__getOfflineHelpers_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getOfflineHelpers(uid, childs, childsimsids, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::getAllOtherHelpers(const ::std::string& uid, ::Ice::StringSeq& childs, ::Ice::IntSeq& childsimsids, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__getAllOtherHelpers_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getAllOtherHelpers(uid, childs, childsimsids, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::setMaxServiceNum(const ::std::string& uid, const ::std::string& childid, ::Ice::Int num, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__setMaxServiceNum_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->setMaxServiceNum(uid, childid, num, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::chgATMHelpersServiceNum(const ::std::string& uid, const ::std::string& childid, const ::std::string& contactid, ::Ice::Int type, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__chgATMHelpersServiceNum_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->chgATMHelpersServiceNum(uid, childid, contactid, type, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::HmsLoginOff(const ::std::string& uid, const ::std::string& childid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__HmsLoginOff_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->HmsLoginOff(uid, childid, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::HmsLoginOff6(const ::std::string& uid, const ::std::string& childid, ::Ice::Int imsid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__HmsLoginOff6_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->HmsLoginOff6(uid, childid, imsid, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::getBuddyStatus(const ::std::string& uid, ::IMSINNER::SHMSBuddyStatusSeq& buddystatus, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__getBuddyStatus_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getBuddyStatus(uid, buddystatus, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::EHmsLogin6(const ::std::string& uid, const ::std::string& fid, ::Ice::Int imsid, ::Ice::Int logintype, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__EHmsLogin6_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->EHmsLogin6(uid, fid, imsid, logintype, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::getBuddyStatus6(const ::std::string& uid, const ::std::string& fid, ::IMSINNER::SHMSBuddyStatusSeq6& buddystatus, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__getBuddyStatus6_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getBuddyStatus6(uid, fid, buddystatus, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::getForWardList(const ::std::string& uid, const ::std::string& fid, ::IMSINNER::SHMSBuddyStatusSeq6& buddystatus, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__getForWardList_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getForWardList(uid, fid, buddystatus, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::forWardServiceUser(const ::std::string& uid, const ::std::string& fid, const ::std::string& conatctid, const ::std::string& tochildid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__forWardServiceUser_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->forWardServiceUser(uid, fid, conatctid, tochildid, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::closeHMSSession(const ::std::string& uid, const ::std::string& fid, const ::std::string& conatctid, ::Ice::Int type, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__closeHMSSession_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->closeHMSSession(uid, fid, conatctid, type, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::NotifyHMSMsg(const ::std::string& fromid, const ::std::string& uid, ::Ice::Int srvid, ::Ice::Int type, const ::std::string& msg, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__NotifyHMSMsg_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->NotifyHMSMsg(fromid, uid, srvid, type, msg, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::SendHMSMsg(const ::std::string& fid, const ::std::string& uid, const ::std::string& conatctid, ::Ice::Int srvid, ::Ice::Int type, const ::std::string& msg, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__SendHMSMsg_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->SendHMSMsg(fid, uid, conatctid, srvid, type, msg, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::changeUserStatus(const ::std::string& uid, ::Ice::Int Stauts, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__changeUserStatus_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->changeUserStatus(uid, Stauts, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::getESShuntStatus(const ::std::string& uid, ::std::string& shunt, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__getESShuntStatus_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getESShuntStatus(uid, shunt, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::setESShuntStatus(const ::std::string& uid, const ::std::string& shunt, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__setESShuntStatus_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->setESShuntStatus(uid, shunt, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::getMaxESReceptNum(const ::std::string& uid, ::Ice::Int groupId, ::IMSINNER::SICEReceptNumSeq& eserviceList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__getMaxESReceptNum_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getMaxESReceptNum(uid, groupId, eserviceList, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::setMaxESReceptNum(const ::std::string& uid, ::Ice::Int groupId, const ::IMSINNER::SICEReceptNumSeq& eserviceList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__setMaxESReceptNum_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->setMaxESReceptNum(uid, groupId, eserviceList, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::getESPriority(const ::std::string& uid, ::Ice::Int groupId, ::IMSINNER::SICEReceptPrioritySeq& eserviceList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__getESPriority_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getESPriority(uid, groupId, eserviceList, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::setESPriority(const ::std::string& uid, ::Ice::Int groupId, const ::IMSINNER::SICEReceptPrioritySeq& eserviceList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__setESPriority_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->setESPriority(uid, groupId, eserviceList, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::getESRecvOffMsg(const ::std::string& uid, ::Ice::Int groupId, ::IMSINNER::SICERecvOffMsgSeq& eserviceList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__getESRecvOffMsg_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getESRecvOffMsg(uid, groupId, eserviceList, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::setESRecvOffMsg(const ::std::string& uid, ::Ice::Int groupId, const ::IMSINNER::SICERecvOffMsgSeq& eserviceList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__setESRecvOffMsg_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->setESRecvOffMsg(uid, groupId, eserviceList, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::getESGroupList(const ::std::string& uid, ::Ice::IntSeq& groupList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__getESGroupList_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getESGroupList(uid, groupList, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::insertESGroupInfo(const ::std::string& uid, const ::IMSINNER::SICEESGroupInfo& groupInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__insertESGroupInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->insertESGroupInfo(uid, groupInfo, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::updateESGroupInfo(const ::std::string& uid, const ::IMSINNER::SICEESGroupInfo& group, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__updateESGroupInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->updateESGroupInfo(uid, group, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::delESGroup(const ::std::string& uid, ::Ice::Int groupid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__delESGroup_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->delESGroup(uid, groupid, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::getESGroupInfo(const ::std::string& uid, ::IMSINNER::SICEESGroupInfoSeq& groupList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__getESGroupInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getESGroupInfo(uid, groupList, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::getESGroupInfoByID(const ::std::string& uid, ::Ice::Int groupId, ::IMSINNER::SICEESGroupInfo& groupInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__getESGroupInfoByID_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getESGroupInfoByID(uid, groupId, groupInfo, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::getESUnJoinGroup(const ::std::string& uid, ::Ice::StringSeq& eserviceList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__getESUnJoinGroup_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getESUnJoinGroup(uid, eserviceList, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::getESReceptList(const ::std::string& uid, ::Ice::Int groupId, ::IMSINNER::SICEReceptStatusSeq& eserviceList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__getESReceptList_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getESReceptList(uid, groupId, eserviceList, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::checkESRole(const ::std::string& uid, ::Ice::Int& groupId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__checkESRole_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->checkESRole(uid, groupId, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::getChildShuntInfos(const ::std::string& uid, ::IMSINNER::SICEChildShuntInfoSeq& childInfos, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__getChildShuntInfos_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getChildShuntInfos(uid, childInfos, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::setChildShuntInfos(const ::std::string& uid, const ::IMSINNER::SICEChildShuntInfoSeq& childInfos, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__setChildShuntInfos_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->setChildShuntInfos(uid, childInfos, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::getAgentChild(const ::std::string& uid, ::std::string& agentId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__getAgentChild_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getAgentChild(uid, agentId, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::setAgentChild(const ::std::string& uid, const ::std::string& agentId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__setAgentChild_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->setAgentChild(uid, agentId, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::getAgentList(const ::std::string& uid, ::Ice::StringSeq& agentIds, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__getAgentList_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->getAgentList(uid, agentIds, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::Int
IceDelegateD::IMSINNER::IMSICEService::helperMsg(const ::std::string& uid, const ::std::string& targetUid, const ::std::string& message, ::Ice::Int originalSid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __IMSINNER__IMSICEService__helperMsg_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::IMSINNER::IMSICEService* __servant = dynamic_cast< ::IMSINNER::IMSICEService*>(__direct.servant().get());
            if(!__servant)
            {
                ::Ice::OperationNotExistException __opEx(__FILE__, __LINE__);
                __opEx.id = __current.id;
                __opEx.facet = __current.facet;
                __opEx.operation = __current.operation;
                throw __opEx;
            }
            try
            {
                __ret = __servant->helperMsg(uid, targetUid, message, originalSid, __current);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
        return __ret;
    }
}

::Ice::ObjectPtr
IMSINNER::IMSICEService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __IMSINNER__IMSICEService_ids[2] =
{
    "::IMSINNER::IMSICEService",
    "::Ice::Object"
};

bool
IMSINNER::IMSICEService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__IMSINNER__IMSICEService_ids, __IMSINNER__IMSICEService_ids + 2, _s);
}

::std::vector< ::std::string>
IMSINNER::IMSICEService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__IMSINNER__IMSICEService_ids[0], &__IMSINNER__IMSICEService_ids[2]);
}

const ::std::string&
IMSINNER::IMSICEService::ice_id(const ::Ice::Current&) const
{
    return __IMSINNER__IMSICEService_ids[0];
}

const ::std::string&
IMSINNER::IMSICEService::ice_staticId()
{
    return __IMSINNER__IMSICEService_ids[0];
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___getLastVisit(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string host;
    ::std::string visitor;
    __is->read(host);
    __is->read(visitor);
    ::std::string hostess;
    ::Ice::Int __ret = getLastVisit(host, visitor, hostess, __current);
    __os->write(hostess);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___setShareContact(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::Ice::StringSeq cids;
    ::Ice::Int value;
    __is->read(uid);
    __is->read(cids);
    __is->read(value);
    ::Ice::Int __ret = setShareContact(uid, cids, value, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___clearLastVisit(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string host;
    ::std::string visitor;
    __is->read(host);
    __is->read(visitor);
    ::Ice::Int __ret = clearLastVisit(host, visitor, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___getLastVisitEx(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string host;
    ::std::string visitor;
    ::Ice::Int groupId;
    ::Ice::Int addServiceNum;
    __is->read(host);
    __is->read(visitor);
    __is->read(groupId);
    __is->read(addServiceNum);
    ::IMSINNER::SHMSBuddyStatus6 hostess;
    ::Ice::Int __ret = getLastVisitEx(host, visitor, groupId, addServiceNum, hostess, __current);
    hostess.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___HmsLogin(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::Ice::StringSeq cids;
    ::Ice::Int __ret = HmsLogin(uid, cids, __current);
    if(cids.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&cids[0], &cids[0] + cids.size());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___getWorkingBuddy(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::Ice::StringSeq cids;
    ::Ice::Int __ret = getWorkingBuddy(uid, cids, __current);
    if(cids.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&cids[0], &cids[0] + cids.size());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___setWaiterDenyService(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::Ice::Int status;
    __is->read(uid);
    __is->read(status);
    ::Ice::Int __ret = setWaiterDenyService(uid, status, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___setLastVisit(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string host;
    ::std::string visitor;
    __is->read(host);
    __is->read(visitor);
    ::Ice::Int __ret = setLastVisit(host, visitor, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___setLastVisitandSrvnum(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string host;
    ::std::string visitor;
    ::Ice::Int srvnum;
    __is->read(host);
    __is->read(visitor);
    __is->read(srvnum);
    ::Ice::Int __ret = setLastVisitandSrvnum(host, visitor, srvnum, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___HmsLogin6(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::Ice::Int imsid;
    __is->read(uid);
    __is->read(imsid);
    ::Ice::StringSeq cids;
    ::Ice::Int __ret = HmsLogin6(uid, imsid, cids, __current);
    if(cids.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&cids[0], &cids[0] + cids.size());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___setWaiterServerID(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::Ice::Int status;
    __is->read(uid);
    __is->read(status);
    ::Ice::Int __ret = setWaiterServerID(uid, status, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___isFakeOnline(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    bool status;
    ::Ice::Int __ret = isFakeOnline(uid, status, __current);
    __os->write(status);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___setWaiterStatus(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::Ice::Int status;
    ::Ice::Int imsid;
    __is->read(uid);
    __is->read(status);
    __is->read(imsid);
    bool bneedsendfakestatus;
    ::Ice::Int before;
    ::Ice::Int afteronlinestatus;
    ::Ice::Int __ret = setWaiterStatus(uid, status, imsid, bneedsendfakestatus, before, afteronlinestatus, __current);
    __os->write(bneedsendfakestatus);
    __os->write(before);
    __os->write(afteronlinestatus);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___getHelperstatus(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::Ice::Int __ret = getHelperstatus(uid, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___getOfflineHelpers(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::Ice::StringSeq childs;
    ::Ice::IntSeq childsimsids;
    ::Ice::Int __ret = getOfflineHelpers(uid, childs, childsimsids, __current);
    if(childs.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&childs[0], &childs[0] + childs.size());
    }
    if(childsimsids.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&childsimsids[0], &childsimsids[0] + childsimsids.size());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___getAllOtherHelpers(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::Ice::StringSeq childs;
    ::Ice::IntSeq childsimsids;
    ::Ice::Int __ret = getAllOtherHelpers(uid, childs, childsimsids, __current);
    if(childs.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&childs[0], &childs[0] + childs.size());
    }
    if(childsimsids.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&childsimsids[0], &childsimsids[0] + childsimsids.size());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___setMaxServiceNum(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string childid;
    ::Ice::Int num;
    __is->read(uid);
    __is->read(childid);
    __is->read(num);
    ::Ice::Int __ret = setMaxServiceNum(uid, childid, num, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___chgATMHelpersServiceNum(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string childid;
    ::std::string contactid;
    ::Ice::Int type;
    __is->read(uid);
    __is->read(childid);
    __is->read(contactid);
    __is->read(type);
    ::Ice::Int __ret = chgATMHelpersServiceNum(uid, childid, contactid, type, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___HmsLoginOff(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string childid;
    __is->read(uid);
    __is->read(childid);
    ::Ice::Int __ret = HmsLoginOff(uid, childid, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___HmsLoginOff6(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string childid;
    ::Ice::Int imsid;
    __is->read(uid);
    __is->read(childid);
    __is->read(imsid);
    ::Ice::Int __ret = HmsLoginOff6(uid, childid, imsid, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___getBuddyStatus(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::IMSINNER::SHMSBuddyStatusSeq buddystatus;
    ::Ice::Int __ret = getBuddyStatus(uid, buddystatus, __current);
    if(buddystatus.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::IMSINNER::__write(__os, &buddystatus[0], &buddystatus[0] + buddystatus.size(), ::IMSINNER::__U__SHMSBuddyStatusSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___EHmsLogin6(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string fid;
    ::Ice::Int imsid;
    ::Ice::Int logintype;
    __is->read(uid);
    __is->read(fid);
    __is->read(imsid);
    __is->read(logintype);
    ::Ice::Int __ret = EHmsLogin6(uid, fid, imsid, logintype, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___getBuddyStatus6(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string fid;
    __is->read(uid);
    __is->read(fid);
    ::IMSINNER::SHMSBuddyStatusSeq6 buddystatus;
    ::Ice::Int __ret = getBuddyStatus6(uid, fid, buddystatus, __current);
    if(buddystatus.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::IMSINNER::__write(__os, &buddystatus[0], &buddystatus[0] + buddystatus.size(), ::IMSINNER::__U__SHMSBuddyStatusSeq6());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___getForWardList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string fid;
    __is->read(uid);
    __is->read(fid);
    ::IMSINNER::SHMSBuddyStatusSeq6 buddystatus;
    ::Ice::Int __ret = getForWardList(uid, fid, buddystatus, __current);
    if(buddystatus.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::IMSINNER::__write(__os, &buddystatus[0], &buddystatus[0] + buddystatus.size(), ::IMSINNER::__U__SHMSBuddyStatusSeq6());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___forWardServiceUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string fid;
    ::std::string conatctid;
    ::std::string tochildid;
    __is->read(uid);
    __is->read(fid);
    __is->read(conatctid);
    __is->read(tochildid);
    ::Ice::Int __ret = forWardServiceUser(uid, fid, conatctid, tochildid, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___closeHMSSession(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string fid;
    ::std::string conatctid;
    ::Ice::Int type;
    __is->read(uid);
    __is->read(fid);
    __is->read(conatctid);
    __is->read(type);
    ::Ice::Int __ret = closeHMSSession(uid, fid, conatctid, type, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___NotifyHMSMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string fromid;
    ::std::string uid;
    ::Ice::Int srvid;
    ::Ice::Int type;
    ::std::string msg;
    __is->read(fromid);
    __is->read(uid);
    __is->read(srvid);
    __is->read(type);
    __is->read(msg);
    ::Ice::Int __ret = NotifyHMSMsg(fromid, uid, srvid, type, msg, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___SendHMSMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string fid;
    ::std::string uid;
    ::std::string conatctid;
    ::Ice::Int srvid;
    ::Ice::Int type;
    ::std::string msg;
    __is->read(fid);
    __is->read(uid);
    __is->read(conatctid);
    __is->read(srvid);
    __is->read(type);
    __is->read(msg);
    ::Ice::Int __ret = SendHMSMsg(fid, uid, conatctid, srvid, type, msg, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___changeUserStatus(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::Ice::Int Stauts;
    __is->read(uid);
    __is->read(Stauts);
    ::Ice::Int __ret = changeUserStatus(uid, Stauts, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___getESShuntStatus(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::std::string shunt;
    ::Ice::Int __ret = getESShuntStatus(uid, shunt, __current);
    __os->write(shunt);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___setESShuntStatus(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string shunt;
    __is->read(uid);
    __is->read(shunt);
    ::Ice::Int __ret = setESShuntStatus(uid, shunt, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___getMaxESReceptNum(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::Ice::Int groupId;
    __is->read(uid);
    __is->read(groupId);
    ::IMSINNER::SICEReceptNumSeq eserviceList;
    ::Ice::Int __ret = getMaxESReceptNum(uid, groupId, eserviceList, __current);
    if(eserviceList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::IMSINNER::__write(__os, &eserviceList[0], &eserviceList[0] + eserviceList.size(), ::IMSINNER::__U__SICEReceptNumSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___setMaxESReceptNum(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::Ice::Int groupId;
    ::IMSINNER::SICEReceptNumSeq eserviceList;
    __is->read(uid);
    __is->read(groupId);
    ::IMSINNER::__read(__is, eserviceList, ::IMSINNER::__U__SICEReceptNumSeq());
    ::Ice::Int __ret = setMaxESReceptNum(uid, groupId, eserviceList, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___getESPriority(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::Ice::Int groupId;
    __is->read(uid);
    __is->read(groupId);
    ::IMSINNER::SICEReceptPrioritySeq eserviceList;
    ::Ice::Int __ret = getESPriority(uid, groupId, eserviceList, __current);
    if(eserviceList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::IMSINNER::__write(__os, &eserviceList[0], &eserviceList[0] + eserviceList.size(), ::IMSINNER::__U__SICEReceptPrioritySeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___setESPriority(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::Ice::Int groupId;
    ::IMSINNER::SICEReceptPrioritySeq eserviceList;
    __is->read(uid);
    __is->read(groupId);
    ::IMSINNER::__read(__is, eserviceList, ::IMSINNER::__U__SICEReceptPrioritySeq());
    ::Ice::Int __ret = setESPriority(uid, groupId, eserviceList, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___getESRecvOffMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::Ice::Int groupId;
    __is->read(uid);
    __is->read(groupId);
    ::IMSINNER::SICERecvOffMsgSeq eserviceList;
    ::Ice::Int __ret = getESRecvOffMsg(uid, groupId, eserviceList, __current);
    if(eserviceList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::IMSINNER::__write(__os, &eserviceList[0], &eserviceList[0] + eserviceList.size(), ::IMSINNER::__U__SICERecvOffMsgSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___setESRecvOffMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::Ice::Int groupId;
    ::IMSINNER::SICERecvOffMsgSeq eserviceList;
    __is->read(uid);
    __is->read(groupId);
    ::IMSINNER::__read(__is, eserviceList, ::IMSINNER::__U__SICERecvOffMsgSeq());
    ::Ice::Int __ret = setESRecvOffMsg(uid, groupId, eserviceList, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___getESGroupList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::Ice::IntSeq groupList;
    ::Ice::Int __ret = getESGroupList(uid, groupList, __current);
    if(groupList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&groupList[0], &groupList[0] + groupList.size());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___insertESGroupInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::IMSINNER::SICEESGroupInfo groupInfo;
    __is->read(uid);
    groupInfo.__read(__is);
    ::Ice::Int __ret = insertESGroupInfo(uid, groupInfo, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___updateESGroupInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::IMSINNER::SICEESGroupInfo group;
    __is->read(uid);
    group.__read(__is);
    ::Ice::Int __ret = updateESGroupInfo(uid, group, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___delESGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::Ice::Int groupid;
    __is->read(uid);
    __is->read(groupid);
    ::Ice::Int __ret = delESGroup(uid, groupid, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___getESGroupInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::IMSINNER::SICEESGroupInfoSeq groupList;
    ::Ice::Int __ret = getESGroupInfo(uid, groupList, __current);
    if(groupList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::IMSINNER::__write(__os, &groupList[0], &groupList[0] + groupList.size(), ::IMSINNER::__U__SICEESGroupInfoSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___getESGroupInfoByID(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::Ice::Int groupId;
    __is->read(uid);
    __is->read(groupId);
    ::IMSINNER::SICEESGroupInfo groupInfo;
    ::Ice::Int __ret = getESGroupInfoByID(uid, groupId, groupInfo, __current);
    groupInfo.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___getESUnJoinGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::Ice::StringSeq eserviceList;
    ::Ice::Int __ret = getESUnJoinGroup(uid, eserviceList, __current);
    if(eserviceList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&eserviceList[0], &eserviceList[0] + eserviceList.size());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___getESReceptList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::Ice::Int groupId;
    __is->read(uid);
    __is->read(groupId);
    ::IMSINNER::SICEReceptStatusSeq eserviceList;
    ::Ice::Int __ret = getESReceptList(uid, groupId, eserviceList, __current);
    if(eserviceList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::IMSINNER::__write(__os, &eserviceList[0], &eserviceList[0] + eserviceList.size(), ::IMSINNER::__U__SICEReceptStatusSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___checkESRole(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::Ice::Int groupId;
    ::Ice::Int __ret = checkESRole(uid, groupId, __current);
    __os->write(groupId);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___getChildShuntInfos(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::IMSINNER::SICEChildShuntInfoSeq childInfos;
    ::Ice::Int __ret = getChildShuntInfos(uid, childInfos, __current);
    if(childInfos.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::IMSINNER::__write(__os, &childInfos[0], &childInfos[0] + childInfos.size(), ::IMSINNER::__U__SICEChildShuntInfoSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___setChildShuntInfos(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::IMSINNER::SICEChildShuntInfoSeq childInfos;
    __is->read(uid);
    ::IMSINNER::__read(__is, childInfos, ::IMSINNER::__U__SICEChildShuntInfoSeq());
    ::Ice::Int __ret = setChildShuntInfos(uid, childInfos, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___getAgentChild(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::std::string agentId;
    ::Ice::Int __ret = getAgentChild(uid, agentId, __current);
    __os->write(agentId);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___setAgentChild(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string agentId;
    __is->read(uid);
    __is->read(agentId);
    ::Ice::Int __ret = setAgentChild(uid, agentId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___getAgentList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::Ice::StringSeq agentIds;
    ::Ice::Int __ret = getAgentList(uid, agentIds, __current);
    if(agentIds.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&agentIds[0], &agentIds[0] + agentIds.size());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::___helperMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string targetUid;
    ::std::string message;
    ::Ice::Int originalSid;
    __is->read(uid);
    __is->read(targetUid);
    __is->read(message);
    __is->read(originalSid);
    ::Ice::Int __ret = helperMsg(uid, targetUid, message, originalSid, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __IMSINNER__IMSICEService_all[] =
{
    "EHmsLogin6",
    "HmsLogin",
    "HmsLogin6",
    "HmsLoginOff",
    "HmsLoginOff6",
    "NotifyHMSMsg",
    "SendHMSMsg",
    "changeUserStatus",
    "checkESRole",
    "chgATMHelpersServiceNum",
    "clearLastVisit",
    "closeHMSSession",
    "delESGroup",
    "forWardServiceUser",
    "getAgentChild",
    "getAgentList",
    "getAllOtherHelpers",
    "getBuddyStatus",
    "getBuddyStatus6",
    "getChildShuntInfos",
    "getESGroupInfo",
    "getESGroupInfoByID",
    "getESGroupList",
    "getESPriority",
    "getESReceptList",
    "getESRecvOffMsg",
    "getESShuntStatus",
    "getESUnJoinGroup",
    "getForWardList",
    "getHelperstatus",
    "getLastVisit",
    "getLastVisitEx",
    "getMaxESReceptNum",
    "getOfflineHelpers",
    "getWorkingBuddy",
    "helperMsg",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "insertESGroupInfo",
    "isFakeOnline",
    "setAgentChild",
    "setChildShuntInfos",
    "setESPriority",
    "setESRecvOffMsg",
    "setESShuntStatus",
    "setLastVisit",
    "setLastVisitandSrvnum",
    "setMaxESReceptNum",
    "setMaxServiceNum",
    "setShareContact",
    "setWaiterDenyService",
    "setWaiterServerID",
    "setWaiterStatus",
    "updateESGroupInfo"
};

::IceInternal::DispatchStatus
IMSINNER::IMSICEService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__IMSINNER__IMSICEService_all, __IMSINNER__IMSICEService_all + 56, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __IMSINNER__IMSICEService_all)
    {
        case 0:
        {
            return ___EHmsLogin6(in, current);
        }
        case 1:
        {
            return ___HmsLogin(in, current);
        }
        case 2:
        {
            return ___HmsLogin6(in, current);
        }
        case 3:
        {
            return ___HmsLoginOff(in, current);
        }
        case 4:
        {
            return ___HmsLoginOff6(in, current);
        }
        case 5:
        {
            return ___NotifyHMSMsg(in, current);
        }
        case 6:
        {
            return ___SendHMSMsg(in, current);
        }
        case 7:
        {
            return ___changeUserStatus(in, current);
        }
        case 8:
        {
            return ___checkESRole(in, current);
        }
        case 9:
        {
            return ___chgATMHelpersServiceNum(in, current);
        }
        case 10:
        {
            return ___clearLastVisit(in, current);
        }
        case 11:
        {
            return ___closeHMSSession(in, current);
        }
        case 12:
        {
            return ___delESGroup(in, current);
        }
        case 13:
        {
            return ___forWardServiceUser(in, current);
        }
        case 14:
        {
            return ___getAgentChild(in, current);
        }
        case 15:
        {
            return ___getAgentList(in, current);
        }
        case 16:
        {
            return ___getAllOtherHelpers(in, current);
        }
        case 17:
        {
            return ___getBuddyStatus(in, current);
        }
        case 18:
        {
            return ___getBuddyStatus6(in, current);
        }
        case 19:
        {
            return ___getChildShuntInfos(in, current);
        }
        case 20:
        {
            return ___getESGroupInfo(in, current);
        }
        case 21:
        {
            return ___getESGroupInfoByID(in, current);
        }
        case 22:
        {
            return ___getESGroupList(in, current);
        }
        case 23:
        {
            return ___getESPriority(in, current);
        }
        case 24:
        {
            return ___getESReceptList(in, current);
        }
        case 25:
        {
            return ___getESRecvOffMsg(in, current);
        }
        case 26:
        {
            return ___getESShuntStatus(in, current);
        }
        case 27:
        {
            return ___getESUnJoinGroup(in, current);
        }
        case 28:
        {
            return ___getForWardList(in, current);
        }
        case 29:
        {
            return ___getHelperstatus(in, current);
        }
        case 30:
        {
            return ___getLastVisit(in, current);
        }
        case 31:
        {
            return ___getLastVisitEx(in, current);
        }
        case 32:
        {
            return ___getMaxESReceptNum(in, current);
        }
        case 33:
        {
            return ___getOfflineHelpers(in, current);
        }
        case 34:
        {
            return ___getWorkingBuddy(in, current);
        }
        case 35:
        {
            return ___helperMsg(in, current);
        }
        case 36:
        {
            return ___ice_id(in, current);
        }
        case 37:
        {
            return ___ice_ids(in, current);
        }
        case 38:
        {
            return ___ice_isA(in, current);
        }
        case 39:
        {
            return ___ice_ping(in, current);
        }
        case 40:
        {
            return ___insertESGroupInfo(in, current);
        }
        case 41:
        {
            return ___isFakeOnline(in, current);
        }
        case 42:
        {
            return ___setAgentChild(in, current);
        }
        case 43:
        {
            return ___setChildShuntInfos(in, current);
        }
        case 44:
        {
            return ___setESPriority(in, current);
        }
        case 45:
        {
            return ___setESRecvOffMsg(in, current);
        }
        case 46:
        {
            return ___setESShuntStatus(in, current);
        }
        case 47:
        {
            return ___setLastVisit(in, current);
        }
        case 48:
        {
            return ___setLastVisitandSrvnum(in, current);
        }
        case 49:
        {
            return ___setMaxESReceptNum(in, current);
        }
        case 50:
        {
            return ___setMaxServiceNum(in, current);
        }
        case 51:
        {
            return ___setShareContact(in, current);
        }
        case 52:
        {
            return ___setWaiterDenyService(in, current);
        }
        case 53:
        {
            return ___setWaiterServerID(in, current);
        }
        case 54:
        {
            return ___setWaiterStatus(in, current);
        }
        case 55:
        {
            return ___updateESGroupInfo(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
IMSINNER::IMSICEService::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
IMSINNER::IMSICEService::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
IMSINNER::IMSICEService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type IMSINNER::IMSICEService was not generated with stream support";
    throw ex;
}

void
IMSINNER::IMSICEService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type IMSINNER::IMSICEService was not generated with stream support";
    throw ex;
}

void 
IMSINNER::__patch__IMSICEServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::IMSINNER::IMSICEServicePtr* p = static_cast< ::IMSINNER::IMSICEServicePtr*>(__addr);
    assert(p);
    *p = ::IMSINNER::IMSICEServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::IMSINNER::IMSICEService::ice_staticId();
        throw e;
    }
}

bool
IMSINNER::operator==(const ::IMSINNER::IMSICEService& l, const ::IMSINNER::IMSICEService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
IMSINNER::operator!=(const ::IMSINNER::IMSICEService& l, const ::IMSINNER::IMSICEService& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
IMSINNER::operator<(const ::IMSINNER::IMSICEService& l, const ::IMSINNER::IMSICEService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
IMSINNER::operator<=(const ::IMSINNER::IMSICEService& l, const ::IMSINNER::IMSICEService& r)
{
    return l < r || l == r;
}

bool
IMSINNER::operator>(const ::IMSINNER::IMSICEService& l, const ::IMSINNER::IMSICEService& r)
{
    return !(l < r) && !(l == r);
}

bool
IMSINNER::operator>=(const ::IMSINNER::IMSICEService& l, const ::IMSINNER::IMSICEService& r)
{
    return !(l < r);
}
