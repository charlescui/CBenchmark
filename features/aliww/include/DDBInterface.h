// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `DDBInterface.ice'

#ifndef __DDBInterface_h__
#define __DDBInterface_h__

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
#include <DBStruct.h>
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

namespace AliDDB
{

class AliDDBInterface;
bool operator==(const AliDDBInterface&, const AliDDBInterface&);
bool operator!=(const AliDDBInterface&, const AliDDBInterface&);
bool operator<(const AliDDBInterface&, const AliDDBInterface&);
bool operator<=(const AliDDBInterface&, const AliDDBInterface&);
bool operator>(const AliDDBInterface&, const AliDDBInterface&);
bool operator>=(const AliDDBInterface&, const AliDDBInterface&);

}

}

namespace AliDDB
{

class AliDDBInterface;
bool operator==(const AliDDBInterface&, const AliDDBInterface&);
bool operator!=(const AliDDBInterface&, const AliDDBInterface&);
bool operator<(const AliDDBInterface&, const AliDDBInterface&);
bool operator<=(const AliDDBInterface&, const AliDDBInterface&);
bool operator>(const AliDDBInterface&, const AliDDBInterface&);
bool operator>=(const AliDDBInterface&, const AliDDBInterface&);

}

namespace IceInternal
{

void incRef(::AliDDB::AliDDBInterface*);
void decRef(::AliDDB::AliDDBInterface*);

void incRef(::IceProxy::AliDDB::AliDDBInterface*);
void decRef(::IceProxy::AliDDB::AliDDBInterface*);

}

namespace AliDDB
{

typedef ::IceInternal::Handle< ::AliDDB::AliDDBInterface> AliDDBInterfacePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::AliDDB::AliDDBInterface> AliDDBInterfacePrx;

void __write(::IceInternal::BasicStream*, const AliDDBInterfacePrx&);
void __read(::IceInternal::BasicStream*, AliDDBInterfacePrx&);
void __write(::IceInternal::BasicStream*, const AliDDBInterfacePtr&);
void __patch__AliDDBInterfacePtr(void*, ::Ice::ObjectPtr&);

void __addObject(const AliDDBInterfacePtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const AliDDBInterfacePtr&);
void __decRefUnsafe(const AliDDBInterfacePtr&);
void __clearHandleUnsafe(AliDDBInterfacePtr&);

}

namespace AliDDB
{

}

namespace AliDDB
{

class AMD_AliDDBInterface_insertRecord : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliDDB::AMD_AliDDBInterface_insertRecord> AMD_AliDDBInterface_insertRecordPtr;

class AMD_AliDDBInterface_updateRecord : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliDDB::AMD_AliDDBInterface_updateRecord> AMD_AliDDBInterface_updateRecordPtr;

class AMD_AliDDBInterface_updateBlob : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliDDB::AMD_AliDDBInterface_updateBlob> AMD_AliDDBInterface_updateBlobPtr;

class AMD_AliDDBInterface_deleteRecord : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliDDB::AMD_AliDDBInterface_deleteRecord> AMD_AliDDBInterface_deleteRecordPtr;

}

namespace IceAsync
{

namespace AliDDB
{

class AMD_AliDDBInterface_insertRecord : public ::AliDDB::AMD_AliDDBInterface_insertRecord, public ::IceInternal::IncomingAsync
{
public:

    AMD_AliDDBInterface_insertRecord(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_AliDDBInterface_updateRecord : public ::AliDDB::AMD_AliDDBInterface_updateRecord, public ::IceInternal::IncomingAsync
{
public:

    AMD_AliDDBInterface_updateRecord(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_AliDDBInterface_updateBlob : public ::AliDDB::AMD_AliDDBInterface_updateBlob, public ::IceInternal::IncomingAsync
{
public:

    AMD_AliDDBInterface_updateBlob(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_AliDDBInterface_deleteRecord : public ::AliDDB::AMD_AliDDBInterface_deleteRecord, public ::IceInternal::IncomingAsync
{
public:

    AMD_AliDDBInterface_deleteRecord(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

}

}

namespace IceProxy
{

namespace AliDDB
{

class AliDDBInterface : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int insertRecord(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::AliDDB::DBRecord& record)
    {
        return insertRecord(table, keys, record, 0);
    }
    ::Ice::Int insertRecord(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::AliDDB::DBRecord& record, const ::Ice::Context& __ctx)
    {
        return insertRecord(table, keys, record, &__ctx);
    }
    
private:

    ::Ice::Int insertRecord(const ::std::string&, const ::AliDDB::KVMap&, const ::AliDDB::DBRecord&, const ::Ice::Context*);
    
public:

    ::Ice::Int insertMultiRecords(const ::std::string& table, const ::AliDDB::KVMapSeq& keys, const ::AliDDB::DBRecord& record)
    {
        return insertMultiRecords(table, keys, record, 0);
    }
    ::Ice::Int insertMultiRecords(const ::std::string& table, const ::AliDDB::KVMapSeq& keys, const ::AliDDB::DBRecord& record, const ::Ice::Context& __ctx)
    {
        return insertMultiRecords(table, keys, record, &__ctx);
    }
    
private:

    ::Ice::Int insertMultiRecords(const ::std::string&, const ::AliDDB::KVMapSeq&, const ::AliDDB::DBRecord&, const ::Ice::Context*);
    
public:

    ::Ice::Int getRecord(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::Ice::StringSeq& fields, const ::Ice::StringSeq& blobFields, ::AliDDB::DBRecord& record)
    {
        return getRecord(table, keys, fields, blobFields, record, 0);
    }
    ::Ice::Int getRecord(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::Ice::StringSeq& fields, const ::Ice::StringSeq& blobFields, ::AliDDB::DBRecord& record, const ::Ice::Context& __ctx)
    {
        return getRecord(table, keys, fields, blobFields, record, &__ctx);
    }
    
private:

    ::Ice::Int getRecord(const ::std::string&, const ::AliDDB::KVMap&, const ::Ice::StringSeq&, const ::Ice::StringSeq&, ::AliDDB::DBRecord&, const ::Ice::Context*);
    
public:

    ::Ice::Int getRecords(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::Ice::StringSeq& fields, const ::std::string& condition, const ::Ice::StringSeq& orderFields, ::Ice::Int num, ::AliDDB::DBRecord& record)
    {
        return getRecords(table, keys, fields, condition, orderFields, num, record, 0);
    }
    ::Ice::Int getRecords(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::Ice::StringSeq& fields, const ::std::string& condition, const ::Ice::StringSeq& orderFields, ::Ice::Int num, ::AliDDB::DBRecord& record, const ::Ice::Context& __ctx)
    {
        return getRecords(table, keys, fields, condition, orderFields, num, record, &__ctx);
    }
    
private:

    ::Ice::Int getRecords(const ::std::string&, const ::AliDDB::KVMap&, const ::Ice::StringSeq&, const ::std::string&, const ::Ice::StringSeq&, ::Ice::Int, ::AliDDB::DBRecord&, const ::Ice::Context*);
    
public:

    ::Ice::Int getRecordsCount(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::std::string& condition, ::Ice::Int& recordNum)
    {
        return getRecordsCount(table, keys, condition, recordNum, 0);
    }
    ::Ice::Int getRecordsCount(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::std::string& condition, ::Ice::Int& recordNum, const ::Ice::Context& __ctx)
    {
        return getRecordsCount(table, keys, condition, recordNum, &__ctx);
    }
    
private:

    ::Ice::Int getRecordsCount(const ::std::string&, const ::AliDDB::KVMap&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int getRecordsByPage(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::Ice::StringSeq& fields, const ::std::string& condition, const ::Ice::StringSeq& orderFields, ::Ice::Int pageno, ::Ice::Int pagesize, ::Ice::Int& total, ::AliDDB::DBRecord& record)
    {
        return getRecordsByPage(table, keys, fields, condition, orderFields, pageno, pagesize, total, record, 0);
    }
    ::Ice::Int getRecordsByPage(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::Ice::StringSeq& fields, const ::std::string& condition, const ::Ice::StringSeq& orderFields, ::Ice::Int pageno, ::Ice::Int pagesize, ::Ice::Int& total, ::AliDDB::DBRecord& record, const ::Ice::Context& __ctx)
    {
        return getRecordsByPage(table, keys, fields, condition, orderFields, pageno, pagesize, total, record, &__ctx);
    }
    
private:

    ::Ice::Int getRecordsByPage(const ::std::string&, const ::AliDDB::KVMap&, const ::Ice::StringSeq&, const ::std::string&, const ::Ice::StringSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::AliDDB::DBRecord&, const ::Ice::Context*);
    
public:

    ::Ice::Int getMultiRecords(const ::std::string& table, const ::AliDDB::KVMapSeq& keys, const ::Ice::StringSeq& fields, const ::std::string& condition, const ::Ice::StringSeq& orderFields, ::Ice::Int num, ::AliDDB::DBRecord& record)
    {
        return getMultiRecords(table, keys, fields, condition, orderFields, num, record, 0);
    }
    ::Ice::Int getMultiRecords(const ::std::string& table, const ::AliDDB::KVMapSeq& keys, const ::Ice::StringSeq& fields, const ::std::string& condition, const ::Ice::StringSeq& orderFields, ::Ice::Int num, ::AliDDB::DBRecord& record, const ::Ice::Context& __ctx)
    {
        return getMultiRecords(table, keys, fields, condition, orderFields, num, record, &__ctx);
    }
    
private:

    ::Ice::Int getMultiRecords(const ::std::string&, const ::AliDDB::KVMapSeq&, const ::Ice::StringSeq&, const ::std::string&, const ::Ice::StringSeq&, ::Ice::Int, ::AliDDB::DBRecord&, const ::Ice::Context*);
    
public:

    ::Ice::Int getMultiRecordsByPage(const ::std::string& table, const ::AliDDB::KVMapSeq& keys, const ::Ice::StringSeq& fields, const ::std::string& condition, const ::Ice::StringSeq& orderFields, ::Ice::Int pageno, ::Ice::Int pagesize, ::Ice::Int& total, ::AliDDB::DBRecord& record)
    {
        return getMultiRecordsByPage(table, keys, fields, condition, orderFields, pageno, pagesize, total, record, 0);
    }
    ::Ice::Int getMultiRecordsByPage(const ::std::string& table, const ::AliDDB::KVMapSeq& keys, const ::Ice::StringSeq& fields, const ::std::string& condition, const ::Ice::StringSeq& orderFields, ::Ice::Int pageno, ::Ice::Int pagesize, ::Ice::Int& total, ::AliDDB::DBRecord& record, const ::Ice::Context& __ctx)
    {
        return getMultiRecordsByPage(table, keys, fields, condition, orderFields, pageno, pagesize, total, record, &__ctx);
    }
    
private:

    ::Ice::Int getMultiRecordsByPage(const ::std::string&, const ::AliDDB::KVMapSeq&, const ::Ice::StringSeq&, const ::std::string&, const ::Ice::StringSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::AliDDB::DBRecord&, const ::Ice::Context*);
    
public:

    ::Ice::Int updateRecord(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::AliDDB::KVMap& uniqKey, const ::AliDDB::DBRecord& record)
    {
        return updateRecord(table, keys, uniqKey, record, 0);
    }
    ::Ice::Int updateRecord(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::AliDDB::KVMap& uniqKey, const ::AliDDB::DBRecord& record, const ::Ice::Context& __ctx)
    {
        return updateRecord(table, keys, uniqKey, record, &__ctx);
    }
    
private:

    ::Ice::Int updateRecord(const ::std::string&, const ::AliDDB::KVMap&, const ::AliDDB::KVMap&, const ::AliDDB::DBRecord&, const ::Ice::Context*);
    
public:

    ::Ice::Int updateBlob(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::AliDDB::DBRecord& record)
    {
        return updateBlob(table, keys, record, 0);
    }
    ::Ice::Int updateBlob(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::AliDDB::DBRecord& record, const ::Ice::Context& __ctx)
    {
        return updateBlob(table, keys, record, &__ctx);
    }
    
private:

    ::Ice::Int updateBlob(const ::std::string&, const ::AliDDB::KVMap&, const ::AliDDB::DBRecord&, const ::Ice::Context*);
    
public:

    ::Ice::Int deleteRecord(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::AliDDB::KVMap& uniqKey)
    {
        return deleteRecord(table, keys, uniqKey, 0);
    }
    ::Ice::Int deleteRecord(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::AliDDB::KVMap& uniqKey, const ::Ice::Context& __ctx)
    {
        return deleteRecord(table, keys, uniqKey, &__ctx);
    }
    
private:

    ::Ice::Int deleteRecord(const ::std::string&, const ::AliDDB::KVMap&, const ::AliDDB::KVMap&, const ::Ice::Context*);
    
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

namespace AliDDB
{

class AliDDBInterface : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int insertRecord(const ::std::string&, const ::AliDDB::KVMap&, const ::AliDDB::DBRecord&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int insertMultiRecords(const ::std::string&, const ::AliDDB::KVMapSeq&, const ::AliDDB::DBRecord&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getRecord(const ::std::string&, const ::AliDDB::KVMap&, const ::Ice::StringSeq&, const ::Ice::StringSeq&, ::AliDDB::DBRecord&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getRecords(const ::std::string&, const ::AliDDB::KVMap&, const ::Ice::StringSeq&, const ::std::string&, const ::Ice::StringSeq&, ::Ice::Int, ::AliDDB::DBRecord&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getRecordsCount(const ::std::string&, const ::AliDDB::KVMap&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getRecordsByPage(const ::std::string&, const ::AliDDB::KVMap&, const ::Ice::StringSeq&, const ::std::string&, const ::Ice::StringSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::AliDDB::DBRecord&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getMultiRecords(const ::std::string&, const ::AliDDB::KVMapSeq&, const ::Ice::StringSeq&, const ::std::string&, const ::Ice::StringSeq&, ::Ice::Int, ::AliDDB::DBRecord&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getMultiRecordsByPage(const ::std::string&, const ::AliDDB::KVMapSeq&, const ::Ice::StringSeq&, const ::std::string&, const ::Ice::StringSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::AliDDB::DBRecord&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int updateRecord(const ::std::string&, const ::AliDDB::KVMap&, const ::AliDDB::KVMap&, const ::AliDDB::DBRecord&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int updateBlob(const ::std::string&, const ::AliDDB::KVMap&, const ::AliDDB::DBRecord&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int deleteRecord(const ::std::string&, const ::AliDDB::KVMap&, const ::AliDDB::KVMap&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace AliDDB
{

class AliDDBInterface : virtual public ::IceDelegate::AliDDB::AliDDBInterface,
                        virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int insertRecord(const ::std::string&, const ::AliDDB::KVMap&, const ::AliDDB::DBRecord&, const ::Ice::Context*);

    virtual ::Ice::Int insertMultiRecords(const ::std::string&, const ::AliDDB::KVMapSeq&, const ::AliDDB::DBRecord&, const ::Ice::Context*);

    virtual ::Ice::Int getRecord(const ::std::string&, const ::AliDDB::KVMap&, const ::Ice::StringSeq&, const ::Ice::StringSeq&, ::AliDDB::DBRecord&, const ::Ice::Context*);

    virtual ::Ice::Int getRecords(const ::std::string&, const ::AliDDB::KVMap&, const ::Ice::StringSeq&, const ::std::string&, const ::Ice::StringSeq&, ::Ice::Int, ::AliDDB::DBRecord&, const ::Ice::Context*);

    virtual ::Ice::Int getRecordsCount(const ::std::string&, const ::AliDDB::KVMap&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int getRecordsByPage(const ::std::string&, const ::AliDDB::KVMap&, const ::Ice::StringSeq&, const ::std::string&, const ::Ice::StringSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::AliDDB::DBRecord&, const ::Ice::Context*);

    virtual ::Ice::Int getMultiRecords(const ::std::string&, const ::AliDDB::KVMapSeq&, const ::Ice::StringSeq&, const ::std::string&, const ::Ice::StringSeq&, ::Ice::Int, ::AliDDB::DBRecord&, const ::Ice::Context*);

    virtual ::Ice::Int getMultiRecordsByPage(const ::std::string&, const ::AliDDB::KVMapSeq&, const ::Ice::StringSeq&, const ::std::string&, const ::Ice::StringSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::AliDDB::DBRecord&, const ::Ice::Context*);

    virtual ::Ice::Int updateRecord(const ::std::string&, const ::AliDDB::KVMap&, const ::AliDDB::KVMap&, const ::AliDDB::DBRecord&, const ::Ice::Context*);

    virtual ::Ice::Int updateBlob(const ::std::string&, const ::AliDDB::KVMap&, const ::AliDDB::DBRecord&, const ::Ice::Context*);

    virtual ::Ice::Int deleteRecord(const ::std::string&, const ::AliDDB::KVMap&, const ::AliDDB::KVMap&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace AliDDB
{

class AliDDBInterface : virtual public ::IceDelegate::AliDDB::AliDDBInterface,
                        virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int insertRecord(const ::std::string&, const ::AliDDB::KVMap&, const ::AliDDB::DBRecord&, const ::Ice::Context*);

    virtual ::Ice::Int insertMultiRecords(const ::std::string&, const ::AliDDB::KVMapSeq&, const ::AliDDB::DBRecord&, const ::Ice::Context*);

    virtual ::Ice::Int getRecord(const ::std::string&, const ::AliDDB::KVMap&, const ::Ice::StringSeq&, const ::Ice::StringSeq&, ::AliDDB::DBRecord&, const ::Ice::Context*);

    virtual ::Ice::Int getRecords(const ::std::string&, const ::AliDDB::KVMap&, const ::Ice::StringSeq&, const ::std::string&, const ::Ice::StringSeq&, ::Ice::Int, ::AliDDB::DBRecord&, const ::Ice::Context*);

    virtual ::Ice::Int getRecordsCount(const ::std::string&, const ::AliDDB::KVMap&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int getRecordsByPage(const ::std::string&, const ::AliDDB::KVMap&, const ::Ice::StringSeq&, const ::std::string&, const ::Ice::StringSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::AliDDB::DBRecord&, const ::Ice::Context*);

    virtual ::Ice::Int getMultiRecords(const ::std::string&, const ::AliDDB::KVMapSeq&, const ::Ice::StringSeq&, const ::std::string&, const ::Ice::StringSeq&, ::Ice::Int, ::AliDDB::DBRecord&, const ::Ice::Context*);

    virtual ::Ice::Int getMultiRecordsByPage(const ::std::string&, const ::AliDDB::KVMapSeq&, const ::Ice::StringSeq&, const ::std::string&, const ::Ice::StringSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::AliDDB::DBRecord&, const ::Ice::Context*);

    virtual ::Ice::Int updateRecord(const ::std::string&, const ::AliDDB::KVMap&, const ::AliDDB::KVMap&, const ::AliDDB::DBRecord&, const ::Ice::Context*);

    virtual ::Ice::Int updateBlob(const ::std::string&, const ::AliDDB::KVMap&, const ::AliDDB::DBRecord&, const ::Ice::Context*);

    virtual ::Ice::Int deleteRecord(const ::std::string&, const ::AliDDB::KVMap&, const ::AliDDB::KVMap&, const ::Ice::Context*);
};

}

}

namespace AliDDB
{

class AliDDBInterface : virtual public ::Ice::Object
{
public:

    typedef AliDDBInterfacePrx ProxyType;
    typedef AliDDBInterfacePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void insertRecord_async(const ::AliDDB::AMD_AliDDBInterface_insertRecordPtr&, const ::std::string&, const ::AliDDB::KVMap&, const ::AliDDB::DBRecord&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___insertRecord(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int insertMultiRecords(const ::std::string&, const ::AliDDB::KVMapSeq&, const ::AliDDB::DBRecord&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___insertMultiRecords(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getRecord(const ::std::string&, const ::AliDDB::KVMap&, const ::Ice::StringSeq&, const ::Ice::StringSeq&, ::AliDDB::DBRecord&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getRecord(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getRecords(const ::std::string&, const ::AliDDB::KVMap&, const ::Ice::StringSeq&, const ::std::string&, const ::Ice::StringSeq&, ::Ice::Int, ::AliDDB::DBRecord&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getRecords(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getRecordsCount(const ::std::string&, const ::AliDDB::KVMap&, const ::std::string&, ::Ice::Int&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getRecordsCount(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getRecordsByPage(const ::std::string&, const ::AliDDB::KVMap&, const ::Ice::StringSeq&, const ::std::string&, const ::Ice::StringSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::AliDDB::DBRecord&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getRecordsByPage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getMultiRecords(const ::std::string&, const ::AliDDB::KVMapSeq&, const ::Ice::StringSeq&, const ::std::string&, const ::Ice::StringSeq&, ::Ice::Int, ::AliDDB::DBRecord&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getMultiRecords(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getMultiRecordsByPage(const ::std::string&, const ::AliDDB::KVMapSeq&, const ::Ice::StringSeq&, const ::std::string&, const ::Ice::StringSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::AliDDB::DBRecord&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getMultiRecordsByPage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void updateRecord_async(const ::AliDDB::AMD_AliDDBInterface_updateRecordPtr&, const ::std::string&, const ::AliDDB::KVMap&, const ::AliDDB::KVMap&, const ::AliDDB::DBRecord&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___updateRecord(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void updateBlob_async(const ::AliDDB::AMD_AliDDBInterface_updateBlobPtr&, const ::std::string&, const ::AliDDB::KVMap&, const ::AliDDB::DBRecord&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___updateBlob(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void deleteRecord_async(const ::AliDDB::AMD_AliDDBInterface_deleteRecordPtr&, const ::std::string&, const ::AliDDB::KVMap&, const ::AliDDB::KVMap&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___deleteRecord(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__AliDDBInterfacePtr(void*, ::Ice::ObjectPtr&);

}

#endif
