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

#ifndef __contactdbservie_h__
#define __contactdbservie_h__

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
#include <atmMember.h>
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

class IContactIMDBService;
bool operator==(const IContactIMDBService&, const IContactIMDBService&);
bool operator!=(const IContactIMDBService&, const IContactIMDBService&);
bool operator<(const IContactIMDBService&, const IContactIMDBService&);
bool operator<=(const IContactIMDBService&, const IContactIMDBService&);
bool operator>(const IContactIMDBService&, const IContactIMDBService&);
bool operator>=(const IContactIMDBService&, const IContactIMDBService&);

}

}

namespace AliIMDBBase
{

class IContactIMDBService;
bool operator==(const IContactIMDBService&, const IContactIMDBService&);
bool operator!=(const IContactIMDBService&, const IContactIMDBService&);
bool operator<(const IContactIMDBService&, const IContactIMDBService&);
bool operator<=(const IContactIMDBService&, const IContactIMDBService&);
bool operator>(const IContactIMDBService&, const IContactIMDBService&);
bool operator>=(const IContactIMDBService&, const IContactIMDBService&);

}

namespace IceInternal
{

void incRef(::AliIMDBBase::IContactIMDBService*);
void decRef(::AliIMDBBase::IContactIMDBService*);

void incRef(::IceProxy::AliIMDBBase::IContactIMDBService*);
void decRef(::IceProxy::AliIMDBBase::IContactIMDBService*);

}

namespace AliIMDBBase
{

typedef ::IceInternal::Handle< ::AliIMDBBase::IContactIMDBService> IContactIMDBServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::AliIMDBBase::IContactIMDBService> IContactIMDBServicePrx;

void __write(::IceInternal::BasicStream*, const IContactIMDBServicePrx&);
void __read(::IceInternal::BasicStream*, IContactIMDBServicePrx&);
void __write(::IceInternal::BasicStream*, const IContactIMDBServicePtr&);
void __patch__IContactIMDBServicePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const IContactIMDBServicePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const IContactIMDBServicePtr&);
void __decRefUnsafe(const IContactIMDBServicePtr&);
void __clearHandleUnsafe(IContactIMDBServicePtr&);

}

namespace AliIMDBBase
{

}

namespace IceProxy
{

namespace AliIMDBBase
{

class IContactIMDBService : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int CheckCanAddContact(const ::std::string& userId, const ::std::string& buddyId)
    {
        return CheckCanAddContact(userId, buddyId, 0);
    }
    ::Ice::Int CheckCanAddContact(const ::std::string& userId, const ::std::string& buddyId, const ::Ice::Context& __ctx)
    {
        return CheckCanAddContact(userId, buddyId, &__ctx);
    }
    
private:

    ::Ice::Int CheckCanAddContact(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateContactWebInfo(const ::std::string& userId, const ::std::string& buddyId, const ::AliIMDBBase::SUserWebBasicProfile& cntWebInfo)
    {
        return UpdateContactWebInfo(userId, buddyId, cntWebInfo, 0);
    }
    ::Ice::Int UpdateContactWebInfo(const ::std::string& userId, const ::std::string& buddyId, const ::AliIMDBBase::SUserWebBasicProfile& cntWebInfo, const ::Ice::Context& __ctx)
    {
        return UpdateContactWebInfo(userId, buddyId, cntWebInfo, &__ctx);
    }
    
private:

    ::Ice::Int UpdateContactWebInfo(const ::std::string&, const ::std::string&, const ::AliIMDBBase::SUserWebBasicProfile&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetGroupList(const ::std::string& userId, ::AliIMDBBase::SICEGroupInfoSeq& groupList, ::Ice::Int& groupTimes)
    {
        return GetGroupList(userId, groupList, groupTimes, 0);
    }
    ::Ice::Int GetGroupList(const ::std::string& userId, ::AliIMDBBase::SICEGroupInfoSeq& groupList, ::Ice::Int& groupTimes, const ::Ice::Context& __ctx)
    {
        return GetGroupList(userId, groupList, groupTimes, &__ctx);
    }
    
private:

    ::Ice::Int GetGroupList(const ::std::string&, ::AliIMDBBase::SICEGroupInfoSeq&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetGroupListEx(const ::std::string& userId, ::AliIMDBBase::SICEGroupInfoExSeq& groupList, ::Ice::Int& groupTimes)
    {
        return GetGroupListEx(userId, groupList, groupTimes, 0);
    }
    ::Ice::Int GetGroupListEx(const ::std::string& userId, ::AliIMDBBase::SICEGroupInfoExSeq& groupList, ::Ice::Int& groupTimes, const ::Ice::Context& __ctx)
    {
        return GetGroupListEx(userId, groupList, groupTimes, &__ctx);
    }
    
private:

    ::Ice::Int GetGroupListEx(const ::std::string&, ::AliIMDBBase::SICEGroupInfoExSeq&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetContactList(const ::std::string& userId, ::Ice::Int getFlag, ::AliIMDBBase::SICEContactInfoSeq& contactList, ::Ice::Int& contactTimes)
    {
        return GetContactList(userId, getFlag, contactList, contactTimes, 0);
    }
    ::Ice::Int GetContactList(const ::std::string& userId, ::Ice::Int getFlag, ::AliIMDBBase::SICEContactInfoSeq& contactList, ::Ice::Int& contactTimes, const ::Ice::Context& __ctx)
    {
        return GetContactList(userId, getFlag, contactList, contactTimes, &__ctx);
    }
    
private:

    ::Ice::Int GetContactList(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEContactInfoSeq&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetBlackList(const ::std::string& userId, ::Ice::StringSeq& blackList, ::Ice::Int& blacklistTimes)
    {
        return GetBlackList(userId, blackList, blacklistTimes, 0);
    }
    ::Ice::Int GetBlackList(const ::std::string& userId, ::Ice::StringSeq& blackList, ::Ice::Int& blacklistTimes, const ::Ice::Context& __ctx)
    {
        return GetBlackList(userId, blackList, blacklistTimes, &__ctx);
    }
    
private:

    ::Ice::Int GetBlackList(const ::std::string&, ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetReverseBlackList(const ::std::string& userId, ::Ice::StringSeq& reverseBlackList, ::Ice::Int& reverseBlacklistTimes)
    {
        return GetReverseBlackList(userId, reverseBlackList, reverseBlacklistTimes, 0);
    }
    ::Ice::Int GetReverseBlackList(const ::std::string& userId, ::Ice::StringSeq& reverseBlackList, ::Ice::Int& reverseBlacklistTimes, const ::Ice::Context& __ctx)
    {
        return GetReverseBlackList(userId, reverseBlackList, reverseBlacklistTimes, &__ctx);
    }
    
private:

    ::Ice::Int GetReverseBlackList(const ::std::string&, ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetContactInfo(const ::std::string& userId, const ::std::string& contactId, ::AliIMDBBase::SICEContactInfo& contactInfo)
    {
        return GetContactInfo(userId, contactId, contactInfo, 0);
    }
    ::Ice::Int GetContactInfo(const ::std::string& userId, const ::std::string& contactId, ::AliIMDBBase::SICEContactInfo& contactInfo, const ::Ice::Context& __ctx)
    {
        return GetContactInfo(userId, contactId, contactInfo, &__ctx);
    }
    
private:

    ::Ice::Int GetContactInfo(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEContactInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddGroup(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int& groupId, ::Ice::Int& groupTimes)
    {
        return AddGroup(userId, groupName, groupId, groupTimes, 0);
    }
    ::Ice::Int AddGroup(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int& groupId, ::Ice::Int& groupTimes, const ::Ice::Context& __ctx)
    {
        return AddGroup(userId, groupName, groupId, groupTimes, &__ctx);
    }
    
private:

    ::Ice::Int AddGroup(const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddGroupEx(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int parentId, ::Ice::Int& groupId, ::Ice::Int& groupTimes)
    {
        return AddGroupEx(userId, groupName, parentId, groupId, groupTimes, 0);
    }
    ::Ice::Int AddGroupEx(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int parentId, ::Ice::Int& groupId, ::Ice::Int& groupTimes, const ::Ice::Context& __ctx)
    {
        return AddGroupEx(userId, groupName, parentId, groupId, groupTimes, &__ctx);
    }
    
private:

    ::Ice::Int AddGroupEx(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddBlackList(const ::std::string& userId, const ::std::string& blackId, ::Ice::Int& blackListTimes)
    {
        return AddBlackList(userId, blackId, blackListTimes, 0);
    }
    ::Ice::Int AddBlackList(const ::std::string& userId, const ::std::string& blackId, ::Ice::Int& blackListTimes, const ::Ice::Context& __ctx)
    {
        return AddBlackList(userId, blackId, blackListTimes, &__ctx);
    }
    
private:

    ::Ice::Int AddBlackList(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateGroup(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int groupId, ::Ice::Int& groupTimes)
    {
        return UpdateGroup(userId, groupName, groupId, groupTimes, 0);
    }
    ::Ice::Int UpdateGroup(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int groupId, ::Ice::Int& groupTimes, const ::Ice::Context& __ctx)
    {
        return UpdateGroup(userId, groupName, groupId, groupTimes, &__ctx);
    }
    
private:

    ::Ice::Int UpdateGroup(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int MoveGroup(const ::std::string& userId, ::Ice::Long groupId, ::Ice::Long newparentgid, ::Ice::Int& groupTimes)
    {
        return MoveGroup(userId, groupId, newparentgid, groupTimes, 0);
    }
    ::Ice::Int MoveGroup(const ::std::string& userId, ::Ice::Long groupId, ::Ice::Long newparentgid, ::Ice::Int& groupTimes, const ::Ice::Context& __ctx)
    {
        return MoveGroup(userId, groupId, newparentgid, groupTimes, &__ctx);
    }
    
private:

    ::Ice::Int MoveGroup(const ::std::string&, ::Ice::Long, ::Ice::Long, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateContactNickName(const ::std::string& userId, const ::std::string& contactId, const ::std::string& nickName, ::Ice::Int& contactTimes)
    {
        return UpdateContactNickName(userId, contactId, nickName, contactTimes, 0);
    }
    ::Ice::Int UpdateContactNickName(const ::std::string& userId, const ::std::string& contactId, const ::std::string& nickName, ::Ice::Int& contactTimes, const ::Ice::Context& __ctx)
    {
        return UpdateContactNickName(userId, contactId, nickName, contactTimes, &__ctx);
    }
    
private:

    ::Ice::Int UpdateContactNickName(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateContactGroup(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int srcGroupId, ::Ice::Int dstGroupId, ::Ice::Int& contactTimes)
    {
        return UpdateContactGroup(userId, contactId, srcGroupId, dstGroupId, contactTimes, 0);
    }
    ::Ice::Int UpdateContactGroup(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int srcGroupId, ::Ice::Int dstGroupId, ::Ice::Int& contactTimes, const ::Ice::Context& __ctx)
    {
        return UpdateContactGroup(userId, contactId, srcGroupId, dstGroupId, contactTimes, &__ctx);
    }
    
private:

    ::Ice::Int UpdateContactGroup(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateContactStatus(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int status, ::Ice::Int& contactTimes)
    {
        return UpdateContactStatus(userId, contactId, status, contactTimes, 0);
    }
    ::Ice::Int UpdateContactStatus(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int status, ::Ice::Int& contactTimes, const ::Ice::Context& __ctx)
    {
        return UpdateContactStatus(userId, contactId, status, contactTimes, &__ctx);
    }
    
private:

    ::Ice::Int UpdateContactStatus(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int RemoveGroup(const ::std::string& userId, ::Ice::Int groupId, ::Ice::Int& groupTimes)
    {
        return RemoveGroup(userId, groupId, groupTimes, 0);
    }
    ::Ice::Int RemoveGroup(const ::std::string& userId, ::Ice::Int groupId, ::Ice::Int& groupTimes, const ::Ice::Context& __ctx)
    {
        return RemoveGroup(userId, groupId, groupTimes, &__ctx);
    }
    
private:

    ::Ice::Int RemoveGroup(const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int RemoveContact(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int& contactTimes)
    {
        return RemoveContact(userId, contactId, contactTimes, 0);
    }
    ::Ice::Int RemoveContact(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int& contactTimes, const ::Ice::Context& __ctx)
    {
        return RemoveContact(userId, contactId, contactTimes, &__ctx);
    }
    
private:

    ::Ice::Int RemoveContact(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int RemoveInverfiedContact(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int& contactTimes)
    {
        return RemoveInverfiedContact(userId, contactId, contactTimes, 0);
    }
    ::Ice::Int RemoveInverfiedContact(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int& contactTimes, const ::Ice::Context& __ctx)
    {
        return RemoveInverfiedContact(userId, contactId, contactTimes, &__ctx);
    }
    
private:

    ::Ice::Int RemoveInverfiedContact(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int RemoveBlackList(const ::std::string& userId, const ::std::string& blackId, ::Ice::Int& blackListTimes)
    {
        return RemoveBlackList(userId, blackId, blackListTimes, 0);
    }
    ::Ice::Int RemoveBlackList(const ::std::string& userId, const ::std::string& blackId, ::Ice::Int& blackListTimes, const ::Ice::Context& __ctx)
    {
        return RemoveBlackList(userId, blackId, blackListTimes, &__ctx);
    }
    
private:

    ::Ice::Int RemoveBlackList(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int IsBlackedByOther(const ::std::string& userId, const ::std::string& otheruid, bool& bBlacked)
    {
        return IsBlackedByOther(userId, otheruid, bBlacked, 0);
    }
    ::Ice::Int IsBlackedByOther(const ::std::string& userId, const ::std::string& otheruid, bool& bBlacked, const ::Ice::Context& __ctx)
    {
        return IsBlackedByOther(userId, otheruid, bBlacked, &__ctx);
    }
    
private:

    ::Ice::Int IsBlackedByOther(const ::std::string&, const ::std::string&, bool&, const ::Ice::Context*);
    
public:

    ::Ice::Int RemoveBatchContacts(const ::std::string& userId, const ::Ice::StringSeq& cids, ::Ice::StringSeq& retVect, ::Ice::Int& modifyCntTimes, ::Ice::Int& modifyGenCntTime)
    {
        return RemoveBatchContacts(userId, cids, retVect, modifyCntTimes, modifyGenCntTime, 0);
    }
    ::Ice::Int RemoveBatchContacts(const ::std::string& userId, const ::Ice::StringSeq& cids, ::Ice::StringSeq& retVect, ::Ice::Int& modifyCntTimes, ::Ice::Int& modifyGenCntTime, const ::Ice::Context& __ctx)
    {
        return RemoveBatchContacts(userId, cids, retVect, modifyCntTimes, modifyGenCntTime, &__ctx);
    }
    
private:

    ::Ice::Int RemoveBatchContacts(const ::std::string&, const ::Ice::StringSeq&, ::Ice::StringSeq&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetAllContactList(const ::std::string& uid, ::Ice::Int getFlag, ::AliIMDBBase::SICEContactInfoSeq& contactList, ::Ice::Int& contactTimes, ::Ice::Int& gencontacttimes)
    {
        return GetAllContactList(uid, getFlag, contactList, contactTimes, gencontacttimes, 0);
    }
    ::Ice::Int GetAllContactList(const ::std::string& uid, ::Ice::Int getFlag, ::AliIMDBBase::SICEContactInfoSeq& contactList, ::Ice::Int& contactTimes, ::Ice::Int& gencontacttimes, const ::Ice::Context& __ctx)
    {
        return GetAllContactList(uid, getFlag, contactList, contactTimes, gencontacttimes, &__ctx);
    }
    
private:

    ::Ice::Int GetAllContactList(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEContactInfoSeq&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddContact(const ::std::string& userId, const ::std::string& contactId, const ::std::string& nickName, ::Ice::Int groupId, ::Ice::Int status, const ::AliIMDBBase::SUserWebBasicProfile& cntInfo, ::Ice::Int& contactTimes, ::std::string& retcid, ::std::string& retmodseqid)
    {
        return AddContact(userId, contactId, nickName, groupId, status, cntInfo, contactTimes, retcid, retmodseqid, 0);
    }
    ::Ice::Int AddContact(const ::std::string& userId, const ::std::string& contactId, const ::std::string& nickName, ::Ice::Int groupId, ::Ice::Int status, const ::AliIMDBBase::SUserWebBasicProfile& cntInfo, ::Ice::Int& contactTimes, ::std::string& retcid, ::std::string& retmodseqid, const ::Ice::Context& __ctx)
    {
        return AddContact(userId, contactId, nickName, groupId, status, cntInfo, contactTimes, retcid, retmodseqid, &__ctx);
    }
    
private:

    ::Ice::Int AddContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::AliIMDBBase::SUserWebBasicProfile&, ::Ice::Int&, ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int ModifyCntMemo(const ::std::string& uid, const ::std::string& cntid, const ::std::string& memo)
    {
        return ModifyCntMemo(uid, cntid, memo, 0);
    }
    ::Ice::Int ModifyCntMemo(const ::std::string& uid, const ::std::string& cntid, const ::std::string& memo, const ::Ice::Context& __ctx)
    {
        return ModifyCntMemo(uid, cntid, memo, &__ctx);
    }
    
private:

    ::Ice::Int ModifyCntMemo(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetCntMemo(const ::std::string& uid, const ::std::string& cntid, ::std::string& memo)
    {
        return GetCntMemo(uid, cntid, memo, 0);
    }
    ::Ice::Int GetCntMemo(const ::std::string& uid, const ::std::string& cntid, ::std::string& memo, const ::Ice::Context& __ctx)
    {
        return GetCntMemo(uid, cntid, memo, &__ctx);
    }
    
private:

    ::Ice::Int GetCntMemo(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int updateContactClientInfo(const ::std::string& uid, const ::std::string& cid, const ::std::string& data, ::Ice::Int& contactTimes)
    {
        return updateContactClientInfo(uid, cid, data, contactTimes, 0);
    }
    ::Ice::Int updateContactClientInfo(const ::std::string& uid, const ::std::string& cid, const ::std::string& data, ::Ice::Int& contactTimes, const ::Ice::Context& __ctx)
    {
        return updateContactClientInfo(uid, cid, data, contactTimes, &__ctx);
    }
    
private:

    ::Ice::Int updateContactClientInfo(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int checkContact(const ::std::string& uid, const ::std::string& contactId)
    {
        return checkContact(uid, contactId, 0);
    }
    ::Ice::Int checkContact(const ::std::string& uid, const ::std::string& contactId, const ::Ice::Context& __ctx)
    {
        return checkContact(uid, contactId, &__ctx);
    }
    
private:

    ::Ice::Int checkContact(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetContactDetailByUid(const ::std::string& uid, const ::std::string& cid, ::AliIMDBBase::SICEGenContactFull& detail)
    {
        return GetContactDetailByUid(uid, cid, detail, 0);
    }
    ::Ice::Int GetContactDetailByUid(const ::std::string& uid, const ::std::string& cid, ::AliIMDBBase::SICEGenContactFull& detail, const ::Ice::Context& __ctx)
    {
        return GetContactDetailByUid(uid, cid, detail, &__ctx);
    }
    
private:

    ::Ice::Int GetContactDetailByUid(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEGenContactFull&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetContactDetail(const ::std::string& uid, const ::std::string& cid, ::AliIMDBBase::SICEGenContactFull& detail)
    {
        return GetContactDetail(uid, cid, detail, 0);
    }
    ::Ice::Int GetContactDetail(const ::std::string& uid, const ::std::string& cid, ::AliIMDBBase::SICEGenContactFull& detail, const ::Ice::Context& __ctx)
    {
        return GetContactDetail(uid, cid, detail, &__ctx);
    }
    
private:

    ::Ice::Int GetContactDetail(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEGenContactFull&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddGenContactFull(const ::AliIMDBBase::SICEGenContactFull& detail, ::std::string& retscid, ::std::string& retsmodseqid, ::Ice::Long& timeStamps)
    {
        return AddGenContactFull(detail, retscid, retsmodseqid, timeStamps, 0);
    }
    ::Ice::Int AddGenContactFull(const ::AliIMDBBase::SICEGenContactFull& detail, ::std::string& retscid, ::std::string& retsmodseqid, ::Ice::Long& timeStamps, const ::Ice::Context& __ctx)
    {
        return AddGenContactFull(detail, retscid, retsmodseqid, timeStamps, &__ctx);
    }
    
private:

    ::Ice::Int AddGenContactFull(const ::AliIMDBBase::SICEGenContactFull&, ::std::string&, ::std::string&, ::Ice::Long&, const ::Ice::Context*);
    
public:

    ::Ice::Int DelGenContact(const ::std::string& uid, const ::std::string& cid, ::Ice::Long& contactTimes)
    {
        return DelGenContact(uid, cid, contactTimes, 0);
    }
    ::Ice::Int DelGenContact(const ::std::string& uid, const ::std::string& cid, ::Ice::Long& contactTimes, const ::Ice::Context& __ctx)
    {
        return DelGenContact(uid, cid, contactTimes, &__ctx);
    }
    
private:

    ::Ice::Int DelGenContact(const ::std::string&, const ::std::string&, ::Ice::Long&, const ::Ice::Context*);
    
public:

    ::Ice::Int CheckUpgradeGenCnt(const ::std::string& uid, const ::std::string& cid, const ::std::string& contactId)
    {
        return CheckUpgradeGenCnt(uid, cid, contactId, 0);
    }
    ::Ice::Int CheckUpgradeGenCnt(const ::std::string& uid, const ::std::string& cid, const ::std::string& contactId, const ::Ice::Context& __ctx)
    {
        return CheckUpgradeGenCnt(uid, cid, contactId, &__ctx);
    }
    
private:

    ::Ice::Int CheckUpgradeGenCnt(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpgradeGenContact(const ::std::string& uid, const ::std::string& cid, const ::std::string& contactId, ::Ice::Long& cntstamp, ::Ice::Long& gencntstamp, ::std::string& modseqid)
    {
        return UpgradeGenContact(uid, cid, contactId, cntstamp, gencntstamp, modseqid, 0);
    }
    ::Ice::Int UpgradeGenContact(const ::std::string& uid, const ::std::string& cid, const ::std::string& contactId, ::Ice::Long& cntstamp, ::Ice::Long& gencntstamp, ::std::string& modseqid, const ::Ice::Context& __ctx)
    {
        return UpgradeGenContact(uid, cid, contactId, cntstamp, gencntstamp, modseqid, &__ctx);
    }
    
private:

    ::Ice::Int UpgradeGenContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long&, ::Ice::Long&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUpdatedUserInfo(const ::std::string& uid, const ::std::string& contactId, ::Ice::Long& cntstamp, ::Ice::Long& gencntstamp, ::std::string& retcid, ::std::string& modseqid, ::Ice::Long& groupid, ::std::string& nickname)
    {
        return GetUpdatedUserInfo(uid, contactId, cntstamp, gencntstamp, retcid, modseqid, groupid, nickname, 0);
    }
    ::Ice::Int GetUpdatedUserInfo(const ::std::string& uid, const ::std::string& contactId, ::Ice::Long& cntstamp, ::Ice::Long& gencntstamp, ::std::string& retcid, ::std::string& modseqid, ::Ice::Long& groupid, ::std::string& nickname, const ::Ice::Context& __ctx)
    {
        return GetUpdatedUserInfo(uid, contactId, cntstamp, gencntstamp, retcid, modseqid, groupid, nickname, &__ctx);
    }
    
private:

    ::Ice::Int GetUpdatedUserInfo(const ::std::string&, const ::std::string&, ::Ice::Long&, ::Ice::Long&, ::std::string&, ::std::string&, ::Ice::Long&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int ModifyContactDetail(const ::AliIMDBBase::SICEGenContactFull& detail, ::Ice::Long& gencntmodifyVersion, ::std::string& modseqid)
    {
        return ModifyContactDetail(detail, gencntmodifyVersion, modseqid, 0);
    }
    ::Ice::Int ModifyContactDetail(const ::AliIMDBBase::SICEGenContactFull& detail, ::Ice::Long& gencntmodifyVersion, ::std::string& modseqid, const ::Ice::Context& __ctx)
    {
        return ModifyContactDetail(detail, gencntmodifyVersion, modseqid, &__ctx);
    }
    
private:

    ::Ice::Int ModifyContactDetail(const ::AliIMDBBase::SICEGenContactFull&, ::Ice::Long&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateContactGroupByCid(const ::std::string& userId, const ::std::string& cid, ::Ice::Int srcGroupId, ::Ice::Int dstGroupId, ::Ice::Int& contactTimes)
    {
        return UpdateContactGroupByCid(userId, cid, srcGroupId, dstGroupId, contactTimes, 0);
    }
    ::Ice::Int UpdateContactGroupByCid(const ::std::string& userId, const ::std::string& cid, ::Ice::Int srcGroupId, ::Ice::Int dstGroupId, ::Ice::Int& contactTimes, const ::Ice::Context& __ctx)
    {
        return UpdateContactGroupByCid(userId, cid, srcGroupId, dstGroupId, contactTimes, &__ctx);
    }
    
private:

    ::Ice::Int UpdateContactGroupByCid(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateContactNickNameByCid(const ::std::string& userId, const ::std::string& cid, const ::std::string& nickName, ::Ice::Int& contactTimes)
    {
        return UpdateContactNickNameByCid(userId, cid, nickName, contactTimes, 0);
    }
    ::Ice::Int UpdateContactNickNameByCid(const ::std::string& userId, const ::std::string& cid, const ::std::string& nickName, ::Ice::Int& contactTimes, const ::Ice::Context& __ctx)
    {
        return UpdateContactNickNameByCid(userId, cid, nickName, contactTimes, &__ctx);
    }
    
private:

    ::Ice::Int UpdateContactNickNameByCid(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetCntModifyList(::Ice::Int getFlag, const ::std::string& uid, const ::std::string& sMaxSeqId, ::AliIMDBBase::SICECntCidModPairSeq& cntList)
    {
        return GetCntModifyList(getFlag, uid, sMaxSeqId, cntList, 0);
    }
    ::Ice::Int GetCntModifyList(::Ice::Int getFlag, const ::std::string& uid, const ::std::string& sMaxSeqId, ::AliIMDBBase::SICECntCidModPairSeq& cntList, const ::Ice::Context& __ctx)
    {
        return GetCntModifyList(getFlag, uid, sMaxSeqId, cntList, &__ctx);
    }
    
private:

    ::Ice::Int GetCntModifyList(::Ice::Int, const ::std::string&, const ::std::string&, ::AliIMDBBase::SICECntCidModPairSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int addUser(const ::std::string& uid)
    {
        return addUser(uid, 0);
    }
    ::Ice::Int addUser(const ::std::string& uid, const ::Ice::Context& __ctx)
    {
        return addUser(uid, &__ctx);
    }
    
private:

    ::Ice::Int addUser(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int addChildUser(const ::std::string& uid)
    {
        return addChildUser(uid, 0);
    }
    ::Ice::Int addChildUser(const ::std::string& uid, const ::Ice::Context& __ctx)
    {
        return addChildUser(uid, &__ctx);
    }
    
private:

    ::Ice::Int addChildUser(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetMultiAccountContactList(const ::std::string& uid, ::AliIMDBBase::SICEContactInfoSeq& contactIdList)
    {
        return GetMultiAccountContactList(uid, contactIdList, 0);
    }
    ::Ice::Int GetMultiAccountContactList(const ::std::string& uid, ::AliIMDBBase::SICEContactInfoSeq& contactIdList, const ::Ice::Context& __ctx)
    {
        return GetMultiAccountContactList(uid, contactIdList, &__ctx);
    }
    
private:

    ::Ice::Int GetMultiAccountContactList(const ::std::string&, ::AliIMDBBase::SICEContactInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int atmAddContact(const ::std::string& userId, const ::std::string& contactId, const ::std::string& nickName, ::Ice::Int groupId, ::Ice::Int status, const ::atmWebMember::sContactInfo& cinfo, ::Ice::Int& contactTimes, ::std::string& retcid, ::std::string& retmodseqid)
    {
        return atmAddContact(userId, contactId, nickName, groupId, status, cinfo, contactTimes, retcid, retmodseqid, 0);
    }
    ::Ice::Int atmAddContact(const ::std::string& userId, const ::std::string& contactId, const ::std::string& nickName, ::Ice::Int groupId, ::Ice::Int status, const ::atmWebMember::sContactInfo& cinfo, ::Ice::Int& contactTimes, ::std::string& retcid, ::std::string& retmodseqid, const ::Ice::Context& __ctx)
    {
        return atmAddContact(userId, contactId, nickName, groupId, status, cinfo, contactTimes, retcid, retmodseqid, &__ctx);
    }
    
private:

    ::Ice::Int atmAddContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::atmWebMember::sContactInfo&, ::Ice::Int&, ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int atmGetContactDetail(const ::std::string& uid, const ::std::string& cid, ::AliIMDBBase::SICEATMGenContactFull& detail)
    {
        return atmGetContactDetail(uid, cid, detail, 0);
    }
    ::Ice::Int atmGetContactDetail(const ::std::string& uid, const ::std::string& cid, ::AliIMDBBase::SICEATMGenContactFull& detail, const ::Ice::Context& __ctx)
    {
        return atmGetContactDetail(uid, cid, detail, &__ctx);
    }
    
private:

    ::Ice::Int atmGetContactDetail(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEATMGenContactFull&, const ::Ice::Context*);
    
public:

    ::Ice::Int atmModifyContactDetail(const ::AliIMDBBase::SICEATMGenContactFull& detail, ::Ice::Long& gencntmodifyVersion, ::std::string& modseqid)
    {
        return atmModifyContactDetail(detail, gencntmodifyVersion, modseqid, 0);
    }
    ::Ice::Int atmModifyContactDetail(const ::AliIMDBBase::SICEATMGenContactFull& detail, ::Ice::Long& gencntmodifyVersion, ::std::string& modseqid, const ::Ice::Context& __ctx)
    {
        return atmModifyContactDetail(detail, gencntmodifyVersion, modseqid, &__ctx);
    }
    
private:

    ::Ice::Int atmModifyContactDetail(const ::AliIMDBBase::SICEATMGenContactFull&, ::Ice::Long&, ::std::string&, const ::Ice::Context*);
    
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

class IContactIMDBService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int CheckCanAddContact(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateContactWebInfo(const ::std::string&, const ::std::string&, const ::AliIMDBBase::SUserWebBasicProfile&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetGroupList(const ::std::string&, ::AliIMDBBase::SICEGroupInfoSeq&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetGroupListEx(const ::std::string&, ::AliIMDBBase::SICEGroupInfoExSeq&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetContactList(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEContactInfoSeq&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetBlackList(const ::std::string&, ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetReverseBlackList(const ::std::string&, ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetContactInfo(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEContactInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddGroup(const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddGroupEx(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddBlackList(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateGroup(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int MoveGroup(const ::std::string&, ::Ice::Long, ::Ice::Long, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateContactNickName(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateContactGroup(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateContactStatus(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int RemoveGroup(const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int RemoveContact(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int RemoveInverfiedContact(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int RemoveBlackList(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int IsBlackedByOther(const ::std::string&, const ::std::string&, bool&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int RemoveBatchContacts(const ::std::string&, const ::Ice::StringSeq&, ::Ice::StringSeq&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetAllContactList(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEContactInfoSeq&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::AliIMDBBase::SUserWebBasicProfile&, ::Ice::Int&, ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int ModifyCntMemo(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetCntMemo(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int updateContactClientInfo(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int checkContact(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetContactDetailByUid(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEGenContactFull&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetContactDetail(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEGenContactFull&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddGenContactFull(const ::AliIMDBBase::SICEGenContactFull&, ::std::string&, ::std::string&, ::Ice::Long&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DelGenContact(const ::std::string&, const ::std::string&, ::Ice::Long&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int CheckUpgradeGenCnt(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpgradeGenContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long&, ::Ice::Long&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUpdatedUserInfo(const ::std::string&, const ::std::string&, ::Ice::Long&, ::Ice::Long&, ::std::string&, ::std::string&, ::Ice::Long&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int ModifyContactDetail(const ::AliIMDBBase::SICEGenContactFull&, ::Ice::Long&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateContactGroupByCid(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateContactNickNameByCid(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetCntModifyList(::Ice::Int, const ::std::string&, const ::std::string&, ::AliIMDBBase::SICECntCidModPairSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int addUser(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int addChildUser(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetMultiAccountContactList(const ::std::string&, ::AliIMDBBase::SICEContactInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int atmAddContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::atmWebMember::sContactInfo&, ::Ice::Int&, ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int atmGetContactDetail(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEATMGenContactFull&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int atmModifyContactDetail(const ::AliIMDBBase::SICEATMGenContactFull&, ::Ice::Long&, ::std::string&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace AliIMDBBase
{

class IContactIMDBService : virtual public ::IceDelegate::AliIMDBBase::IContactIMDBService,
                            virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int CheckCanAddContact(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateContactWebInfo(const ::std::string&, const ::std::string&, const ::AliIMDBBase::SUserWebBasicProfile&, const ::Ice::Context*);

    virtual ::Ice::Int GetGroupList(const ::std::string&, ::AliIMDBBase::SICEGroupInfoSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetGroupListEx(const ::std::string&, ::AliIMDBBase::SICEGroupInfoExSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetContactList(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEContactInfoSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetBlackList(const ::std::string&, ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetReverseBlackList(const ::std::string&, ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetContactInfo(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEContactInfo&, const ::Ice::Context*);

    virtual ::Ice::Int AddGroup(const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int AddGroupEx(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int AddBlackList(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateGroup(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int MoveGroup(const ::std::string&, ::Ice::Long, ::Ice::Long, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateContactNickName(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateContactGroup(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateContactStatus(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int RemoveGroup(const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int RemoveContact(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int RemoveInverfiedContact(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int RemoveBlackList(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int IsBlackedByOther(const ::std::string&, const ::std::string&, bool&, const ::Ice::Context*);

    virtual ::Ice::Int RemoveBatchContacts(const ::std::string&, const ::Ice::StringSeq&, ::Ice::StringSeq&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetAllContactList(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEContactInfoSeq&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int AddContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::AliIMDBBase::SUserWebBasicProfile&, ::Ice::Int&, ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int ModifyCntMemo(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetCntMemo(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int updateContactClientInfo(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int checkContact(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetContactDetailByUid(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEGenContactFull&, const ::Ice::Context*);

    virtual ::Ice::Int GetContactDetail(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEGenContactFull&, const ::Ice::Context*);

    virtual ::Ice::Int AddGenContactFull(const ::AliIMDBBase::SICEGenContactFull&, ::std::string&, ::std::string&, ::Ice::Long&, const ::Ice::Context*);

    virtual ::Ice::Int DelGenContact(const ::std::string&, const ::std::string&, ::Ice::Long&, const ::Ice::Context*);

    virtual ::Ice::Int CheckUpgradeGenCnt(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int UpgradeGenContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long&, ::Ice::Long&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetUpdatedUserInfo(const ::std::string&, const ::std::string&, ::Ice::Long&, ::Ice::Long&, ::std::string&, ::std::string&, ::Ice::Long&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int ModifyContactDetail(const ::AliIMDBBase::SICEGenContactFull&, ::Ice::Long&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateContactGroupByCid(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateContactNickNameByCid(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetCntModifyList(::Ice::Int, const ::std::string&, const ::std::string&, ::AliIMDBBase::SICECntCidModPairSeq&, const ::Ice::Context*);

    virtual ::Ice::Int addUser(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int addChildUser(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetMultiAccountContactList(const ::std::string&, ::AliIMDBBase::SICEContactInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int atmAddContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::atmWebMember::sContactInfo&, ::Ice::Int&, ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int atmGetContactDetail(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEATMGenContactFull&, const ::Ice::Context*);

    virtual ::Ice::Int atmModifyContactDetail(const ::AliIMDBBase::SICEATMGenContactFull&, ::Ice::Long&, ::std::string&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace AliIMDBBase
{

class IContactIMDBService : virtual public ::IceDelegate::AliIMDBBase::IContactIMDBService,
                            virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int CheckCanAddContact(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateContactWebInfo(const ::std::string&, const ::std::string&, const ::AliIMDBBase::SUserWebBasicProfile&, const ::Ice::Context*);

    virtual ::Ice::Int GetGroupList(const ::std::string&, ::AliIMDBBase::SICEGroupInfoSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetGroupListEx(const ::std::string&, ::AliIMDBBase::SICEGroupInfoExSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetContactList(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEContactInfoSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetBlackList(const ::std::string&, ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetReverseBlackList(const ::std::string&, ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetContactInfo(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEContactInfo&, const ::Ice::Context*);

    virtual ::Ice::Int AddGroup(const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int AddGroupEx(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int AddBlackList(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateGroup(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int MoveGroup(const ::std::string&, ::Ice::Long, ::Ice::Long, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateContactNickName(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateContactGroup(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateContactStatus(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int RemoveGroup(const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int RemoveContact(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int RemoveInverfiedContact(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int RemoveBlackList(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int IsBlackedByOther(const ::std::string&, const ::std::string&, bool&, const ::Ice::Context*);

    virtual ::Ice::Int RemoveBatchContacts(const ::std::string&, const ::Ice::StringSeq&, ::Ice::StringSeq&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetAllContactList(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEContactInfoSeq&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int AddContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::AliIMDBBase::SUserWebBasicProfile&, ::Ice::Int&, ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int ModifyCntMemo(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetCntMemo(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int updateContactClientInfo(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int checkContact(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetContactDetailByUid(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEGenContactFull&, const ::Ice::Context*);

    virtual ::Ice::Int GetContactDetail(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEGenContactFull&, const ::Ice::Context*);

    virtual ::Ice::Int AddGenContactFull(const ::AliIMDBBase::SICEGenContactFull&, ::std::string&, ::std::string&, ::Ice::Long&, const ::Ice::Context*);

    virtual ::Ice::Int DelGenContact(const ::std::string&, const ::std::string&, ::Ice::Long&, const ::Ice::Context*);

    virtual ::Ice::Int CheckUpgradeGenCnt(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int UpgradeGenContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long&, ::Ice::Long&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetUpdatedUserInfo(const ::std::string&, const ::std::string&, ::Ice::Long&, ::Ice::Long&, ::std::string&, ::std::string&, ::Ice::Long&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int ModifyContactDetail(const ::AliIMDBBase::SICEGenContactFull&, ::Ice::Long&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateContactGroupByCid(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateContactNickNameByCid(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetCntModifyList(::Ice::Int, const ::std::string&, const ::std::string&, ::AliIMDBBase::SICECntCidModPairSeq&, const ::Ice::Context*);

    virtual ::Ice::Int addUser(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int addChildUser(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetMultiAccountContactList(const ::std::string&, ::AliIMDBBase::SICEContactInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int atmAddContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::atmWebMember::sContactInfo&, ::Ice::Int&, ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int atmGetContactDetail(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEATMGenContactFull&, const ::Ice::Context*);

    virtual ::Ice::Int atmModifyContactDetail(const ::AliIMDBBase::SICEATMGenContactFull&, ::Ice::Long&, ::std::string&, const ::Ice::Context*);
};

}

}

namespace AliIMDBBase
{

class IContactIMDBService : virtual public ::Ice::Object
{
public:

    typedef IContactIMDBServicePrx ProxyType;
    typedef IContactIMDBServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int CheckCanAddContact(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___CheckCanAddContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int UpdateContactWebInfo(const ::std::string&, const ::std::string&, const ::AliIMDBBase::SUserWebBasicProfile&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateContactWebInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetGroupList(const ::std::string&, ::AliIMDBBase::SICEGroupInfoSeq&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetGroupList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetGroupListEx(const ::std::string&, ::AliIMDBBase::SICEGroupInfoExSeq&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetGroupListEx(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetContactList(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEContactInfoSeq&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetContactList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetBlackList(const ::std::string&, ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetBlackList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetReverseBlackList(const ::std::string&, ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetReverseBlackList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetContactInfo(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEContactInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetContactInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int AddGroup(const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int AddGroupEx(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddGroupEx(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int AddBlackList(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddBlackList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int UpdateGroup(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int MoveGroup(const ::std::string&, ::Ice::Long, ::Ice::Long, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___MoveGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int UpdateContactNickName(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateContactNickName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int UpdateContactGroup(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateContactGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int UpdateContactStatus(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateContactStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int RemoveGroup(const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___RemoveGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int RemoveContact(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___RemoveContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int RemoveInverfiedContact(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___RemoveInverfiedContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int RemoveBlackList(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___RemoveBlackList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int IsBlackedByOther(const ::std::string&, const ::std::string&, bool&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___IsBlackedByOther(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int RemoveBatchContacts(const ::std::string&, const ::Ice::StringSeq&, ::Ice::StringSeq&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___RemoveBatchContacts(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetAllContactList(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEContactInfoSeq&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetAllContactList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int AddContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::AliIMDBBase::SUserWebBasicProfile&, ::Ice::Int&, ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int ModifyCntMemo(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___ModifyCntMemo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetCntMemo(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetCntMemo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int updateContactClientInfo(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___updateContactClientInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int checkContact(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___checkContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetContactDetailByUid(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEGenContactFull&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetContactDetailByUid(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetContactDetail(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEGenContactFull&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetContactDetail(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int AddGenContactFull(const ::AliIMDBBase::SICEGenContactFull&, ::std::string&, ::std::string&, ::Ice::Long&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddGenContactFull(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DelGenContact(const ::std::string&, const ::std::string&, ::Ice::Long&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DelGenContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int CheckUpgradeGenCnt(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___CheckUpgradeGenCnt(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int UpgradeGenContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long&, ::Ice::Long&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpgradeGenContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetUpdatedUserInfo(const ::std::string&, const ::std::string&, ::Ice::Long&, ::Ice::Long&, ::std::string&, ::std::string&, ::Ice::Long&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUpdatedUserInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int ModifyContactDetail(const ::AliIMDBBase::SICEGenContactFull&, ::Ice::Long&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___ModifyContactDetail(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int UpdateContactGroupByCid(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateContactGroupByCid(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int UpdateContactNickNameByCid(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateContactNickNameByCid(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetCntModifyList(::Ice::Int, const ::std::string&, const ::std::string&, ::AliIMDBBase::SICECntCidModPairSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetCntModifyList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int addUser(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___addUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int addChildUser(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___addChildUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetMultiAccountContactList(const ::std::string&, ::AliIMDBBase::SICEContactInfoSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetMultiAccountContactList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int atmAddContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::atmWebMember::sContactInfo&, ::Ice::Int&, ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___atmAddContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int atmGetContactDetail(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEATMGenContactFull&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___atmGetContactDetail(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int atmModifyContactDetail(const ::AliIMDBBase::SICEATMGenContactFull&, ::Ice::Long&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___atmModifyContactDetail(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__IContactIMDBServicePtr(void*, ::Ice::ObjectPtr&);

}

#endif
