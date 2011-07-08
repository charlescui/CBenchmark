// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `dbtbsstructs60.ice'

#include <dbtbsstructs60.h>
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

bool
ALiIMDBTribe::STribeInfo::operator==(const STribeInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
ALiIMDBTribe::STribeInfo::operator!=(const STribeInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeId != __rhs.tribeId)
    {
        return true;
    }
    if(name != __rhs.name)
    {
        return true;
    }
    if(masterId != __rhs.masterId)
    {
        return true;
    }
    if(createrId != __rhs.createrId)
    {
        return true;
    }
    if(tribeclass != __rhs.tribeclass)
    {
        return true;
    }
    if(describe != __rhs.describe)
    {
        return true;
    }
    if(bulletin != __rhs.bulletin)
    {
        return true;
    }
    if(checkMode != __rhs.checkMode)
    {
        return true;
    }
    if(password != __rhs.password)
    {
        return true;
    }
    if(validateCode != __rhs.validateCode)
    {
        return true;
    }
    if(lastMsgid != __rhs.lastMsgid)
    {
        return true;
    }
    if(memberTimes != __rhs.memberTimes)
    {
        return true;
    }
    if(onlineTimes != __rhs.onlineTimes)
    {
        return true;
    }
    if(onlineDegree != __rhs.onlineDegree)
    {
        return true;
    }
    if(discussDegree != __rhs.discussDegree)
    {
        return true;
    }
    if(rewardDegree != __rhs.rewardDegree)
    {
        return true;
    }
    if(masterOffer != __rhs.masterOffer)
    {
        return true;
    }
    if(totalDegree != __rhs.totalDegree)
    {
        return true;
    }
    if(keyword != __rhs.keyword)
    {
        return true;
    }
    if(allowVisitor != __rhs.allowVisitor)
    {
        return true;
    }
    if(forbidSearch != __rhs.forbidSearch)
    {
        return true;
    }
    if(extSign != __rhs.extSign)
    {
        return true;
    }
    if(groupStamp != __rhs.groupStamp)
    {
        return true;
    }
    if(blackStamp != __rhs.blackStamp)
    {
        return true;
    }
    return false;
}

bool
ALiIMDBTribe::STribeInfo::operator<(const STribeInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeId < __rhs.tribeId)
    {
        return true;
    }
    else if(__rhs.tribeId < tribeId)
    {
        return false;
    }
    if(name < __rhs.name)
    {
        return true;
    }
    else if(__rhs.name < name)
    {
        return false;
    }
    if(masterId < __rhs.masterId)
    {
        return true;
    }
    else if(__rhs.masterId < masterId)
    {
        return false;
    }
    if(createrId < __rhs.createrId)
    {
        return true;
    }
    else if(__rhs.createrId < createrId)
    {
        return false;
    }
    if(tribeclass < __rhs.tribeclass)
    {
        return true;
    }
    else if(__rhs.tribeclass < tribeclass)
    {
        return false;
    }
    if(describe < __rhs.describe)
    {
        return true;
    }
    else if(__rhs.describe < describe)
    {
        return false;
    }
    if(bulletin < __rhs.bulletin)
    {
        return true;
    }
    else if(__rhs.bulletin < bulletin)
    {
        return false;
    }
    if(checkMode < __rhs.checkMode)
    {
        return true;
    }
    else if(__rhs.checkMode < checkMode)
    {
        return false;
    }
    if(password < __rhs.password)
    {
        return true;
    }
    else if(__rhs.password < password)
    {
        return false;
    }
    if(validateCode < __rhs.validateCode)
    {
        return true;
    }
    else if(__rhs.validateCode < validateCode)
    {
        return false;
    }
    if(lastMsgid < __rhs.lastMsgid)
    {
        return true;
    }
    else if(__rhs.lastMsgid < lastMsgid)
    {
        return false;
    }
    if(memberTimes < __rhs.memberTimes)
    {
        return true;
    }
    else if(__rhs.memberTimes < memberTimes)
    {
        return false;
    }
    if(onlineTimes < __rhs.onlineTimes)
    {
        return true;
    }
    else if(__rhs.onlineTimes < onlineTimes)
    {
        return false;
    }
    if(onlineDegree < __rhs.onlineDegree)
    {
        return true;
    }
    else if(__rhs.onlineDegree < onlineDegree)
    {
        return false;
    }
    if(discussDegree < __rhs.discussDegree)
    {
        return true;
    }
    else if(__rhs.discussDegree < discussDegree)
    {
        return false;
    }
    if(rewardDegree < __rhs.rewardDegree)
    {
        return true;
    }
    else if(__rhs.rewardDegree < rewardDegree)
    {
        return false;
    }
    if(masterOffer < __rhs.masterOffer)
    {
        return true;
    }
    else if(__rhs.masterOffer < masterOffer)
    {
        return false;
    }
    if(totalDegree < __rhs.totalDegree)
    {
        return true;
    }
    else if(__rhs.totalDegree < totalDegree)
    {
        return false;
    }
    if(keyword < __rhs.keyword)
    {
        return true;
    }
    else if(__rhs.keyword < keyword)
    {
        return false;
    }
    if(allowVisitor < __rhs.allowVisitor)
    {
        return true;
    }
    else if(__rhs.allowVisitor < allowVisitor)
    {
        return false;
    }
    if(forbidSearch < __rhs.forbidSearch)
    {
        return true;
    }
    else if(__rhs.forbidSearch < forbidSearch)
    {
        return false;
    }
    if(extSign < __rhs.extSign)
    {
        return true;
    }
    else if(__rhs.extSign < extSign)
    {
        return false;
    }
    if(groupStamp < __rhs.groupStamp)
    {
        return true;
    }
    else if(__rhs.groupStamp < groupStamp)
    {
        return false;
    }
    if(blackStamp < __rhs.blackStamp)
    {
        return true;
    }
    else if(__rhs.blackStamp < blackStamp)
    {
        return false;
    }
    return false;
}

void
ALiIMDBTribe::STribeInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(tribeId);
    __os->write(name);
    __os->write(masterId);
    __os->write(createrId);
    __os->write(tribeclass);
    __os->write(describe);
    __os->write(bulletin);
    __os->write(checkMode);
    __os->write(password);
    __os->write(validateCode);
    __os->write(lastMsgid);
    __os->write(memberTimes);
    __os->write(onlineTimes);
    __os->write(onlineDegree);
    __os->write(discussDegree);
    __os->write(rewardDegree);
    __os->write(masterOffer);
    __os->write(totalDegree);
    __os->write(keyword);
    __os->write(allowVisitor);
    __os->write(forbidSearch);
    __os->write(extSign);
    __os->write(groupStamp);
    __os->write(blackStamp);
}

void
ALiIMDBTribe::STribeInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(tribeId);
    __is->read(name);
    __is->read(masterId);
    __is->read(createrId);
    __is->read(tribeclass);
    __is->read(describe);
    __is->read(bulletin);
    __is->read(checkMode);
    __is->read(password);
    __is->read(validateCode);
    __is->read(lastMsgid);
    __is->read(memberTimes);
    __is->read(onlineTimes);
    __is->read(onlineDegree);
    __is->read(discussDegree);
    __is->read(rewardDegree);
    __is->read(masterOffer);
    __is->read(totalDegree);
    __is->read(keyword);
    __is->read(allowVisitor);
    __is->read(forbidSearch);
    __is->read(extSign);
    __is->read(groupStamp);
    __is->read(blackStamp);
}

bool
ALiIMDBTribe::STribeOfflineMsg::operator==(const STribeOfflineMsg& __rhs) const
{
    return !operator!=(__rhs);
}

bool
ALiIMDBTribe::STribeOfflineMsg::operator!=(const STribeOfflineMsg& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeId != __rhs.tribeId)
    {
        return true;
    }
    if(memberId != __rhs.memberId)
    {
        return true;
    }
    if(type != __rhs.type)
    {
        return true;
    }
    if(message != __rhs.message)
    {
        return true;
    }
    if(sendTime != __rhs.sendTime)
    {
        return true;
    }
    return false;
}

bool
ALiIMDBTribe::STribeOfflineMsg::operator<(const STribeOfflineMsg& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeId < __rhs.tribeId)
    {
        return true;
    }
    else if(__rhs.tribeId < tribeId)
    {
        return false;
    }
    if(memberId < __rhs.memberId)
    {
        return true;
    }
    else if(__rhs.memberId < memberId)
    {
        return false;
    }
    if(type < __rhs.type)
    {
        return true;
    }
    else if(__rhs.type < type)
    {
        return false;
    }
    if(message < __rhs.message)
    {
        return true;
    }
    else if(__rhs.message < message)
    {
        return false;
    }
    if(sendTime < __rhs.sendTime)
    {
        return true;
    }
    else if(__rhs.sendTime < sendTime)
    {
        return false;
    }
    return false;
}

void
ALiIMDBTribe::STribeOfflineMsg::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(tribeId);
    __os->write(memberId);
    __os->write(type);
    __os->write(message);
    __os->write(sendTime);
}

void
ALiIMDBTribe::STribeOfflineMsg::__read(::IceInternal::BasicStream* __is)
{
    __is->read(tribeId);
    __is->read(memberId);
    __is->read(type);
    __is->read(message);
    __is->read(sendTime);
}

bool
ALiIMDBTribe::STribeMemberInfo::operator==(const STribeMemberInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
ALiIMDBTribe::STribeMemberInfo::operator!=(const STribeMemberInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(userId != __rhs.userId)
    {
        return true;
    }
    if(name != __rhs.name)
    {
        return true;
    }
    if(memberLevel != __rhs.memberLevel)
    {
        return true;
    }
    if(tribeLevel != __rhs.tribeLevel)
    {
        return true;
    }
    if(mobileBindFlag != __rhs.mobileBindFlag)
    {
        return true;
    }
    if(mobileNo != __rhs.mobileNo)
    {
        return true;
    }
    if(bindMobile != __rhs.bindMobile)
    {
        return true;
    }
    if(lastMsgid != __rhs.lastMsgid)
    {
        return true;
    }
    if(onlineDegree != __rhs.onlineDegree)
    {
        return true;
    }
    if(discussDegree != __rhs.discussDegree)
    {
        return true;
    }
    if(rewardDegree != __rhs.rewardDegree)
    {
        return true;
    }
    if(totalDegree != __rhs.totalDegree)
    {
        return true;
    }
    if(groupId != __rhs.groupId)
    {
        return true;
    }
    if(starMember != __rhs.starMember)
    {
        return true;
    }
    if(openFlag != __rhs.openFlag)
    {
        return true;
    }
    return false;
}

bool
ALiIMDBTribe::STribeMemberInfo::operator<(const STribeMemberInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(userId < __rhs.userId)
    {
        return true;
    }
    else if(__rhs.userId < userId)
    {
        return false;
    }
    if(name < __rhs.name)
    {
        return true;
    }
    else if(__rhs.name < name)
    {
        return false;
    }
    if(memberLevel < __rhs.memberLevel)
    {
        return true;
    }
    else if(__rhs.memberLevel < memberLevel)
    {
        return false;
    }
    if(tribeLevel < __rhs.tribeLevel)
    {
        return true;
    }
    else if(__rhs.tribeLevel < tribeLevel)
    {
        return false;
    }
    if(mobileBindFlag < __rhs.mobileBindFlag)
    {
        return true;
    }
    else if(__rhs.mobileBindFlag < mobileBindFlag)
    {
        return false;
    }
    if(mobileNo < __rhs.mobileNo)
    {
        return true;
    }
    else if(__rhs.mobileNo < mobileNo)
    {
        return false;
    }
    if(bindMobile < __rhs.bindMobile)
    {
        return true;
    }
    else if(__rhs.bindMobile < bindMobile)
    {
        return false;
    }
    if(lastMsgid < __rhs.lastMsgid)
    {
        return true;
    }
    else if(__rhs.lastMsgid < lastMsgid)
    {
        return false;
    }
    if(onlineDegree < __rhs.onlineDegree)
    {
        return true;
    }
    else if(__rhs.onlineDegree < onlineDegree)
    {
        return false;
    }
    if(discussDegree < __rhs.discussDegree)
    {
        return true;
    }
    else if(__rhs.discussDegree < discussDegree)
    {
        return false;
    }
    if(rewardDegree < __rhs.rewardDegree)
    {
        return true;
    }
    else if(__rhs.rewardDegree < rewardDegree)
    {
        return false;
    }
    if(totalDegree < __rhs.totalDegree)
    {
        return true;
    }
    else if(__rhs.totalDegree < totalDegree)
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
    if(starMember < __rhs.starMember)
    {
        return true;
    }
    else if(__rhs.starMember < starMember)
    {
        return false;
    }
    if(openFlag < __rhs.openFlag)
    {
        return true;
    }
    else if(__rhs.openFlag < openFlag)
    {
        return false;
    }
    return false;
}

void
ALiIMDBTribe::STribeMemberInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(userId);
    __os->write(name);
    __os->write(memberLevel);
    __os->write(tribeLevel);
    __os->write(mobileBindFlag);
    __os->write(mobileNo);
    __os->write(bindMobile);
    __os->write(lastMsgid);
    __os->write(onlineDegree);
    __os->write(discussDegree);
    __os->write(rewardDegree);
    __os->write(totalDegree);
    __os->write(groupId);
    __os->write(starMember);
    __os->write(openFlag);
}

void
ALiIMDBTribe::STribeMemberInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(userId);
    __is->read(name);
    __is->read(memberLevel);
    __is->read(tribeLevel);
    __is->read(mobileBindFlag);
    __is->read(mobileNo);
    __is->read(bindMobile);
    __is->read(lastMsgid);
    __is->read(onlineDegree);
    __is->read(discussDegree);
    __is->read(rewardDegree);
    __is->read(totalDegree);
    __is->read(groupId);
    __is->read(starMember);
    __is->read(openFlag);
}

bool
ALiIMDBTribe::STribeMemberInfo2::operator==(const STribeMemberInfo2& __rhs) const
{
    return !operator!=(__rhs);
}

bool
ALiIMDBTribe::STribeMemberInfo2::operator!=(const STribeMemberInfo2& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(userId != __rhs.userId)
    {
        return true;
    }
    if(name != __rhs.name)
    {
        return true;
    }
    if(memberLevel != __rhs.memberLevel)
    {
        return true;
    }
    if(tribeLevel != __rhs.tribeLevel)
    {
        return true;
    }
    if(mobileBindFlag != __rhs.mobileBindFlag)
    {
        return true;
    }
    if(mobileNo != __rhs.mobileNo)
    {
        return true;
    }
    if(bindMobile != __rhs.bindMobile)
    {
        return true;
    }
    if(lastMsgid != __rhs.lastMsgid)
    {
        return true;
    }
    if(onlineDegree != __rhs.onlineDegree)
    {
        return true;
    }
    if(discussDegree != __rhs.discussDegree)
    {
        return true;
    }
    if(rewardDegree != __rhs.rewardDegree)
    {
        return true;
    }
    if(totalDegree != __rhs.totalDegree)
    {
        return true;
    }
    if(groupId != __rhs.groupId)
    {
        return true;
    }
    if(starMember != __rhs.starMember)
    {
        return true;
    }
    if(openFlag != __rhs.openFlag)
    {
        return true;
    }
    if(popupFlag != __rhs.popupFlag)
    {
        return true;
    }
    return false;
}

bool
ALiIMDBTribe::STribeMemberInfo2::operator<(const STribeMemberInfo2& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(userId < __rhs.userId)
    {
        return true;
    }
    else if(__rhs.userId < userId)
    {
        return false;
    }
    if(name < __rhs.name)
    {
        return true;
    }
    else if(__rhs.name < name)
    {
        return false;
    }
    if(memberLevel < __rhs.memberLevel)
    {
        return true;
    }
    else if(__rhs.memberLevel < memberLevel)
    {
        return false;
    }
    if(tribeLevel < __rhs.tribeLevel)
    {
        return true;
    }
    else if(__rhs.tribeLevel < tribeLevel)
    {
        return false;
    }
    if(mobileBindFlag < __rhs.mobileBindFlag)
    {
        return true;
    }
    else if(__rhs.mobileBindFlag < mobileBindFlag)
    {
        return false;
    }
    if(mobileNo < __rhs.mobileNo)
    {
        return true;
    }
    else if(__rhs.mobileNo < mobileNo)
    {
        return false;
    }
    if(bindMobile < __rhs.bindMobile)
    {
        return true;
    }
    else if(__rhs.bindMobile < bindMobile)
    {
        return false;
    }
    if(lastMsgid < __rhs.lastMsgid)
    {
        return true;
    }
    else if(__rhs.lastMsgid < lastMsgid)
    {
        return false;
    }
    if(onlineDegree < __rhs.onlineDegree)
    {
        return true;
    }
    else if(__rhs.onlineDegree < onlineDegree)
    {
        return false;
    }
    if(discussDegree < __rhs.discussDegree)
    {
        return true;
    }
    else if(__rhs.discussDegree < discussDegree)
    {
        return false;
    }
    if(rewardDegree < __rhs.rewardDegree)
    {
        return true;
    }
    else if(__rhs.rewardDegree < rewardDegree)
    {
        return false;
    }
    if(totalDegree < __rhs.totalDegree)
    {
        return true;
    }
    else if(__rhs.totalDegree < totalDegree)
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
    if(starMember < __rhs.starMember)
    {
        return true;
    }
    else if(__rhs.starMember < starMember)
    {
        return false;
    }
    if(openFlag < __rhs.openFlag)
    {
        return true;
    }
    else if(__rhs.openFlag < openFlag)
    {
        return false;
    }
    if(popupFlag < __rhs.popupFlag)
    {
        return true;
    }
    else if(__rhs.popupFlag < popupFlag)
    {
        return false;
    }
    return false;
}

void
ALiIMDBTribe::STribeMemberInfo2::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(userId);
    __os->write(name);
    __os->write(memberLevel);
    __os->write(tribeLevel);
    __os->write(mobileBindFlag);
    __os->write(mobileNo);
    __os->write(bindMobile);
    __os->write(lastMsgid);
    __os->write(onlineDegree);
    __os->write(discussDegree);
    __os->write(rewardDegree);
    __os->write(totalDegree);
    __os->write(groupId);
    __os->write(starMember);
    __os->write(openFlag);
    __os->write(popupFlag);
}

void
ALiIMDBTribe::STribeMemberInfo2::__read(::IceInternal::BasicStream* __is)
{
    __is->read(userId);
    __is->read(name);
    __is->read(memberLevel);
    __is->read(tribeLevel);
    __is->read(mobileBindFlag);
    __is->read(mobileNo);
    __is->read(bindMobile);
    __is->read(lastMsgid);
    __is->read(onlineDegree);
    __is->read(discussDegree);
    __is->read(rewardDegree);
    __is->read(totalDegree);
    __is->read(groupId);
    __is->read(starMember);
    __is->read(openFlag);
    __is->read(popupFlag);
}

bool
ALiIMDBTribe::STribeMember::operator==(const STribeMember& __rhs) const
{
    return !operator!=(__rhs);
}

bool
ALiIMDBTribe::STribeMember::operator!=(const STribeMember& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeId != __rhs.tribeId)
    {
        return true;
    }
    if(memberId != __rhs.memberId)
    {
        return true;
    }
    if(level != __rhs.level)
    {
        return true;
    }
    if(lastMsgid != __rhs.lastMsgid)
    {
        return true;
    }
    if(operId != __rhs.operId)
    {
        return true;
    }
    if(groupId != __rhs.groupId)
    {
        return true;
    }
    return false;
}

bool
ALiIMDBTribe::STribeMember::operator<(const STribeMember& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeId < __rhs.tribeId)
    {
        return true;
    }
    else if(__rhs.tribeId < tribeId)
    {
        return false;
    }
    if(memberId < __rhs.memberId)
    {
        return true;
    }
    else if(__rhs.memberId < memberId)
    {
        return false;
    }
    if(level < __rhs.level)
    {
        return true;
    }
    else if(__rhs.level < level)
    {
        return false;
    }
    if(lastMsgid < __rhs.lastMsgid)
    {
        return true;
    }
    else if(__rhs.lastMsgid < lastMsgid)
    {
        return false;
    }
    if(operId < __rhs.operId)
    {
        return true;
    }
    else if(__rhs.operId < operId)
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
    return false;
}

void
ALiIMDBTribe::STribeMember::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(tribeId);
    __os->write(memberId);
    __os->write(level);
    __os->write(lastMsgid);
    __os->write(operId);
    __os->write(groupId);
}

void
ALiIMDBTribe::STribeMember::__read(::IceInternal::BasicStream* __is)
{
    __is->read(tribeId);
    __is->read(memberId);
    __is->read(level);
    __is->read(lastMsgid);
    __is->read(operId);
    __is->read(groupId);
}

bool
ALiIMDBTribe::STribeId::operator==(const STribeId& __rhs) const
{
    return !operator!=(__rhs);
}

bool
ALiIMDBTribe::STribeId::operator!=(const STribeId& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeId != __rhs.tribeId)
    {
        return true;
    }
    if(name != __rhs.name)
    {
        return true;
    }
    if(tribeLevel != __rhs.tribeLevel)
    {
        return true;
    }
    if(tribeStatus != __rhs.tribeStatus)
    {
        return true;
    }
    if(extSign != __rhs.extSign)
    {
        return true;
    }
    if(groupStamp != __rhs.groupStamp)
    {
        return true;
    }
    if(openTribe != __rhs.openTribe)
    {
        return true;
    }
    return false;
}

bool
ALiIMDBTribe::STribeId::operator<(const STribeId& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeId < __rhs.tribeId)
    {
        return true;
    }
    else if(__rhs.tribeId < tribeId)
    {
        return false;
    }
    if(name < __rhs.name)
    {
        return true;
    }
    else if(__rhs.name < name)
    {
        return false;
    }
    if(tribeLevel < __rhs.tribeLevel)
    {
        return true;
    }
    else if(__rhs.tribeLevel < tribeLevel)
    {
        return false;
    }
    if(tribeStatus < __rhs.tribeStatus)
    {
        return true;
    }
    else if(__rhs.tribeStatus < tribeStatus)
    {
        return false;
    }
    if(extSign < __rhs.extSign)
    {
        return true;
    }
    else if(__rhs.extSign < extSign)
    {
        return false;
    }
    if(groupStamp < __rhs.groupStamp)
    {
        return true;
    }
    else if(__rhs.groupStamp < groupStamp)
    {
        return false;
    }
    if(openTribe < __rhs.openTribe)
    {
        return true;
    }
    else if(__rhs.openTribe < openTribe)
    {
        return false;
    }
    return false;
}

void
ALiIMDBTribe::STribeId::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(tribeId);
    __os->write(name);
    __os->write(tribeLevel);
    __os->write(tribeStatus);
    __os->write(extSign);
    __os->write(groupStamp);
    __os->write(openTribe);
}

void
ALiIMDBTribe::STribeId::__read(::IceInternal::BasicStream* __is)
{
    __is->read(tribeId);
    __is->read(name);
    __is->read(tribeLevel);
    __is->read(tribeStatus);
    __is->read(extSign);
    __is->read(groupStamp);
    __is->read(openTribe);
}

bool
ALiIMDBTribe::STribeId2::operator==(const STribeId2& __rhs) const
{
    return !operator!=(__rhs);
}

bool
ALiIMDBTribe::STribeId2::operator!=(const STribeId2& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeId != __rhs.tribeId)
    {
        return true;
    }
    if(name != __rhs.name)
    {
        return true;
    }
    if(tribeLevel != __rhs.tribeLevel)
    {
        return true;
    }
    if(tribeStatus != __rhs.tribeStatus)
    {
        return true;
    }
    if(extSign != __rhs.extSign)
    {
        return true;
    }
    if(groupStamp != __rhs.groupStamp)
    {
        return true;
    }
    if(openTribe != __rhs.openTribe)
    {
        return true;
    }
    if(popupFlag != __rhs.popupFlag)
    {
        return true;
    }
    return false;
}

bool
ALiIMDBTribe::STribeId2::operator<(const STribeId2& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeId < __rhs.tribeId)
    {
        return true;
    }
    else if(__rhs.tribeId < tribeId)
    {
        return false;
    }
    if(name < __rhs.name)
    {
        return true;
    }
    else if(__rhs.name < name)
    {
        return false;
    }
    if(tribeLevel < __rhs.tribeLevel)
    {
        return true;
    }
    else if(__rhs.tribeLevel < tribeLevel)
    {
        return false;
    }
    if(tribeStatus < __rhs.tribeStatus)
    {
        return true;
    }
    else if(__rhs.tribeStatus < tribeStatus)
    {
        return false;
    }
    if(extSign < __rhs.extSign)
    {
        return true;
    }
    else if(__rhs.extSign < extSign)
    {
        return false;
    }
    if(groupStamp < __rhs.groupStamp)
    {
        return true;
    }
    else if(__rhs.groupStamp < groupStamp)
    {
        return false;
    }
    if(openTribe < __rhs.openTribe)
    {
        return true;
    }
    else if(__rhs.openTribe < openTribe)
    {
        return false;
    }
    if(popupFlag < __rhs.popupFlag)
    {
        return true;
    }
    else if(__rhs.popupFlag < popupFlag)
    {
        return false;
    }
    return false;
}

void
ALiIMDBTribe::STribeId2::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(tribeId);
    __os->write(name);
    __os->write(tribeLevel);
    __os->write(tribeStatus);
    __os->write(extSign);
    __os->write(groupStamp);
    __os->write(openTribe);
    __os->write(popupFlag);
}

void
ALiIMDBTribe::STribeId2::__read(::IceInternal::BasicStream* __is)
{
    __is->read(tribeId);
    __is->read(name);
    __is->read(tribeLevel);
    __is->read(tribeStatus);
    __is->read(extSign);
    __is->read(groupStamp);
    __is->read(openTribe);
    __is->read(popupFlag);
}

bool
ALiIMDBTribe::STribeIdDb::operator==(const STribeIdDb& __rhs) const
{
    return !operator!=(__rhs);
}

bool
ALiIMDBTribe::STribeIdDb::operator!=(const STribeIdDb& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeId != __rhs.tribeId)
    {
        return true;
    }
    if(name != __rhs.name)
    {
        return true;
    }
    if(tribeLevel != __rhs.tribeLevel)
    {
        return true;
    }
    if(tribeStatus != __rhs.tribeStatus)
    {
        return true;
    }
    return false;
}

bool
ALiIMDBTribe::STribeIdDb::operator<(const STribeIdDb& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeId < __rhs.tribeId)
    {
        return true;
    }
    else if(__rhs.tribeId < tribeId)
    {
        return false;
    }
    if(name < __rhs.name)
    {
        return true;
    }
    else if(__rhs.name < name)
    {
        return false;
    }
    if(tribeLevel < __rhs.tribeLevel)
    {
        return true;
    }
    else if(__rhs.tribeLevel < tribeLevel)
    {
        return false;
    }
    if(tribeStatus < __rhs.tribeStatus)
    {
        return true;
    }
    else if(__rhs.tribeStatus < tribeStatus)
    {
        return false;
    }
    return false;
}

void
ALiIMDBTribe::STribeIdDb::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(tribeId);
    __os->write(name);
    __os->write(tribeLevel);
    __os->write(tribeStatus);
}

void
ALiIMDBTribe::STribeIdDb::__read(::IceInternal::BasicStream* __is)
{
    __is->read(tribeId);
    __is->read(name);
    __is->read(tribeLevel);
    __is->read(tribeStatus);
}

bool
ALiIMDBTribe::STribeGroup::operator==(const STribeGroup& __rhs) const
{
    return !operator!=(__rhs);
}

bool
ALiIMDBTribe::STribeGroup::operator!=(const STribeGroup& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeId != __rhs.tribeId)
    {
        return true;
    }
    if(groupId != __rhs.groupId)
    {
        return true;
    }
    if(groupName != __rhs.groupName)
    {
        return true;
    }
    if(parentId != __rhs.parentId)
    {
        return true;
    }
    return false;
}

bool
ALiIMDBTribe::STribeGroup::operator<(const STribeGroup& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeId < __rhs.tribeId)
    {
        return true;
    }
    else if(__rhs.tribeId < tribeId)
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
    if(groupName < __rhs.groupName)
    {
        return true;
    }
    else if(__rhs.groupName < groupName)
    {
        return false;
    }
    if(parentId < __rhs.parentId)
    {
        return true;
    }
    else if(__rhs.parentId < parentId)
    {
        return false;
    }
    return false;
}

void
ALiIMDBTribe::STribeGroup::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(tribeId);
    __os->write(groupId);
    __os->write(groupName);
    __os->write(parentId);
}

void
ALiIMDBTribe::STribeGroup::__read(::IceInternal::BasicStream* __is)
{
    __is->read(tribeId);
    __is->read(groupId);
    __is->read(groupName);
    __is->read(parentId);
}

void
ALiIMDBTribe::__write(::IceInternal::BasicStream* __os, const ::ALiIMDBTribe::STribeMemberInfo* begin, const ::ALiIMDBTribe::STribeMemberInfo* end, ::ALiIMDBTribe::__U__STribeMemberInfoSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
ALiIMDBTribe::__read(::IceInternal::BasicStream* __is, ::ALiIMDBTribe::STribeMemberInfoSeq& v, ::ALiIMDBTribe::__U__STribeMemberInfoSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 54);
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
ALiIMDBTribe::__write(::IceInternal::BasicStream* __os, const ::ALiIMDBTribe::STribeMemberInfo2* begin, const ::ALiIMDBTribe::STribeMemberInfo2* end, ::ALiIMDBTribe::__U__STribeMemberInfoSeq2)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
ALiIMDBTribe::__read(::IceInternal::BasicStream* __is, ::ALiIMDBTribe::STribeMemberInfoSeq2& v, ::ALiIMDBTribe::__U__STribeMemberInfoSeq2)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 58);
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
ALiIMDBTribe::__write(::IceInternal::BasicStream* __os, const ::ALiIMDBTribe::STribeOfflineMsg* begin, const ::ALiIMDBTribe::STribeOfflineMsg* end, ::ALiIMDBTribe::__U__STribeOfflineMsgSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
ALiIMDBTribe::__read(::IceInternal::BasicStream* __is, ::ALiIMDBTribe::STribeOfflineMsgSeq& v, ::ALiIMDBTribe::__U__STribeOfflineMsgSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 16);
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
ALiIMDBTribe::__write(::IceInternal::BasicStream* __os, const ::ALiIMDBTribe::STribeMember* begin, const ::ALiIMDBTribe::STribeMember* end, ::ALiIMDBTribe::__U__STribeMemberSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
ALiIMDBTribe::__read(::IceInternal::BasicStream* __is, ::ALiIMDBTribe::STribeMemberSeq& v, ::ALiIMDBTribe::__U__STribeMemberSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 26);
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
ALiIMDBTribe::__write(::IceInternal::BasicStream* __os, const ::ALiIMDBTribe::STribeId* begin, const ::ALiIMDBTribe::STribeId* end, ::ALiIMDBTribe::__U__STribeIdSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
ALiIMDBTribe::__read(::IceInternal::BasicStream* __is, ::ALiIMDBTribe::STribeIdSeq& v, ::ALiIMDBTribe::__U__STribeIdSeq)
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
ALiIMDBTribe::__write(::IceInternal::BasicStream* __os, const ::ALiIMDBTribe::STribeId2* begin, const ::ALiIMDBTribe::STribeId2* end, ::ALiIMDBTribe::__U__STribeIdSeq2)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
ALiIMDBTribe::__read(::IceInternal::BasicStream* __is, ::ALiIMDBTribe::STribeIdSeq2& v, ::ALiIMDBTribe::__U__STribeIdSeq2)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 22);
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
ALiIMDBTribe::__write(::IceInternal::BasicStream* __os, const ::ALiIMDBTribe::STribeIdDb* begin, const ::ALiIMDBTribe::STribeIdDb* end, ::ALiIMDBTribe::__U__STribeIdDbSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
ALiIMDBTribe::__read(::IceInternal::BasicStream* __is, ::ALiIMDBTribe::STribeIdDbSeq& v, ::ALiIMDBTribe::__U__STribeIdDbSeq)
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

void
ALiIMDBTribe::__write(::IceInternal::BasicStream* __os, const ::ALiIMDBTribe::STribeGroup* begin, const ::ALiIMDBTribe::STribeGroup* end, ::ALiIMDBTribe::__U__STribeGroupSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
ALiIMDBTribe::__read(::IceInternal::BasicStream* __is, ::ALiIMDBTribe::STribeGroupSeq& v, ::ALiIMDBTribe::__U__STribeGroupSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 25);
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
ALiIMDBTribe::STribeCard::operator==(const STribeCard& __rhs) const
{
    return !operator!=(__rhs);
}

bool
ALiIMDBTribe::STribeCard::operator!=(const STribeCard& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeId != __rhs.tribeId)
    {
        return true;
    }
    if(memberId != __rhs.memberId)
    {
        return true;
    }
    if(realName != __rhs.realName)
    {
        return true;
    }
    if(phoneNum != __rhs.phoneNum)
    {
        return true;
    }
    if(mobileNum != __rhs.mobileNum)
    {
        return true;
    }
    if(email != __rhs.email)
    {
        return true;
    }
    if(address != __rhs.address)
    {
        return true;
    }
    if(memo != __rhs.memo)
    {
        return true;
    }
    return false;
}

bool
ALiIMDBTribe::STribeCard::operator<(const STribeCard& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeId < __rhs.tribeId)
    {
        return true;
    }
    else if(__rhs.tribeId < tribeId)
    {
        return false;
    }
    if(memberId < __rhs.memberId)
    {
        return true;
    }
    else if(__rhs.memberId < memberId)
    {
        return false;
    }
    if(realName < __rhs.realName)
    {
        return true;
    }
    else if(__rhs.realName < realName)
    {
        return false;
    }
    if(phoneNum < __rhs.phoneNum)
    {
        return true;
    }
    else if(__rhs.phoneNum < phoneNum)
    {
        return false;
    }
    if(mobileNum < __rhs.mobileNum)
    {
        return true;
    }
    else if(__rhs.mobileNum < mobileNum)
    {
        return false;
    }
    if(email < __rhs.email)
    {
        return true;
    }
    else if(__rhs.email < email)
    {
        return false;
    }
    if(address < __rhs.address)
    {
        return true;
    }
    else if(__rhs.address < address)
    {
        return false;
    }
    if(memo < __rhs.memo)
    {
        return true;
    }
    else if(__rhs.memo < memo)
    {
        return false;
    }
    return false;
}

void
ALiIMDBTribe::STribeCard::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(tribeId);
    __os->write(memberId);
    __os->write(realName);
    __os->write(phoneNum);
    __os->write(mobileNum);
    __os->write(email);
    __os->write(address);
    __os->write(memo);
}

void
ALiIMDBTribe::STribeCard::__read(::IceInternal::BasicStream* __is)
{
    __is->read(tribeId);
    __is->read(memberId);
    __is->read(realName);
    __is->read(phoneNum);
    __is->read(mobileNum);
    __is->read(email);
    __is->read(address);
    __is->read(memo);
}

bool
ALiIMDBTribe::STribeInfo2::operator==(const STribeInfo2& __rhs) const
{
    return !operator!=(__rhs);
}

bool
ALiIMDBTribe::STribeInfo2::operator!=(const STribeInfo2& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeId != __rhs.tribeId)
    {
        return true;
    }
    if(name != __rhs.name)
    {
        return true;
    }
    if(masterId != __rhs.masterId)
    {
        return true;
    }
    if(createrId != __rhs.createrId)
    {
        return true;
    }
    if(tribeclass != __rhs.tribeclass)
    {
        return true;
    }
    if(describe != __rhs.describe)
    {
        return true;
    }
    if(bulletin != __rhs.bulletin)
    {
        return true;
    }
    if(checkMode != __rhs.checkMode)
    {
        return true;
    }
    if(password != __rhs.password)
    {
        return true;
    }
    if(validateCode != __rhs.validateCode)
    {
        return true;
    }
    if(lastMsgid != __rhs.lastMsgid)
    {
        return true;
    }
    if(memberTimes != __rhs.memberTimes)
    {
        return true;
    }
    if(onlineTimes != __rhs.onlineTimes)
    {
        return true;
    }
    if(onlineDegree != __rhs.onlineDegree)
    {
        return true;
    }
    if(discussDegree != __rhs.discussDegree)
    {
        return true;
    }
    if(rewardDegree != __rhs.rewardDegree)
    {
        return true;
    }
    if(masterOffer != __rhs.masterOffer)
    {
        return true;
    }
    if(totalDegree != __rhs.totalDegree)
    {
        return true;
    }
    if(keyword != __rhs.keyword)
    {
        return true;
    }
    if(allowVisitor != __rhs.allowVisitor)
    {
        return true;
    }
    if(forbidSearch != __rhs.forbidSearch)
    {
        return true;
    }
    if(extSign != __rhs.extSign)
    {
        return true;
    }
    if(groupStamp != __rhs.groupStamp)
    {
        return true;
    }
    if(blackStamp != __rhs.blackStamp)
    {
        return true;
    }
    if(webTid != __rhs.webTid)
    {
        return true;
    }
    if(groupId != __rhs.groupId)
    {
        return true;
    }
    return false;
}

bool
ALiIMDBTribe::STribeInfo2::operator<(const STribeInfo2& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeId < __rhs.tribeId)
    {
        return true;
    }
    else if(__rhs.tribeId < tribeId)
    {
        return false;
    }
    if(name < __rhs.name)
    {
        return true;
    }
    else if(__rhs.name < name)
    {
        return false;
    }
    if(masterId < __rhs.masterId)
    {
        return true;
    }
    else if(__rhs.masterId < masterId)
    {
        return false;
    }
    if(createrId < __rhs.createrId)
    {
        return true;
    }
    else if(__rhs.createrId < createrId)
    {
        return false;
    }
    if(tribeclass < __rhs.tribeclass)
    {
        return true;
    }
    else if(__rhs.tribeclass < tribeclass)
    {
        return false;
    }
    if(describe < __rhs.describe)
    {
        return true;
    }
    else if(__rhs.describe < describe)
    {
        return false;
    }
    if(bulletin < __rhs.bulletin)
    {
        return true;
    }
    else if(__rhs.bulletin < bulletin)
    {
        return false;
    }
    if(checkMode < __rhs.checkMode)
    {
        return true;
    }
    else if(__rhs.checkMode < checkMode)
    {
        return false;
    }
    if(password < __rhs.password)
    {
        return true;
    }
    else if(__rhs.password < password)
    {
        return false;
    }
    if(validateCode < __rhs.validateCode)
    {
        return true;
    }
    else if(__rhs.validateCode < validateCode)
    {
        return false;
    }
    if(lastMsgid < __rhs.lastMsgid)
    {
        return true;
    }
    else if(__rhs.lastMsgid < lastMsgid)
    {
        return false;
    }
    if(memberTimes < __rhs.memberTimes)
    {
        return true;
    }
    else if(__rhs.memberTimes < memberTimes)
    {
        return false;
    }
    if(onlineTimes < __rhs.onlineTimes)
    {
        return true;
    }
    else if(__rhs.onlineTimes < onlineTimes)
    {
        return false;
    }
    if(onlineDegree < __rhs.onlineDegree)
    {
        return true;
    }
    else if(__rhs.onlineDegree < onlineDegree)
    {
        return false;
    }
    if(discussDegree < __rhs.discussDegree)
    {
        return true;
    }
    else if(__rhs.discussDegree < discussDegree)
    {
        return false;
    }
    if(rewardDegree < __rhs.rewardDegree)
    {
        return true;
    }
    else if(__rhs.rewardDegree < rewardDegree)
    {
        return false;
    }
    if(masterOffer < __rhs.masterOffer)
    {
        return true;
    }
    else if(__rhs.masterOffer < masterOffer)
    {
        return false;
    }
    if(totalDegree < __rhs.totalDegree)
    {
        return true;
    }
    else if(__rhs.totalDegree < totalDegree)
    {
        return false;
    }
    if(keyword < __rhs.keyword)
    {
        return true;
    }
    else if(__rhs.keyword < keyword)
    {
        return false;
    }
    if(allowVisitor < __rhs.allowVisitor)
    {
        return true;
    }
    else if(__rhs.allowVisitor < allowVisitor)
    {
        return false;
    }
    if(forbidSearch < __rhs.forbidSearch)
    {
        return true;
    }
    else if(__rhs.forbidSearch < forbidSearch)
    {
        return false;
    }
    if(extSign < __rhs.extSign)
    {
        return true;
    }
    else if(__rhs.extSign < extSign)
    {
        return false;
    }
    if(groupStamp < __rhs.groupStamp)
    {
        return true;
    }
    else if(__rhs.groupStamp < groupStamp)
    {
        return false;
    }
    if(blackStamp < __rhs.blackStamp)
    {
        return true;
    }
    else if(__rhs.blackStamp < blackStamp)
    {
        return false;
    }
    if(webTid < __rhs.webTid)
    {
        return true;
    }
    else if(__rhs.webTid < webTid)
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
    return false;
}

void
ALiIMDBTribe::STribeInfo2::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(tribeId);
    __os->write(name);
    __os->write(masterId);
    __os->write(createrId);
    __os->write(tribeclass);
    __os->write(describe);
    __os->write(bulletin);
    __os->write(checkMode);
    __os->write(password);
    __os->write(validateCode);
    __os->write(lastMsgid);
    __os->write(memberTimes);
    __os->write(onlineTimes);
    __os->write(onlineDegree);
    __os->write(discussDegree);
    __os->write(rewardDegree);
    __os->write(masterOffer);
    __os->write(totalDegree);
    __os->write(keyword);
    __os->write(allowVisitor);
    __os->write(forbidSearch);
    __os->write(extSign);
    __os->write(groupStamp);
    __os->write(blackStamp);
    __os->write(webTid);
    __os->write(groupId);
}

void
ALiIMDBTribe::STribeInfo2::__read(::IceInternal::BasicStream* __is)
{
    __is->read(tribeId);
    __is->read(name);
    __is->read(masterId);
    __is->read(createrId);
    __is->read(tribeclass);
    __is->read(describe);
    __is->read(bulletin);
    __is->read(checkMode);
    __is->read(password);
    __is->read(validateCode);
    __is->read(lastMsgid);
    __is->read(memberTimes);
    __is->read(onlineTimes);
    __is->read(onlineDegree);
    __is->read(discussDegree);
    __is->read(rewardDegree);
    __is->read(masterOffer);
    __is->read(totalDegree);
    __is->read(keyword);
    __is->read(allowVisitor);
    __is->read(forbidSearch);
    __is->read(extSign);
    __is->read(groupStamp);
    __is->read(blackStamp);
    __is->read(webTid);
    __is->read(groupId);
}

bool
ALiIMDBTribe::STribeMember2::operator==(const STribeMember2& __rhs) const
{
    return !operator!=(__rhs);
}

bool
ALiIMDBTribe::STribeMember2::operator!=(const STribeMember2& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeId != __rhs.tribeId)
    {
        return true;
    }
    if(memberId != __rhs.memberId)
    {
        return true;
    }
    if(name != __rhs.name)
    {
        return true;
    }
    if(level != __rhs.level)
    {
        return true;
    }
    if(lastMsgid != __rhs.lastMsgid)
    {
        return true;
    }
    if(operId != __rhs.operId)
    {
        return true;
    }
    if(groupId != __rhs.groupId)
    {
        return true;
    }
    return false;
}

bool
ALiIMDBTribe::STribeMember2::operator<(const STribeMember2& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeId < __rhs.tribeId)
    {
        return true;
    }
    else if(__rhs.tribeId < tribeId)
    {
        return false;
    }
    if(memberId < __rhs.memberId)
    {
        return true;
    }
    else if(__rhs.memberId < memberId)
    {
        return false;
    }
    if(name < __rhs.name)
    {
        return true;
    }
    else if(__rhs.name < name)
    {
        return false;
    }
    if(level < __rhs.level)
    {
        return true;
    }
    else if(__rhs.level < level)
    {
        return false;
    }
    if(lastMsgid < __rhs.lastMsgid)
    {
        return true;
    }
    else if(__rhs.lastMsgid < lastMsgid)
    {
        return false;
    }
    if(operId < __rhs.operId)
    {
        return true;
    }
    else if(__rhs.operId < operId)
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
    return false;
}

void
ALiIMDBTribe::STribeMember2::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(tribeId);
    __os->write(memberId);
    __os->write(name);
    __os->write(level);
    __os->write(lastMsgid);
    __os->write(operId);
    __os->write(groupId);
}

void
ALiIMDBTribe::STribeMember2::__read(::IceInternal::BasicStream* __is)
{
    __is->read(tribeId);
    __is->read(memberId);
    __is->read(name);
    __is->read(level);
    __is->read(lastMsgid);
    __is->read(operId);
    __is->read(groupId);
}

void
ALiIMDBTribe::__write(::IceInternal::BasicStream* __os, const ::ALiIMDBTribe::STribeMember2* begin, const ::ALiIMDBTribe::STribeMember2* end, ::ALiIMDBTribe::__U__STribeMember2Seq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
ALiIMDBTribe::__read(::IceInternal::BasicStream* __is, ::ALiIMDBTribe::STribeMember2Seq& v, ::ALiIMDBTribe::__U__STribeMember2Seq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 27);
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
ALiIMDBTribe::STribeInfo3::operator==(const STribeInfo3& __rhs) const
{
    return !operator!=(__rhs);
}

bool
ALiIMDBTribe::STribeInfo3::operator!=(const STribeInfo3& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeId != __rhs.tribeId)
    {
        return true;
    }
    if(name != __rhs.name)
    {
        return true;
    }
    if(masterId != __rhs.masterId)
    {
        return true;
    }
    if(createrId != __rhs.createrId)
    {
        return true;
    }
    if(tribeclass != __rhs.tribeclass)
    {
        return true;
    }
    if(describe != __rhs.describe)
    {
        return true;
    }
    if(bulletin != __rhs.bulletin)
    {
        return true;
    }
    if(checkMode != __rhs.checkMode)
    {
        return true;
    }
    if(password != __rhs.password)
    {
        return true;
    }
    if(validateCode != __rhs.validateCode)
    {
        return true;
    }
    if(lastMsgid != __rhs.lastMsgid)
    {
        return true;
    }
    if(memberTimes != __rhs.memberTimes)
    {
        return true;
    }
    if(onlineTimes != __rhs.onlineTimes)
    {
        return true;
    }
    if(onlineDegree != __rhs.onlineDegree)
    {
        return true;
    }
    if(discussDegree != __rhs.discussDegree)
    {
        return true;
    }
    if(rewardDegree != __rhs.rewardDegree)
    {
        return true;
    }
    if(masterOffer != __rhs.masterOffer)
    {
        return true;
    }
    if(totalDegree != __rhs.totalDegree)
    {
        return true;
    }
    if(keyword != __rhs.keyword)
    {
        return true;
    }
    if(allowVisitor != __rhs.allowVisitor)
    {
        return true;
    }
    if(forbidSearch != __rhs.forbidSearch)
    {
        return true;
    }
    if(extSign != __rhs.extSign)
    {
        return true;
    }
    if(groupStamp != __rhs.groupStamp)
    {
        return true;
    }
    if(blackStamp != __rhs.blackStamp)
    {
        return true;
    }
    if(webTid != __rhs.webTid)
    {
        return true;
    }
    if(groupId != __rhs.groupId)
    {
        return true;
    }
    if(tribeLimit != __rhs.tribeLimit)
    {
        return true;
    }
    return false;
}

bool
ALiIMDBTribe::STribeInfo3::operator<(const STribeInfo3& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeId < __rhs.tribeId)
    {
        return true;
    }
    else if(__rhs.tribeId < tribeId)
    {
        return false;
    }
    if(name < __rhs.name)
    {
        return true;
    }
    else if(__rhs.name < name)
    {
        return false;
    }
    if(masterId < __rhs.masterId)
    {
        return true;
    }
    else if(__rhs.masterId < masterId)
    {
        return false;
    }
    if(createrId < __rhs.createrId)
    {
        return true;
    }
    else if(__rhs.createrId < createrId)
    {
        return false;
    }
    if(tribeclass < __rhs.tribeclass)
    {
        return true;
    }
    else if(__rhs.tribeclass < tribeclass)
    {
        return false;
    }
    if(describe < __rhs.describe)
    {
        return true;
    }
    else if(__rhs.describe < describe)
    {
        return false;
    }
    if(bulletin < __rhs.bulletin)
    {
        return true;
    }
    else if(__rhs.bulletin < bulletin)
    {
        return false;
    }
    if(checkMode < __rhs.checkMode)
    {
        return true;
    }
    else if(__rhs.checkMode < checkMode)
    {
        return false;
    }
    if(password < __rhs.password)
    {
        return true;
    }
    else if(__rhs.password < password)
    {
        return false;
    }
    if(validateCode < __rhs.validateCode)
    {
        return true;
    }
    else if(__rhs.validateCode < validateCode)
    {
        return false;
    }
    if(lastMsgid < __rhs.lastMsgid)
    {
        return true;
    }
    else if(__rhs.lastMsgid < lastMsgid)
    {
        return false;
    }
    if(memberTimes < __rhs.memberTimes)
    {
        return true;
    }
    else if(__rhs.memberTimes < memberTimes)
    {
        return false;
    }
    if(onlineTimes < __rhs.onlineTimes)
    {
        return true;
    }
    else if(__rhs.onlineTimes < onlineTimes)
    {
        return false;
    }
    if(onlineDegree < __rhs.onlineDegree)
    {
        return true;
    }
    else if(__rhs.onlineDegree < onlineDegree)
    {
        return false;
    }
    if(discussDegree < __rhs.discussDegree)
    {
        return true;
    }
    else if(__rhs.discussDegree < discussDegree)
    {
        return false;
    }
    if(rewardDegree < __rhs.rewardDegree)
    {
        return true;
    }
    else if(__rhs.rewardDegree < rewardDegree)
    {
        return false;
    }
    if(masterOffer < __rhs.masterOffer)
    {
        return true;
    }
    else if(__rhs.masterOffer < masterOffer)
    {
        return false;
    }
    if(totalDegree < __rhs.totalDegree)
    {
        return true;
    }
    else if(__rhs.totalDegree < totalDegree)
    {
        return false;
    }
    if(keyword < __rhs.keyword)
    {
        return true;
    }
    else if(__rhs.keyword < keyword)
    {
        return false;
    }
    if(allowVisitor < __rhs.allowVisitor)
    {
        return true;
    }
    else if(__rhs.allowVisitor < allowVisitor)
    {
        return false;
    }
    if(forbidSearch < __rhs.forbidSearch)
    {
        return true;
    }
    else if(__rhs.forbidSearch < forbidSearch)
    {
        return false;
    }
    if(extSign < __rhs.extSign)
    {
        return true;
    }
    else if(__rhs.extSign < extSign)
    {
        return false;
    }
    if(groupStamp < __rhs.groupStamp)
    {
        return true;
    }
    else if(__rhs.groupStamp < groupStamp)
    {
        return false;
    }
    if(blackStamp < __rhs.blackStamp)
    {
        return true;
    }
    else if(__rhs.blackStamp < blackStamp)
    {
        return false;
    }
    if(webTid < __rhs.webTid)
    {
        return true;
    }
    else if(__rhs.webTid < webTid)
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
    if(tribeLimit < __rhs.tribeLimit)
    {
        return true;
    }
    else if(__rhs.tribeLimit < tribeLimit)
    {
        return false;
    }
    return false;
}

void
ALiIMDBTribe::STribeInfo3::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(tribeId);
    __os->write(name);
    __os->write(masterId);
    __os->write(createrId);
    __os->write(tribeclass);
    __os->write(describe);
    __os->write(bulletin);
    __os->write(checkMode);
    __os->write(password);
    __os->write(validateCode);
    __os->write(lastMsgid);
    __os->write(memberTimes);
    __os->write(onlineTimes);
    __os->write(onlineDegree);
    __os->write(discussDegree);
    __os->write(rewardDegree);
    __os->write(masterOffer);
    __os->write(totalDegree);
    __os->write(keyword);
    __os->write(allowVisitor);
    __os->write(forbidSearch);
    __os->write(extSign);
    __os->write(groupStamp);
    __os->write(blackStamp);
    __os->write(webTid);
    __os->write(groupId);
    __os->write(tribeLimit);
}

void
ALiIMDBTribe::STribeInfo3::__read(::IceInternal::BasicStream* __is)
{
    __is->read(tribeId);
    __is->read(name);
    __is->read(masterId);
    __is->read(createrId);
    __is->read(tribeclass);
    __is->read(describe);
    __is->read(bulletin);
    __is->read(checkMode);
    __is->read(password);
    __is->read(validateCode);
    __is->read(lastMsgid);
    __is->read(memberTimes);
    __is->read(onlineTimes);
    __is->read(onlineDegree);
    __is->read(discussDegree);
    __is->read(rewardDegree);
    __is->read(masterOffer);
    __is->read(totalDegree);
    __is->read(keyword);
    __is->read(allowVisitor);
    __is->read(forbidSearch);
    __is->read(extSign);
    __is->read(groupStamp);
    __is->read(blackStamp);
    __is->read(webTid);
    __is->read(groupId);
    __is->read(tribeLimit);
}

bool
ALiIMDBTribe::SWebTribeGroup::operator==(const SWebTribeGroup& __rhs) const
{
    return !operator!=(__rhs);
}

bool
ALiIMDBTribe::SWebTribeGroup::operator!=(const SWebTribeGroup& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(groupId != __rhs.groupId)
    {
        return true;
    }
    if(groupName != __rhs.groupName)
    {
        return true;
    }
    if(serviceId != __rhs.serviceId)
    {
        return true;
    }
    if(siteId != __rhs.siteId)
    {
        return true;
    }
    if(webId != __rhs.webId)
    {
        return true;
    }
    return false;
}

bool
ALiIMDBTribe::SWebTribeGroup::operator<(const SWebTribeGroup& __rhs) const
{
    if(this == &__rhs)
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
    if(groupName < __rhs.groupName)
    {
        return true;
    }
    else if(__rhs.groupName < groupName)
    {
        return false;
    }
    if(serviceId < __rhs.serviceId)
    {
        return true;
    }
    else if(__rhs.serviceId < serviceId)
    {
        return false;
    }
    if(siteId < __rhs.siteId)
    {
        return true;
    }
    else if(__rhs.siteId < siteId)
    {
        return false;
    }
    if(webId < __rhs.webId)
    {
        return true;
    }
    else if(__rhs.webId < webId)
    {
        return false;
    }
    return false;
}

void
ALiIMDBTribe::SWebTribeGroup::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(groupId);
    __os->write(groupName);
    __os->write(serviceId);
    __os->write(siteId);
    __os->write(webId);
}

void
ALiIMDBTribe::SWebTribeGroup::__read(::IceInternal::BasicStream* __is)
{
    __is->read(groupId);
    __is->read(groupName);
    __is->read(serviceId);
    __is->read(siteId);
    __is->read(webId);
}

void
ALiIMDBTribe::__write(::IceInternal::BasicStream* __os, const ::ALiIMDBTribe::SWebTribeGroup* begin, const ::ALiIMDBTribe::SWebTribeGroup* end, ::ALiIMDBTribe::__U__SWebTribeGroupSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
ALiIMDBTribe::__read(::IceInternal::BasicStream* __is, ::ALiIMDBTribe::SWebTribeGroupSeq& v, ::ALiIMDBTribe::__U__SWebTribeGroupSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 12);
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
ALiIMDBTribe::SWebTribeId::operator==(const SWebTribeId& __rhs) const
{
    return !operator!=(__rhs);
}

bool
ALiIMDBTribe::SWebTribeId::operator!=(const SWebTribeId& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeId != __rhs.tribeId)
    {
        return true;
    }
    if(name != __rhs.name)
    {
        return true;
    }
    if(tribeLevel != __rhs.tribeLevel)
    {
        return true;
    }
    if(tribeStatus != __rhs.tribeStatus)
    {
        return true;
    }
    if(extSign != __rhs.extSign)
    {
        return true;
    }
    if(groupStamp != __rhs.groupStamp)
    {
        return true;
    }
    if(openTribe != __rhs.openTribe)
    {
        return true;
    }
    if(webTid != __rhs.webTid)
    {
        return true;
    }
    if(groupId != __rhs.groupId)
    {
        return true;
    }
    return false;
}

bool
ALiIMDBTribe::SWebTribeId::operator<(const SWebTribeId& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(tribeId < __rhs.tribeId)
    {
        return true;
    }
    else if(__rhs.tribeId < tribeId)
    {
        return false;
    }
    if(name < __rhs.name)
    {
        return true;
    }
    else if(__rhs.name < name)
    {
        return false;
    }
    if(tribeLevel < __rhs.tribeLevel)
    {
        return true;
    }
    else if(__rhs.tribeLevel < tribeLevel)
    {
        return false;
    }
    if(tribeStatus < __rhs.tribeStatus)
    {
        return true;
    }
    else if(__rhs.tribeStatus < tribeStatus)
    {
        return false;
    }
    if(extSign < __rhs.extSign)
    {
        return true;
    }
    else if(__rhs.extSign < extSign)
    {
        return false;
    }
    if(groupStamp < __rhs.groupStamp)
    {
        return true;
    }
    else if(__rhs.groupStamp < groupStamp)
    {
        return false;
    }
    if(openTribe < __rhs.openTribe)
    {
        return true;
    }
    else if(__rhs.openTribe < openTribe)
    {
        return false;
    }
    if(webTid < __rhs.webTid)
    {
        return true;
    }
    else if(__rhs.webTid < webTid)
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
    return false;
}

void
ALiIMDBTribe::SWebTribeId::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(tribeId);
    __os->write(name);
    __os->write(tribeLevel);
    __os->write(tribeStatus);
    __os->write(extSign);
    __os->write(groupStamp);
    __os->write(openTribe);
    __os->write(webTid);
    __os->write(groupId);
}

void
ALiIMDBTribe::SWebTribeId::__read(::IceInternal::BasicStream* __is)
{
    __is->read(tribeId);
    __is->read(name);
    __is->read(tribeLevel);
    __is->read(tribeStatus);
    __is->read(extSign);
    __is->read(groupStamp);
    __is->read(openTribe);
    __is->read(webTid);
    __is->read(groupId);
}

void
ALiIMDBTribe::__write(::IceInternal::BasicStream* __os, const ::ALiIMDBTribe::SWebTribeId* begin, const ::ALiIMDBTribe::SWebTribeId* end, ::ALiIMDBTribe::__U__SWebTribeIdSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
ALiIMDBTribe::__read(::IceInternal::BasicStream* __is, ::ALiIMDBTribe::SWebTribeIdSeq& v, ::ALiIMDBTribe::__U__SWebTribeIdSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 29);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}
