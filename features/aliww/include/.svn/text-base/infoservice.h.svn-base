// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `infoservice.ice'

#ifndef __infoservice_h__
#define __infoservice_h__

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

class IUserExtInfoService;
bool operator==(const IUserExtInfoService&, const IUserExtInfoService&);
bool operator!=(const IUserExtInfoService&, const IUserExtInfoService&);
bool operator<(const IUserExtInfoService&, const IUserExtInfoService&);
bool operator<=(const IUserExtInfoService&, const IUserExtInfoService&);
bool operator>(const IUserExtInfoService&, const IUserExtInfoService&);
bool operator>=(const IUserExtInfoService&, const IUserExtInfoService&);

}

}

namespace AliIM
{

class IUserExtInfoService;
bool operator==(const IUserExtInfoService&, const IUserExtInfoService&);
bool operator!=(const IUserExtInfoService&, const IUserExtInfoService&);
bool operator<(const IUserExtInfoService&, const IUserExtInfoService&);
bool operator<=(const IUserExtInfoService&, const IUserExtInfoService&);
bool operator>(const IUserExtInfoService&, const IUserExtInfoService&);
bool operator>=(const IUserExtInfoService&, const IUserExtInfoService&);

}

namespace IceInternal
{

void incRef(::AliIM::IUserExtInfoService*);
void decRef(::AliIM::IUserExtInfoService*);

void incRef(::IceProxy::AliIM::IUserExtInfoService*);
void decRef(::IceProxy::AliIM::IUserExtInfoService*);

}

namespace AliIM
{

typedef ::IceInternal::Handle< ::AliIM::IUserExtInfoService> IUserExtInfoServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::AliIM::IUserExtInfoService> IUserExtInfoServicePrx;

void __write(::IceInternal::BasicStream*, const IUserExtInfoServicePrx&);
void __read(::IceInternal::BasicStream*, IUserExtInfoServicePrx&);
void __write(::IceInternal::BasicStream*, const IUserExtInfoServicePtr&);
void __patch__IUserExtInfoServicePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const IUserExtInfoServicePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const IUserExtInfoServicePtr&);
void __decRefUnsafe(const IUserExtInfoServicePtr&);
void __clearHandleUnsafe(IUserExtInfoServicePtr&);

}

namespace AliIM
{

typedef ::std::map< ::std::string, ::std::string> KVMAP;

class __U__KVMAP { };
void __write(::IceInternal::BasicStream*, const KVMAP&, __U__KVMAP);
void __read(::IceInternal::BasicStream*, KVMAP&, __U__KVMAP);

struct SImSign
{
    ::std::string longuid;
    ::std::string sign;

    bool operator==(const SImSign&) const;
    bool operator!=(const SImSign&) const;
    bool operator<(const SImSign&) const;
    bool operator<=(const SImSign& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SImSign& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SImSign& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::AliIM::SImSign> SIMSignSeq;

class __U__SIMSignSeq { };
void __write(::IceInternal::BasicStream*, const ::AliIM::SImSign*, const ::AliIM::SImSign*, __U__SIMSignSeq);
void __read(::IceInternal::BasicStream*, SIMSignSeq&, __U__SIMSignSeq);

}

namespace IceProxy
{

namespace AliIM
{

class IUserExtInfoService : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int getUserExtInfo(::Ice::Int srvid, const ::std::string& longuid, ::AliIM::KVMAP& attrs)
    {
        return getUserExtInfo(srvid, longuid, attrs, 0);
    }
    ::Ice::Int getUserExtInfo(::Ice::Int srvid, const ::std::string& longuid, ::AliIM::KVMAP& attrs, const ::Ice::Context& __ctx)
    {
        return getUserExtInfo(srvid, longuid, attrs, &__ctx);
    }
    
private:

    ::Ice::Int getUserExtInfo(::Ice::Int, const ::std::string&, ::AliIM::KVMAP&, const ::Ice::Context*);
    
public:

    ::Ice::Int updateUserExtInfo(::Ice::Int srvid, const ::std::string& longuid, ::Ice::Int reserved, ::Ice::Int neednotify, const ::AliIM::KVMAP& attrs)
    {
        return updateUserExtInfo(srvid, longuid, reserved, neednotify, attrs, 0);
    }
    ::Ice::Int updateUserExtInfo(::Ice::Int srvid, const ::std::string& longuid, ::Ice::Int reserved, ::Ice::Int neednotify, const ::AliIM::KVMAP& attrs, const ::Ice::Context& __ctx)
    {
        return updateUserExtInfo(srvid, longuid, reserved, neednotify, attrs, &__ctx);
    }
    
private:

    ::Ice::Int updateUserExtInfo(::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::AliIM::KVMAP&, const ::Ice::Context*);
    
public:

    ::Ice::Int notifySpaceOpen(const ::std::string& longuid, ::Ice::Int neednotify, const ::AliIM::KVMAP& attrs)
    {
        return notifySpaceOpen(longuid, neednotify, attrs, 0);
    }
    ::Ice::Int notifySpaceOpen(const ::std::string& longuid, ::Ice::Int neednotify, const ::AliIM::KVMAP& attrs, const ::Ice::Context& __ctx)
    {
        return notifySpaceOpen(longuid, neednotify, attrs, &__ctx);
    }
    
private:

    ::Ice::Int notifySpaceOpen(const ::std::string&, ::Ice::Int, const ::AliIM::KVMAP&, const ::Ice::Context*);
    
public:

    ::Ice::Int addBlogSign(const ::std::string& longuid, const ::std::string& text)
    {
        return addBlogSign(longuid, text, 0);
    }
    ::Ice::Int addBlogSign(const ::std::string& longuid, const ::std::string& text, const ::Ice::Context& __ctx)
    {
        return addBlogSign(longuid, text, &__ctx);
    }
    
private:

    ::Ice::Int addBlogSign(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int NotifyPluginMsg(const ::std::string& longuid, const ::std::string& xmltext)
    {
        return NotifyPluginMsg(longuid, xmltext, 0);
    }
    ::Ice::Int NotifyPluginMsg(const ::std::string& longuid, const ::std::string& xmltext, const ::Ice::Context& __ctx)
    {
        return NotifyPluginMsg(longuid, xmltext, &__ctx);
    }
    
private:

    ::Ice::Int NotifyPluginMsg(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateSignature(const ::std::string& uid, const ::std::string& xmlsignature)
    {
        return UpdateSignature(uid, xmlsignature, 0);
    }
    ::Ice::Int UpdateSignature(const ::std::string& uid, const ::std::string& xmlsignature, const ::Ice::Context& __ctx)
    {
        return UpdateSignature(uid, xmlsignature, &__ctx);
    }
    
private:

    ::Ice::Int UpdateSignature(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int getBatchSignature(const ::Ice::StringSeq& uids, ::AliIM::SIMSignSeq& signlist)
    {
        return getBatchSignature(uids, signlist, 0);
    }
    ::Ice::Int getBatchSignature(const ::Ice::StringSeq& uids, ::AliIM::SIMSignSeq& signlist, const ::Ice::Context& __ctx)
    {
        return getBatchSignature(uids, signlist, &__ctx);
    }
    
private:

    ::Ice::Int getBatchSignature(const ::Ice::StringSeq&, ::AliIM::SIMSignSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int NotifyUserDoings(const ::std::string& longuid, ::Ice::Int neednotify, const ::AliIM::KVMAP& attrs)
    {
        return NotifyUserDoings(longuid, neednotify, attrs, 0);
    }
    ::Ice::Int NotifyUserDoings(const ::std::string& longuid, ::Ice::Int neednotify, const ::AliIM::KVMAP& attrs, const ::Ice::Context& __ctx)
    {
        return NotifyUserDoings(longuid, neednotify, attrs, &__ctx);
    }
    
private:

    ::Ice::Int NotifyUserDoings(const ::std::string&, ::Ice::Int, const ::AliIM::KVMAP&, const ::Ice::Context*);
    
public:

    ::Ice::Int NotifyUserDoingsClose(const ::std::string& longuid, ::Ice::Int neednotify, const ::AliIM::KVMAP& attrs)
    {
        return NotifyUserDoingsClose(longuid, neednotify, attrs, 0);
    }
    ::Ice::Int NotifyUserDoingsClose(const ::std::string& longuid, ::Ice::Int neednotify, const ::AliIM::KVMAP& attrs, const ::Ice::Context& __ctx)
    {
        return NotifyUserDoingsClose(longuid, neednotify, attrs, &__ctx);
    }
    
private:

    ::Ice::Int NotifyUserDoingsClose(const ::std::string&, ::Ice::Int, const ::AliIM::KVMAP&, const ::Ice::Context*);
    
public:

    ::Ice::Int NotifyPluginMsg2(const ::std::string& longuid, const ::std::string& xmltext, const ::AliIM::KVMAP& attrs)
    {
        return NotifyPluginMsg2(longuid, xmltext, attrs, 0);
    }
    ::Ice::Int NotifyPluginMsg2(const ::std::string& longuid, const ::std::string& xmltext, const ::AliIM::KVMAP& attrs, const ::Ice::Context& __ctx)
    {
        return NotifyPluginMsg2(longuid, xmltext, attrs, &__ctx);
    }
    
private:

    ::Ice::Int NotifyPluginMsg2(const ::std::string&, const ::std::string&, const ::AliIM::KVMAP&, const ::Ice::Context*);
    
public:

    ::Ice::Int getSpaceOpen(const ::std::string& longuid)
    {
        return getSpaceOpen(longuid, 0);
    }
    ::Ice::Int getSpaceOpen(const ::std::string& longuid, const ::Ice::Context& __ctx)
    {
        return getSpaceOpen(longuid, &__ctx);
    }
    
private:

    ::Ice::Int getSpaceOpen(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int NotifyUserVip(const ::std::string& longuid, ::Ice::Int viplevel, ::Ice::Int neednotify, const ::AliIM::KVMAP& attrs)
    {
        return NotifyUserVip(longuid, viplevel, neednotify, attrs, 0);
    }
    ::Ice::Int NotifyUserVip(const ::std::string& longuid, ::Ice::Int viplevel, ::Ice::Int neednotify, const ::AliIM::KVMAP& attrs, const ::Ice::Context& __ctx)
    {
        return NotifyUserVip(longuid, viplevel, neednotify, attrs, &__ctx);
    }
    
private:

    ::Ice::Int NotifyUserVip(const ::std::string&, ::Ice::Int, ::Ice::Int, const ::AliIM::KVMAP&, const ::Ice::Context*);
    
public:

    ::Ice::Int NotifyAppMsg(const ::std::string& longUid, const ::std::string& xmlstr, const ::AliIM::KVMAP& attrs)
    {
        return NotifyAppMsg(longUid, xmlstr, attrs, 0);
    }
    ::Ice::Int NotifyAppMsg(const ::std::string& longUid, const ::std::string& xmlstr, const ::AliIM::KVMAP& attrs, const ::Ice::Context& __ctx)
    {
        return NotifyAppMsg(longUid, xmlstr, attrs, &__ctx);
    }
    
private:

    ::Ice::Int NotifyAppMsg(const ::std::string&, const ::std::string&, const ::AliIM::KVMAP&, const ::Ice::Context*);
    
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

class IUserExtInfoService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int getUserExtInfo(::Ice::Int, const ::std::string&, ::AliIM::KVMAP&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int updateUserExtInfo(::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::AliIM::KVMAP&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int notifySpaceOpen(const ::std::string&, ::Ice::Int, const ::AliIM::KVMAP&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int addBlogSign(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int NotifyPluginMsg(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateSignature(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getBatchSignature(const ::Ice::StringSeq&, ::AliIM::SIMSignSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int NotifyUserDoings(const ::std::string&, ::Ice::Int, const ::AliIM::KVMAP&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int NotifyUserDoingsClose(const ::std::string&, ::Ice::Int, const ::AliIM::KVMAP&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int NotifyPluginMsg2(const ::std::string&, const ::std::string&, const ::AliIM::KVMAP&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getSpaceOpen(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int NotifyUserVip(const ::std::string&, ::Ice::Int, ::Ice::Int, const ::AliIM::KVMAP&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int NotifyAppMsg(const ::std::string&, const ::std::string&, const ::AliIM::KVMAP&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace AliIM
{

class IUserExtInfoService : virtual public ::IceDelegate::AliIM::IUserExtInfoService,
                            virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int getUserExtInfo(::Ice::Int, const ::std::string&, ::AliIM::KVMAP&, const ::Ice::Context*);

    virtual ::Ice::Int updateUserExtInfo(::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::AliIM::KVMAP&, const ::Ice::Context*);

    virtual ::Ice::Int notifySpaceOpen(const ::std::string&, ::Ice::Int, const ::AliIM::KVMAP&, const ::Ice::Context*);

    virtual ::Ice::Int addBlogSign(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int NotifyPluginMsg(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateSignature(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getBatchSignature(const ::Ice::StringSeq&, ::AliIM::SIMSignSeq&, const ::Ice::Context*);

    virtual ::Ice::Int NotifyUserDoings(const ::std::string&, ::Ice::Int, const ::AliIM::KVMAP&, const ::Ice::Context*);

    virtual ::Ice::Int NotifyUserDoingsClose(const ::std::string&, ::Ice::Int, const ::AliIM::KVMAP&, const ::Ice::Context*);

    virtual ::Ice::Int NotifyPluginMsg2(const ::std::string&, const ::std::string&, const ::AliIM::KVMAP&, const ::Ice::Context*);

    virtual ::Ice::Int getSpaceOpen(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int NotifyUserVip(const ::std::string&, ::Ice::Int, ::Ice::Int, const ::AliIM::KVMAP&, const ::Ice::Context*);

    virtual ::Ice::Int NotifyAppMsg(const ::std::string&, const ::std::string&, const ::AliIM::KVMAP&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace AliIM
{

class IUserExtInfoService : virtual public ::IceDelegate::AliIM::IUserExtInfoService,
                            virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int getUserExtInfo(::Ice::Int, const ::std::string&, ::AliIM::KVMAP&, const ::Ice::Context*);

    virtual ::Ice::Int updateUserExtInfo(::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::AliIM::KVMAP&, const ::Ice::Context*);

    virtual ::Ice::Int notifySpaceOpen(const ::std::string&, ::Ice::Int, const ::AliIM::KVMAP&, const ::Ice::Context*);

    virtual ::Ice::Int addBlogSign(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int NotifyPluginMsg(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateSignature(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getBatchSignature(const ::Ice::StringSeq&, ::AliIM::SIMSignSeq&, const ::Ice::Context*);

    virtual ::Ice::Int NotifyUserDoings(const ::std::string&, ::Ice::Int, const ::AliIM::KVMAP&, const ::Ice::Context*);

    virtual ::Ice::Int NotifyUserDoingsClose(const ::std::string&, ::Ice::Int, const ::AliIM::KVMAP&, const ::Ice::Context*);

    virtual ::Ice::Int NotifyPluginMsg2(const ::std::string&, const ::std::string&, const ::AliIM::KVMAP&, const ::Ice::Context*);

    virtual ::Ice::Int getSpaceOpen(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int NotifyUserVip(const ::std::string&, ::Ice::Int, ::Ice::Int, const ::AliIM::KVMAP&, const ::Ice::Context*);

    virtual ::Ice::Int NotifyAppMsg(const ::std::string&, const ::std::string&, const ::AliIM::KVMAP&, const ::Ice::Context*);
};

}

}

namespace AliIM
{

class IUserExtInfoService : virtual public ::Ice::Object
{
public:

    typedef IUserExtInfoServicePrx ProxyType;
    typedef IUserExtInfoServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int getUserExtInfo(::Ice::Int, const ::std::string&, ::AliIM::KVMAP&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserExtInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int updateUserExtInfo(::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::AliIM::KVMAP&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___updateUserExtInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int notifySpaceOpen(const ::std::string&, ::Ice::Int, const ::AliIM::KVMAP&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___notifySpaceOpen(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int addBlogSign(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___addBlogSign(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int NotifyPluginMsg(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___NotifyPluginMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int UpdateSignature(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateSignature(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getBatchSignature(const ::Ice::StringSeq&, ::AliIM::SIMSignSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getBatchSignature(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int NotifyUserDoings(const ::std::string&, ::Ice::Int, const ::AliIM::KVMAP&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___NotifyUserDoings(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int NotifyUserDoingsClose(const ::std::string&, ::Ice::Int, const ::AliIM::KVMAP&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___NotifyUserDoingsClose(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int NotifyPluginMsg2(const ::std::string&, const ::std::string&, const ::AliIM::KVMAP&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___NotifyPluginMsg2(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getSpaceOpen(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getSpaceOpen(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int NotifyUserVip(const ::std::string&, ::Ice::Int, ::Ice::Int, const ::AliIM::KVMAP&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___NotifyUserVip(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int NotifyAppMsg(const ::std::string&, const ::std::string&, const ::AliIM::KVMAP&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___NotifyAppMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__IUserExtInfoServicePtr(void*, ::Ice::ObjectPtr&);

}

#endif
