// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `user_statics.ice'

#ifndef __user_statics_h__
#define __user_statics_h__

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
#include <dbdatadefine.h>
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

namespace UserStaticsX
{

class UserStaticsI;
bool operator==(const UserStaticsI&, const UserStaticsI&);
bool operator!=(const UserStaticsI&, const UserStaticsI&);
bool operator<(const UserStaticsI&, const UserStaticsI&);
bool operator<=(const UserStaticsI&, const UserStaticsI&);
bool operator>(const UserStaticsI&, const UserStaticsI&);
bool operator>=(const UserStaticsI&, const UserStaticsI&);

}

}

namespace UserStaticsX
{

class UserStaticsI;
bool operator==(const UserStaticsI&, const UserStaticsI&);
bool operator!=(const UserStaticsI&, const UserStaticsI&);
bool operator<(const UserStaticsI&, const UserStaticsI&);
bool operator<=(const UserStaticsI&, const UserStaticsI&);
bool operator>(const UserStaticsI&, const UserStaticsI&);
bool operator>=(const UserStaticsI&, const UserStaticsI&);

}

namespace IceInternal
{

void incRef(::UserStaticsX::UserStaticsI*);
void decRef(::UserStaticsX::UserStaticsI*);

void incRef(::IceProxy::UserStaticsX::UserStaticsI*);
void decRef(::IceProxy::UserStaticsX::UserStaticsI*);

}

namespace UserStaticsX
{

typedef ::IceInternal::Handle< ::UserStaticsX::UserStaticsI> UserStaticsIPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::UserStaticsX::UserStaticsI> UserStaticsIPrx;

void __write(::IceInternal::BasicStream*, const UserStaticsIPrx&);
void __read(::IceInternal::BasicStream*, UserStaticsIPrx&);
void __write(::IceInternal::BasicStream*, const UserStaticsIPtr&);
void __patch__UserStaticsIPtr(void*, ::Ice::ObjectPtr&);

void __addObject(const UserStaticsIPtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const UserStaticsIPtr&);
void __decRefUnsafe(const UserStaticsIPtr&);
void __clearHandleUnsafe(UserStaticsIPtr&);

}

namespace UserStaticsX
{

}

namespace IceProxy
{

namespace UserStaticsX
{

class UserStaticsI : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int insert(const ::AliIMDBBase::UserStatics& delta)
    {
        return insert(delta, 0);
    }
    ::Ice::Int insert(const ::AliIMDBBase::UserStatics& delta, const ::Ice::Context& __ctx)
    {
        return insert(delta, &__ctx);
    }
    
private:

    ::Ice::Int insert(const ::AliIMDBBase::UserStatics&, const ::Ice::Context*);
    
public:

    ::Ice::Int get(const ::std::string& id, ::AliIMDBBase::UserStatics& s)
    {
        return get(id, s, 0);
    }
    ::Ice::Int get(const ::std::string& id, ::AliIMDBBase::UserStatics& s, const ::Ice::Context& __ctx)
    {
        return get(id, s, &__ctx);
    }
    
private:

    ::Ice::Int get(const ::std::string&, ::AliIMDBBase::UserStatics&, const ::Ice::Context*);
    
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

namespace UserStaticsX
{

class UserStaticsI : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int insert(const ::AliIMDBBase::UserStatics&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int get(const ::std::string&, ::AliIMDBBase::UserStatics&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace UserStaticsX
{

class UserStaticsI : virtual public ::IceDelegate::UserStaticsX::UserStaticsI,
                     virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int insert(const ::AliIMDBBase::UserStatics&, const ::Ice::Context*);

    virtual ::Ice::Int get(const ::std::string&, ::AliIMDBBase::UserStatics&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace UserStaticsX
{

class UserStaticsI : virtual public ::IceDelegate::UserStaticsX::UserStaticsI,
                     virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int insert(const ::AliIMDBBase::UserStatics&, const ::Ice::Context*);

    virtual ::Ice::Int get(const ::std::string&, ::AliIMDBBase::UserStatics&, const ::Ice::Context*);
};

}

}

namespace UserStaticsX
{

class UserStaticsI : virtual public ::Ice::Object
{
public:

    typedef UserStaticsIPrx ProxyType;
    typedef UserStaticsIPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int insert(const ::AliIMDBBase::UserStatics&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___insert(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int get(const ::std::string&, ::AliIMDBBase::UserStatics&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___get(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__UserStaticsIPtr(void*, ::Ice::ObjectPtr&);

}

#endif
