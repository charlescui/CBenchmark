// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `dbtbsservice60.ice'

#ifndef __dbtbsservice60_h__
#define __dbtbsservice60_h__

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
#include <dbtbsstructs60.h>
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

namespace ALiIMDBTribe
{

class TribeDBProxyMgr;
bool operator==(const TribeDBProxyMgr&, const TribeDBProxyMgr&);
bool operator!=(const TribeDBProxyMgr&, const TribeDBProxyMgr&);
bool operator<(const TribeDBProxyMgr&, const TribeDBProxyMgr&);
bool operator<=(const TribeDBProxyMgr&, const TribeDBProxyMgr&);
bool operator>(const TribeDBProxyMgr&, const TribeDBProxyMgr&);
bool operator>=(const TribeDBProxyMgr&, const TribeDBProxyMgr&);

}

}

namespace ALiIMDBTribe
{

class TribeDBProxyMgr;
bool operator==(const TribeDBProxyMgr&, const TribeDBProxyMgr&);
bool operator!=(const TribeDBProxyMgr&, const TribeDBProxyMgr&);
bool operator<(const TribeDBProxyMgr&, const TribeDBProxyMgr&);
bool operator<=(const TribeDBProxyMgr&, const TribeDBProxyMgr&);
bool operator>(const TribeDBProxyMgr&, const TribeDBProxyMgr&);
bool operator>=(const TribeDBProxyMgr&, const TribeDBProxyMgr&);

}

namespace IceInternal
{

void incRef(::ALiIMDBTribe::TribeDBProxyMgr*);
void decRef(::ALiIMDBTribe::TribeDBProxyMgr*);

void incRef(::IceProxy::ALiIMDBTribe::TribeDBProxyMgr*);
void decRef(::IceProxy::ALiIMDBTribe::TribeDBProxyMgr*);

}

namespace ALiIMDBTribe
{

typedef ::IceInternal::Handle< ::ALiIMDBTribe::TribeDBProxyMgr> TribeDBProxyMgrPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::ALiIMDBTribe::TribeDBProxyMgr> TribeDBProxyMgrPrx;

void __write(::IceInternal::BasicStream*, const TribeDBProxyMgrPrx&);
void __read(::IceInternal::BasicStream*, TribeDBProxyMgrPrx&);
void __write(::IceInternal::BasicStream*, const TribeDBProxyMgrPtr&);
void __patch__TribeDBProxyMgrPtr(void*, ::Ice::ObjectPtr&);

void __addObject(const TribeDBProxyMgrPtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const TribeDBProxyMgrPtr&);
void __decRefUnsafe(const TribeDBProxyMgrPtr&);
void __clearHandleUnsafe(TribeDBProxyMgrPtr&);

}

namespace ALiIMDBTribe
{

}

namespace IceProxy
{

namespace ALiIMDBTribe
{

class TribeDBProxyMgr : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int DBStartTribe(const ::ALiIMDBTribe::STribeInfo& tribeInfo)
    {
        return DBStartTribe(tribeInfo, 0);
    }
    ::Ice::Int DBStartTribe(const ::ALiIMDBTribe::STribeInfo& tribeInfo, const ::Ice::Context& __ctx)
    {
        return DBStartTribe(tribeInfo, &__ctx);
    }
    
private:

    ::Ice::Int DBStartTribe(const ::ALiIMDBTribe::STribeInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetTribeInfo(::Ice::Int tribeId, ::ALiIMDBTribe::STribeInfo& tribeInfo)
    {
        return DBGetTribeInfo(tribeId, tribeInfo, 0);
    }
    ::Ice::Int DBGetTribeInfo(::Ice::Int tribeId, ::ALiIMDBTribe::STribeInfo& tribeInfo, const ::Ice::Context& __ctx)
    {
        return DBGetTribeInfo(tribeId, tribeInfo, &__ctx);
    }
    
private:

    ::Ice::Int DBGetTribeInfo(::Ice::Int, ::ALiIMDBTribe::STribeInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBUpdateTribeInfo(const ::ALiIMDBTribe::STribeInfo& tribeInfo)
    {
        return DBUpdateTribeInfo(tribeInfo, 0);
    }
    ::Ice::Int DBUpdateTribeInfo(const ::ALiIMDBTribe::STribeInfo& tribeInfo, const ::Ice::Context& __ctx)
    {
        return DBUpdateTribeInfo(tribeInfo, &__ctx);
    }
    
private:

    ::Ice::Int DBUpdateTribeInfo(const ::ALiIMDBTribe::STribeInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBUpdateTribeMaster(::Ice::Int tribeId, const ::std::string& masterId)
    {
        return DBUpdateTribeMaster(tribeId, masterId, 0);
    }
    ::Ice::Int DBUpdateTribeMaster(::Ice::Int tribeId, const ::std::string& masterId, const ::Ice::Context& __ctx)
    {
        return DBUpdateTribeMaster(tribeId, masterId, &__ctx);
    }
    
private:

    ::Ice::Int DBUpdateTribeMaster(::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetTribeActiveDegree(::Ice::Int tribeId, ::Ice::Int& onlineTimes, ::Ice::Double& onlineDegree, ::Ice::Int& discussDegree, ::Ice::Double& rewardDegree, ::Ice::Int& masterOffer, ::Ice::Double& totalDegree)
    {
        return DBGetTribeActiveDegree(tribeId, onlineTimes, onlineDegree, discussDegree, rewardDegree, masterOffer, totalDegree, 0);
    }
    ::Ice::Int DBGetTribeActiveDegree(::Ice::Int tribeId, ::Ice::Int& onlineTimes, ::Ice::Double& onlineDegree, ::Ice::Int& discussDegree, ::Ice::Double& rewardDegree, ::Ice::Int& masterOffer, ::Ice::Double& totalDegree, const ::Ice::Context& __ctx)
    {
        return DBGetTribeActiveDegree(tribeId, onlineTimes, onlineDegree, discussDegree, rewardDegree, masterOffer, totalDegree, &__ctx);
    }
    
private:

    ::Ice::Int DBGetTribeActiveDegree(::Ice::Int, ::Ice::Int&, ::Ice::Double&, ::Ice::Int&, ::Ice::Double&, ::Ice::Int&, ::Ice::Double&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBUpdateTribeActDegree(::Ice::Int tribeId, ::Ice::Double onlineDegree, ::Ice::Int discussDegree, ::Ice::Double rewardDegree, ::Ice::Double totalDegree)
    {
        return DBUpdateTribeActDegree(tribeId, onlineDegree, discussDegree, rewardDegree, totalDegree, 0);
    }
    ::Ice::Int DBUpdateTribeActDegree(::Ice::Int tribeId, ::Ice::Double onlineDegree, ::Ice::Int discussDegree, ::Ice::Double rewardDegree, ::Ice::Double totalDegree, const ::Ice::Context& __ctx)
    {
        return DBUpdateTribeActDegree(tribeId, onlineDegree, discussDegree, rewardDegree, totalDegree, &__ctx);
    }
    
private:

    ::Ice::Int DBUpdateTribeActDegree(::Ice::Int, ::Ice::Double, ::Ice::Int, ::Ice::Double, ::Ice::Double, const ::Ice::Context*);
    
public:

    ::Ice::Int DBDeleteTribe(::Ice::Int tribeId)
    {
        return DBDeleteTribe(tribeId, 0);
    }
    ::Ice::Int DBDeleteTribe(::Ice::Int tribeId, const ::Ice::Context& __ctx)
    {
        return DBDeleteTribe(tribeId, &__ctx);
    }
    
private:

    ::Ice::Int DBDeleteTribe(::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetAddedTribeNum(const ::std::string& userId, ::Ice::Int& tribeNum)
    {
        return DBGetAddedTribeNum(userId, tribeNum, 0);
    }
    ::Ice::Int DBGetAddedTribeNum(const ::std::string& userId, ::Ice::Int& tribeNum, const ::Ice::Context& __ctx)
    {
        return DBGetAddedTribeNum(userId, tribeNum, &__ctx);
    }
    
private:

    ::Ice::Int DBGetAddedTribeNum(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBCheckAddedTribeFull(const ::std::string& userId)
    {
        return DBCheckAddedTribeFull(userId, 0);
    }
    ::Ice::Int DBCheckAddedTribeFull(const ::std::string& userId, const ::Ice::Context& __ctx)
    {
        return DBCheckAddedTribeFull(userId, &__ctx);
    }
    
private:

    ::Ice::Int DBCheckAddedTribeFull(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetTribeMemberNum(::Ice::Int tribeId, ::Ice::Int level, ::Ice::Int& memberNum)
    {
        return DBGetTribeMemberNum(tribeId, level, memberNum, 0);
    }
    ::Ice::Int DBGetTribeMemberNum(::Ice::Int tribeId, ::Ice::Int level, ::Ice::Int& memberNum, const ::Ice::Context& __ctx)
    {
        return DBGetTribeMemberNum(tribeId, level, memberNum, &__ctx);
    }
    
private:

    ::Ice::Int DBGetTribeMemberNum(::Ice::Int, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBAddTribeMember(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, const ::std::string& operId, ::Ice::Long groupId, ::Ice::Int& blackStamp)
    {
        return DBAddTribeMember(tribeId, memberId, level, operId, groupId, blackStamp, 0);
    }
    ::Ice::Int DBAddTribeMember(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, const ::std::string& operId, ::Ice::Long groupId, ::Ice::Int& blackStamp, const ::Ice::Context& __ctx)
    {
        return DBAddTribeMember(tribeId, memberId, level, operId, groupId, blackStamp, &__ctx);
    }
    
private:

    ::Ice::Int DBAddTribeMember(::Ice::Int, const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Long, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int TCAddTribeMember(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, ::Ice::Short openFlag)
    {
        return TCAddTribeMember(tribeId, memberId, level, openFlag, 0);
    }
    ::Ice::Int TCAddTribeMember(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, ::Ice::Short openFlag, const ::Ice::Context& __ctx)
    {
        return TCAddTribeMember(tribeId, memberId, level, openFlag, &__ctx);
    }
    
private:

    ::Ice::Int TCAddTribeMember(::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Short, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetTribeMember(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, ::ALiIMDBTribe::STribeMemberSeq& tribeMemberList)
    {
        return DBGetTribeMember(tribeId, memberId, level, tribeMemberList, 0);
    }
    ::Ice::Int DBGetTribeMember(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, ::ALiIMDBTribe::STribeMemberSeq& tribeMemberList, const ::Ice::Context& __ctx)
    {
        return DBGetTribeMember(tribeId, memberId, level, tribeMemberList, &__ctx);
    }
    
private:

    ::Ice::Int DBGetTribeMember(::Ice::Int, const ::std::string&, ::Ice::Int, ::ALiIMDBTribe::STribeMemberSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetTribeMemberInfo(::Ice::Int tribeId, const ::std::string& memberId, ::ALiIMDBTribe::STribeMemberInfoSeq& tribeMemberInfoList)
    {
        return DBGetTribeMemberInfo(tribeId, memberId, tribeMemberInfoList, 0);
    }
    ::Ice::Int DBGetTribeMemberInfo(::Ice::Int tribeId, const ::std::string& memberId, ::ALiIMDBTribe::STribeMemberInfoSeq& tribeMemberInfoList, const ::Ice::Context& __ctx)
    {
        return DBGetTribeMemberInfo(tribeId, memberId, tribeMemberInfoList, &__ctx);
    }
    
private:

    ::Ice::Int DBGetTribeMemberInfo(::Ice::Int, const ::std::string&, ::ALiIMDBTribe::STribeMemberInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetTribeMemberInfo2(::Ice::Int tribeId, const ::std::string& memberId, ::ALiIMDBTribe::STribeMemberInfoSeq2& tribeMemberInfoList)
    {
        return DBGetTribeMemberInfo2(tribeId, memberId, tribeMemberInfoList, 0);
    }
    ::Ice::Int DBGetTribeMemberInfo2(::Ice::Int tribeId, const ::std::string& memberId, ::ALiIMDBTribe::STribeMemberInfoSeq2& tribeMemberInfoList, const ::Ice::Context& __ctx)
    {
        return DBGetTribeMemberInfo2(tribeId, memberId, tribeMemberInfoList, &__ctx);
    }
    
private:

    ::Ice::Int DBGetTribeMemberInfo2(::Ice::Int, const ::std::string&, ::ALiIMDBTribe::STribeMemberInfoSeq2&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetUserTribe(const ::std::string& userId, ::ALiIMDBTribe::STribeIdSeq& tribeIdList)
    {
        return DBGetUserTribe(userId, tribeIdList, 0);
    }
    ::Ice::Int DBGetUserTribe(const ::std::string& userId, ::ALiIMDBTribe::STribeIdSeq& tribeIdList, const ::Ice::Context& __ctx)
    {
        return DBGetUserTribe(userId, tribeIdList, &__ctx);
    }
    
private:

    ::Ice::Int DBGetUserTribe(const ::std::string&, ::ALiIMDBTribe::STribeIdSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetUserTribe2(const ::std::string& userId, ::ALiIMDBTribe::STribeIdSeq2& tribeIdList)
    {
        return DBGetUserTribe2(userId, tribeIdList, 0);
    }
    ::Ice::Int DBGetUserTribe2(const ::std::string& userId, ::ALiIMDBTribe::STribeIdSeq2& tribeIdList, const ::Ice::Context& __ctx)
    {
        return DBGetUserTribe2(userId, tribeIdList, &__ctx);
    }
    
private:

    ::Ice::Int DBGetUserTribe2(const ::std::string&, ::ALiIMDBTribe::STribeIdSeq2&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBUpdateMemberLevel(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level)
    {
        return DBUpdateMemberLevel(tribeId, memberId, level, 0);
    }
    ::Ice::Int DBUpdateMemberLevel(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, const ::Ice::Context& __ctx)
    {
        return DBUpdateMemberLevel(tribeId, memberId, level, &__ctx);
    }
    
private:

    ::Ice::Int DBUpdateMemberLevel(::Ice::Int, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int DBUpdateLastMsgId(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int msgId)
    {
        return DBUpdateLastMsgId(tribeId, memberId, msgId, 0);
    }
    ::Ice::Int DBUpdateLastMsgId(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int msgId, const ::Ice::Context& __ctx)
    {
        return DBUpdateLastMsgId(tribeId, memberId, msgId, &__ctx);
    }
    
private:

    ::Ice::Int DBUpdateLastMsgId(::Ice::Int, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int DBDeleteMember(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, ::Ice::Int& blackStamp)
    {
        return DBDeleteMember(tribeId, memberId, level, blackStamp, 0);
    }
    ::Ice::Int DBDeleteMember(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, ::Ice::Int& blackStamp, const ::Ice::Context& __ctx)
    {
        return DBDeleteMember(tribeId, memberId, level, blackStamp, &__ctx);
    }
    
private:

    ::Ice::Int DBDeleteMember(::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBAddTribeOfflineMsg(::Ice::Int tribeId, const ::std::string& fromId, ::Ice::Int type, const ::std::string& message, ::Ice::Int sendTime)
    {
        return DBAddTribeOfflineMsg(tribeId, fromId, type, message, sendTime, 0);
    }
    ::Ice::Int DBAddTribeOfflineMsg(::Ice::Int tribeId, const ::std::string& fromId, ::Ice::Int type, const ::std::string& message, ::Ice::Int sendTime, const ::Ice::Context& __ctx)
    {
        return DBAddTribeOfflineMsg(tribeId, fromId, type, message, sendTime, &__ctx);
    }
    
private:

    ::Ice::Int DBAddTribeOfflineMsg(::Ice::Int, const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetTribeOfflineMsg(::Ice::Int tribeId, ::ALiIMDBTribe::STribeOfflineMsgSeq& offlineMsgList)
    {
        return DBGetTribeOfflineMsg(tribeId, offlineMsgList, 0);
    }
    ::Ice::Int DBGetTribeOfflineMsg(::Ice::Int tribeId, ::ALiIMDBTribe::STribeOfflineMsgSeq& offlineMsgList, const ::Ice::Context& __ctx)
    {
        return DBGetTribeOfflineMsg(tribeId, offlineMsgList, &__ctx);
    }
    
private:

    ::Ice::Int DBGetTribeOfflineMsg(::Ice::Int, ::ALiIMDBTribe::STribeOfflineMsgSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBDelTribeOfflineMsg(::Ice::Int tribeId)
    {
        return DBDelTribeOfflineMsg(tribeId, 0);
    }
    ::Ice::Int DBDelTribeOfflineMsg(::Ice::Int tribeId, const ::Ice::Context& __ctx)
    {
        return DBDelTribeOfflineMsg(tribeId, &__ctx);
    }
    
private:

    ::Ice::Int DBDelTribeOfflineMsg(::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int DBAddTribeOffMngMsg(::Ice::Int tribeId, const ::std::string& toId, ::Ice::Int type, const ::std::string& message, ::Ice::Int sendTime)
    {
        return DBAddTribeOffMngMsg(tribeId, toId, type, message, sendTime, 0);
    }
    ::Ice::Int DBAddTribeOffMngMsg(::Ice::Int tribeId, const ::std::string& toId, ::Ice::Int type, const ::std::string& message, ::Ice::Int sendTime, const ::Ice::Context& __ctx)
    {
        return DBAddTribeOffMngMsg(tribeId, toId, type, message, sendTime, &__ctx);
    }
    
private:

    ::Ice::Int DBAddTribeOffMngMsg(::Ice::Int, const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetTribeOffMngMsg(::Ice::Int tribeId, const ::std::string& memberId, ::ALiIMDBTribe::STribeOfflineMsgSeq& offlineMsgList)
    {
        return DBGetTribeOffMngMsg(tribeId, memberId, offlineMsgList, 0);
    }
    ::Ice::Int DBGetTribeOffMngMsg(::Ice::Int tribeId, const ::std::string& memberId, ::ALiIMDBTribe::STribeOfflineMsgSeq& offlineMsgList, const ::Ice::Context& __ctx)
    {
        return DBGetTribeOffMngMsg(tribeId, memberId, offlineMsgList, &__ctx);
    }
    
private:

    ::Ice::Int DBGetTribeOffMngMsg(::Ice::Int, const ::std::string&, ::ALiIMDBTribe::STribeOfflineMsgSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBDelTribeOffMngMsg(::Ice::Int tribeId, const ::std::string& memberId)
    {
        return DBDelTribeOffMngMsg(tribeId, memberId, 0);
    }
    ::Ice::Int DBDelTribeOffMngMsg(::Ice::Int tribeId, const ::std::string& memberId, const ::Ice::Context& __ctx)
    {
        return DBDelTribeOffMngMsg(tribeId, memberId, &__ctx);
    }
    
private:

    ::Ice::Int DBDelTribeOffMngMsg(::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetUserTribeConfig(const ::std::string& userId, ::Ice::Int& addVerify)
    {
        return DBGetUserTribeConfig(userId, addVerify, 0);
    }
    ::Ice::Int DBGetUserTribeConfig(const ::std::string& userId, ::Ice::Int& addVerify, const ::Ice::Context& __ctx)
    {
        return DBGetUserTribeConfig(userId, addVerify, &__ctx);
    }
    
private:

    ::Ice::Int DBGetUserTribeConfig(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBUpdateUserTribeConfig(const ::std::string& userId, ::Ice::Int addVerify)
    {
        return DBUpdateUserTribeConfig(userId, addVerify, 0);
    }
    ::Ice::Int DBUpdateUserTribeConfig(const ::std::string& userId, ::Ice::Int addVerify, const ::Ice::Context& __ctx)
    {
        return DBUpdateUserTribeConfig(userId, addVerify, &__ctx);
    }
    
private:

    ::Ice::Int DBUpdateUserTribeConfig(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int DBUpdateTribeCard(::Ice::Int tribeId, const ::std::string& memberId, const ::ALiIMDBTribe::STribeCard& tribeCard)
    {
        return DBUpdateTribeCard(tribeId, memberId, tribeCard, 0);
    }
    ::Ice::Int DBUpdateTribeCard(::Ice::Int tribeId, const ::std::string& memberId, const ::ALiIMDBTribe::STribeCard& tribeCard, const ::Ice::Context& __ctx)
    {
        return DBUpdateTribeCard(tribeId, memberId, tribeCard, &__ctx);
    }
    
private:

    ::Ice::Int DBUpdateTribeCard(::Ice::Int, const ::std::string&, const ::ALiIMDBTribe::STribeCard&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetTribeCard(::Ice::Int tribeId, const ::std::string& memberId, ::ALiIMDBTribe::STribeCard& tribeCard)
    {
        return DBGetTribeCard(tribeId, memberId, tribeCard, 0);
    }
    ::Ice::Int DBGetTribeCard(::Ice::Int tribeId, const ::std::string& memberId, ::ALiIMDBTribe::STribeCard& tribeCard, const ::Ice::Context& __ctx)
    {
        return DBGetTribeCard(tribeId, memberId, tribeCard, &__ctx);
    }
    
private:

    ::Ice::Int DBGetTribeCard(::Ice::Int, const ::std::string&, ::ALiIMDBTribe::STribeCard&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBUpdateMemberActDegree(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Double onlineActDegree, ::Ice::Int chatActDegree, ::Ice::Double rewardActDegree, ::Ice::Double totalActDegree, ::Ice::Int lastMsgid)
    {
        return DBUpdateMemberActDegree(tribeId, memberId, onlineActDegree, chatActDegree, rewardActDegree, totalActDegree, lastMsgid, 0);
    }
    ::Ice::Int DBUpdateMemberActDegree(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Double onlineActDegree, ::Ice::Int chatActDegree, ::Ice::Double rewardActDegree, ::Ice::Double totalActDegree, ::Ice::Int lastMsgid, const ::Ice::Context& __ctx)
    {
        return DBUpdateMemberActDegree(tribeId, memberId, onlineActDegree, chatActDegree, rewardActDegree, totalActDegree, lastMsgid, &__ctx);
    }
    
private:

    ::Ice::Int DBUpdateMemberActDegree(::Ice::Int, const ::std::string&, ::Ice::Double, ::Ice::Int, ::Ice::Double, ::Ice::Double, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetTribeGroup(::Ice::Int tribeId, ::ALiIMDBTribe::STribeGroupSeq& tribeGroupList)
    {
        return DBGetTribeGroup(tribeId, tribeGroupList, 0);
    }
    ::Ice::Int DBGetTribeGroup(::Ice::Int tribeId, ::ALiIMDBTribe::STribeGroupSeq& tribeGroupList, const ::Ice::Context& __ctx)
    {
        return DBGetTribeGroup(tribeId, tribeGroupList, &__ctx);
    }
    
private:

    ::Ice::Int DBGetTribeGroup(::Ice::Int, ::ALiIMDBTribe::STribeGroupSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBAddTribeGroup(::Ice::Int tribeId, const ::std::string& groupName, ::Ice::Long parentId, ::Ice::Long& groupId, ::Ice::Int& groupStamp)
    {
        return DBAddTribeGroup(tribeId, groupName, parentId, groupId, groupStamp, 0);
    }
    ::Ice::Int DBAddTribeGroup(::Ice::Int tribeId, const ::std::string& groupName, ::Ice::Long parentId, ::Ice::Long& groupId, ::Ice::Int& groupStamp, const ::Ice::Context& __ctx)
    {
        return DBAddTribeGroup(tribeId, groupName, parentId, groupId, groupStamp, &__ctx);
    }
    
private:

    ::Ice::Int DBAddTribeGroup(::Ice::Int, const ::std::string&, ::Ice::Long, ::Ice::Long&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBUpdateTribeGroup(::Ice::Int tribeId, ::Ice::Long groupId, const ::std::string& groupName, ::Ice::Int& groupStamp)
    {
        return DBUpdateTribeGroup(tribeId, groupId, groupName, groupStamp, 0);
    }
    ::Ice::Int DBUpdateTribeGroup(::Ice::Int tribeId, ::Ice::Long groupId, const ::std::string& groupName, ::Ice::Int& groupStamp, const ::Ice::Context& __ctx)
    {
        return DBUpdateTribeGroup(tribeId, groupId, groupName, groupStamp, &__ctx);
    }
    
private:

    ::Ice::Int DBUpdateTribeGroup(::Ice::Int, ::Ice::Long, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBDelTribeGroup(::Ice::Int tribeId, ::Ice::Long groupId, ::Ice::Int& groupStamp)
    {
        return DBDelTribeGroup(tribeId, groupId, groupStamp, 0);
    }
    ::Ice::Int DBDelTribeGroup(::Ice::Int tribeId, ::Ice::Long groupId, ::Ice::Int& groupStamp, const ::Ice::Context& __ctx)
    {
        return DBDelTribeGroup(tribeId, groupId, groupStamp, &__ctx);
    }
    
private:

    ::Ice::Int DBDelTribeGroup(::Ice::Int, ::Ice::Long, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBUpdateUserGroup(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Long groupId)
    {
        return DBUpdateUserGroup(tribeId, memberId, groupId, 0);
    }
    ::Ice::Int DBUpdateUserGroup(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Long groupId, const ::Ice::Context& __ctx)
    {
        return DBUpdateUserGroup(tribeId, memberId, groupId, &__ctx);
    }
    
private:

    ::Ice::Int DBUpdateUserGroup(::Ice::Int, const ::std::string&, ::Ice::Long, const ::Ice::Context*);
    
public:

    ::Ice::Int DBAddStarMember(::Ice::Int tribeId, const ::std::string& memberId)
    {
        return DBAddStarMember(tribeId, memberId, 0);
    }
    ::Ice::Int DBAddStarMember(::Ice::Int tribeId, const ::std::string& memberId, const ::Ice::Context& __ctx)
    {
        return DBAddStarMember(tribeId, memberId, &__ctx);
    }
    
private:

    ::Ice::Int DBAddStarMember(::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBDelStarMember(::Ice::Int tribeId, const ::std::string& memberId)
    {
        return DBDelStarMember(tribeId, memberId, 0);
    }
    ::Ice::Int DBDelStarMember(::Ice::Int tribeId, const ::std::string& memberId, const ::Ice::Context& __ctx)
    {
        return DBDelStarMember(tribeId, memberId, &__ctx);
    }
    
private:

    ::Ice::Int DBDelStarMember(::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBUpdateOpenTribe(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Short openFlag)
    {
        return DBUpdateOpenTribe(tribeId, memberId, openFlag, 0);
    }
    ::Ice::Int DBUpdateOpenTribe(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Short openFlag, const ::Ice::Context& __ctx)
    {
        return DBUpdateOpenTribe(tribeId, memberId, openFlag, &__ctx);
    }
    
private:

    ::Ice::Int DBUpdateOpenTribe(::Ice::Int, const ::std::string&, ::Ice::Short, const ::Ice::Context*);
    
public:

    ::Ice::Int DBNotifyTribeInfo(const ::ALiIMDBTribe::STribeInfo& tribeInfo)
    {
        return DBNotifyTribeInfo(tribeInfo, 0);
    }
    ::Ice::Int DBNotifyTribeInfo(const ::ALiIMDBTribe::STribeInfo& tribeInfo, const ::Ice::Context& __ctx)
    {
        return DBNotifyTribeInfo(tribeInfo, &__ctx);
    }
    
private:

    ::Ice::Int DBNotifyTribeInfo(const ::ALiIMDBTribe::STribeInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetTribeInfo2(::Ice::Int tribeId, ::ALiIMDBTribe::STribeInfo2& tribeInfo)
    {
        return DBGetTribeInfo2(tribeId, tribeInfo, 0);
    }
    ::Ice::Int DBGetTribeInfo2(::Ice::Int tribeId, ::ALiIMDBTribe::STribeInfo2& tribeInfo, const ::Ice::Context& __ctx)
    {
        return DBGetTribeInfo2(tribeId, tribeInfo, &__ctx);
    }
    
private:

    ::Ice::Int DBGetTribeInfo2(::Ice::Int, ::ALiIMDBTribe::STribeInfo2&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetTribeInfo3(::Ice::Int tribeId, ::ALiIMDBTribe::STribeInfo3& tribeInfo)
    {
        return DBGetTribeInfo3(tribeId, tribeInfo, 0);
    }
    ::Ice::Int DBGetTribeInfo3(::Ice::Int tribeId, ::ALiIMDBTribe::STribeInfo3& tribeInfo, const ::Ice::Context& __ctx)
    {
        return DBGetTribeInfo3(tribeId, tribeInfo, &__ctx);
    }
    
private:

    ::Ice::Int DBGetTribeInfo3(::Ice::Int, ::ALiIMDBTribe::STribeInfo3&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBCreateTribe(const ::ALiIMDBTribe::STribeInfo2& tribeInfo, ::Ice::Int& tribeId)
    {
        return DBCreateTribe(tribeInfo, tribeId, 0);
    }
    ::Ice::Int DBCreateTribe(const ::ALiIMDBTribe::STribeInfo2& tribeInfo, ::Ice::Int& tribeId, const ::Ice::Context& __ctx)
    {
        return DBCreateTribe(tribeInfo, tribeId, &__ctx);
    }
    
private:

    ::Ice::Int DBCreateTribe(const ::ALiIMDBTribe::STribeInfo2&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetTribeIdByWebId(const ::std::string& serviceId, const ::std::string& webid, const ::std::string& webtid, ::Ice::Int& tribeId)
    {
        return DBGetTribeIdByWebId(serviceId, webid, webtid, tribeId, 0);
    }
    ::Ice::Int DBGetTribeIdByWebId(const ::std::string& serviceId, const ::std::string& webid, const ::std::string& webtid, ::Ice::Int& tribeId, const ::Ice::Context& __ctx)
    {
        return DBGetTribeIdByWebId(serviceId, webid, webtid, tribeId, &__ctx);
    }
    
private:

    ::Ice::Int DBGetTribeIdByWebId(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBAddWebTribeMember(const ::ALiIMDBTribe::STribeMember2& memberInfo, ::Ice::Int& blackStamp)
    {
        return DBAddWebTribeMember(memberInfo, blackStamp, 0);
    }
    ::Ice::Int DBAddWebTribeMember(const ::ALiIMDBTribe::STribeMember2& memberInfo, ::Ice::Int& blackStamp, const ::Ice::Context& __ctx)
    {
        return DBAddWebTribeMember(memberInfo, blackStamp, &__ctx);
    }
    
private:

    ::Ice::Int DBAddWebTribeMember(const ::ALiIMDBTribe::STribeMember2&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBDeleteWebMember(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, ::Ice::Int& blackStamp)
    {
        return DBDeleteWebMember(tribeId, memberId, level, blackStamp, 0);
    }
    ::Ice::Int DBDeleteWebMember(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, ::Ice::Int& blackStamp, const ::Ice::Context& __ctx)
    {
        return DBDeleteWebMember(tribeId, memberId, level, blackStamp, &__ctx);
    }
    
private:

    ::Ice::Int DBDeleteWebMember(::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetAllWebTribeGroup(::ALiIMDBTribe::SWebTribeGroupSeq& groupList)
    {
        return DBGetAllWebTribeGroup(groupList, 0);
    }
    ::Ice::Int DBGetAllWebTribeGroup(::ALiIMDBTribe::SWebTribeGroupSeq& groupList, const ::Ice::Context& __ctx)
    {
        return DBGetAllWebTribeGroup(groupList, &__ctx);
    }
    
private:

    ::Ice::Int DBGetAllWebTribeGroup(::ALiIMDBTribe::SWebTribeGroupSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetWebTribeGroup(const ::std::string& serviceId, const ::std::string& webId, ::ALiIMDBTribe::SWebTribeGroup& groupInfo)
    {
        return DBGetWebTribeGroup(serviceId, webId, groupInfo, 0);
    }
    ::Ice::Int DBGetWebTribeGroup(const ::std::string& serviceId, const ::std::string& webId, ::ALiIMDBTribe::SWebTribeGroup& groupInfo, const ::Ice::Context& __ctx)
    {
        return DBGetWebTribeGroup(serviceId, webId, groupInfo, &__ctx);
    }
    
private:

    ::Ice::Int DBGetWebTribeGroup(const ::std::string&, const ::std::string&, ::ALiIMDBTribe::SWebTribeGroup&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetWebTribeGroupById(::Ice::Long groupId, ::ALiIMDBTribe::SWebTribeGroup& groupInfo)
    {
        return DBGetWebTribeGroupById(groupId, groupInfo, 0);
    }
    ::Ice::Int DBGetWebTribeGroupById(::Ice::Long groupId, ::ALiIMDBTribe::SWebTribeGroup& groupInfo, const ::Ice::Context& __ctx)
    {
        return DBGetWebTribeGroupById(groupId, groupInfo, &__ctx);
    }
    
private:

    ::Ice::Int DBGetWebTribeGroupById(::Ice::Long, ::ALiIMDBTribe::SWebTribeGroup&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBAddWebTribeGroup(const ::ALiIMDBTribe::SWebTribeGroup& groupInfo, ::Ice::Long& groupId)
    {
        return DBAddWebTribeGroup(groupInfo, groupId, 0);
    }
    ::Ice::Int DBAddWebTribeGroup(const ::ALiIMDBTribe::SWebTribeGroup& groupInfo, ::Ice::Long& groupId, const ::Ice::Context& __ctx)
    {
        return DBAddWebTribeGroup(groupInfo, groupId, &__ctx);
    }
    
private:

    ::Ice::Int DBAddWebTribeGroup(const ::ALiIMDBTribe::SWebTribeGroup&, ::Ice::Long&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBUpdateWebTribeGroupName(::Ice::Long groupId, const ::std::string& name)
    {
        return DBUpdateWebTribeGroupName(groupId, name, 0);
    }
    ::Ice::Int DBUpdateWebTribeGroupName(::Ice::Long groupId, const ::std::string& name, const ::Ice::Context& __ctx)
    {
        return DBUpdateWebTribeGroupName(groupId, name, &__ctx);
    }
    
private:

    ::Ice::Int DBUpdateWebTribeGroupName(::Ice::Long, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBDelWebTribeGroup(::Ice::Long groupId)
    {
        return DBDelWebTribeGroup(groupId, 0);
    }
    ::Ice::Int DBDelWebTribeGroup(::Ice::Long groupId, const ::Ice::Context& __ctx)
    {
        return DBDelWebTribeGroup(groupId, &__ctx);
    }
    
private:

    ::Ice::Int DBDelWebTribeGroup(::Ice::Long, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetUserWebTribeGroup(const ::std::string& userId, ::ALiIMDBTribe::SWebTribeGroupSeq& groupList)
    {
        return DBGetUserWebTribeGroup(userId, groupList, 0);
    }
    ::Ice::Int DBGetUserWebTribeGroup(const ::std::string& userId, ::ALiIMDBTribe::SWebTribeGroupSeq& groupList, const ::Ice::Context& __ctx)
    {
        return DBGetUserWebTribeGroup(userId, groupList, &__ctx);
    }
    
private:

    ::Ice::Int DBGetUserWebTribeGroup(const ::std::string&, ::ALiIMDBTribe::SWebTribeGroupSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetUserWebTribe(const ::std::string& userId, ::ALiIMDBTribe::SWebTribeIdSeq& tribeList)
    {
        return DBGetUserWebTribe(userId, tribeList, 0);
    }
    ::Ice::Int DBGetUserWebTribe(const ::std::string& userId, ::ALiIMDBTribe::SWebTribeIdSeq& tribeList, const ::Ice::Context& __ctx)
    {
        return DBGetUserWebTribe(userId, tribeList, &__ctx);
    }
    
private:

    ::Ice::Int DBGetUserWebTribe(const ::std::string&, ::ALiIMDBTribe::SWebTribeIdSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBUpdateTribeInfo2(const ::ALiIMDBTribe::STribeInfo2& tribeInfo)
    {
        return DBUpdateTribeInfo2(tribeInfo, 0);
    }
    ::Ice::Int DBUpdateTribeInfo2(const ::ALiIMDBTribe::STribeInfo2& tribeInfo, const ::Ice::Context& __ctx)
    {
        return DBUpdateTribeInfo2(tribeInfo, &__ctx);
    }
    
private:

    ::Ice::Int DBUpdateTribeInfo2(const ::ALiIMDBTribe::STribeInfo2&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBNotifyWebTribeInfo(const ::ALiIMDBTribe::STribeInfo2& tribeInfo)
    {
        return DBNotifyWebTribeInfo(tribeInfo, 0);
    }
    ::Ice::Int DBNotifyWebTribeInfo(const ::ALiIMDBTribe::STribeInfo2& tribeInfo, const ::Ice::Context& __ctx)
    {
        return DBNotifyWebTribeInfo(tribeInfo, &__ctx);
    }
    
private:

    ::Ice::Int DBNotifyWebTribeInfo(const ::ALiIMDBTribe::STribeInfo2&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBSyncWebTribe(const ::std::string& serviceId, const ::std::string& webId, const ::ALiIMDBTribe::STribeInfo2& tribeInfo, const ::ALiIMDBTribe::STribeMember2Seq& memberList, ::Ice::Int& tribeId)
    {
        return DBSyncWebTribe(serviceId, webId, tribeInfo, memberList, tribeId, 0);
    }
    ::Ice::Int DBSyncWebTribe(const ::std::string& serviceId, const ::std::string& webId, const ::ALiIMDBTribe::STribeInfo2& tribeInfo, const ::ALiIMDBTribe::STribeMember2Seq& memberList, ::Ice::Int& tribeId, const ::Ice::Context& __ctx)
    {
        return DBSyncWebTribe(serviceId, webId, tribeInfo, memberList, tribeId, &__ctx);
    }
    
private:

    ::Ice::Int DBSyncWebTribe(const ::std::string&, const ::std::string&, const ::ALiIMDBTribe::STribeInfo2&, const ::ALiIMDBTribe::STribeMember2Seq&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetWebUserDisactiveTribe(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& webUid, ::Ice::IntSeq& tribeList)
    {
        return DBGetWebUserDisactiveTribe(serviceId, webId, webUid, tribeList, 0);
    }
    ::Ice::Int DBGetWebUserDisactiveTribe(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& webUid, ::Ice::IntSeq& tribeList, const ::Ice::Context& __ctx)
    {
        return DBGetWebUserDisactiveTribe(serviceId, webId, webUid, tribeList, &__ctx);
    }
    
private:

    ::Ice::Int DBGetWebUserDisactiveTribe(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::IntSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetWebUserActiveTribe(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& userId, ::Ice::IntSeq& tribeList)
    {
        return DBGetWebUserActiveTribe(serviceId, webId, userId, tribeList, 0);
    }
    ::Ice::Int DBGetWebUserActiveTribe(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& userId, ::Ice::IntSeq& tribeList, const ::Ice::Context& __ctx)
    {
        return DBGetWebUserActiveTribe(serviceId, webId, userId, tribeList, &__ctx);
    }
    
private:

    ::Ice::Int DBGetWebUserActiveTribe(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::IntSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBActiveTribeWebMember(::Ice::Int tribeId, const ::std::string& webuid, const ::std::string& memberId)
    {
        return DBActiveTribeWebMember(tribeId, webuid, memberId, 0);
    }
    ::Ice::Int DBActiveTribeWebMember(::Ice::Int tribeId, const ::std::string& webuid, const ::std::string& memberId, const ::Ice::Context& __ctx)
    {
        return DBActiveTribeWebMember(tribeId, webuid, memberId, &__ctx);
    }
    
private:

    ::Ice::Int DBActiveTribeWebMember(::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBDisactiveTribeWebMember(::Ice::Int tribeId, const ::std::string& webuid, const ::std::string& memberId)
    {
        return DBDisactiveTribeWebMember(tribeId, webuid, memberId, 0);
    }
    ::Ice::Int DBDisactiveTribeWebMember(::Ice::Int tribeId, const ::std::string& webuid, const ::std::string& memberId, const ::Ice::Context& __ctx)
    {
        return DBDisactiveTribeWebMember(tribeId, webuid, memberId, &__ctx);
    }
    
private:

    ::Ice::Int DBDisactiveTribeWebMember(::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBDeleteWebTribe(::Ice::Int tribeId)
    {
        return DBDeleteWebTribe(tribeId, 0);
    }
    ::Ice::Int DBDeleteWebTribe(::Ice::Int tribeId, const ::Ice::Context& __ctx)
    {
        return DBDeleteWebTribe(tribeId, &__ctx);
    }
    
private:

    ::Ice::Int DBDeleteWebTribe(::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int DBUpdateTribeMsgSetting(::Ice::Int tribeId, const ::std::string& userId, ::Ice::Short popflag)
    {
        return DBUpdateTribeMsgSetting(tribeId, userId, popflag, 0);
    }
    ::Ice::Int DBUpdateTribeMsgSetting(::Ice::Int tribeId, const ::std::string& userId, ::Ice::Short popflag, const ::Ice::Context& __ctx)
    {
        return DBUpdateTribeMsgSetting(tribeId, userId, popflag, &__ctx);
    }
    
private:

    ::Ice::Int DBUpdateTribeMsgSetting(::Ice::Int, const ::std::string&, ::Ice::Short, const ::Ice::Context*);
    
public:

    ::Ice::Int DBTransferTribe(::Ice::Int tribeId, const ::std::string& userId, const ::std::string& transferId, ::std::string& vacantId)
    {
        return DBTransferTribe(tribeId, userId, transferId, vacantId, 0);
    }
    ::Ice::Int DBTransferTribe(::Ice::Int tribeId, const ::std::string& userId, const ::std::string& transferId, ::std::string& vacantId, const ::Ice::Context& __ctx)
    {
        return DBTransferTribe(tribeId, userId, transferId, vacantId, &__ctx);
    }
    
private:

    ::Ice::Int DBTransferTribe(::Ice::Int, const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBCheckAddedTribeFull2(const ::std::string& userId, bool& limit)
    {
        return DBCheckAddedTribeFull2(userId, limit, 0);
    }
    ::Ice::Int DBCheckAddedTribeFull2(const ::std::string& userId, bool& limit, const ::Ice::Context& __ctx)
    {
        return DBCheckAddedTribeFull2(userId, limit, &__ctx);
    }
    
private:

    ::Ice::Int DBCheckAddedTribeFull2(const ::std::string&, bool&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBUpdateTribeLimit(::Ice::Int tribeId, ::Ice::Int limit)
    {
        return DBUpdateTribeLimit(tribeId, limit, 0);
    }
    ::Ice::Int DBUpdateTribeLimit(::Ice::Int tribeId, ::Ice::Int limit, const ::Ice::Context& __ctx)
    {
        return DBUpdateTribeLimit(tribeId, limit, &__ctx);
    }
    
private:

    ::Ice::Int DBUpdateTribeLimit(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int DBIncrUserTribes(const ::std::string& userId, ::Ice::Int tribeNum)
    {
        return DBIncrUserTribes(userId, tribeNum, 0);
    }
    ::Ice::Int DBIncrUserTribes(const ::std::string& userId, ::Ice::Int tribeNum, const ::Ice::Context& __ctx)
    {
        return DBIncrUserTribes(userId, tribeNum, &__ctx);
    }
    
private:

    ::Ice::Int DBIncrUserTribes(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetUserTribeNum(const ::std::string& userId, ::Ice::Int& tribeNum)
    {
        return DBGetUserTribeNum(userId, tribeNum, 0);
    }
    ::Ice::Int DBGetUserTribeNum(const ::std::string& userId, ::Ice::Int& tribeNum, const ::Ice::Context& __ctx)
    {
        return DBGetUserTribeNum(userId, tribeNum, &__ctx);
    }
    
private:

    ::Ice::Int DBGetUserTribeNum(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
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

namespace ALiIMDBTribe
{

class TribeDBProxyMgr : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int DBStartTribe(const ::ALiIMDBTribe::STribeInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetTribeInfo(::Ice::Int, ::ALiIMDBTribe::STribeInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBUpdateTribeInfo(const ::ALiIMDBTribe::STribeInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBUpdateTribeMaster(::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetTribeActiveDegree(::Ice::Int, ::Ice::Int&, ::Ice::Double&, ::Ice::Int&, ::Ice::Double&, ::Ice::Int&, ::Ice::Double&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBUpdateTribeActDegree(::Ice::Int, ::Ice::Double, ::Ice::Int, ::Ice::Double, ::Ice::Double, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBDeleteTribe(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetAddedTribeNum(const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBCheckAddedTribeFull(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetTribeMemberNum(::Ice::Int, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBAddTribeMember(::Ice::Int, const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Long, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int TCAddTribeMember(::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Short, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetTribeMember(::Ice::Int, const ::std::string&, ::Ice::Int, ::ALiIMDBTribe::STribeMemberSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetTribeMemberInfo(::Ice::Int, const ::std::string&, ::ALiIMDBTribe::STribeMemberInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetTribeMemberInfo2(::Ice::Int, const ::std::string&, ::ALiIMDBTribe::STribeMemberInfoSeq2&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetUserTribe(const ::std::string&, ::ALiIMDBTribe::STribeIdSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetUserTribe2(const ::std::string&, ::ALiIMDBTribe::STribeIdSeq2&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBUpdateMemberLevel(::Ice::Int, const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBUpdateLastMsgId(::Ice::Int, const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBDeleteMember(::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBAddTribeOfflineMsg(::Ice::Int, const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetTribeOfflineMsg(::Ice::Int, ::ALiIMDBTribe::STribeOfflineMsgSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBDelTribeOfflineMsg(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBAddTribeOffMngMsg(::Ice::Int, const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetTribeOffMngMsg(::Ice::Int, const ::std::string&, ::ALiIMDBTribe::STribeOfflineMsgSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBDelTribeOffMngMsg(::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetUserTribeConfig(const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBUpdateUserTribeConfig(const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBUpdateTribeCard(::Ice::Int, const ::std::string&, const ::ALiIMDBTribe::STribeCard&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetTribeCard(::Ice::Int, const ::std::string&, ::ALiIMDBTribe::STribeCard&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBUpdateMemberActDegree(::Ice::Int, const ::std::string&, ::Ice::Double, ::Ice::Int, ::Ice::Double, ::Ice::Double, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetTribeGroup(::Ice::Int, ::ALiIMDBTribe::STribeGroupSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBAddTribeGroup(::Ice::Int, const ::std::string&, ::Ice::Long, ::Ice::Long&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBUpdateTribeGroup(::Ice::Int, ::Ice::Long, const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBDelTribeGroup(::Ice::Int, ::Ice::Long, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBUpdateUserGroup(::Ice::Int, const ::std::string&, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBAddStarMember(::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBDelStarMember(::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBUpdateOpenTribe(::Ice::Int, const ::std::string&, ::Ice::Short, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBNotifyTribeInfo(const ::ALiIMDBTribe::STribeInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetTribeInfo2(::Ice::Int, ::ALiIMDBTribe::STribeInfo2&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetTribeInfo3(::Ice::Int, ::ALiIMDBTribe::STribeInfo3&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBCreateTribe(const ::ALiIMDBTribe::STribeInfo2&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetTribeIdByWebId(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBAddWebTribeMember(const ::ALiIMDBTribe::STribeMember2&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBDeleteWebMember(::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetAllWebTribeGroup(::ALiIMDBTribe::SWebTribeGroupSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetWebTribeGroup(const ::std::string&, const ::std::string&, ::ALiIMDBTribe::SWebTribeGroup&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetWebTribeGroupById(::Ice::Long, ::ALiIMDBTribe::SWebTribeGroup&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBAddWebTribeGroup(const ::ALiIMDBTribe::SWebTribeGroup&, ::Ice::Long&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBUpdateWebTribeGroupName(::Ice::Long, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBDelWebTribeGroup(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetUserWebTribeGroup(const ::std::string&, ::ALiIMDBTribe::SWebTribeGroupSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetUserWebTribe(const ::std::string&, ::ALiIMDBTribe::SWebTribeIdSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBUpdateTribeInfo2(const ::ALiIMDBTribe::STribeInfo2&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBNotifyWebTribeInfo(const ::ALiIMDBTribe::STribeInfo2&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBSyncWebTribe(const ::std::string&, const ::std::string&, const ::ALiIMDBTribe::STribeInfo2&, const ::ALiIMDBTribe::STribeMember2Seq&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetWebUserDisactiveTribe(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::IntSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetWebUserActiveTribe(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::IntSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBActiveTribeWebMember(::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBDisactiveTribeWebMember(::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBDeleteWebTribe(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBUpdateTribeMsgSetting(::Ice::Int, const ::std::string&, ::Ice::Short, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBTransferTribe(::Ice::Int, const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBCheckAddedTribeFull2(const ::std::string&, bool&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBUpdateTribeLimit(::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBIncrUserTribes(const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetUserTribeNum(const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace ALiIMDBTribe
{

class TribeDBProxyMgr : virtual public ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr,
                        virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int DBStartTribe(const ::ALiIMDBTribe::STribeInfo&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetTribeInfo(::Ice::Int, ::ALiIMDBTribe::STribeInfo&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateTribeInfo(const ::ALiIMDBTribe::STribeInfo&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateTribeMaster(::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetTribeActiveDegree(::Ice::Int, ::Ice::Int&, ::Ice::Double&, ::Ice::Int&, ::Ice::Double&, ::Ice::Int&, ::Ice::Double&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateTribeActDegree(::Ice::Int, ::Ice::Double, ::Ice::Int, ::Ice::Double, ::Ice::Double, const ::Ice::Context*);

    virtual ::Ice::Int DBDeleteTribe(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBGetAddedTribeNum(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBCheckAddedTribeFull(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetTribeMemberNum(::Ice::Int, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBAddTribeMember(::Ice::Int, const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Long, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int TCAddTribeMember(::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Short, const ::Ice::Context*);

    virtual ::Ice::Int DBGetTribeMember(::Ice::Int, const ::std::string&, ::Ice::Int, ::ALiIMDBTribe::STribeMemberSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetTribeMemberInfo(::Ice::Int, const ::std::string&, ::ALiIMDBTribe::STribeMemberInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetTribeMemberInfo2(::Ice::Int, const ::std::string&, ::ALiIMDBTribe::STribeMemberInfoSeq2&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetUserTribe(const ::std::string&, ::ALiIMDBTribe::STribeIdSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetUserTribe2(const ::std::string&, ::ALiIMDBTribe::STribeIdSeq2&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateMemberLevel(::Ice::Int, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateLastMsgId(::Ice::Int, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBDeleteMember(::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBAddTribeOfflineMsg(::Ice::Int, const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBGetTribeOfflineMsg(::Ice::Int, ::ALiIMDBTribe::STribeOfflineMsgSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBDelTribeOfflineMsg(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBAddTribeOffMngMsg(::Ice::Int, const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBGetTribeOffMngMsg(::Ice::Int, const ::std::string&, ::ALiIMDBTribe::STribeOfflineMsgSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBDelTribeOffMngMsg(::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetUserTribeConfig(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateUserTribeConfig(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateTribeCard(::Ice::Int, const ::std::string&, const ::ALiIMDBTribe::STribeCard&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetTribeCard(::Ice::Int, const ::std::string&, ::ALiIMDBTribe::STribeCard&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateMemberActDegree(::Ice::Int, const ::std::string&, ::Ice::Double, ::Ice::Int, ::Ice::Double, ::Ice::Double, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBGetTribeGroup(::Ice::Int, ::ALiIMDBTribe::STribeGroupSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBAddTribeGroup(::Ice::Int, const ::std::string&, ::Ice::Long, ::Ice::Long&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateTribeGroup(::Ice::Int, ::Ice::Long, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBDelTribeGroup(::Ice::Int, ::Ice::Long, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateUserGroup(::Ice::Int, const ::std::string&, ::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Int DBAddStarMember(::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBDelStarMember(::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateOpenTribe(::Ice::Int, const ::std::string&, ::Ice::Short, const ::Ice::Context*);

    virtual ::Ice::Int DBNotifyTribeInfo(const ::ALiIMDBTribe::STribeInfo&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetTribeInfo2(::Ice::Int, ::ALiIMDBTribe::STribeInfo2&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetTribeInfo3(::Ice::Int, ::ALiIMDBTribe::STribeInfo3&, const ::Ice::Context*);

    virtual ::Ice::Int DBCreateTribe(const ::ALiIMDBTribe::STribeInfo2&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetTribeIdByWebId(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBAddWebTribeMember(const ::ALiIMDBTribe::STribeMember2&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBDeleteWebMember(::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetAllWebTribeGroup(::ALiIMDBTribe::SWebTribeGroupSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetWebTribeGroup(const ::std::string&, const ::std::string&, ::ALiIMDBTribe::SWebTribeGroup&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetWebTribeGroupById(::Ice::Long, ::ALiIMDBTribe::SWebTribeGroup&, const ::Ice::Context*);

    virtual ::Ice::Int DBAddWebTribeGroup(const ::ALiIMDBTribe::SWebTribeGroup&, ::Ice::Long&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateWebTribeGroupName(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBDelWebTribeGroup(::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Int DBGetUserWebTribeGroup(const ::std::string&, ::ALiIMDBTribe::SWebTribeGroupSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetUserWebTribe(const ::std::string&, ::ALiIMDBTribe::SWebTribeIdSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateTribeInfo2(const ::ALiIMDBTribe::STribeInfo2&, const ::Ice::Context*);

    virtual ::Ice::Int DBNotifyWebTribeInfo(const ::ALiIMDBTribe::STribeInfo2&, const ::Ice::Context*);

    virtual ::Ice::Int DBSyncWebTribe(const ::std::string&, const ::std::string&, const ::ALiIMDBTribe::STribeInfo2&, const ::ALiIMDBTribe::STribeMember2Seq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetWebUserDisactiveTribe(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::IntSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetWebUserActiveTribe(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::IntSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBActiveTribeWebMember(::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBDisactiveTribeWebMember(::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBDeleteWebTribe(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateTribeMsgSetting(::Ice::Int, const ::std::string&, ::Ice::Short, const ::Ice::Context*);

    virtual ::Ice::Int DBTransferTribe(::Ice::Int, const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBCheckAddedTribeFull2(const ::std::string&, bool&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateTribeLimit(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBIncrUserTribes(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBGetUserTribeNum(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace ALiIMDBTribe
{

class TribeDBProxyMgr : virtual public ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr,
                        virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int DBStartTribe(const ::ALiIMDBTribe::STribeInfo&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetTribeInfo(::Ice::Int, ::ALiIMDBTribe::STribeInfo&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateTribeInfo(const ::ALiIMDBTribe::STribeInfo&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateTribeMaster(::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetTribeActiveDegree(::Ice::Int, ::Ice::Int&, ::Ice::Double&, ::Ice::Int&, ::Ice::Double&, ::Ice::Int&, ::Ice::Double&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateTribeActDegree(::Ice::Int, ::Ice::Double, ::Ice::Int, ::Ice::Double, ::Ice::Double, const ::Ice::Context*);

    virtual ::Ice::Int DBDeleteTribe(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBGetAddedTribeNum(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBCheckAddedTribeFull(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetTribeMemberNum(::Ice::Int, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBAddTribeMember(::Ice::Int, const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Long, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int TCAddTribeMember(::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Short, const ::Ice::Context*);

    virtual ::Ice::Int DBGetTribeMember(::Ice::Int, const ::std::string&, ::Ice::Int, ::ALiIMDBTribe::STribeMemberSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetTribeMemberInfo(::Ice::Int, const ::std::string&, ::ALiIMDBTribe::STribeMemberInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetTribeMemberInfo2(::Ice::Int, const ::std::string&, ::ALiIMDBTribe::STribeMemberInfoSeq2&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetUserTribe(const ::std::string&, ::ALiIMDBTribe::STribeIdSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetUserTribe2(const ::std::string&, ::ALiIMDBTribe::STribeIdSeq2&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateMemberLevel(::Ice::Int, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateLastMsgId(::Ice::Int, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBDeleteMember(::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBAddTribeOfflineMsg(::Ice::Int, const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBGetTribeOfflineMsg(::Ice::Int, ::ALiIMDBTribe::STribeOfflineMsgSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBDelTribeOfflineMsg(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBAddTribeOffMngMsg(::Ice::Int, const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBGetTribeOffMngMsg(::Ice::Int, const ::std::string&, ::ALiIMDBTribe::STribeOfflineMsgSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBDelTribeOffMngMsg(::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetUserTribeConfig(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateUserTribeConfig(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateTribeCard(::Ice::Int, const ::std::string&, const ::ALiIMDBTribe::STribeCard&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetTribeCard(::Ice::Int, const ::std::string&, ::ALiIMDBTribe::STribeCard&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateMemberActDegree(::Ice::Int, const ::std::string&, ::Ice::Double, ::Ice::Int, ::Ice::Double, ::Ice::Double, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBGetTribeGroup(::Ice::Int, ::ALiIMDBTribe::STribeGroupSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBAddTribeGroup(::Ice::Int, const ::std::string&, ::Ice::Long, ::Ice::Long&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateTribeGroup(::Ice::Int, ::Ice::Long, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBDelTribeGroup(::Ice::Int, ::Ice::Long, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateUserGroup(::Ice::Int, const ::std::string&, ::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Int DBAddStarMember(::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBDelStarMember(::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateOpenTribe(::Ice::Int, const ::std::string&, ::Ice::Short, const ::Ice::Context*);

    virtual ::Ice::Int DBNotifyTribeInfo(const ::ALiIMDBTribe::STribeInfo&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetTribeInfo2(::Ice::Int, ::ALiIMDBTribe::STribeInfo2&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetTribeInfo3(::Ice::Int, ::ALiIMDBTribe::STribeInfo3&, const ::Ice::Context*);

    virtual ::Ice::Int DBCreateTribe(const ::ALiIMDBTribe::STribeInfo2&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetTribeIdByWebId(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBAddWebTribeMember(const ::ALiIMDBTribe::STribeMember2&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBDeleteWebMember(::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetAllWebTribeGroup(::ALiIMDBTribe::SWebTribeGroupSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetWebTribeGroup(const ::std::string&, const ::std::string&, ::ALiIMDBTribe::SWebTribeGroup&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetWebTribeGroupById(::Ice::Long, ::ALiIMDBTribe::SWebTribeGroup&, const ::Ice::Context*);

    virtual ::Ice::Int DBAddWebTribeGroup(const ::ALiIMDBTribe::SWebTribeGroup&, ::Ice::Long&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateWebTribeGroupName(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBDelWebTribeGroup(::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Int DBGetUserWebTribeGroup(const ::std::string&, ::ALiIMDBTribe::SWebTribeGroupSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetUserWebTribe(const ::std::string&, ::ALiIMDBTribe::SWebTribeIdSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateTribeInfo2(const ::ALiIMDBTribe::STribeInfo2&, const ::Ice::Context*);

    virtual ::Ice::Int DBNotifyWebTribeInfo(const ::ALiIMDBTribe::STribeInfo2&, const ::Ice::Context*);

    virtual ::Ice::Int DBSyncWebTribe(const ::std::string&, const ::std::string&, const ::ALiIMDBTribe::STribeInfo2&, const ::ALiIMDBTribe::STribeMember2Seq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetWebUserDisactiveTribe(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::IntSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetWebUserActiveTribe(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::IntSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBActiveTribeWebMember(::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBDisactiveTribeWebMember(::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBDeleteWebTribe(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateTribeMsgSetting(::Ice::Int, const ::std::string&, ::Ice::Short, const ::Ice::Context*);

    virtual ::Ice::Int DBTransferTribe(::Ice::Int, const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBCheckAddedTribeFull2(const ::std::string&, bool&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateTribeLimit(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBIncrUserTribes(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBGetUserTribeNum(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
};

}

}

namespace ALiIMDBTribe
{

class TribeDBProxyMgr : virtual public ::Ice::Object
{
public:

    typedef TribeDBProxyMgrPrx ProxyType;
    typedef TribeDBProxyMgrPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int DBStartTribe(const ::ALiIMDBTribe::STribeInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBStartTribe(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetTribeInfo(::Ice::Int, ::ALiIMDBTribe::STribeInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetTribeInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBUpdateTribeInfo(const ::ALiIMDBTribe::STribeInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBUpdateTribeInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBUpdateTribeMaster(::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBUpdateTribeMaster(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetTribeActiveDegree(::Ice::Int, ::Ice::Int&, ::Ice::Double&, ::Ice::Int&, ::Ice::Double&, ::Ice::Int&, ::Ice::Double&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetTribeActiveDegree(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBUpdateTribeActDegree(::Ice::Int, ::Ice::Double, ::Ice::Int, ::Ice::Double, ::Ice::Double, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBUpdateTribeActDegree(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBDeleteTribe(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBDeleteTribe(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetAddedTribeNum(const ::std::string&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetAddedTribeNum(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBCheckAddedTribeFull(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBCheckAddedTribeFull(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetTribeMemberNum(::Ice::Int, ::Ice::Int, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetTribeMemberNum(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBAddTribeMember(::Ice::Int, const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Long, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBAddTribeMember(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int TCAddTribeMember(::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Short, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___TCAddTribeMember(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetTribeMember(::Ice::Int, const ::std::string&, ::Ice::Int, ::ALiIMDBTribe::STribeMemberSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetTribeMember(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetTribeMemberInfo(::Ice::Int, const ::std::string&, ::ALiIMDBTribe::STribeMemberInfoSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetTribeMemberInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetTribeMemberInfo2(::Ice::Int, const ::std::string&, ::ALiIMDBTribe::STribeMemberInfoSeq2&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetTribeMemberInfo2(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetUserTribe(const ::std::string&, ::ALiIMDBTribe::STribeIdSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetUserTribe(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetUserTribe2(const ::std::string&, ::ALiIMDBTribe::STribeIdSeq2&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetUserTribe2(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBUpdateMemberLevel(::Ice::Int, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBUpdateMemberLevel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBUpdateLastMsgId(::Ice::Int, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBUpdateLastMsgId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBDeleteMember(::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBDeleteMember(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBAddTribeOfflineMsg(::Ice::Int, const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBAddTribeOfflineMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetTribeOfflineMsg(::Ice::Int, ::ALiIMDBTribe::STribeOfflineMsgSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetTribeOfflineMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBDelTribeOfflineMsg(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBDelTribeOfflineMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBAddTribeOffMngMsg(::Ice::Int, const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBAddTribeOffMngMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetTribeOffMngMsg(::Ice::Int, const ::std::string&, ::ALiIMDBTribe::STribeOfflineMsgSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetTribeOffMngMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBDelTribeOffMngMsg(::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBDelTribeOffMngMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetUserTribeConfig(const ::std::string&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetUserTribeConfig(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBUpdateUserTribeConfig(const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBUpdateUserTribeConfig(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBUpdateTribeCard(::Ice::Int, const ::std::string&, const ::ALiIMDBTribe::STribeCard&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBUpdateTribeCard(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetTribeCard(::Ice::Int, const ::std::string&, ::ALiIMDBTribe::STribeCard&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetTribeCard(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBUpdateMemberActDegree(::Ice::Int, const ::std::string&, ::Ice::Double, ::Ice::Int, ::Ice::Double, ::Ice::Double, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBUpdateMemberActDegree(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetTribeGroup(::Ice::Int, ::ALiIMDBTribe::STribeGroupSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetTribeGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBAddTribeGroup(::Ice::Int, const ::std::string&, ::Ice::Long, ::Ice::Long&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBAddTribeGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBUpdateTribeGroup(::Ice::Int, ::Ice::Long, const ::std::string&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBUpdateTribeGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBDelTribeGroup(::Ice::Int, ::Ice::Long, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBDelTribeGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBUpdateUserGroup(::Ice::Int, const ::std::string&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBUpdateUserGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBAddStarMember(::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBAddStarMember(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBDelStarMember(::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBDelStarMember(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBUpdateOpenTribe(::Ice::Int, const ::std::string&, ::Ice::Short, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBUpdateOpenTribe(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBNotifyTribeInfo(const ::ALiIMDBTribe::STribeInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBNotifyTribeInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetTribeInfo2(::Ice::Int, ::ALiIMDBTribe::STribeInfo2&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetTribeInfo2(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetTribeInfo3(::Ice::Int, ::ALiIMDBTribe::STribeInfo3&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetTribeInfo3(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBCreateTribe(const ::ALiIMDBTribe::STribeInfo2&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBCreateTribe(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetTribeIdByWebId(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetTribeIdByWebId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBAddWebTribeMember(const ::ALiIMDBTribe::STribeMember2&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBAddWebTribeMember(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBDeleteWebMember(::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBDeleteWebMember(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetAllWebTribeGroup(::ALiIMDBTribe::SWebTribeGroupSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetAllWebTribeGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetWebTribeGroup(const ::std::string&, const ::std::string&, ::ALiIMDBTribe::SWebTribeGroup&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetWebTribeGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetWebTribeGroupById(::Ice::Long, ::ALiIMDBTribe::SWebTribeGroup&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetWebTribeGroupById(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBAddWebTribeGroup(const ::ALiIMDBTribe::SWebTribeGroup&, ::Ice::Long&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBAddWebTribeGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBUpdateWebTribeGroupName(::Ice::Long, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBUpdateWebTribeGroupName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBDelWebTribeGroup(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBDelWebTribeGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetUserWebTribeGroup(const ::std::string&, ::ALiIMDBTribe::SWebTribeGroupSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetUserWebTribeGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetUserWebTribe(const ::std::string&, ::ALiIMDBTribe::SWebTribeIdSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetUserWebTribe(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBUpdateTribeInfo2(const ::ALiIMDBTribe::STribeInfo2&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBUpdateTribeInfo2(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBNotifyWebTribeInfo(const ::ALiIMDBTribe::STribeInfo2&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBNotifyWebTribeInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBSyncWebTribe(const ::std::string&, const ::std::string&, const ::ALiIMDBTribe::STribeInfo2&, const ::ALiIMDBTribe::STribeMember2Seq&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBSyncWebTribe(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetWebUserDisactiveTribe(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::IntSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetWebUserDisactiveTribe(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetWebUserActiveTribe(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::IntSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetWebUserActiveTribe(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBActiveTribeWebMember(::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBActiveTribeWebMember(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBDisactiveTribeWebMember(::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBDisactiveTribeWebMember(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBDeleteWebTribe(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBDeleteWebTribe(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBUpdateTribeMsgSetting(::Ice::Int, const ::std::string&, ::Ice::Short, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBUpdateTribeMsgSetting(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBTransferTribe(::Ice::Int, const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBTransferTribe(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBCheckAddedTribeFull2(const ::std::string&, bool&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBCheckAddedTribeFull2(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBUpdateTribeLimit(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBUpdateTribeLimit(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBIncrUserTribes(const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBIncrUserTribes(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetUserTribeNum(const ::std::string&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetUserTribeNum(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__TribeDBProxyMgrPtr(void*, ::Ice::ObjectPtr&);

}

#endif
