// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `aasservice.ice'

#ifndef __aasservice_h__
#define __aasservice_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/Incoming.h>
#include <Ice/IncomingAsync.h>
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

namespace AASSERVICE
{

class AasInterface;
bool operator==(const AasInterface&, const AasInterface&);
bool operator!=(const AasInterface&, const AasInterface&);
bool operator<(const AasInterface&, const AasInterface&);
bool operator<=(const AasInterface&, const AasInterface&);
bool operator>(const AasInterface&, const AasInterface&);
bool operator>=(const AasInterface&, const AasInterface&);

}

}

namespace AASSERVICE
{

class AasInterface;
bool operator==(const AasInterface&, const AasInterface&);
bool operator!=(const AasInterface&, const AasInterface&);
bool operator<(const AasInterface&, const AasInterface&);
bool operator<=(const AasInterface&, const AasInterface&);
bool operator>(const AasInterface&, const AasInterface&);
bool operator>=(const AasInterface&, const AasInterface&);

}

namespace IceInternal
{

void incRef(::AASSERVICE::AasInterface*);
void decRef(::AASSERVICE::AasInterface*);

void incRef(::IceProxy::AASSERVICE::AasInterface*);
void decRef(::IceProxy::AASSERVICE::AasInterface*);

}

namespace AASSERVICE
{

typedef ::IceInternal::Handle< ::AASSERVICE::AasInterface> AasInterfacePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::AASSERVICE::AasInterface> AasInterfacePrx;

void __write(::IceInternal::BasicStream*, const AasInterfacePrx&);
void __read(::IceInternal::BasicStream*, AasInterfacePrx&);
void __write(::IceInternal::BasicStream*, const AasInterfacePtr&);
void __patch__AasInterfacePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const AasInterfacePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const AasInterfacePtr&);
void __decRefUnsafe(const AasInterfacePtr&);
void __clearHandleUnsafe(AasInterfacePtr&);

}

namespace AASSERVICE
{

struct CChatRecord
{
    ::std::string userid;
    ::std::string peeruid;
    ::Ice::Long tm;
    ::Ice::Int seq;
    ::std::string msg;

    bool operator==(const CChatRecord&) const;
    bool operator!=(const CChatRecord&) const;
    bool operator<(const CChatRecord&) const;
    bool operator<=(const CChatRecord& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const CChatRecord& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const CChatRecord& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct CChatRecordInfo
{
    ::Ice::Int dir;
    ::Ice::Int seq;
    ::Ice::Long tm;
    ::std::string msg;

    bool operator==(const CChatRecordInfo&) const;
    bool operator!=(const CChatRecordInfo&) const;
    bool operator<(const CChatRecordInfo&) const;
    bool operator<=(const CChatRecordInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const CChatRecordInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const CChatRecordInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct CChatRecordID
{
    ::std::string userid;
    ::std::string peeruid;
    ::Ice::Long tm;
    ::Ice::Int seq;
    ::Ice::Int dir;

    bool operator==(const CChatRecordID&) const;
    bool operator!=(const CChatRecordID&) const;
    bool operator<(const CChatRecordID&) const;
    bool operator<=(const CChatRecordID& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const CChatRecordID& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const CChatRecordID& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::AASSERVICE::CChatRecordInfo> ChatRecordInfoSeq;

class __U__ChatRecordInfoSeq { };
void __write(::IceInternal::BasicStream*, const ::AASSERVICE::CChatRecordInfo*, const ::AASSERVICE::CChatRecordInfo*, __U__ChatRecordInfoSeq);
void __read(::IceInternal::BasicStream*, ChatRecordInfoSeq&, __U__ChatRecordInfoSeq);

typedef ::std::vector< ::AASSERVICE::CChatRecordID> ChatRecordIDSeq;

class __U__ChatRecordIDSeq { };
void __write(::IceInternal::BasicStream*, const ::AASSERVICE::CChatRecordID*, const ::AASSERVICE::CChatRecordID*, __U__ChatRecordIDSeq);
void __read(::IceInternal::BasicStream*, ChatRecordIDSeq&, __U__ChatRecordIDSeq);

typedef ::std::vector< ::std::string> ChatPicFileNameSeq;

class __U__ChatPicFileNameSeq { };

typedef ::std::vector< ::Ice::Int> ChatRecordDeleteRespSeq;

class __U__ChatRecordDeleteRespSeq { };

typedef ::std::vector< ::Ice::Byte> ByteSeq;

class __U__ByteSeq { };

typedef ::std::vector< ::AASSERVICE::CChatRecord> ChatRecordSeq;

class __U__ChatRecordSeq { };
void __write(::IceInternal::BasicStream*, const ::AASSERVICE::CChatRecord*, const ::AASSERVICE::CChatRecord*, __U__ChatRecordSeq);
void __read(::IceInternal::BasicStream*, ChatRecordSeq&, __U__ChatRecordSeq);

}

namespace AASSERVICE
{

class AMD_AasInterface_textget : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AASSERVICE::ChatRecordInfoSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AASSERVICE::AMD_AasInterface_textget> AMD_AasInterface_textgetPtr;

class AMD_AasInterface_textput : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AASSERVICE::AMD_AasInterface_textput> AMD_AasInterface_textputPtr;

class AMD_AasInterface_textbatchput : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AASSERVICE::AMD_AasInterface_textbatchput> AMD_AasInterface_textbatchputPtr;

class AMD_AasInterface_textupdate : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AASSERVICE::AMD_AasInterface_textupdate> AMD_AasInterface_textupdatePtr;

class AMD_AasInterface_textdelete : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AASSERVICE::AMD_AasInterface_textdelete> AMD_AasInterface_textdeletePtr;

class AMD_AasInterface_textbatchdelete : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AASSERVICE::ChatRecordIDSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AASSERVICE::AMD_AasInterface_textbatchdelete> AMD_AasInterface_textbatchdeletePtr;

class AMD_AasInterface_picquery : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AASSERVICE::AMD_AasInterface_picquery> AMD_AasInterface_picqueryPtr;

class AMD_AasInterface_picbatchquery : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AASSERVICE::ChatPicFileNameSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AASSERVICE::AMD_AasInterface_picbatchquery> AMD_AasInterface_picbatchqueryPtr;

class AMD_AasInterface_picget : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AASSERVICE::ByteSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AASSERVICE::AMD_AasInterface_picget> AMD_AasInterface_picgetPtr;

class AMD_AasInterface_picput : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AASSERVICE::AMD_AasInterface_picput> AMD_AasInterface_picputPtr;

}

namespace IceAsync
{

namespace AASSERVICE
{

class AMD_AasInterface_textget : public ::AASSERVICE::AMD_AasInterface_textget, public ::IceInternal::IncomingAsync
{
public:

    AMD_AasInterface_textget(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AASSERVICE::ChatRecordInfoSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_AasInterface_textput : public ::AASSERVICE::AMD_AasInterface_textput, public ::IceInternal::IncomingAsync
{
public:

    AMD_AasInterface_textput(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_AasInterface_textbatchput : public ::AASSERVICE::AMD_AasInterface_textbatchput, public ::IceInternal::IncomingAsync
{
public:

    AMD_AasInterface_textbatchput(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_AasInterface_textupdate : public ::AASSERVICE::AMD_AasInterface_textupdate, public ::IceInternal::IncomingAsync
{
public:

    AMD_AasInterface_textupdate(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_AasInterface_textdelete : public ::AASSERVICE::AMD_AasInterface_textdelete, public ::IceInternal::IncomingAsync
{
public:

    AMD_AasInterface_textdelete(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_AasInterface_textbatchdelete : public ::AASSERVICE::AMD_AasInterface_textbatchdelete, public ::IceInternal::IncomingAsync
{
public:

    AMD_AasInterface_textbatchdelete(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AASSERVICE::ChatRecordIDSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_AasInterface_picquery : public ::AASSERVICE::AMD_AasInterface_picquery, public ::IceInternal::IncomingAsync
{
public:

    AMD_AasInterface_picquery(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, bool);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_AasInterface_picbatchquery : public ::AASSERVICE::AMD_AasInterface_picbatchquery, public ::IceInternal::IncomingAsync
{
public:

    AMD_AasInterface_picbatchquery(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AASSERVICE::ChatPicFileNameSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_AasInterface_picget : public ::AASSERVICE::AMD_AasInterface_picget, public ::IceInternal::IncomingAsync
{
public:

    AMD_AasInterface_picget(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AASSERVICE::ByteSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_AasInterface_picput : public ::AASSERVICE::AMD_AasInterface_picput, public ::IceInternal::IncomingAsync
{
public:

    AMD_AasInterface_picput(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

}

}

namespace IceProxy
{

namespace AASSERVICE
{

class AasInterface : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int textget(const ::std::string& userid, const ::std::string& peeruid, ::Ice::Long begintime, ::Ice::Long endtime, ::Ice::Int maxret, ::AASSERVICE::ChatRecordInfoSeq& record)
    {
        return textget(userid, peeruid, begintime, endtime, maxret, record, 0);
    }
    ::Ice::Int textget(const ::std::string& userid, const ::std::string& peeruid, ::Ice::Long begintime, ::Ice::Long endtime, ::Ice::Int maxret, ::AASSERVICE::ChatRecordInfoSeq& record, const ::Ice::Context& __ctx)
    {
        return textget(userid, peeruid, begintime, endtime, maxret, record, &__ctx);
    }
    
private:

    ::Ice::Int textget(const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Long, ::Ice::Int, ::AASSERVICE::ChatRecordInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int textput(const ::std::string& fromid, const ::std::string& toid, ::Ice::Long time, ::Ice::Int seq, const ::std::string& msg)
    {
        return textput(fromid, toid, time, seq, msg, 0);
    }
    ::Ice::Int textput(const ::std::string& fromid, const ::std::string& toid, ::Ice::Long time, ::Ice::Int seq, const ::std::string& msg, const ::Ice::Context& __ctx)
    {
        return textput(fromid, toid, time, seq, msg, &__ctx);
    }
    
private:

    ::Ice::Int textput(const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int textbatchput(const ::AASSERVICE::ChatRecordSeq& seq)
    {
        return textbatchput(seq, 0);
    }
    ::Ice::Int textbatchput(const ::AASSERVICE::ChatRecordSeq& seq, const ::Ice::Context& __ctx)
    {
        return textbatchput(seq, &__ctx);
    }
    
private:

    ::Ice::Int textbatchput(const ::AASSERVICE::ChatRecordSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int textupdate(const ::std::string& fromid, const ::std::string& toid, ::Ice::Long time, ::Ice::Int seq, const ::std::string& msg)
    {
        return textupdate(fromid, toid, time, seq, msg, 0);
    }
    ::Ice::Int textupdate(const ::std::string& fromid, const ::std::string& toid, ::Ice::Long time, ::Ice::Int seq, const ::std::string& msg, const ::Ice::Context& __ctx)
    {
        return textupdate(fromid, toid, time, seq, msg, &__ctx);
    }
    
private:

    ::Ice::Int textupdate(const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int textdelete(const ::std::string& userid, const ::std::string& peeruid, ::Ice::Long time, ::Ice::Int seq, ::Ice::Int direction)
    {
        return textdelete(userid, peeruid, time, seq, direction, 0);
    }
    ::Ice::Int textdelete(const ::std::string& userid, const ::std::string& peeruid, ::Ice::Long time, ::Ice::Int seq, ::Ice::Int direction, const ::Ice::Context& __ctx)
    {
        return textdelete(userid, peeruid, time, seq, direction, &__ctx);
    }
    
private:

    ::Ice::Int textdelete(const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int textbatchdelete(const ::AASSERVICE::ChatRecordIDSeq& recordidseq, ::AASSERVICE::ChatRecordIDSeq& respseq)
    {
        return textbatchdelete(recordidseq, respseq, 0);
    }
    ::Ice::Int textbatchdelete(const ::AASSERVICE::ChatRecordIDSeq& recordidseq, ::AASSERVICE::ChatRecordIDSeq& respseq, const ::Ice::Context& __ctx)
    {
        return textbatchdelete(recordidseq, respseq, &__ctx);
    }
    
private:

    ::Ice::Int textbatchdelete(const ::AASSERVICE::ChatRecordIDSeq&, ::AASSERVICE::ChatRecordIDSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int picquery(const ::std::string& fileName, bool& exist)
    {
        return picquery(fileName, exist, 0);
    }
    ::Ice::Int picquery(const ::std::string& fileName, bool& exist, const ::Ice::Context& __ctx)
    {
        return picquery(fileName, exist, &__ctx);
    }
    
private:

    ::Ice::Int picquery(const ::std::string&, bool&, const ::Ice::Context*);
    
public:

    ::Ice::Int picbatchquery(const ::AASSERVICE::ChatPicFileNameSeq& filenameseq, ::AASSERVICE::ChatPicFileNameSeq& respseq)
    {
        return picbatchquery(filenameseq, respseq, 0);
    }
    ::Ice::Int picbatchquery(const ::AASSERVICE::ChatPicFileNameSeq& filenameseq, ::AASSERVICE::ChatPicFileNameSeq& respseq, const ::Ice::Context& __ctx)
    {
        return picbatchquery(filenameseq, respseq, &__ctx);
    }
    
private:

    ::Ice::Int picbatchquery(const ::AASSERVICE::ChatPicFileNameSeq&, ::AASSERVICE::ChatPicFileNameSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int picget(const ::std::string& filename, ::AASSERVICE::ByteSeq& pic)
    {
        return picget(filename, pic, 0);
    }
    ::Ice::Int picget(const ::std::string& filename, ::AASSERVICE::ByteSeq& pic, const ::Ice::Context& __ctx)
    {
        return picget(filename, pic, &__ctx);
    }
    
private:

    ::Ice::Int picget(const ::std::string&, ::AASSERVICE::ByteSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int picput(const ::std::string& filename, const ::AASSERVICE::ByteSeq& pic)
    {
        return picput(filename, pic, 0);
    }
    ::Ice::Int picput(const ::std::string& filename, const ::AASSERVICE::ByteSeq& pic, const ::Ice::Context& __ctx)
    {
        return picput(filename, pic, &__ctx);
    }
    
private:

    ::Ice::Int picput(const ::std::string&, const ::AASSERVICE::ByteSeq&, const ::Ice::Context*);
    
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

namespace AASSERVICE
{

class AasInterface : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int textget(const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Long, ::Ice::Int, ::AASSERVICE::ChatRecordInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int textput(const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int textbatchput(const ::AASSERVICE::ChatRecordSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int textupdate(const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int textdelete(const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int textbatchdelete(const ::AASSERVICE::ChatRecordIDSeq&, ::AASSERVICE::ChatRecordIDSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int picquery(const ::std::string&, bool&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int picbatchquery(const ::AASSERVICE::ChatPicFileNameSeq&, ::AASSERVICE::ChatPicFileNameSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int picget(const ::std::string&, ::AASSERVICE::ByteSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int picput(const ::std::string&, const ::AASSERVICE::ByteSeq&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace AASSERVICE
{

class AasInterface : virtual public ::IceDelegate::AASSERVICE::AasInterface,
                     virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int textget(const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Long, ::Ice::Int, ::AASSERVICE::ChatRecordInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int textput(const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int textbatchput(const ::AASSERVICE::ChatRecordSeq&, const ::Ice::Context*);

    virtual ::Ice::Int textupdate(const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int textdelete(const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int textbatchdelete(const ::AASSERVICE::ChatRecordIDSeq&, ::AASSERVICE::ChatRecordIDSeq&, const ::Ice::Context*);

    virtual ::Ice::Int picquery(const ::std::string&, bool&, const ::Ice::Context*);

    virtual ::Ice::Int picbatchquery(const ::AASSERVICE::ChatPicFileNameSeq&, ::AASSERVICE::ChatPicFileNameSeq&, const ::Ice::Context*);

    virtual ::Ice::Int picget(const ::std::string&, ::AASSERVICE::ByteSeq&, const ::Ice::Context*);

    virtual ::Ice::Int picput(const ::std::string&, const ::AASSERVICE::ByteSeq&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace AASSERVICE
{

class AasInterface : virtual public ::IceDelegate::AASSERVICE::AasInterface,
                     virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int textget(const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Long, ::Ice::Int, ::AASSERVICE::ChatRecordInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int textput(const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int textbatchput(const ::AASSERVICE::ChatRecordSeq&, const ::Ice::Context*);

    virtual ::Ice::Int textupdate(const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int textdelete(const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int textbatchdelete(const ::AASSERVICE::ChatRecordIDSeq&, ::AASSERVICE::ChatRecordIDSeq&, const ::Ice::Context*);

    virtual ::Ice::Int picquery(const ::std::string&, bool&, const ::Ice::Context*);

    virtual ::Ice::Int picbatchquery(const ::AASSERVICE::ChatPicFileNameSeq&, ::AASSERVICE::ChatPicFileNameSeq&, const ::Ice::Context*);

    virtual ::Ice::Int picget(const ::std::string&, ::AASSERVICE::ByteSeq&, const ::Ice::Context*);

    virtual ::Ice::Int picput(const ::std::string&, const ::AASSERVICE::ByteSeq&, const ::Ice::Context*);
};

}

}

namespace AASSERVICE
{

class AasInterface : virtual public ::Ice::Object
{
public:

    typedef AasInterfacePrx ProxyType;
    typedef AasInterfacePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void textget_async(const ::AASSERVICE::AMD_AasInterface_textgetPtr&, const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Long, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___textget(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void textput_async(const ::AASSERVICE::AMD_AasInterface_textputPtr&, const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___textput(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void textbatchput_async(const ::AASSERVICE::AMD_AasInterface_textbatchputPtr&, const ::AASSERVICE::ChatRecordSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___textbatchput(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void textupdate_async(const ::AASSERVICE::AMD_AasInterface_textupdatePtr&, const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___textupdate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void textdelete_async(const ::AASSERVICE::AMD_AasInterface_textdeletePtr&, const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___textdelete(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void textbatchdelete_async(const ::AASSERVICE::AMD_AasInterface_textbatchdeletePtr&, const ::AASSERVICE::ChatRecordIDSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___textbatchdelete(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void picquery_async(const ::AASSERVICE::AMD_AasInterface_picqueryPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___picquery(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void picbatchquery_async(const ::AASSERVICE::AMD_AasInterface_picbatchqueryPtr&, const ::AASSERVICE::ChatPicFileNameSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___picbatchquery(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void picget_async(const ::AASSERVICE::AMD_AasInterface_picgetPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___picget(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void picput_async(const ::AASSERVICE::AMD_AasInterface_picputPtr&, const ::std::string&, const ::AASSERVICE::ByteSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___picput(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__AasInterfacePtr(void*, ::Ice::ObjectPtr&);

}

#endif
