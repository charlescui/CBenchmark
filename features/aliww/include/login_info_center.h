// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `login_info_center.ice'

#ifndef __login_info_center_h__
#define __login_info_center_h__

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

namespace LoginInfoCenter
{

class LoginInfoInterface;
bool operator==(const LoginInfoInterface&, const LoginInfoInterface&);
bool operator!=(const LoginInfoInterface&, const LoginInfoInterface&);
bool operator<(const LoginInfoInterface&, const LoginInfoInterface&);
bool operator<=(const LoginInfoInterface&, const LoginInfoInterface&);
bool operator>(const LoginInfoInterface&, const LoginInfoInterface&);
bool operator>=(const LoginInfoInterface&, const LoginInfoInterface&);

}

}

namespace LoginInfoCenter
{

class LoginInfoInterface;
bool operator==(const LoginInfoInterface&, const LoginInfoInterface&);
bool operator!=(const LoginInfoInterface&, const LoginInfoInterface&);
bool operator<(const LoginInfoInterface&, const LoginInfoInterface&);
bool operator<=(const LoginInfoInterface&, const LoginInfoInterface&);
bool operator>(const LoginInfoInterface&, const LoginInfoInterface&);
bool operator>=(const LoginInfoInterface&, const LoginInfoInterface&);

}

namespace IceInternal
{

void incRef(::LoginInfoCenter::LoginInfoInterface*);
void decRef(::LoginInfoCenter::LoginInfoInterface*);

void incRef(::IceProxy::LoginInfoCenter::LoginInfoInterface*);
void decRef(::IceProxy::LoginInfoCenter::LoginInfoInterface*);

}

namespace LoginInfoCenter
{

typedef ::IceInternal::Handle< ::LoginInfoCenter::LoginInfoInterface> LoginInfoInterfacePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::LoginInfoCenter::LoginInfoInterface> LoginInfoInterfacePrx;

void __write(::IceInternal::BasicStream*, const LoginInfoInterfacePrx&);
void __read(::IceInternal::BasicStream*, LoginInfoInterfacePrx&);
void __write(::IceInternal::BasicStream*, const LoginInfoInterfacePtr&);
void __patch__LoginInfoInterfacePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const LoginInfoInterfacePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const LoginInfoInterfacePtr&);
void __decRefUnsafe(const LoginInfoInterfacePtr&);
void __clearHandleUnsafe(LoginInfoInterfacePtr&);

}

namespace LoginInfoCenter
{

struct SICELoginInfo
{
    ::Ice::Int clifd;
    ::Ice::Int cliip;
    ::Ice::Int onlineTime;
    ::Ice::Int sysMsgId;
    ::Ice::Int language;
    ::Ice::Short activeState;
    ::Ice::Short userLevel;
    ::Ice::Short userType;
    ::Ice::Short vipType;
    ::Ice::Short mulMsgFlag;
    ::Ice::Float totalActDegree;
    ::std::string uid;
    ::std::string deskey;
    ::std::string version;

    bool operator==(const SICELoginInfo&) const;
    bool operator!=(const SICELoginInfo&) const;
    bool operator<(const SICELoginInfo&) const;
    bool operator<=(const SICELoginInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICELoginInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICELoginInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

}

namespace IceProxy
{

namespace LoginInfoCenter
{

class LoginInfoInterface : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int SetLoginInfo(const ::std::string& uid, const ::LoginInfoCenter::SICELoginInfo& info)
    {
        return SetLoginInfo(uid, info, 0);
    }
    ::Ice::Int SetLoginInfo(const ::std::string& uid, const ::LoginInfoCenter::SICELoginInfo& info, const ::Ice::Context& __ctx)
    {
        return SetLoginInfo(uid, info, &__ctx);
    }
    
private:

    ::Ice::Int SetLoginInfo(const ::std::string&, const ::LoginInfoCenter::SICELoginInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateLoginInfo(const ::LoginInfoCenter::SICELoginInfo& info)
    {
        return UpdateLoginInfo(info, 0);
    }
    ::Ice::Int UpdateLoginInfo(const ::LoginInfoCenter::SICELoginInfo& info, const ::Ice::Context& __ctx)
    {
        return UpdateLoginInfo(info, &__ctx);
    }
    
private:

    ::Ice::Int UpdateLoginInfo(const ::LoginInfoCenter::SICELoginInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int DelLoginInfo(const ::std::string& uid)
    {
        return DelLoginInfo(uid, 0);
    }
    ::Ice::Int DelLoginInfo(const ::std::string& uid, const ::Ice::Context& __ctx)
    {
        return DelLoginInfo(uid, &__ctx);
    }
    
private:

    ::Ice::Int DelLoginInfo(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetLoginInfo(const ::std::string& uid, ::LoginInfoCenter::SICELoginInfo& obj)
    {
        return GetLoginInfo(uid, obj, 0);
    }
    ::Ice::Int GetLoginInfo(const ::std::string& uid, ::LoginInfoCenter::SICELoginInfo& obj, const ::Ice::Context& __ctx)
    {
        return GetLoginInfo(uid, obj, &__ctx);
    }
    
private:

    ::Ice::Int GetLoginInfo(const ::std::string&, ::LoginInfoCenter::SICELoginInfo&, const ::Ice::Context*);
    
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

namespace LoginInfoCenter
{

class LoginInfoInterface : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int SetLoginInfo(const ::std::string&, const ::LoginInfoCenter::SICELoginInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateLoginInfo(const ::LoginInfoCenter::SICELoginInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DelLoginInfo(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetLoginInfo(const ::std::string&, ::LoginInfoCenter::SICELoginInfo&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace LoginInfoCenter
{

class LoginInfoInterface : virtual public ::IceDelegate::LoginInfoCenter::LoginInfoInterface,
                           virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int SetLoginInfo(const ::std::string&, const ::LoginInfoCenter::SICELoginInfo&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateLoginInfo(const ::LoginInfoCenter::SICELoginInfo&, const ::Ice::Context*);

    virtual ::Ice::Int DelLoginInfo(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetLoginInfo(const ::std::string&, ::LoginInfoCenter::SICELoginInfo&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace LoginInfoCenter
{

class LoginInfoInterface : virtual public ::IceDelegate::LoginInfoCenter::LoginInfoInterface,
                           virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int SetLoginInfo(const ::std::string&, const ::LoginInfoCenter::SICELoginInfo&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateLoginInfo(const ::LoginInfoCenter::SICELoginInfo&, const ::Ice::Context*);

    virtual ::Ice::Int DelLoginInfo(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetLoginInfo(const ::std::string&, ::LoginInfoCenter::SICELoginInfo&, const ::Ice::Context*);
};

}

}

namespace LoginInfoCenter
{

class LoginInfoInterface : virtual public ::Ice::Object
{
public:

    typedef LoginInfoInterfacePrx ProxyType;
    typedef LoginInfoInterfacePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int SetLoginInfo(const ::std::string&, const ::LoginInfoCenter::SICELoginInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___SetLoginInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int UpdateLoginInfo(const ::LoginInfoCenter::SICELoginInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateLoginInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int DelLoginInfo(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DelLoginInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetLoginInfo(const ::std::string&, ::LoginInfoCenter::SICELoginInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetLoginInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__LoginInfoInterfacePtr(void*, ::Ice::ObjectPtr&);

}

#endif
