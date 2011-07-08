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

#ifndef __mosInterface_h__
#define __mosInterface_h__

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

namespace AMOServer
{

class MOSInterface;
bool operator==(const MOSInterface&, const MOSInterface&);
bool operator!=(const MOSInterface&, const MOSInterface&);
bool operator<(const MOSInterface&, const MOSInterface&);
bool operator<=(const MOSInterface&, const MOSInterface&);
bool operator>(const MOSInterface&, const MOSInterface&);
bool operator>=(const MOSInterface&, const MOSInterface&);

}

}

namespace AMOServer
{

class MOSInterface;
bool operator==(const MOSInterface&, const MOSInterface&);
bool operator!=(const MOSInterface&, const MOSInterface&);
bool operator<(const MOSInterface&, const MOSInterface&);
bool operator<=(const MOSInterface&, const MOSInterface&);
bool operator>(const MOSInterface&, const MOSInterface&);
bool operator>=(const MOSInterface&, const MOSInterface&);

}

namespace IceInternal
{

void incRef(::AMOServer::MOSInterface*);
void decRef(::AMOServer::MOSInterface*);

void incRef(::IceProxy::AMOServer::MOSInterface*);
void decRef(::IceProxy::AMOServer::MOSInterface*);

}

namespace AMOServer
{

typedef ::IceInternal::Handle< ::AMOServer::MOSInterface> MOSInterfacePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::AMOServer::MOSInterface> MOSInterfacePrx;

void __write(::IceInternal::BasicStream*, const MOSInterfacePrx&);
void __read(::IceInternal::BasicStream*, MOSInterfacePrx&);
void __write(::IceInternal::BasicStream*, const MOSInterfacePtr&);
void __patch__MOSInterfacePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const MOSInterfacePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const MOSInterfacePtr&);
void __decRefUnsafe(const MOSInterfacePtr&);
void __clearHandleUnsafe(MOSInterfacePtr&);

}

namespace AMOServer
{

struct MosStatusIp
{
    ::std::string userId;
    ::Ice::Short status;
    ::Ice::Long ip;

    bool operator==(const MosStatusIp&) const;
    bool operator!=(const MosStatusIp&) const;
    bool operator<(const MosStatusIp&) const;
    bool operator<=(const MosStatusIp& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const MosStatusIp& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const MosStatusIp& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct MosStatus
{
    ::std::string userId;
    ::Ice::Short status;

    bool operator==(const MosStatus&) const;
    bool operator!=(const MosStatus&) const;
    bool operator<(const MosStatus&) const;
    bool operator<=(const MosStatus& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const MosStatus& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const MosStatus& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct LoginTime
{
    ::std::string userId;
    ::std::string time;

    bool operator==(const LoginTime&) const;
    bool operator!=(const LoginTime&) const;
    bool operator<(const LoginTime&) const;
    bool operator<=(const LoginTime& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const LoginTime& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const LoginTime& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct UserInfo
{
    ::std::string userId;
    ::std::string version;
    ::Ice::Short status;
    ::Ice::Long ip;

    bool operator==(const UserInfo&) const;
    bool operator!=(const UserInfo&) const;
    bool operator<(const UserInfo&) const;
    bool operator<=(const UserInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const UserInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const UserInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct UserInfoEx
{
    ::std::string userId;
    ::Ice::Short srvId;
    ::Ice::Short status;
    ::Ice::Short predefSts;
    bool mobileOnlineFlag;
    bool recvFlag;
    ::Ice::Long ip;
    ::Ice::Int lastLoginTime;
    ::std::string version;

    bool operator==(const UserInfoEx&) const;
    bool operator!=(const UserInfoEx&) const;
    bool operator<(const UserInfoEx&) const;
    bool operator<=(const UserInfoEx& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const UserInfoEx& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const UserInfoEx& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct GrpInfo
{
    ::std::string uid;
    ::std::string groupName;
    ::Ice::Int groupId;
    ::Ice::Short status;

    bool operator==(const GrpInfo&) const;
    bool operator!=(const GrpInfo&) const;
    bool operator<(const GrpInfo&) const;
    bool operator<=(const GrpInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const GrpInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const GrpInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::std::string> SICEUserIdSeq;

class __U__SICEUserIdSeq { };

typedef ::std::vector< ::AMOServer::MosStatus> SICEMosStatusSeq;

class __U__SICEMosStatusSeq { };
void __write(::IceInternal::BasicStream*, const ::AMOServer::MosStatus*, const ::AMOServer::MosStatus*, __U__SICEMosStatusSeq);
void __read(::IceInternal::BasicStream*, SICEMosStatusSeq&, __U__SICEMosStatusSeq);

typedef ::std::vector< ::AMOServer::MosStatusIp> SICEMosStatusIpSeq;

class __U__SICEMosStatusIpSeq { };
void __write(::IceInternal::BasicStream*, const ::AMOServer::MosStatusIp*, const ::AMOServer::MosStatusIp*, __U__SICEMosStatusIpSeq);
void __read(::IceInternal::BasicStream*, SICEMosStatusIpSeq&, __U__SICEMosStatusIpSeq);

typedef ::std::vector< ::AMOServer::LoginTime> SICELoginTimeSeq;

class __U__SICELoginTimeSeq { };
void __write(::IceInternal::BasicStream*, const ::AMOServer::LoginTime*, const ::AMOServer::LoginTime*, __U__SICELoginTimeSeq);
void __read(::IceInternal::BasicStream*, SICELoginTimeSeq&, __U__SICELoginTimeSeq);

typedef ::std::vector< ::AMOServer::UserInfo> SICEUserInfoSeq;

class __U__SICEUserInfoSeq { };
void __write(::IceInternal::BasicStream*, const ::AMOServer::UserInfo*, const ::AMOServer::UserInfo*, __U__SICEUserInfoSeq);
void __read(::IceInternal::BasicStream*, SICEUserInfoSeq&, __U__SICEUserInfoSeq);

typedef ::std::vector< ::Ice::Int> SICEGrpIdSeq;

class __U__SICEGrpIdSeq { };

typedef ::std::vector< ::AMOServer::GrpInfo> SICEGrpInfoSeq;

class __U__SICEGrpInfoSeq { };
void __write(::IceInternal::BasicStream*, const ::AMOServer::GrpInfo*, const ::AMOServer::GrpInfo*, __U__SICEGrpInfoSeq);
void __read(::IceInternal::BasicStream*, SICEGrpInfoSeq&, __U__SICEGrpInfoSeq);

}

namespace IceProxy
{

namespace AMOServer
{

class MOSInterface : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int getUserStatus(const ::AMOServer::SICEUserIdSeq& userList, ::AMOServer::SICEMosStatusSeq& mosStatusList)
    {
        return getUserStatus(userList, mosStatusList, 0);
    }
    ::Ice::Int getUserStatus(const ::AMOServer::SICEUserIdSeq& userList, ::AMOServer::SICEMosStatusSeq& mosStatusList, const ::Ice::Context& __ctx)
    {
        return getUserStatus(userList, mosStatusList, &__ctx);
    }
    
private:

    ::Ice::Int getUserStatus(const ::AMOServer::SICEUserIdSeq&, ::AMOServer::SICEMosStatusSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserStatusIp(const ::AMOServer::SICEUserIdSeq& userList, ::AMOServer::SICEMosStatusIpSeq& mosStatusList)
    {
        return getUserStatusIp(userList, mosStatusList, 0);
    }
    ::Ice::Int getUserStatusIp(const ::AMOServer::SICEUserIdSeq& userList, ::AMOServer::SICEMosStatusIpSeq& mosStatusList, const ::Ice::Context& __ctx)
    {
        return getUserStatusIp(userList, mosStatusList, &__ctx);
    }
    
private:

    ::Ice::Int getUserStatusIp(const ::AMOServer::SICEUserIdSeq&, ::AMOServer::SICEMosStatusIpSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserRealStatus(const ::AMOServer::SICEUserIdSeq& userList, ::AMOServer::SICEMosStatusSeq& mosStatusList)
    {
        return getUserRealStatus(userList, mosStatusList, 0);
    }
    ::Ice::Int getUserRealStatus(const ::AMOServer::SICEUserIdSeq& userList, ::AMOServer::SICEMosStatusSeq& mosStatusList, const ::Ice::Context& __ctx)
    {
        return getUserRealStatus(userList, mosStatusList, &__ctx);
    }
    
private:

    ::Ice::Int getUserRealStatus(const ::AMOServer::SICEUserIdSeq&, ::AMOServer::SICEMosStatusSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserRealStatusIp(const ::AMOServer::SICEUserIdSeq& userList, ::AMOServer::SICEMosStatusIpSeq& mosStatusList)
    {
        return getUserRealStatusIp(userList, mosStatusList, 0);
    }
    ::Ice::Int getUserRealStatusIp(const ::AMOServer::SICEUserIdSeq& userList, ::AMOServer::SICEMosStatusIpSeq& mosStatusList, const ::Ice::Context& __ctx)
    {
        return getUserRealStatusIp(userList, mosStatusList, &__ctx);
    }
    
private:

    ::Ice::Int getUserRealStatusIp(const ::AMOServer::SICEUserIdSeq&, ::AMOServer::SICEMosStatusIpSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserLastLoginTime(const ::AMOServer::SICEUserIdSeq& userList, ::AMOServer::SICELoginTimeSeq& loginTimeList)
    {
        return getUserLastLoginTime(userList, loginTimeList, 0);
    }
    ::Ice::Int getUserLastLoginTime(const ::AMOServer::SICEUserIdSeq& userList, ::AMOServer::SICELoginTimeSeq& loginTimeList, const ::Ice::Context& __ctx)
    {
        return getUserLastLoginTime(userList, loginTimeList, &__ctx);
    }
    
private:

    ::Ice::Int getUserLastLoginTime(const ::AMOServer::SICEUserIdSeq&, ::AMOServer::SICELoginTimeSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserCount(::Ice::Short type, ::Ice::Long arg1, const ::std::string& arg2, ::Ice::Long& count)
    {
        return getUserCount(type, arg1, arg2, count, 0);
    }
    ::Ice::Int getUserCount(::Ice::Short type, ::Ice::Long arg1, const ::std::string& arg2, ::Ice::Long& count, const ::Ice::Context& __ctx)
    {
        return getUserCount(type, arg1, arg2, count, &__ctx);
    }
    
private:

    ::Ice::Int getUserCount(::Ice::Short, ::Ice::Long, const ::std::string&, ::Ice::Long&, const ::Ice::Context*);
    
public:

    ::Ice::Int getIpUsers(::Ice::Long ip, ::Ice::Long count, ::Ice::Long& allCount, ::AMOServer::SICEUserIdSeq& uidList)
    {
        return getIpUsers(ip, count, allCount, uidList, 0);
    }
    ::Ice::Int getIpUsers(::Ice::Long ip, ::Ice::Long count, ::Ice::Long& allCount, ::AMOServer::SICEUserIdSeq& uidList, const ::Ice::Context& __ctx)
    {
        return getIpUsers(ip, count, allCount, uidList, &__ctx);
    }
    
private:

    ::Ice::Int getIpUsers(::Ice::Long, ::Ice::Long, ::Ice::Long&, ::AMOServer::SICEUserIdSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getIpUsersEx(::Ice::Long ip, ::Ice::Long count, ::Ice::Long netcode, ::Ice::Long& allCount, ::AMOServer::SICEUserIdSeq& uidList)
    {
        return getIpUsersEx(ip, count, netcode, allCount, uidList, 0);
    }
    ::Ice::Int getIpUsersEx(::Ice::Long ip, ::Ice::Long count, ::Ice::Long netcode, ::Ice::Long& allCount, ::AMOServer::SICEUserIdSeq& uidList, const ::Ice::Context& __ctx)
    {
        return getIpUsersEx(ip, count, netcode, allCount, uidList, &__ctx);
    }
    
private:

    ::Ice::Int getIpUsersEx(::Ice::Long, ::Ice::Long, ::Ice::Long, ::Ice::Long&, ::AMOServer::SICEUserIdSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getSameIpSiteUsers(const ::std::string& uid, ::Ice::Long count, ::Ice::Long& allCount, ::AMOServer::SICEUserIdSeq& uidList)
    {
        return getSameIpSiteUsers(uid, count, allCount, uidList, 0);
    }
    ::Ice::Int getSameIpSiteUsers(const ::std::string& uid, ::Ice::Long count, ::Ice::Long& allCount, ::AMOServer::SICEUserIdSeq& uidList, const ::Ice::Context& __ctx)
    {
        return getSameIpSiteUsers(uid, count, allCount, uidList, &__ctx);
    }
    
private:

    ::Ice::Int getSameIpSiteUsers(const ::std::string&, ::Ice::Long, ::Ice::Long&, ::AMOServer::SICEUserIdSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getOnlineUsers(::Ice::Short netcode, ::Ice::Short onlineType, ::AMOServer::SICEUserInfoSeq& userlist)
    {
        return getOnlineUsers(netcode, onlineType, userlist, 0);
    }
    ::Ice::Int getOnlineUsers(::Ice::Short netcode, ::Ice::Short onlineType, ::AMOServer::SICEUserInfoSeq& userlist, const ::Ice::Context& __ctx)
    {
        return getOnlineUsers(netcode, onlineType, userlist, &__ctx);
    }
    
private:

    ::Ice::Int getOnlineUsers(::Ice::Short, ::Ice::Short, ::AMOServer::SICEUserInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getOnlineUser(const ::std::string& uid, ::AMOServer::UserInfo& ui)
    {
        return getOnlineUser(uid, ui, 0);
    }
    ::Ice::Int getOnlineUser(const ::std::string& uid, ::AMOServer::UserInfo& ui, const ::Ice::Context& __ctx)
    {
        return getOnlineUser(uid, ui, &__ctx);
    }
    
private:

    ::Ice::Int getOnlineUser(const ::std::string&, ::AMOServer::UserInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int getOnlineUserEx(const ::std::string& uid, ::AMOServer::UserInfoEx& ui)
    {
        return getOnlineUserEx(uid, ui, 0);
    }
    ::Ice::Int getOnlineUserEx(const ::std::string& uid, ::AMOServer::UserInfoEx& ui, const ::Ice::Context& __ctx)
    {
        return getOnlineUserEx(uid, ui, &__ctx);
    }
    
private:

    ::Ice::Int getOnlineUserEx(const ::std::string&, ::AMOServer::UserInfoEx&, const ::Ice::Context*);
    
public:

    ::Ice::Int getEhmsGrpSts(const ::std::string& uid, const ::AMOServer::SICEGrpIdSeq& grpIds, ::AMOServer::SICEGrpInfoSeq& grpList)
    {
        return getEhmsGrpSts(uid, grpIds, grpList, 0);
    }
    ::Ice::Int getEhmsGrpSts(const ::std::string& uid, const ::AMOServer::SICEGrpIdSeq& grpIds, ::AMOServer::SICEGrpInfoSeq& grpList, const ::Ice::Context& __ctx)
    {
        return getEhmsGrpSts(uid, grpIds, grpList, &__ctx);
    }
    
private:

    ::Ice::Int getEhmsGrpSts(const ::std::string&, const ::AMOServer::SICEGrpIdSeq&, ::AMOServer::SICEGrpInfoSeq&, const ::Ice::Context*);
    
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

namespace AMOServer
{

class MOSInterface : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int getUserStatus(const ::AMOServer::SICEUserIdSeq&, ::AMOServer::SICEMosStatusSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserStatusIp(const ::AMOServer::SICEUserIdSeq&, ::AMOServer::SICEMosStatusIpSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserRealStatus(const ::AMOServer::SICEUserIdSeq&, ::AMOServer::SICEMosStatusSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserRealStatusIp(const ::AMOServer::SICEUserIdSeq&, ::AMOServer::SICEMosStatusIpSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserLastLoginTime(const ::AMOServer::SICEUserIdSeq&, ::AMOServer::SICELoginTimeSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserCount(::Ice::Short, ::Ice::Long, const ::std::string&, ::Ice::Long&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getIpUsers(::Ice::Long, ::Ice::Long, ::Ice::Long&, ::AMOServer::SICEUserIdSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getIpUsersEx(::Ice::Long, ::Ice::Long, ::Ice::Long, ::Ice::Long&, ::AMOServer::SICEUserIdSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getSameIpSiteUsers(const ::std::string&, ::Ice::Long, ::Ice::Long&, ::AMOServer::SICEUserIdSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getOnlineUsers(::Ice::Short, ::Ice::Short, ::AMOServer::SICEUserInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getOnlineUser(const ::std::string&, ::AMOServer::UserInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getOnlineUserEx(const ::std::string&, ::AMOServer::UserInfoEx&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getEhmsGrpSts(const ::std::string&, const ::AMOServer::SICEGrpIdSeq&, ::AMOServer::SICEGrpInfoSeq&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace AMOServer
{

class MOSInterface : virtual public ::IceDelegate::AMOServer::MOSInterface,
                     virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int getUserStatus(const ::AMOServer::SICEUserIdSeq&, ::AMOServer::SICEMosStatusSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getUserStatusIp(const ::AMOServer::SICEUserIdSeq&, ::AMOServer::SICEMosStatusIpSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getUserRealStatus(const ::AMOServer::SICEUserIdSeq&, ::AMOServer::SICEMosStatusSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getUserRealStatusIp(const ::AMOServer::SICEUserIdSeq&, ::AMOServer::SICEMosStatusIpSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getUserLastLoginTime(const ::AMOServer::SICEUserIdSeq&, ::AMOServer::SICELoginTimeSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getUserCount(::Ice::Short, ::Ice::Long, const ::std::string&, ::Ice::Long&, const ::Ice::Context*);

    virtual ::Ice::Int getIpUsers(::Ice::Long, ::Ice::Long, ::Ice::Long&, ::AMOServer::SICEUserIdSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getIpUsersEx(::Ice::Long, ::Ice::Long, ::Ice::Long, ::Ice::Long&, ::AMOServer::SICEUserIdSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getSameIpSiteUsers(const ::std::string&, ::Ice::Long, ::Ice::Long&, ::AMOServer::SICEUserIdSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getOnlineUsers(::Ice::Short, ::Ice::Short, ::AMOServer::SICEUserInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getOnlineUser(const ::std::string&, ::AMOServer::UserInfo&, const ::Ice::Context*);

    virtual ::Ice::Int getOnlineUserEx(const ::std::string&, ::AMOServer::UserInfoEx&, const ::Ice::Context*);

    virtual ::Ice::Int getEhmsGrpSts(const ::std::string&, const ::AMOServer::SICEGrpIdSeq&, ::AMOServer::SICEGrpInfoSeq&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace AMOServer
{

class MOSInterface : virtual public ::IceDelegate::AMOServer::MOSInterface,
                     virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int getUserStatus(const ::AMOServer::SICEUserIdSeq&, ::AMOServer::SICEMosStatusSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getUserStatusIp(const ::AMOServer::SICEUserIdSeq&, ::AMOServer::SICEMosStatusIpSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getUserRealStatus(const ::AMOServer::SICEUserIdSeq&, ::AMOServer::SICEMosStatusSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getUserRealStatusIp(const ::AMOServer::SICEUserIdSeq&, ::AMOServer::SICEMosStatusIpSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getUserLastLoginTime(const ::AMOServer::SICEUserIdSeq&, ::AMOServer::SICELoginTimeSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getUserCount(::Ice::Short, ::Ice::Long, const ::std::string&, ::Ice::Long&, const ::Ice::Context*);

    virtual ::Ice::Int getIpUsers(::Ice::Long, ::Ice::Long, ::Ice::Long&, ::AMOServer::SICEUserIdSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getIpUsersEx(::Ice::Long, ::Ice::Long, ::Ice::Long, ::Ice::Long&, ::AMOServer::SICEUserIdSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getSameIpSiteUsers(const ::std::string&, ::Ice::Long, ::Ice::Long&, ::AMOServer::SICEUserIdSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getOnlineUsers(::Ice::Short, ::Ice::Short, ::AMOServer::SICEUserInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getOnlineUser(const ::std::string&, ::AMOServer::UserInfo&, const ::Ice::Context*);

    virtual ::Ice::Int getOnlineUserEx(const ::std::string&, ::AMOServer::UserInfoEx&, const ::Ice::Context*);

    virtual ::Ice::Int getEhmsGrpSts(const ::std::string&, const ::AMOServer::SICEGrpIdSeq&, ::AMOServer::SICEGrpInfoSeq&, const ::Ice::Context*);
};

}

}

namespace AMOServer
{

class MOSInterface : virtual public ::Ice::Object
{
public:

    typedef MOSInterfacePrx ProxyType;
    typedef MOSInterfacePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int getUserStatus(const ::AMOServer::SICEUserIdSeq&, ::AMOServer::SICEMosStatusSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUserStatusIp(const ::AMOServer::SICEUserIdSeq&, ::AMOServer::SICEMosStatusIpSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserStatusIp(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUserRealStatus(const ::AMOServer::SICEUserIdSeq&, ::AMOServer::SICEMosStatusSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserRealStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUserRealStatusIp(const ::AMOServer::SICEUserIdSeq&, ::AMOServer::SICEMosStatusIpSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserRealStatusIp(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUserLastLoginTime(const ::AMOServer::SICEUserIdSeq&, ::AMOServer::SICELoginTimeSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserLastLoginTime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUserCount(::Ice::Short, ::Ice::Long, const ::std::string&, ::Ice::Long&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserCount(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getIpUsers(::Ice::Long, ::Ice::Long, ::Ice::Long&, ::AMOServer::SICEUserIdSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getIpUsers(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getIpUsersEx(::Ice::Long, ::Ice::Long, ::Ice::Long, ::Ice::Long&, ::AMOServer::SICEUserIdSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getIpUsersEx(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getSameIpSiteUsers(const ::std::string&, ::Ice::Long, ::Ice::Long&, ::AMOServer::SICEUserIdSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getSameIpSiteUsers(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getOnlineUsers(::Ice::Short, ::Ice::Short, ::AMOServer::SICEUserInfoSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getOnlineUsers(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getOnlineUser(const ::std::string&, ::AMOServer::UserInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getOnlineUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getOnlineUserEx(const ::std::string&, ::AMOServer::UserInfoEx&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getOnlineUserEx(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getEhmsGrpSts(const ::std::string&, const ::AMOServer::SICEGrpIdSeq&, ::AMOServer::SICEGrpInfoSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getEhmsGrpSts(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__MOSInterfacePtr(void*, ::Ice::ObjectPtr&);

}

#endif
