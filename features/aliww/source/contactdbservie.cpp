// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `contactdbservie.ice'

#include <contactdbservie.h>
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

static const ::std::string __AliIMDBBase__IContactIMDBService__CheckCanAddContact_name = "CheckCanAddContact";

static const ::std::string __AliIMDBBase__IContactIMDBService__UpdateContactWebInfo_name = "UpdateContactWebInfo";

static const ::std::string __AliIMDBBase__IContactIMDBService__GetGroupList_name = "GetGroupList";

static const ::std::string __AliIMDBBase__IContactIMDBService__GetGroupListEx_name = "GetGroupListEx";

static const ::std::string __AliIMDBBase__IContactIMDBService__GetContactList_name = "GetContactList";

static const ::std::string __AliIMDBBase__IContactIMDBService__GetBlackList_name = "GetBlackList";

static const ::std::string __AliIMDBBase__IContactIMDBService__GetReverseBlackList_name = "GetReverseBlackList";

static const ::std::string __AliIMDBBase__IContactIMDBService__GetContactInfo_name = "GetContactInfo";

static const ::std::string __AliIMDBBase__IContactIMDBService__AddGroup_name = "AddGroup";

static const ::std::string __AliIMDBBase__IContactIMDBService__AddGroupEx_name = "AddGroupEx";

static const ::std::string __AliIMDBBase__IContactIMDBService__AddBlackList_name = "AddBlackList";

static const ::std::string __AliIMDBBase__IContactIMDBService__UpdateGroup_name = "UpdateGroup";

static const ::std::string __AliIMDBBase__IContactIMDBService__MoveGroup_name = "MoveGroup";

static const ::std::string __AliIMDBBase__IContactIMDBService__UpdateContactNickName_name = "UpdateContactNickName";

static const ::std::string __AliIMDBBase__IContactIMDBService__UpdateContactGroup_name = "UpdateContactGroup";

static const ::std::string __AliIMDBBase__IContactIMDBService__UpdateContactStatus_name = "UpdateContactStatus";

static const ::std::string __AliIMDBBase__IContactIMDBService__RemoveGroup_name = "RemoveGroup";

static const ::std::string __AliIMDBBase__IContactIMDBService__RemoveContact_name = "RemoveContact";

static const ::std::string __AliIMDBBase__IContactIMDBService__RemoveInverfiedContact_name = "RemoveInverfiedContact";

static const ::std::string __AliIMDBBase__IContactIMDBService__RemoveBlackList_name = "RemoveBlackList";

static const ::std::string __AliIMDBBase__IContactIMDBService__IsBlackedByOther_name = "IsBlackedByOther";

static const ::std::string __AliIMDBBase__IContactIMDBService__RemoveBatchContacts_name = "RemoveBatchContacts";

static const ::std::string __AliIMDBBase__IContactIMDBService__GetAllContactList_name = "GetAllContactList";

static const ::std::string __AliIMDBBase__IContactIMDBService__AddContact_name = "AddContact";

static const ::std::string __AliIMDBBase__IContactIMDBService__ModifyCntMemo_name = "ModifyCntMemo";

static const ::std::string __AliIMDBBase__IContactIMDBService__GetCntMemo_name = "GetCntMemo";

static const ::std::string __AliIMDBBase__IContactIMDBService__updateContactClientInfo_name = "updateContactClientInfo";

static const ::std::string __AliIMDBBase__IContactIMDBService__checkContact_name = "checkContact";

static const ::std::string __AliIMDBBase__IContactIMDBService__GetContactDetailByUid_name = "GetContactDetailByUid";

static const ::std::string __AliIMDBBase__IContactIMDBService__GetContactDetail_name = "GetContactDetail";

static const ::std::string __AliIMDBBase__IContactIMDBService__AddGenContactFull_name = "AddGenContactFull";

static const ::std::string __AliIMDBBase__IContactIMDBService__DelGenContact_name = "DelGenContact";

static const ::std::string __AliIMDBBase__IContactIMDBService__CheckUpgradeGenCnt_name = "CheckUpgradeGenCnt";

static const ::std::string __AliIMDBBase__IContactIMDBService__UpgradeGenContact_name = "UpgradeGenContact";

static const ::std::string __AliIMDBBase__IContactIMDBService__GetUpdatedUserInfo_name = "GetUpdatedUserInfo";

static const ::std::string __AliIMDBBase__IContactIMDBService__ModifyContactDetail_name = "ModifyContactDetail";

static const ::std::string __AliIMDBBase__IContactIMDBService__UpdateContactGroupByCid_name = "UpdateContactGroupByCid";

static const ::std::string __AliIMDBBase__IContactIMDBService__UpdateContactNickNameByCid_name = "UpdateContactNickNameByCid";

static const ::std::string __AliIMDBBase__IContactIMDBService__GetCntModifyList_name = "GetCntModifyList";

static const ::std::string __AliIMDBBase__IContactIMDBService__addUser_name = "addUser";

static const ::std::string __AliIMDBBase__IContactIMDBService__addChildUser_name = "addChildUser";

static const ::std::string __AliIMDBBase__IContactIMDBService__GetMultiAccountContactList_name = "GetMultiAccountContactList";

static const ::std::string __AliIMDBBase__IContactIMDBService__atmAddContact_name = "atmAddContact";

static const ::std::string __AliIMDBBase__IContactIMDBService__atmGetContactDetail_name = "atmGetContactDetail";

static const ::std::string __AliIMDBBase__IContactIMDBService__atmModifyContactDetail_name = "atmModifyContactDetail";

void
IceInternal::incRef(::AliIMDBBase::IContactIMDBService* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::AliIMDBBase::IContactIMDBService* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::AliIMDBBase::IContactIMDBService* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::AliIMDBBase::IContactIMDBService* p)
{
    p->__decRef();
}

void
AliIMDBBase::__write(::IceInternal::BasicStream* __os, const ::AliIMDBBase::IContactIMDBServicePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
AliIMDBBase::__read(::IceInternal::BasicStream* __is, ::AliIMDBBase::IContactIMDBServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::AliIMDBBase::IContactIMDBService;
        v->__copyFrom(proxy);
    }
}

void
AliIMDBBase::__write(::IceInternal::BasicStream* __os, const ::AliIMDBBase::IContactIMDBServicePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

void
AliIMDBBase::__addObject(const IContactIMDBServicePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
AliIMDBBase::__usesClasses(const IContactIMDBServicePtr& p)
{
    return p->__usesClasses();
}

void
AliIMDBBase::__decRefUnsafe(const IContactIMDBServicePtr& p)
{
    p->__decRefUnsafe();
}

void
AliIMDBBase::__clearHandleUnsafe(IContactIMDBServicePtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::AliIMDBBase::IContactIMDBService::CheckCanAddContact(const ::std::string& userId, const ::std::string& buddyId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__CheckCanAddContact_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->CheckCanAddContact(userId, buddyId, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::UpdateContactWebInfo(const ::std::string& userId, const ::std::string& buddyId, const ::AliIMDBBase::SUserWebBasicProfile& cntWebInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__UpdateContactWebInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->UpdateContactWebInfo(userId, buddyId, cntWebInfo, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::GetGroupList(const ::std::string& userId, ::AliIMDBBase::SICEGroupInfoSeq& groupList, ::Ice::Int& groupTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__GetGroupList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->GetGroupList(userId, groupList, groupTimes, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::GetGroupListEx(const ::std::string& userId, ::AliIMDBBase::SICEGroupInfoExSeq& groupList, ::Ice::Int& groupTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__GetGroupListEx_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->GetGroupListEx(userId, groupList, groupTimes, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::GetContactList(const ::std::string& userId, ::Ice::Int getFlag, ::AliIMDBBase::SICEContactInfoSeq& contactList, ::Ice::Int& contactTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__GetContactList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->GetContactList(userId, getFlag, contactList, contactTimes, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::GetBlackList(const ::std::string& userId, ::Ice::StringSeq& blackList, ::Ice::Int& blacklistTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__GetBlackList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->GetBlackList(userId, blackList, blacklistTimes, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::GetReverseBlackList(const ::std::string& userId, ::Ice::StringSeq& reverseBlackList, ::Ice::Int& reverseBlacklistTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__GetReverseBlackList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->GetReverseBlackList(userId, reverseBlackList, reverseBlacklistTimes, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::GetContactInfo(const ::std::string& userId, const ::std::string& contactId, ::AliIMDBBase::SICEContactInfo& contactInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__GetContactInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->GetContactInfo(userId, contactId, contactInfo, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::AddGroup(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int& groupId, ::Ice::Int& groupTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__AddGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->AddGroup(userId, groupName, groupId, groupTimes, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::AddGroupEx(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int parentId, ::Ice::Int& groupId, ::Ice::Int& groupTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__AddGroupEx_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->AddGroupEx(userId, groupName, parentId, groupId, groupTimes, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::AddBlackList(const ::std::string& userId, const ::std::string& blackId, ::Ice::Int& blackListTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__AddBlackList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->AddBlackList(userId, blackId, blackListTimes, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::UpdateGroup(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int groupId, ::Ice::Int& groupTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__UpdateGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->UpdateGroup(userId, groupName, groupId, groupTimes, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::MoveGroup(const ::std::string& userId, ::Ice::Long groupId, ::Ice::Long newparentgid, ::Ice::Int& groupTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__MoveGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->MoveGroup(userId, groupId, newparentgid, groupTimes, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::UpdateContactNickName(const ::std::string& userId, const ::std::string& contactId, const ::std::string& nickName, ::Ice::Int& contactTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__UpdateContactNickName_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->UpdateContactNickName(userId, contactId, nickName, contactTimes, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::UpdateContactGroup(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int srcGroupId, ::Ice::Int dstGroupId, ::Ice::Int& contactTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__UpdateContactGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->UpdateContactGroup(userId, contactId, srcGroupId, dstGroupId, contactTimes, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::UpdateContactStatus(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int status, ::Ice::Int& contactTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__UpdateContactStatus_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->UpdateContactStatus(userId, contactId, status, contactTimes, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::RemoveGroup(const ::std::string& userId, ::Ice::Int groupId, ::Ice::Int& groupTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__RemoveGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->RemoveGroup(userId, groupId, groupTimes, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::RemoveContact(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int& contactTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__RemoveContact_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->RemoveContact(userId, contactId, contactTimes, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::RemoveInverfiedContact(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int& contactTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__RemoveInverfiedContact_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->RemoveInverfiedContact(userId, contactId, contactTimes, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::RemoveBlackList(const ::std::string& userId, const ::std::string& blackId, ::Ice::Int& blackListTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__RemoveBlackList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->RemoveBlackList(userId, blackId, blackListTimes, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::IsBlackedByOther(const ::std::string& userId, const ::std::string& otheruid, bool& bBlacked, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__IsBlackedByOther_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->IsBlackedByOther(userId, otheruid, bBlacked, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::RemoveBatchContacts(const ::std::string& userId, const ::Ice::StringSeq& cids, ::Ice::StringSeq& retVect, ::Ice::Int& modifyCntTimes, ::Ice::Int& modifyGenCntTime, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__RemoveBatchContacts_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->RemoveBatchContacts(userId, cids, retVect, modifyCntTimes, modifyGenCntTime, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::GetAllContactList(const ::std::string& uid, ::Ice::Int getFlag, ::AliIMDBBase::SICEContactInfoSeq& contactList, ::Ice::Int& contactTimes, ::Ice::Int& gencontacttimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__GetAllContactList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->GetAllContactList(uid, getFlag, contactList, contactTimes, gencontacttimes, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::AddContact(const ::std::string& userId, const ::std::string& contactId, const ::std::string& nickName, ::Ice::Int groupId, ::Ice::Int status, const ::AliIMDBBase::SUserWebBasicProfile& cntInfo, ::Ice::Int& contactTimes, ::std::string& retcid, ::std::string& retmodseqid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__AddContact_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->AddContact(userId, contactId, nickName, groupId, status, cntInfo, contactTimes, retcid, retmodseqid, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::ModifyCntMemo(const ::std::string& uid, const ::std::string& cntid, const ::std::string& memo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__ModifyCntMemo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->ModifyCntMemo(uid, cntid, memo, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::GetCntMemo(const ::std::string& uid, const ::std::string& cntid, ::std::string& memo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__GetCntMemo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->GetCntMemo(uid, cntid, memo, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::updateContactClientInfo(const ::std::string& uid, const ::std::string& cid, const ::std::string& data, ::Ice::Int& contactTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__updateContactClientInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->updateContactClientInfo(uid, cid, data, contactTimes, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::checkContact(const ::std::string& uid, const ::std::string& contactId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__checkContact_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->checkContact(uid, contactId, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::GetContactDetailByUid(const ::std::string& uid, const ::std::string& cid, ::AliIMDBBase::SICEGenContactFull& detail, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__GetContactDetailByUid_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->GetContactDetailByUid(uid, cid, detail, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::GetContactDetail(const ::std::string& uid, const ::std::string& cid, ::AliIMDBBase::SICEGenContactFull& detail, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__GetContactDetail_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->GetContactDetail(uid, cid, detail, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::AddGenContactFull(const ::AliIMDBBase::SICEGenContactFull& detail, ::std::string& retscid, ::std::string& retsmodseqid, ::Ice::Long& timeStamps, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__AddGenContactFull_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->AddGenContactFull(detail, retscid, retsmodseqid, timeStamps, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::DelGenContact(const ::std::string& uid, const ::std::string& cid, ::Ice::Long& contactTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__DelGenContact_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->DelGenContact(uid, cid, contactTimes, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::CheckUpgradeGenCnt(const ::std::string& uid, const ::std::string& cid, const ::std::string& contactId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__CheckUpgradeGenCnt_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->CheckUpgradeGenCnt(uid, cid, contactId, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::UpgradeGenContact(const ::std::string& uid, const ::std::string& cid, const ::std::string& contactId, ::Ice::Long& cntstamp, ::Ice::Long& gencntstamp, ::std::string& modseqid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__UpgradeGenContact_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->UpgradeGenContact(uid, cid, contactId, cntstamp, gencntstamp, modseqid, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::GetUpdatedUserInfo(const ::std::string& uid, const ::std::string& contactId, ::Ice::Long& cntstamp, ::Ice::Long& gencntstamp, ::std::string& retcid, ::std::string& modseqid, ::Ice::Long& groupid, ::std::string& nickname, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__GetUpdatedUserInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->GetUpdatedUserInfo(uid, contactId, cntstamp, gencntstamp, retcid, modseqid, groupid, nickname, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::ModifyContactDetail(const ::AliIMDBBase::SICEGenContactFull& detail, ::Ice::Long& gencntmodifyVersion, ::std::string& modseqid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__ModifyContactDetail_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->ModifyContactDetail(detail, gencntmodifyVersion, modseqid, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::UpdateContactGroupByCid(const ::std::string& userId, const ::std::string& cid, ::Ice::Int srcGroupId, ::Ice::Int dstGroupId, ::Ice::Int& contactTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__UpdateContactGroupByCid_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->UpdateContactGroupByCid(userId, cid, srcGroupId, dstGroupId, contactTimes, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::UpdateContactNickNameByCid(const ::std::string& userId, const ::std::string& cid, const ::std::string& nickName, ::Ice::Int& contactTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__UpdateContactNickNameByCid_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->UpdateContactNickNameByCid(userId, cid, nickName, contactTimes, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::GetCntModifyList(::Ice::Int getFlag, const ::std::string& uid, const ::std::string& sMaxSeqId, ::AliIMDBBase::SICECntCidModPairSeq& cntList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__GetCntModifyList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->GetCntModifyList(getFlag, uid, sMaxSeqId, cntList, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::addUser(const ::std::string& uid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__addUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->addUser(uid, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::addChildUser(const ::std::string& uid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__addChildUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->addChildUser(uid, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::GetMultiAccountContactList(const ::std::string& uid, ::AliIMDBBase::SICEContactInfoSeq& contactIdList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__GetMultiAccountContactList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->GetMultiAccountContactList(uid, contactIdList, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::atmAddContact(const ::std::string& userId, const ::std::string& contactId, const ::std::string& nickName, ::Ice::Int groupId, ::Ice::Int status, const ::atmWebMember::sContactInfo& cinfo, ::Ice::Int& contactTimes, ::std::string& retcid, ::std::string& retmodseqid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__atmAddContact_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->atmAddContact(userId, contactId, nickName, groupId, status, cinfo, contactTimes, retcid, retmodseqid, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::atmGetContactDetail(const ::std::string& uid, const ::std::string& cid, ::AliIMDBBase::SICEATMGenContactFull& detail, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__atmGetContactDetail_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->atmGetContactDetail(uid, cid, detail, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::atmModifyContactDetail(const ::AliIMDBBase::SICEATMGenContactFull& detail, ::Ice::Long& gencntmodifyVersion, ::std::string& modseqid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IContactIMDBService__atmModifyContactDetail_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IContactIMDBService* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IContactIMDBService*>(__delBase.get());
            return __del->atmModifyContactDetail(detail, gencntmodifyVersion, modseqid, __ctx);
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
IceProxy::AliIMDBBase::IContactIMDBService::ice_staticId()
{
    return ::AliIMDBBase::IContactIMDBService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::AliIMDBBase::IContactIMDBService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::AliIMDBBase::IContactIMDBService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::AliIMDBBase::IContactIMDBService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::AliIMDBBase::IContactIMDBService);
}

bool
IceProxy::AliIMDBBase::operator==(const ::IceProxy::AliIMDBBase::IContactIMDBService& l, const ::IceProxy::AliIMDBBase::IContactIMDBService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIMDBBase::operator!=(const ::IceProxy::AliIMDBBase::IContactIMDBService& l, const ::IceProxy::AliIMDBBase::IContactIMDBService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIMDBBase::operator<(const ::IceProxy::AliIMDBBase::IContactIMDBService& l, const ::IceProxy::AliIMDBBase::IContactIMDBService& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIMDBBase::operator<=(const ::IceProxy::AliIMDBBase::IContactIMDBService& l, const ::IceProxy::AliIMDBBase::IContactIMDBService& r)
{
    return l < r || l == r;
}

bool
IceProxy::AliIMDBBase::operator>(const ::IceProxy::AliIMDBBase::IContactIMDBService& l, const ::IceProxy::AliIMDBBase::IContactIMDBService& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::AliIMDBBase::operator>=(const ::IceProxy::AliIMDBBase::IContactIMDBService& l, const ::IceProxy::AliIMDBBase::IContactIMDBService& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::CheckCanAddContact(const ::std::string& userId, const ::std::string& buddyId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__CheckCanAddContact_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(buddyId);
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
IceDelegateM::AliIMDBBase::IContactIMDBService::UpdateContactWebInfo(const ::std::string& userId, const ::std::string& buddyId, const ::AliIMDBBase::SUserWebBasicProfile& cntWebInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__UpdateContactWebInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(buddyId);
        cntWebInfo.__write(__os);
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
IceDelegateM::AliIMDBBase::IContactIMDBService::GetGroupList(const ::std::string& userId, ::AliIMDBBase::SICEGroupInfoSeq& groupList, ::Ice::Int& groupTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__GetGroupList_name, ::Ice::Normal, __context, __compress);
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
        ::AliIMDBBase::__read(__is, groupList, ::AliIMDBBase::__U__SICEGroupInfoSeq());
        __is->read(groupTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::GetGroupListEx(const ::std::string& userId, ::AliIMDBBase::SICEGroupInfoExSeq& groupList, ::Ice::Int& groupTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__GetGroupListEx_name, ::Ice::Normal, __context, __compress);
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
        ::AliIMDBBase::__read(__is, groupList, ::AliIMDBBase::__U__SICEGroupInfoExSeq());
        __is->read(groupTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::GetContactList(const ::std::string& userId, ::Ice::Int getFlag, ::AliIMDBBase::SICEContactInfoSeq& contactList, ::Ice::Int& contactTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__GetContactList_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(getFlag);
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
        ::AliIMDBBase::__read(__is, contactList, ::AliIMDBBase::__U__SICEContactInfoSeq());
        __is->read(contactTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::GetBlackList(const ::std::string& userId, ::Ice::StringSeq& blackList, ::Ice::Int& blacklistTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__GetBlackList_name, ::Ice::Normal, __context, __compress);
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
        __is->read(blackList);
        __is->read(blacklistTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::GetReverseBlackList(const ::std::string& userId, ::Ice::StringSeq& reverseBlackList, ::Ice::Int& reverseBlacklistTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__GetReverseBlackList_name, ::Ice::Normal, __context, __compress);
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
        __is->read(reverseBlackList);
        __is->read(reverseBlacklistTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::GetContactInfo(const ::std::string& userId, const ::std::string& contactId, ::AliIMDBBase::SICEContactInfo& contactInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__GetContactInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(contactId);
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
        contactInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::AddGroup(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int& groupId, ::Ice::Int& groupTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__AddGroup_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        __is->read(groupId);
        __is->read(groupTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::AddGroupEx(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int parentId, ::Ice::Int& groupId, ::Ice::Int& groupTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__AddGroupEx_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        __is->read(groupTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::AddBlackList(const ::std::string& userId, const ::std::string& blackId, ::Ice::Int& blackListTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__AddBlackList_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(blackId);
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
        __is->read(blackListTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::UpdateGroup(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int groupId, ::Ice::Int& groupTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__UpdateGroup_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(groupName);
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
        __is->read(groupTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::MoveGroup(const ::std::string& userId, ::Ice::Long groupId, ::Ice::Long newparentgid, ::Ice::Int& groupTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__MoveGroup_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(groupId);
        __os->write(newparentgid);
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
        __is->read(groupTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::UpdateContactNickName(const ::std::string& userId, const ::std::string& contactId, const ::std::string& nickName, ::Ice::Int& contactTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__UpdateContactNickName_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(contactId);
        __os->write(nickName);
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
        __is->read(contactTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::UpdateContactGroup(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int srcGroupId, ::Ice::Int dstGroupId, ::Ice::Int& contactTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__UpdateContactGroup_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(contactId);
        __os->write(srcGroupId);
        __os->write(dstGroupId);
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
        __is->read(contactTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::UpdateContactStatus(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int status, ::Ice::Int& contactTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__UpdateContactStatus_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(contactId);
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
        __is->read(contactTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::RemoveGroup(const ::std::string& userId, ::Ice::Int groupId, ::Ice::Int& groupTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__RemoveGroup_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        __is->read(groupTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::RemoveContact(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int& contactTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__RemoveContact_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(contactId);
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
        __is->read(contactTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::RemoveInverfiedContact(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int& contactTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__RemoveInverfiedContact_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(contactId);
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
        __is->read(contactTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::RemoveBlackList(const ::std::string& userId, const ::std::string& blackId, ::Ice::Int& blackListTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__RemoveBlackList_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(blackId);
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
        __is->read(blackListTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::IsBlackedByOther(const ::std::string& userId, const ::std::string& otheruid, bool& bBlacked, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__IsBlackedByOther_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(otheruid);
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
        __is->read(bBlacked);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::RemoveBatchContacts(const ::std::string& userId, const ::Ice::StringSeq& cids, ::Ice::StringSeq& retVect, ::Ice::Int& modifyCntTimes, ::Ice::Int& modifyGenCntTime, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__RemoveBatchContacts_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        if(cids.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&cids[0], &cids[0] + cids.size());
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
        __is->read(retVect);
        __is->read(modifyCntTimes);
        __is->read(modifyGenCntTime);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::GetAllContactList(const ::std::string& uid, ::Ice::Int getFlag, ::AliIMDBBase::SICEContactInfoSeq& contactList, ::Ice::Int& contactTimes, ::Ice::Int& gencontacttimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__GetAllContactList_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(getFlag);
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
        ::AliIMDBBase::__read(__is, contactList, ::AliIMDBBase::__U__SICEContactInfoSeq());
        __is->read(contactTimes);
        __is->read(gencontacttimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::AddContact(const ::std::string& userId, const ::std::string& contactId, const ::std::string& nickName, ::Ice::Int groupId, ::Ice::Int status, const ::AliIMDBBase::SUserWebBasicProfile& cntInfo, ::Ice::Int& contactTimes, ::std::string& retcid, ::std::string& retmodseqid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__AddContact_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(contactId);
        __os->write(nickName);
        __os->write(groupId);
        __os->write(status);
        cntInfo.__write(__os);
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
        __is->read(contactTimes);
        __is->read(retcid);
        __is->read(retmodseqid);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::ModifyCntMemo(const ::std::string& uid, const ::std::string& cntid, const ::std::string& memo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__ModifyCntMemo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(cntid);
        __os->write(memo);
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
IceDelegateM::AliIMDBBase::IContactIMDBService::GetCntMemo(const ::std::string& uid, const ::std::string& cntid, ::std::string& memo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__GetCntMemo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(cntid);
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
        __is->read(memo);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::updateContactClientInfo(const ::std::string& uid, const ::std::string& cid, const ::std::string& data, ::Ice::Int& contactTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__updateContactClientInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(cid);
        __os->write(data);
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
        __is->read(contactTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::checkContact(const ::std::string& uid, const ::std::string& contactId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__checkContact_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(contactId);
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
IceDelegateM::AliIMDBBase::IContactIMDBService::GetContactDetailByUid(const ::std::string& uid, const ::std::string& cid, ::AliIMDBBase::SICEGenContactFull& detail, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__GetContactDetailByUid_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(cid);
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
        detail.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::GetContactDetail(const ::std::string& uid, const ::std::string& cid, ::AliIMDBBase::SICEGenContactFull& detail, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__GetContactDetail_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(cid);
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
        detail.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::AddGenContactFull(const ::AliIMDBBase::SICEGenContactFull& detail, ::std::string& retscid, ::std::string& retsmodseqid, ::Ice::Long& timeStamps, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__AddGenContactFull_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        detail.__write(__os);
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
        __is->read(retscid);
        __is->read(retsmodseqid);
        __is->read(timeStamps);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::DelGenContact(const ::std::string& uid, const ::std::string& cid, ::Ice::Long& contactTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__DelGenContact_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(cid);
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
        __is->read(contactTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::CheckUpgradeGenCnt(const ::std::string& uid, const ::std::string& cid, const ::std::string& contactId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__CheckUpgradeGenCnt_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(cid);
        __os->write(contactId);
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
IceDelegateM::AliIMDBBase::IContactIMDBService::UpgradeGenContact(const ::std::string& uid, const ::std::string& cid, const ::std::string& contactId, ::Ice::Long& cntstamp, ::Ice::Long& gencntstamp, ::std::string& modseqid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__UpgradeGenContact_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(cid);
        __os->write(contactId);
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
        __is->read(cntstamp);
        __is->read(gencntstamp);
        __is->read(modseqid);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::GetUpdatedUserInfo(const ::std::string& uid, const ::std::string& contactId, ::Ice::Long& cntstamp, ::Ice::Long& gencntstamp, ::std::string& retcid, ::std::string& modseqid, ::Ice::Long& groupid, ::std::string& nickname, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__GetUpdatedUserInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(contactId);
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
        __is->read(cntstamp);
        __is->read(gencntstamp);
        __is->read(retcid);
        __is->read(modseqid);
        __is->read(groupid);
        __is->read(nickname);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::ModifyContactDetail(const ::AliIMDBBase::SICEGenContactFull& detail, ::Ice::Long& gencntmodifyVersion, ::std::string& modseqid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__ModifyContactDetail_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        detail.__write(__os);
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
        __is->read(gencntmodifyVersion);
        __is->read(modseqid);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::UpdateContactGroupByCid(const ::std::string& userId, const ::std::string& cid, ::Ice::Int srcGroupId, ::Ice::Int dstGroupId, ::Ice::Int& contactTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__UpdateContactGroupByCid_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(cid);
        __os->write(srcGroupId);
        __os->write(dstGroupId);
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
        __is->read(contactTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::UpdateContactNickNameByCid(const ::std::string& userId, const ::std::string& cid, const ::std::string& nickName, ::Ice::Int& contactTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__UpdateContactNickNameByCid_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(cid);
        __os->write(nickName);
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
        __is->read(contactTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::GetCntModifyList(::Ice::Int getFlag, const ::std::string& uid, const ::std::string& sMaxSeqId, ::AliIMDBBase::SICECntCidModPairSeq& cntList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__GetCntModifyList_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(getFlag);
        __os->write(uid);
        __os->write(sMaxSeqId);
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
        ::AliIMDBBase::__read(__is, cntList, ::AliIMDBBase::__U__SICECntCidModPairSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::addUser(const ::std::string& uid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__addUser_name, ::Ice::Normal, __context, __compress);
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
IceDelegateM::AliIMDBBase::IContactIMDBService::addChildUser(const ::std::string& uid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__addChildUser_name, ::Ice::Normal, __context, __compress);
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
IceDelegateM::AliIMDBBase::IContactIMDBService::GetMultiAccountContactList(const ::std::string& uid, ::AliIMDBBase::SICEContactInfoSeq& contactIdList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__GetMultiAccountContactList_name, ::Ice::Normal, __context, __compress);
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
        ::AliIMDBBase::__read(__is, contactIdList, ::AliIMDBBase::__U__SICEContactInfoSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::atmAddContact(const ::std::string& userId, const ::std::string& contactId, const ::std::string& nickName, ::Ice::Int groupId, ::Ice::Int status, const ::atmWebMember::sContactInfo& cinfo, ::Ice::Int& contactTimes, ::std::string& retcid, ::std::string& retmodseqid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__atmAddContact_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(contactId);
        __os->write(nickName);
        __os->write(groupId);
        __os->write(status);
        cinfo.__write(__os);
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
        __is->read(contactTimes);
        __is->read(retcid);
        __is->read(retmodseqid);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::atmGetContactDetail(const ::std::string& uid, const ::std::string& cid, ::AliIMDBBase::SICEATMGenContactFull& detail, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__atmGetContactDetail_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(cid);
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
        detail.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IContactIMDBService::atmModifyContactDetail(const ::AliIMDBBase::SICEATMGenContactFull& detail, ::Ice::Long& gencntmodifyVersion, ::std::string& modseqid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IContactIMDBService__atmModifyContactDetail_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        detail.__write(__os);
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
        __is->read(gencntmodifyVersion);
        __is->read(modseqid);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::AliIMDBBase::IContactIMDBService::CheckCanAddContact(const ::std::string& userId, const ::std::string& buddyId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__CheckCanAddContact_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->CheckCanAddContact(userId, buddyId, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::UpdateContactWebInfo(const ::std::string& userId, const ::std::string& buddyId, const ::AliIMDBBase::SUserWebBasicProfile& cntWebInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__UpdateContactWebInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->UpdateContactWebInfo(userId, buddyId, cntWebInfo, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::GetGroupList(const ::std::string& userId, ::AliIMDBBase::SICEGroupInfoSeq& groupList, ::Ice::Int& groupTimes, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__GetGroupList_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->GetGroupList(userId, groupList, groupTimes, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::GetGroupListEx(const ::std::string& userId, ::AliIMDBBase::SICEGroupInfoExSeq& groupList, ::Ice::Int& groupTimes, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__GetGroupListEx_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->GetGroupListEx(userId, groupList, groupTimes, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::GetContactList(const ::std::string& userId, ::Ice::Int getFlag, ::AliIMDBBase::SICEContactInfoSeq& contactList, ::Ice::Int& contactTimes, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__GetContactList_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->GetContactList(userId, getFlag, contactList, contactTimes, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::GetBlackList(const ::std::string& userId, ::Ice::StringSeq& blackList, ::Ice::Int& blacklistTimes, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__GetBlackList_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->GetBlackList(userId, blackList, blacklistTimes, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::GetReverseBlackList(const ::std::string& userId, ::Ice::StringSeq& reverseBlackList, ::Ice::Int& reverseBlacklistTimes, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__GetReverseBlackList_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->GetReverseBlackList(userId, reverseBlackList, reverseBlacklistTimes, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::GetContactInfo(const ::std::string& userId, const ::std::string& contactId, ::AliIMDBBase::SICEContactInfo& contactInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__GetContactInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->GetContactInfo(userId, contactId, contactInfo, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::AddGroup(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int& groupId, ::Ice::Int& groupTimes, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__AddGroup_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->AddGroup(userId, groupName, groupId, groupTimes, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::AddGroupEx(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int parentId, ::Ice::Int& groupId, ::Ice::Int& groupTimes, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__AddGroupEx_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->AddGroupEx(userId, groupName, parentId, groupId, groupTimes, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::AddBlackList(const ::std::string& userId, const ::std::string& blackId, ::Ice::Int& blackListTimes, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__AddBlackList_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->AddBlackList(userId, blackId, blackListTimes, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::UpdateGroup(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int groupId, ::Ice::Int& groupTimes, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__UpdateGroup_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->UpdateGroup(userId, groupName, groupId, groupTimes, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::MoveGroup(const ::std::string& userId, ::Ice::Long groupId, ::Ice::Long newparentgid, ::Ice::Int& groupTimes, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__MoveGroup_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->MoveGroup(userId, groupId, newparentgid, groupTimes, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::UpdateContactNickName(const ::std::string& userId, const ::std::string& contactId, const ::std::string& nickName, ::Ice::Int& contactTimes, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__UpdateContactNickName_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->UpdateContactNickName(userId, contactId, nickName, contactTimes, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::UpdateContactGroup(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int srcGroupId, ::Ice::Int dstGroupId, ::Ice::Int& contactTimes, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__UpdateContactGroup_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->UpdateContactGroup(userId, contactId, srcGroupId, dstGroupId, contactTimes, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::UpdateContactStatus(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int status, ::Ice::Int& contactTimes, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__UpdateContactStatus_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->UpdateContactStatus(userId, contactId, status, contactTimes, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::RemoveGroup(const ::std::string& userId, ::Ice::Int groupId, ::Ice::Int& groupTimes, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__RemoveGroup_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->RemoveGroup(userId, groupId, groupTimes, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::RemoveContact(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int& contactTimes, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__RemoveContact_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->RemoveContact(userId, contactId, contactTimes, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::RemoveInverfiedContact(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int& contactTimes, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__RemoveInverfiedContact_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->RemoveInverfiedContact(userId, contactId, contactTimes, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::RemoveBlackList(const ::std::string& userId, const ::std::string& blackId, ::Ice::Int& blackListTimes, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__RemoveBlackList_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->RemoveBlackList(userId, blackId, blackListTimes, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::IsBlackedByOther(const ::std::string& userId, const ::std::string& otheruid, bool& bBlacked, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__IsBlackedByOther_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->IsBlackedByOther(userId, otheruid, bBlacked, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::RemoveBatchContacts(const ::std::string& userId, const ::Ice::StringSeq& cids, ::Ice::StringSeq& retVect, ::Ice::Int& modifyCntTimes, ::Ice::Int& modifyGenCntTime, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__RemoveBatchContacts_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->RemoveBatchContacts(userId, cids, retVect, modifyCntTimes, modifyGenCntTime, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::GetAllContactList(const ::std::string& uid, ::Ice::Int getFlag, ::AliIMDBBase::SICEContactInfoSeq& contactList, ::Ice::Int& contactTimes, ::Ice::Int& gencontacttimes, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__GetAllContactList_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->GetAllContactList(uid, getFlag, contactList, contactTimes, gencontacttimes, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::AddContact(const ::std::string& userId, const ::std::string& contactId, const ::std::string& nickName, ::Ice::Int groupId, ::Ice::Int status, const ::AliIMDBBase::SUserWebBasicProfile& cntInfo, ::Ice::Int& contactTimes, ::std::string& retcid, ::std::string& retmodseqid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__AddContact_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->AddContact(userId, contactId, nickName, groupId, status, cntInfo, contactTimes, retcid, retmodseqid, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::ModifyCntMemo(const ::std::string& uid, const ::std::string& cntid, const ::std::string& memo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__ModifyCntMemo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->ModifyCntMemo(uid, cntid, memo, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::GetCntMemo(const ::std::string& uid, const ::std::string& cntid, ::std::string& memo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__GetCntMemo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->GetCntMemo(uid, cntid, memo, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::updateContactClientInfo(const ::std::string& uid, const ::std::string& cid, const ::std::string& data, ::Ice::Int& contactTimes, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__updateContactClientInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->updateContactClientInfo(uid, cid, data, contactTimes, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::checkContact(const ::std::string& uid, const ::std::string& contactId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__checkContact_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->checkContact(uid, contactId, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::GetContactDetailByUid(const ::std::string& uid, const ::std::string& cid, ::AliIMDBBase::SICEGenContactFull& detail, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__GetContactDetailByUid_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->GetContactDetailByUid(uid, cid, detail, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::GetContactDetail(const ::std::string& uid, const ::std::string& cid, ::AliIMDBBase::SICEGenContactFull& detail, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__GetContactDetail_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->GetContactDetail(uid, cid, detail, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::AddGenContactFull(const ::AliIMDBBase::SICEGenContactFull& detail, ::std::string& retscid, ::std::string& retsmodseqid, ::Ice::Long& timeStamps, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__AddGenContactFull_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->AddGenContactFull(detail, retscid, retsmodseqid, timeStamps, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::DelGenContact(const ::std::string& uid, const ::std::string& cid, ::Ice::Long& contactTimes, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__DelGenContact_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->DelGenContact(uid, cid, contactTimes, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::CheckUpgradeGenCnt(const ::std::string& uid, const ::std::string& cid, const ::std::string& contactId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__CheckUpgradeGenCnt_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->CheckUpgradeGenCnt(uid, cid, contactId, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::UpgradeGenContact(const ::std::string& uid, const ::std::string& cid, const ::std::string& contactId, ::Ice::Long& cntstamp, ::Ice::Long& gencntstamp, ::std::string& modseqid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__UpgradeGenContact_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->UpgradeGenContact(uid, cid, contactId, cntstamp, gencntstamp, modseqid, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::GetUpdatedUserInfo(const ::std::string& uid, const ::std::string& contactId, ::Ice::Long& cntstamp, ::Ice::Long& gencntstamp, ::std::string& retcid, ::std::string& modseqid, ::Ice::Long& groupid, ::std::string& nickname, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__GetUpdatedUserInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->GetUpdatedUserInfo(uid, contactId, cntstamp, gencntstamp, retcid, modseqid, groupid, nickname, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::ModifyContactDetail(const ::AliIMDBBase::SICEGenContactFull& detail, ::Ice::Long& gencntmodifyVersion, ::std::string& modseqid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__ModifyContactDetail_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->ModifyContactDetail(detail, gencntmodifyVersion, modseqid, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::UpdateContactGroupByCid(const ::std::string& userId, const ::std::string& cid, ::Ice::Int srcGroupId, ::Ice::Int dstGroupId, ::Ice::Int& contactTimes, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__UpdateContactGroupByCid_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->UpdateContactGroupByCid(userId, cid, srcGroupId, dstGroupId, contactTimes, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::UpdateContactNickNameByCid(const ::std::string& userId, const ::std::string& cid, const ::std::string& nickName, ::Ice::Int& contactTimes, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__UpdateContactNickNameByCid_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->UpdateContactNickNameByCid(userId, cid, nickName, contactTimes, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::GetCntModifyList(::Ice::Int getFlag, const ::std::string& uid, const ::std::string& sMaxSeqId, ::AliIMDBBase::SICECntCidModPairSeq& cntList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__GetCntModifyList_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->GetCntModifyList(getFlag, uid, sMaxSeqId, cntList, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::addUser(const ::std::string& uid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__addUser_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->addUser(uid, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::addChildUser(const ::std::string& uid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__addChildUser_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->addChildUser(uid, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::GetMultiAccountContactList(const ::std::string& uid, ::AliIMDBBase::SICEContactInfoSeq& contactIdList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__GetMultiAccountContactList_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->GetMultiAccountContactList(uid, contactIdList, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::atmAddContact(const ::std::string& userId, const ::std::string& contactId, const ::std::string& nickName, ::Ice::Int groupId, ::Ice::Int status, const ::atmWebMember::sContactInfo& cinfo, ::Ice::Int& contactTimes, ::std::string& retcid, ::std::string& retmodseqid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__atmAddContact_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->atmAddContact(userId, contactId, nickName, groupId, status, cinfo, contactTimes, retcid, retmodseqid, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::atmGetContactDetail(const ::std::string& uid, const ::std::string& cid, ::AliIMDBBase::SICEATMGenContactFull& detail, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__atmGetContactDetail_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->atmGetContactDetail(uid, cid, detail, __current);
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
IceDelegateD::AliIMDBBase::IContactIMDBService::atmModifyContactDetail(const ::AliIMDBBase::SICEATMGenContactFull& detail, ::Ice::Long& gencntmodifyVersion, ::std::string& modseqid, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__IContactIMDBService__atmModifyContactDetail_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::IContactIMDBService* __servant = dynamic_cast< ::AliIMDBBase::IContactIMDBService*>(__direct.servant().get());
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
                __ret = __servant->atmModifyContactDetail(detail, gencntmodifyVersion, modseqid, __current);
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
AliIMDBBase::IContactIMDBService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __AliIMDBBase__IContactIMDBService_ids[2] =
{
    "::AliIMDBBase::IContactIMDBService",
    "::Ice::Object"
};

bool
AliIMDBBase::IContactIMDBService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__AliIMDBBase__IContactIMDBService_ids, __AliIMDBBase__IContactIMDBService_ids + 2, _s);
}

::std::vector< ::std::string>
AliIMDBBase::IContactIMDBService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__AliIMDBBase__IContactIMDBService_ids[0], &__AliIMDBBase__IContactIMDBService_ids[2]);
}

const ::std::string&
AliIMDBBase::IContactIMDBService::ice_id(const ::Ice::Current&) const
{
    return __AliIMDBBase__IContactIMDBService_ids[0];
}

const ::std::string&
AliIMDBBase::IContactIMDBService::ice_staticId()
{
    return __AliIMDBBase__IContactIMDBService_ids[0];
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___CheckCanAddContact(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::std::string buddyId;
    __is->read(userId);
    __is->read(buddyId);
    ::Ice::Int __ret = CheckCanAddContact(userId, buddyId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___UpdateContactWebInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::std::string buddyId;
    ::AliIMDBBase::SUserWebBasicProfile cntWebInfo;
    __is->read(userId);
    __is->read(buddyId);
    cntWebInfo.__read(__is);
    ::Ice::Int __ret = UpdateContactWebInfo(userId, buddyId, cntWebInfo, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___GetGroupList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::SICEGroupInfoSeq groupList;
    ::Ice::Int groupTimes;
    ::Ice::Int __ret = GetGroupList(userId, groupList, groupTimes, __current);
    if(groupList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::AliIMDBBase::__write(__os, &groupList[0], &groupList[0] + groupList.size(), ::AliIMDBBase::__U__SICEGroupInfoSeq());
    }
    __os->write(groupTimes);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___GetGroupListEx(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::SICEGroupInfoExSeq groupList;
    ::Ice::Int groupTimes;
    ::Ice::Int __ret = GetGroupListEx(userId, groupList, groupTimes, __current);
    if(groupList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::AliIMDBBase::__write(__os, &groupList[0], &groupList[0] + groupList.size(), ::AliIMDBBase::__U__SICEGroupInfoExSeq());
    }
    __os->write(groupTimes);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___GetContactList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::Ice::Int getFlag;
    __is->read(userId);
    __is->read(getFlag);
    ::AliIMDBBase::SICEContactInfoSeq contactList;
    ::Ice::Int contactTimes;
    ::Ice::Int __ret = GetContactList(userId, getFlag, contactList, contactTimes, __current);
    if(contactList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::AliIMDBBase::__write(__os, &contactList[0], &contactList[0] + contactList.size(), ::AliIMDBBase::__U__SICEContactInfoSeq());
    }
    __os->write(contactTimes);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___GetBlackList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::Ice::StringSeq blackList;
    ::Ice::Int blacklistTimes;
    ::Ice::Int __ret = GetBlackList(userId, blackList, blacklistTimes, __current);
    if(blackList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&blackList[0], &blackList[0] + blackList.size());
    }
    __os->write(blacklistTimes);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___GetReverseBlackList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::Ice::StringSeq reverseBlackList;
    ::Ice::Int reverseBlacklistTimes;
    ::Ice::Int __ret = GetReverseBlackList(userId, reverseBlackList, reverseBlacklistTimes, __current);
    if(reverseBlackList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&reverseBlackList[0], &reverseBlackList[0] + reverseBlackList.size());
    }
    __os->write(reverseBlacklistTimes);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___GetContactInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::std::string contactId;
    __is->read(userId);
    __is->read(contactId);
    ::AliIMDBBase::SICEContactInfo contactInfo;
    ::Ice::Int __ret = GetContactInfo(userId, contactId, contactInfo, __current);
    contactInfo.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___AddGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::std::string groupName;
    __is->read(userId);
    __is->read(groupName);
    ::Ice::Int groupId;
    ::Ice::Int groupTimes;
    ::Ice::Int __ret = AddGroup(userId, groupName, groupId, groupTimes, __current);
    __os->write(groupId);
    __os->write(groupTimes);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___AddGroupEx(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::std::string groupName;
    ::Ice::Int parentId;
    __is->read(userId);
    __is->read(groupName);
    __is->read(parentId);
    ::Ice::Int groupId;
    ::Ice::Int groupTimes;
    ::Ice::Int __ret = AddGroupEx(userId, groupName, parentId, groupId, groupTimes, __current);
    __os->write(groupId);
    __os->write(groupTimes);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___AddBlackList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::std::string blackId;
    __is->read(userId);
    __is->read(blackId);
    ::Ice::Int blackListTimes;
    ::Ice::Int __ret = AddBlackList(userId, blackId, blackListTimes, __current);
    __os->write(blackListTimes);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___UpdateGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::std::string groupName;
    ::Ice::Int groupId;
    __is->read(userId);
    __is->read(groupName);
    __is->read(groupId);
    ::Ice::Int groupTimes;
    ::Ice::Int __ret = UpdateGroup(userId, groupName, groupId, groupTimes, __current);
    __os->write(groupTimes);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___MoveGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::Ice::Long groupId;
    ::Ice::Long newparentgid;
    __is->read(userId);
    __is->read(groupId);
    __is->read(newparentgid);
    ::Ice::Int groupTimes;
    ::Ice::Int __ret = MoveGroup(userId, groupId, newparentgid, groupTimes, __current);
    __os->write(groupTimes);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___UpdateContactNickName(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::std::string contactId;
    ::std::string nickName;
    __is->read(userId);
    __is->read(contactId);
    __is->read(nickName);
    ::Ice::Int contactTimes;
    ::Ice::Int __ret = UpdateContactNickName(userId, contactId, nickName, contactTimes, __current);
    __os->write(contactTimes);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___UpdateContactGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::std::string contactId;
    ::Ice::Int srcGroupId;
    ::Ice::Int dstGroupId;
    __is->read(userId);
    __is->read(contactId);
    __is->read(srcGroupId);
    __is->read(dstGroupId);
    ::Ice::Int contactTimes;
    ::Ice::Int __ret = UpdateContactGroup(userId, contactId, srcGroupId, dstGroupId, contactTimes, __current);
    __os->write(contactTimes);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___UpdateContactStatus(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::std::string contactId;
    ::Ice::Int status;
    __is->read(userId);
    __is->read(contactId);
    __is->read(status);
    ::Ice::Int contactTimes;
    ::Ice::Int __ret = UpdateContactStatus(userId, contactId, status, contactTimes, __current);
    __os->write(contactTimes);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___RemoveGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::Ice::Int groupId;
    __is->read(userId);
    __is->read(groupId);
    ::Ice::Int groupTimes;
    ::Ice::Int __ret = RemoveGroup(userId, groupId, groupTimes, __current);
    __os->write(groupTimes);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___RemoveContact(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::std::string contactId;
    __is->read(userId);
    __is->read(contactId);
    ::Ice::Int contactTimes;
    ::Ice::Int __ret = RemoveContact(userId, contactId, contactTimes, __current);
    __os->write(contactTimes);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___RemoveInverfiedContact(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::std::string contactId;
    __is->read(userId);
    __is->read(contactId);
    ::Ice::Int contactTimes;
    ::Ice::Int __ret = RemoveInverfiedContact(userId, contactId, contactTimes, __current);
    __os->write(contactTimes);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___RemoveBlackList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::std::string blackId;
    __is->read(userId);
    __is->read(blackId);
    ::Ice::Int blackListTimes;
    ::Ice::Int __ret = RemoveBlackList(userId, blackId, blackListTimes, __current);
    __os->write(blackListTimes);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___IsBlackedByOther(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::std::string otheruid;
    __is->read(userId);
    __is->read(otheruid);
    bool bBlacked;
    ::Ice::Int __ret = IsBlackedByOther(userId, otheruid, bBlacked, __current);
    __os->write(bBlacked);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___RemoveBatchContacts(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::Ice::StringSeq cids;
    __is->read(userId);
    __is->read(cids);
    ::Ice::StringSeq retVect;
    ::Ice::Int modifyCntTimes;
    ::Ice::Int modifyGenCntTime;
    ::Ice::Int __ret = RemoveBatchContacts(userId, cids, retVect, modifyCntTimes, modifyGenCntTime, __current);
    if(retVect.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&retVect[0], &retVect[0] + retVect.size());
    }
    __os->write(modifyCntTimes);
    __os->write(modifyGenCntTime);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___GetAllContactList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::Ice::Int getFlag;
    __is->read(uid);
    __is->read(getFlag);
    ::AliIMDBBase::SICEContactInfoSeq contactList;
    ::Ice::Int contactTimes;
    ::Ice::Int gencontacttimes;
    ::Ice::Int __ret = GetAllContactList(uid, getFlag, contactList, contactTimes, gencontacttimes, __current);
    if(contactList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::AliIMDBBase::__write(__os, &contactList[0], &contactList[0] + contactList.size(), ::AliIMDBBase::__U__SICEContactInfoSeq());
    }
    __os->write(contactTimes);
    __os->write(gencontacttimes);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___AddContact(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::std::string contactId;
    ::std::string nickName;
    ::Ice::Int groupId;
    ::Ice::Int status;
    ::AliIMDBBase::SUserWebBasicProfile cntInfo;
    __is->read(userId);
    __is->read(contactId);
    __is->read(nickName);
    __is->read(groupId);
    __is->read(status);
    cntInfo.__read(__is);
    ::Ice::Int contactTimes;
    ::std::string retcid;
    ::std::string retmodseqid;
    ::Ice::Int __ret = AddContact(userId, contactId, nickName, groupId, status, cntInfo, contactTimes, retcid, retmodseqid, __current);
    __os->write(contactTimes);
    __os->write(retcid);
    __os->write(retmodseqid);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___ModifyCntMemo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string cntid;
    ::std::string memo;
    __is->read(uid);
    __is->read(cntid);
    __is->read(memo);
    ::Ice::Int __ret = ModifyCntMemo(uid, cntid, memo, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___GetCntMemo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string cntid;
    __is->read(uid);
    __is->read(cntid);
    ::std::string memo;
    ::Ice::Int __ret = GetCntMemo(uid, cntid, memo, __current);
    __os->write(memo);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___updateContactClientInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string cid;
    ::std::string data;
    __is->read(uid);
    __is->read(cid);
    __is->read(data);
    ::Ice::Int contactTimes;
    ::Ice::Int __ret = updateContactClientInfo(uid, cid, data, contactTimes, __current);
    __os->write(contactTimes);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___checkContact(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string contactId;
    __is->read(uid);
    __is->read(contactId);
    ::Ice::Int __ret = checkContact(uid, contactId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___GetContactDetailByUid(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string cid;
    __is->read(uid);
    __is->read(cid);
    ::AliIMDBBase::SICEGenContactFull detail;
    ::Ice::Int __ret = GetContactDetailByUid(uid, cid, detail, __current);
    detail.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___GetContactDetail(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string cid;
    __is->read(uid);
    __is->read(cid);
    ::AliIMDBBase::SICEGenContactFull detail;
    ::Ice::Int __ret = GetContactDetail(uid, cid, detail, __current);
    detail.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___AddGenContactFull(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::AliIMDBBase::SICEGenContactFull detail;
    detail.__read(__is);
    ::std::string retscid;
    ::std::string retsmodseqid;
    ::Ice::Long timeStamps;
    ::Ice::Int __ret = AddGenContactFull(detail, retscid, retsmodseqid, timeStamps, __current);
    __os->write(retscid);
    __os->write(retsmodseqid);
    __os->write(timeStamps);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___DelGenContact(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string cid;
    __is->read(uid);
    __is->read(cid);
    ::Ice::Long contactTimes;
    ::Ice::Int __ret = DelGenContact(uid, cid, contactTimes, __current);
    __os->write(contactTimes);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___CheckUpgradeGenCnt(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string cid;
    ::std::string contactId;
    __is->read(uid);
    __is->read(cid);
    __is->read(contactId);
    ::Ice::Int __ret = CheckUpgradeGenCnt(uid, cid, contactId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___UpgradeGenContact(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string cid;
    ::std::string contactId;
    __is->read(uid);
    __is->read(cid);
    __is->read(contactId);
    ::Ice::Long cntstamp;
    ::Ice::Long gencntstamp;
    ::std::string modseqid;
    ::Ice::Int __ret = UpgradeGenContact(uid, cid, contactId, cntstamp, gencntstamp, modseqid, __current);
    __os->write(cntstamp);
    __os->write(gencntstamp);
    __os->write(modseqid);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___GetUpdatedUserInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string contactId;
    __is->read(uid);
    __is->read(contactId);
    ::Ice::Long cntstamp;
    ::Ice::Long gencntstamp;
    ::std::string retcid;
    ::std::string modseqid;
    ::Ice::Long groupid;
    ::std::string nickname;
    ::Ice::Int __ret = GetUpdatedUserInfo(uid, contactId, cntstamp, gencntstamp, retcid, modseqid, groupid, nickname, __current);
    __os->write(cntstamp);
    __os->write(gencntstamp);
    __os->write(retcid);
    __os->write(modseqid);
    __os->write(groupid);
    __os->write(nickname);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___ModifyContactDetail(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::AliIMDBBase::SICEGenContactFull detail;
    detail.__read(__is);
    ::Ice::Long gencntmodifyVersion;
    ::std::string modseqid;
    ::Ice::Int __ret = ModifyContactDetail(detail, gencntmodifyVersion, modseqid, __current);
    __os->write(gencntmodifyVersion);
    __os->write(modseqid);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___UpdateContactGroupByCid(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::std::string cid;
    ::Ice::Int srcGroupId;
    ::Ice::Int dstGroupId;
    __is->read(userId);
    __is->read(cid);
    __is->read(srcGroupId);
    __is->read(dstGroupId);
    ::Ice::Int contactTimes;
    ::Ice::Int __ret = UpdateContactGroupByCid(userId, cid, srcGroupId, dstGroupId, contactTimes, __current);
    __os->write(contactTimes);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___UpdateContactNickNameByCid(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::std::string cid;
    ::std::string nickName;
    __is->read(userId);
    __is->read(cid);
    __is->read(nickName);
    ::Ice::Int contactTimes;
    ::Ice::Int __ret = UpdateContactNickNameByCid(userId, cid, nickName, contactTimes, __current);
    __os->write(contactTimes);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___GetCntModifyList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int getFlag;
    ::std::string uid;
    ::std::string sMaxSeqId;
    __is->read(getFlag);
    __is->read(uid);
    __is->read(sMaxSeqId);
    ::AliIMDBBase::SICECntCidModPairSeq cntList;
    ::Ice::Int __ret = GetCntModifyList(getFlag, uid, sMaxSeqId, cntList, __current);
    if(cntList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::AliIMDBBase::__write(__os, &cntList[0], &cntList[0] + cntList.size(), ::AliIMDBBase::__U__SICECntCidModPairSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___addUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::Ice::Int __ret = addUser(uid, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___addChildUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::Ice::Int __ret = addChildUser(uid, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___GetMultiAccountContactList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::AliIMDBBase::SICEContactInfoSeq contactIdList;
    ::Ice::Int __ret = GetMultiAccountContactList(uid, contactIdList, __current);
    if(contactIdList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::AliIMDBBase::__write(__os, &contactIdList[0], &contactIdList[0] + contactIdList.size(), ::AliIMDBBase::__U__SICEContactInfoSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___atmAddContact(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::std::string contactId;
    ::std::string nickName;
    ::Ice::Int groupId;
    ::Ice::Int status;
    ::atmWebMember::sContactInfo cinfo;
    __is->read(userId);
    __is->read(contactId);
    __is->read(nickName);
    __is->read(groupId);
    __is->read(status);
    cinfo.__read(__is);
    ::Ice::Int contactTimes;
    ::std::string retcid;
    ::std::string retmodseqid;
    ::Ice::Int __ret = atmAddContact(userId, contactId, nickName, groupId, status, cinfo, contactTimes, retcid, retmodseqid, __current);
    __os->write(contactTimes);
    __os->write(retcid);
    __os->write(retmodseqid);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___atmGetContactDetail(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string cid;
    __is->read(uid);
    __is->read(cid);
    ::AliIMDBBase::SICEATMGenContactFull detail;
    ::Ice::Int __ret = atmGetContactDetail(uid, cid, detail, __current);
    detail.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::___atmModifyContactDetail(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::AliIMDBBase::SICEATMGenContactFull detail;
    detail.__read(__is);
    ::Ice::Long gencntmodifyVersion;
    ::std::string modseqid;
    ::Ice::Int __ret = atmModifyContactDetail(detail, gencntmodifyVersion, modseqid, __current);
    __os->write(gencntmodifyVersion);
    __os->write(modseqid);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __AliIMDBBase__IContactIMDBService_all[] =
{
    "AddBlackList",
    "AddContact",
    "AddGenContactFull",
    "AddGroup",
    "AddGroupEx",
    "CheckCanAddContact",
    "CheckUpgradeGenCnt",
    "DelGenContact",
    "GetAllContactList",
    "GetBlackList",
    "GetCntMemo",
    "GetCntModifyList",
    "GetContactDetail",
    "GetContactDetailByUid",
    "GetContactInfo",
    "GetContactList",
    "GetGroupList",
    "GetGroupListEx",
    "GetMultiAccountContactList",
    "GetReverseBlackList",
    "GetUpdatedUserInfo",
    "IsBlackedByOther",
    "ModifyCntMemo",
    "ModifyContactDetail",
    "MoveGroup",
    "RemoveBatchContacts",
    "RemoveBlackList",
    "RemoveContact",
    "RemoveGroup",
    "RemoveInverfiedContact",
    "UpdateContactGroup",
    "UpdateContactGroupByCid",
    "UpdateContactNickName",
    "UpdateContactNickNameByCid",
    "UpdateContactStatus",
    "UpdateContactWebInfo",
    "UpdateGroup",
    "UpgradeGenContact",
    "addChildUser",
    "addUser",
    "atmAddContact",
    "atmGetContactDetail",
    "atmModifyContactDetail",
    "checkContact",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "updateContactClientInfo"
};

::IceInternal::DispatchStatus
AliIMDBBase::IContactIMDBService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__AliIMDBBase__IContactIMDBService_all, __AliIMDBBase__IContactIMDBService_all + 49, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __AliIMDBBase__IContactIMDBService_all)
    {
        case 0:
        {
            return ___AddBlackList(in, current);
        }
        case 1:
        {
            return ___AddContact(in, current);
        }
        case 2:
        {
            return ___AddGenContactFull(in, current);
        }
        case 3:
        {
            return ___AddGroup(in, current);
        }
        case 4:
        {
            return ___AddGroupEx(in, current);
        }
        case 5:
        {
            return ___CheckCanAddContact(in, current);
        }
        case 6:
        {
            return ___CheckUpgradeGenCnt(in, current);
        }
        case 7:
        {
            return ___DelGenContact(in, current);
        }
        case 8:
        {
            return ___GetAllContactList(in, current);
        }
        case 9:
        {
            return ___GetBlackList(in, current);
        }
        case 10:
        {
            return ___GetCntMemo(in, current);
        }
        case 11:
        {
            return ___GetCntModifyList(in, current);
        }
        case 12:
        {
            return ___GetContactDetail(in, current);
        }
        case 13:
        {
            return ___GetContactDetailByUid(in, current);
        }
        case 14:
        {
            return ___GetContactInfo(in, current);
        }
        case 15:
        {
            return ___GetContactList(in, current);
        }
        case 16:
        {
            return ___GetGroupList(in, current);
        }
        case 17:
        {
            return ___GetGroupListEx(in, current);
        }
        case 18:
        {
            return ___GetMultiAccountContactList(in, current);
        }
        case 19:
        {
            return ___GetReverseBlackList(in, current);
        }
        case 20:
        {
            return ___GetUpdatedUserInfo(in, current);
        }
        case 21:
        {
            return ___IsBlackedByOther(in, current);
        }
        case 22:
        {
            return ___ModifyCntMemo(in, current);
        }
        case 23:
        {
            return ___ModifyContactDetail(in, current);
        }
        case 24:
        {
            return ___MoveGroup(in, current);
        }
        case 25:
        {
            return ___RemoveBatchContacts(in, current);
        }
        case 26:
        {
            return ___RemoveBlackList(in, current);
        }
        case 27:
        {
            return ___RemoveContact(in, current);
        }
        case 28:
        {
            return ___RemoveGroup(in, current);
        }
        case 29:
        {
            return ___RemoveInverfiedContact(in, current);
        }
        case 30:
        {
            return ___UpdateContactGroup(in, current);
        }
        case 31:
        {
            return ___UpdateContactGroupByCid(in, current);
        }
        case 32:
        {
            return ___UpdateContactNickName(in, current);
        }
        case 33:
        {
            return ___UpdateContactNickNameByCid(in, current);
        }
        case 34:
        {
            return ___UpdateContactStatus(in, current);
        }
        case 35:
        {
            return ___UpdateContactWebInfo(in, current);
        }
        case 36:
        {
            return ___UpdateGroup(in, current);
        }
        case 37:
        {
            return ___UpgradeGenContact(in, current);
        }
        case 38:
        {
            return ___addChildUser(in, current);
        }
        case 39:
        {
            return ___addUser(in, current);
        }
        case 40:
        {
            return ___atmAddContact(in, current);
        }
        case 41:
        {
            return ___atmGetContactDetail(in, current);
        }
        case 42:
        {
            return ___atmModifyContactDetail(in, current);
        }
        case 43:
        {
            return ___checkContact(in, current);
        }
        case 44:
        {
            return ___ice_id(in, current);
        }
        case 45:
        {
            return ___ice_ids(in, current);
        }
        case 46:
        {
            return ___ice_isA(in, current);
        }
        case 47:
        {
            return ___ice_ping(in, current);
        }
        case 48:
        {
            return ___updateContactClientInfo(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
AliIMDBBase::IContactIMDBService::__write(::IceInternal::BasicStream* __os) const
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
AliIMDBBase::IContactIMDBService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
AliIMDBBase::IContactIMDBService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIMDBBase::IContactIMDBService was not generated with stream support";
    throw ex;
}

void
AliIMDBBase::IContactIMDBService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIMDBBase::IContactIMDBService was not generated with stream support";
    throw ex;
}

void 
AliIMDBBase::__patch__IContactIMDBServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::AliIMDBBase::IContactIMDBServicePtr* p = static_cast< ::AliIMDBBase::IContactIMDBServicePtr*>(__addr);
    assert(p);
    *p = ::AliIMDBBase::IContactIMDBServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::AliIMDBBase::IContactIMDBService::ice_staticId();
        throw e;
    }
}

bool
AliIMDBBase::operator==(const ::AliIMDBBase::IContactIMDBService& l, const ::AliIMDBBase::IContactIMDBService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
AliIMDBBase::operator!=(const ::AliIMDBBase::IContactIMDBService& l, const ::AliIMDBBase::IContactIMDBService& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
AliIMDBBase::operator<(const ::AliIMDBBase::IContactIMDBService& l, const ::AliIMDBBase::IContactIMDBService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
AliIMDBBase::operator<=(const ::AliIMDBBase::IContactIMDBService& l, const ::AliIMDBBase::IContactIMDBService& r)
{
    return l < r || l == r;
}

bool
AliIMDBBase::operator>(const ::AliIMDBBase::IContactIMDBService& l, const ::AliIMDBBase::IContactIMDBService& r)
{
    return !(l < r) && !(l == r);
}

bool
AliIMDBBase::operator>=(const ::AliIMDBBase::IContactIMDBService& l, const ::AliIMDBBase::IContactIMDBService& r)
{
    return !(l < r);
}
