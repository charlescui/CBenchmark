// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `es_expandarea_service.ice'

#ifndef __es_expandarea_service_h__
#define __es_expandarea_service_h__

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

namespace IMSINNER
{

class ESICEExpandArea;
bool operator==(const ESICEExpandArea&, const ESICEExpandArea&);
bool operator!=(const ESICEExpandArea&, const ESICEExpandArea&);
bool operator<(const ESICEExpandArea&, const ESICEExpandArea&);
bool operator<=(const ESICEExpandArea&, const ESICEExpandArea&);
bool operator>(const ESICEExpandArea&, const ESICEExpandArea&);
bool operator>=(const ESICEExpandArea&, const ESICEExpandArea&);

}

}

namespace IMSINNER
{

class ESICEExpandArea;
bool operator==(const ESICEExpandArea&, const ESICEExpandArea&);
bool operator!=(const ESICEExpandArea&, const ESICEExpandArea&);
bool operator<(const ESICEExpandArea&, const ESICEExpandArea&);
bool operator<=(const ESICEExpandArea&, const ESICEExpandArea&);
bool operator>(const ESICEExpandArea&, const ESICEExpandArea&);
bool operator>=(const ESICEExpandArea&, const ESICEExpandArea&);

}

namespace IceInternal
{

void incRef(::IMSINNER::ESICEExpandArea*);
void decRef(::IMSINNER::ESICEExpandArea*);

void incRef(::IceProxy::IMSINNER::ESICEExpandArea*);
void decRef(::IceProxy::IMSINNER::ESICEExpandArea*);

}

namespace IMSINNER
{

typedef ::IceInternal::Handle< ::IMSINNER::ESICEExpandArea> ESICEExpandAreaPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::IMSINNER::ESICEExpandArea> ESICEExpandAreaPrx;

void __write(::IceInternal::BasicStream*, const ESICEExpandAreaPrx&);
void __read(::IceInternal::BasicStream*, ESICEExpandAreaPrx&);
void __write(::IceInternal::BasicStream*, const ESICEExpandAreaPtr&);
void __patch__ESICEExpandAreaPtr(void*, ::Ice::ObjectPtr&);

void __addObject(const ESICEExpandAreaPtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const ESICEExpandAreaPtr&);
void __decRefUnsafe(const ESICEExpandAreaPtr&);
void __clearHandleUnsafe(ESICEExpandAreaPtr&);

}

namespace IMSINNER
{

struct SICEExpandArea
{
    ::Ice::Int id;
    ::std::string areaname;
    ::std::string url;
    ::std::string picpath;
    ::std::string createtime;

    bool operator==(const SICEExpandArea&) const;
    bool operator!=(const SICEExpandArea&) const;
    bool operator<(const SICEExpandArea&) const;
    bool operator<=(const SICEExpandArea& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEExpandArea& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEExpandArea& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::IMSINNER::SICEExpandArea> SICEExpandAreaSeq;

class __U__SICEExpandAreaSeq { };
void __write(::IceInternal::BasicStream*, const ::IMSINNER::SICEExpandArea*, const ::IMSINNER::SICEExpandArea*, __U__SICEExpandAreaSeq);
void __read(::IceInternal::BasicStream*, SICEExpandAreaSeq&, __U__SICEExpandAreaSeq);

}

namespace IceProxy
{

namespace IMSINNER
{

class ESICEExpandArea : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int getESExpandArea(const ::std::string& uid, ::IMSINNER::SICEExpandAreaSeq& areaInfos)
    {
        return getESExpandArea(uid, areaInfos, 0);
    }
    ::Ice::Int getESExpandArea(const ::std::string& uid, ::IMSINNER::SICEExpandAreaSeq& areaInfos, const ::Ice::Context& __ctx)
    {
        return getESExpandArea(uid, areaInfos, &__ctx);
    }
    
private:

    ::Ice::Int getESExpandArea(const ::std::string&, ::IMSINNER::SICEExpandAreaSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getESExpandAreaById(const ::std::string& uid, ::Ice::Int id, ::IMSINNER::SICEExpandArea& areaInfos)
    {
        return getESExpandAreaById(uid, id, areaInfos, 0);
    }
    ::Ice::Int getESExpandAreaById(const ::std::string& uid, ::Ice::Int id, ::IMSINNER::SICEExpandArea& areaInfos, const ::Ice::Context& __ctx)
    {
        return getESExpandAreaById(uid, id, areaInfos, &__ctx);
    }
    
private:

    ::Ice::Int getESExpandAreaById(const ::std::string&, ::Ice::Int, ::IMSINNER::SICEExpandArea&, const ::Ice::Context*);
    
public:

    ::Ice::Int addESExpandArea(const ::std::string& uid, const ::IMSINNER::SICEExpandArea& areaInfo)
    {
        return addESExpandArea(uid, areaInfo, 0);
    }
    ::Ice::Int addESExpandArea(const ::std::string& uid, const ::IMSINNER::SICEExpandArea& areaInfo, const ::Ice::Context& __ctx)
    {
        return addESExpandArea(uid, areaInfo, &__ctx);
    }
    
private:

    ::Ice::Int addESExpandArea(const ::std::string&, const ::IMSINNER::SICEExpandArea&, const ::Ice::Context*);
    
public:

    ::Ice::Int updateESExpandArea(const ::std::string& uid, const ::IMSINNER::SICEExpandArea& areaInfo)
    {
        return updateESExpandArea(uid, areaInfo, 0);
    }
    ::Ice::Int updateESExpandArea(const ::std::string& uid, const ::IMSINNER::SICEExpandArea& areaInfo, const ::Ice::Context& __ctx)
    {
        return updateESExpandArea(uid, areaInfo, &__ctx);
    }
    
private:

    ::Ice::Int updateESExpandArea(const ::std::string&, const ::IMSINNER::SICEExpandArea&, const ::Ice::Context*);
    
public:

    ::Ice::Int delESExpandArea(const ::std::string& uid, ::Ice::Int id)
    {
        return delESExpandArea(uid, id, 0);
    }
    ::Ice::Int delESExpandArea(const ::std::string& uid, ::Ice::Int id, const ::Ice::Context& __ctx)
    {
        return delESExpandArea(uid, id, &__ctx);
    }
    
private:

    ::Ice::Int delESExpandArea(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
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

namespace IMSINNER
{

class ESICEExpandArea : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int getESExpandArea(const ::std::string&, ::IMSINNER::SICEExpandAreaSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESExpandAreaById(const ::std::string&, ::Ice::Int, ::IMSINNER::SICEExpandArea&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int addESExpandArea(const ::std::string&, const ::IMSINNER::SICEExpandArea&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int updateESExpandArea(const ::std::string&, const ::IMSINNER::SICEExpandArea&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int delESExpandArea(const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace IMSINNER
{

class ESICEExpandArea : virtual public ::IceDelegate::IMSINNER::ESICEExpandArea,
                        virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int getESExpandArea(const ::std::string&, ::IMSINNER::SICEExpandAreaSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESExpandAreaById(const ::std::string&, ::Ice::Int, ::IMSINNER::SICEExpandArea&, const ::Ice::Context*);

    virtual ::Ice::Int addESExpandArea(const ::std::string&, const ::IMSINNER::SICEExpandArea&, const ::Ice::Context*);

    virtual ::Ice::Int updateESExpandArea(const ::std::string&, const ::IMSINNER::SICEExpandArea&, const ::Ice::Context*);

    virtual ::Ice::Int delESExpandArea(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace IMSINNER
{

class ESICEExpandArea : virtual public ::IceDelegate::IMSINNER::ESICEExpandArea,
                        virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int getESExpandArea(const ::std::string&, ::IMSINNER::SICEExpandAreaSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESExpandAreaById(const ::std::string&, ::Ice::Int, ::IMSINNER::SICEExpandArea&, const ::Ice::Context*);

    virtual ::Ice::Int addESExpandArea(const ::std::string&, const ::IMSINNER::SICEExpandArea&, const ::Ice::Context*);

    virtual ::Ice::Int updateESExpandArea(const ::std::string&, const ::IMSINNER::SICEExpandArea&, const ::Ice::Context*);

    virtual ::Ice::Int delESExpandArea(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
};

}

}

namespace IMSINNER
{

class ESICEExpandArea : virtual public ::Ice::Object
{
public:

    typedef ESICEExpandAreaPrx ProxyType;
    typedef ESICEExpandAreaPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int getESExpandArea(const ::std::string&, ::IMSINNER::SICEExpandAreaSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESExpandArea(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getESExpandAreaById(const ::std::string&, ::Ice::Int, ::IMSINNER::SICEExpandArea&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESExpandAreaById(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int addESExpandArea(const ::std::string&, const ::IMSINNER::SICEExpandArea&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___addESExpandArea(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int updateESExpandArea(const ::std::string&, const ::IMSINNER::SICEExpandArea&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___updateESExpandArea(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int delESExpandArea(const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___delESExpandArea(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__ESICEExpandAreaPtr(void*, ::Ice::ObjectPtr&);

}

#endif
