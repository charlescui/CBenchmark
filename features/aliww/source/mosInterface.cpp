// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `mosInterface.ice'

#include <mosInterface.h>
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

static const ::std::string __AMOServer__MOSInterface__getUserStatus_name = "getUserStatus";

static const ::std::string __AMOServer__MOSInterface__getUserStatusIp_name = "getUserStatusIp";

static const ::std::string __AMOServer__MOSInterface__getUserRealStatus_name = "getUserRealStatus";

static const ::std::string __AMOServer__MOSInterface__getUserRealStatusIp_name = "getUserRealStatusIp";

static const ::std::string __AMOServer__MOSInterface__getUserLastLoginTime_name = "getUserLastLoginTime";

static const ::std::string __AMOServer__MOSInterface__getUserCount_name = "getUserCount";

static const ::std::string __AMOServer__MOSInterface__getIpUsers_name = "getIpUsers";

static const ::std::string __AMOServer__MOSInterface__getIpUsersEx_name = "getIpUsersEx";

static const ::std::string __AMOServer__MOSInterface__getSameIpSiteUsers_name = "getSameIpSiteUsers";

static const ::std::string __AMOServer__MOSInterface__getOnlineUsers_name = "getOnlineUsers";

static const ::std::string __AMOServer__MOSInterface__getOnlineUser_name = "getOnlineUser";

static const ::std::string __AMOServer__MOSInterface__getOnlineUserEx_name = "getOnlineUserEx";

static const ::std::string __AMOServer__MOSInterface__getEhmsGrpSts_name = "getEhmsGrpSts";

void
IceInternal::incRef(::AMOServer::MOSInterface* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::AMOServer::MOSInterface* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::AMOServer::MOSInterface* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::AMOServer::MOSInterface* p)
{
    p->__decRef();
}

void
AMOServer::__write(::IceInternal::BasicStream* __os, const ::AMOServer::MOSInterfacePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
AMOServer::__read(::IceInternal::BasicStream* __is, ::AMOServer::MOSInterfacePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::AMOServer::MOSInterface;
        v->__copyFrom(proxy);
    }
}

void
AMOServer::__write(::IceInternal::BasicStream* __os, const ::AMOServer::MOSInterfacePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

bool
AMOServer::MosStatusIp::operator==(const MosStatusIp& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AMOServer::MosStatusIp::operator!=(const MosStatusIp& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(userId != __rhs.userId)
    {
        return true;
    }
    if(status != __rhs.status)
    {
        return true;
    }
    if(ip != __rhs.ip)
    {
        return true;
    }
    return false;
}

bool
AMOServer::MosStatusIp::operator<(const MosStatusIp& __rhs) const
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
    if(status < __rhs.status)
    {
        return true;
    }
    else if(__rhs.status < status)
    {
        return false;
    }
    if(ip < __rhs.ip)
    {
        return true;
    }
    else if(__rhs.ip < ip)
    {
        return false;
    }
    return false;
}

void
AMOServer::MosStatusIp::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(userId);
    __os->write(status);
    __os->write(ip);
}

void
AMOServer::MosStatusIp::__read(::IceInternal::BasicStream* __is)
{
    __is->read(userId);
    __is->read(status);
    __is->read(ip);
}

bool
AMOServer::MosStatus::operator==(const MosStatus& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AMOServer::MosStatus::operator!=(const MosStatus& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(userId != __rhs.userId)
    {
        return true;
    }
    if(status != __rhs.status)
    {
        return true;
    }
    return false;
}

bool
AMOServer::MosStatus::operator<(const MosStatus& __rhs) const
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
    if(status < __rhs.status)
    {
        return true;
    }
    else if(__rhs.status < status)
    {
        return false;
    }
    return false;
}

void
AMOServer::MosStatus::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(userId);
    __os->write(status);
}

void
AMOServer::MosStatus::__read(::IceInternal::BasicStream* __is)
{
    __is->read(userId);
    __is->read(status);
}

bool
AMOServer::LoginTime::operator==(const LoginTime& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AMOServer::LoginTime::operator!=(const LoginTime& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(userId != __rhs.userId)
    {
        return true;
    }
    if(time != __rhs.time)
    {
        return true;
    }
    return false;
}

bool
AMOServer::LoginTime::operator<(const LoginTime& __rhs) const
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
    if(time < __rhs.time)
    {
        return true;
    }
    else if(__rhs.time < time)
    {
        return false;
    }
    return false;
}

void
AMOServer::LoginTime::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(userId);
    __os->write(time);
}

void
AMOServer::LoginTime::__read(::IceInternal::BasicStream* __is)
{
    __is->read(userId);
    __is->read(time);
}

bool
AMOServer::UserInfo::operator==(const UserInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AMOServer::UserInfo::operator!=(const UserInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(userId != __rhs.userId)
    {
        return true;
    }
    if(version != __rhs.version)
    {
        return true;
    }
    if(status != __rhs.status)
    {
        return true;
    }
    if(ip != __rhs.ip)
    {
        return true;
    }
    return false;
}

bool
AMOServer::UserInfo::operator<(const UserInfo& __rhs) const
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
    if(version < __rhs.version)
    {
        return true;
    }
    else if(__rhs.version < version)
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
    if(ip < __rhs.ip)
    {
        return true;
    }
    else if(__rhs.ip < ip)
    {
        return false;
    }
    return false;
}

void
AMOServer::UserInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(userId);
    __os->write(version);
    __os->write(status);
    __os->write(ip);
}

void
AMOServer::UserInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(userId);
    __is->read(version);
    __is->read(status);
    __is->read(ip);
}

bool
AMOServer::UserInfoEx::operator==(const UserInfoEx& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AMOServer::UserInfoEx::operator!=(const UserInfoEx& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(userId != __rhs.userId)
    {
        return true;
    }
    if(srvId != __rhs.srvId)
    {
        return true;
    }
    if(status != __rhs.status)
    {
        return true;
    }
    if(predefSts != __rhs.predefSts)
    {
        return true;
    }
    if(mobileOnlineFlag != __rhs.mobileOnlineFlag)
    {
        return true;
    }
    if(recvFlag != __rhs.recvFlag)
    {
        return true;
    }
    if(ip != __rhs.ip)
    {
        return true;
    }
    if(lastLoginTime != __rhs.lastLoginTime)
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
AMOServer::UserInfoEx::operator<(const UserInfoEx& __rhs) const
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
    if(srvId < __rhs.srvId)
    {
        return true;
    }
    else if(__rhs.srvId < srvId)
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
    if(predefSts < __rhs.predefSts)
    {
        return true;
    }
    else if(__rhs.predefSts < predefSts)
    {
        return false;
    }
    if(mobileOnlineFlag < __rhs.mobileOnlineFlag)
    {
        return true;
    }
    else if(__rhs.mobileOnlineFlag < mobileOnlineFlag)
    {
        return false;
    }
    if(recvFlag < __rhs.recvFlag)
    {
        return true;
    }
    else if(__rhs.recvFlag < recvFlag)
    {
        return false;
    }
    if(ip < __rhs.ip)
    {
        return true;
    }
    else if(__rhs.ip < ip)
    {
        return false;
    }
    if(lastLoginTime < __rhs.lastLoginTime)
    {
        return true;
    }
    else if(__rhs.lastLoginTime < lastLoginTime)
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
AMOServer::UserInfoEx::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(userId);
    __os->write(srvId);
    __os->write(status);
    __os->write(predefSts);
    __os->write(mobileOnlineFlag);
    __os->write(recvFlag);
    __os->write(ip);
    __os->write(lastLoginTime);
    __os->write(version);
}

void
AMOServer::UserInfoEx::__read(::IceInternal::BasicStream* __is)
{
    __is->read(userId);
    __is->read(srvId);
    __is->read(status);
    __is->read(predefSts);
    __is->read(mobileOnlineFlag);
    __is->read(recvFlag);
    __is->read(ip);
    __is->read(lastLoginTime);
    __is->read(version);
}

bool
AMOServer::GrpInfo::operator==(const GrpInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AMOServer::GrpInfo::operator!=(const GrpInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(uid != __rhs.uid)
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
    if(status != __rhs.status)
    {
        return true;
    }
    return false;
}

bool
AMOServer::GrpInfo::operator<(const GrpInfo& __rhs) const
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
    if(status < __rhs.status)
    {
        return true;
    }
    else if(__rhs.status < status)
    {
        return false;
    }
    return false;
}

void
AMOServer::GrpInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(uid);
    __os->write(groupName);
    __os->write(groupId);
    __os->write(status);
}

void
AMOServer::GrpInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(uid);
    __is->read(groupName);
    __is->read(groupId);
    __is->read(status);
}

void
AMOServer::__write(::IceInternal::BasicStream* __os, const ::AMOServer::MosStatus* begin, const ::AMOServer::MosStatus* end, ::AMOServer::__U__SICEMosStatusSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
AMOServer::__read(::IceInternal::BasicStream* __is, ::AMOServer::SICEMosStatusSeq& v, ::AMOServer::__U__SICEMosStatusSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 3);
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
AMOServer::__write(::IceInternal::BasicStream* __os, const ::AMOServer::MosStatusIp* begin, const ::AMOServer::MosStatusIp* end, ::AMOServer::__U__SICEMosStatusIpSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
AMOServer::__read(::IceInternal::BasicStream* __is, ::AMOServer::SICEMosStatusIpSeq& v, ::AMOServer::__U__SICEMosStatusIpSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 11);
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
AMOServer::__write(::IceInternal::BasicStream* __os, const ::AMOServer::LoginTime* begin, const ::AMOServer::LoginTime* end, ::AMOServer::__U__SICELoginTimeSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
AMOServer::__read(::IceInternal::BasicStream* __is, ::AMOServer::SICELoginTimeSeq& v, ::AMOServer::__U__SICELoginTimeSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 2);
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
AMOServer::__write(::IceInternal::BasicStream* __os, const ::AMOServer::UserInfo* begin, const ::AMOServer::UserInfo* end, ::AMOServer::__U__SICEUserInfoSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
AMOServer::__read(::IceInternal::BasicStream* __is, ::AMOServer::SICEUserInfoSeq& v, ::AMOServer::__U__SICEUserInfoSeq)
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

void
AMOServer::__write(::IceInternal::BasicStream* __os, const ::AMOServer::GrpInfo* begin, const ::AMOServer::GrpInfo* end, ::AMOServer::__U__SICEGrpInfoSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
AMOServer::__read(::IceInternal::BasicStream* __is, ::AMOServer::SICEGrpInfoSeq& v, ::AMOServer::__U__SICEGrpInfoSeq)
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
AMOServer::__addObject(const MOSInterfacePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
AMOServer::__usesClasses(const MOSInterfacePtr& p)
{
    return p->__usesClasses();
}

void
AMOServer::__decRefUnsafe(const MOSInterfacePtr& p)
{
    p->__decRefUnsafe();
}

void
AMOServer::__clearHandleUnsafe(MOSInterfacePtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::AMOServer::MOSInterface::getUserStatus(const ::AMOServer::SICEUserIdSeq& userList, ::AMOServer::SICEMosStatusSeq& mosStatusList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AMOServer__MOSInterface__getUserStatus_name);
            __delBase = __getDelegate();
            ::IceDelegate::AMOServer::MOSInterface* __del = dynamic_cast< ::IceDelegate::AMOServer::MOSInterface*>(__delBase.get());
            return __del->getUserStatus(userList, mosStatusList, __ctx);
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
IceProxy::AMOServer::MOSInterface::getUserStatusIp(const ::AMOServer::SICEUserIdSeq& userList, ::AMOServer::SICEMosStatusIpSeq& mosStatusList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AMOServer__MOSInterface__getUserStatusIp_name);
            __delBase = __getDelegate();
            ::IceDelegate::AMOServer::MOSInterface* __del = dynamic_cast< ::IceDelegate::AMOServer::MOSInterface*>(__delBase.get());
            return __del->getUserStatusIp(userList, mosStatusList, __ctx);
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
IceProxy::AMOServer::MOSInterface::getUserRealStatus(const ::AMOServer::SICEUserIdSeq& userList, ::AMOServer::SICEMosStatusSeq& mosStatusList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AMOServer__MOSInterface__getUserRealStatus_name);
            __delBase = __getDelegate();
            ::IceDelegate::AMOServer::MOSInterface* __del = dynamic_cast< ::IceDelegate::AMOServer::MOSInterface*>(__delBase.get());
            return __del->getUserRealStatus(userList, mosStatusList, __ctx);
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
IceProxy::AMOServer::MOSInterface::getUserRealStatusIp(const ::AMOServer::SICEUserIdSeq& userList, ::AMOServer::SICEMosStatusIpSeq& mosStatusList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AMOServer__MOSInterface__getUserRealStatusIp_name);
            __delBase = __getDelegate();
            ::IceDelegate::AMOServer::MOSInterface* __del = dynamic_cast< ::IceDelegate::AMOServer::MOSInterface*>(__delBase.get());
            return __del->getUserRealStatusIp(userList, mosStatusList, __ctx);
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
IceProxy::AMOServer::MOSInterface::getUserLastLoginTime(const ::AMOServer::SICEUserIdSeq& userList, ::AMOServer::SICELoginTimeSeq& loginTimeList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AMOServer__MOSInterface__getUserLastLoginTime_name);
            __delBase = __getDelegate();
            ::IceDelegate::AMOServer::MOSInterface* __del = dynamic_cast< ::IceDelegate::AMOServer::MOSInterface*>(__delBase.get());
            return __del->getUserLastLoginTime(userList, loginTimeList, __ctx);
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
IceProxy::AMOServer::MOSInterface::getUserCount(::Ice::Short type, ::Ice::Long arg1, const ::std::string& arg2, ::Ice::Long& count, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AMOServer__MOSInterface__getUserCount_name);
            __delBase = __getDelegate();
            ::IceDelegate::AMOServer::MOSInterface* __del = dynamic_cast< ::IceDelegate::AMOServer::MOSInterface*>(__delBase.get());
            return __del->getUserCount(type, arg1, arg2, count, __ctx);
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
IceProxy::AMOServer::MOSInterface::getIpUsers(::Ice::Long ip, ::Ice::Long count, ::Ice::Long& allCount, ::AMOServer::SICEUserIdSeq& uidList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AMOServer__MOSInterface__getIpUsers_name);
            __delBase = __getDelegate();
            ::IceDelegate::AMOServer::MOSInterface* __del = dynamic_cast< ::IceDelegate::AMOServer::MOSInterface*>(__delBase.get());
            return __del->getIpUsers(ip, count, allCount, uidList, __ctx);
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
IceProxy::AMOServer::MOSInterface::getIpUsersEx(::Ice::Long ip, ::Ice::Long count, ::Ice::Long netcode, ::Ice::Long& allCount, ::AMOServer::SICEUserIdSeq& uidList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AMOServer__MOSInterface__getIpUsersEx_name);
            __delBase = __getDelegate();
            ::IceDelegate::AMOServer::MOSInterface* __del = dynamic_cast< ::IceDelegate::AMOServer::MOSInterface*>(__delBase.get());
            return __del->getIpUsersEx(ip, count, netcode, allCount, uidList, __ctx);
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
IceProxy::AMOServer::MOSInterface::getSameIpSiteUsers(const ::std::string& uid, ::Ice::Long count, ::Ice::Long& allCount, ::AMOServer::SICEUserIdSeq& uidList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AMOServer__MOSInterface__getSameIpSiteUsers_name);
            __delBase = __getDelegate();
            ::IceDelegate::AMOServer::MOSInterface* __del = dynamic_cast< ::IceDelegate::AMOServer::MOSInterface*>(__delBase.get());
            return __del->getSameIpSiteUsers(uid, count, allCount, uidList, __ctx);
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
IceProxy::AMOServer::MOSInterface::getOnlineUsers(::Ice::Short netcode, ::Ice::Short onlineType, ::AMOServer::SICEUserInfoSeq& userlist, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AMOServer__MOSInterface__getOnlineUsers_name);
            __delBase = __getDelegate();
            ::IceDelegate::AMOServer::MOSInterface* __del = dynamic_cast< ::IceDelegate::AMOServer::MOSInterface*>(__delBase.get());
            return __del->getOnlineUsers(netcode, onlineType, userlist, __ctx);
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
IceProxy::AMOServer::MOSInterface::getOnlineUser(const ::std::string& uid, ::AMOServer::UserInfo& ui, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AMOServer__MOSInterface__getOnlineUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::AMOServer::MOSInterface* __del = dynamic_cast< ::IceDelegate::AMOServer::MOSInterface*>(__delBase.get());
            return __del->getOnlineUser(uid, ui, __ctx);
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
IceProxy::AMOServer::MOSInterface::getOnlineUserEx(const ::std::string& uid, ::AMOServer::UserInfoEx& ui, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AMOServer__MOSInterface__getOnlineUserEx_name);
            __delBase = __getDelegate();
            ::IceDelegate::AMOServer::MOSInterface* __del = dynamic_cast< ::IceDelegate::AMOServer::MOSInterface*>(__delBase.get());
            return __del->getOnlineUserEx(uid, ui, __ctx);
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
IceProxy::AMOServer::MOSInterface::getEhmsGrpSts(const ::std::string& uid, const ::AMOServer::SICEGrpIdSeq& grpIds, ::AMOServer::SICEGrpInfoSeq& grpList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AMOServer__MOSInterface__getEhmsGrpSts_name);
            __delBase = __getDelegate();
            ::IceDelegate::AMOServer::MOSInterface* __del = dynamic_cast< ::IceDelegate::AMOServer::MOSInterface*>(__delBase.get());
            return __del->getEhmsGrpSts(uid, grpIds, grpList, __ctx);
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
IceProxy::AMOServer::MOSInterface::ice_staticId()
{
    return ::AMOServer::MOSInterface::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::AMOServer::MOSInterface::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::AMOServer::MOSInterface);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::AMOServer::MOSInterface::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::AMOServer::MOSInterface);
}

bool
IceProxy::AMOServer::operator==(const ::IceProxy::AMOServer::MOSInterface& l, const ::IceProxy::AMOServer::MOSInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AMOServer::operator!=(const ::IceProxy::AMOServer::MOSInterface& l, const ::IceProxy::AMOServer::MOSInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AMOServer::operator<(const ::IceProxy::AMOServer::MOSInterface& l, const ::IceProxy::AMOServer::MOSInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AMOServer::operator<=(const ::IceProxy::AMOServer::MOSInterface& l, const ::IceProxy::AMOServer::MOSInterface& r)
{
    return l < r || l == r;
}

bool
IceProxy::AMOServer::operator>(const ::IceProxy::AMOServer::MOSInterface& l, const ::IceProxy::AMOServer::MOSInterface& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::AMOServer::operator>=(const ::IceProxy::AMOServer::MOSInterface& l, const ::IceProxy::AMOServer::MOSInterface& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::AMOServer::MOSInterface::getUserStatus(const ::AMOServer::SICEUserIdSeq& userList, ::AMOServer::SICEMosStatusSeq& mosStatusList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AMOServer__MOSInterface__getUserStatus_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(userList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&userList[0], &userList[0] + userList.size());
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
        ::AMOServer::__read(__is, mosStatusList, ::AMOServer::__U__SICEMosStatusSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AMOServer::MOSInterface::getUserStatusIp(const ::AMOServer::SICEUserIdSeq& userList, ::AMOServer::SICEMosStatusIpSeq& mosStatusList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AMOServer__MOSInterface__getUserStatusIp_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(userList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&userList[0], &userList[0] + userList.size());
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
        ::AMOServer::__read(__is, mosStatusList, ::AMOServer::__U__SICEMosStatusIpSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AMOServer::MOSInterface::getUserRealStatus(const ::AMOServer::SICEUserIdSeq& userList, ::AMOServer::SICEMosStatusSeq& mosStatusList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AMOServer__MOSInterface__getUserRealStatus_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(userList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&userList[0], &userList[0] + userList.size());
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
        ::AMOServer::__read(__is, mosStatusList, ::AMOServer::__U__SICEMosStatusSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AMOServer::MOSInterface::getUserRealStatusIp(const ::AMOServer::SICEUserIdSeq& userList, ::AMOServer::SICEMosStatusIpSeq& mosStatusList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AMOServer__MOSInterface__getUserRealStatusIp_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(userList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&userList[0], &userList[0] + userList.size());
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
        ::AMOServer::__read(__is, mosStatusList, ::AMOServer::__U__SICEMosStatusIpSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AMOServer::MOSInterface::getUserLastLoginTime(const ::AMOServer::SICEUserIdSeq& userList, ::AMOServer::SICELoginTimeSeq& loginTimeList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AMOServer__MOSInterface__getUserLastLoginTime_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(userList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&userList[0], &userList[0] + userList.size());
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
        ::AMOServer::__read(__is, loginTimeList, ::AMOServer::__U__SICELoginTimeSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AMOServer::MOSInterface::getUserCount(::Ice::Short type, ::Ice::Long arg1, const ::std::string& arg2, ::Ice::Long& count, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AMOServer__MOSInterface__getUserCount_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(type);
        __os->write(arg1);
        __os->write(arg2);
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
        __is->read(count);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AMOServer::MOSInterface::getIpUsers(::Ice::Long ip, ::Ice::Long count, ::Ice::Long& allCount, ::AMOServer::SICEUserIdSeq& uidList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AMOServer__MOSInterface__getIpUsers_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(ip);
        __os->write(count);
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
        __is->read(allCount);
        __is->read(uidList);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AMOServer::MOSInterface::getIpUsersEx(::Ice::Long ip, ::Ice::Long count, ::Ice::Long netcode, ::Ice::Long& allCount, ::AMOServer::SICEUserIdSeq& uidList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AMOServer__MOSInterface__getIpUsersEx_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(ip);
        __os->write(count);
        __os->write(netcode);
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
        __is->read(allCount);
        __is->read(uidList);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AMOServer::MOSInterface::getSameIpSiteUsers(const ::std::string& uid, ::Ice::Long count, ::Ice::Long& allCount, ::AMOServer::SICEUserIdSeq& uidList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AMOServer__MOSInterface__getSameIpSiteUsers_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(count);
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
        __is->read(allCount);
        __is->read(uidList);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AMOServer::MOSInterface::getOnlineUsers(::Ice::Short netcode, ::Ice::Short onlineType, ::AMOServer::SICEUserInfoSeq& userlist, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AMOServer__MOSInterface__getOnlineUsers_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(netcode);
        __os->write(onlineType);
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
        ::AMOServer::__read(__is, userlist, ::AMOServer::__U__SICEUserInfoSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AMOServer::MOSInterface::getOnlineUser(const ::std::string& uid, ::AMOServer::UserInfo& ui, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AMOServer__MOSInterface__getOnlineUser_name, ::Ice::Normal, __context, __compress);
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
        ui.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AMOServer::MOSInterface::getOnlineUserEx(const ::std::string& uid, ::AMOServer::UserInfoEx& ui, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AMOServer__MOSInterface__getOnlineUserEx_name, ::Ice::Normal, __context, __compress);
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
        ui.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AMOServer::MOSInterface::getEhmsGrpSts(const ::std::string& uid, const ::AMOServer::SICEGrpIdSeq& grpIds, ::AMOServer::SICEGrpInfoSeq& grpList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AMOServer__MOSInterface__getEhmsGrpSts_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        if(grpIds.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&grpIds[0], &grpIds[0] + grpIds.size());
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
        ::AMOServer::__read(__is, grpList, ::AMOServer::__U__SICEGrpInfoSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::AMOServer::MOSInterface::getUserStatus(const ::AMOServer::SICEUserIdSeq& userList, ::AMOServer::SICEMosStatusSeq& mosStatusList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AMOServer__MOSInterface__getUserStatus_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AMOServer::MOSInterface* __servant = dynamic_cast< ::AMOServer::MOSInterface*>(__direct.servant().get());
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
                __ret = __servant->getUserStatus(userList, mosStatusList, __current);
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
IceDelegateD::AMOServer::MOSInterface::getUserStatusIp(const ::AMOServer::SICEUserIdSeq& userList, ::AMOServer::SICEMosStatusIpSeq& mosStatusList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AMOServer__MOSInterface__getUserStatusIp_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AMOServer::MOSInterface* __servant = dynamic_cast< ::AMOServer::MOSInterface*>(__direct.servant().get());
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
                __ret = __servant->getUserStatusIp(userList, mosStatusList, __current);
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
IceDelegateD::AMOServer::MOSInterface::getUserRealStatus(const ::AMOServer::SICEUserIdSeq& userList, ::AMOServer::SICEMosStatusSeq& mosStatusList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AMOServer__MOSInterface__getUserRealStatus_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AMOServer::MOSInterface* __servant = dynamic_cast< ::AMOServer::MOSInterface*>(__direct.servant().get());
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
                __ret = __servant->getUserRealStatus(userList, mosStatusList, __current);
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
IceDelegateD::AMOServer::MOSInterface::getUserRealStatusIp(const ::AMOServer::SICEUserIdSeq& userList, ::AMOServer::SICEMosStatusIpSeq& mosStatusList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AMOServer__MOSInterface__getUserRealStatusIp_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AMOServer::MOSInterface* __servant = dynamic_cast< ::AMOServer::MOSInterface*>(__direct.servant().get());
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
                __ret = __servant->getUserRealStatusIp(userList, mosStatusList, __current);
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
IceDelegateD::AMOServer::MOSInterface::getUserLastLoginTime(const ::AMOServer::SICEUserIdSeq& userList, ::AMOServer::SICELoginTimeSeq& loginTimeList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AMOServer__MOSInterface__getUserLastLoginTime_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AMOServer::MOSInterface* __servant = dynamic_cast< ::AMOServer::MOSInterface*>(__direct.servant().get());
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
                __ret = __servant->getUserLastLoginTime(userList, loginTimeList, __current);
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
IceDelegateD::AMOServer::MOSInterface::getUserCount(::Ice::Short type, ::Ice::Long arg1, const ::std::string& arg2, ::Ice::Long& count, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AMOServer__MOSInterface__getUserCount_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AMOServer::MOSInterface* __servant = dynamic_cast< ::AMOServer::MOSInterface*>(__direct.servant().get());
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
                __ret = __servant->getUserCount(type, arg1, arg2, count, __current);
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
IceDelegateD::AMOServer::MOSInterface::getIpUsers(::Ice::Long ip, ::Ice::Long count, ::Ice::Long& allCount, ::AMOServer::SICEUserIdSeq& uidList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AMOServer__MOSInterface__getIpUsers_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AMOServer::MOSInterface* __servant = dynamic_cast< ::AMOServer::MOSInterface*>(__direct.servant().get());
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
                __ret = __servant->getIpUsers(ip, count, allCount, uidList, __current);
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
IceDelegateD::AMOServer::MOSInterface::getIpUsersEx(::Ice::Long ip, ::Ice::Long count, ::Ice::Long netcode, ::Ice::Long& allCount, ::AMOServer::SICEUserIdSeq& uidList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AMOServer__MOSInterface__getIpUsersEx_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AMOServer::MOSInterface* __servant = dynamic_cast< ::AMOServer::MOSInterface*>(__direct.servant().get());
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
                __ret = __servant->getIpUsersEx(ip, count, netcode, allCount, uidList, __current);
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
IceDelegateD::AMOServer::MOSInterface::getSameIpSiteUsers(const ::std::string& uid, ::Ice::Long count, ::Ice::Long& allCount, ::AMOServer::SICEUserIdSeq& uidList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AMOServer__MOSInterface__getSameIpSiteUsers_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AMOServer::MOSInterface* __servant = dynamic_cast< ::AMOServer::MOSInterface*>(__direct.servant().get());
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
                __ret = __servant->getSameIpSiteUsers(uid, count, allCount, uidList, __current);
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
IceDelegateD::AMOServer::MOSInterface::getOnlineUsers(::Ice::Short netcode, ::Ice::Short onlineType, ::AMOServer::SICEUserInfoSeq& userlist, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AMOServer__MOSInterface__getOnlineUsers_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AMOServer::MOSInterface* __servant = dynamic_cast< ::AMOServer::MOSInterface*>(__direct.servant().get());
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
                __ret = __servant->getOnlineUsers(netcode, onlineType, userlist, __current);
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
IceDelegateD::AMOServer::MOSInterface::getOnlineUser(const ::std::string& uid, ::AMOServer::UserInfo& ui, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AMOServer__MOSInterface__getOnlineUser_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AMOServer::MOSInterface* __servant = dynamic_cast< ::AMOServer::MOSInterface*>(__direct.servant().get());
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
                __ret = __servant->getOnlineUser(uid, ui, __current);
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
IceDelegateD::AMOServer::MOSInterface::getOnlineUserEx(const ::std::string& uid, ::AMOServer::UserInfoEx& ui, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AMOServer__MOSInterface__getOnlineUserEx_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AMOServer::MOSInterface* __servant = dynamic_cast< ::AMOServer::MOSInterface*>(__direct.servant().get());
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
                __ret = __servant->getOnlineUserEx(uid, ui, __current);
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
IceDelegateD::AMOServer::MOSInterface::getEhmsGrpSts(const ::std::string& uid, const ::AMOServer::SICEGrpIdSeq& grpIds, ::AMOServer::SICEGrpInfoSeq& grpList, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AMOServer__MOSInterface__getEhmsGrpSts_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AMOServer::MOSInterface* __servant = dynamic_cast< ::AMOServer::MOSInterface*>(__direct.servant().get());
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
                __ret = __servant->getEhmsGrpSts(uid, grpIds, grpList, __current);
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
AMOServer::MOSInterface::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __AMOServer__MOSInterface_ids[2] =
{
    "::AMOServer::MOSInterface",
    "::Ice::Object"
};

bool
AMOServer::MOSInterface::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__AMOServer__MOSInterface_ids, __AMOServer__MOSInterface_ids + 2, _s);
}

::std::vector< ::std::string>
AMOServer::MOSInterface::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__AMOServer__MOSInterface_ids[0], &__AMOServer__MOSInterface_ids[2]);
}

const ::std::string&
AMOServer::MOSInterface::ice_id(const ::Ice::Current&) const
{
    return __AMOServer__MOSInterface_ids[0];
}

const ::std::string&
AMOServer::MOSInterface::ice_staticId()
{
    return __AMOServer__MOSInterface_ids[0];
}

::IceInternal::DispatchStatus
AMOServer::MOSInterface::___getUserStatus(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::AMOServer::SICEUserIdSeq userList;
    __is->read(userList);
    ::AMOServer::SICEMosStatusSeq mosStatusList;
    ::Ice::Int __ret = getUserStatus(userList, mosStatusList, __current);
    if(mosStatusList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::AMOServer::__write(__os, &mosStatusList[0], &mosStatusList[0] + mosStatusList.size(), ::AMOServer::__U__SICEMosStatusSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AMOServer::MOSInterface::___getUserStatusIp(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::AMOServer::SICEUserIdSeq userList;
    __is->read(userList);
    ::AMOServer::SICEMosStatusIpSeq mosStatusList;
    ::Ice::Int __ret = getUserStatusIp(userList, mosStatusList, __current);
    if(mosStatusList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::AMOServer::__write(__os, &mosStatusList[0], &mosStatusList[0] + mosStatusList.size(), ::AMOServer::__U__SICEMosStatusIpSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AMOServer::MOSInterface::___getUserRealStatus(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::AMOServer::SICEUserIdSeq userList;
    __is->read(userList);
    ::AMOServer::SICEMosStatusSeq mosStatusList;
    ::Ice::Int __ret = getUserRealStatus(userList, mosStatusList, __current);
    if(mosStatusList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::AMOServer::__write(__os, &mosStatusList[0], &mosStatusList[0] + mosStatusList.size(), ::AMOServer::__U__SICEMosStatusSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AMOServer::MOSInterface::___getUserRealStatusIp(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::AMOServer::SICEUserIdSeq userList;
    __is->read(userList);
    ::AMOServer::SICEMosStatusIpSeq mosStatusList;
    ::Ice::Int __ret = getUserRealStatusIp(userList, mosStatusList, __current);
    if(mosStatusList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::AMOServer::__write(__os, &mosStatusList[0], &mosStatusList[0] + mosStatusList.size(), ::AMOServer::__U__SICEMosStatusIpSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AMOServer::MOSInterface::___getUserLastLoginTime(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::AMOServer::SICEUserIdSeq userList;
    __is->read(userList);
    ::AMOServer::SICELoginTimeSeq loginTimeList;
    ::Ice::Int __ret = getUserLastLoginTime(userList, loginTimeList, __current);
    if(loginTimeList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::AMOServer::__write(__os, &loginTimeList[0], &loginTimeList[0] + loginTimeList.size(), ::AMOServer::__U__SICELoginTimeSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AMOServer::MOSInterface::___getUserCount(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Short type;
    ::Ice::Long arg1;
    ::std::string arg2;
    __is->read(type);
    __is->read(arg1);
    __is->read(arg2);
    ::Ice::Long count;
    ::Ice::Int __ret = getUserCount(type, arg1, arg2, count, __current);
    __os->write(count);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AMOServer::MOSInterface::___getIpUsers(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Long ip;
    ::Ice::Long count;
    __is->read(ip);
    __is->read(count);
    ::Ice::Long allCount;
    ::AMOServer::SICEUserIdSeq uidList;
    ::Ice::Int __ret = getIpUsers(ip, count, allCount, uidList, __current);
    __os->write(allCount);
    if(uidList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&uidList[0], &uidList[0] + uidList.size());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AMOServer::MOSInterface::___getIpUsersEx(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Long ip;
    ::Ice::Long count;
    ::Ice::Long netcode;
    __is->read(ip);
    __is->read(count);
    __is->read(netcode);
    ::Ice::Long allCount;
    ::AMOServer::SICEUserIdSeq uidList;
    ::Ice::Int __ret = getIpUsersEx(ip, count, netcode, allCount, uidList, __current);
    __os->write(allCount);
    if(uidList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&uidList[0], &uidList[0] + uidList.size());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AMOServer::MOSInterface::___getSameIpSiteUsers(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::Ice::Long count;
    __is->read(uid);
    __is->read(count);
    ::Ice::Long allCount;
    ::AMOServer::SICEUserIdSeq uidList;
    ::Ice::Int __ret = getSameIpSiteUsers(uid, count, allCount, uidList, __current);
    __os->write(allCount);
    if(uidList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&uidList[0], &uidList[0] + uidList.size());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AMOServer::MOSInterface::___getOnlineUsers(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Short netcode;
    ::Ice::Short onlineType;
    __is->read(netcode);
    __is->read(onlineType);
    ::AMOServer::SICEUserInfoSeq userlist;
    ::Ice::Int __ret = getOnlineUsers(netcode, onlineType, userlist, __current);
    if(userlist.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::AMOServer::__write(__os, &userlist[0], &userlist[0] + userlist.size(), ::AMOServer::__U__SICEUserInfoSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AMOServer::MOSInterface::___getOnlineUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::AMOServer::UserInfo ui;
    ::Ice::Int __ret = getOnlineUser(uid, ui, __current);
    ui.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AMOServer::MOSInterface::___getOnlineUserEx(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::AMOServer::UserInfoEx ui;
    ::Ice::Int __ret = getOnlineUserEx(uid, ui, __current);
    ui.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AMOServer::MOSInterface::___getEhmsGrpSts(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::AMOServer::SICEGrpIdSeq grpIds;
    __is->read(uid);
    __is->read(grpIds);
    ::AMOServer::SICEGrpInfoSeq grpList;
    ::Ice::Int __ret = getEhmsGrpSts(uid, grpIds, grpList, __current);
    if(grpList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::AMOServer::__write(__os, &grpList[0], &grpList[0] + grpList.size(), ::AMOServer::__U__SICEGrpInfoSeq());
    }
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __AMOServer__MOSInterface_all[] =
{
    "getEhmsGrpSts",
    "getIpUsers",
    "getIpUsersEx",
    "getOnlineUser",
    "getOnlineUserEx",
    "getOnlineUsers",
    "getSameIpSiteUsers",
    "getUserCount",
    "getUserLastLoginTime",
    "getUserRealStatus",
    "getUserRealStatusIp",
    "getUserStatus",
    "getUserStatusIp",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::IceInternal::DispatchStatus
AMOServer::MOSInterface::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__AMOServer__MOSInterface_all, __AMOServer__MOSInterface_all + 17, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __AMOServer__MOSInterface_all)
    {
        case 0:
        {
            return ___getEhmsGrpSts(in, current);
        }
        case 1:
        {
            return ___getIpUsers(in, current);
        }
        case 2:
        {
            return ___getIpUsersEx(in, current);
        }
        case 3:
        {
            return ___getOnlineUser(in, current);
        }
        case 4:
        {
            return ___getOnlineUserEx(in, current);
        }
        case 5:
        {
            return ___getOnlineUsers(in, current);
        }
        case 6:
        {
            return ___getSameIpSiteUsers(in, current);
        }
        case 7:
        {
            return ___getUserCount(in, current);
        }
        case 8:
        {
            return ___getUserLastLoginTime(in, current);
        }
        case 9:
        {
            return ___getUserRealStatus(in, current);
        }
        case 10:
        {
            return ___getUserRealStatusIp(in, current);
        }
        case 11:
        {
            return ___getUserStatus(in, current);
        }
        case 12:
        {
            return ___getUserStatusIp(in, current);
        }
        case 13:
        {
            return ___ice_id(in, current);
        }
        case 14:
        {
            return ___ice_ids(in, current);
        }
        case 15:
        {
            return ___ice_isA(in, current);
        }
        case 16:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
AMOServer::MOSInterface::__write(::IceInternal::BasicStream* __os) const
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
AMOServer::MOSInterface::__read(::IceInternal::BasicStream* __is, bool __rid)
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
AMOServer::MOSInterface::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AMOServer::MOSInterface was not generated with stream support";
    throw ex;
}

void
AMOServer::MOSInterface::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AMOServer::MOSInterface was not generated with stream support";
    throw ex;
}

void 
AMOServer::__patch__MOSInterfacePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::AMOServer::MOSInterfacePtr* p = static_cast< ::AMOServer::MOSInterfacePtr*>(__addr);
    assert(p);
    *p = ::AMOServer::MOSInterfacePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::AMOServer::MOSInterface::ice_staticId();
        throw e;
    }
}

bool
AMOServer::operator==(const ::AMOServer::MOSInterface& l, const ::AMOServer::MOSInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
AMOServer::operator!=(const ::AMOServer::MOSInterface& l, const ::AMOServer::MOSInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
AMOServer::operator<(const ::AMOServer::MOSInterface& l, const ::AMOServer::MOSInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
AMOServer::operator<=(const ::AMOServer::MOSInterface& l, const ::AMOServer::MOSInterface& r)
{
    return l < r || l == r;
}

bool
AMOServer::operator>(const ::AMOServer::MOSInterface& l, const ::AMOServer::MOSInterface& r)
{
    return !(l < r) && !(l == r);
}

bool
AMOServer::operator>=(const ::AMOServer::MOSInterface& l, const ::AMOServer::MOSInterface& r)
{
    return !(l < r);
}
