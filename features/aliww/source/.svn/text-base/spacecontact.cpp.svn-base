// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `spacecontact.ice'

#include <spacecontact.h>
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

static const ::std::string __AliIMDBBase__SpaceGroupInterface__GetContactList_name = "GetContactList";

static const ::std::string __AliIMDBBase__SpaceGroupInterface__GetSpaceContactList_name = "GetSpaceContactList";

static const ::std::string __AliIMDBBase__SpaceGroupInterface__GetNotSpaceContactList_name = "GetNotSpaceContactList";

static const ::std::string __AliIMDBBase__SpaceGroupInterface__GetContactListCount_name = "GetContactListCount";

static const ::std::string __AliIMDBBase__SpaceGroupInterface__GetSpaceContactListCount_name = "GetSpaceContactListCount";

static const ::std::string __AliIMDBBase__SpaceGroupInterface__GetNotSpaceContactListCount_name = "GetNotSpaceContactListCount";

static const ::std::string __AliIMDBBase__SpaceGroupInterface__AddSpaceContact_name = "AddSpaceContact";

static const ::std::string __AliIMDBBase__SpaceGroupInterface__DeleteSpaceContact_name = "DeleteSpaceContact";

static const ::std::string __AliIMDBBase__SpaceGroupInterface__GetSpaceGroupList_name = "GetSpaceGroupList";

static const ::std::string __AliIMDBBase__SpaceGroupInterface__GetSpaceGroupListEx_name = "GetSpaceGroupListEx";

static const ::std::string __AliIMDBBase__SpaceGroupInterface__AddSpaceGroup_name = "AddSpaceGroup";

static const ::std::string __AliIMDBBase__SpaceGroupInterface__UpdateSpaceGroup_name = "UpdateSpaceGroup";

static const ::std::string __AliIMDBBase__SpaceGroupInterface__UpdateContactSpaceGroup_name = "UpdateContactSpaceGroup";

static const ::std::string __AliIMDBBase__SpaceGroupInterface__RemoveSpaceGroup_name = "RemoveSpaceGroup";

static const ::std::string __AliIMDBBase__SpaceGroupInterface__GetSpaceGroupContactList_name = "GetSpaceGroupContactList";

static const ::std::string __AliIMDBBase__SpaceGroupInterface__UpdateContactNickName_name = "UpdateContactNickName";

static const ::std::string __AliIMDBBase__SpaceGroupInterface__checkContact_name = "checkContact";

static const ::std::string __AliIMDBBase__SpaceGroupInterface__checkSpaceContact_name = "checkSpaceContact";

static const ::std::string __AliIMDBBase__SpaceGroupInterface__checkCanAddContact_name = "checkCanAddContact";

void
IceInternal::incRef(::AliIMDBBase::SpaceGroupInterface* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::AliIMDBBase::SpaceGroupInterface* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::AliIMDBBase::SpaceGroupInterface* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::AliIMDBBase::SpaceGroupInterface* p)
{
    p->__decRef();
}

void
AliIMDBBase::__write(::IceInternal::BasicStream* __os, const ::AliIMDBBase::SpaceGroupInterfacePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
AliIMDBBase::__read(::IceInternal::BasicStream* __is, ::AliIMDBBase::SpaceGroupInterfacePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::AliIMDBBase::SpaceGroupInterface;
        v->__copyFrom(proxy);
    }
}

void
AliIMDBBase::__write(::IceInternal::BasicStream* __os, const ::AliIMDBBase::SpaceGroupInterfacePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

void
AliIMDBBase::__write(::IceInternal::BasicStream* __os, const ::AliIMDBBase::StrKVMap& v, ::AliIMDBBase::__U__StrKVMap)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::AliIMDBBase::StrKVMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
AliIMDBBase::__read(::IceInternal::BasicStream* __is, ::AliIMDBBase::StrKVMap& v, ::AliIMDBBase::__U__StrKVMap)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::std::string, ::std::string> pair;
        __is->read(const_cast< ::std::string&>(pair.first));
        ::AliIMDBBase::StrKVMap::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
AliIMDBBase::__addObject(const SpaceGroupInterfacePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
AliIMDBBase::__usesClasses(const SpaceGroupInterfacePtr& p)
{
    return p->__usesClasses();
}

void
AliIMDBBase::__decRefUnsafe(const SpaceGroupInterfacePtr& p)
{
    p->__decRefUnsafe();
}

void
AliIMDBBase::__clearHandleUnsafe(SpaceGroupInterfacePtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::AliIMDBBase::SpaceGroupInterface::GetContactList(const ::std::string& userId, ::Ice::Int pageno, ::Ice::Int pageSize, ::Ice::Int& totalNum, ::spaceContact::SICESpaceContactInfoSeq& contactList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__SpaceGroupInterface__GetContactList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::SpaceGroupInterface* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::SpaceGroupInterface*>(__delBase.get());
            return __del->GetContactList(userId, pageno, pageSize, totalNum, contactList, __ctx);
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
IceProxy::AliIMDBBase::SpaceGroupInterface::GetSpaceContactList(const ::std::string& userId, ::Ice::Int pageno, ::Ice::Int pageSize, ::Ice::Int& totalNum, ::spaceContact::SICESpaceContactInfoSeq& contactList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__SpaceGroupInterface__GetSpaceContactList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::SpaceGroupInterface* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::SpaceGroupInterface*>(__delBase.get());
            return __del->GetSpaceContactList(userId, pageno, pageSize, totalNum, contactList, __ctx);
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
IceProxy::AliIMDBBase::SpaceGroupInterface::GetNotSpaceContactList(const ::std::string& userId, ::Ice::Int pageno, ::Ice::Int pageSize, ::Ice::Int& totalNum, ::spaceContact::SICESpaceContactInfoSeq& contactList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__SpaceGroupInterface__GetNotSpaceContactList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::SpaceGroupInterface* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::SpaceGroupInterface*>(__delBase.get());
            return __del->GetNotSpaceContactList(userId, pageno, pageSize, totalNum, contactList, __ctx);
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
IceProxy::AliIMDBBase::SpaceGroupInterface::GetContactListCount(const ::std::string& userId, ::Ice::Int& recordNum, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__SpaceGroupInterface__GetContactListCount_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::SpaceGroupInterface* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::SpaceGroupInterface*>(__delBase.get());
            return __del->GetContactListCount(userId, recordNum, __ctx);
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
IceProxy::AliIMDBBase::SpaceGroupInterface::GetSpaceContactListCount(const ::std::string& userId, ::Ice::Int& recordNum, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__SpaceGroupInterface__GetSpaceContactListCount_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::SpaceGroupInterface* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::SpaceGroupInterface*>(__delBase.get());
            return __del->GetSpaceContactListCount(userId, recordNum, __ctx);
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
IceProxy::AliIMDBBase::SpaceGroupInterface::GetNotSpaceContactListCount(const ::std::string& userId, ::Ice::Int& recordNum, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__SpaceGroupInterface__GetNotSpaceContactListCount_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::SpaceGroupInterface* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::SpaceGroupInterface*>(__delBase.get());
            return __del->GetNotSpaceContactListCount(userId, recordNum, __ctx);
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
IceProxy::AliIMDBBase::SpaceGroupInterface::AddSpaceContact(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int groupId, ::Ice::Int cntgroupId, const ::std::string& userNickname, const ::std::string& contactNickname, ::Ice::Int& friendnum, ::Ice::Int& blacklist, ::Ice::Int& verify, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__SpaceGroupInterface__AddSpaceContact_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::SpaceGroupInterface* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::SpaceGroupInterface*>(__delBase.get());
            return __del->AddSpaceContact(userId, contactId, groupId, cntgroupId, userNickname, contactNickname, friendnum, blacklist, verify, __ctx);
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
IceProxy::AliIMDBBase::SpaceGroupInterface::DeleteSpaceContact(const ::std::string& userId, const ::std::string& contactId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__SpaceGroupInterface__DeleteSpaceContact_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::SpaceGroupInterface* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::SpaceGroupInterface*>(__delBase.get());
            return __del->DeleteSpaceContact(userId, contactId, __ctx);
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
IceProxy::AliIMDBBase::SpaceGroupInterface::GetSpaceGroupList(const ::std::string& userId, ::AliIMDBBase::SICEGroupInfoSeq& groupList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__SpaceGroupInterface__GetSpaceGroupList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::SpaceGroupInterface* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::SpaceGroupInterface*>(__delBase.get());
            return __del->GetSpaceGroupList(userId, groupList, __ctx);
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
IceProxy::AliIMDBBase::SpaceGroupInterface::GetSpaceGroupListEx(const ::std::string& userId, ::spaceContact::SICESpaceGroupInfoSeq& groupList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__SpaceGroupInterface__GetSpaceGroupListEx_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::SpaceGroupInterface* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::SpaceGroupInterface*>(__delBase.get());
            return __del->GetSpaceGroupListEx(userId, groupList, __ctx);
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
IceProxy::AliIMDBBase::SpaceGroupInterface::AddSpaceGroup(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int& groupId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__SpaceGroupInterface__AddSpaceGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::SpaceGroupInterface* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::SpaceGroupInterface*>(__delBase.get());
            return __del->AddSpaceGroup(userId, groupName, groupId, __ctx);
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
IceProxy::AliIMDBBase::SpaceGroupInterface::UpdateSpaceGroup(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int groupId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__SpaceGroupInterface__UpdateSpaceGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::SpaceGroupInterface* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::SpaceGroupInterface*>(__delBase.get());
            return __del->UpdateSpaceGroup(userId, groupName, groupId, __ctx);
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
IceProxy::AliIMDBBase::SpaceGroupInterface::UpdateContactSpaceGroup(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int srcGroupId, ::Ice::Int dstGroupId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__SpaceGroupInterface__UpdateContactSpaceGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::SpaceGroupInterface* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::SpaceGroupInterface*>(__delBase.get());
            return __del->UpdateContactSpaceGroup(userId, contactId, srcGroupId, dstGroupId, __ctx);
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
IceProxy::AliIMDBBase::SpaceGroupInterface::RemoveSpaceGroup(const ::std::string& userId, ::Ice::Int groupId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__SpaceGroupInterface__RemoveSpaceGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::SpaceGroupInterface* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::SpaceGroupInterface*>(__delBase.get());
            return __del->RemoveSpaceGroup(userId, groupId, __ctx);
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
IceProxy::AliIMDBBase::SpaceGroupInterface::GetSpaceGroupContactList(const ::std::string& userId, ::Ice::Int groupId, ::spaceContact::SICESpaceContactInfoSeq& contactList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__SpaceGroupInterface__GetSpaceGroupContactList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::SpaceGroupInterface* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::SpaceGroupInterface*>(__delBase.get());
            return __del->GetSpaceGroupContactList(userId, groupId, contactList, __ctx);
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
IceProxy::AliIMDBBase::SpaceGroupInterface::UpdateContactNickName(const ::std::string& userId, const ::std::string& contactid, const ::std::string& nickname, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__SpaceGroupInterface__UpdateContactNickName_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::SpaceGroupInterface* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::SpaceGroupInterface*>(__delBase.get());
            return __del->UpdateContactNickName(userId, contactid, nickname, __ctx);
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
IceProxy::AliIMDBBase::SpaceGroupInterface::checkContact(const ::std::string& uid, const ::Ice::StringSeq& contactId, ::Ice::IntSeq& result, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__SpaceGroupInterface__checkContact_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::SpaceGroupInterface* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::SpaceGroupInterface*>(__delBase.get());
            return __del->checkContact(uid, contactId, result, __ctx);
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
IceProxy::AliIMDBBase::SpaceGroupInterface::checkSpaceContact(const ::std::string& uid, const ::Ice::StringSeq& contactId, ::Ice::IntSeq& result, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__SpaceGroupInterface__checkSpaceContact_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::SpaceGroupInterface* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::SpaceGroupInterface*>(__delBase.get());
            return __del->checkSpaceContact(uid, contactId, result, __ctx);
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
IceProxy::AliIMDBBase::SpaceGroupInterface::checkCanAddContact(const ::std::string& uid, const ::std::string& contactId, ::Ice::Int checkType, ::Ice::Int& errorCode, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__SpaceGroupInterface__checkCanAddContact_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::SpaceGroupInterface* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::SpaceGroupInterface*>(__delBase.get());
            return __del->checkCanAddContact(uid, contactId, checkType, errorCode, __ctx);
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
IceProxy::AliIMDBBase::SpaceGroupInterface::ice_staticId()
{
    return ::AliIMDBBase::SpaceGroupInterface::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::AliIMDBBase::SpaceGroupInterface::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::AliIMDBBase::SpaceGroupInterface);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::AliIMDBBase::SpaceGroupInterface::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::AliIMDBBase::SpaceGroupInterface);
}

bool
IceProxy::AliIMDBBase::operator==(const ::IceProxy::AliIMDBBase::SpaceGroupInterface& l, const ::IceProxy::AliIMDBBase::SpaceGroupInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIMDBBase::operator!=(const ::IceProxy::AliIMDBBase::SpaceGroupInterface& l, const ::IceProxy::AliIMDBBase::SpaceGroupInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIMDBBase::operator<(const ::IceProxy::AliIMDBBase::SpaceGroupInterface& l, const ::IceProxy::AliIMDBBase::SpaceGroupInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIMDBBase::operator<=(const ::IceProxy::AliIMDBBase::SpaceGroupInterface& l, const ::IceProxy::AliIMDBBase::SpaceGroupInterface& r)
{
    return l < r || l == r;
}

bool
IceProxy::AliIMDBBase::operator>(const ::IceProxy::AliIMDBBase::SpaceGroupInterface& l, const ::IceProxy::AliIMDBBase::SpaceGroupInterface& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::AliIMDBBase::operator>=(const ::IceProxy::AliIMDBBase::SpaceGroupInterface& l, const ::IceProxy::AliIMDBBase::SpaceGroupInterface& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::AliIMDBBase::SpaceGroupInterface::GetContactList(const ::std::string& userId, ::Ice::Int pageno, ::Ice::Int pageSize, ::Ice::Int& totalNum, ::spaceContact::SICESpaceContactInfoSeq& contactList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__SpaceGroupInterface__GetContactList_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(pageno);
        __os->write(pageSize);
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
        __is->read(totalNum);
        ::spaceContact::__read(__is, contactList, ::spaceContact::__U__SICESpaceContactInfoSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::SpaceGroupInterface::GetSpaceContactList(const ::std::string& userId, ::Ice::Int pageno, ::Ice::Int pageSize, ::Ice::Int& totalNum, ::spaceContact::SICESpaceContactInfoSeq& contactList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__SpaceGroupInterface__GetSpaceContactList_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(pageno);
        __os->write(pageSize);
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
        __is->read(totalNum);
        ::spaceContact::__read(__is, contactList, ::spaceContact::__U__SICESpaceContactInfoSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::SpaceGroupInterface::GetNotSpaceContactList(const ::std::string& userId, ::Ice::Int pageno, ::Ice::Int pageSize, ::Ice::Int& totalNum, ::spaceContact::SICESpaceContactInfoSeq& contactList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__SpaceGroupInterface__GetNotSpaceContactList_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(pageno);
        __os->write(pageSize);
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
        __is->read(totalNum);
        ::spaceContact::__read(__is, contactList, ::spaceContact::__U__SICESpaceContactInfoSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::SpaceGroupInterface::GetContactListCount(const ::std::string& userId, ::Ice::Int& recordNum, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__SpaceGroupInterface__GetContactListCount_name, ::Ice::Normal, __context, __compress);
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
        __is->read(recordNum);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::SpaceGroupInterface::GetSpaceContactListCount(const ::std::string& userId, ::Ice::Int& recordNum, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__SpaceGroupInterface__GetSpaceContactListCount_name, ::Ice::Normal, __context, __compress);
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
        __is->read(recordNum);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::SpaceGroupInterface::GetNotSpaceContactListCount(const ::std::string& userId, ::Ice::Int& recordNum, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__SpaceGroupInterface__GetNotSpaceContactListCount_name, ::Ice::Normal, __context, __compress);
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
        __is->read(recordNum);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::SpaceGroupInterface::AddSpaceContact(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int groupId, ::Ice::Int cntgroupId, const ::std::string& userNickname, const ::std::string& contactNickname, ::Ice::Int& friendnum, ::Ice::Int& blacklist, ::Ice::Int& verify, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__SpaceGroupInterface__AddSpaceContact_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(contactId);
        __os->write(groupId);
        __os->write(cntgroupId);
        __os->write(userNickname);
        __os->write(contactNickname);
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
        __is->read(friendnum);
        __is->read(blacklist);
        __is->read(verify);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::SpaceGroupInterface::DeleteSpaceContact(const ::std::string& userId, const ::std::string& contactId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__SpaceGroupInterface__DeleteSpaceContact_name, ::Ice::Normal, __context, __compress);
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::SpaceGroupInterface::GetSpaceGroupList(const ::std::string& userId, ::AliIMDBBase::SICEGroupInfoSeq& groupList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__SpaceGroupInterface__GetSpaceGroupList_name, ::Ice::Normal, __context, __compress);
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::SpaceGroupInterface::GetSpaceGroupListEx(const ::std::string& userId, ::spaceContact::SICESpaceGroupInfoSeq& groupList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__SpaceGroupInterface__GetSpaceGroupListEx_name, ::Ice::Normal, __context, __compress);
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
        ::spaceContact::__read(__is, groupList, ::spaceContact::__U__SICESpaceGroupInfoSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::SpaceGroupInterface::AddSpaceGroup(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int& groupId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__SpaceGroupInterface__AddSpaceGroup_name, ::Ice::Normal, __context, __compress);
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::SpaceGroupInterface::UpdateSpaceGroup(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int groupId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__SpaceGroupInterface__UpdateSpaceGroup_name, ::Ice::Normal, __context, __compress);
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::SpaceGroupInterface::UpdateContactSpaceGroup(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int srcGroupId, ::Ice::Int dstGroupId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__SpaceGroupInterface__UpdateContactSpaceGroup_name, ::Ice::Normal, __context, __compress);
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::SpaceGroupInterface::RemoveSpaceGroup(const ::std::string& userId, ::Ice::Int groupId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__SpaceGroupInterface__RemoveSpaceGroup_name, ::Ice::Normal, __context, __compress);
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::SpaceGroupInterface::GetSpaceGroupContactList(const ::std::string& userId, ::Ice::Int groupId, ::spaceContact::SICESpaceContactInfoSeq& contactList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__SpaceGroupInterface__GetSpaceGroupContactList_name, ::Ice::Normal, __context, __compress);
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
        ::spaceContact::__read(__is, contactList, ::spaceContact::__U__SICESpaceContactInfoSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::SpaceGroupInterface::UpdateContactNickName(const ::std::string& userId, const ::std::string& contactid, const ::std::string& nickname, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__SpaceGroupInterface__UpdateContactNickName_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(contactid);
        __os->write(nickname);
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
IceDelegateM::AliIMDBBase::SpaceGroupInterface::checkContact(const ::std::string& uid, const ::Ice::StringSeq& contactId, ::Ice::IntSeq& result, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__SpaceGroupInterface__checkContact_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        if(contactId.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&contactId[0], &contactId[0] + contactId.size());
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
        __is->read(result);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::SpaceGroupInterface::checkSpaceContact(const ::std::string& uid, const ::Ice::StringSeq& contactId, ::Ice::IntSeq& result, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__SpaceGroupInterface__checkSpaceContact_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        if(contactId.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&contactId[0], &contactId[0] + contactId.size());
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
        __is->read(result);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::SpaceGroupInterface::checkCanAddContact(const ::std::string& uid, const ::std::string& contactId, ::Ice::Int checkType, ::Ice::Int& errorCode, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__SpaceGroupInterface__checkCanAddContact_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(contactId);
        __os->write(checkType);
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
        __is->read(errorCode);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::AliIMDBBase::SpaceGroupInterface::GetContactList(const ::std::string& userId, ::Ice::Int pageno, ::Ice::Int pageSize, ::Ice::Int& totalNum, ::spaceContact::SICESpaceContactInfoSeq& contactList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__SpaceGroupInterface__GetContactList_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::SpaceGroupInterface* __servant = dynamic_cast< ::AliIMDBBase::SpaceGroupInterface*>(__direct.servant().get());
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
                __ret = __servant->GetContactList(userId, pageno, pageSize, totalNum, contactList, __current);
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
IceDelegateD::AliIMDBBase::SpaceGroupInterface::GetSpaceContactList(const ::std::string& userId, ::Ice::Int pageno, ::Ice::Int pageSize, ::Ice::Int& totalNum, ::spaceContact::SICESpaceContactInfoSeq& contactList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__SpaceGroupInterface__GetSpaceContactList_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::SpaceGroupInterface* __servant = dynamic_cast< ::AliIMDBBase::SpaceGroupInterface*>(__direct.servant().get());
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
                __ret = __servant->GetSpaceContactList(userId, pageno, pageSize, totalNum, contactList, __current);
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
IceDelegateD::AliIMDBBase::SpaceGroupInterface::GetNotSpaceContactList(const ::std::string& userId, ::Ice::Int pageno, ::Ice::Int pageSize, ::Ice::Int& totalNum, ::spaceContact::SICESpaceContactInfoSeq& contactList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__SpaceGroupInterface__GetNotSpaceContactList_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::SpaceGroupInterface* __servant = dynamic_cast< ::AliIMDBBase::SpaceGroupInterface*>(__direct.servant().get());
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
                __ret = __servant->GetNotSpaceContactList(userId, pageno, pageSize, totalNum, contactList, __current);
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
IceDelegateD::AliIMDBBase::SpaceGroupInterface::GetContactListCount(const ::std::string& userId, ::Ice::Int& recordNum, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__SpaceGroupInterface__GetContactListCount_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::SpaceGroupInterface* __servant = dynamic_cast< ::AliIMDBBase::SpaceGroupInterface*>(__direct.servant().get());
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
                __ret = __servant->GetContactListCount(userId, recordNum, __current);
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
IceDelegateD::AliIMDBBase::SpaceGroupInterface::GetSpaceContactListCount(const ::std::string& userId, ::Ice::Int& recordNum, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__SpaceGroupInterface__GetSpaceContactListCount_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::SpaceGroupInterface* __servant = dynamic_cast< ::AliIMDBBase::SpaceGroupInterface*>(__direct.servant().get());
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
                __ret = __servant->GetSpaceContactListCount(userId, recordNum, __current);
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
IceDelegateD::AliIMDBBase::SpaceGroupInterface::GetNotSpaceContactListCount(const ::std::string& userId, ::Ice::Int& recordNum, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__SpaceGroupInterface__GetNotSpaceContactListCount_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::SpaceGroupInterface* __servant = dynamic_cast< ::AliIMDBBase::SpaceGroupInterface*>(__direct.servant().get());
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
                __ret = __servant->GetNotSpaceContactListCount(userId, recordNum, __current);
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
IceDelegateD::AliIMDBBase::SpaceGroupInterface::AddSpaceContact(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int groupId, ::Ice::Int cntgroupId, const ::std::string& userNickname, const ::std::string& contactNickname, ::Ice::Int& friendnum, ::Ice::Int& blacklist, ::Ice::Int& verify, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__SpaceGroupInterface__AddSpaceContact_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::SpaceGroupInterface* __servant = dynamic_cast< ::AliIMDBBase::SpaceGroupInterface*>(__direct.servant().get());
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
                __ret = __servant->AddSpaceContact(userId, contactId, groupId, cntgroupId, userNickname, contactNickname, friendnum, blacklist, verify, __current);
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
IceDelegateD::AliIMDBBase::SpaceGroupInterface::DeleteSpaceContact(const ::std::string& userId, const ::std::string& contactId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__SpaceGroupInterface__DeleteSpaceContact_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::SpaceGroupInterface* __servant = dynamic_cast< ::AliIMDBBase::SpaceGroupInterface*>(__direct.servant().get());
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
                __ret = __servant->DeleteSpaceContact(userId, contactId, __current);
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
IceDelegateD::AliIMDBBase::SpaceGroupInterface::GetSpaceGroupList(const ::std::string& userId, ::AliIMDBBase::SICEGroupInfoSeq& groupList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__SpaceGroupInterface__GetSpaceGroupList_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::SpaceGroupInterface* __servant = dynamic_cast< ::AliIMDBBase::SpaceGroupInterface*>(__direct.servant().get());
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
                __ret = __servant->GetSpaceGroupList(userId, groupList, __current);
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
IceDelegateD::AliIMDBBase::SpaceGroupInterface::GetSpaceGroupListEx(const ::std::string& userId, ::spaceContact::SICESpaceGroupInfoSeq& groupList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__SpaceGroupInterface__GetSpaceGroupListEx_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::SpaceGroupInterface* __servant = dynamic_cast< ::AliIMDBBase::SpaceGroupInterface*>(__direct.servant().get());
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
                __ret = __servant->GetSpaceGroupListEx(userId, groupList, __current);
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
IceDelegateD::AliIMDBBase::SpaceGroupInterface::AddSpaceGroup(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int& groupId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__SpaceGroupInterface__AddSpaceGroup_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::SpaceGroupInterface* __servant = dynamic_cast< ::AliIMDBBase::SpaceGroupInterface*>(__direct.servant().get());
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
                __ret = __servant->AddSpaceGroup(userId, groupName, groupId, __current);
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
IceDelegateD::AliIMDBBase::SpaceGroupInterface::UpdateSpaceGroup(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int groupId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__SpaceGroupInterface__UpdateSpaceGroup_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::SpaceGroupInterface* __servant = dynamic_cast< ::AliIMDBBase::SpaceGroupInterface*>(__direct.servant().get());
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
                __ret = __servant->UpdateSpaceGroup(userId, groupName, groupId, __current);
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
IceDelegateD::AliIMDBBase::SpaceGroupInterface::UpdateContactSpaceGroup(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int srcGroupId, ::Ice::Int dstGroupId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__SpaceGroupInterface__UpdateContactSpaceGroup_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::SpaceGroupInterface* __servant = dynamic_cast< ::AliIMDBBase::SpaceGroupInterface*>(__direct.servant().get());
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
                __ret = __servant->UpdateContactSpaceGroup(userId, contactId, srcGroupId, dstGroupId, __current);
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
IceDelegateD::AliIMDBBase::SpaceGroupInterface::RemoveSpaceGroup(const ::std::string& userId, ::Ice::Int groupId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__SpaceGroupInterface__RemoveSpaceGroup_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::SpaceGroupInterface* __servant = dynamic_cast< ::AliIMDBBase::SpaceGroupInterface*>(__direct.servant().get());
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
                __ret = __servant->RemoveSpaceGroup(userId, groupId, __current);
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
IceDelegateD::AliIMDBBase::SpaceGroupInterface::GetSpaceGroupContactList(const ::std::string& userId, ::Ice::Int groupId, ::spaceContact::SICESpaceContactInfoSeq& contactList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__SpaceGroupInterface__GetSpaceGroupContactList_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::SpaceGroupInterface* __servant = dynamic_cast< ::AliIMDBBase::SpaceGroupInterface*>(__direct.servant().get());
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
                __ret = __servant->GetSpaceGroupContactList(userId, groupId, contactList, __current);
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
IceDelegateD::AliIMDBBase::SpaceGroupInterface::UpdateContactNickName(const ::std::string& userId, const ::std::string& contactid, const ::std::string& nickname, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__SpaceGroupInterface__UpdateContactNickName_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::SpaceGroupInterface* __servant = dynamic_cast< ::AliIMDBBase::SpaceGroupInterface*>(__direct.servant().get());
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
                __ret = __servant->UpdateContactNickName(userId, contactid, nickname, __current);
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
IceDelegateD::AliIMDBBase::SpaceGroupInterface::checkContact(const ::std::string& uid, const ::Ice::StringSeq& contactId, ::Ice::IntSeq& result, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__SpaceGroupInterface__checkContact_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::SpaceGroupInterface* __servant = dynamic_cast< ::AliIMDBBase::SpaceGroupInterface*>(__direct.servant().get());
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
                __ret = __servant->checkContact(uid, contactId, result, __current);
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
IceDelegateD::AliIMDBBase::SpaceGroupInterface::checkSpaceContact(const ::std::string& uid, const ::Ice::StringSeq& contactId, ::Ice::IntSeq& result, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__SpaceGroupInterface__checkSpaceContact_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::SpaceGroupInterface* __servant = dynamic_cast< ::AliIMDBBase::SpaceGroupInterface*>(__direct.servant().get());
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
                __ret = __servant->checkSpaceContact(uid, contactId, result, __current);
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
IceDelegateD::AliIMDBBase::SpaceGroupInterface::checkCanAddContact(const ::std::string& uid, const ::std::string& contactId, ::Ice::Int checkType, ::Ice::Int& errorCode, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliIMDBBase__SpaceGroupInterface__checkCanAddContact_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliIMDBBase::SpaceGroupInterface* __servant = dynamic_cast< ::AliIMDBBase::SpaceGroupInterface*>(__direct.servant().get());
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
                __ret = __servant->checkCanAddContact(uid, contactId, checkType, errorCode, __current);
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
AliIMDBBase::SpaceGroupInterface::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __AliIMDBBase__SpaceGroupInterface_ids[2] =
{
    "::AliIMDBBase::SpaceGroupInterface",
    "::Ice::Object"
};

bool
AliIMDBBase::SpaceGroupInterface::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__AliIMDBBase__SpaceGroupInterface_ids, __AliIMDBBase__SpaceGroupInterface_ids + 2, _s);
}

::std::vector< ::std::string>
AliIMDBBase::SpaceGroupInterface::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__AliIMDBBase__SpaceGroupInterface_ids[0], &__AliIMDBBase__SpaceGroupInterface_ids[2]);
}

const ::std::string&
AliIMDBBase::SpaceGroupInterface::ice_id(const ::Ice::Current&) const
{
    return __AliIMDBBase__SpaceGroupInterface_ids[0];
}

const ::std::string&
AliIMDBBase::SpaceGroupInterface::ice_staticId()
{
    return __AliIMDBBase__SpaceGroupInterface_ids[0];
}

::IceInternal::DispatchStatus
AliIMDBBase::SpaceGroupInterface::___GetContactList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::Ice::Int pageno;
    ::Ice::Int pageSize;
    __is->read(userId);
    __is->read(pageno);
    __is->read(pageSize);
    ::Ice::Int totalNum;
    ::spaceContact::SICESpaceContactInfoSeq contactList;
    ::Ice::Int __ret = GetContactList(userId, pageno, pageSize, totalNum, contactList, __current);
    __os->write(totalNum);
    if(contactList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::spaceContact::__write(__os, &contactList[0], &contactList[0] + contactList.size(), ::spaceContact::__U__SICESpaceContactInfoSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::SpaceGroupInterface::___GetSpaceContactList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::Ice::Int pageno;
    ::Ice::Int pageSize;
    __is->read(userId);
    __is->read(pageno);
    __is->read(pageSize);
    ::Ice::Int totalNum;
    ::spaceContact::SICESpaceContactInfoSeq contactList;
    ::Ice::Int __ret = GetSpaceContactList(userId, pageno, pageSize, totalNum, contactList, __current);
    __os->write(totalNum);
    if(contactList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::spaceContact::__write(__os, &contactList[0], &contactList[0] + contactList.size(), ::spaceContact::__U__SICESpaceContactInfoSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::SpaceGroupInterface::___GetNotSpaceContactList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::Ice::Int pageno;
    ::Ice::Int pageSize;
    __is->read(userId);
    __is->read(pageno);
    __is->read(pageSize);
    ::Ice::Int totalNum;
    ::spaceContact::SICESpaceContactInfoSeq contactList;
    ::Ice::Int __ret = GetNotSpaceContactList(userId, pageno, pageSize, totalNum, contactList, __current);
    __os->write(totalNum);
    if(contactList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::spaceContact::__write(__os, &contactList[0], &contactList[0] + contactList.size(), ::spaceContact::__U__SICESpaceContactInfoSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::SpaceGroupInterface::___GetContactListCount(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::Ice::Int recordNum;
    ::Ice::Int __ret = GetContactListCount(userId, recordNum, __current);
    __os->write(recordNum);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::SpaceGroupInterface::___GetSpaceContactListCount(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::Ice::Int recordNum;
    ::Ice::Int __ret = GetSpaceContactListCount(userId, recordNum, __current);
    __os->write(recordNum);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::SpaceGroupInterface::___GetNotSpaceContactListCount(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::Ice::Int recordNum;
    ::Ice::Int __ret = GetNotSpaceContactListCount(userId, recordNum, __current);
    __os->write(recordNum);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::SpaceGroupInterface::___AddSpaceContact(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::std::string contactId;
    ::Ice::Int groupId;
    ::Ice::Int cntgroupId;
    ::std::string userNickname;
    ::std::string contactNickname;
    __is->read(userId);
    __is->read(contactId);
    __is->read(groupId);
    __is->read(cntgroupId);
    __is->read(userNickname);
    __is->read(contactNickname);
    ::Ice::Int friendnum;
    ::Ice::Int blacklist;
    ::Ice::Int verify;
    ::Ice::Int __ret = AddSpaceContact(userId, contactId, groupId, cntgroupId, userNickname, contactNickname, friendnum, blacklist, verify, __current);
    __os->write(friendnum);
    __os->write(blacklist);
    __os->write(verify);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::SpaceGroupInterface::___DeleteSpaceContact(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::std::string contactId;
    __is->read(userId);
    __is->read(contactId);
    ::Ice::Int __ret = DeleteSpaceContact(userId, contactId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::SpaceGroupInterface::___GetSpaceGroupList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::SICEGroupInfoSeq groupList;
    ::Ice::Int __ret = GetSpaceGroupList(userId, groupList, __current);
    if(groupList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::AliIMDBBase::__write(__os, &groupList[0], &groupList[0] + groupList.size(), ::AliIMDBBase::__U__SICEGroupInfoSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::SpaceGroupInterface::___GetSpaceGroupListEx(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    __is->read(userId);
    ::spaceContact::SICESpaceGroupInfoSeq groupList;
    ::Ice::Int __ret = GetSpaceGroupListEx(userId, groupList, __current);
    if(groupList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::spaceContact::__write(__os, &groupList[0], &groupList[0] + groupList.size(), ::spaceContact::__U__SICESpaceGroupInfoSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::SpaceGroupInterface::___AddSpaceGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::std::string groupName;
    __is->read(userId);
    __is->read(groupName);
    ::Ice::Int groupId;
    ::Ice::Int __ret = AddSpaceGroup(userId, groupName, groupId, __current);
    __os->write(groupId);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::SpaceGroupInterface::___UpdateSpaceGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
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
    ::Ice::Int __ret = UpdateSpaceGroup(userId, groupName, groupId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::SpaceGroupInterface::___UpdateContactSpaceGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
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
    ::Ice::Int __ret = UpdateContactSpaceGroup(userId, contactId, srcGroupId, dstGroupId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::SpaceGroupInterface::___RemoveSpaceGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::Ice::Int groupId;
    __is->read(userId);
    __is->read(groupId);
    ::Ice::Int __ret = RemoveSpaceGroup(userId, groupId, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::SpaceGroupInterface::___GetSpaceGroupContactList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::Ice::Int groupId;
    __is->read(userId);
    __is->read(groupId);
    ::spaceContact::SICESpaceContactInfoSeq contactList;
    ::Ice::Int __ret = GetSpaceGroupContactList(userId, groupId, contactList, __current);
    if(contactList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::spaceContact::__write(__os, &contactList[0], &contactList[0] + contactList.size(), ::spaceContact::__U__SICESpaceContactInfoSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::SpaceGroupInterface::___UpdateContactNickName(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string userId;
    ::std::string contactid;
    ::std::string nickname;
    __is->read(userId);
    __is->read(contactid);
    __is->read(nickname);
    ::Ice::Int __ret = UpdateContactNickName(userId, contactid, nickname, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::SpaceGroupInterface::___checkContact(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::Ice::StringSeq contactId;
    __is->read(uid);
    __is->read(contactId);
    ::Ice::IntSeq result;
    ::Ice::Int __ret = checkContact(uid, contactId, result, __current);
    if(result.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&result[0], &result[0] + result.size());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::SpaceGroupInterface::___checkSpaceContact(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::Ice::StringSeq contactId;
    __is->read(uid);
    __is->read(contactId);
    ::Ice::IntSeq result;
    ::Ice::Int __ret = checkSpaceContact(uid, contactId, result, __current);
    if(result.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&result[0], &result[0] + result.size());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliIMDBBase::SpaceGroupInterface::___checkCanAddContact(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string contactId;
    ::Ice::Int checkType;
    __is->read(uid);
    __is->read(contactId);
    __is->read(checkType);
    ::Ice::Int errorCode;
    ::Ice::Int __ret = checkCanAddContact(uid, contactId, checkType, errorCode, __current);
    __os->write(errorCode);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __AliIMDBBase__SpaceGroupInterface_all[] =
{
    "AddSpaceContact",
    "AddSpaceGroup",
    "DeleteSpaceContact",
    "GetContactList",
    "GetContactListCount",
    "GetNotSpaceContactList",
    "GetNotSpaceContactListCount",
    "GetSpaceContactList",
    "GetSpaceContactListCount",
    "GetSpaceGroupContactList",
    "GetSpaceGroupList",
    "GetSpaceGroupListEx",
    "RemoveSpaceGroup",
    "UpdateContactNickName",
    "UpdateContactSpaceGroup",
    "UpdateSpaceGroup",
    "checkCanAddContact",
    "checkContact",
    "checkSpaceContact",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::IceInternal::DispatchStatus
AliIMDBBase::SpaceGroupInterface::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__AliIMDBBase__SpaceGroupInterface_all, __AliIMDBBase__SpaceGroupInterface_all + 23, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __AliIMDBBase__SpaceGroupInterface_all)
    {
        case 0:
        {
            return ___AddSpaceContact(in, current);
        }
        case 1:
        {
            return ___AddSpaceGroup(in, current);
        }
        case 2:
        {
            return ___DeleteSpaceContact(in, current);
        }
        case 3:
        {
            return ___GetContactList(in, current);
        }
        case 4:
        {
            return ___GetContactListCount(in, current);
        }
        case 5:
        {
            return ___GetNotSpaceContactList(in, current);
        }
        case 6:
        {
            return ___GetNotSpaceContactListCount(in, current);
        }
        case 7:
        {
            return ___GetSpaceContactList(in, current);
        }
        case 8:
        {
            return ___GetSpaceContactListCount(in, current);
        }
        case 9:
        {
            return ___GetSpaceGroupContactList(in, current);
        }
        case 10:
        {
            return ___GetSpaceGroupList(in, current);
        }
        case 11:
        {
            return ___GetSpaceGroupListEx(in, current);
        }
        case 12:
        {
            return ___RemoveSpaceGroup(in, current);
        }
        case 13:
        {
            return ___UpdateContactNickName(in, current);
        }
        case 14:
        {
            return ___UpdateContactSpaceGroup(in, current);
        }
        case 15:
        {
            return ___UpdateSpaceGroup(in, current);
        }
        case 16:
        {
            return ___checkCanAddContact(in, current);
        }
        case 17:
        {
            return ___checkContact(in, current);
        }
        case 18:
        {
            return ___checkSpaceContact(in, current);
        }
        case 19:
        {
            return ___ice_id(in, current);
        }
        case 20:
        {
            return ___ice_ids(in, current);
        }
        case 21:
        {
            return ___ice_isA(in, current);
        }
        case 22:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
AliIMDBBase::SpaceGroupInterface::__write(::IceInternal::BasicStream* __os) const
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
AliIMDBBase::SpaceGroupInterface::__read(::IceInternal::BasicStream* __is, bool __rid)
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
AliIMDBBase::SpaceGroupInterface::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIMDBBase::SpaceGroupInterface was not generated with stream support";
    throw ex;
}

void
AliIMDBBase::SpaceGroupInterface::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIMDBBase::SpaceGroupInterface was not generated with stream support";
    throw ex;
}

void 
AliIMDBBase::__patch__SpaceGroupInterfacePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::AliIMDBBase::SpaceGroupInterfacePtr* p = static_cast< ::AliIMDBBase::SpaceGroupInterfacePtr*>(__addr);
    assert(p);
    *p = ::AliIMDBBase::SpaceGroupInterfacePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::AliIMDBBase::SpaceGroupInterface::ice_staticId();
        throw e;
    }
}

bool
AliIMDBBase::operator==(const ::AliIMDBBase::SpaceGroupInterface& l, const ::AliIMDBBase::SpaceGroupInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
AliIMDBBase::operator!=(const ::AliIMDBBase::SpaceGroupInterface& l, const ::AliIMDBBase::SpaceGroupInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
AliIMDBBase::operator<(const ::AliIMDBBase::SpaceGroupInterface& l, const ::AliIMDBBase::SpaceGroupInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
AliIMDBBase::operator<=(const ::AliIMDBBase::SpaceGroupInterface& l, const ::AliIMDBBase::SpaceGroupInterface& r)
{
    return l < r || l == r;
}

bool
AliIMDBBase::operator>(const ::AliIMDBBase::SpaceGroupInterface& l, const ::AliIMDBBase::SpaceGroupInterface& r)
{
    return !(l < r) && !(l == r);
}

bool
AliIMDBBase::operator>=(const ::AliIMDBBase::SpaceGroupInterface& l, const ::AliIMDBBase::SpaceGroupInterface& r)
{
    return !(l < r);
}
