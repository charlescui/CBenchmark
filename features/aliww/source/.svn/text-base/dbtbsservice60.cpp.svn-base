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

#include <dbtbsservice60.h>
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

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBStartTribe_name = "DBStartTribe";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeInfo_name = "DBGetTribeInfo";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeInfo_name = "DBUpdateTribeInfo";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeMaster_name = "DBUpdateTribeMaster";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeActiveDegree_name = "DBGetTribeActiveDegree";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeActDegree_name = "DBUpdateTribeActDegree";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBDeleteTribe_name = "DBDeleteTribe";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBGetAddedTribeNum_name = "DBGetAddedTribeNum";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBCheckAddedTribeFull_name = "DBCheckAddedTribeFull";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeMemberNum_name = "DBGetTribeMemberNum";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBAddTribeMember_name = "DBAddTribeMember";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__TCAddTribeMember_name = "TCAddTribeMember";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeMember_name = "DBGetTribeMember";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeMemberInfo_name = "DBGetTribeMemberInfo";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeMemberInfo2_name = "DBGetTribeMemberInfo2";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBGetUserTribe_name = "DBGetUserTribe";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBGetUserTribe2_name = "DBGetUserTribe2";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateMemberLevel_name = "DBUpdateMemberLevel";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateLastMsgId_name = "DBUpdateLastMsgId";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBDeleteMember_name = "DBDeleteMember";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBAddTribeOfflineMsg_name = "DBAddTribeOfflineMsg";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeOfflineMsg_name = "DBGetTribeOfflineMsg";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBDelTribeOfflineMsg_name = "DBDelTribeOfflineMsg";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBAddTribeOffMngMsg_name = "DBAddTribeOffMngMsg";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeOffMngMsg_name = "DBGetTribeOffMngMsg";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBDelTribeOffMngMsg_name = "DBDelTribeOffMngMsg";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBGetUserTribeConfig_name = "DBGetUserTribeConfig";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateUserTribeConfig_name = "DBUpdateUserTribeConfig";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeCard_name = "DBUpdateTribeCard";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeCard_name = "DBGetTribeCard";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateMemberActDegree_name = "DBUpdateMemberActDegree";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeGroup_name = "DBGetTribeGroup";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBAddTribeGroup_name = "DBAddTribeGroup";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeGroup_name = "DBUpdateTribeGroup";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBDelTribeGroup_name = "DBDelTribeGroup";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateUserGroup_name = "DBUpdateUserGroup";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBAddStarMember_name = "DBAddStarMember";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBDelStarMember_name = "DBDelStarMember";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateOpenTribe_name = "DBUpdateOpenTribe";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBNotifyTribeInfo_name = "DBNotifyTribeInfo";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeInfo2_name = "DBGetTribeInfo2";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeInfo3_name = "DBGetTribeInfo3";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBCreateTribe_name = "DBCreateTribe";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeIdByWebId_name = "DBGetTribeIdByWebId";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBAddWebTribeMember_name = "DBAddWebTribeMember";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBDeleteWebMember_name = "DBDeleteWebMember";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBGetAllWebTribeGroup_name = "DBGetAllWebTribeGroup";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBGetWebTribeGroup_name = "DBGetWebTribeGroup";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBGetWebTribeGroupById_name = "DBGetWebTribeGroupById";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBAddWebTribeGroup_name = "DBAddWebTribeGroup";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateWebTribeGroupName_name = "DBUpdateWebTribeGroupName";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBDelWebTribeGroup_name = "DBDelWebTribeGroup";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBGetUserWebTribeGroup_name = "DBGetUserWebTribeGroup";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBGetUserWebTribe_name = "DBGetUserWebTribe";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeInfo2_name = "DBUpdateTribeInfo2";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBNotifyWebTribeInfo_name = "DBNotifyWebTribeInfo";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBSyncWebTribe_name = "DBSyncWebTribe";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBGetWebUserDisactiveTribe_name = "DBGetWebUserDisactiveTribe";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBGetWebUserActiveTribe_name = "DBGetWebUserActiveTribe";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBActiveTribeWebMember_name = "DBActiveTribeWebMember";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBDisactiveTribeWebMember_name = "DBDisactiveTribeWebMember";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBDeleteWebTribe_name = "DBDeleteWebTribe";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeMsgSetting_name = "DBUpdateTribeMsgSetting";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBTransferTribe_name = "DBTransferTribe";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBCheckAddedTribeFull2_name = "DBCheckAddedTribeFull2";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeLimit_name = "DBUpdateTribeLimit";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBIncrUserTribes_name = "DBIncrUserTribes";

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr__DBGetUserTribeNum_name = "DBGetUserTribeNum";

void
IceInternal::incRef(::ALiIMDBTribe::TribeDBProxyMgr* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::ALiIMDBTribe::TribeDBProxyMgr* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::ALiIMDBTribe::TribeDBProxyMgr* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::ALiIMDBTribe::TribeDBProxyMgr* p)
{
    p->__decRef();
}

void
ALiIMDBTribe::__write(::IceInternal::BasicStream* __os, const ::ALiIMDBTribe::TribeDBProxyMgrPrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
ALiIMDBTribe::__read(::IceInternal::BasicStream* __is, ::ALiIMDBTribe::TribeDBProxyMgrPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::ALiIMDBTribe::TribeDBProxyMgr;
        v->__copyFrom(proxy);
    }
}

void
ALiIMDBTribe::__write(::IceInternal::BasicStream* __os, const ::ALiIMDBTribe::TribeDBProxyMgrPtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

void
ALiIMDBTribe::__addObject(const TribeDBProxyMgrPtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
ALiIMDBTribe::__usesClasses(const TribeDBProxyMgrPtr& p)
{
    return p->__usesClasses();
}

void
ALiIMDBTribe::__decRefUnsafe(const TribeDBProxyMgrPtr& p)
{
    p->__decRefUnsafe();
}

void
ALiIMDBTribe::__clearHandleUnsafe(TribeDBProxyMgrPtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBStartTribe(const ::ALiIMDBTribe::STribeInfo& tribeInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBStartTribe_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBStartTribe(tribeInfo, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeInfo(::Ice::Int tribeId, ::ALiIMDBTribe::STribeInfo& tribeInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBGetTribeInfo(tribeId, tribeInfo, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateTribeInfo(const ::ALiIMDBTribe::STribeInfo& tribeInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBUpdateTribeInfo(tribeInfo, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateTribeMaster(::Ice::Int tribeId, const ::std::string& masterId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeMaster_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBUpdateTribeMaster(tribeId, masterId, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeActiveDegree(::Ice::Int tribeId, ::Ice::Int& onlineTimes, ::Ice::Double& onlineDegree, ::Ice::Int& discussDegree, ::Ice::Double& rewardDegree, ::Ice::Int& masterOffer, ::Ice::Double& totalDegree, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeActiveDegree_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBGetTribeActiveDegree(tribeId, onlineTimes, onlineDegree, discussDegree, rewardDegree, masterOffer, totalDegree, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateTribeActDegree(::Ice::Int tribeId, ::Ice::Double onlineDegree, ::Ice::Int discussDegree, ::Ice::Double rewardDegree, ::Ice::Double totalDegree, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeActDegree_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBUpdateTribeActDegree(tribeId, onlineDegree, discussDegree, rewardDegree, totalDegree, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBDeleteTribe(::Ice::Int tribeId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBDeleteTribe_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBDeleteTribe(tribeId, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBGetAddedTribeNum(const ::std::string& userId, ::Ice::Int& tribeNum, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBGetAddedTribeNum_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBGetAddedTribeNum(userId, tribeNum, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBCheckAddedTribeFull(const ::std::string& userId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBCheckAddedTribeFull_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBCheckAddedTribeFull(userId, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeMemberNum(::Ice::Int tribeId, ::Ice::Int level, ::Ice::Int& memberNum, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeMemberNum_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBGetTribeMemberNum(tribeId, level, memberNum, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBAddTribeMember(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, const ::std::string& operId, ::Ice::Long groupId, ::Ice::Int& blackStamp, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBAddTribeMember_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBAddTribeMember(tribeId, memberId, level, operId, groupId, blackStamp, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::TCAddTribeMember(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, ::Ice::Short openFlag, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__TCAddTribeMember_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->TCAddTribeMember(tribeId, memberId, level, openFlag, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeMember(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, ::ALiIMDBTribe::STribeMemberSeq& tribeMemberList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeMember_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBGetTribeMember(tribeId, memberId, level, tribeMemberList, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeMemberInfo(::Ice::Int tribeId, const ::std::string& memberId, ::ALiIMDBTribe::STribeMemberInfoSeq& tribeMemberInfoList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeMemberInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBGetTribeMemberInfo(tribeId, memberId, tribeMemberInfoList, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeMemberInfo2(::Ice::Int tribeId, const ::std::string& memberId, ::ALiIMDBTribe::STribeMemberInfoSeq2& tribeMemberInfoList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeMemberInfo2_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBGetTribeMemberInfo2(tribeId, memberId, tribeMemberInfoList, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBGetUserTribe(const ::std::string& userId, ::ALiIMDBTribe::STribeIdSeq& tribeIdList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBGetUserTribe_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBGetUserTribe(userId, tribeIdList, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBGetUserTribe2(const ::std::string& userId, ::ALiIMDBTribe::STribeIdSeq2& tribeIdList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBGetUserTribe2_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBGetUserTribe2(userId, tribeIdList, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateMemberLevel(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBUpdateMemberLevel_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBUpdateMemberLevel(tribeId, memberId, level, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateLastMsgId(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int msgId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBUpdateLastMsgId_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBUpdateLastMsgId(tribeId, memberId, msgId, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBDeleteMember(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, ::Ice::Int& blackStamp, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBDeleteMember_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBDeleteMember(tribeId, memberId, level, blackStamp, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBAddTribeOfflineMsg(::Ice::Int tribeId, const ::std::string& fromId, ::Ice::Int type, const ::std::string& message, ::Ice::Int sendTime, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBAddTribeOfflineMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBAddTribeOfflineMsg(tribeId, fromId, type, message, sendTime, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeOfflineMsg(::Ice::Int tribeId, ::ALiIMDBTribe::STribeOfflineMsgSeq& offlineMsgList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeOfflineMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBGetTribeOfflineMsg(tribeId, offlineMsgList, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBDelTribeOfflineMsg(::Ice::Int tribeId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBDelTribeOfflineMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBDelTribeOfflineMsg(tribeId, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBAddTribeOffMngMsg(::Ice::Int tribeId, const ::std::string& toId, ::Ice::Int type, const ::std::string& message, ::Ice::Int sendTime, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBAddTribeOffMngMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBAddTribeOffMngMsg(tribeId, toId, type, message, sendTime, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeOffMngMsg(::Ice::Int tribeId, const ::std::string& memberId, ::ALiIMDBTribe::STribeOfflineMsgSeq& offlineMsgList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeOffMngMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBGetTribeOffMngMsg(tribeId, memberId, offlineMsgList, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBDelTribeOffMngMsg(::Ice::Int tribeId, const ::std::string& memberId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBDelTribeOffMngMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBDelTribeOffMngMsg(tribeId, memberId, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBGetUserTribeConfig(const ::std::string& userId, ::Ice::Int& addVerify, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBGetUserTribeConfig_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBGetUserTribeConfig(userId, addVerify, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateUserTribeConfig(const ::std::string& userId, ::Ice::Int addVerify, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBUpdateUserTribeConfig_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBUpdateUserTribeConfig(userId, addVerify, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateTribeCard(::Ice::Int tribeId, const ::std::string& memberId, const ::ALiIMDBTribe::STribeCard& tribeCard, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeCard_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBUpdateTribeCard(tribeId, memberId, tribeCard, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeCard(::Ice::Int tribeId, const ::std::string& memberId, ::ALiIMDBTribe::STribeCard& tribeCard, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeCard_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBGetTribeCard(tribeId, memberId, tribeCard, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateMemberActDegree(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Double onlineActDegree, ::Ice::Int chatActDegree, ::Ice::Double rewardActDegree, ::Ice::Double totalActDegree, ::Ice::Int lastMsgid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBUpdateMemberActDegree_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBUpdateMemberActDegree(tribeId, memberId, onlineActDegree, chatActDegree, rewardActDegree, totalActDegree, lastMsgid, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeGroup(::Ice::Int tribeId, ::ALiIMDBTribe::STribeGroupSeq& tribeGroupList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBGetTribeGroup(tribeId, tribeGroupList, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBAddTribeGroup(::Ice::Int tribeId, const ::std::string& groupName, ::Ice::Long parentId, ::Ice::Long& groupId, ::Ice::Int& groupStamp, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBAddTribeGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBAddTribeGroup(tribeId, groupName, parentId, groupId, groupStamp, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateTribeGroup(::Ice::Int tribeId, ::Ice::Long groupId, const ::std::string& groupName, ::Ice::Int& groupStamp, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBUpdateTribeGroup(tribeId, groupId, groupName, groupStamp, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBDelTribeGroup(::Ice::Int tribeId, ::Ice::Long groupId, ::Ice::Int& groupStamp, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBDelTribeGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBDelTribeGroup(tribeId, groupId, groupStamp, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateUserGroup(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Long groupId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBUpdateUserGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBUpdateUserGroup(tribeId, memberId, groupId, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBAddStarMember(::Ice::Int tribeId, const ::std::string& memberId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBAddStarMember_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBAddStarMember(tribeId, memberId, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBDelStarMember(::Ice::Int tribeId, const ::std::string& memberId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBDelStarMember_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBDelStarMember(tribeId, memberId, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateOpenTribe(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Short openFlag, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBUpdateOpenTribe_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBUpdateOpenTribe(tribeId, memberId, openFlag, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBNotifyTribeInfo(const ::ALiIMDBTribe::STribeInfo& tribeInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBNotifyTribeInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBNotifyTribeInfo(tribeInfo, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeInfo2(::Ice::Int tribeId, ::ALiIMDBTribe::STribeInfo2& tribeInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeInfo2_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBGetTribeInfo2(tribeId, tribeInfo, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeInfo3(::Ice::Int tribeId, ::ALiIMDBTribe::STribeInfo3& tribeInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeInfo3_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBGetTribeInfo3(tribeId, tribeInfo, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBCreateTribe(const ::ALiIMDBTribe::STribeInfo2& tribeInfo, ::Ice::Int& tribeId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBCreateTribe_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBCreateTribe(tribeInfo, tribeId, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeIdByWebId(const ::std::string& serviceId, const ::std::string& webid, const ::std::string& webtid, ::Ice::Int& tribeId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeIdByWebId_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBGetTribeIdByWebId(serviceId, webid, webtid, tribeId, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBAddWebTribeMember(const ::ALiIMDBTribe::STribeMember2& memberInfo, ::Ice::Int& blackStamp, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBAddWebTribeMember_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBAddWebTribeMember(memberInfo, blackStamp, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBDeleteWebMember(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, ::Ice::Int& blackStamp, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBDeleteWebMember_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBDeleteWebMember(tribeId, memberId, level, blackStamp, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBGetAllWebTribeGroup(::ALiIMDBTribe::SWebTribeGroupSeq& groupList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBGetAllWebTribeGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBGetAllWebTribeGroup(groupList, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBGetWebTribeGroup(const ::std::string& serviceId, const ::std::string& webId, ::ALiIMDBTribe::SWebTribeGroup& groupInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBGetWebTribeGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBGetWebTribeGroup(serviceId, webId, groupInfo, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBGetWebTribeGroupById(::Ice::Long groupId, ::ALiIMDBTribe::SWebTribeGroup& groupInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBGetWebTribeGroupById_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBGetWebTribeGroupById(groupId, groupInfo, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBAddWebTribeGroup(const ::ALiIMDBTribe::SWebTribeGroup& groupInfo, ::Ice::Long& groupId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBAddWebTribeGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBAddWebTribeGroup(groupInfo, groupId, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateWebTribeGroupName(::Ice::Long groupId, const ::std::string& name, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBUpdateWebTribeGroupName_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBUpdateWebTribeGroupName(groupId, name, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBDelWebTribeGroup(::Ice::Long groupId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBDelWebTribeGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBDelWebTribeGroup(groupId, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBGetUserWebTribeGroup(const ::std::string& userId, ::ALiIMDBTribe::SWebTribeGroupSeq& groupList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBGetUserWebTribeGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBGetUserWebTribeGroup(userId, groupList, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBGetUserWebTribe(const ::std::string& userId, ::ALiIMDBTribe::SWebTribeIdSeq& tribeList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBGetUserWebTribe_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBGetUserWebTribe(userId, tribeList, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateTribeInfo2(const ::ALiIMDBTribe::STribeInfo2& tribeInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeInfo2_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBUpdateTribeInfo2(tribeInfo, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBNotifyWebTribeInfo(const ::ALiIMDBTribe::STribeInfo2& tribeInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBNotifyWebTribeInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBNotifyWebTribeInfo(tribeInfo, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBSyncWebTribe(const ::std::string& serviceId, const ::std::string& webId, const ::ALiIMDBTribe::STribeInfo2& tribeInfo, const ::ALiIMDBTribe::STribeMember2Seq& memberList, ::Ice::Int& tribeId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBSyncWebTribe_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBSyncWebTribe(serviceId, webId, tribeInfo, memberList, tribeId, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBGetWebUserDisactiveTribe(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& webUid, ::Ice::IntSeq& tribeList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBGetWebUserDisactiveTribe_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBGetWebUserDisactiveTribe(serviceId, webId, webUid, tribeList, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBGetWebUserActiveTribe(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& userId, ::Ice::IntSeq& tribeList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBGetWebUserActiveTribe_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBGetWebUserActiveTribe(serviceId, webId, userId, tribeList, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBActiveTribeWebMember(::Ice::Int tribeId, const ::std::string& webuid, const ::std::string& memberId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBActiveTribeWebMember_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBActiveTribeWebMember(tribeId, webuid, memberId, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBDisactiveTribeWebMember(::Ice::Int tribeId, const ::std::string& webuid, const ::std::string& memberId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBDisactiveTribeWebMember_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBDisactiveTribeWebMember(tribeId, webuid, memberId, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBDeleteWebTribe(::Ice::Int tribeId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBDeleteWebTribe_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBDeleteWebTribe(tribeId, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateTribeMsgSetting(::Ice::Int tribeId, const ::std::string& userId, ::Ice::Short popflag, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeMsgSetting_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBUpdateTribeMsgSetting(tribeId, userId, popflag, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBTransferTribe(::Ice::Int tribeId, const ::std::string& userId, const ::std::string& transferId, ::std::string& vacantId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBTransferTribe_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBTransferTribe(tribeId, userId, transferId, vacantId, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBCheckAddedTribeFull2(const ::std::string& userId, bool& limit, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBCheckAddedTribeFull2_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBCheckAddedTribeFull2(userId, limit, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateTribeLimit(::Ice::Int tribeId, ::Ice::Int limit, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeLimit_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBUpdateTribeLimit(tribeId, limit, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBIncrUserTribes(const ::std::string& userId, ::Ice::Int tribeNum, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBIncrUserTribes_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBIncrUserTribes(userId, tribeNum, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::DBGetUserTribeNum(const ::std::string& userId, ::Ice::Int& tribeNum, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBTribe__TribeDBProxyMgr__DBGetUserTribeNum_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBTribe::TribeDBProxyMgr*>(__delBase.get());
            return __del->DBGetUserTribeNum(userId, tribeNum, __ctx);
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
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::ice_staticId()
{
    return ::ALiIMDBTribe::TribeDBProxyMgr::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::ALiIMDBTribe::TribeDBProxyMgr::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr);
}

bool
IceProxy::ALiIMDBTribe::operator==(const ::IceProxy::ALiIMDBTribe::TribeDBProxyMgr& l, const ::IceProxy::ALiIMDBTribe::TribeDBProxyMgr& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::ALiIMDBTribe::operator!=(const ::IceProxy::ALiIMDBTribe::TribeDBProxyMgr& l, const ::IceProxy::ALiIMDBTribe::TribeDBProxyMgr& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::ALiIMDBTribe::operator<(const ::IceProxy::ALiIMDBTribe::TribeDBProxyMgr& l, const ::IceProxy::ALiIMDBTribe::TribeDBProxyMgr& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::ALiIMDBTribe::operator<=(const ::IceProxy::ALiIMDBTribe::TribeDBProxyMgr& l, const ::IceProxy::ALiIMDBTribe::TribeDBProxyMgr& r)
{
    return l < r || l == r;
}

bool
IceProxy::ALiIMDBTribe::operator>(const ::IceProxy::ALiIMDBTribe::TribeDBProxyMgr& l, const ::IceProxy::ALiIMDBTribe::TribeDBProxyMgr& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::ALiIMDBTribe::operator>=(const ::IceProxy::ALiIMDBTribe::TribeDBProxyMgr& l, const ::IceProxy::ALiIMDBTribe::TribeDBProxyMgr& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBStartTribe(const ::ALiIMDBTribe::STribeInfo& tribeInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBStartTribe_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        tribeInfo.__write(__os);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeInfo(::Ice::Int tribeId, ::ALiIMDBTribe::STribeInfo& tribeInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
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
        tribeInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateTribeInfo(const ::ALiIMDBTribe::STribeInfo& tribeInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        tribeInfo.__write(__os);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateTribeMaster(::Ice::Int tribeId, const ::std::string& masterId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeMaster_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(masterId);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeActiveDegree(::Ice::Int tribeId, ::Ice::Int& onlineTimes, ::Ice::Double& onlineDegree, ::Ice::Int& discussDegree, ::Ice::Double& rewardDegree, ::Ice::Int& masterOffer, ::Ice::Double& totalDegree, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeActiveDegree_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
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
        __is->read(onlineTimes);
        __is->read(onlineDegree);
        __is->read(discussDegree);
        __is->read(rewardDegree);
        __is->read(masterOffer);
        __is->read(totalDegree);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateTribeActDegree(::Ice::Int tribeId, ::Ice::Double onlineDegree, ::Ice::Int discussDegree, ::Ice::Double rewardDegree, ::Ice::Double totalDegree, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeActDegree_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(onlineDegree);
        __os->write(discussDegree);
        __os->write(rewardDegree);
        __os->write(totalDegree);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBDeleteTribe(::Ice::Int tribeId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBDeleteTribe_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBGetAddedTribeNum(const ::std::string& userId, ::Ice::Int& tribeNum, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBGetAddedTribeNum_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        __is->read(tribeNum);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBCheckAddedTribeFull(const ::std::string& userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBCheckAddedTribeFull_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeMemberNum(::Ice::Int tribeId, ::Ice::Int level, ::Ice::Int& memberNum, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeMemberNum_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(level);
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
        __is->read(memberNum);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBAddTribeMember(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, const ::std::string& operId, ::Ice::Long groupId, ::Ice::Int& blackStamp, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBAddTribeMember_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(memberId);
        __os->write(level);
        __os->write(operId);
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
        __is->read(blackStamp);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::TCAddTribeMember(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, ::Ice::Short openFlag, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__TCAddTribeMember_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(memberId);
        __os->write(level);
        __os->write(openFlag);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeMember(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, ::ALiIMDBTribe::STribeMemberSeq& tribeMemberList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeMember_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(memberId);
        __os->write(level);
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
        ::ALiIMDBTribe::__read(__is, tribeMemberList, ::ALiIMDBTribe::__U__STribeMemberSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeMemberInfo(::Ice::Int tribeId, const ::std::string& memberId, ::ALiIMDBTribe::STribeMemberInfoSeq& tribeMemberInfoList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeMemberInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(memberId);
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
        ::ALiIMDBTribe::__read(__is, tribeMemberInfoList, ::ALiIMDBTribe::__U__STribeMemberInfoSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeMemberInfo2(::Ice::Int tribeId, const ::std::string& memberId, ::ALiIMDBTribe::STribeMemberInfoSeq2& tribeMemberInfoList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeMemberInfo2_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(memberId);
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
        ::ALiIMDBTribe::__read(__is, tribeMemberInfoList, ::ALiIMDBTribe::__U__STribeMemberInfoSeq2());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBGetUserTribe(const ::std::string& userId, ::ALiIMDBTribe::STribeIdSeq& tribeIdList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBGetUserTribe_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        ::ALiIMDBTribe::__read(__is, tribeIdList, ::ALiIMDBTribe::__U__STribeIdSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBGetUserTribe2(const ::std::string& userId, ::ALiIMDBTribe::STribeIdSeq2& tribeIdList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBGetUserTribe2_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        ::ALiIMDBTribe::__read(__is, tribeIdList, ::ALiIMDBTribe::__U__STribeIdSeq2());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateMemberLevel(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateMemberLevel_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(memberId);
        __os->write(level);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateLastMsgId(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int msgId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateLastMsgId_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(memberId);
        __os->write(msgId);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBDeleteMember(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, ::Ice::Int& blackStamp, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBDeleteMember_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(memberId);
        __os->write(level);
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
        __is->read(blackStamp);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBAddTribeOfflineMsg(::Ice::Int tribeId, const ::std::string& fromId, ::Ice::Int type, const ::std::string& message, ::Ice::Int sendTime, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBAddTribeOfflineMsg_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(fromId);
        __os->write(type);
        __os->write(message);
        __os->write(sendTime);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeOfflineMsg(::Ice::Int tribeId, ::ALiIMDBTribe::STribeOfflineMsgSeq& offlineMsgList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeOfflineMsg_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
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
        ::ALiIMDBTribe::__read(__is, offlineMsgList, ::ALiIMDBTribe::__U__STribeOfflineMsgSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBDelTribeOfflineMsg(::Ice::Int tribeId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBDelTribeOfflineMsg_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBAddTribeOffMngMsg(::Ice::Int tribeId, const ::std::string& toId, ::Ice::Int type, const ::std::string& message, ::Ice::Int sendTime, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBAddTribeOffMngMsg_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(toId);
        __os->write(type);
        __os->write(message);
        __os->write(sendTime);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeOffMngMsg(::Ice::Int tribeId, const ::std::string& memberId, ::ALiIMDBTribe::STribeOfflineMsgSeq& offlineMsgList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeOffMngMsg_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(memberId);
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
        ::ALiIMDBTribe::__read(__is, offlineMsgList, ::ALiIMDBTribe::__U__STribeOfflineMsgSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBDelTribeOffMngMsg(::Ice::Int tribeId, const ::std::string& memberId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBDelTribeOffMngMsg_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(memberId);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBGetUserTribeConfig(const ::std::string& userId, ::Ice::Int& addVerify, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBGetUserTribeConfig_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        __is->read(addVerify);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateUserTribeConfig(const ::std::string& userId, ::Ice::Int addVerify, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateUserTribeConfig_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(addVerify);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateTribeCard(::Ice::Int tribeId, const ::std::string& memberId, const ::ALiIMDBTribe::STribeCard& tribeCard, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeCard_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(memberId);
        tribeCard.__write(__os);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeCard(::Ice::Int tribeId, const ::std::string& memberId, ::ALiIMDBTribe::STribeCard& tribeCard, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeCard_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(memberId);
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
        tribeCard.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateMemberActDegree(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Double onlineActDegree, ::Ice::Int chatActDegree, ::Ice::Double rewardActDegree, ::Ice::Double totalActDegree, ::Ice::Int lastMsgid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateMemberActDegree_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(memberId);
        __os->write(onlineActDegree);
        __os->write(chatActDegree);
        __os->write(rewardActDegree);
        __os->write(totalActDegree);
        __os->write(lastMsgid);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeGroup(::Ice::Int tribeId, ::ALiIMDBTribe::STribeGroupSeq& tribeGroupList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeGroup_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
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
        ::ALiIMDBTribe::__read(__is, tribeGroupList, ::ALiIMDBTribe::__U__STribeGroupSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBAddTribeGroup(::Ice::Int tribeId, const ::std::string& groupName, ::Ice::Long parentId, ::Ice::Long& groupId, ::Ice::Int& groupStamp, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBAddTribeGroup_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(groupName);
        __os->write(parentId);
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
        __is->read(groupStamp);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateTribeGroup(::Ice::Int tribeId, ::Ice::Long groupId, const ::std::string& groupName, ::Ice::Int& groupStamp, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeGroup_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(groupId);
        __os->write(groupName);
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
        __is->read(groupStamp);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBDelTribeGroup(::Ice::Int tribeId, ::Ice::Long groupId, ::Ice::Int& groupStamp, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBDelTribeGroup_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
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
        __is->read(groupStamp);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateUserGroup(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Long groupId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateUserGroup_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(memberId);
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBAddStarMember(::Ice::Int tribeId, const ::std::string& memberId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBAddStarMember_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(memberId);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBDelStarMember(::Ice::Int tribeId, const ::std::string& memberId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBDelStarMember_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(memberId);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateOpenTribe(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Short openFlag, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateOpenTribe_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(memberId);
        __os->write(openFlag);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBNotifyTribeInfo(const ::ALiIMDBTribe::STribeInfo& tribeInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBNotifyTribeInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        tribeInfo.__write(__os);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeInfo2(::Ice::Int tribeId, ::ALiIMDBTribe::STribeInfo2& tribeInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeInfo2_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
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
        tribeInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeInfo3(::Ice::Int tribeId, ::ALiIMDBTribe::STribeInfo3& tribeInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeInfo3_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
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
        tribeInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBCreateTribe(const ::ALiIMDBTribe::STribeInfo2& tribeInfo, ::Ice::Int& tribeId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBCreateTribe_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        tribeInfo.__write(__os);
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
        __is->read(tribeId);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeIdByWebId(const ::std::string& serviceId, const ::std::string& webid, const ::std::string& webtid, ::Ice::Int& tribeId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeIdByWebId_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(serviceId);
        __os->write(webid);
        __os->write(webtid);
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
        __is->read(tribeId);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBAddWebTribeMember(const ::ALiIMDBTribe::STribeMember2& memberInfo, ::Ice::Int& blackStamp, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBAddWebTribeMember_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        memberInfo.__write(__os);
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
        __is->read(blackStamp);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBDeleteWebMember(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, ::Ice::Int& blackStamp, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBDeleteWebMember_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(memberId);
        __os->write(level);
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
        __is->read(blackStamp);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBGetAllWebTribeGroup(::ALiIMDBTribe::SWebTribeGroupSeq& groupList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBGetAllWebTribeGroup_name, ::Ice::Normal, __context, __compress);
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
        ::ALiIMDBTribe::__read(__is, groupList, ::ALiIMDBTribe::__U__SWebTribeGroupSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBGetWebTribeGroup(const ::std::string& serviceId, const ::std::string& webId, ::ALiIMDBTribe::SWebTribeGroup& groupInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBGetWebTribeGroup_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(serviceId);
        __os->write(webId);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBGetWebTribeGroupById(::Ice::Long groupId, ::ALiIMDBTribe::SWebTribeGroup& groupInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBGetWebTribeGroupById_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBAddWebTribeGroup(const ::ALiIMDBTribe::SWebTribeGroup& groupInfo, ::Ice::Long& groupId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBAddWebTribeGroup_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateWebTribeGroupName(::Ice::Long groupId, const ::std::string& name, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateWebTribeGroupName_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(groupId);
        __os->write(name);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBDelWebTribeGroup(::Ice::Long groupId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBDelWebTribeGroup_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBGetUserWebTribeGroup(const ::std::string& userId, ::ALiIMDBTribe::SWebTribeGroupSeq& groupList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBGetUserWebTribeGroup_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        ::ALiIMDBTribe::__read(__is, groupList, ::ALiIMDBTribe::__U__SWebTribeGroupSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBGetUserWebTribe(const ::std::string& userId, ::ALiIMDBTribe::SWebTribeIdSeq& tribeList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBGetUserWebTribe_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        ::ALiIMDBTribe::__read(__is, tribeList, ::ALiIMDBTribe::__U__SWebTribeIdSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateTribeInfo2(const ::ALiIMDBTribe::STribeInfo2& tribeInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeInfo2_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        tribeInfo.__write(__os);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBNotifyWebTribeInfo(const ::ALiIMDBTribe::STribeInfo2& tribeInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBNotifyWebTribeInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        tribeInfo.__write(__os);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBSyncWebTribe(const ::std::string& serviceId, const ::std::string& webId, const ::ALiIMDBTribe::STribeInfo2& tribeInfo, const ::ALiIMDBTribe::STribeMember2Seq& memberList, ::Ice::Int& tribeId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBSyncWebTribe_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(serviceId);
        __os->write(webId);
        tribeInfo.__write(__os);
        if(memberList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::ALiIMDBTribe::__write(__os, &memberList[0], &memberList[0] + memberList.size(), ::ALiIMDBTribe::__U__STribeMember2Seq());
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
        __is->read(tribeId);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBGetWebUserDisactiveTribe(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& webUid, ::Ice::IntSeq& tribeList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBGetWebUserDisactiveTribe_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(serviceId);
        __os->write(webId);
        __os->write(webUid);
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
        __is->read(tribeList);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBGetWebUserActiveTribe(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& userId, ::Ice::IntSeq& tribeList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBGetWebUserActiveTribe_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(serviceId);
        __os->write(webId);
        __os->write(userId);
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
        __is->read(tribeList);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBActiveTribeWebMember(::Ice::Int tribeId, const ::std::string& webuid, const ::std::string& memberId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBActiveTribeWebMember_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(webuid);
        __os->write(memberId);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBDisactiveTribeWebMember(::Ice::Int tribeId, const ::std::string& webuid, const ::std::string& memberId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBDisactiveTribeWebMember_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(webuid);
        __os->write(memberId);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBDeleteWebTribe(::Ice::Int tribeId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBDeleteWebTribe_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateTribeMsgSetting(::Ice::Int tribeId, const ::std::string& userId, ::Ice::Short popflag, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeMsgSetting_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(userId);
        __os->write(popflag);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBTransferTribe(::Ice::Int tribeId, const ::std::string& userId, const ::std::string& transferId, ::std::string& vacantId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBTransferTribe_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(userId);
        __os->write(transferId);
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
        __is->read(vacantId);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBCheckAddedTribeFull2(const ::std::string& userId, bool& limit, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBCheckAddedTribeFull2_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        __is->read(limit);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateTribeLimit(::Ice::Int tribeId, ::Ice::Int limit, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeLimit_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(limit);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBIncrUserTribes(const ::std::string& userId, ::Ice::Int tribeNum, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBIncrUserTribes_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(tribeNum);
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
IceDelegateM::ALiIMDBTribe::TribeDBProxyMgr::DBGetUserTribeNum(const ::std::string& userId, ::Ice::Int& tribeNum, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBTribe__TribeDBProxyMgr__DBGetUserTribeNum_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        __is->read(tribeNum);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBStartTribe(const ::ALiIMDBTribe::STribeInfo& tribeInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBStartTribe_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBStartTribe(tribeInfo, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeInfo(::Ice::Int tribeId, ::ALiIMDBTribe::STribeInfo& tribeInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetTribeInfo(tribeId, tribeInfo, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateTribeInfo(const ::ALiIMDBTribe::STribeInfo& tribeInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBUpdateTribeInfo(tribeInfo, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateTribeMaster(::Ice::Int tribeId, const ::std::string& masterId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeMaster_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBUpdateTribeMaster(tribeId, masterId, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeActiveDegree(::Ice::Int tribeId, ::Ice::Int& onlineTimes, ::Ice::Double& onlineDegree, ::Ice::Int& discussDegree, ::Ice::Double& rewardDegree, ::Ice::Int& masterOffer, ::Ice::Double& totalDegree, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeActiveDegree_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetTribeActiveDegree(tribeId, onlineTimes, onlineDegree, discussDegree, rewardDegree, masterOffer, totalDegree, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateTribeActDegree(::Ice::Int tribeId, ::Ice::Double onlineDegree, ::Ice::Int discussDegree, ::Ice::Double rewardDegree, ::Ice::Double totalDegree, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeActDegree_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBUpdateTribeActDegree(tribeId, onlineDegree, discussDegree, rewardDegree, totalDegree, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBDeleteTribe(::Ice::Int tribeId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBDeleteTribe_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBDeleteTribe(tribeId, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBGetAddedTribeNum(const ::std::string& userId, ::Ice::Int& tribeNum, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBGetAddedTribeNum_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetAddedTribeNum(userId, tribeNum, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBCheckAddedTribeFull(const ::std::string& userId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBCheckAddedTribeFull_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBCheckAddedTribeFull(userId, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeMemberNum(::Ice::Int tribeId, ::Ice::Int level, ::Ice::Int& memberNum, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeMemberNum_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetTribeMemberNum(tribeId, level, memberNum, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBAddTribeMember(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, const ::std::string& operId, ::Ice::Long groupId, ::Ice::Int& blackStamp, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBAddTribeMember_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBAddTribeMember(tribeId, memberId, level, operId, groupId, blackStamp, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::TCAddTribeMember(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, ::Ice::Short openFlag, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__TCAddTribeMember_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->TCAddTribeMember(tribeId, memberId, level, openFlag, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeMember(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, ::ALiIMDBTribe::STribeMemberSeq& tribeMemberList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeMember_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetTribeMember(tribeId, memberId, level, tribeMemberList, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeMemberInfo(::Ice::Int tribeId, const ::std::string& memberId, ::ALiIMDBTribe::STribeMemberInfoSeq& tribeMemberInfoList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeMemberInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetTribeMemberInfo(tribeId, memberId, tribeMemberInfoList, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeMemberInfo2(::Ice::Int tribeId, const ::std::string& memberId, ::ALiIMDBTribe::STribeMemberInfoSeq2& tribeMemberInfoList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeMemberInfo2_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetTribeMemberInfo2(tribeId, memberId, tribeMemberInfoList, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBGetUserTribe(const ::std::string& userId, ::ALiIMDBTribe::STribeIdSeq& tribeIdList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBGetUserTribe_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetUserTribe(userId, tribeIdList, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBGetUserTribe2(const ::std::string& userId, ::ALiIMDBTribe::STribeIdSeq2& tribeIdList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBGetUserTribe2_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetUserTribe2(userId, tribeIdList, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateMemberLevel(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateMemberLevel_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBUpdateMemberLevel(tribeId, memberId, level, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateLastMsgId(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int msgId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateLastMsgId_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBUpdateLastMsgId(tribeId, memberId, msgId, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBDeleteMember(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, ::Ice::Int& blackStamp, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBDeleteMember_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBDeleteMember(tribeId, memberId, level, blackStamp, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBAddTribeOfflineMsg(::Ice::Int tribeId, const ::std::string& fromId, ::Ice::Int type, const ::std::string& message, ::Ice::Int sendTime, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBAddTribeOfflineMsg_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBAddTribeOfflineMsg(tribeId, fromId, type, message, sendTime, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeOfflineMsg(::Ice::Int tribeId, ::ALiIMDBTribe::STribeOfflineMsgSeq& offlineMsgList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeOfflineMsg_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetTribeOfflineMsg(tribeId, offlineMsgList, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBDelTribeOfflineMsg(::Ice::Int tribeId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBDelTribeOfflineMsg_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBDelTribeOfflineMsg(tribeId, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBAddTribeOffMngMsg(::Ice::Int tribeId, const ::std::string& toId, ::Ice::Int type, const ::std::string& message, ::Ice::Int sendTime, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBAddTribeOffMngMsg_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBAddTribeOffMngMsg(tribeId, toId, type, message, sendTime, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeOffMngMsg(::Ice::Int tribeId, const ::std::string& memberId, ::ALiIMDBTribe::STribeOfflineMsgSeq& offlineMsgList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeOffMngMsg_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetTribeOffMngMsg(tribeId, memberId, offlineMsgList, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBDelTribeOffMngMsg(::Ice::Int tribeId, const ::std::string& memberId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBDelTribeOffMngMsg_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBDelTribeOffMngMsg(tribeId, memberId, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBGetUserTribeConfig(const ::std::string& userId, ::Ice::Int& addVerify, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBGetUserTribeConfig_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetUserTribeConfig(userId, addVerify, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateUserTribeConfig(const ::std::string& userId, ::Ice::Int addVerify, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateUserTribeConfig_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBUpdateUserTribeConfig(userId, addVerify, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateTribeCard(::Ice::Int tribeId, const ::std::string& memberId, const ::ALiIMDBTribe::STribeCard& tribeCard, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeCard_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBUpdateTribeCard(tribeId, memberId, tribeCard, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeCard(::Ice::Int tribeId, const ::std::string& memberId, ::ALiIMDBTribe::STribeCard& tribeCard, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeCard_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetTribeCard(tribeId, memberId, tribeCard, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateMemberActDegree(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Double onlineActDegree, ::Ice::Int chatActDegree, ::Ice::Double rewardActDegree, ::Ice::Double totalActDegree, ::Ice::Int lastMsgid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateMemberActDegree_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBUpdateMemberActDegree(tribeId, memberId, onlineActDegree, chatActDegree, rewardActDegree, totalActDegree, lastMsgid, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeGroup(::Ice::Int tribeId, ::ALiIMDBTribe::STribeGroupSeq& tribeGroupList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeGroup_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetTribeGroup(tribeId, tribeGroupList, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBAddTribeGroup(::Ice::Int tribeId, const ::std::string& groupName, ::Ice::Long parentId, ::Ice::Long& groupId, ::Ice::Int& groupStamp, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBAddTribeGroup_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBAddTribeGroup(tribeId, groupName, parentId, groupId, groupStamp, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateTribeGroup(::Ice::Int tribeId, ::Ice::Long groupId, const ::std::string& groupName, ::Ice::Int& groupStamp, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeGroup_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBUpdateTribeGroup(tribeId, groupId, groupName, groupStamp, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBDelTribeGroup(::Ice::Int tribeId, ::Ice::Long groupId, ::Ice::Int& groupStamp, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBDelTribeGroup_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBDelTribeGroup(tribeId, groupId, groupStamp, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateUserGroup(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Long groupId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateUserGroup_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBUpdateUserGroup(tribeId, memberId, groupId, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBAddStarMember(::Ice::Int tribeId, const ::std::string& memberId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBAddStarMember_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBAddStarMember(tribeId, memberId, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBDelStarMember(::Ice::Int tribeId, const ::std::string& memberId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBDelStarMember_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBDelStarMember(tribeId, memberId, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateOpenTribe(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Short openFlag, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateOpenTribe_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBUpdateOpenTribe(tribeId, memberId, openFlag, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBNotifyTribeInfo(const ::ALiIMDBTribe::STribeInfo& tribeInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBNotifyTribeInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBNotifyTribeInfo(tribeInfo, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeInfo2(::Ice::Int tribeId, ::ALiIMDBTribe::STribeInfo2& tribeInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeInfo2_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetTribeInfo2(tribeId, tribeInfo, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeInfo3(::Ice::Int tribeId, ::ALiIMDBTribe::STribeInfo3& tribeInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeInfo3_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetTribeInfo3(tribeId, tribeInfo, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBCreateTribe(const ::ALiIMDBTribe::STribeInfo2& tribeInfo, ::Ice::Int& tribeId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBCreateTribe_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBCreateTribe(tribeInfo, tribeId, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBGetTribeIdByWebId(const ::std::string& serviceId, const ::std::string& webid, const ::std::string& webtid, ::Ice::Int& tribeId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBGetTribeIdByWebId_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetTribeIdByWebId(serviceId, webid, webtid, tribeId, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBAddWebTribeMember(const ::ALiIMDBTribe::STribeMember2& memberInfo, ::Ice::Int& blackStamp, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBAddWebTribeMember_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBAddWebTribeMember(memberInfo, blackStamp, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBDeleteWebMember(::Ice::Int tribeId, const ::std::string& memberId, ::Ice::Int level, ::Ice::Int& blackStamp, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBDeleteWebMember_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBDeleteWebMember(tribeId, memberId, level, blackStamp, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBGetAllWebTribeGroup(::ALiIMDBTribe::SWebTribeGroupSeq& groupList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBGetAllWebTribeGroup_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetAllWebTribeGroup(groupList, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBGetWebTribeGroup(const ::std::string& serviceId, const ::std::string& webId, ::ALiIMDBTribe::SWebTribeGroup& groupInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBGetWebTribeGroup_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetWebTribeGroup(serviceId, webId, groupInfo, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBGetWebTribeGroupById(::Ice::Long groupId, ::ALiIMDBTribe::SWebTribeGroup& groupInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBGetWebTribeGroupById_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetWebTribeGroupById(groupId, groupInfo, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBAddWebTribeGroup(const ::ALiIMDBTribe::SWebTribeGroup& groupInfo, ::Ice::Long& groupId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBAddWebTribeGroup_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBAddWebTribeGroup(groupInfo, groupId, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateWebTribeGroupName(::Ice::Long groupId, const ::std::string& name, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateWebTribeGroupName_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBUpdateWebTribeGroupName(groupId, name, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBDelWebTribeGroup(::Ice::Long groupId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBDelWebTribeGroup_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBDelWebTribeGroup(groupId, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBGetUserWebTribeGroup(const ::std::string& userId, ::ALiIMDBTribe::SWebTribeGroupSeq& groupList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBGetUserWebTribeGroup_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetUserWebTribeGroup(userId, groupList, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBGetUserWebTribe(const ::std::string& userId, ::ALiIMDBTribe::SWebTribeIdSeq& tribeList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBGetUserWebTribe_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetUserWebTribe(userId, tribeList, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateTribeInfo2(const ::ALiIMDBTribe::STribeInfo2& tribeInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeInfo2_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBUpdateTribeInfo2(tribeInfo, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBNotifyWebTribeInfo(const ::ALiIMDBTribe::STribeInfo2& tribeInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBNotifyWebTribeInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBNotifyWebTribeInfo(tribeInfo, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBSyncWebTribe(const ::std::string& serviceId, const ::std::string& webId, const ::ALiIMDBTribe::STribeInfo2& tribeInfo, const ::ALiIMDBTribe::STribeMember2Seq& memberList, ::Ice::Int& tribeId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBSyncWebTribe_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBSyncWebTribe(serviceId, webId, tribeInfo, memberList, tribeId, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBGetWebUserDisactiveTribe(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& webUid, ::Ice::IntSeq& tribeList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBGetWebUserDisactiveTribe_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetWebUserDisactiveTribe(serviceId, webId, webUid, tribeList, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBGetWebUserActiveTribe(const ::std::string& serviceId, const ::std::string& webId, const ::std::string& userId, ::Ice::IntSeq& tribeList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBGetWebUserActiveTribe_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetWebUserActiveTribe(serviceId, webId, userId, tribeList, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBActiveTribeWebMember(::Ice::Int tribeId, const ::std::string& webuid, const ::std::string& memberId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBActiveTribeWebMember_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBActiveTribeWebMember(tribeId, webuid, memberId, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBDisactiveTribeWebMember(::Ice::Int tribeId, const ::std::string& webuid, const ::std::string& memberId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBDisactiveTribeWebMember_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBDisactiveTribeWebMember(tribeId, webuid, memberId, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBDeleteWebTribe(::Ice::Int tribeId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBDeleteWebTribe_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBDeleteWebTribe(tribeId, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateTribeMsgSetting(::Ice::Int tribeId, const ::std::string& userId, ::Ice::Short popflag, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeMsgSetting_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBUpdateTribeMsgSetting(tribeId, userId, popflag, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBTransferTribe(::Ice::Int tribeId, const ::std::string& userId, const ::std::string& transferId, ::std::string& vacantId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBTransferTribe_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBTransferTribe(tribeId, userId, transferId, vacantId, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBCheckAddedTribeFull2(const ::std::string& userId, bool& limit, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBCheckAddedTribeFull2_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBCheckAddedTribeFull2(userId, limit, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBUpdateTribeLimit(::Ice::Int tribeId, ::Ice::Int limit, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBUpdateTribeLimit_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBUpdateTribeLimit(tribeId, limit, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBIncrUserTribes(const ::std::string& userId, ::Ice::Int tribeNum, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBIncrUserTribes_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBIncrUserTribes(userId, tribeNum, __current);
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
IceDelegateD::ALiIMDBTribe::TribeDBProxyMgr::DBGetUserTribeNum(const ::std::string& userId, ::Ice::Int& tribeNum, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBTribe__TribeDBProxyMgr__DBGetUserTribeNum_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBTribe::TribeDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBTribe::TribeDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetUserTribeNum(userId, tribeNum, __current);
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
ALiIMDBTribe::TribeDBProxyMgr::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __ALiIMDBTribe__TribeDBProxyMgr_ids[2] =
{
    "::ALiIMDBTribe::TribeDBProxyMgr",
    "::Ice::Object"
};

bool
ALiIMDBTribe::TribeDBProxyMgr::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__ALiIMDBTribe__TribeDBProxyMgr_ids, __ALiIMDBTribe__TribeDBProxyMgr_ids + 2, _s);
}

::std::vector< ::std::string>
ALiIMDBTribe::TribeDBProxyMgr::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__ALiIMDBTribe__TribeDBProxyMgr_ids[0], &__ALiIMDBTribe__TribeDBProxyMgr_ids[2]);
}

const ::std::string&
ALiIMDBTribe::TribeDBProxyMgr::ice_id(const ::Ice::Current&) const
{
    return __ALiIMDBTribe__TribeDBProxyMgr_ids[0];
}

const ::std::string&
ALiIMDBTribe::TribeDBProxyMgr::ice_staticId()
{
    return __ALiIMDBTribe__TribeDBProxyMgr_ids[0];
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBStartTribe(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::ALiIMDBTribe::STribeInfo tribeInfo;
    tribeInfo.__read(__is);
    ::Ice::Int __ret = DBStartTribe(tribeInfo, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBGetTribeInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    __is->read(tribeId);
    ::ALiIMDBTribe::STribeInfo tribeInfo;
    ::Ice::Int __ret = DBGetTribeInfo(tribeId, tribeInfo, __current);
    tribeInfo.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBUpdateTribeInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::ALiIMDBTribe::STribeInfo tribeInfo;
    tribeInfo.__read(__is);
    ::Ice::Int __ret = DBUpdateTribeInfo(tribeInfo, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBUpdateTribeMaster(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::std::string masterId;
    __is->read(tribeId);
    __is->read(masterId);
    ::Ice::Int __ret = DBUpdateTribeMaster(tribeId, masterId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBGetTribeActiveDegree(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    __is->read(tribeId);
    ::Ice::Int onlineTimes;
    ::Ice::Double onlineDegree;
    ::Ice::Int discussDegree;
    ::Ice::Double rewardDegree;
    ::Ice::Int masterOffer;
    ::Ice::Double totalDegree;
    ::Ice::Int __ret = DBGetTribeActiveDegree(tribeId, onlineTimes, onlineDegree, discussDegree, rewardDegree, masterOffer, totalDegree, __current);
    __os->write(onlineTimes);
    __os->write(onlineDegree);
    __os->write(discussDegree);
    __os->write(rewardDegree);
    __os->write(masterOffer);
    __os->write(totalDegree);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBUpdateTribeActDegree(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::Ice::Double onlineDegree;
    ::Ice::Int discussDegree;
    ::Ice::Double rewardDegree;
    ::Ice::Double totalDegree;
    __is->read(tribeId);
    __is->read(onlineDegree);
    __is->read(discussDegree);
    __is->read(rewardDegree);
    __is->read(totalDegree);
    ::Ice::Int __ret = DBUpdateTribeActDegree(tribeId, onlineDegree, discussDegree, rewardDegree, totalDegree, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBDeleteTribe(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    __is->read(tribeId);
    ::Ice::Int __ret = DBDeleteTribe(tribeId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBGetAddedTribeNum(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::Ice::Int tribeNum;
    ::Ice::Int __ret = DBGetAddedTribeNum(userId, tribeNum, __current);
    __os->write(tribeNum);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBCheckAddedTribeFull(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::Ice::Int __ret = DBCheckAddedTribeFull(userId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBGetTribeMemberNum(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::Ice::Int level;
    __is->read(tribeId);
    __is->read(level);
    ::Ice::Int memberNum;
    ::Ice::Int __ret = DBGetTribeMemberNum(tribeId, level, memberNum, __current);
    __os->write(memberNum);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBAddTribeMember(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::std::string memberId;
    ::Ice::Int level;
    ::std::string operId;
    ::Ice::Long groupId;
    __is->read(tribeId);
    __is->read(memberId);
    __is->read(level);
    __is->read(operId);
    __is->read(groupId);
    ::Ice::Int blackStamp;
    ::Ice::Int __ret = DBAddTribeMember(tribeId, memberId, level, operId, groupId, blackStamp, __current);
    __os->write(blackStamp);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___TCAddTribeMember(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::std::string memberId;
    ::Ice::Int level;
    ::Ice::Short openFlag;
    __is->read(tribeId);
    __is->read(memberId);
    __is->read(level);
    __is->read(openFlag);
    ::Ice::Int __ret = TCAddTribeMember(tribeId, memberId, level, openFlag, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBGetTribeMember(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::std::string memberId;
    ::Ice::Int level;
    __is->read(tribeId);
    __is->read(memberId);
    __is->read(level);
    ::ALiIMDBTribe::STribeMemberSeq tribeMemberList;
    ::Ice::Int __ret = DBGetTribeMember(tribeId, memberId, level, tribeMemberList, __current);
    if(tribeMemberList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::ALiIMDBTribe::__write(__os, &tribeMemberList[0], &tribeMemberList[0] + tribeMemberList.size(), ::ALiIMDBTribe::__U__STribeMemberSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBGetTribeMemberInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::std::string memberId;
    __is->read(tribeId);
    __is->read(memberId);
    ::ALiIMDBTribe::STribeMemberInfoSeq tribeMemberInfoList;
    ::Ice::Int __ret = DBGetTribeMemberInfo(tribeId, memberId, tribeMemberInfoList, __current);
    if(tribeMemberInfoList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::ALiIMDBTribe::__write(__os, &tribeMemberInfoList[0], &tribeMemberInfoList[0] + tribeMemberInfoList.size(), ::ALiIMDBTribe::__U__STribeMemberInfoSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBGetTribeMemberInfo2(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::std::string memberId;
    __is->read(tribeId);
    __is->read(memberId);
    ::ALiIMDBTribe::STribeMemberInfoSeq2 tribeMemberInfoList;
    ::Ice::Int __ret = DBGetTribeMemberInfo2(tribeId, memberId, tribeMemberInfoList, __current);
    if(tribeMemberInfoList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::ALiIMDBTribe::__write(__os, &tribeMemberInfoList[0], &tribeMemberInfoList[0] + tribeMemberInfoList.size(), ::ALiIMDBTribe::__U__STribeMemberInfoSeq2());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBGetUserTribe(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::ALiIMDBTribe::STribeIdSeq tribeIdList;
    ::Ice::Int __ret = DBGetUserTribe(userId, tribeIdList, __current);
    if(tribeIdList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::ALiIMDBTribe::__write(__os, &tribeIdList[0], &tribeIdList[0] + tribeIdList.size(), ::ALiIMDBTribe::__U__STribeIdSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBGetUserTribe2(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::ALiIMDBTribe::STribeIdSeq2 tribeIdList;
    ::Ice::Int __ret = DBGetUserTribe2(userId, tribeIdList, __current);
    if(tribeIdList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::ALiIMDBTribe::__write(__os, &tribeIdList[0], &tribeIdList[0] + tribeIdList.size(), ::ALiIMDBTribe::__U__STribeIdSeq2());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBUpdateMemberLevel(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::std::string memberId;
    ::Ice::Int level;
    __is->read(tribeId);
    __is->read(memberId);
    __is->read(level);
    ::Ice::Int __ret = DBUpdateMemberLevel(tribeId, memberId, level, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBUpdateLastMsgId(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::std::string memberId;
    ::Ice::Int msgId;
    __is->read(tribeId);
    __is->read(memberId);
    __is->read(msgId);
    ::Ice::Int __ret = DBUpdateLastMsgId(tribeId, memberId, msgId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBDeleteMember(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::std::string memberId;
    ::Ice::Int level;
    __is->read(tribeId);
    __is->read(memberId);
    __is->read(level);
    ::Ice::Int blackStamp;
    ::Ice::Int __ret = DBDeleteMember(tribeId, memberId, level, blackStamp, __current);
    __os->write(blackStamp);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBAddTribeOfflineMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::std::string fromId;
    ::Ice::Int type;
    ::std::string message;
    ::Ice::Int sendTime;
    __is->read(tribeId);
    __is->read(fromId);
    __is->read(type);
    __is->read(message);
    __is->read(sendTime);
    ::Ice::Int __ret = DBAddTribeOfflineMsg(tribeId, fromId, type, message, sendTime, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBGetTribeOfflineMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    __is->read(tribeId);
    ::ALiIMDBTribe::STribeOfflineMsgSeq offlineMsgList;
    ::Ice::Int __ret = DBGetTribeOfflineMsg(tribeId, offlineMsgList, __current);
    if(offlineMsgList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::ALiIMDBTribe::__write(__os, &offlineMsgList[0], &offlineMsgList[0] + offlineMsgList.size(), ::ALiIMDBTribe::__U__STribeOfflineMsgSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBDelTribeOfflineMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    __is->read(tribeId);
    ::Ice::Int __ret = DBDelTribeOfflineMsg(tribeId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBAddTribeOffMngMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::std::string toId;
    ::Ice::Int type;
    ::std::string message;
    ::Ice::Int sendTime;
    __is->read(tribeId);
    __is->read(toId);
    __is->read(type);
    __is->read(message);
    __is->read(sendTime);
    ::Ice::Int __ret = DBAddTribeOffMngMsg(tribeId, toId, type, message, sendTime, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBGetTribeOffMngMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::std::string memberId;
    __is->read(tribeId);
    __is->read(memberId);
    ::ALiIMDBTribe::STribeOfflineMsgSeq offlineMsgList;
    ::Ice::Int __ret = DBGetTribeOffMngMsg(tribeId, memberId, offlineMsgList, __current);
    if(offlineMsgList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::ALiIMDBTribe::__write(__os, &offlineMsgList[0], &offlineMsgList[0] + offlineMsgList.size(), ::ALiIMDBTribe::__U__STribeOfflineMsgSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBDelTribeOffMngMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::std::string memberId;
    __is->read(tribeId);
    __is->read(memberId);
    ::Ice::Int __ret = DBDelTribeOffMngMsg(tribeId, memberId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBGetUserTribeConfig(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::Ice::Int addVerify;
    ::Ice::Int __ret = DBGetUserTribeConfig(userId, addVerify, __current);
    __os->write(addVerify);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBUpdateUserTribeConfig(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::Ice::Int addVerify;
    __is->read(userId);
    __is->read(addVerify);
    ::Ice::Int __ret = DBUpdateUserTribeConfig(userId, addVerify, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBUpdateTribeCard(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::std::string memberId;
    ::ALiIMDBTribe::STribeCard tribeCard;
    __is->read(tribeId);
    __is->read(memberId);
    tribeCard.__read(__is);
    ::Ice::Int __ret = DBUpdateTribeCard(tribeId, memberId, tribeCard, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBGetTribeCard(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::std::string memberId;
    __is->read(tribeId);
    __is->read(memberId);
    ::ALiIMDBTribe::STribeCard tribeCard;
    ::Ice::Int __ret = DBGetTribeCard(tribeId, memberId, tribeCard, __current);
    tribeCard.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBUpdateMemberActDegree(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::std::string memberId;
    ::Ice::Double onlineActDegree;
    ::Ice::Int chatActDegree;
    ::Ice::Double rewardActDegree;
    ::Ice::Double totalActDegree;
    ::Ice::Int lastMsgid;
    __is->read(tribeId);
    __is->read(memberId);
    __is->read(onlineActDegree);
    __is->read(chatActDegree);
    __is->read(rewardActDegree);
    __is->read(totalActDegree);
    __is->read(lastMsgid);
    ::Ice::Int __ret = DBUpdateMemberActDegree(tribeId, memberId, onlineActDegree, chatActDegree, rewardActDegree, totalActDegree, lastMsgid, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBGetTribeGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    __is->read(tribeId);
    ::ALiIMDBTribe::STribeGroupSeq tribeGroupList;
    ::Ice::Int __ret = DBGetTribeGroup(tribeId, tribeGroupList, __current);
    if(tribeGroupList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::ALiIMDBTribe::__write(__os, &tribeGroupList[0], &tribeGroupList[0] + tribeGroupList.size(), ::ALiIMDBTribe::__U__STribeGroupSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBAddTribeGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::std::string groupName;
    ::Ice::Long parentId;
    __is->read(tribeId);
    __is->read(groupName);
    __is->read(parentId);
    ::Ice::Long groupId;
    ::Ice::Int groupStamp;
    ::Ice::Int __ret = DBAddTribeGroup(tribeId, groupName, parentId, groupId, groupStamp, __current);
    __os->write(groupId);
    __os->write(groupStamp);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBUpdateTribeGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::Ice::Long groupId;
    ::std::string groupName;
    __is->read(tribeId);
    __is->read(groupId);
    __is->read(groupName);
    ::Ice::Int groupStamp;
    ::Ice::Int __ret = DBUpdateTribeGroup(tribeId, groupId, groupName, groupStamp, __current);
    __os->write(groupStamp);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBDelTribeGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::Ice::Long groupId;
    __is->read(tribeId);
    __is->read(groupId);
    ::Ice::Int groupStamp;
    ::Ice::Int __ret = DBDelTribeGroup(tribeId, groupId, groupStamp, __current);
    __os->write(groupStamp);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBUpdateUserGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::std::string memberId;
    ::Ice::Long groupId;
    __is->read(tribeId);
    __is->read(memberId);
    __is->read(groupId);
    ::Ice::Int __ret = DBUpdateUserGroup(tribeId, memberId, groupId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBAddStarMember(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::std::string memberId;
    __is->read(tribeId);
    __is->read(memberId);
    ::Ice::Int __ret = DBAddStarMember(tribeId, memberId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBDelStarMember(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::std::string memberId;
    __is->read(tribeId);
    __is->read(memberId);
    ::Ice::Int __ret = DBDelStarMember(tribeId, memberId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBUpdateOpenTribe(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::std::string memberId;
    ::Ice::Short openFlag;
    __is->read(tribeId);
    __is->read(memberId);
    __is->read(openFlag);
    ::Ice::Int __ret = DBUpdateOpenTribe(tribeId, memberId, openFlag, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBNotifyTribeInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::ALiIMDBTribe::STribeInfo tribeInfo;
    tribeInfo.__read(__is);
    ::Ice::Int __ret = DBNotifyTribeInfo(tribeInfo, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBGetTribeInfo2(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    __is->read(tribeId);
    ::ALiIMDBTribe::STribeInfo2 tribeInfo;
    ::Ice::Int __ret = DBGetTribeInfo2(tribeId, tribeInfo, __current);
    tribeInfo.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBGetTribeInfo3(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    __is->read(tribeId);
    ::ALiIMDBTribe::STribeInfo3 tribeInfo;
    ::Ice::Int __ret = DBGetTribeInfo3(tribeId, tribeInfo, __current);
    tribeInfo.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBCreateTribe(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::ALiIMDBTribe::STribeInfo2 tribeInfo;
    tribeInfo.__read(__is);
    ::Ice::Int tribeId;
    ::Ice::Int __ret = DBCreateTribe(tribeInfo, tribeId, __current);
    __os->write(tribeId);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBGetTribeIdByWebId(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string serviceId;
    ::std::string webid;
    ::std::string webtid;
    __is->read(serviceId);
    __is->read(webid);
    __is->read(webtid);
    ::Ice::Int tribeId;
    ::Ice::Int __ret = DBGetTribeIdByWebId(serviceId, webid, webtid, tribeId, __current);
    __os->write(tribeId);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBAddWebTribeMember(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::ALiIMDBTribe::STribeMember2 memberInfo;
    memberInfo.__read(__is);
    ::Ice::Int blackStamp;
    ::Ice::Int __ret = DBAddWebTribeMember(memberInfo, blackStamp, __current);
    __os->write(blackStamp);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBDeleteWebMember(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::std::string memberId;
    ::Ice::Int level;
    __is->read(tribeId);
    __is->read(memberId);
    __is->read(level);
    ::Ice::Int blackStamp;
    ::Ice::Int __ret = DBDeleteWebMember(tribeId, memberId, level, blackStamp, __current);
    __os->write(blackStamp);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBGetAllWebTribeGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::ALiIMDBTribe::SWebTribeGroupSeq groupList;
    ::Ice::Int __ret = DBGetAllWebTribeGroup(groupList, __current);
    if(groupList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::ALiIMDBTribe::__write(__os, &groupList[0], &groupList[0] + groupList.size(), ::ALiIMDBTribe::__U__SWebTribeGroupSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBGetWebTribeGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string serviceId;
    ::std::string webId;
    __is->read(serviceId);
    __is->read(webId);
    ::ALiIMDBTribe::SWebTribeGroup groupInfo;
    ::Ice::Int __ret = DBGetWebTribeGroup(serviceId, webId, groupInfo, __current);
    groupInfo.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBGetWebTribeGroupById(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Long groupId;
    __is->read(groupId);
    ::ALiIMDBTribe::SWebTribeGroup groupInfo;
    ::Ice::Int __ret = DBGetWebTribeGroupById(groupId, groupInfo, __current);
    groupInfo.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBAddWebTribeGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::ALiIMDBTribe::SWebTribeGroup groupInfo;
    groupInfo.__read(__is);
    ::Ice::Long groupId;
    ::Ice::Int __ret = DBAddWebTribeGroup(groupInfo, groupId, __current);
    __os->write(groupId);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBUpdateWebTribeGroupName(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Long groupId;
    ::std::string name;
    __is->read(groupId);
    __is->read(name);
    ::Ice::Int __ret = DBUpdateWebTribeGroupName(groupId, name, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBDelWebTribeGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Long groupId;
    __is->read(groupId);
    ::Ice::Int __ret = DBDelWebTribeGroup(groupId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBGetUserWebTribeGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::ALiIMDBTribe::SWebTribeGroupSeq groupList;
    ::Ice::Int __ret = DBGetUserWebTribeGroup(userId, groupList, __current);
    if(groupList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::ALiIMDBTribe::__write(__os, &groupList[0], &groupList[0] + groupList.size(), ::ALiIMDBTribe::__U__SWebTribeGroupSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBGetUserWebTribe(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::ALiIMDBTribe::SWebTribeIdSeq tribeList;
    ::Ice::Int __ret = DBGetUserWebTribe(userId, tribeList, __current);
    if(tribeList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::ALiIMDBTribe::__write(__os, &tribeList[0], &tribeList[0] + tribeList.size(), ::ALiIMDBTribe::__U__SWebTribeIdSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBUpdateTribeInfo2(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::ALiIMDBTribe::STribeInfo2 tribeInfo;
    tribeInfo.__read(__is);
    ::Ice::Int __ret = DBUpdateTribeInfo2(tribeInfo, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBNotifyWebTribeInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::ALiIMDBTribe::STribeInfo2 tribeInfo;
    tribeInfo.__read(__is);
    ::Ice::Int __ret = DBNotifyWebTribeInfo(tribeInfo, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBSyncWebTribe(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string serviceId;
    ::std::string webId;
    ::ALiIMDBTribe::STribeInfo2 tribeInfo;
    ::ALiIMDBTribe::STribeMember2Seq memberList;
    __is->read(serviceId);
    __is->read(webId);
    tribeInfo.__read(__is);
    ::ALiIMDBTribe::__read(__is, memberList, ::ALiIMDBTribe::__U__STribeMember2Seq());
    ::Ice::Int tribeId;
    ::Ice::Int __ret = DBSyncWebTribe(serviceId, webId, tribeInfo, memberList, tribeId, __current);
    __os->write(tribeId);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBGetWebUserDisactiveTribe(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string serviceId;
    ::std::string webId;
    ::std::string webUid;
    __is->read(serviceId);
    __is->read(webId);
    __is->read(webUid);
    ::Ice::IntSeq tribeList;
    ::Ice::Int __ret = DBGetWebUserDisactiveTribe(serviceId, webId, webUid, tribeList, __current);
    if(tribeList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&tribeList[0], &tribeList[0] + tribeList.size());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBGetWebUserActiveTribe(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string serviceId;
    ::std::string webId;
    ::std::string userId;
    __is->read(serviceId);
    __is->read(webId);
    __is->read(userId);
    ::Ice::IntSeq tribeList;
    ::Ice::Int __ret = DBGetWebUserActiveTribe(serviceId, webId, userId, tribeList, __current);
    if(tribeList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&tribeList[0], &tribeList[0] + tribeList.size());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBActiveTribeWebMember(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::std::string webuid;
    ::std::string memberId;
    __is->read(tribeId);
    __is->read(webuid);
    __is->read(memberId);
    ::Ice::Int __ret = DBActiveTribeWebMember(tribeId, webuid, memberId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBDisactiveTribeWebMember(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::std::string webuid;
    ::std::string memberId;
    __is->read(tribeId);
    __is->read(webuid);
    __is->read(memberId);
    ::Ice::Int __ret = DBDisactiveTribeWebMember(tribeId, webuid, memberId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBDeleteWebTribe(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    __is->read(tribeId);
    ::Ice::Int __ret = DBDeleteWebTribe(tribeId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBUpdateTribeMsgSetting(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::std::string userId;
    ::Ice::Short popflag;
    __is->read(tribeId);
    __is->read(userId);
    __is->read(popflag);
    ::Ice::Int __ret = DBUpdateTribeMsgSetting(tribeId, userId, popflag, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBTransferTribe(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::std::string userId;
    ::std::string transferId;
    __is->read(tribeId);
    __is->read(userId);
    __is->read(transferId);
    ::std::string vacantId;
    ::Ice::Int __ret = DBTransferTribe(tribeId, userId, transferId, vacantId, __current);
    __os->write(vacantId);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBCheckAddedTribeFull2(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    bool limit;
    ::Ice::Int __ret = DBCheckAddedTribeFull2(userId, limit, __current);
    __os->write(limit);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBUpdateTribeLimit(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int tribeId;
    ::Ice::Int limit;
    __is->read(tribeId);
    __is->read(limit);
    ::Ice::Int __ret = DBUpdateTribeLimit(tribeId, limit, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBIncrUserTribes(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::Ice::Int tribeNum;
    __is->read(userId);
    __is->read(tribeNum);
    ::Ice::Int __ret = DBIncrUserTribes(userId, tribeNum, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::___DBGetUserTribeNum(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::Ice::Int tribeNum;
    ::Ice::Int __ret = DBGetUserTribeNum(userId, tribeNum, __current);
    __os->write(tribeNum);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __ALiIMDBTribe__TribeDBProxyMgr_all[] =
{
    "DBActiveTribeWebMember",
    "DBAddStarMember",
    "DBAddTribeGroup",
    "DBAddTribeMember",
    "DBAddTribeOffMngMsg",
    "DBAddTribeOfflineMsg",
    "DBAddWebTribeGroup",
    "DBAddWebTribeMember",
    "DBCheckAddedTribeFull",
    "DBCheckAddedTribeFull2",
    "DBCreateTribe",
    "DBDelStarMember",
    "DBDelTribeGroup",
    "DBDelTribeOffMngMsg",
    "DBDelTribeOfflineMsg",
    "DBDelWebTribeGroup",
    "DBDeleteMember",
    "DBDeleteTribe",
    "DBDeleteWebMember",
    "DBDeleteWebTribe",
    "DBDisactiveTribeWebMember",
    "DBGetAddedTribeNum",
    "DBGetAllWebTribeGroup",
    "DBGetTribeActiveDegree",
    "DBGetTribeCard",
    "DBGetTribeGroup",
    "DBGetTribeIdByWebId",
    "DBGetTribeInfo",
    "DBGetTribeInfo2",
    "DBGetTribeInfo3",
    "DBGetTribeMember",
    "DBGetTribeMemberInfo",
    "DBGetTribeMemberInfo2",
    "DBGetTribeMemberNum",
    "DBGetTribeOffMngMsg",
    "DBGetTribeOfflineMsg",
    "DBGetUserTribe",
    "DBGetUserTribe2",
    "DBGetUserTribeConfig",
    "DBGetUserTribeNum",
    "DBGetUserWebTribe",
    "DBGetUserWebTribeGroup",
    "DBGetWebTribeGroup",
    "DBGetWebTribeGroupById",
    "DBGetWebUserActiveTribe",
    "DBGetWebUserDisactiveTribe",
    "DBIncrUserTribes",
    "DBNotifyTribeInfo",
    "DBNotifyWebTribeInfo",
    "DBStartTribe",
    "DBSyncWebTribe",
    "DBTransferTribe",
    "DBUpdateLastMsgId",
    "DBUpdateMemberActDegree",
    "DBUpdateMemberLevel",
    "DBUpdateOpenTribe",
    "DBUpdateTribeActDegree",
    "DBUpdateTribeCard",
    "DBUpdateTribeGroup",
    "DBUpdateTribeInfo",
    "DBUpdateTribeInfo2",
    "DBUpdateTribeLimit",
    "DBUpdateTribeMaster",
    "DBUpdateTribeMsgSetting",
    "DBUpdateUserGroup",
    "DBUpdateUserTribeConfig",
    "DBUpdateWebTribeGroupName",
    "TCAddTribeMember",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::IceInternal::DispatchStatus
ALiIMDBTribe::TribeDBProxyMgr::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__ALiIMDBTribe__TribeDBProxyMgr_all, __ALiIMDBTribe__TribeDBProxyMgr_all + 72, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __ALiIMDBTribe__TribeDBProxyMgr_all)
    {
        case 0:
        {
            return ___DBActiveTribeWebMember(in, current);
        }
        case 1:
        {
            return ___DBAddStarMember(in, current);
        }
        case 2:
        {
            return ___DBAddTribeGroup(in, current);
        }
        case 3:
        {
            return ___DBAddTribeMember(in, current);
        }
        case 4:
        {
            return ___DBAddTribeOffMngMsg(in, current);
        }
        case 5:
        {
            return ___DBAddTribeOfflineMsg(in, current);
        }
        case 6:
        {
            return ___DBAddWebTribeGroup(in, current);
        }
        case 7:
        {
            return ___DBAddWebTribeMember(in, current);
        }
        case 8:
        {
            return ___DBCheckAddedTribeFull(in, current);
        }
        case 9:
        {
            return ___DBCheckAddedTribeFull2(in, current);
        }
        case 10:
        {
            return ___DBCreateTribe(in, current);
        }
        case 11:
        {
            return ___DBDelStarMember(in, current);
        }
        case 12:
        {
            return ___DBDelTribeGroup(in, current);
        }
        case 13:
        {
            return ___DBDelTribeOffMngMsg(in, current);
        }
        case 14:
        {
            return ___DBDelTribeOfflineMsg(in, current);
        }
        case 15:
        {
            return ___DBDelWebTribeGroup(in, current);
        }
        case 16:
        {
            return ___DBDeleteMember(in, current);
        }
        case 17:
        {
            return ___DBDeleteTribe(in, current);
        }
        case 18:
        {
            return ___DBDeleteWebMember(in, current);
        }
        case 19:
        {
            return ___DBDeleteWebTribe(in, current);
        }
        case 20:
        {
            return ___DBDisactiveTribeWebMember(in, current);
        }
        case 21:
        {
            return ___DBGetAddedTribeNum(in, current);
        }
        case 22:
        {
            return ___DBGetAllWebTribeGroup(in, current);
        }
        case 23:
        {
            return ___DBGetTribeActiveDegree(in, current);
        }
        case 24:
        {
            return ___DBGetTribeCard(in, current);
        }
        case 25:
        {
            return ___DBGetTribeGroup(in, current);
        }
        case 26:
        {
            return ___DBGetTribeIdByWebId(in, current);
        }
        case 27:
        {
            return ___DBGetTribeInfo(in, current);
        }
        case 28:
        {
            return ___DBGetTribeInfo2(in, current);
        }
        case 29:
        {
            return ___DBGetTribeInfo3(in, current);
        }
        case 30:
        {
            return ___DBGetTribeMember(in, current);
        }
        case 31:
        {
            return ___DBGetTribeMemberInfo(in, current);
        }
        case 32:
        {
            return ___DBGetTribeMemberInfo2(in, current);
        }
        case 33:
        {
            return ___DBGetTribeMemberNum(in, current);
        }
        case 34:
        {
            return ___DBGetTribeOffMngMsg(in, current);
        }
        case 35:
        {
            return ___DBGetTribeOfflineMsg(in, current);
        }
        case 36:
        {
            return ___DBGetUserTribe(in, current);
        }
        case 37:
        {
            return ___DBGetUserTribe2(in, current);
        }
        case 38:
        {
            return ___DBGetUserTribeConfig(in, current);
        }
        case 39:
        {
            return ___DBGetUserTribeNum(in, current);
        }
        case 40:
        {
            return ___DBGetUserWebTribe(in, current);
        }
        case 41:
        {
            return ___DBGetUserWebTribeGroup(in, current);
        }
        case 42:
        {
            return ___DBGetWebTribeGroup(in, current);
        }
        case 43:
        {
            return ___DBGetWebTribeGroupById(in, current);
        }
        case 44:
        {
            return ___DBGetWebUserActiveTribe(in, current);
        }
        case 45:
        {
            return ___DBGetWebUserDisactiveTribe(in, current);
        }
        case 46:
        {
            return ___DBIncrUserTribes(in, current);
        }
        case 47:
        {
            return ___DBNotifyTribeInfo(in, current);
        }
        case 48:
        {
            return ___DBNotifyWebTribeInfo(in, current);
        }
        case 49:
        {
            return ___DBStartTribe(in, current);
        }
        case 50:
        {
            return ___DBSyncWebTribe(in, current);
        }
        case 51:
        {
            return ___DBTransferTribe(in, current);
        }
        case 52:
        {
            return ___DBUpdateLastMsgId(in, current);
        }
        case 53:
        {
            return ___DBUpdateMemberActDegree(in, current);
        }
        case 54:
        {
            return ___DBUpdateMemberLevel(in, current);
        }
        case 55:
        {
            return ___DBUpdateOpenTribe(in, current);
        }
        case 56:
        {
            return ___DBUpdateTribeActDegree(in, current);
        }
        case 57:
        {
            return ___DBUpdateTribeCard(in, current);
        }
        case 58:
        {
            return ___DBUpdateTribeGroup(in, current);
        }
        case 59:
        {
            return ___DBUpdateTribeInfo(in, current);
        }
        case 60:
        {
            return ___DBUpdateTribeInfo2(in, current);
        }
        case 61:
        {
            return ___DBUpdateTribeLimit(in, current);
        }
        case 62:
        {
            return ___DBUpdateTribeMaster(in, current);
        }
        case 63:
        {
            return ___DBUpdateTribeMsgSetting(in, current);
        }
        case 64:
        {
            return ___DBUpdateUserGroup(in, current);
        }
        case 65:
        {
            return ___DBUpdateUserTribeConfig(in, current);
        }
        case 66:
        {
            return ___DBUpdateWebTribeGroupName(in, current);
        }
        case 67:
        {
            return ___TCAddTribeMember(in, current);
        }
        case 68:
        {
            return ___ice_id(in, current);
        }
        case 69:
        {
            return ___ice_ids(in, current);
        }
        case 70:
        {
            return ___ice_isA(in, current);
        }
        case 71:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
ALiIMDBTribe::TribeDBProxyMgr::__write(::IceInternal::BasicStream* __os) const
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
ALiIMDBTribe::TribeDBProxyMgr::__read(::IceInternal::BasicStream* __is, bool __rid)
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
ALiIMDBTribe::TribeDBProxyMgr::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type ALiIMDBTribe::TribeDBProxyMgr was not generated with stream support";
    throw ex;
}

void
ALiIMDBTribe::TribeDBProxyMgr::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type ALiIMDBTribe::TribeDBProxyMgr was not generated with stream support";
    throw ex;
}

void 
ALiIMDBTribe::__patch__TribeDBProxyMgrPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::ALiIMDBTribe::TribeDBProxyMgrPtr* p = static_cast< ::ALiIMDBTribe::TribeDBProxyMgrPtr*>(__addr);
    assert(p);
    *p = ::ALiIMDBTribe::TribeDBProxyMgrPtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::ALiIMDBTribe::TribeDBProxyMgr::ice_staticId();
        throw e;
    }
}

bool
ALiIMDBTribe::operator==(const ::ALiIMDBTribe::TribeDBProxyMgr& l, const ::ALiIMDBTribe::TribeDBProxyMgr& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
ALiIMDBTribe::operator!=(const ::ALiIMDBTribe::TribeDBProxyMgr& l, const ::ALiIMDBTribe::TribeDBProxyMgr& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
ALiIMDBTribe::operator<(const ::ALiIMDBTribe::TribeDBProxyMgr& l, const ::ALiIMDBTribe::TribeDBProxyMgr& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
ALiIMDBTribe::operator<=(const ::ALiIMDBTribe::TribeDBProxyMgr& l, const ::ALiIMDBTribe::TribeDBProxyMgr& r)
{
    return l < r || l == r;
}

bool
ALiIMDBTribe::operator>(const ::ALiIMDBTribe::TribeDBProxyMgr& l, const ::ALiIMDBTribe::TribeDBProxyMgr& r)
{
    return !(l < r) && !(l == r);
}

bool
ALiIMDBTribe::operator>=(const ::ALiIMDBTribe::TribeDBProxyMgr& l, const ::ALiIMDBTribe::TribeDBProxyMgr& r)
{
    return !(l < r);
}
