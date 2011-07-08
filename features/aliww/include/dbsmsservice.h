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

#ifndef __dbsmsservice_h__
#define __dbsmsservice_h__

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
#include <dbsmsstructs.h>
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

namespace ALiIMDBSms
{

class SmsDBProxyMgr;
bool operator==(const SmsDBProxyMgr&, const SmsDBProxyMgr&);
bool operator!=(const SmsDBProxyMgr&, const SmsDBProxyMgr&);
bool operator<(const SmsDBProxyMgr&, const SmsDBProxyMgr&);
bool operator<=(const SmsDBProxyMgr&, const SmsDBProxyMgr&);
bool operator>(const SmsDBProxyMgr&, const SmsDBProxyMgr&);
bool operator>=(const SmsDBProxyMgr&, const SmsDBProxyMgr&);

}

}

namespace ALiIMDBSms
{

class SmsDBProxyMgr;
bool operator==(const SmsDBProxyMgr&, const SmsDBProxyMgr&);
bool operator!=(const SmsDBProxyMgr&, const SmsDBProxyMgr&);
bool operator<(const SmsDBProxyMgr&, const SmsDBProxyMgr&);
bool operator<=(const SmsDBProxyMgr&, const SmsDBProxyMgr&);
bool operator>(const SmsDBProxyMgr&, const SmsDBProxyMgr&);
bool operator>=(const SmsDBProxyMgr&, const SmsDBProxyMgr&);

}

namespace IceInternal
{

void incRef(::ALiIMDBSms::SmsDBProxyMgr*);
void decRef(::ALiIMDBSms::SmsDBProxyMgr*);

void incRef(::IceProxy::ALiIMDBSms::SmsDBProxyMgr*);
void decRef(::IceProxy::ALiIMDBSms::SmsDBProxyMgr*);

}

namespace ALiIMDBSms
{

typedef ::IceInternal::Handle< ::ALiIMDBSms::SmsDBProxyMgr> SmsDBProxyMgrPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::ALiIMDBSms::SmsDBProxyMgr> SmsDBProxyMgrPrx;

void __write(::IceInternal::BasicStream*, const SmsDBProxyMgrPrx&);
void __read(::IceInternal::BasicStream*, SmsDBProxyMgrPrx&);
void __write(::IceInternal::BasicStream*, const SmsDBProxyMgrPtr&);
void __patch__SmsDBProxyMgrPtr(void*, ::Ice::ObjectPtr&);

void __addObject(const SmsDBProxyMgrPtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const SmsDBProxyMgrPtr&);
void __decRefUnsafe(const SmsDBProxyMgrPtr&);
void __clearHandleUnsafe(SmsDBProxyMgrPtr&);

}

namespace ALiIMDBSms
{

}

namespace IceProxy
{

namespace ALiIMDBSms
{

class SmsDBProxyMgr : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int DBAddValidate(const ::std::string& userId, ::Ice::Int type, const ::std::string& mobileNo, const ::std::string& validateCode)
    {
        return DBAddValidate(userId, type, mobileNo, validateCode, 0);
    }
    ::Ice::Int DBAddValidate(const ::std::string& userId, ::Ice::Int type, const ::std::string& mobileNo, const ::std::string& validateCode, const ::Ice::Context& __ctx)
    {
        return DBAddValidate(userId, type, mobileNo, validateCode, &__ctx);
    }
    
private:

    ::Ice::Int DBAddValidate(const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetValidateInfoWithUpdate(const ::std::string& userId, ::Ice::Int type, ::Ice::Int updateFlag, ::std::string& validateCode, ::std::string& mobileNo, ::Ice::Int& sendTimes, ::Ice::Int& validateTimes)
    {
        return DBGetValidateInfoWithUpdate(userId, type, updateFlag, validateCode, mobileNo, sendTimes, validateTimes, 0);
    }
    ::Ice::Int DBGetValidateInfoWithUpdate(const ::std::string& userId, ::Ice::Int type, ::Ice::Int updateFlag, ::std::string& validateCode, ::std::string& mobileNo, ::Ice::Int& sendTimes, ::Ice::Int& validateTimes, const ::Ice::Context& __ctx)
    {
        return DBGetValidateInfoWithUpdate(userId, type, updateFlag, validateCode, mobileNo, sendTimes, validateTimes, &__ctx);
    }
    
private:

    ::Ice::Int DBGetValidateInfoWithUpdate(const ::std::string&, ::Ice::Int, ::Ice::Int, ::std::string&, ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBRemoveValidate(const ::std::string& userId, ::Ice::Int type)
    {
        return DBRemoveValidate(userId, type, 0);
    }
    ::Ice::Int DBRemoveValidate(const ::std::string& userId, ::Ice::Int type, const ::Ice::Context& __ctx)
    {
        return DBRemoveValidate(userId, type, &__ctx);
    }
    
private:

    ::Ice::Int DBRemoveValidate(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int DBUpdateValidateMobile(const ::std::string& userId, ::Ice::Int type, const ::std::string& mobileNo, const ::std::string& validatecode)
    {
        return DBUpdateValidateMobile(userId, type, mobileNo, validatecode, 0);
    }
    ::Ice::Int DBUpdateValidateMobile(const ::std::string& userId, ::Ice::Int type, const ::std::string& mobileNo, const ::std::string& validatecode, const ::Ice::Context& __ctx)
    {
        return DBUpdateValidateMobile(userId, type, mobileNo, validatecode, &__ctx);
    }
    
private:

    ::Ice::Int DBUpdateValidateMobile(const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBAddSmsUser(const ::std::string& userId, const ::std::string& mobileNo, ::std::string& account)
    {
        return DBAddSmsUser(userId, mobileNo, account, 0);
    }
    ::Ice::Int DBAddSmsUser(const ::std::string& userId, const ::std::string& mobileNo, ::std::string& account, const ::Ice::Context& __ctx)
    {
        return DBAddSmsUser(userId, mobileNo, account, &__ctx);
    }
    
private:

    ::Ice::Int DBAddSmsUser(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBBindMobile(const ::std::string& userId, const ::std::string& mobileNo, ::Ice::Int balance)
    {
        return DBBindMobile(userId, mobileNo, balance, 0);
    }
    ::Ice::Int DBBindMobile(const ::std::string& userId, const ::std::string& mobileNo, ::Ice::Int balance, const ::Ice::Context& __ctx)
    {
        return DBBindMobile(userId, mobileNo, balance, &__ctx);
    }
    
private:

    ::Ice::Int DBBindMobile(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetSmsUserInfoByUid(const ::std::string& userId, ::ALiIMDBSms::SSmsUserInfo& smsUserInfo)
    {
        return DBGetSmsUserInfoByUid(userId, smsUserInfo, 0);
    }
    ::Ice::Int DBGetSmsUserInfoByUid(const ::std::string& userId, ::ALiIMDBSms::SSmsUserInfo& smsUserInfo, const ::Ice::Context& __ctx)
    {
        return DBGetSmsUserInfoByUid(userId, smsUserInfo, &__ctx);
    }
    
private:

    ::Ice::Int DBGetSmsUserInfoByUid(const ::std::string&, ::ALiIMDBSms::SSmsUserInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetSmsUserInfoByAccount(const ::std::string& account, ::ALiIMDBSms::SSmsUserInfo& smsUserInfo)
    {
        return DBGetSmsUserInfoByAccount(account, smsUserInfo, 0);
    }
    ::Ice::Int DBGetSmsUserInfoByAccount(const ::std::string& account, ::ALiIMDBSms::SSmsUserInfo& smsUserInfo, const ::Ice::Context& __ctx)
    {
        return DBGetSmsUserInfoByAccount(account, smsUserInfo, &__ctx);
    }
    
private:

    ::Ice::Int DBGetSmsUserInfoByAccount(const ::std::string&, ::ALiIMDBSms::SSmsUserInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetSmsUserInfoByMobile(const ::std::string& mobileNo, ::ALiIMDBSms::SSmsUserInfo& smsUserInfo)
    {
        return DBGetSmsUserInfoByMobile(mobileNo, smsUserInfo, 0);
    }
    ::Ice::Int DBGetSmsUserInfoByMobile(const ::std::string& mobileNo, ::ALiIMDBSms::SSmsUserInfo& smsUserInfo, const ::Ice::Context& __ctx)
    {
        return DBGetSmsUserInfoByMobile(mobileNo, smsUserInfo, &__ctx);
    }
    
private:

    ::Ice::Int DBGetSmsUserInfoByMobile(const ::std::string&, ::ALiIMDBSms::SSmsUserInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetSmsUserMsgInfo(const ::std::string& userId, ::Ice::Int& todaySmsCount, ::Ice::Int& yesterdaySmsCount)
    {
        return DBGetSmsUserMsgInfo(userId, todaySmsCount, yesterdaySmsCount, 0);
    }
    ::Ice::Int DBGetSmsUserMsgInfo(const ::std::string& userId, ::Ice::Int& todaySmsCount, ::Ice::Int& yesterdaySmsCount, const ::Ice::Context& __ctx)
    {
        return DBGetSmsUserMsgInfo(userId, todaySmsCount, yesterdaySmsCount, &__ctx);
    }
    
private:

    ::Ice::Int DBGetSmsUserMsgInfo(const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBAddSmsFunctionLog(const ::std::string& userId, ::Ice::Int functionType, ::Ice::Int action, const ::std::string& mobileNo, ::Ice::Int status, ::Ice::Int fromType, const ::std::string& errorDesc)
    {
        return DBAddSmsFunctionLog(userId, functionType, action, mobileNo, status, fromType, errorDesc, 0);
    }
    ::Ice::Int DBAddSmsFunctionLog(const ::std::string& userId, ::Ice::Int functionType, ::Ice::Int action, const ::std::string& mobileNo, ::Ice::Int status, ::Ice::Int fromType, const ::std::string& errorDesc, const ::Ice::Context& __ctx)
    {
        return DBAddSmsFunctionLog(userId, functionType, action, mobileNo, status, fromType, errorDesc, &__ctx);
    }
    
private:

    ::Ice::Int DBAddSmsFunctionLog(const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBSetMobileOnlineFlag(const ::std::string& userId, ::Ice::Int onlineFlag)
    {
        return DBSetMobileOnlineFlag(userId, onlineFlag, 0);
    }
    ::Ice::Int DBSetMobileOnlineFlag(const ::std::string& userId, ::Ice::Int onlineFlag, const ::Ice::Context& __ctx)
    {
        return DBSetMobileOnlineFlag(userId, onlineFlag, &__ctx);
    }
    
private:

    ::Ice::Int DBSetMobileOnlineFlag(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int DBSetMobileBindFlag(const ::std::string& userId, ::Ice::Int bindFlag)
    {
        return DBSetMobileBindFlag(userId, bindFlag, 0);
    }
    ::Ice::Int DBSetMobileBindFlag(const ::std::string& userId, ::Ice::Int bindFlag, const ::Ice::Context& __ctx)
    {
        return DBSetMobileBindFlag(userId, bindFlag, &__ctx);
    }
    
private:

    ::Ice::Int DBSetMobileBindFlag(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int DBSetMessageRevFlag(const ::std::string& userId, ::Ice::Int revFlag)
    {
        return DBSetMessageRevFlag(userId, revFlag, 0);
    }
    ::Ice::Int DBSetMessageRevFlag(const ::std::string& userId, ::Ice::Int revFlag, const ::Ice::Context& __ctx)
    {
        return DBSetMessageRevFlag(userId, revFlag, &__ctx);
    }
    
private:

    ::Ice::Int DBSetMessageRevFlag(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int DBSetSmsRebind(const ::std::string& userId, const ::std::string& mobileNo)
    {
        return DBSetSmsRebind(userId, mobileNo, 0);
    }
    ::Ice::Int DBSetSmsRebind(const ::std::string& userId, const ::std::string& mobileNo, const ::Ice::Context& __ctx)
    {
        return DBSetSmsRebind(userId, mobileNo, &__ctx);
    }
    
private:

    ::Ice::Int DBSetSmsRebind(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBAddSmsMessage(const ::ALiIMDBSms::SSmsMsgInfo& smsMsgInfo, ::std::string& msgId)
    {
        return DBAddSmsMessage(smsMsgInfo, msgId, 0);
    }
    ::Ice::Int DBAddSmsMessage(const ::ALiIMDBSms::SSmsMsgInfo& smsMsgInfo, ::std::string& msgId, const ::Ice::Context& __ctx)
    {
        return DBAddSmsMessage(smsMsgInfo, msgId, &__ctx);
    }
    
private:

    ::Ice::Int DBAddSmsMessage(const ::ALiIMDBSms::SSmsMsgInfo&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetSmsMessage(const ::std::string& msgId, ::ALiIMDBSms::SSmsMsgInfo& smsMsgInfo)
    {
        return DBGetSmsMessage(msgId, smsMsgInfo, 0);
    }
    ::Ice::Int DBGetSmsMessage(const ::std::string& msgId, ::ALiIMDBSms::SSmsMsgInfo& smsMsgInfo, const ::Ice::Context& __ctx)
    {
        return DBGetSmsMessage(msgId, smsMsgInfo, &__ctx);
    }
    
private:

    ::Ice::Int DBGetSmsMessage(const ::std::string&, ::ALiIMDBSms::SSmsMsgInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetSmsMessage2(const ::std::string& transId, ::ALiIMDBSms::SSmsMsgInfo& smsMsgInfo)
    {
        return DBGetSmsMessage2(transId, smsMsgInfo, 0);
    }
    ::Ice::Int DBGetSmsMessage2(const ::std::string& transId, ::ALiIMDBSms::SSmsMsgInfo& smsMsgInfo, const ::Ice::Context& __ctx)
    {
        return DBGetSmsMessage2(transId, smsMsgInfo, &__ctx);
    }
    
private:

    ::Ice::Int DBGetSmsMessage2(const ::std::string&, ::ALiIMDBSms::SSmsMsgInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBUpdateSmsMsgStatus(const ::std::string& msgId, ::Ice::Int status, const ::std::string& errorDesc)
    {
        return DBUpdateSmsMsgStatus(msgId, status, errorDesc, 0);
    }
    ::Ice::Int DBUpdateSmsMsgStatus(const ::std::string& msgId, ::Ice::Int status, const ::std::string& errorDesc, const ::Ice::Context& __ctx)
    {
        return DBUpdateSmsMsgStatus(msgId, status, errorDesc, &__ctx);
    }
    
private:

    ::Ice::Int DBUpdateSmsMsgStatus(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBUpdateSmsMsgStatus2(const ::std::string& transId, ::Ice::Int status, const ::std::string& errorDesc)
    {
        return DBUpdateSmsMsgStatus2(transId, status, errorDesc, 0);
    }
    ::Ice::Int DBUpdateSmsMsgStatus2(const ::std::string& transId, ::Ice::Int status, const ::std::string& errorDesc, const ::Ice::Context& __ctx)
    {
        return DBUpdateSmsMsgStatus2(transId, status, errorDesc, &__ctx);
    }
    
private:

    ::Ice::Int DBUpdateSmsMsgStatus2(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetSmsMailing(const ::std::string& userId, ::Ice::Int& flag, ::std::string& address)
    {
        return DBGetSmsMailing(userId, flag, address, 0);
    }
    ::Ice::Int DBGetSmsMailing(const ::std::string& userId, ::Ice::Int& flag, ::std::string& address, const ::Ice::Context& __ctx)
    {
        return DBGetSmsMailing(userId, flag, address, &__ctx);
    }
    
private:

    ::Ice::Int DBGetSmsMailing(const ::std::string&, ::Ice::Int&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBUpdateSmsMailing(const ::std::string& userId, ::Ice::Int flag, const ::std::string& address)
    {
        return DBUpdateSmsMailing(userId, flag, address, 0);
    }
    ::Ice::Int DBUpdateSmsMailing(const ::std::string& userId, ::Ice::Int flag, const ::std::string& address, const ::Ice::Context& __ctx)
    {
        return DBUpdateSmsMailing(userId, flag, address, &__ctx);
    }
    
private:

    ::Ice::Int DBUpdateSmsMailing(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetSmsDiscount(const ::std::string& userId, ::Ice::Float& discount)
    {
        return DBGetSmsDiscount(userId, discount, 0);
    }
    ::Ice::Int DBGetSmsDiscount(const ::std::string& userId, ::Ice::Float& discount, const ::Ice::Context& __ctx)
    {
        return DBGetSmsDiscount(userId, discount, &__ctx);
    }
    
private:

    ::Ice::Int DBGetSmsDiscount(const ::std::string&, ::Ice::Float&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetSmsNeedChargeRecord(::Ice::Int inmins, ::Ice::Int type, ::std::string& seqid, ::std::string& account, ::std::string& passwd, ::Ice::Int& denomination, ::std::string& uid, ::Ice::Int& trytime, ::std::string& payId)
    {
        return DBGetSmsNeedChargeRecord(inmins, type, seqid, account, passwd, denomination, uid, trytime, payId, 0);
    }
    ::Ice::Int DBGetSmsNeedChargeRecord(::Ice::Int inmins, ::Ice::Int type, ::std::string& seqid, ::std::string& account, ::std::string& passwd, ::Ice::Int& denomination, ::std::string& uid, ::Ice::Int& trytime, ::std::string& payId, const ::Ice::Context& __ctx)
    {
        return DBGetSmsNeedChargeRecord(inmins, type, seqid, account, passwd, denomination, uid, trytime, payId, &__ctx);
    }
    
private:

    ::Ice::Int DBGetSmsNeedChargeRecord(::Ice::Int, ::Ice::Int, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, ::std::string&, ::Ice::Int&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetSmsChargeRecordInfo(const ::std::string& seqid, ::std::string& account, ::std::string& passwd, ::Ice::Int& denomination, ::std::string& uid, ::Ice::Int& status)
    {
        return DBGetSmsChargeRecordInfo(seqid, account, passwd, denomination, uid, status, 0);
    }
    ::Ice::Int DBGetSmsChargeRecordInfo(const ::std::string& seqid, ::std::string& account, ::std::string& passwd, ::Ice::Int& denomination, ::std::string& uid, ::Ice::Int& status, const ::Ice::Context& __ctx)
    {
        return DBGetSmsChargeRecordInfo(seqid, account, passwd, denomination, uid, status, &__ctx);
    }
    
private:

    ::Ice::Int DBGetSmsChargeRecordInfo(const ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetSmsChargeRecords(const ::std::string& uid, const ::std::string& beginTime, const ::std::string& endTime, ::ALiIMDBSms::SChargeInfoSeq& chargeRecordList)
    {
        return DBGetSmsChargeRecords(uid, beginTime, endTime, chargeRecordList, 0);
    }
    ::Ice::Int DBGetSmsChargeRecords(const ::std::string& uid, const ::std::string& beginTime, const ::std::string& endTime, ::ALiIMDBSms::SChargeInfoSeq& chargeRecordList, const ::Ice::Context& __ctx)
    {
        return DBGetSmsChargeRecords(uid, beginTime, endTime, chargeRecordList, &__ctx);
    }
    
private:

    ::Ice::Int DBGetSmsChargeRecords(const ::std::string&, const ::std::string&, const ::std::string&, ::ALiIMDBSms::SChargeInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBAddSmsChargeRecord(const ::std::string& userId, ::Ice::Int type, const ::std::string& account, const ::std::string& password, ::Ice::Int denomination, ::Ice::Int money, const ::std::string& payId, ::std::string& chargeId)
    {
        return DBAddSmsChargeRecord(userId, type, account, password, denomination, money, payId, chargeId, 0);
    }
    ::Ice::Int DBAddSmsChargeRecord(const ::std::string& userId, ::Ice::Int type, const ::std::string& account, const ::std::string& password, ::Ice::Int denomination, ::Ice::Int money, const ::std::string& payId, ::std::string& chargeId, const ::Ice::Context& __ctx)
    {
        return DBAddSmsChargeRecord(userId, type, account, password, denomination, money, payId, chargeId, &__ctx);
    }
    
private:

    ::Ice::Int DBAddSmsChargeRecord(const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBUpdateSmsChargeRecordStatus(const ::std::string& seqId, ::Ice::Int status, const ::std::string& desc)
    {
        return DBUpdateSmsChargeRecordStatus(seqId, status, desc, 0);
    }
    ::Ice::Int DBUpdateSmsChargeRecordStatus(const ::std::string& seqId, ::Ice::Int status, const ::std::string& desc, const ::Ice::Context& __ctx)
    {
        return DBUpdateSmsChargeRecordStatus(seqId, status, desc, &__ctx);
    }
    
private:

    ::Ice::Int DBUpdateSmsChargeRecordStatus(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetSmsBlacks(const ::std::string& mobileNo, ::Ice::StringSeq& blackNoList)
    {
        return DBGetSmsBlacks(mobileNo, blackNoList, 0);
    }
    ::Ice::Int DBGetSmsBlacks(const ::std::string& mobileNo, ::Ice::StringSeq& blackNoList, const ::Ice::Context& __ctx)
    {
        return DBGetSmsBlacks(mobileNo, blackNoList, &__ctx);
    }
    
private:

    ::Ice::Int DBGetSmsBlacks(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBAddSmsBlack(const ::std::string& mobileNo, const ::std::string& blackNo)
    {
        return DBAddSmsBlack(mobileNo, blackNo, 0);
    }
    ::Ice::Int DBAddSmsBlack(const ::std::string& mobileNo, const ::std::string& blackNo, const ::Ice::Context& __ctx)
    {
        return DBAddSmsBlack(mobileNo, blackNo, &__ctx);
    }
    
private:

    ::Ice::Int DBAddSmsBlack(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBCheckSmsBlack(const ::std::string& fromMobile, const ::std::string& toMobile, ::Ice::Int& blackFlag)
    {
        return DBCheckSmsBlack(fromMobile, toMobile, blackFlag, 0);
    }
    ::Ice::Int DBCheckSmsBlack(const ::std::string& fromMobile, const ::std::string& toMobile, ::Ice::Int& blackFlag, const ::Ice::Context& __ctx)
    {
        return DBCheckSmsBlack(fromMobile, toMobile, blackFlag, &__ctx);
    }
    
private:

    ::Ice::Int DBCheckSmsBlack(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBDelSmsBlack(const ::std::string& mobileNo, const ::std::string& blackNo, const ::std::string& userId)
    {
        return DBDelSmsBlack(mobileNo, blackNo, userId, 0);
    }
    ::Ice::Int DBDelSmsBlack(const ::std::string& mobileNo, const ::std::string& blackNo, const ::std::string& userId, const ::Ice::Context& __ctx)
    {
        return DBDelSmsBlack(mobileNo, blackNo, userId, &__ctx);
    }
    
private:

    ::Ice::Int DBDelSmsBlack(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetRemindTime(const ::std::string& mobileNo, ::std::string& remindTime)
    {
        return DBGetRemindTime(mobileNo, remindTime, 0);
    }
    ::Ice::Int DBGetRemindTime(const ::std::string& mobileNo, ::std::string& remindTime, const ::Ice::Context& __ctx)
    {
        return DBGetRemindTime(mobileNo, remindTime, &__ctx);
    }
    
private:

    ::Ice::Int DBGetRemindTime(const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBUpdateRemindTime(const ::std::string& mobileNo, const ::std::string& remindTime)
    {
        return DBUpdateRemindTime(mobileNo, remindTime, 0);
    }
    ::Ice::Int DBUpdateRemindTime(const ::std::string& mobileNo, const ::std::string& remindTime, const ::Ice::Context& __ctx)
    {
        return DBUpdateRemindTime(mobileNo, remindTime, &__ctx);
    }
    
private:

    ::Ice::Int DBUpdateRemindTime(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetAllMsgRevUser(::ALiIMDBSms::SSmsRevUserSeq& smsRevUserList)
    {
        return DBGetAllMsgRevUser(smsRevUserList, 0);
    }
    ::Ice::Int DBGetAllMsgRevUser(::ALiIMDBSms::SSmsRevUserSeq& smsRevUserList, const ::Ice::Context& __ctx)
    {
        return DBGetAllMsgRevUser(smsRevUserList, &__ctx);
    }
    
private:

    ::Ice::Int DBGetAllMsgRevUser(::ALiIMDBSms::SSmsRevUserSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetSmsTempUsers(::ALiIMDBSms::SSmsTempUserSeq& smsTempUserList)
    {
        return DBGetSmsTempUsers(smsTempUserList, 0);
    }
    ::Ice::Int DBGetSmsTempUsers(::ALiIMDBSms::SSmsTempUserSeq& smsTempUserList, const ::Ice::Context& __ctx)
    {
        return DBGetSmsTempUsers(smsTempUserList, &__ctx);
    }
    
private:

    ::Ice::Int DBGetSmsTempUsers(::ALiIMDBSms::SSmsTempUserSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBAddSmsTempUser(const ::ALiIMDBSms::SSmsTempUser& smsTempUser)
    {
        return DBAddSmsTempUser(smsTempUser, 0);
    }
    ::Ice::Int DBAddSmsTempUser(const ::ALiIMDBSms::SSmsTempUser& smsTempUser, const ::Ice::Context& __ctx)
    {
        return DBAddSmsTempUser(smsTempUser, &__ctx);
    }
    
private:

    ::Ice::Int DBAddSmsTempUser(const ::ALiIMDBSms::SSmsTempUser&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBDelSmsTempUser(const ::std::string& account)
    {
        return DBDelSmsTempUser(account, 0);
    }
    ::Ice::Int DBDelSmsTempUser(const ::std::string& account, const ::Ice::Context& __ctx)
    {
        return DBDelSmsTempUser(account, &__ctx);
    }
    
private:

    ::Ice::Int DBDelSmsTempUser(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetUserBaseInfo(const ::std::string& userId, ::ALiIMDBSms::SUserBaseInfo& userInfo)
    {
        return DBGetUserBaseInfo(userId, userInfo, 0);
    }
    ::Ice::Int DBGetUserBaseInfo(const ::std::string& userId, ::ALiIMDBSms::SUserBaseInfo& userInfo, const ::Ice::Context& __ctx)
    {
        return DBGetUserBaseInfo(userId, userInfo, &__ctx);
    }
    
private:

    ::Ice::Int DBGetUserBaseInfo(const ::std::string&, ::ALiIMDBSms::SUserBaseInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBGetSmsUserBalance(const ::std::string& userId, ::ALiIMDBSms::SSmsUserBalance& balanceInfo)
    {
        return DBGetSmsUserBalance(userId, balanceInfo, 0);
    }
    ::Ice::Int DBGetSmsUserBalance(const ::std::string& userId, ::ALiIMDBSms::SSmsUserBalance& balanceInfo, const ::Ice::Context& __ctx)
    {
        return DBGetSmsUserBalance(userId, balanceInfo, &__ctx);
    }
    
private:

    ::Ice::Int DBGetSmsUserBalance(const ::std::string&, ::ALiIMDBSms::SSmsUserBalance&, const ::Ice::Context*);
    
public:

    ::Ice::Int DBUpdatePresentRemindFlag(const ::std::string& userId, ::Ice::Int flag)
    {
        return DBUpdatePresentRemindFlag(userId, flag, 0);
    }
    ::Ice::Int DBUpdatePresentRemindFlag(const ::std::string& userId, ::Ice::Int flag, const ::Ice::Context& __ctx)
    {
        return DBUpdatePresentRemindFlag(userId, flag, &__ctx);
    }
    
private:

    ::Ice::Int DBUpdatePresentRemindFlag(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int DBFeedBack(const ::std::string& beginTime, const ::std::string& endTime, ::Ice::Int& feeNum, ::Ice::Int& presentNum)
    {
        return DBFeedBack(beginTime, endTime, feeNum, presentNum, 0);
    }
    ::Ice::Int DBFeedBack(const ::std::string& beginTime, const ::std::string& endTime, ::Ice::Int& feeNum, ::Ice::Int& presentNum, const ::Ice::Context& __ctx)
    {
        return DBFeedBack(beginTime, endTime, feeNum, presentNum, &__ctx);
    }
    
private:

    ::Ice::Int DBFeedBack(const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
    
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

namespace ALiIMDBSms
{

class SmsDBProxyMgr : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int DBAddValidate(const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetValidateInfoWithUpdate(const ::std::string&, ::Ice::Int, ::Ice::Int, ::std::string&, ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBRemoveValidate(const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBUpdateValidateMobile(const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBAddSmsUser(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBBindMobile(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetSmsUserInfoByUid(const ::std::string&, ::ALiIMDBSms::SSmsUserInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetSmsUserInfoByAccount(const ::std::string&, ::ALiIMDBSms::SSmsUserInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetSmsUserInfoByMobile(const ::std::string&, ::ALiIMDBSms::SSmsUserInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetSmsUserMsgInfo(const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBAddSmsFunctionLog(const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBSetMobileOnlineFlag(const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBSetMobileBindFlag(const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBSetMessageRevFlag(const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBSetSmsRebind(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBAddSmsMessage(const ::ALiIMDBSms::SSmsMsgInfo&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetSmsMessage(const ::std::string&, ::ALiIMDBSms::SSmsMsgInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetSmsMessage2(const ::std::string&, ::ALiIMDBSms::SSmsMsgInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBUpdateSmsMsgStatus(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBUpdateSmsMsgStatus2(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetSmsMailing(const ::std::string&, ::Ice::Int&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBUpdateSmsMailing(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetSmsDiscount(const ::std::string&, ::Ice::Float&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetSmsNeedChargeRecord(::Ice::Int, ::Ice::Int, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, ::std::string&, ::Ice::Int&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetSmsChargeRecordInfo(const ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetSmsChargeRecords(const ::std::string&, const ::std::string&, const ::std::string&, ::ALiIMDBSms::SChargeInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBAddSmsChargeRecord(const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBUpdateSmsChargeRecordStatus(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetSmsBlacks(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBAddSmsBlack(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBCheckSmsBlack(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBDelSmsBlack(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetRemindTime(const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBUpdateRemindTime(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetAllMsgRevUser(::ALiIMDBSms::SSmsRevUserSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetSmsTempUsers(::ALiIMDBSms::SSmsTempUserSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBAddSmsTempUser(const ::ALiIMDBSms::SSmsTempUser&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBDelSmsTempUser(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetUserBaseInfo(const ::std::string&, ::ALiIMDBSms::SUserBaseInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBGetSmsUserBalance(const ::std::string&, ::ALiIMDBSms::SSmsUserBalance&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBUpdatePresentRemindFlag(const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DBFeedBack(const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace ALiIMDBSms
{

class SmsDBProxyMgr : virtual public ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr,
                      virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int DBAddValidate(const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetValidateInfoWithUpdate(const ::std::string&, ::Ice::Int, ::Ice::Int, ::std::string&, ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBRemoveValidate(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateValidateMobile(const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBAddSmsUser(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBBindMobile(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBGetSmsUserInfoByUid(const ::std::string&, ::ALiIMDBSms::SSmsUserInfo&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetSmsUserInfoByAccount(const ::std::string&, ::ALiIMDBSms::SSmsUserInfo&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetSmsUserInfoByMobile(const ::std::string&, ::ALiIMDBSms::SSmsUserInfo&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetSmsUserMsgInfo(const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBAddSmsFunctionLog(const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBSetMobileOnlineFlag(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBSetMobileBindFlag(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBSetMessageRevFlag(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBSetSmsRebind(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBAddSmsMessage(const ::ALiIMDBSms::SSmsMsgInfo&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetSmsMessage(const ::std::string&, ::ALiIMDBSms::SSmsMsgInfo&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetSmsMessage2(const ::std::string&, ::ALiIMDBSms::SSmsMsgInfo&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateSmsMsgStatus(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateSmsMsgStatus2(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetSmsMailing(const ::std::string&, ::Ice::Int&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateSmsMailing(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetSmsDiscount(const ::std::string&, ::Ice::Float&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetSmsNeedChargeRecord(::Ice::Int, ::Ice::Int, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, ::std::string&, ::Ice::Int&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetSmsChargeRecordInfo(const ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetSmsChargeRecords(const ::std::string&, const ::std::string&, const ::std::string&, ::ALiIMDBSms::SChargeInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBAddSmsChargeRecord(const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateSmsChargeRecordStatus(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetSmsBlacks(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBAddSmsBlack(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBCheckSmsBlack(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBDelSmsBlack(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetRemindTime(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateRemindTime(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetAllMsgRevUser(::ALiIMDBSms::SSmsRevUserSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetSmsTempUsers(::ALiIMDBSms::SSmsTempUserSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBAddSmsTempUser(const ::ALiIMDBSms::SSmsTempUser&, const ::Ice::Context*);

    virtual ::Ice::Int DBDelSmsTempUser(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetUserBaseInfo(const ::std::string&, ::ALiIMDBSms::SUserBaseInfo&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetSmsUserBalance(const ::std::string&, ::ALiIMDBSms::SSmsUserBalance&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdatePresentRemindFlag(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBFeedBack(const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace ALiIMDBSms
{

class SmsDBProxyMgr : virtual public ::IceDelegate::ALiIMDBSms::SmsDBProxyMgr,
                      virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int DBAddValidate(const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetValidateInfoWithUpdate(const ::std::string&, ::Ice::Int, ::Ice::Int, ::std::string&, ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBRemoveValidate(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateValidateMobile(const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBAddSmsUser(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBBindMobile(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBGetSmsUserInfoByUid(const ::std::string&, ::ALiIMDBSms::SSmsUserInfo&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetSmsUserInfoByAccount(const ::std::string&, ::ALiIMDBSms::SSmsUserInfo&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetSmsUserInfoByMobile(const ::std::string&, ::ALiIMDBSms::SSmsUserInfo&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetSmsUserMsgInfo(const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBAddSmsFunctionLog(const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBSetMobileOnlineFlag(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBSetMobileBindFlag(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBSetMessageRevFlag(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBSetSmsRebind(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBAddSmsMessage(const ::ALiIMDBSms::SSmsMsgInfo&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetSmsMessage(const ::std::string&, ::ALiIMDBSms::SSmsMsgInfo&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetSmsMessage2(const ::std::string&, ::ALiIMDBSms::SSmsMsgInfo&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateSmsMsgStatus(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateSmsMsgStatus2(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetSmsMailing(const ::std::string&, ::Ice::Int&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateSmsMailing(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetSmsDiscount(const ::std::string&, ::Ice::Float&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetSmsNeedChargeRecord(::Ice::Int, ::Ice::Int, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, ::std::string&, ::Ice::Int&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetSmsChargeRecordInfo(const ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetSmsChargeRecords(const ::std::string&, const ::std::string&, const ::std::string&, ::ALiIMDBSms::SChargeInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBAddSmsChargeRecord(const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateSmsChargeRecordStatus(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetSmsBlacks(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBAddSmsBlack(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBCheckSmsBlack(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DBDelSmsBlack(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetRemindTime(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdateRemindTime(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetAllMsgRevUser(::ALiIMDBSms::SSmsRevUserSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetSmsTempUsers(::ALiIMDBSms::SSmsTempUserSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DBAddSmsTempUser(const ::ALiIMDBSms::SSmsTempUser&, const ::Ice::Context*);

    virtual ::Ice::Int DBDelSmsTempUser(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetUserBaseInfo(const ::std::string&, ::ALiIMDBSms::SUserBaseInfo&, const ::Ice::Context*);

    virtual ::Ice::Int DBGetSmsUserBalance(const ::std::string&, ::ALiIMDBSms::SSmsUserBalance&, const ::Ice::Context*);

    virtual ::Ice::Int DBUpdatePresentRemindFlag(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DBFeedBack(const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
};

}

}

namespace ALiIMDBSms
{

class SmsDBProxyMgr : virtual public ::Ice::Object
{
public:

    typedef SmsDBProxyMgrPrx ProxyType;
    typedef SmsDBProxyMgrPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int DBAddValidate(const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBAddValidate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetValidateInfoWithUpdate(const ::std::string&, ::Ice::Int, ::Ice::Int, ::std::string&, ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetValidateInfoWithUpdate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBRemoveValidate(const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBRemoveValidate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBUpdateValidateMobile(const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBUpdateValidateMobile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBAddSmsUser(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBAddSmsUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBBindMobile(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBBindMobile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetSmsUserInfoByUid(const ::std::string&, ::ALiIMDBSms::SSmsUserInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetSmsUserInfoByUid(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetSmsUserInfoByAccount(const ::std::string&, ::ALiIMDBSms::SSmsUserInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetSmsUserInfoByAccount(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetSmsUserInfoByMobile(const ::std::string&, ::ALiIMDBSms::SSmsUserInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetSmsUserInfoByMobile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetSmsUserMsgInfo(const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetSmsUserMsgInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBAddSmsFunctionLog(const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBAddSmsFunctionLog(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBSetMobileOnlineFlag(const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBSetMobileOnlineFlag(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBSetMobileBindFlag(const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBSetMobileBindFlag(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBSetMessageRevFlag(const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBSetMessageRevFlag(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBSetSmsRebind(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBSetSmsRebind(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBAddSmsMessage(const ::ALiIMDBSms::SSmsMsgInfo&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBAddSmsMessage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetSmsMessage(const ::std::string&, ::ALiIMDBSms::SSmsMsgInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetSmsMessage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetSmsMessage2(const ::std::string&, ::ALiIMDBSms::SSmsMsgInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetSmsMessage2(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBUpdateSmsMsgStatus(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBUpdateSmsMsgStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBUpdateSmsMsgStatus2(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBUpdateSmsMsgStatus2(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetSmsMailing(const ::std::string&, ::Ice::Int&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetSmsMailing(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBUpdateSmsMailing(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBUpdateSmsMailing(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetSmsDiscount(const ::std::string&, ::Ice::Float&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetSmsDiscount(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetSmsNeedChargeRecord(::Ice::Int, ::Ice::Int, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, ::std::string&, ::Ice::Int&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetSmsNeedChargeRecord(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetSmsChargeRecordInfo(const ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, ::std::string&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetSmsChargeRecordInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetSmsChargeRecords(const ::std::string&, const ::std::string&, const ::std::string&, ::ALiIMDBSms::SChargeInfoSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetSmsChargeRecords(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBAddSmsChargeRecord(const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBAddSmsChargeRecord(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBUpdateSmsChargeRecordStatus(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBUpdateSmsChargeRecordStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetSmsBlacks(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetSmsBlacks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBAddSmsBlack(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBAddSmsBlack(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBCheckSmsBlack(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBCheckSmsBlack(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBDelSmsBlack(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBDelSmsBlack(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetRemindTime(const ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetRemindTime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBUpdateRemindTime(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBUpdateRemindTime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetAllMsgRevUser(::ALiIMDBSms::SSmsRevUserSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetAllMsgRevUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetSmsTempUsers(::ALiIMDBSms::SSmsTempUserSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetSmsTempUsers(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBAddSmsTempUser(const ::ALiIMDBSms::SSmsTempUser&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBAddSmsTempUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBDelSmsTempUser(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBDelSmsTempUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetUserBaseInfo(const ::std::string&, ::ALiIMDBSms::SUserBaseInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetUserBaseInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBGetSmsUserBalance(const ::std::string&, ::ALiIMDBSms::SSmsUserBalance&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBGetSmsUserBalance(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBUpdatePresentRemindFlag(const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBUpdatePresentRemindFlag(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DBFeedBack(const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DBFeedBack(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__SmsDBProxyMgrPtr(void*, ::Ice::ObjectPtr&);

}

#endif
