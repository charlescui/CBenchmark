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

#ifndef __spacecontact_h__
#define __spacecontact_h__

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
#include <dbdatadefine.h>
#include <dbspacedatadefine.h>
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

namespace AliIMDBBase
{

class SpaceGroupInterface;
bool operator==(const SpaceGroupInterface&, const SpaceGroupInterface&);
bool operator!=(const SpaceGroupInterface&, const SpaceGroupInterface&);
bool operator<(const SpaceGroupInterface&, const SpaceGroupInterface&);
bool operator<=(const SpaceGroupInterface&, const SpaceGroupInterface&);
bool operator>(const SpaceGroupInterface&, const SpaceGroupInterface&);
bool operator>=(const SpaceGroupInterface&, const SpaceGroupInterface&);

}

}

namespace AliIMDBBase
{

class SpaceGroupInterface;
bool operator==(const SpaceGroupInterface&, const SpaceGroupInterface&);
bool operator!=(const SpaceGroupInterface&, const SpaceGroupInterface&);
bool operator<(const SpaceGroupInterface&, const SpaceGroupInterface&);
bool operator<=(const SpaceGroupInterface&, const SpaceGroupInterface&);
bool operator>(const SpaceGroupInterface&, const SpaceGroupInterface&);
bool operator>=(const SpaceGroupInterface&, const SpaceGroupInterface&);

}

namespace IceInternal
{

void incRef(::AliIMDBBase::SpaceGroupInterface*);
void decRef(::AliIMDBBase::SpaceGroupInterface*);

void incRef(::IceProxy::AliIMDBBase::SpaceGroupInterface*);
void decRef(::IceProxy::AliIMDBBase::SpaceGroupInterface*);

}

namespace AliIMDBBase
{

typedef ::IceInternal::Handle< ::AliIMDBBase::SpaceGroupInterface> SpaceGroupInterfacePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::AliIMDBBase::SpaceGroupInterface> SpaceGroupInterfacePrx;

void __write(::IceInternal::BasicStream*, const SpaceGroupInterfacePrx&);
void __read(::IceInternal::BasicStream*, SpaceGroupInterfacePrx&);
void __write(::IceInternal::BasicStream*, const SpaceGroupInterfacePtr&);
void __patch__SpaceGroupInterfacePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const SpaceGroupInterfacePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const SpaceGroupInterfacePtr&);
void __decRefUnsafe(const SpaceGroupInterfacePtr&);
void __clearHandleUnsafe(SpaceGroupInterfacePtr&);

}

namespace AliIMDBBase
{

typedef ::std::map< ::std::string, ::std::string> StrKVMap;

class __U__StrKVMap { };
void __write(::IceInternal::BasicStream*, const StrKVMap&, __U__StrKVMap);
void __read(::IceInternal::BasicStream*, StrKVMap&, __U__StrKVMap);

}

namespace IceProxy
{

namespace AliIMDBBase
{

class SpaceGroupInterface : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int GetContactList(const ::std::string& userId, ::Ice::Int pageno, ::Ice::Int pageSize, ::Ice::Int& totalNum, ::spaceContact::SICESpaceContactInfoSeq& contactList)
    {
        return GetContactList(userId, pageno, pageSize, totalNum, contactList, 0);
    }
    ::Ice::Int GetContactList(const ::std::string& userId, ::Ice::Int pageno, ::Ice::Int pageSize, ::Ice::Int& totalNum, ::spaceContact::SICESpaceContactInfoSeq& contactList, const ::Ice::Context& __ctx)
    {
        return GetContactList(userId, pageno, pageSize, totalNum, contactList, &__ctx);
    }
    
private:

    ::Ice::Int GetContactList(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::spaceContact::SICESpaceContactInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetSpaceContactList(const ::std::string& userId, ::Ice::Int pageno, ::Ice::Int pageSize, ::Ice::Int& totalNum, ::spaceContact::SICESpaceContactInfoSeq& contactList)
    {
        return GetSpaceContactList(userId, pageno, pageSize, totalNum, contactList, 0);
    }
    ::Ice::Int GetSpaceContactList(const ::std::string& userId, ::Ice::Int pageno, ::Ice::Int pageSize, ::Ice::Int& totalNum, ::spaceContact::SICESpaceContactInfoSeq& contactList, const ::Ice::Context& __ctx)
    {
        return GetSpaceContactList(userId, pageno, pageSize, totalNum, contactList, &__ctx);
    }
    
private:

    ::Ice::Int GetSpaceContactList(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::spaceContact::SICESpaceContactInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetNotSpaceContactList(const ::std::string& userId, ::Ice::Int pageno, ::Ice::Int pageSize, ::Ice::Int& totalNum, ::spaceContact::SICESpaceContactInfoSeq& contactList)
    {
        return GetNotSpaceContactList(userId, pageno, pageSize, totalNum, contactList, 0);
    }
    ::Ice::Int GetNotSpaceContactList(const ::std::string& userId, ::Ice::Int pageno, ::Ice::Int pageSize, ::Ice::Int& totalNum, ::spaceContact::SICESpaceContactInfoSeq& contactList, const ::Ice::Context& __ctx)
    {
        return GetNotSpaceContactList(userId, pageno, pageSize, totalNum, contactList, &__ctx);
    }
    
private:

    ::Ice::Int GetNotSpaceContactList(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::spaceContact::SICESpaceContactInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetContactListCount(const ::std::string& userId, ::Ice::Int& recordNum)
    {
        return GetContactListCount(userId, recordNum, 0);
    }
    ::Ice::Int GetContactListCount(const ::std::string& userId, ::Ice::Int& recordNum, const ::Ice::Context& __ctx)
    {
        return GetContactListCount(userId, recordNum, &__ctx);
    }
    
private:

    ::Ice::Int GetContactListCount(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetSpaceContactListCount(const ::std::string& userId, ::Ice::Int& recordNum)
    {
        return GetSpaceContactListCount(userId, recordNum, 0);
    }
    ::Ice::Int GetSpaceContactListCount(const ::std::string& userId, ::Ice::Int& recordNum, const ::Ice::Context& __ctx)
    {
        return GetSpaceContactListCount(userId, recordNum, &__ctx);
    }
    
private:

    ::Ice::Int GetSpaceContactListCount(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetNotSpaceContactListCount(const ::std::string& userId, ::Ice::Int& recordNum)
    {
        return GetNotSpaceContactListCount(userId, recordNum, 0);
    }
    ::Ice::Int GetNotSpaceContactListCount(const ::std::string& userId, ::Ice::Int& recordNum, const ::Ice::Context& __ctx)
    {
        return GetNotSpaceContactListCount(userId, recordNum, &__ctx);
    }
    
private:

    ::Ice::Int GetNotSpaceContactListCount(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddSpaceContact(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int groupId, ::Ice::Int cntgroupId, const ::std::string& userNickname, const ::std::string& contactNickname, ::Ice::Int& friendnum, ::Ice::Int& blacklist, ::Ice::Int& verify)
    {
        return AddSpaceContact(userId, contactId, groupId, cntgroupId, userNickname, contactNickname, friendnum, blacklist, verify, 0);
    }
    ::Ice::Int AddSpaceContact(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int groupId, ::Ice::Int cntgroupId, const ::std::string& userNickname, const ::std::string& contactNickname, ::Ice::Int& friendnum, ::Ice::Int& blacklist, ::Ice::Int& verify, const ::Ice::Context& __ctx)
    {
        return AddSpaceContact(userId, contactId, groupId, cntgroupId, userNickname, contactNickname, friendnum, blacklist, verify, &__ctx);
    }
    
private:

    ::Ice::Int AddSpaceContact(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int DeleteSpaceContact(const ::std::string& userId, const ::std::string& contactId)
    {
        return DeleteSpaceContact(userId, contactId, 0);
    }
    ::Ice::Int DeleteSpaceContact(const ::std::string& userId, const ::std::string& contactId, const ::Ice::Context& __ctx)
    {
        return DeleteSpaceContact(userId, contactId, &__ctx);
    }
    
private:

    ::Ice::Int DeleteSpaceContact(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetSpaceGroupList(const ::std::string& userId, ::AliIMDBBase::SICEGroupInfoSeq& groupList)
    {
        return GetSpaceGroupList(userId, groupList, 0);
    }
    ::Ice::Int GetSpaceGroupList(const ::std::string& userId, ::AliIMDBBase::SICEGroupInfoSeq& groupList, const ::Ice::Context& __ctx)
    {
        return GetSpaceGroupList(userId, groupList, &__ctx);
    }
    
private:

    ::Ice::Int GetSpaceGroupList(const ::std::string&, ::AliIMDBBase::SICEGroupInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetSpaceGroupListEx(const ::std::string& userId, ::spaceContact::SICESpaceGroupInfoSeq& groupList)
    {
        return GetSpaceGroupListEx(userId, groupList, 0);
    }
    ::Ice::Int GetSpaceGroupListEx(const ::std::string& userId, ::spaceContact::SICESpaceGroupInfoSeq& groupList, const ::Ice::Context& __ctx)
    {
        return GetSpaceGroupListEx(userId, groupList, &__ctx);
    }
    
private:

    ::Ice::Int GetSpaceGroupListEx(const ::std::string&, ::spaceContact::SICESpaceGroupInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddSpaceGroup(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int& groupId)
    {
        return AddSpaceGroup(userId, groupName, groupId, 0);
    }
    ::Ice::Int AddSpaceGroup(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int& groupId, const ::Ice::Context& __ctx)
    {
        return AddSpaceGroup(userId, groupName, groupId, &__ctx);
    }
    
private:

    ::Ice::Int AddSpaceGroup(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateSpaceGroup(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int groupId)
    {
        return UpdateSpaceGroup(userId, groupName, groupId, 0);
    }
    ::Ice::Int UpdateSpaceGroup(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int groupId, const ::Ice::Context& __ctx)
    {
        return UpdateSpaceGroup(userId, groupName, groupId, &__ctx);
    }
    
private:

    ::Ice::Int UpdateSpaceGroup(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateContactSpaceGroup(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int srcGroupId, ::Ice::Int dstGroupId)
    {
        return UpdateContactSpaceGroup(userId, contactId, srcGroupId, dstGroupId, 0);
    }
    ::Ice::Int UpdateContactSpaceGroup(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int srcGroupId, ::Ice::Int dstGroupId, const ::Ice::Context& __ctx)
    {
        return UpdateContactSpaceGroup(userId, contactId, srcGroupId, dstGroupId, &__ctx);
    }
    
private:

    ::Ice::Int UpdateContactSpaceGroup(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int RemoveSpaceGroup(const ::std::string& userId, ::Ice::Int groupId)
    {
        return RemoveSpaceGroup(userId, groupId, 0);
    }
    ::Ice::Int RemoveSpaceGroup(const ::std::string& userId, ::Ice::Int groupId, const ::Ice::Context& __ctx)
    {
        return RemoveSpaceGroup(userId, groupId, &__ctx);
    }
    
private:

    ::Ice::Int RemoveSpaceGroup(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int GetSpaceGroupContactList(const ::std::string& userId, ::Ice::Int groupId, ::spaceContact::SICESpaceContactInfoSeq& contactList)
    {
        return GetSpaceGroupContactList(userId, groupId, contactList, 0);
    }
    ::Ice::Int GetSpaceGroupContactList(const ::std::string& userId, ::Ice::Int groupId, ::spaceContact::SICESpaceContactInfoSeq& contactList, const ::Ice::Context& __ctx)
    {
        return GetSpaceGroupContactList(userId, groupId, contactList, &__ctx);
    }
    
private:

    ::Ice::Int GetSpaceGroupContactList(const ::std::string&, ::Ice::Int, ::spaceContact::SICESpaceContactInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateContactNickName(const ::std::string& userId, const ::std::string& contactid, const ::std::string& nickname)
    {
        return UpdateContactNickName(userId, contactid, nickname, 0);
    }
    ::Ice::Int UpdateContactNickName(const ::std::string& userId, const ::std::string& contactid, const ::std::string& nickname, const ::Ice::Context& __ctx)
    {
        return UpdateContactNickName(userId, contactid, nickname, &__ctx);
    }
    
private:

    ::Ice::Int UpdateContactNickName(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int checkContact(const ::std::string& uid, const ::Ice::StringSeq& contactId, ::Ice::IntSeq& result)
    {
        return checkContact(uid, contactId, result, 0);
    }
    ::Ice::Int checkContact(const ::std::string& uid, const ::Ice::StringSeq& contactId, ::Ice::IntSeq& result, const ::Ice::Context& __ctx)
    {
        return checkContact(uid, contactId, result, &__ctx);
    }
    
private:

    ::Ice::Int checkContact(const ::std::string&, const ::Ice::StringSeq&, ::Ice::IntSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int checkSpaceContact(const ::std::string& uid, const ::Ice::StringSeq& contactId, ::Ice::IntSeq& result)
    {
        return checkSpaceContact(uid, contactId, result, 0);
    }
    ::Ice::Int checkSpaceContact(const ::std::string& uid, const ::Ice::StringSeq& contactId, ::Ice::IntSeq& result, const ::Ice::Context& __ctx)
    {
        return checkSpaceContact(uid, contactId, result, &__ctx);
    }
    
private:

    ::Ice::Int checkSpaceContact(const ::std::string&, const ::Ice::StringSeq&, ::Ice::IntSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int checkCanAddContact(const ::std::string& uid, const ::std::string& contactId, ::Ice::Int checkType, ::Ice::Int& errorCode)
    {
        return checkCanAddContact(uid, contactId, checkType, errorCode, 0);
    }
    ::Ice::Int checkCanAddContact(const ::std::string& uid, const ::std::string& contactId, ::Ice::Int checkType, ::Ice::Int& errorCode, const ::Ice::Context& __ctx)
    {
        return checkCanAddContact(uid, contactId, checkType, errorCode, &__ctx);
    }
    
private:

    ::Ice::Int checkCanAddContact(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);
    
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

namespace AliIMDBBase
{

class SpaceGroupInterface : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int GetContactList(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::spaceContact::SICESpaceContactInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetSpaceContactList(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::spaceContact::SICESpaceContactInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetNotSpaceContactList(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::spaceContact::SICESpaceContactInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetContactListCount(const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetSpaceContactListCount(const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetNotSpaceContactListCount(const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddSpaceContact(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DeleteSpaceContact(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetSpaceGroupList(const ::std::string&, ::AliIMDBBase::SICEGroupInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetSpaceGroupListEx(const ::std::string&, ::spaceContact::SICESpaceGroupInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddSpaceGroup(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateSpaceGroup(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateContactSpaceGroup(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int RemoveSpaceGroup(const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetSpaceGroupContactList(const ::std::string&, ::Ice::Int, ::spaceContact::SICESpaceContactInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateContactNickName(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int checkContact(const ::std::string&, const ::Ice::StringSeq&, ::Ice::IntSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int checkSpaceContact(const ::std::string&, const ::Ice::StringSeq&, ::Ice::IntSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int checkCanAddContact(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace AliIMDBBase
{

class SpaceGroupInterface : virtual public ::IceDelegate::AliIMDBBase::SpaceGroupInterface,
                            virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int GetContactList(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::spaceContact::SICESpaceContactInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetSpaceContactList(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::spaceContact::SICESpaceContactInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetNotSpaceContactList(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::spaceContact::SICESpaceContactInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetContactListCount(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetSpaceContactListCount(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetNotSpaceContactListCount(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int AddSpaceContact(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DeleteSpaceContact(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetSpaceGroupList(const ::std::string&, ::AliIMDBBase::SICEGroupInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetSpaceGroupListEx(const ::std::string&, ::spaceContact::SICESpaceGroupInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int AddSpaceGroup(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateSpaceGroup(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int UpdateContactSpaceGroup(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int RemoveSpaceGroup(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int GetSpaceGroupContactList(const ::std::string&, ::Ice::Int, ::spaceContact::SICESpaceContactInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateContactNickName(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int checkContact(const ::std::string&, const ::Ice::StringSeq&, ::Ice::IntSeq&, const ::Ice::Context*);

    virtual ::Ice::Int checkSpaceContact(const ::std::string&, const ::Ice::StringSeq&, ::Ice::IntSeq&, const ::Ice::Context*);

    virtual ::Ice::Int checkCanAddContact(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace AliIMDBBase
{

class SpaceGroupInterface : virtual public ::IceDelegate::AliIMDBBase::SpaceGroupInterface,
                            virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int GetContactList(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::spaceContact::SICESpaceContactInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetSpaceContactList(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::spaceContact::SICESpaceContactInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetNotSpaceContactList(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::spaceContact::SICESpaceContactInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetContactListCount(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetSpaceContactListCount(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetNotSpaceContactListCount(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int AddSpaceContact(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DeleteSpaceContact(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetSpaceGroupList(const ::std::string&, ::AliIMDBBase::SICEGroupInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetSpaceGroupListEx(const ::std::string&, ::spaceContact::SICESpaceGroupInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int AddSpaceGroup(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateSpaceGroup(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int UpdateContactSpaceGroup(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int RemoveSpaceGroup(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int GetSpaceGroupContactList(const ::std::string&, ::Ice::Int, ::spaceContact::SICESpaceContactInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateContactNickName(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int checkContact(const ::std::string&, const ::Ice::StringSeq&, ::Ice::IntSeq&, const ::Ice::Context*);

    virtual ::Ice::Int checkSpaceContact(const ::std::string&, const ::Ice::StringSeq&, ::Ice::IntSeq&, const ::Ice::Context*);

    virtual ::Ice::Int checkCanAddContact(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);
};

}

}

namespace AliIMDBBase
{

class SpaceGroupInterface : virtual public ::Ice::Object
{
public:

    typedef SpaceGroupInterfacePrx ProxyType;
    typedef SpaceGroupInterfacePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int GetContactList(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::spaceContact::SICESpaceContactInfoSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetContactList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetSpaceContactList(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::spaceContact::SICESpaceContactInfoSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetSpaceContactList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetNotSpaceContactList(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::spaceContact::SICESpaceContactInfoSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetNotSpaceContactList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetContactListCount(const ::std::string&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetContactListCount(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetSpaceContactListCount(const ::std::string&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetSpaceContactListCount(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetNotSpaceContactListCount(const ::std::string&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetNotSpaceContactListCount(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int AddSpaceContact(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddSpaceContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DeleteSpaceContact(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DeleteSpaceContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetSpaceGroupList(const ::std::string&, ::AliIMDBBase::SICEGroupInfoSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetSpaceGroupList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetSpaceGroupListEx(const ::std::string&, ::spaceContact::SICESpaceGroupInfoSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetSpaceGroupListEx(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int AddSpaceGroup(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddSpaceGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int UpdateSpaceGroup(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateSpaceGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int UpdateContactSpaceGroup(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateContactSpaceGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int RemoveSpaceGroup(const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___RemoveSpaceGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetSpaceGroupContactList(const ::std::string&, ::Ice::Int, ::spaceContact::SICESpaceContactInfoSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetSpaceGroupContactList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int UpdateContactNickName(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateContactNickName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int checkContact(const ::std::string&, const ::Ice::StringSeq&, ::Ice::IntSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___checkContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int checkSpaceContact(const ::std::string&, const ::Ice::StringSeq&, ::Ice::IntSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___checkSpaceContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int checkCanAddContact(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___checkCanAddContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__SpaceGroupInterfacePtr(void*, ::Ice::ObjectPtr&);

}

#endif
