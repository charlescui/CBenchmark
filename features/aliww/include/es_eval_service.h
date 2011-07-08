// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `es_eval_service.ice'

#ifndef __es_eval_service_h__
#define __es_eval_service_h__

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

class ESICEEval;
bool operator==(const ESICEEval&, const ESICEEval&);
bool operator!=(const ESICEEval&, const ESICEEval&);
bool operator<(const ESICEEval&, const ESICEEval&);
bool operator<=(const ESICEEval&, const ESICEEval&);
bool operator>(const ESICEEval&, const ESICEEval&);
bool operator>=(const ESICEEval&, const ESICEEval&);

}

}

namespace IMSINNER
{

class ESICEEval;
bool operator==(const ESICEEval&, const ESICEEval&);
bool operator!=(const ESICEEval&, const ESICEEval&);
bool operator<(const ESICEEval&, const ESICEEval&);
bool operator<=(const ESICEEval&, const ESICEEval&);
bool operator>(const ESICEEval&, const ESICEEval&);
bool operator>=(const ESICEEval&, const ESICEEval&);

}

namespace IceInternal
{

void incRef(::IMSINNER::ESICEEval*);
void decRef(::IMSINNER::ESICEEval*);

void incRef(::IceProxy::IMSINNER::ESICEEval*);
void decRef(::IceProxy::IMSINNER::ESICEEval*);

}

namespace IMSINNER
{

typedef ::IceInternal::Handle< ::IMSINNER::ESICEEval> ESICEEvalPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::IMSINNER::ESICEEval> ESICEEvalPrx;

void __write(::IceInternal::BasicStream*, const ESICEEvalPrx&);
void __read(::IceInternal::BasicStream*, ESICEEvalPrx&);
void __write(::IceInternal::BasicStream*, const ESICEEvalPtr&);
void __patch__ESICEEvalPtr(void*, ::Ice::ObjectPtr&);

void __addObject(const ESICEEvalPtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const ESICEEvalPtr&);
void __decRefUnsafe(const ESICEEvalPtr&);
void __clearHandleUnsafe(ESICEEvalPtr&);

}

namespace IMSINNER
{

struct SICEESEval
{
    ::Ice::Int code;
    ::std::string codename;
    ::std::string welcome;

    bool operator==(const SICEESEval&) const;
    bool operator!=(const SICEESEval&) const;
    bool operator<(const SICEESEval&) const;
    bool operator<=(const SICEESEval& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEESEval& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEESEval& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::IMSINNER::SICEESEval> SICEESEvalSeq;

class __U__SICEESEvalSeq { };
void __write(::IceInternal::BasicStream*, const ::IMSINNER::SICEESEval*, const ::IMSINNER::SICEESEval*, __U__SICEESEvalSeq);
void __read(::IceInternal::BasicStream*, SICEESEvalSeq&, __U__SICEESEvalSeq);

struct SICEESCode
{
    ::Ice::Int code;
    ::std::string codename;
    ::Ice::Int num;

    bool operator==(const SICEESCode&) const;
    bool operator!=(const SICEESCode&) const;
    bool operator<(const SICEESCode&) const;
    bool operator<=(const SICEESCode& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEESCode& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEESCode& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::IMSINNER::SICEESCode> SICEESCodeSeq;

class __U__SICEESCodeSeq { };
void __write(::IceInternal::BasicStream*, const ::IMSINNER::SICEESCode*, const ::IMSINNER::SICEESCode*, __U__SICEESCodeSeq);
void __read(::IceInternal::BasicStream*, SICEESCodeSeq&, __U__SICEESCodeSeq);

struct SICEESEvalResult
{
    ::std::string uid;
    ::Ice::Int sendNum;
    ::Ice::Int receNum;
    ::IMSINNER::SICEESCodeSeq codes;

    bool operator==(const SICEESEvalResult&) const;
    bool operator!=(const SICEESEvalResult&) const;
    bool operator<(const SICEESEvalResult&) const;
    bool operator<=(const SICEESEvalResult& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEESEvalResult& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEESEvalResult& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::IMSINNER::SICEESEvalResult> SICEESEvalResultSeq;

class __U__SICEESEvalResultSeq { };
void __write(::IceInternal::BasicStream*, const ::IMSINNER::SICEESEvalResult*, const ::IMSINNER::SICEESEvalResult*, __U__SICEESEvalResultSeq);
void __read(::IceInternal::BasicStream*, SICEESEvalResultSeq&, __U__SICEESEvalResultSeq);

struct SICEESEvalResultEx
{
    ::std::string uid;
    ::Ice::Int sendNum;
    ::Ice::Int receNum;
    ::IMSINNER::SICEESCodeSeq codes;
    ::std::string evalDate;

    bool operator==(const SICEESEvalResultEx&) const;
    bool operator!=(const SICEESEvalResultEx&) const;
    bool operator<(const SICEESEvalResultEx&) const;
    bool operator<=(const SICEESEvalResultEx& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SICEESEvalResultEx& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SICEESEvalResultEx& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::IMSINNER::SICEESEvalResultEx> SICEESEvalResultExSeq;

class __U__SICEESEvalResultExSeq { };
void __write(::IceInternal::BasicStream*, const ::IMSINNER::SICEESEvalResultEx*, const ::IMSINNER::SICEESEvalResultEx*, __U__SICEESEvalResultExSeq);
void __read(::IceInternal::BasicStream*, SICEESEvalResultExSeq&, __U__SICEESEvalResultExSeq);

}

namespace IceProxy
{

namespace IMSINNER
{

class ESICEEval : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int setESEval(const ::std::string& uid, const ::std::string& evalcontent, const ::std::string& welcome)
    {
        return setESEval(uid, evalcontent, welcome, 0);
    }
    ::Ice::Int setESEval(const ::std::string& uid, const ::std::string& evalcontent, const ::std::string& welcome, const ::Ice::Context& __ctx)
    {
        return setESEval(uid, evalcontent, welcome, &__ctx);
    }
    
private:

    ::Ice::Int setESEval(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int getESEval(const ::std::string& uid, ::std::string& evalcontent, ::std::string& welcome)
    {
        return getESEval(uid, evalcontent, welcome, 0);
    }
    ::Ice::Int getESEval(const ::std::string& uid, ::std::string& evalcontent, ::std::string& welcome, const ::Ice::Context& __ctx)
    {
        return getESEval(uid, evalcontent, welcome, &__ctx);
    }
    
private:

    ::Ice::Int getESEval(const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int setESEvalResult(const ::std::string& uid, const ::std::string& buyerid, ::Ice::Int evalId, const ::std::string& evalresult)
    {
        return setESEvalResult(uid, buyerid, evalId, evalresult, 0);
    }
    ::Ice::Int setESEvalResult(const ::std::string& uid, const ::std::string& buyerid, ::Ice::Int evalId, const ::std::string& evalresult, const ::Ice::Context& __ctx)
    {
        return setESEvalResult(uid, buyerid, evalId, evalresult, &__ctx);
    }
    
private:

    ::Ice::Int setESEvalResult(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int getESEvalResult(const ::std::string& uid, const ::std::string& buyerid, ::Ice::Int evalId, ::std::string& evalresult, ::std::string& gmtcreate, ::std::string& gmtmodify)
    {
        return getESEvalResult(uid, buyerid, evalId, evalresult, gmtcreate, gmtmodify, 0);
    }
    ::Ice::Int getESEvalResult(const ::std::string& uid, const ::std::string& buyerid, ::Ice::Int evalId, ::std::string& evalresult, ::std::string& gmtcreate, ::std::string& gmtmodify, const ::Ice::Context& __ctx)
    {
        return getESEvalResult(uid, buyerid, evalId, evalresult, gmtcreate, gmtmodify, &__ctx);
    }
    
private:

    ::Ice::Int getESEvalResult(const ::std::string&, const ::std::string&, ::Ice::Int, ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int getESEvalResultToday(const ::std::string& uid, ::IMSINNER::SICEESEvalResultSeq& evalInfos)
    {
        return getESEvalResultToday(uid, evalInfos, 0);
    }
    ::Ice::Int getESEvalResultToday(const ::std::string& uid, ::IMSINNER::SICEESEvalResultSeq& evalInfos, const ::Ice::Context& __ctx)
    {
        return getESEvalResultToday(uid, evalInfos, &__ctx);
    }
    
private:

    ::Ice::Int getESEvalResultToday(const ::std::string&, ::IMSINNER::SICEESEvalResultSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getESEvalResultHistory(const ::std::string& uid, const ::std::string& querytime, ::IMSINNER::SICEESEvalResultSeq& evalInfos)
    {
        return getESEvalResultHistory(uid, querytime, evalInfos, 0);
    }
    ::Ice::Int getESEvalResultHistory(const ::std::string& uid, const ::std::string& querytime, ::IMSINNER::SICEESEvalResultSeq& evalInfos, const ::Ice::Context& __ctx)
    {
        return getESEvalResultHistory(uid, querytime, evalInfos, &__ctx);
    }
    
private:

    ::Ice::Int getESEvalResultHistory(const ::std::string&, const ::std::string&, ::IMSINNER::SICEESEvalResultSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getESEvalResultHistorybypage(const ::std::string& uid, const ::std::string& childid, const ::std::string& begindate, const ::std::string& enddate, ::Ice::Int pageno, ::Ice::Int pagesize, ::Ice::Int& pagecount, ::IMSINNER::SICEESEvalResultExSeq& evalInfos)
    {
        return getESEvalResultHistorybypage(uid, childid, begindate, enddate, pageno, pagesize, pagecount, evalInfos, 0);
    }
    ::Ice::Int getESEvalResultHistorybypage(const ::std::string& uid, const ::std::string& childid, const ::std::string& begindate, const ::std::string& enddate, ::Ice::Int pageno, ::Ice::Int pagesize, ::Ice::Int& pagecount, ::IMSINNER::SICEESEvalResultExSeq& evalInfos, const ::Ice::Context& __ctx)
    {
        return getESEvalResultHistorybypage(uid, childid, begindate, enddate, pageno, pagesize, pagecount, evalInfos, &__ctx);
    }
    
private:

    ::Ice::Int getESEvalResultHistorybypage(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::IMSINNER::SICEESEvalResultExSeq&, const ::Ice::Context*);
    
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

class ESICEEval : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int setESEval(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESEval(const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int setESEvalResult(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESEvalResult(const ::std::string&, const ::std::string&, ::Ice::Int, ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESEvalResultToday(const ::std::string&, ::IMSINNER::SICEESEvalResultSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESEvalResultHistory(const ::std::string&, const ::std::string&, ::IMSINNER::SICEESEvalResultSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESEvalResultHistorybypage(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::IMSINNER::SICEESEvalResultExSeq&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace IMSINNER
{

class ESICEEval : virtual public ::IceDelegate::IMSINNER::ESICEEval,
                  virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int setESEval(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getESEval(const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int setESEvalResult(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getESEvalResult(const ::std::string&, const ::std::string&, ::Ice::Int, ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getESEvalResultToday(const ::std::string&, ::IMSINNER::SICEESEvalResultSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESEvalResultHistory(const ::std::string&, const ::std::string&, ::IMSINNER::SICEESEvalResultSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESEvalResultHistorybypage(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::IMSINNER::SICEESEvalResultExSeq&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace IMSINNER
{

class ESICEEval : virtual public ::IceDelegate::IMSINNER::ESICEEval,
                  virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int setESEval(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getESEval(const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int setESEvalResult(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getESEvalResult(const ::std::string&, const ::std::string&, ::Ice::Int, ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getESEvalResultToday(const ::std::string&, ::IMSINNER::SICEESEvalResultSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESEvalResultHistory(const ::std::string&, const ::std::string&, ::IMSINNER::SICEESEvalResultSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESEvalResultHistorybypage(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::IMSINNER::SICEESEvalResultExSeq&, const ::Ice::Context*);
};

}

}

namespace IMSINNER
{

class ESICEEval : virtual public ::Ice::Object
{
public:

    typedef ESICEEvalPrx ProxyType;
    typedef ESICEEvalPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int setESEval(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___setESEval(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getESEval(const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESEval(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int setESEvalResult(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___setESEvalResult(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getESEvalResult(const ::std::string&, const ::std::string&, ::Ice::Int, ::std::string&, ::std::string&, ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESEvalResult(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getESEvalResultToday(const ::std::string&, ::IMSINNER::SICEESEvalResultSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESEvalResultToday(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getESEvalResultHistory(const ::std::string&, const ::std::string&, ::IMSINNER::SICEESEvalResultSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESEvalResultHistory(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getESEvalResultHistorybypage(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::IMSINNER::SICEESEvalResultExSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESEvalResultHistorybypage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__ESICEEvalPtr(void*, ::Ice::ObjectPtr&);

}

#endif
