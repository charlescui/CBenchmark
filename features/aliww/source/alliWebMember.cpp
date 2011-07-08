// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `alliWebMember.ice'

#include <alliWebMember.h>
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

static const ::std::string __alliWebMember__UserProfile__GetWebMemberInfo_name = "GetWebMemberInfo";

static const ::std::string __alliWebMember__UserProfile__getWanghaoBindedWebId_name = "getWanghaoBindedWebId";

static const ::std::string __alliWebMember__UserProfile__CheckWebMemberPWInfo_name = "CheckWebMemberPWInfo";

void
IceInternal::incRef(::alliWebMember::UserProfile* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::alliWebMember::UserProfile* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::alliWebMember::UserProfile* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::alliWebMember::UserProfile* p)
{
    p->__decRef();
}

void
alliWebMember::__write(::IceInternal::BasicStream* __os, const ::alliWebMember::UserProfilePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
alliWebMember::__read(::IceInternal::BasicStream* __is, ::alliWebMember::UserProfilePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::alliWebMember::UserProfile;
        v->__copyFrom(proxy);
    }
}

void
alliWebMember::__write(::IceInternal::BasicStream* __os, const ::alliWebMember::UserProfilePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

bool
alliWebMember::SWebUserInfo::operator==(const SWebUserInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
alliWebMember::SWebUserInfo::operator!=(const SWebUserInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(uid != __rhs.uid)
    {
        return true;
    }
    if(name != __rhs.name)
    {
        return true;
    }
    if(rawpasswd != __rhs.rawpasswd)
    {
        return true;
    }
    if(md5passwd != __rhs.md5passwd)
    {
        return true;
    }
    if(email != __rhs.email)
    {
        return true;
    }
    if(mobileno != __rhs.mobileno)
    {
        return true;
    }
    if(phoneno != __rhs.phoneno)
    {
        return true;
    }
    if(company != __rhs.company)
    {
        return true;
    }
    if(jobtitle != __rhs.jobtitle)
    {
        return true;
    }
    if(birthday != __rhs.birthday)
    {
        return true;
    }
    if(sex != __rhs.sex)
    {
        return true;
    }
    if(country != __rhs.country)
    {
        return true;
    }
    if(province != __rhs.province)
    {
        return true;
    }
    if(city != __rhs.city)
    {
        return true;
    }
    if(address != __rhs.address)
    {
        return true;
    }
    return false;
}

bool
alliWebMember::SWebUserInfo::operator<(const SWebUserInfo& __rhs) const
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
    if(name < __rhs.name)
    {
        return true;
    }
    else if(__rhs.name < name)
    {
        return false;
    }
    if(rawpasswd < __rhs.rawpasswd)
    {
        return true;
    }
    else if(__rhs.rawpasswd < rawpasswd)
    {
        return false;
    }
    if(md5passwd < __rhs.md5passwd)
    {
        return true;
    }
    else if(__rhs.md5passwd < md5passwd)
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
    if(mobileno < __rhs.mobileno)
    {
        return true;
    }
    else if(__rhs.mobileno < mobileno)
    {
        return false;
    }
    if(phoneno < __rhs.phoneno)
    {
        return true;
    }
    else if(__rhs.phoneno < phoneno)
    {
        return false;
    }
    if(company < __rhs.company)
    {
        return true;
    }
    else if(__rhs.company < company)
    {
        return false;
    }
    if(jobtitle < __rhs.jobtitle)
    {
        return true;
    }
    else if(__rhs.jobtitle < jobtitle)
    {
        return false;
    }
    if(birthday < __rhs.birthday)
    {
        return true;
    }
    else if(__rhs.birthday < birthday)
    {
        return false;
    }
    if(sex < __rhs.sex)
    {
        return true;
    }
    else if(__rhs.sex < sex)
    {
        return false;
    }
    if(country < __rhs.country)
    {
        return true;
    }
    else if(__rhs.country < country)
    {
        return false;
    }
    if(province < __rhs.province)
    {
        return true;
    }
    else if(__rhs.province < province)
    {
        return false;
    }
    if(city < __rhs.city)
    {
        return true;
    }
    else if(__rhs.city < city)
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
    return false;
}

void
alliWebMember::SWebUserInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(uid);
    __os->write(name);
    __os->write(rawpasswd);
    __os->write(md5passwd);
    __os->write(email);
    __os->write(mobileno);
    __os->write(phoneno);
    __os->write(company);
    __os->write(jobtitle);
    __os->write(birthday);
    __os->write(sex);
    __os->write(country);
    __os->write(province);
    __os->write(city);
    __os->write(address);
}

void
alliWebMember::SWebUserInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(uid);
    __is->read(name);
    __is->read(rawpasswd);
    __is->read(md5passwd);
    __is->read(email);
    __is->read(mobileno);
    __is->read(phoneno);
    __is->read(company);
    __is->read(jobtitle);
    __is->read(birthday);
    __is->read(sex);
    __is->read(country);
    __is->read(province);
    __is->read(city);
    __is->read(address);
}

void
alliWebMember::__write(::IceInternal::BasicStream* __os, const ::alliWebMember::SWebUserInfo* begin, const ::alliWebMember::SWebUserInfo* end, ::alliWebMember::__U__SUserSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
alliWebMember::__read(::IceInternal::BasicStream* __is, ::alliWebMember::SUserSeq& v, ::alliWebMember::__U__SUserSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 15);
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
alliWebMember::__addObject(const UserProfilePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
alliWebMember::__usesClasses(const UserProfilePtr& p)
{
    return p->__usesClasses();
}

void
alliWebMember::__decRefUnsafe(const UserProfilePtr& p)
{
    p->__decRefUnsafe();
}

void
alliWebMember::__clearHandleUnsafe(UserProfilePtr& p)
{
    p.__clearHandleUnsafe();
}

::Ice::Int
IceProxy::alliWebMember::UserProfile::GetWebMemberInfo(const ::std::string& uid, ::alliWebMember::SWebUserInfo& userInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__alliWebMember__UserProfile__GetWebMemberInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::alliWebMember::UserProfile* __del = dynamic_cast< ::IceDelegate::alliWebMember::UserProfile*>(__delBase.get());
            return __del->GetWebMemberInfo(uid, userInfo, __ctx);
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
IceProxy::alliWebMember::UserProfile::getWanghaoBindedWebId(const ::std::string& passportid, ::std::string& webloginId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__alliWebMember__UserProfile__getWanghaoBindedWebId_name);
            __delBase = __getDelegate();
            ::IceDelegate::alliWebMember::UserProfile* __del = dynamic_cast< ::IceDelegate::alliWebMember::UserProfile*>(__delBase.get());
            return __del->getWanghaoBindedWebId(passportid, webloginId, __ctx);
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
IceProxy::alliWebMember::UserProfile::CheckWebMemberPWInfo(const ::std::string& uid, const ::std::string& password, ::std::string& retmd5pw, ::std::string& rettoken, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__alliWebMember__UserProfile__CheckWebMemberPWInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::alliWebMember::UserProfile* __del = dynamic_cast< ::IceDelegate::alliWebMember::UserProfile*>(__delBase.get());
            return __del->CheckWebMemberPWInfo(uid, password, retmd5pw, rettoken, __ctx);
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
IceProxy::alliWebMember::UserProfile::ice_staticId()
{
    return ::alliWebMember::UserProfile::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::alliWebMember::UserProfile::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::alliWebMember::UserProfile);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::alliWebMember::UserProfile::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::alliWebMember::UserProfile);
}

bool
IceProxy::alliWebMember::operator==(const ::IceProxy::alliWebMember::UserProfile& l, const ::IceProxy::alliWebMember::UserProfile& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::alliWebMember::operator!=(const ::IceProxy::alliWebMember::UserProfile& l, const ::IceProxy::alliWebMember::UserProfile& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::alliWebMember::operator<(const ::IceProxy::alliWebMember::UserProfile& l, const ::IceProxy::alliWebMember::UserProfile& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::alliWebMember::operator<=(const ::IceProxy::alliWebMember::UserProfile& l, const ::IceProxy::alliWebMember::UserProfile& r)
{
    return l < r || l == r;
}

bool
IceProxy::alliWebMember::operator>(const ::IceProxy::alliWebMember::UserProfile& l, const ::IceProxy::alliWebMember::UserProfile& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::alliWebMember::operator>=(const ::IceProxy::alliWebMember::UserProfile& l, const ::IceProxy::alliWebMember::UserProfile& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::alliWebMember::UserProfile::GetWebMemberInfo(const ::std::string& uid, ::alliWebMember::SWebUserInfo& userInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __alliWebMember__UserProfile__GetWebMemberInfo_name, ::Ice::Normal, __context, __compress);
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
        userInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::alliWebMember::UserProfile::getWanghaoBindedWebId(const ::std::string& passportid, ::std::string& webloginId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __alliWebMember__UserProfile__getWanghaoBindedWebId_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(passportid);
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
        __is->read(webloginId);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::alliWebMember::UserProfile::CheckWebMemberPWInfo(const ::std::string& uid, const ::std::string& password, ::std::string& retmd5pw, ::std::string& rettoken, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __alliWebMember__UserProfile__CheckWebMemberPWInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(password);
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
        __is->read(retmd5pw);
        __is->read(rettoken);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::alliWebMember::UserProfile::GetWebMemberInfo(const ::std::string& uid, ::alliWebMember::SWebUserInfo& userInfo, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __alliWebMember__UserProfile__GetWebMemberInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::alliWebMember::UserProfile* __servant = dynamic_cast< ::alliWebMember::UserProfile*>(__direct.servant().get());
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
                __ret = __servant->GetWebMemberInfo(uid, userInfo, __current);
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
IceDelegateD::alliWebMember::UserProfile::getWanghaoBindedWebId(const ::std::string& passportid, ::std::string& webloginId, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __alliWebMember__UserProfile__getWanghaoBindedWebId_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::alliWebMember::UserProfile* __servant = dynamic_cast< ::alliWebMember::UserProfile*>(__direct.servant().get());
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
                __ret = __servant->getWanghaoBindedWebId(passportid, webloginId, __current);
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
IceDelegateD::alliWebMember::UserProfile::CheckWebMemberPWInfo(const ::std::string& uid, const ::std::string& password, ::std::string& retmd5pw, ::std::string& rettoken, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __alliWebMember__UserProfile__CheckWebMemberPWInfo_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::alliWebMember::UserProfile* __servant = dynamic_cast< ::alliWebMember::UserProfile*>(__direct.servant().get());
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
                __ret = __servant->CheckWebMemberPWInfo(uid, password, retmd5pw, rettoken, __current);
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
alliWebMember::UserProfile::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __alliWebMember__UserProfile_ids[2] =
{
    "::Ice::Object",
    "::alliWebMember::UserProfile"
};

bool
alliWebMember::UserProfile::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__alliWebMember__UserProfile_ids, __alliWebMember__UserProfile_ids + 2, _s);
}

::std::vector< ::std::string>
alliWebMember::UserProfile::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__alliWebMember__UserProfile_ids[0], &__alliWebMember__UserProfile_ids[2]);
}

const ::std::string&
alliWebMember::UserProfile::ice_id(const ::Ice::Current&) const
{
    return __alliWebMember__UserProfile_ids[1];
}

const ::std::string&
alliWebMember::UserProfile::ice_staticId()
{
    return __alliWebMember__UserProfile_ids[1];
}

::IceInternal::DispatchStatus
alliWebMember::UserProfile::___GetWebMemberInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    __is->read(uid);
    ::alliWebMember::SWebUserInfo userInfo;
    ::Ice::Int __ret = GetWebMemberInfo(uid, userInfo, __current);
    userInfo.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
alliWebMember::UserProfile::___getWanghaoBindedWebId(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string passportid;
    __is->read(passportid);
    ::std::string webloginId;
    ::Ice::Int __ret = getWanghaoBindedWebId(passportid, webloginId, __current);
    __os->write(webloginId);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
alliWebMember::UserProfile::___CheckWebMemberPWInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string uid;
    ::std::string password;
    __is->read(uid);
    __is->read(password);
    ::std::string retmd5pw;
    ::std::string rettoken;
    ::Ice::Int __ret = CheckWebMemberPWInfo(uid, password, retmd5pw, rettoken, __current);
    __os->write(retmd5pw);
    __os->write(rettoken);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

static ::std::string __alliWebMember__UserProfile_all[] =
{
    "CheckWebMemberPWInfo",
    "GetWebMemberInfo",
    "getWanghaoBindedWebId",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::IceInternal::DispatchStatus
alliWebMember::UserProfile::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__alliWebMember__UserProfile_all, __alliWebMember__UserProfile_all + 7, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __alliWebMember__UserProfile_all)
    {
        case 0:
        {
            return ___CheckWebMemberPWInfo(in, current);
        }
        case 1:
        {
            return ___GetWebMemberInfo(in, current);
        }
        case 2:
        {
            return ___getWanghaoBindedWebId(in, current);
        }
        case 3:
        {
            return ___ice_id(in, current);
        }
        case 4:
        {
            return ___ice_ids(in, current);
        }
        case 5:
        {
            return ___ice_isA(in, current);
        }
        case 6:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
alliWebMember::UserProfile::__write(::IceInternal::BasicStream* __os) const
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
alliWebMember::UserProfile::__read(::IceInternal::BasicStream* __is, bool __rid)
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
alliWebMember::UserProfile::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type alliWebMember::UserProfile was not generated with stream support";
    throw ex;
}

void
alliWebMember::UserProfile::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type alliWebMember::UserProfile was not generated with stream support";
    throw ex;
}

void 
alliWebMember::__patch__UserProfilePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::alliWebMember::UserProfilePtr* p = static_cast< ::alliWebMember::UserProfilePtr*>(__addr);
    assert(p);
    *p = ::alliWebMember::UserProfilePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::alliWebMember::UserProfile::ice_staticId();
        throw e;
    }
}

bool
alliWebMember::operator==(const ::alliWebMember::UserProfile& l, const ::alliWebMember::UserProfile& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
alliWebMember::operator!=(const ::alliWebMember::UserProfile& l, const ::alliWebMember::UserProfile& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
alliWebMember::operator<(const ::alliWebMember::UserProfile& l, const ::alliWebMember::UserProfile& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
alliWebMember::operator<=(const ::alliWebMember::UserProfile& l, const ::alliWebMember::UserProfile& r)
{
    return l < r || l == r;
}

bool
alliWebMember::operator>(const ::alliWebMember::UserProfile& l, const ::alliWebMember::UserProfile& r)
{
    return !(l < r) && !(l == r);
}

bool
alliWebMember::operator>=(const ::alliWebMember::UserProfile& l, const ::alliWebMember::UserProfile& r)
{
    return !(l < r);
}
