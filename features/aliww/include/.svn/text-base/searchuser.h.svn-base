// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `searchuser.ice'

#ifndef __searchuser_h__
#define __searchuser_h__

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
#include <Ice/BuiltinSequences.h>
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

class SearchUserInterface;
bool operator==(const SearchUserInterface&, const SearchUserInterface&);
bool operator!=(const SearchUserInterface&, const SearchUserInterface&);
bool operator<(const SearchUserInterface&, const SearchUserInterface&);
bool operator<=(const SearchUserInterface&, const SearchUserInterface&);
bool operator>(const SearchUserInterface&, const SearchUserInterface&);
bool operator>=(const SearchUserInterface&, const SearchUserInterface&);

}

}

namespace AliIM
{

class SearchUserInterface;
bool operator==(const SearchUserInterface&, const SearchUserInterface&);
bool operator!=(const SearchUserInterface&, const SearchUserInterface&);
bool operator<(const SearchUserInterface&, const SearchUserInterface&);
bool operator<=(const SearchUserInterface&, const SearchUserInterface&);
bool operator>(const SearchUserInterface&, const SearchUserInterface&);
bool operator>=(const SearchUserInterface&, const SearchUserInterface&);

}

namespace IceInternal
{

void incRef(::AliIM::SearchUserInterface*);
void decRef(::AliIM::SearchUserInterface*);

void incRef(::IceProxy::AliIM::SearchUserInterface*);
void decRef(::IceProxy::AliIM::SearchUserInterface*);

}

namespace AliIM
{

typedef ::IceInternal::Handle< ::AliIM::SearchUserInterface> SearchUserInterfacePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::AliIM::SearchUserInterface> SearchUserInterfacePrx;

void __write(::IceInternal::BasicStream*, const SearchUserInterfacePrx&);
void __read(::IceInternal::BasicStream*, SearchUserInterfacePrx&);
void __write(::IceInternal::BasicStream*, const SearchUserInterfacePtr&);
void __patch__SearchUserInterfacePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const SearchUserInterfacePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const SearchUserInterfacePtr&);
void __decRefUnsafe(const SearchUserInterfacePtr&);
void __clearHandleUnsafe(SearchUserInterfacePtr&);

}

namespace AliIM
{

struct SSearchUserRes
{
    ::std::string contactid;
    ::std::string nickname;
    ::std::string site;
    ::Ice::Int age;
    ::Ice::Int gender;
    ::std::string city;
    ::Ice::Int basicStatus;

    bool operator==(const SSearchUserRes&) const;
    bool operator!=(const SSearchUserRes&) const;
    bool operator<(const SSearchUserRes&) const;
    bool operator<=(const SSearchUserRes& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SSearchUserRes& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SSearchUserRes& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct STribeInfo
{
    ::std::string tribeid;
    ::std::string tribename;
    ::std::string masterId;
    ::Ice::Int tribeclass;
    ::std::string describe;
    ::std::string bulletin;
    ::Ice::Int checkmode;
    ::std::string password;
    ::std::string keyword;
    ::Ice::Int allowvisitor;
    ::Ice::Int forbidsearch;
    ::std::string extsign;
    ::Ice::Int opentribe;
    ::Ice::Int maxmembers;

    bool operator==(const STribeInfo&) const;
    bool operator!=(const STribeInfo&) const;
    bool operator<(const STribeInfo&) const;
    bool operator<=(const STribeInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const STribeInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const STribeInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::AliIM::SSearchUserRes> SearchuserResSeq;

class __U__SearchuserResSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIM::SSearchUserRes*, const ::AliIM::SSearchUserRes*, __U__SearchuserResSeq);
void __read(::IceInternal::BasicStream*, SearchuserResSeq&, __U__SearchuserResSeq);

}

namespace IceProxy
{

namespace AliIM
{

class SearchUserInterface : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int searchUser(const ::std::string& uid, const ::std::string& targetUid, ::Ice::Int& retCode, ::AliIM::SearchuserResSeq& retVal)
    {
        return searchUser(uid, targetUid, retCode, retVal, 0);
    }
    ::Ice::Int searchUser(const ::std::string& uid, const ::std::string& targetUid, ::Ice::Int& retCode, ::AliIM::SearchuserResSeq& retVal, const ::Ice::Context& __ctx)
    {
        return searchUser(uid, targetUid, retCode, retVal, &__ctx);
    }
    
private:

    ::Ice::Int searchUser(const ::std::string&, const ::std::string&, ::Ice::Int&, ::AliIM::SearchuserResSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int searchUserB2BFuzzy(const ::std::string& uid, const ::std::string& targetUid, const ::std::string& reserve, ::Ice::Int& retCode, ::AliIM::SearchuserResSeq& retVal)
    {
        return searchUserB2BFuzzy(uid, targetUid, reserve, retCode, retVal, 0);
    }
    ::Ice::Int searchUserB2BFuzzy(const ::std::string& uid, const ::std::string& targetUid, const ::std::string& reserve, ::Ice::Int& retCode, ::AliIM::SearchuserResSeq& retVal, const ::Ice::Context& __ctx)
    {
        return searchUserB2BFuzzy(uid, targetUid, reserve, retCode, retVal, &__ctx);
    }
    
private:

    ::Ice::Int searchUserB2BFuzzy(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, ::AliIM::SearchuserResSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getRecommendUser(const ::std::string& uid, const ::std::string& targetUid, ::Ice::Int syncUser, ::Ice::Int& retCode, ::AliIM::SearchuserResSeq& retVal)
    {
        return getRecommendUser(uid, targetUid, syncUser, retCode, retVal, 0);
    }
    ::Ice::Int getRecommendUser(const ::std::string& uid, const ::std::string& targetUid, ::Ice::Int syncUser, ::Ice::Int& retCode, ::AliIM::SearchuserResSeq& retVal, const ::Ice::Context& __ctx)
    {
        return getRecommendUser(uid, targetUid, syncUser, retCode, retVal, &__ctx);
    }
    
private:

    ::Ice::Int getRecommendUser(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, ::AliIM::SearchuserResSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getUsersByName(const ::std::string& uid, const ::std::string& targetUid, ::Ice::Int syncUser, ::Ice::Int& retCode, ::AliIM::SearchuserResSeq& retVal)
    {
        return getUsersByName(uid, targetUid, syncUser, retCode, retVal, 0);
    }
    ::Ice::Int getUsersByName(const ::std::string& uid, const ::std::string& targetUid, ::Ice::Int syncUser, ::Ice::Int& retCode, ::AliIM::SearchuserResSeq& retVal, const ::Ice::Context& __ctx)
    {
        return getUsersByName(uid, targetUid, syncUser, retCode, retVal, &__ctx);
    }
    
private:

    ::Ice::Int getUsersByName(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, ::AliIM::SearchuserResSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getTribeInfo(const ::std::string& tribeId, ::AliIM::STribeInfo& tribeInfo)
    {
        return getTribeInfo(tribeId, tribeInfo, 0);
    }
    ::Ice::Int getTribeInfo(const ::std::string& tribeId, ::AliIM::STribeInfo& tribeInfo, const ::Ice::Context& __ctx)
    {
        return getTribeInfo(tribeId, tribeInfo, &__ctx);
    }
    
private:

    ::Ice::Int getTribeInfo(const ::std::string&, ::AliIM::STribeInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int advancedSearchUser(const ::std::string& site, const ::std::string& country, const ::std::string& province, const ::std::string& city, ::Ice::Int gender, ::Ice::Int age, const ::std::string& job, ::Ice::Int timestamp, ::AliIM::SearchuserResSeq& retVal)
    {
        return advancedSearchUser(site, country, province, city, gender, age, job, timestamp, retVal, 0);
    }
    ::Ice::Int advancedSearchUser(const ::std::string& site, const ::std::string& country, const ::std::string& province, const ::std::string& city, ::Ice::Int gender, ::Ice::Int age, const ::std::string& job, ::Ice::Int timestamp, ::AliIM::SearchuserResSeq& retVal, const ::Ice::Context& __ctx)
    {
        return advancedSearchUser(site, country, province, city, gender, age, job, timestamp, retVal, &__ctx);
    }
    
private:

    ::Ice::Int advancedSearchUser(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, ::Ice::Int, ::AliIM::SearchuserResSeq&, const ::Ice::Context*);
    
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

class SearchUserInterface : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int searchUser(const ::std::string&, const ::std::string&, ::Ice::Int&, ::AliIM::SearchuserResSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int searchUserB2BFuzzy(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, ::AliIM::SearchuserResSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getRecommendUser(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, ::AliIM::SearchuserResSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUsersByName(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, ::AliIM::SearchuserResSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getTribeInfo(const ::std::string&, ::AliIM::STribeInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int advancedSearchUser(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, ::Ice::Int, ::AliIM::SearchuserResSeq&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace AliIM
{

class SearchUserInterface : virtual public ::IceDelegate::AliIM::SearchUserInterface,
                            virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int searchUser(const ::std::string&, const ::std::string&, ::Ice::Int&, ::AliIM::SearchuserResSeq&, const ::Ice::Context*);

    virtual ::Ice::Int searchUserB2BFuzzy(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, ::AliIM::SearchuserResSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getRecommendUser(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, ::AliIM::SearchuserResSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getUsersByName(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, ::AliIM::SearchuserResSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getTribeInfo(const ::std::string&, ::AliIM::STribeInfo&, const ::Ice::Context*);

    virtual ::Ice::Int advancedSearchUser(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, ::Ice::Int, ::AliIM::SearchuserResSeq&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace AliIM
{

class SearchUserInterface : virtual public ::IceDelegate::AliIM::SearchUserInterface,
                            virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int searchUser(const ::std::string&, const ::std::string&, ::Ice::Int&, ::AliIM::SearchuserResSeq&, const ::Ice::Context*);

    virtual ::Ice::Int searchUserB2BFuzzy(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, ::AliIM::SearchuserResSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getRecommendUser(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, ::AliIM::SearchuserResSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getUsersByName(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, ::AliIM::SearchuserResSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getTribeInfo(const ::std::string&, ::AliIM::STribeInfo&, const ::Ice::Context*);

    virtual ::Ice::Int advancedSearchUser(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, ::Ice::Int, ::AliIM::SearchuserResSeq&, const ::Ice::Context*);
};

}

}

namespace AliIM
{

class SearchUserInterface : virtual public ::Ice::Object
{
public:

    typedef SearchUserInterfacePrx ProxyType;
    typedef SearchUserInterfacePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int searchUser(const ::std::string&, const ::std::string&, ::Ice::Int&, ::AliIM::SearchuserResSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___searchUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int searchUserB2BFuzzy(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, ::AliIM::SearchuserResSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___searchUserB2BFuzzy(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getRecommendUser(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, ::AliIM::SearchuserResSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getRecommendUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUsersByName(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, ::AliIM::SearchuserResSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUsersByName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getTribeInfo(const ::std::string&, ::AliIM::STribeInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getTribeInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int advancedSearchUser(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::std::string&, ::Ice::Int, ::AliIM::SearchuserResSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___advancedSearchUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__SearchUserInterfacePtr(void*, ::Ice::ObjectPtr&);

}

#endif
