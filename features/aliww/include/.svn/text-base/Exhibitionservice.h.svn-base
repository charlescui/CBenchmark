// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `Exhibitionservice.ice'

#ifndef __Exhibitionservice_h__
#define __Exhibitionservice_h__

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

namespace AliIM
{

class ExhibitionInterface;
bool operator==(const ExhibitionInterface&, const ExhibitionInterface&);
bool operator!=(const ExhibitionInterface&, const ExhibitionInterface&);
bool operator<(const ExhibitionInterface&, const ExhibitionInterface&);
bool operator<=(const ExhibitionInterface&, const ExhibitionInterface&);
bool operator>(const ExhibitionInterface&, const ExhibitionInterface&);
bool operator>=(const ExhibitionInterface&, const ExhibitionInterface&);

}

}

namespace AliIM
{

class ExhibitionInterface;
bool operator==(const ExhibitionInterface&, const ExhibitionInterface&);
bool operator!=(const ExhibitionInterface&, const ExhibitionInterface&);
bool operator<(const ExhibitionInterface&, const ExhibitionInterface&);
bool operator<=(const ExhibitionInterface&, const ExhibitionInterface&);
bool operator>(const ExhibitionInterface&, const ExhibitionInterface&);
bool operator>=(const ExhibitionInterface&, const ExhibitionInterface&);

}

namespace IceInternal
{

void incRef(::AliIM::ExhibitionInterface*);
void decRef(::AliIM::ExhibitionInterface*);

void incRef(::IceProxy::AliIM::ExhibitionInterface*);
void decRef(::IceProxy::AliIM::ExhibitionInterface*);

}

namespace AliIM
{

typedef ::IceInternal::Handle< ::AliIM::ExhibitionInterface> ExhibitionInterfacePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::AliIM::ExhibitionInterface> ExhibitionInterfacePrx;

void __write(::IceInternal::BasicStream*, const ExhibitionInterfacePrx&);
void __read(::IceInternal::BasicStream*, ExhibitionInterfacePrx&);
void __write(::IceInternal::BasicStream*, const ExhibitionInterfacePtr&);
void __patch__ExhibitionInterfacePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const ExhibitionInterfacePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const ExhibitionInterfacePtr&);
void __decRefUnsafe(const ExhibitionInterfacePtr&);
void __clearHandleUnsafe(ExhibitionInterfacePtr&);

}

namespace AliIM
{

struct UserProfile
{
    ::std::string userId;
    ::std::string userName;
    ::std::string passport;
    ::std::string isDeleted;
    ::std::string gmtCreate;
    ::std::string gmtModified;
    ::std::string creator;
    ::std::string Modifier;
    ::std::string domainPrefix;
    ::std::string loginId;
    ::std::string longId;
    ::std::string sourceType;
    ::std::string gmtLogin;
    ::std::string userStatus;
    ::Ice::Int status;
    ::std::string email;
    ::std::string mobileNo;
    ::std::string phoneNo;
    ::std::string company;
    ::std::string jobTitle;
    ::std::string country;
    ::std::string province;
    ::std::string city;
    ::std::string address;
    ::std::string sex;
    ::std::string birthday;
    ::std::string zip;
    ::std::string constellation;
    ::std::string subCity;
    ::std::string bloodType;
    ::std::string shengXiao;
    ::std::string career;
    ::std::string degree;
    ::std::string interest;
    ::std::string personality;
    ::std::string memo;
    ::std::string finishSchool;
    ::Ice::Int contactShowFlag;
    ::std::string companyAddress;
    ::std::string companyUrl;
    ::std::string companyTel;
    ::Ice::Int companyShowFlag;
    ::std::string signature;
    ::std::string companyZip;
    ::std::string companyFax;
    ::std::string moreInterest;
    ::Ice::Int personalShowFlag;
    ::std::string homePage;
    ::std::string vocation;
    ::std::string companyEmail;
    ::std::string duty;
    ::std::string department;
    ::std::string purchase;
    ::std::string sales;
    ::Ice::Float finishedPercent;
    ::Ice::Int imgType;
    ::std::string imgHashCode;
    ::std::string nickname;
    ::std::string userLevel;

    bool operator==(const UserProfile&) const;
    bool operator!=(const UserProfile&) const;
    bool operator<(const UserProfile&) const;
    bool operator<=(const UserProfile& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const UserProfile& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const UserProfile& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

}

namespace IceProxy
{

namespace AliIM
{

class ExhibitionInterface : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int CheckUserWebPasswd(const ::std::string& strCaller, const ::std::string& strServiceType, const ::std::string& userId, const ::std::string& passwd)
    {
        return CheckUserWebPasswd(strCaller, strServiceType, userId, passwd, 0);
    }
    ::Ice::Int CheckUserWebPasswd(const ::std::string& strCaller, const ::std::string& strServiceType, const ::std::string& userId, const ::std::string& passwd, const ::Ice::Context& __ctx)
    {
        return CheckUserWebPasswd(strCaller, strServiceType, userId, passwd, &__ctx);
    }
    
private:

    ::Ice::Int CheckUserWebPasswd(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserProfileByLongId(const ::std::string& strCaller, const ::std::string& strServiceType, const ::std::string& longId, ::AliIM::UserProfile& userProfile)
    {
        return getUserProfileByLongId(strCaller, strServiceType, longId, userProfile, 0);
    }
    ::Ice::Int getUserProfileByLongId(const ::std::string& strCaller, const ::std::string& strServiceType, const ::std::string& longId, ::AliIM::UserProfile& userProfile, const ::Ice::Context& __ctx)
    {
        return getUserProfileByLongId(strCaller, strServiceType, longId, userProfile, &__ctx);
    }
    
private:

    ::Ice::Int getUserProfileByLongId(const ::std::string&, const ::std::string&, const ::std::string&, ::AliIM::UserProfile&, const ::Ice::Context*);
    
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

namespace AliIM
{

class ExhibitionInterface : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int CheckUserWebPasswd(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserProfileByLongId(const ::std::string&, const ::std::string&, const ::std::string&, ::AliIM::UserProfile&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace AliIM
{

class ExhibitionInterface : virtual public ::IceDelegate::AliIM::ExhibitionInterface,
                            virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int CheckUserWebPasswd(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getUserProfileByLongId(const ::std::string&, const ::std::string&, const ::std::string&, ::AliIM::UserProfile&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace AliIM
{

class ExhibitionInterface : virtual public ::IceDelegate::AliIM::ExhibitionInterface,
                            virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int CheckUserWebPasswd(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getUserProfileByLongId(const ::std::string&, const ::std::string&, const ::std::string&, ::AliIM::UserProfile&, const ::Ice::Context*);
};

}

}

namespace AliIM
{

class ExhibitionInterface : virtual public ::Ice::Object
{
public:

    typedef ExhibitionInterfacePrx ProxyType;
    typedef ExhibitionInterfacePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int CheckUserWebPasswd(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___CheckUserWebPasswd(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUserProfileByLongId(const ::std::string&, const ::std::string&, const ::std::string&, ::AliIM::UserProfile&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserProfileByLongId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__ExhibitionInterfacePtr(void*, ::Ice::ObjectPtr&);

}

#endif
