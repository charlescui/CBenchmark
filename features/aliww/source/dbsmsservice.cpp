// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `dbsmsservice.ice'

#include <dbsmsservice.h>
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

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBAddValidate_name = "DBAddValidate";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBGetValidateInfoWithUpdate_name = "DBGetValidateInfoWithUpdate";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBRemoveValidate_name = "DBRemoveValidate";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBUpdateValidateMobile_name = "DBUpdateValidateMobile";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBAddSmsUser_name = "DBAddSmsUser";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBBindMobile_name = "DBBindMobile";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsUserInfoByUid_name = "DBGetSmsUserInfoByUid";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsUserInfoByAccount_name = "DBGetSmsUserInfoByAccount";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsUserInfoByMobile_name = "DBGetSmsUserInfoByMobile";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsUserMsgInfo_name = "DBGetSmsUserMsgInfo";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBAddSmsFunctionLog_name = "DBAddSmsFunctionLog";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBSetMobileOnlineFlag_name = "DBSetMobileOnlineFlag";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBSetMobileBindFlag_name = "DBSetMobileBindFlag";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBSetMessageRevFlag_name = "DBSetMessageRevFlag";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBSetSmsRebind_name = "DBSetSmsRebind";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBAddSmsMessage_name = "DBAddSmsMessage";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsMessage_name = "DBGetSmsMessage";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsMessage2_name = "DBGetSmsMessage2";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBUpdateSmsMsgStatus_name = "DBUpdateSmsMsgStatus";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBUpdateSmsMsgStatus2_name = "DBUpdateSmsMsgStatus2";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsMailing_name = "DBGetSmsMailing";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBUpdateSmsMailing_name = "DBUpdateSmsMailing";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsDiscount_name = "DBGetSmsDiscount";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsNeedChargeRecord_name = "DBGetSmsNeedChargeRecord";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsChargeRecordInfo_name = "DBGetSmsChargeRecordInfo";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsChargeRecords_name = "DBGetSmsChargeRecords";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBAddSmsChargeRecord_name = "DBAddSmsChargeRecord";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBUpdateSmsChargeRecordStatus_name = "DBUpdateSmsChargeRecordStatus";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsBlacks_name = "DBGetSmsBlacks";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBAddSmsBlack_name = "DBAddSmsBlack";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBCheckSmsBlack_name = "DBCheckSmsBlack";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBDelSmsBlack_name = "DBDelSmsBlack";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBGetRemindTime_name = "DBGetRemindTime";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBUpdateRemindTime_name = "DBUpdateRemindTime";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBGetAllMsgRevUser_name = "DBGetAllMsgRevUser";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsTempUsers_name = "DBGetSmsTempUsers";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBAddSmsTempUser_name = "DBAddSmsTempUser";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBDelSmsTempUser_name = "DBDelSmsTempUser";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBGetUserBaseInfo_name = "DBGetUserBaseInfo";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsUserBalance_name = "DBGetSmsUserBalance";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBUpdatePresentRemindFlag_name = "DBUpdatePresentRemindFlag";

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr__DBFeedBack_name = "DBFeedBack";

void
IceInternal::incRef(::ALiIMDBSms::SmsDBProxyMgr* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::ALiIMDBSms::SmsDBProxyMgr* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::ALiIMDBSms::SmsDBProxyMgr* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::ALiIMDBSms::SmsDBProxyMgr* p)
{
    p->__decRef();
}

void
ALiIMDBSms::__write(::IceInternal::BasicStream* __os, const ::ALiIMDBSms::SmsDBProxyMgrPrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
ALiIMDBSms::__read(::IceInternal::BasicStream* __is, ::ALiIMDBSms::SmsDBProxyMgrPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::ALiIMDBSms::SmsDBProxyMgr;
        v->__copyFrom(proxy);
    }
}

void
ALiIMDBSms::__write(::IceInternal::BasicStream* __os, const ::ALiIMDBSms::SmsDBProxyMgrPtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

void
ALiIMDBSms::__addObject(const SmsDBProxyMgrPtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
ALiIMDBSms::__usesClasses(const SmsDBProxyMgrPtr& p)
{
    return p->__usesClasses();
}

void
ALiIMDBSms::__decRefUnsafe(const SmsDBProxyMgrPtr& p)
{
    p->__decRefUnsafe();
}

void
ALiIMDBSms::__clearHandleUnsafe(SmsDBProxyMgrPtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBAddValidate(const ::std::string& userId, ::Ice::Int type, const ::std::string& mobileNo, const ::std::string& validateCode, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBAddValidate_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBAddValidate(userId, type, mobileNo, validateCode, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBGetValidateInfoWithUpdate(const ::std::string& userId, ::Ice::Int type, ::Ice::Int updateFlag, ::std::string& validateCode, ::std::string& mobileNo, ::Ice::Int& sendTimes, ::Ice::Int& validateTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBGetValidateInfoWithUpdate_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBGetValidateInfoWithUpdate(userId, type, updateFlag, validateCode, mobileNo, sendTimes, validateTimes, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBRemoveValidate(const ::std::string& userId, ::Ice::Int type, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBRemoveValidate_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBRemoveValidate(userId, type, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBUpdateValidateMobile(const ::std::string& userId, ::Ice::Int type, const ::std::string& mobileNo, const ::std::string& validatecode, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBUpdateValidateMobile_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBUpdateValidateMobile(userId, type, mobileNo, validatecode, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBAddSmsUser(const ::std::string& userId, const ::std::string& mobileNo, ::std::string& account, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBAddSmsUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBAddSmsUser(userId, mobileNo, account, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBBindMobile(const ::std::string& userId, const ::std::string& mobileNo, ::Ice::Int balance, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBBindMobile_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBBindMobile(userId, mobileNo, balance, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsUserInfoByUid(const ::std::string& userId, ::ALiIMDBSms::SSmsUserInfo& smsUserInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBGetSmsUserInfoByUid_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBGetSmsUserInfoByUid(userId, smsUserInfo, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsUserInfoByAccount(const ::std::string& account, ::ALiIMDBSms::SSmsUserInfo& smsUserInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBGetSmsUserInfoByAccount_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBGetSmsUserInfoByAccount(account, smsUserInfo, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsUserInfoByMobile(const ::std::string& mobileNo, ::ALiIMDBSms::SSmsUserInfo& smsUserInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBGetSmsUserInfoByMobile_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBGetSmsUserInfoByMobile(mobileNo, smsUserInfo, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsUserMsgInfo(const ::std::string& userId, ::Ice::Int& todaySmsCount, ::Ice::Int& yesterdaySmsCount, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBGetSmsUserMsgInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBGetSmsUserMsgInfo(userId, todaySmsCount, yesterdaySmsCount, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBAddSmsFunctionLog(const ::std::string& userId, ::Ice::Int functionType, ::Ice::Int action, const ::std::string& mobileNo, ::Ice::Int status, ::Ice::Int fromType, const ::std::string& errorDesc, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBAddSmsFunctionLog_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBAddSmsFunctionLog(userId, functionType, action, mobileNo, status, fromType, errorDesc, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBSetMobileOnlineFlag(const ::std::string& userId, ::Ice::Int onlineFlag, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBSetMobileOnlineFlag_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBSetMobileOnlineFlag(userId, onlineFlag, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBSetMobileBindFlag(const ::std::string& userId, ::Ice::Int bindFlag, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBSetMobileBindFlag_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBSetMobileBindFlag(userId, bindFlag, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBSetMessageRevFlag(const ::std::string& userId, ::Ice::Int revFlag, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBSetMessageRevFlag_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBSetMessageRevFlag(userId, revFlag, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBSetSmsRebind(const ::std::string& userId, const ::std::string& mobileNo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBSetSmsRebind_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBSetSmsRebind(userId, mobileNo, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBAddSmsMessage(const ::ALiIMDBSms::SSmsMsgInfo& smsMsgInfo, ::std::string& msgId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBAddSmsMessage_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBAddSmsMessage(smsMsgInfo, msgId, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsMessage(const ::std::string& msgId, ::ALiIMDBSms::SSmsMsgInfo& smsMsgInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBGetSmsMessage_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBGetSmsMessage(msgId, smsMsgInfo, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsMessage2(const ::std::string& transId, ::ALiIMDBSms::SSmsMsgInfo& smsMsgInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBGetSmsMessage2_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBGetSmsMessage2(transId, smsMsgInfo, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBUpdateSmsMsgStatus(const ::std::string& msgId, ::Ice::Int status, const ::std::string& errorDesc, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBUpdateSmsMsgStatus_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBUpdateSmsMsgStatus(msgId, status, errorDesc, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBUpdateSmsMsgStatus2(const ::std::string& transId, ::Ice::Int status, const ::std::string& errorDesc, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBUpdateSmsMsgStatus2_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBUpdateSmsMsgStatus2(transId, status, errorDesc, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsMailing(const ::std::string& userId, ::Ice::Int& flag, ::std::string& address, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBGetSmsMailing_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBGetSmsMailing(userId, flag, address, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBUpdateSmsMailing(const ::std::string& userId, ::Ice::Int flag, const ::std::string& address, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBUpdateSmsMailing_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBUpdateSmsMailing(userId, flag, address, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsDiscount(const ::std::string& userId, ::Ice::Float& discount, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBGetSmsDiscount_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBGetSmsDiscount(userId, discount, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsNeedChargeRecord(::Ice::Int inmins, ::Ice::Int type, ::std::string& seqid, ::std::string& account, ::std::string& passwd, ::Ice::Int& denomination, ::std::string& uid, ::Ice::Int& trytime, ::std::string& payId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBGetSmsNeedChargeRecord_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBGetSmsNeedChargeRecord(inmins, type, seqid, account, passwd, denomination, uid, trytime, payId, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsChargeRecordInfo(const ::std::string& seqid, ::std::string& account, ::std::string& passwd, ::Ice::Int& denomination, ::std::string& uid, ::Ice::Int& status, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBGetSmsChargeRecordInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBGetSmsChargeRecordInfo(seqid, account, passwd, denomination, uid, status, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsChargeRecords(const ::std::string& uid, const ::std::string& beginTime, const ::std::string& endTime, ::ALiIMDBSms::SChargeInfoSeq& chargeRecordList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBGetSmsChargeRecords_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBGetSmsChargeRecords(uid, beginTime, endTime, chargeRecordList, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBAddSmsChargeRecord(const ::std::string& userId, ::Ice::Int type, const ::std::string& account, const ::std::string& password, ::Ice::Int denomination, ::Ice::Int money, const ::std::string& payId, ::std::string& chargeId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBAddSmsChargeRecord_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBAddSmsChargeRecord(userId, type, account, password, denomination, money, payId, chargeId, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBUpdateSmsChargeRecordStatus(const ::std::string& seqId, ::Ice::Int status, const ::std::string& desc, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBUpdateSmsChargeRecordStatus_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBUpdateSmsChargeRecordStatus(seqId, status, desc, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsBlacks(const ::std::string& mobileNo, ::Ice::StringSeq& blackNoList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBGetSmsBlacks_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBGetSmsBlacks(mobileNo, blackNoList, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBAddSmsBlack(const ::std::string& mobileNo, const ::std::string& blackNo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBAddSmsBlack_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBAddSmsBlack(mobileNo, blackNo, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBCheckSmsBlack(const ::std::string& fromMobile, const ::std::string& toMobile, ::Ice::Int& blackFlag, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBCheckSmsBlack_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBCheckSmsBlack(fromMobile, toMobile, blackFlag, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBDelSmsBlack(const ::std::string& mobileNo, const ::std::string& blackNo, const ::std::string& userId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBDelSmsBlack_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBDelSmsBlack(mobileNo, blackNo, userId, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBGetRemindTime(const ::std::string& mobileNo, ::std::string& remindTime, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBGetRemindTime_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBGetRemindTime(mobileNo, remindTime, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBUpdateRemindTime(const ::std::string& mobileNo, const ::std::string& remindTime, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBUpdateRemindTime_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBUpdateRemindTime(mobileNo, remindTime, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBGetAllMsgRevUser(::ALiIMDBSms::SSmsRevUserSeq& smsRevUserList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBGetAllMsgRevUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBGetAllMsgRevUser(smsRevUserList, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsTempUsers(::ALiIMDBSms::SSmsTempUserSeq& smsTempUserList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBGetSmsTempUsers_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBGetSmsTempUsers(smsTempUserList, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBAddSmsTempUser(const ::ALiIMDBSms::SSmsTempUser& smsTempUser, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBAddSmsTempUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBAddSmsTempUser(smsTempUser, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBDelSmsTempUser(const ::std::string& account, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBDelSmsTempUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBDelSmsTempUser(account, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBGetUserBaseInfo(const ::std::string& userId, ::ALiIMDBSms::SUserBaseInfo& userInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBGetUserBaseInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBGetUserBaseInfo(userId, userInfo, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsUserBalance(const ::std::string& userId, ::ALiIMDBSms::SSmsUserBalance& balanceInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBGetSmsUserBalance_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBGetSmsUserBalance(userId, balanceInfo, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBUpdatePresentRemindFlag(const ::std::string& userId, ::Ice::Int flag, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBUpdatePresentRemindFlag_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBUpdatePresentRemindFlag(userId, flag, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::DBFeedBack(const ::std::string& beginTime, const ::std::string& endTime, ::Ice::Int& feeNum, ::Ice::Int& presentNum, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__ALiIMDBSms__SmsDBProxyMgr__DBFeedBack_name);
            __delBase = __getDelegate();
            ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr* __del = dynamic_cast< ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr*>(__delBase.get());
            return __del->DBFeedBack(beginTime, endTime, feeNum, presentNum, __ctx);
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
IceProxy::ALiIMDBSms::SmsDBProxyMgr::ice_staticId()
{
    return ::ALiIMDBSms::SmsDBProxyMgr::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::ALiIMDBSms::SmsDBProxyMgr::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::ALiIMDBSms::SmsDBProxyMgr);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::ALiIMDBSms::SmsDBProxyMgr::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::ALiIMDBSms::SmsDBProxyMgr);
}

bool
IceProxy::ALiIMDBSms::operator==(const ::IceProxy::ALiIMDBSms::SmsDBProxyMgr& l, const ::IceProxy::ALiIMDBSms::SmsDBProxyMgr& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::ALiIMDBSms::operator!=(const ::IceProxy::ALiIMDBSms::SmsDBProxyMgr& l, const ::IceProxy::ALiIMDBSms::SmsDBProxyMgr& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::ALiIMDBSms::operator<(const ::IceProxy::ALiIMDBSms::SmsDBProxyMgr& l, const ::IceProxy::ALiIMDBSms::SmsDBProxyMgr& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::ALiIMDBSms::operator<=(const ::IceProxy::ALiIMDBSms::SmsDBProxyMgr& l, const ::IceProxy::ALiIMDBSms::SmsDBProxyMgr& r)
{
    return l < r || l == r;
}

bool
IceProxy::ALiIMDBSms::operator>(const ::IceProxy::ALiIMDBSms::SmsDBProxyMgr& l, const ::IceProxy::ALiIMDBSms::SmsDBProxyMgr& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::ALiIMDBSms::operator>=(const ::IceProxy::ALiIMDBSms::SmsDBProxyMgr& l, const ::IceProxy::ALiIMDBSms::SmsDBProxyMgr& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBAddValidate(const ::std::string& userId, ::Ice::Int type, const ::std::string& mobileNo, const ::std::string& validateCode, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBAddValidate_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(type);
        __os->write(mobileNo);
        __os->write(validateCode);
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
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBGetValidateInfoWithUpdate(const ::std::string& userId, ::Ice::Int type, ::Ice::Int updateFlag, ::std::string& validateCode, ::std::string& mobileNo, ::Ice::Int& sendTimes, ::Ice::Int& validateTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBGetValidateInfoWithUpdate_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(type);
        __os->write(updateFlag);
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
        __is->read(validateCode);
        __is->read(mobileNo);
        __is->read(sendTimes);
        __is->read(validateTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBRemoveValidate(const ::std::string& userId, ::Ice::Int type, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBRemoveValidate_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBUpdateValidateMobile(const ::std::string& userId, ::Ice::Int type, const ::std::string& mobileNo, const ::std::string& validatecode, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBUpdateValidateMobile_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(type);
        __os->write(mobileNo);
        __os->write(validatecode);
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
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBAddSmsUser(const ::std::string& userId, const ::std::string& mobileNo, ::std::string& account, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBAddSmsUser_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(mobileNo);
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
        __is->read(account);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBBindMobile(const ::std::string& userId, const ::std::string& mobileNo, ::Ice::Int balance, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBBindMobile_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(mobileNo);
        __os->write(balance);
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
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsUserInfoByUid(const ::std::string& userId, ::ALiIMDBSms::SSmsUserInfo& smsUserInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsUserInfoByUid_name, ::Ice::Normal, __context, __compress);
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
        smsUserInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsUserInfoByAccount(const ::std::string& account, ::ALiIMDBSms::SSmsUserInfo& smsUserInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsUserInfoByAccount_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(account);
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
        smsUserInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsUserInfoByMobile(const ::std::string& mobileNo, ::ALiIMDBSms::SSmsUserInfo& smsUserInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsUserInfoByMobile_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(mobileNo);
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
        smsUserInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsUserMsgInfo(const ::std::string& userId, ::Ice::Int& todaySmsCount, ::Ice::Int& yesterdaySmsCount, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsUserMsgInfo_name, ::Ice::Normal, __context, __compress);
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
        __is->read(todaySmsCount);
        __is->read(yesterdaySmsCount);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBAddSmsFunctionLog(const ::std::string& userId, ::Ice::Int functionType, ::Ice::Int action, const ::std::string& mobileNo, ::Ice::Int status, ::Ice::Int fromType, const ::std::string& errorDesc, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBAddSmsFunctionLog_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(functionType);
        __os->write(action);
        __os->write(mobileNo);
        __os->write(status);
        __os->write(fromType);
        __os->write(errorDesc);
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
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBSetMobileOnlineFlag(const ::std::string& userId, ::Ice::Int onlineFlag, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBSetMobileOnlineFlag_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(onlineFlag);
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
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBSetMobileBindFlag(const ::std::string& userId, ::Ice::Int bindFlag, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBSetMobileBindFlag_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(bindFlag);
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
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBSetMessageRevFlag(const ::std::string& userId, ::Ice::Int revFlag, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBSetMessageRevFlag_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(revFlag);
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
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBSetSmsRebind(const ::std::string& userId, const ::std::string& mobileNo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBSetSmsRebind_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(mobileNo);
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
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBAddSmsMessage(const ::ALiIMDBSms::SSmsMsgInfo& smsMsgInfo, ::std::string& msgId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBAddSmsMessage_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        smsMsgInfo.__write(__os);
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
        __is->read(msgId);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsMessage(const ::std::string& msgId, ::ALiIMDBSms::SSmsMsgInfo& smsMsgInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsMessage_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
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
        smsMsgInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsMessage2(const ::std::string& transId, ::ALiIMDBSms::SSmsMsgInfo& smsMsgInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsMessage2_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(transId);
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
        smsMsgInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBUpdateSmsMsgStatus(const ::std::string& msgId, ::Ice::Int status, const ::std::string& errorDesc, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBUpdateSmsMsgStatus_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(msgId);
        __os->write(status);
        __os->write(errorDesc);
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
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBUpdateSmsMsgStatus2(const ::std::string& transId, ::Ice::Int status, const ::std::string& errorDesc, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBUpdateSmsMsgStatus2_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(transId);
        __os->write(status);
        __os->write(errorDesc);
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
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsMailing(const ::std::string& userId, ::Ice::Int& flag, ::std::string& address, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsMailing_name, ::Ice::Normal, __context, __compress);
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
        __is->read(flag);
        __is->read(address);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBUpdateSmsMailing(const ::std::string& userId, ::Ice::Int flag, const ::std::string& address, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBUpdateSmsMailing_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(flag);
        __os->write(address);
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
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsDiscount(const ::std::string& userId, ::Ice::Float& discount, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsDiscount_name, ::Ice::Normal, __context, __compress);
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
        __is->read(discount);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsNeedChargeRecord(::Ice::Int inmins, ::Ice::Int type, ::std::string& seqid, ::std::string& account, ::std::string& passwd, ::Ice::Int& denomination, ::std::string& uid, ::Ice::Int& trytime, ::std::string& payId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsNeedChargeRecord_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(inmins);
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
        __is->read(seqid);
        __is->read(account);
        __is->read(passwd);
        __is->read(denomination);
        __is->read(uid);
        __is->read(trytime);
        __is->read(payId);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsChargeRecordInfo(const ::std::string& seqid, ::std::string& account, ::std::string& passwd, ::Ice::Int& denomination, ::std::string& uid, ::Ice::Int& status, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsChargeRecordInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(seqid);
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
        __is->read(account);
        __is->read(passwd);
        __is->read(denomination);
        __is->read(uid);
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
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsChargeRecords(const ::std::string& uid, const ::std::string& beginTime, const ::std::string& endTime, ::ALiIMDBSms::SChargeInfoSeq& chargeRecordList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsChargeRecords_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(beginTime);
        __os->write(endTime);
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
        ::ALiIMDBSms::__read(__is, chargeRecordList, ::ALiIMDBSms::__U__SChargeInfoSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBAddSmsChargeRecord(const ::std::string& userId, ::Ice::Int type, const ::std::string& account, const ::std::string& password, ::Ice::Int denomination, ::Ice::Int money, const ::std::string& payId, ::std::string& chargeId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBAddSmsChargeRecord_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(type);
        __os->write(account);
        __os->write(password);
        __os->write(denomination);
        __os->write(money);
        __os->write(payId);
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
        __is->read(chargeId);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBUpdateSmsChargeRecordStatus(const ::std::string& seqId, ::Ice::Int status, const ::std::string& desc, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBUpdateSmsChargeRecordStatus_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(seqId);
        __os->write(status);
        __os->write(desc);
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
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsBlacks(const ::std::string& mobileNo, ::Ice::StringSeq& blackNoList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsBlacks_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(mobileNo);
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
        __is->read(blackNoList);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBAddSmsBlack(const ::std::string& mobileNo, const ::std::string& blackNo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBAddSmsBlack_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(mobileNo);
        __os->write(blackNo);
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
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBCheckSmsBlack(const ::std::string& fromMobile, const ::std::string& toMobile, ::Ice::Int& blackFlag, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBCheckSmsBlack_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(fromMobile);
        __os->write(toMobile);
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
        __is->read(blackFlag);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBDelSmsBlack(const ::std::string& mobileNo, const ::std::string& blackNo, const ::std::string& userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBDelSmsBlack_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(mobileNo);
        __os->write(blackNo);
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
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBGetRemindTime(const ::std::string& mobileNo, ::std::string& remindTime, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBGetRemindTime_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(mobileNo);
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
        __is->read(remindTime);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBUpdateRemindTime(const ::std::string& mobileNo, const ::std::string& remindTime, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBUpdateRemindTime_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(mobileNo);
        __os->write(remindTime);
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
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBGetAllMsgRevUser(::ALiIMDBSms::SSmsRevUserSeq& smsRevUserList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBGetAllMsgRevUser_name, ::Ice::Normal, __context, __compress);
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
        __is->read(smsRevUserList);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsTempUsers(::ALiIMDBSms::SSmsTempUserSeq& smsTempUserList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsTempUsers_name, ::Ice::Normal, __context, __compress);
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
        ::ALiIMDBSms::__read(__is, smsTempUserList, ::ALiIMDBSms::__U__SSmsTempUserSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBAddSmsTempUser(const ::ALiIMDBSms::SSmsTempUser& smsTempUser, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBAddSmsTempUser_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        smsTempUser.__write(__os);
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
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBDelSmsTempUser(const ::std::string& account, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBDelSmsTempUser_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(account);
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
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBGetUserBaseInfo(const ::std::string& userId, ::ALiIMDBSms::SUserBaseInfo& userInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBGetUserBaseInfo_name, ::Ice::Normal, __context, __compress);
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
        userInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsUserBalance(const ::std::string& userId, ::ALiIMDBSms::SSmsUserBalance& balanceInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsUserBalance_name, ::Ice::Normal, __context, __compress);
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
        balanceInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBUpdatePresentRemindFlag(const ::std::string& userId, ::Ice::Int flag, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBUpdatePresentRemindFlag_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(flag);
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
IceDelegateM::ALiIMDBSms::SmsDBProxyMgr::DBFeedBack(const ::std::string& beginTime, const ::std::string& endTime, ::Ice::Int& feeNum, ::Ice::Int& presentNum, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __ALiIMDBSms__SmsDBProxyMgr__DBFeedBack_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(beginTime);
        __os->write(endTime);
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
        __is->read(feeNum);
        __is->read(presentNum);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBAddValidate(const ::std::string& userId, ::Ice::Int type, const ::std::string& mobileNo, const ::std::string& validateCode, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBAddValidate_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBAddValidate(userId, type, mobileNo, validateCode, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBGetValidateInfoWithUpdate(const ::std::string& userId, ::Ice::Int type, ::Ice::Int updateFlag, ::std::string& validateCode, ::std::string& mobileNo, ::Ice::Int& sendTimes, ::Ice::Int& validateTimes, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBGetValidateInfoWithUpdate_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetValidateInfoWithUpdate(userId, type, updateFlag, validateCode, mobileNo, sendTimes, validateTimes, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBRemoveValidate(const ::std::string& userId, ::Ice::Int type, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBRemoveValidate_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBRemoveValidate(userId, type, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBUpdateValidateMobile(const ::std::string& userId, ::Ice::Int type, const ::std::string& mobileNo, const ::std::string& validatecode, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBUpdateValidateMobile_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBUpdateValidateMobile(userId, type, mobileNo, validatecode, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBAddSmsUser(const ::std::string& userId, const ::std::string& mobileNo, ::std::string& account, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBAddSmsUser_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBAddSmsUser(userId, mobileNo, account, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBBindMobile(const ::std::string& userId, const ::std::string& mobileNo, ::Ice::Int balance, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBBindMobile_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBBindMobile(userId, mobileNo, balance, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsUserInfoByUid(const ::std::string& userId, ::ALiIMDBSms::SSmsUserInfo& smsUserInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsUserInfoByUid_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetSmsUserInfoByUid(userId, smsUserInfo, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsUserInfoByAccount(const ::std::string& account, ::ALiIMDBSms::SSmsUserInfo& smsUserInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsUserInfoByAccount_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetSmsUserInfoByAccount(account, smsUserInfo, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsUserInfoByMobile(const ::std::string& mobileNo, ::ALiIMDBSms::SSmsUserInfo& smsUserInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsUserInfoByMobile_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetSmsUserInfoByMobile(mobileNo, smsUserInfo, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsUserMsgInfo(const ::std::string& userId, ::Ice::Int& todaySmsCount, ::Ice::Int& yesterdaySmsCount, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsUserMsgInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetSmsUserMsgInfo(userId, todaySmsCount, yesterdaySmsCount, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBAddSmsFunctionLog(const ::std::string& userId, ::Ice::Int functionType, ::Ice::Int action, const ::std::string& mobileNo, ::Ice::Int status, ::Ice::Int fromType, const ::std::string& errorDesc, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBAddSmsFunctionLog_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBAddSmsFunctionLog(userId, functionType, action, mobileNo, status, fromType, errorDesc, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBSetMobileOnlineFlag(const ::std::string& userId, ::Ice::Int onlineFlag, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBSetMobileOnlineFlag_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBSetMobileOnlineFlag(userId, onlineFlag, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBSetMobileBindFlag(const ::std::string& userId, ::Ice::Int bindFlag, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBSetMobileBindFlag_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBSetMobileBindFlag(userId, bindFlag, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBSetMessageRevFlag(const ::std::string& userId, ::Ice::Int revFlag, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBSetMessageRevFlag_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBSetMessageRevFlag(userId, revFlag, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBSetSmsRebind(const ::std::string& userId, const ::std::string& mobileNo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBSetSmsRebind_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBSetSmsRebind(userId, mobileNo, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBAddSmsMessage(const ::ALiIMDBSms::SSmsMsgInfo& smsMsgInfo, ::std::string& msgId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBAddSmsMessage_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBAddSmsMessage(smsMsgInfo, msgId, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsMessage(const ::std::string& msgId, ::ALiIMDBSms::SSmsMsgInfo& smsMsgInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsMessage_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetSmsMessage(msgId, smsMsgInfo, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsMessage2(const ::std::string& transId, ::ALiIMDBSms::SSmsMsgInfo& smsMsgInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsMessage2_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetSmsMessage2(transId, smsMsgInfo, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBUpdateSmsMsgStatus(const ::std::string& msgId, ::Ice::Int status, const ::std::string& errorDesc, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBUpdateSmsMsgStatus_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBUpdateSmsMsgStatus(msgId, status, errorDesc, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBUpdateSmsMsgStatus2(const ::std::string& transId, ::Ice::Int status, const ::std::string& errorDesc, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBUpdateSmsMsgStatus2_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBUpdateSmsMsgStatus2(transId, status, errorDesc, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsMailing(const ::std::string& userId, ::Ice::Int& flag, ::std::string& address, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsMailing_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetSmsMailing(userId, flag, address, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBUpdateSmsMailing(const ::std::string& userId, ::Ice::Int flag, const ::std::string& address, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBUpdateSmsMailing_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBUpdateSmsMailing(userId, flag, address, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsDiscount(const ::std::string& userId, ::Ice::Float& discount, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsDiscount_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetSmsDiscount(userId, discount, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsNeedChargeRecord(::Ice::Int inmins, ::Ice::Int type, ::std::string& seqid, ::std::string& account, ::std::string& passwd, ::Ice::Int& denomination, ::std::string& uid, ::Ice::Int& trytime, ::std::string& payId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsNeedChargeRecord_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetSmsNeedChargeRecord(inmins, type, seqid, account, passwd, denomination, uid, trytime, payId, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsChargeRecordInfo(const ::std::string& seqid, ::std::string& account, ::std::string& passwd, ::Ice::Int& denomination, ::std::string& uid, ::Ice::Int& status, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsChargeRecordInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetSmsChargeRecordInfo(seqid, account, passwd, denomination, uid, status, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsChargeRecords(const ::std::string& uid, const ::std::string& beginTime, const ::std::string& endTime, ::ALiIMDBSms::SChargeInfoSeq& chargeRecordList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsChargeRecords_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetSmsChargeRecords(uid, beginTime, endTime, chargeRecordList, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBAddSmsChargeRecord(const ::std::string& userId, ::Ice::Int type, const ::std::string& account, const ::std::string& password, ::Ice::Int denomination, ::Ice::Int money, const ::std::string& payId, ::std::string& chargeId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBAddSmsChargeRecord_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBAddSmsChargeRecord(userId, type, account, password, denomination, money, payId, chargeId, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBUpdateSmsChargeRecordStatus(const ::std::string& seqId, ::Ice::Int status, const ::std::string& desc, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBUpdateSmsChargeRecordStatus_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBUpdateSmsChargeRecordStatus(seqId, status, desc, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsBlacks(const ::std::string& mobileNo, ::Ice::StringSeq& blackNoList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsBlacks_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetSmsBlacks(mobileNo, blackNoList, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBAddSmsBlack(const ::std::string& mobileNo, const ::std::string& blackNo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBAddSmsBlack_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBAddSmsBlack(mobileNo, blackNo, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBCheckSmsBlack(const ::std::string& fromMobile, const ::std::string& toMobile, ::Ice::Int& blackFlag, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBCheckSmsBlack_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBCheckSmsBlack(fromMobile, toMobile, blackFlag, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBDelSmsBlack(const ::std::string& mobileNo, const ::std::string& blackNo, const ::std::string& userId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBDelSmsBlack_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBDelSmsBlack(mobileNo, blackNo, userId, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBGetRemindTime(const ::std::string& mobileNo, ::std::string& remindTime, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBGetRemindTime_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetRemindTime(mobileNo, remindTime, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBUpdateRemindTime(const ::std::string& mobileNo, const ::std::string& remindTime, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBUpdateRemindTime_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBUpdateRemindTime(mobileNo, remindTime, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBGetAllMsgRevUser(::ALiIMDBSms::SSmsRevUserSeq& smsRevUserList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBGetAllMsgRevUser_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetAllMsgRevUser(smsRevUserList, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsTempUsers(::ALiIMDBSms::SSmsTempUserSeq& smsTempUserList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsTempUsers_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetSmsTempUsers(smsTempUserList, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBAddSmsTempUser(const ::ALiIMDBSms::SSmsTempUser& smsTempUser, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBAddSmsTempUser_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBAddSmsTempUser(smsTempUser, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBDelSmsTempUser(const ::std::string& account, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBDelSmsTempUser_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBDelSmsTempUser(account, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBGetUserBaseInfo(const ::std::string& userId, ::ALiIMDBSms::SUserBaseInfo& userInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBGetUserBaseInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetUserBaseInfo(userId, userInfo, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBGetSmsUserBalance(const ::std::string& userId, ::ALiIMDBSms::SSmsUserBalance& balanceInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBGetSmsUserBalance_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBGetSmsUserBalance(userId, balanceInfo, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBUpdatePresentRemindFlag(const ::std::string& userId, ::Ice::Int flag, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBUpdatePresentRemindFlag_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBUpdatePresentRemindFlag(userId, flag, __current);
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
IceDelegateD::ALiIMDBSms::SmsDBProxyMgr::DBFeedBack(const ::std::string& beginTime, const ::std::string& endTime, ::Ice::Int& feeNum, ::Ice::Int& presentNum, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __ALiIMDBSms__SmsDBProxyMgr__DBFeedBack_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::ALiIMDBSms::SmsDBProxyMgr* __servant = dynamic_cast< ::ALiIMDBSms::SmsDBProxyMgr*>(__direct.servant().get());
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
                __ret = __servant->DBFeedBack(beginTime, endTime, feeNum, presentNum, __current);
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
ALiIMDBSms::SmsDBProxyMgr::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __ALiIMDBSms__SmsDBProxyMgr_ids[2] =
{
    "::ALiIMDBSms::SmsDBProxyMgr",
    "::Ice::Object"
};

bool
ALiIMDBSms::SmsDBProxyMgr::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__ALiIMDBSms__SmsDBProxyMgr_ids, __ALiIMDBSms__SmsDBProxyMgr_ids + 2, _s);
}

::std::vector< ::std::string>
ALiIMDBSms::SmsDBProxyMgr::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__ALiIMDBSms__SmsDBProxyMgr_ids[0], &__ALiIMDBSms__SmsDBProxyMgr_ids[2]);
}

const ::std::string&
ALiIMDBSms::SmsDBProxyMgr::ice_id(const ::Ice::Current&) const
{
    return __ALiIMDBSms__SmsDBProxyMgr_ids[0];
}

const ::std::string&
ALiIMDBSms::SmsDBProxyMgr::ice_staticId()
{
    return __ALiIMDBSms__SmsDBProxyMgr_ids[0];
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBAddValidate(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::Ice::Int type;
    ::std::string mobileNo;
    ::std::string validateCode;
    __is->read(userId);
    __is->read(type);
    __is->read(mobileNo);
    __is->read(validateCode);
    ::Ice::Int __ret = DBAddValidate(userId, type, mobileNo, validateCode, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBGetValidateInfoWithUpdate(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::Ice::Int type;
    ::Ice::Int updateFlag;
    __is->read(userId);
    __is->read(type);
    __is->read(updateFlag);
    ::std::string validateCode;
    ::std::string mobileNo;
    ::Ice::Int sendTimes;
    ::Ice::Int validateTimes;
    ::Ice::Int __ret = DBGetValidateInfoWithUpdate(userId, type, updateFlag, validateCode, mobileNo, sendTimes, validateTimes, __current);
    __os->write(validateCode);
    __os->write(mobileNo);
    __os->write(sendTimes);
    __os->write(validateTimes);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBRemoveValidate(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::Ice::Int type;
    __is->read(userId);
    __is->read(type);
    ::Ice::Int __ret = DBRemoveValidate(userId, type, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBUpdateValidateMobile(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::Ice::Int type;
    ::std::string mobileNo;
    ::std::string validatecode;
    __is->read(userId);
    __is->read(type);
    __is->read(mobileNo);
    __is->read(validatecode);
    ::Ice::Int __ret = DBUpdateValidateMobile(userId, type, mobileNo, validatecode, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBAddSmsUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::std::string mobileNo;
    __is->read(userId);
    __is->read(mobileNo);
    ::std::string account;
    ::Ice::Int __ret = DBAddSmsUser(userId, mobileNo, account, __current);
    __os->write(account);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBBindMobile(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::std::string mobileNo;
    ::Ice::Int balance;
    __is->read(userId);
    __is->read(mobileNo);
    __is->read(balance);
    ::Ice::Int __ret = DBBindMobile(userId, mobileNo, balance, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBGetSmsUserInfoByUid(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::ALiIMDBSms::SSmsUserInfo smsUserInfo;
    ::Ice::Int __ret = DBGetSmsUserInfoByUid(userId, smsUserInfo, __current);
    smsUserInfo.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBGetSmsUserInfoByAccount(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string account;
    __is->read(account);
    ::ALiIMDBSms::SSmsUserInfo smsUserInfo;
    ::Ice::Int __ret = DBGetSmsUserInfoByAccount(account, smsUserInfo, __current);
    smsUserInfo.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBGetSmsUserInfoByMobile(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string mobileNo;
    __is->read(mobileNo);
    ::ALiIMDBSms::SSmsUserInfo smsUserInfo;
    ::Ice::Int __ret = DBGetSmsUserInfoByMobile(mobileNo, smsUserInfo, __current);
    smsUserInfo.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBGetSmsUserMsgInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::Ice::Int todaySmsCount;
    ::Ice::Int yesterdaySmsCount;
    ::Ice::Int __ret = DBGetSmsUserMsgInfo(userId, todaySmsCount, yesterdaySmsCount, __current);
    __os->write(todaySmsCount);
    __os->write(yesterdaySmsCount);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBAddSmsFunctionLog(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::Ice::Int functionType;
    ::Ice::Int action;
    ::std::string mobileNo;
    ::Ice::Int status;
    ::Ice::Int fromType;
    ::std::string errorDesc;
    __is->read(userId);
    __is->read(functionType);
    __is->read(action);
    __is->read(mobileNo);
    __is->read(status);
    __is->read(fromType);
    __is->read(errorDesc);
    ::Ice::Int __ret = DBAddSmsFunctionLog(userId, functionType, action, mobileNo, status, fromType, errorDesc, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBSetMobileOnlineFlag(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::Ice::Int onlineFlag;
    __is->read(userId);
    __is->read(onlineFlag);
    ::Ice::Int __ret = DBSetMobileOnlineFlag(userId, onlineFlag, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBSetMobileBindFlag(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::Ice::Int bindFlag;
    __is->read(userId);
    __is->read(bindFlag);
    ::Ice::Int __ret = DBSetMobileBindFlag(userId, bindFlag, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBSetMessageRevFlag(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::Ice::Int revFlag;
    __is->read(userId);
    __is->read(revFlag);
    ::Ice::Int __ret = DBSetMessageRevFlag(userId, revFlag, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBSetSmsRebind(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::std::string mobileNo;
    __is->read(userId);
    __is->read(mobileNo);
    ::Ice::Int __ret = DBSetSmsRebind(userId, mobileNo, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBAddSmsMessage(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::ALiIMDBSms::SSmsMsgInfo smsMsgInfo;
    smsMsgInfo.__read(__is);
    ::std::string msgId;
    ::Ice::Int __ret = DBAddSmsMessage(smsMsgInfo, msgId, __current);
    __os->write(msgId);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBGetSmsMessage(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string msgId;
    __is->read(msgId);
    ::ALiIMDBSms::SSmsMsgInfo smsMsgInfo;
    ::Ice::Int __ret = DBGetSmsMessage(msgId, smsMsgInfo, __current);
    smsMsgInfo.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBGetSmsMessage2(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string transId;
    __is->read(transId);
    ::ALiIMDBSms::SSmsMsgInfo smsMsgInfo;
    ::Ice::Int __ret = DBGetSmsMessage2(transId, smsMsgInfo, __current);
    smsMsgInfo.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBUpdateSmsMsgStatus(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string msgId;
    ::Ice::Int status;
    ::std::string errorDesc;
    __is->read(msgId);
    __is->read(status);
    __is->read(errorDesc);
    ::Ice::Int __ret = DBUpdateSmsMsgStatus(msgId, status, errorDesc, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBUpdateSmsMsgStatus2(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string transId;
    ::Ice::Int status;
    ::std::string errorDesc;
    __is->read(transId);
    __is->read(status);
    __is->read(errorDesc);
    ::Ice::Int __ret = DBUpdateSmsMsgStatus2(transId, status, errorDesc, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBGetSmsMailing(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::Ice::Int flag;
    ::std::string address;
    ::Ice::Int __ret = DBGetSmsMailing(userId, flag, address, __current);
    __os->write(flag);
    __os->write(address);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBUpdateSmsMailing(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::Ice::Int flag;
    ::std::string address;
    __is->read(userId);
    __is->read(flag);
    __is->read(address);
    ::Ice::Int __ret = DBUpdateSmsMailing(userId, flag, address, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBGetSmsDiscount(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::Ice::Float discount;
    ::Ice::Int __ret = DBGetSmsDiscount(userId, discount, __current);
    __os->write(discount);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBGetSmsNeedChargeRecord(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int inmins;
    ::Ice::Int type;
    __is->read(inmins);
    __is->read(type);
    ::std::string seqid;
    ::std::string account;
    ::std::string passwd;
    ::Ice::Int denomination;
    ::std::string uid;
    ::Ice::Int trytime;
    ::std::string payId;
    ::Ice::Int __ret = DBGetSmsNeedChargeRecord(inmins, type, seqid, account, passwd, denomination, uid, trytime, payId, __current);
    __os->write(seqid);
    __os->write(account);
    __os->write(passwd);
    __os->write(denomination);
    __os->write(uid);
    __os->write(trytime);
    __os->write(payId);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBGetSmsChargeRecordInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string seqid;
    __is->read(seqid);
    ::std::string account;
    ::std::string passwd;
    ::Ice::Int denomination;
    ::std::string uid;
    ::Ice::Int status;
    ::Ice::Int __ret = DBGetSmsChargeRecordInfo(seqid, account, passwd, denomination, uid, status, __current);
    __os->write(account);
    __os->write(passwd);
    __os->write(denomination);
    __os->write(uid);
    __os->write(status);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBGetSmsChargeRecords(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string beginTime;
    ::std::string endTime;
    __is->read(uid);
    __is->read(beginTime);
    __is->read(endTime);
    ::ALiIMDBSms::SChargeInfoSeq chargeRecordList;
    ::Ice::Int __ret = DBGetSmsChargeRecords(uid, beginTime, endTime, chargeRecordList, __current);
    if(chargeRecordList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::ALiIMDBSms::__write(__os, &chargeRecordList[0], &chargeRecordList[0] + chargeRecordList.size(), ::ALiIMDBSms::__U__SChargeInfoSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBAddSmsChargeRecord(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::Ice::Int type;
    ::std::string account;
    ::std::string password;
    ::Ice::Int denomination;
    ::Ice::Int money;
    ::std::string payId;
    __is->read(userId);
    __is->read(type);
    __is->read(account);
    __is->read(password);
    __is->read(denomination);
    __is->read(money);
    __is->read(payId);
    ::std::string chargeId;
    ::Ice::Int __ret = DBAddSmsChargeRecord(userId, type, account, password, denomination, money, payId, chargeId, __current);
    __os->write(chargeId);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBUpdateSmsChargeRecordStatus(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string seqId;
    ::Ice::Int status;
    ::std::string desc;
    __is->read(seqId);
    __is->read(status);
    __is->read(desc);
    ::Ice::Int __ret = DBUpdateSmsChargeRecordStatus(seqId, status, desc, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBGetSmsBlacks(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string mobileNo;
    __is->read(mobileNo);
    ::Ice::StringSeq blackNoList;
    ::Ice::Int __ret = DBGetSmsBlacks(mobileNo, blackNoList, __current);
    if(blackNoList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&blackNoList[0], &blackNoList[0] + blackNoList.size());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBAddSmsBlack(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string mobileNo;
    ::std::string blackNo;
    __is->read(mobileNo);
    __is->read(blackNo);
    ::Ice::Int __ret = DBAddSmsBlack(mobileNo, blackNo, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBCheckSmsBlack(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string fromMobile;
    ::std::string toMobile;
    __is->read(fromMobile);
    __is->read(toMobile);
    ::Ice::Int blackFlag;
    ::Ice::Int __ret = DBCheckSmsBlack(fromMobile, toMobile, blackFlag, __current);
    __os->write(blackFlag);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBDelSmsBlack(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string mobileNo;
    ::std::string blackNo;
    ::std::string userId;
    __is->read(mobileNo);
    __is->read(blackNo);
    __is->read(userId);
    ::Ice::Int __ret = DBDelSmsBlack(mobileNo, blackNo, userId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBGetRemindTime(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string mobileNo;
    __is->read(mobileNo);
    ::std::string remindTime;
    ::Ice::Int __ret = DBGetRemindTime(mobileNo, remindTime, __current);
    __os->write(remindTime);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBUpdateRemindTime(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string mobileNo;
    ::std::string remindTime;
    __is->read(mobileNo);
    __is->read(remindTime);
    ::Ice::Int __ret = DBUpdateRemindTime(mobileNo, remindTime, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBGetAllMsgRevUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::ALiIMDBSms::SSmsRevUserSeq smsRevUserList;
    ::Ice::Int __ret = DBGetAllMsgRevUser(smsRevUserList, __current);
    if(smsRevUserList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&smsRevUserList[0], &smsRevUserList[0] + smsRevUserList.size());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBGetSmsTempUsers(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::ALiIMDBSms::SSmsTempUserSeq smsTempUserList;
    ::Ice::Int __ret = DBGetSmsTempUsers(smsTempUserList, __current);
    if(smsTempUserList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::ALiIMDBSms::__write(__os, &smsTempUserList[0], &smsTempUserList[0] + smsTempUserList.size(), ::ALiIMDBSms::__U__SSmsTempUserSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBAddSmsTempUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::ALiIMDBSms::SSmsTempUser smsTempUser;
    smsTempUser.__read(__is);
    ::Ice::Int __ret = DBAddSmsTempUser(smsTempUser, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBDelSmsTempUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string account;
    __is->read(account);
    ::Ice::Int __ret = DBDelSmsTempUser(account, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBGetUserBaseInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::ALiIMDBSms::SUserBaseInfo userInfo;
    ::Ice::Int __ret = DBGetUserBaseInfo(userId, userInfo, __current);
    userInfo.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBGetSmsUserBalance(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::ALiIMDBSms::SSmsUserBalance balanceInfo;
    ::Ice::Int __ret = DBGetSmsUserBalance(userId, balanceInfo, __current);
    balanceInfo.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBUpdatePresentRemindFlag(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::Ice::Int flag;
    __is->read(userId);
    __is->read(flag);
    ::Ice::Int __ret = DBUpdatePresentRemindFlag(userId, flag, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::___DBFeedBack(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string beginTime;
    ::std::string endTime;
    __is->read(beginTime);
    __is->read(endTime);
    ::Ice::Int feeNum;
    ::Ice::Int presentNum;
    ::Ice::Int __ret = DBFeedBack(beginTime, endTime, feeNum, presentNum, __current);
    __os->write(feeNum);
    __os->write(presentNum);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __ALiIMDBSms__SmsDBProxyMgr_all[] =
{
    "DBAddSmsBlack",
    "DBAddSmsChargeRecord",
    "DBAddSmsFunctionLog",
    "DBAddSmsMessage",
    "DBAddSmsTempUser",
    "DBAddSmsUser",
    "DBAddValidate",
    "DBBindMobile",
    "DBCheckSmsBlack",
    "DBDelSmsBlack",
    "DBDelSmsTempUser",
    "DBFeedBack",
    "DBGetAllMsgRevUser",
    "DBGetRemindTime",
    "DBGetSmsBlacks",
    "DBGetSmsChargeRecordInfo",
    "DBGetSmsChargeRecords",
    "DBGetSmsDiscount",
    "DBGetSmsMailing",
    "DBGetSmsMessage",
    "DBGetSmsMessage2",
    "DBGetSmsNeedChargeRecord",
    "DBGetSmsTempUsers",
    "DBGetSmsUserBalance",
    "DBGetSmsUserInfoByAccount",
    "DBGetSmsUserInfoByMobile",
    "DBGetSmsUserInfoByUid",
    "DBGetSmsUserMsgInfo",
    "DBGetUserBaseInfo",
    "DBGetValidateInfoWithUpdate",
    "DBRemoveValidate",
    "DBSetMessageRevFlag",
    "DBSetMobileBindFlag",
    "DBSetMobileOnlineFlag",
    "DBSetSmsRebind",
    "DBUpdatePresentRemindFlag",
    "DBUpdateRemindTime",
    "DBUpdateSmsChargeRecordStatus",
    "DBUpdateSmsMailing",
    "DBUpdateSmsMsgStatus",
    "DBUpdateSmsMsgStatus2",
    "DBUpdateValidateMobile",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::IceInternal::DispatchStatus
ALiIMDBSms::SmsDBProxyMgr::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__ALiIMDBSms__SmsDBProxyMgr_all, __ALiIMDBSms__SmsDBProxyMgr_all + 46, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __ALiIMDBSms__SmsDBProxyMgr_all)
    {
        case 0:
        {
            return ___DBAddSmsBlack(in, current);
        }
        case 1:
        {
            return ___DBAddSmsChargeRecord(in, current);
        }
        case 2:
        {
            return ___DBAddSmsFunctionLog(in, current);
        }
        case 3:
        {
            return ___DBAddSmsMessage(in, current);
        }
        case 4:
        {
            return ___DBAddSmsTempUser(in, current);
        }
        case 5:
        {
            return ___DBAddSmsUser(in, current);
        }
        case 6:
        {
            return ___DBAddValidate(in, current);
        }
        case 7:
        {
            return ___DBBindMobile(in, current);
        }
        case 8:
        {
            return ___DBCheckSmsBlack(in, current);
        }
        case 9:
        {
            return ___DBDelSmsBlack(in, current);
        }
        case 10:
        {
            return ___DBDelSmsTempUser(in, current);
        }
        case 11:
        {
            return ___DBFeedBack(in, current);
        }
        case 12:
        {
            return ___DBGetAllMsgRevUser(in, current);
        }
        case 13:
        {
            return ___DBGetRemindTime(in, current);
        }
        case 14:
        {
            return ___DBGetSmsBlacks(in, current);
        }
        case 15:
        {
            return ___DBGetSmsChargeRecordInfo(in, current);
        }
        case 16:
        {
            return ___DBGetSmsChargeRecords(in, current);
        }
        case 17:
        {
            return ___DBGetSmsDiscount(in, current);
        }
        case 18:
        {
            return ___DBGetSmsMailing(in, current);
        }
        case 19:
        {
            return ___DBGetSmsMessage(in, current);
        }
        case 20:
        {
            return ___DBGetSmsMessage2(in, current);
        }
        case 21:
        {
            return ___DBGetSmsNeedChargeRecord(in, current);
        }
        case 22:
        {
            return ___DBGetSmsTempUsers(in, current);
        }
        case 23:
        {
            return ___DBGetSmsUserBalance(in, current);
        }
        case 24:
        {
            return ___DBGetSmsUserInfoByAccount(in, current);
        }
        case 25:
        {
            return ___DBGetSmsUserInfoByMobile(in, current);
        }
        case 26:
        {
            return ___DBGetSmsUserInfoByUid(in, current);
        }
        case 27:
        {
            return ___DBGetSmsUserMsgInfo(in, current);
        }
        case 28:
        {
            return ___DBGetUserBaseInfo(in, current);
        }
        case 29:
        {
            return ___DBGetValidateInfoWithUpdate(in, current);
        }
        case 30:
        {
            return ___DBRemoveValidate(in, current);
        }
        case 31:
        {
            return ___DBSetMessageRevFlag(in, current);
        }
        case 32:
        {
            return ___DBSetMobileBindFlag(in, current);
        }
        case 33:
        {
            return ___DBSetMobileOnlineFlag(in, current);
        }
        case 34:
        {
            return ___DBSetSmsRebind(in, current);
        }
        case 35:
        {
            return ___DBUpdatePresentRemindFlag(in, current);
        }
        case 36:
        {
            return ___DBUpdateRemindTime(in, current);
        }
        case 37:
        {
            return ___DBUpdateSmsChargeRecordStatus(in, current);
        }
        case 38:
        {
            return ___DBUpdateSmsMailing(in, current);
        }
        case 39:
        {
            return ___DBUpdateSmsMsgStatus(in, current);
        }
        case 40:
        {
            return ___DBUpdateSmsMsgStatus2(in, current);
        }
        case 41:
        {
            return ___DBUpdateValidateMobile(in, current);
        }
        case 42:
        {
            return ___ice_id(in, current);
        }
        case 43:
        {
            return ___ice_ids(in, current);
        }
        case 44:
        {
            return ___ice_isA(in, current);
        }
        case 45:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
ALiIMDBSms::SmsDBProxyMgr::__write(::IceInternal::BasicStream* __os) const
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
ALiIMDBSms::SmsDBProxyMgr::__read(::IceInternal::BasicStream* __is, bool __rid)
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
ALiIMDBSms::SmsDBProxyMgr::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type ALiIMDBSms::SmsDBProxyMgr was not generated with stream support";
    throw ex;
}

void
ALiIMDBSms::SmsDBProxyMgr::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type ALiIMDBSms::SmsDBProxyMgr was not generated with stream support";
    throw ex;
}

void 
ALiIMDBSms::__patch__SmsDBProxyMgrPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::ALiIMDBSms::SmsDBProxyMgrPtr* p = static_cast< ::ALiIMDBSms::SmsDBProxyMgrPtr*>(__addr);
    assert(p);
    *p = ::ALiIMDBSms::SmsDBProxyMgrPtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::ALiIMDBSms::SmsDBProxyMgr::ice_staticId();
        throw e;
    }
}

bool
ALiIMDBSms::operator==(const ::ALiIMDBSms::SmsDBProxyMgr& l, const ::ALiIMDBSms::SmsDBProxyMgr& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
ALiIMDBSms::operator!=(const ::ALiIMDBSms::SmsDBProxyMgr& l, const ::ALiIMDBSms::SmsDBProxyMgr& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
ALiIMDBSms::operator<(const ::ALiIMDBSms::SmsDBProxyMgr& l, const ::ALiIMDBSms::SmsDBProxyMgr& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
ALiIMDBSms::operator<=(const ::ALiIMDBSms::SmsDBProxyMgr& l, const ::ALiIMDBSms::SmsDBProxyMgr& r)
{
    return l < r || l == r;
}

bool
ALiIMDBSms::operator>(const ::ALiIMDBSms::SmsDBProxyMgr& l, const ::ALiIMDBSms::SmsDBProxyMgr& r)
{
    return !(l < r) && !(l == r);
}

bool
ALiIMDBSms::operator>=(const ::ALiIMDBSms::SmsDBProxyMgr& l, const ::ALiIMDBSms::SmsDBProxyMgr& r)
{
    return !(l < r);
}
