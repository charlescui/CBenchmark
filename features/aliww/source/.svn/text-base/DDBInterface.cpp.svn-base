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

#include <DDBInterface.h>
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

static const ::std::string __AliDDB__AliDDBInterface__insertRecord_name = "insertRecord";

static const ::std::string __AliDDB__AliDDBInterface__insertMultiRecords_name = "insertMultiRecords";

static const ::std::string __AliDDB__AliDDBInterface__getRecord_name = "getRecord";

static const ::std::string __AliDDB__AliDDBInterface__getRecords_name = "getRecords";

static const ::std::string __AliDDB__AliDDBInterface__getRecordsCount_name = "getRecordsCount";

static const ::std::string __AliDDB__AliDDBInterface__getRecordsByPage_name = "getRecordsByPage";

static const ::std::string __AliDDB__AliDDBInterface__getMultiRecords_name = "getMultiRecords";

static const ::std::string __AliDDB__AliDDBInterface__getMultiRecordsByPage_name = "getMultiRecordsByPage";

static const ::std::string __AliDDB__AliDDBInterface__updateRecord_name = "updateRecord";

static const ::std::string __AliDDB__AliDDBInterface__updateBlob_name = "updateBlob";

static const ::std::string __AliDDB__AliDDBInterface__deleteRecord_name = "deleteRecord";

void
IceInternal::incRef(::AliDDB::AliDDBInterface* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::AliDDB::AliDDBInterface* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::AliDDB::AliDDBInterface* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::AliDDB::AliDDBInterface* p)
{
    p->__decRef();
}

void
AliDDB::__write(::IceInternal::BasicStream* __os, const ::AliDDB::AliDDBInterfacePrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
AliDDB::__read(::IceInternal::BasicStream* __is, ::AliDDB::AliDDBInterfacePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::AliDDB::AliDDBInterface;
        v->__copyFrom(proxy);
    }
}

void
AliDDB::__write(::IceInternal::BasicStream* __os, const ::AliDDB::AliDDBInterfacePtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

void
AliDDB::__addObject(const AliDDBInterfacePtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
AliDDB::__usesClasses(const AliDDBInterfacePtr& p)
{
    return p->__usesClasses();
}

void
AliDDB::__decRefUnsafe(const AliDDBInterfacePtr& p)
{
    p->__decRefUnsafe();
}

void
AliDDB::__clearHandleUnsafe(AliDDBInterfacePtr& p)
{
    p.__clearHandleUnsafe();
}

IceAsync::AliDDB::AMD_AliDDBInterface_insertRecord::AMD_AliDDBInterface_insertRecord(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliDDB::AMD_AliDDBInterface_insertRecord::ice_response(::Ice::Int __ret)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AliDDB::AMD_AliDDBInterface_insertRecord::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliDDB::AMD_AliDDBInterface_insertRecord::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliDDB::AMD_AliDDBInterface_insertRecord::ice_exception()
{
    __exception();
}

IceAsync::AliDDB::AMD_AliDDBInterface_updateRecord::AMD_AliDDBInterface_updateRecord(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliDDB::AMD_AliDDBInterface_updateRecord::ice_response(::Ice::Int __ret)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AliDDB::AMD_AliDDBInterface_updateRecord::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliDDB::AMD_AliDDBInterface_updateRecord::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliDDB::AMD_AliDDBInterface_updateRecord::ice_exception()
{
    __exception();
}

IceAsync::AliDDB::AMD_AliDDBInterface_updateBlob::AMD_AliDDBInterface_updateBlob(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliDDB::AMD_AliDDBInterface_updateBlob::ice_response(::Ice::Int __ret)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AliDDB::AMD_AliDDBInterface_updateBlob::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliDDB::AMD_AliDDBInterface_updateBlob::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliDDB::AMD_AliDDBInterface_updateBlob::ice_exception()
{
    __exception();
}

IceAsync::AliDDB::AMD_AliDDBInterface_deleteRecord::AMD_AliDDBInterface_deleteRecord(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliDDB::AMD_AliDDBInterface_deleteRecord::ice_response(::Ice::Int __ret)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(__ret);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __exception(__ex);
        return;
    }
    __response(true);
}

void
IceAsync::AliDDB::AMD_AliDDBInterface_deleteRecord::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliDDB::AMD_AliDDBInterface_deleteRecord::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliDDB::AMD_AliDDBInterface_deleteRecord::ice_exception()
{
    __exception();
}

::Ice::Int
IceProxy::AliDDB::AliDDBInterface::insertRecord(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::AliDDB::DBRecord& record, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliDDB__AliDDBInterface__insertRecord_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliDDB::AliDDBInterface* __del = dynamic_cast< ::IceDelegate::AliDDB::AliDDBInterface*>(__delBase.get());
            return __del->insertRecord(table, keys, record, __ctx);
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
IceProxy::AliDDB::AliDDBInterface::insertMultiRecords(const ::std::string& table, const ::AliDDB::KVMapSeq& keys, const ::AliDDB::DBRecord& record, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliDDB__AliDDBInterface__insertMultiRecords_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliDDB::AliDDBInterface* __del = dynamic_cast< ::IceDelegate::AliDDB::AliDDBInterface*>(__delBase.get());
            return __del->insertMultiRecords(table, keys, record, __ctx);
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
IceProxy::AliDDB::AliDDBInterface::getRecord(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::Ice::StringSeq& fields, const ::Ice::StringSeq& blobFields, ::AliDDB::DBRecord& record, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliDDB__AliDDBInterface__getRecord_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliDDB::AliDDBInterface* __del = dynamic_cast< ::IceDelegate::AliDDB::AliDDBInterface*>(__delBase.get());
            return __del->getRecord(table, keys, fields, blobFields, record, __ctx);
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
IceProxy::AliDDB::AliDDBInterface::getRecords(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::Ice::StringSeq& fields, const ::std::string& condition, const ::Ice::StringSeq& orderFields, ::Ice::Int num, ::AliDDB::DBRecord& record, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliDDB__AliDDBInterface__getRecords_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliDDB::AliDDBInterface* __del = dynamic_cast< ::IceDelegate::AliDDB::AliDDBInterface*>(__delBase.get());
            return __del->getRecords(table, keys, fields, condition, orderFields, num, record, __ctx);
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
IceProxy::AliDDB::AliDDBInterface::getRecordsCount(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::std::string& condition, ::Ice::Int& recordNum, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliDDB__AliDDBInterface__getRecordsCount_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliDDB::AliDDBInterface* __del = dynamic_cast< ::IceDelegate::AliDDB::AliDDBInterface*>(__delBase.get());
            return __del->getRecordsCount(table, keys, condition, recordNum, __ctx);
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
IceProxy::AliDDB::AliDDBInterface::getRecordsByPage(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::Ice::StringSeq& fields, const ::std::string& condition, const ::Ice::StringSeq& orderFields, ::Ice::Int pageno, ::Ice::Int pagesize, ::Ice::Int& total, ::AliDDB::DBRecord& record, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliDDB__AliDDBInterface__getRecordsByPage_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliDDB::AliDDBInterface* __del = dynamic_cast< ::IceDelegate::AliDDB::AliDDBInterface*>(__delBase.get());
            return __del->getRecordsByPage(table, keys, fields, condition, orderFields, pageno, pagesize, total, record, __ctx);
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
IceProxy::AliDDB::AliDDBInterface::getMultiRecords(const ::std::string& table, const ::AliDDB::KVMapSeq& keys, const ::Ice::StringSeq& fields, const ::std::string& condition, const ::Ice::StringSeq& orderFields, ::Ice::Int num, ::AliDDB::DBRecord& record, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliDDB__AliDDBInterface__getMultiRecords_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliDDB::AliDDBInterface* __del = dynamic_cast< ::IceDelegate::AliDDB::AliDDBInterface*>(__delBase.get());
            return __del->getMultiRecords(table, keys, fields, condition, orderFields, num, record, __ctx);
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
IceProxy::AliDDB::AliDDBInterface::getMultiRecordsByPage(const ::std::string& table, const ::AliDDB::KVMapSeq& keys, const ::Ice::StringSeq& fields, const ::std::string& condition, const ::Ice::StringSeq& orderFields, ::Ice::Int pageno, ::Ice::Int pagesize, ::Ice::Int& total, ::AliDDB::DBRecord& record, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliDDB__AliDDBInterface__getMultiRecordsByPage_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliDDB::AliDDBInterface* __del = dynamic_cast< ::IceDelegate::AliDDB::AliDDBInterface*>(__delBase.get());
            return __del->getMultiRecordsByPage(table, keys, fields, condition, orderFields, pageno, pagesize, total, record, __ctx);
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
IceProxy::AliDDB::AliDDBInterface::updateRecord(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::AliDDB::KVMap& uniqKey, const ::AliDDB::DBRecord& record, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliDDB__AliDDBInterface__updateRecord_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliDDB::AliDDBInterface* __del = dynamic_cast< ::IceDelegate::AliDDB::AliDDBInterface*>(__delBase.get());
            return __del->updateRecord(table, keys, uniqKey, record, __ctx);
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
IceProxy::AliDDB::AliDDBInterface::updateBlob(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::AliDDB::DBRecord& record, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliDDB__AliDDBInterface__updateBlob_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliDDB::AliDDBInterface* __del = dynamic_cast< ::IceDelegate::AliDDB::AliDDBInterface*>(__delBase.get());
            return __del->updateBlob(table, keys, record, __ctx);
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
IceProxy::AliDDB::AliDDBInterface::deleteRecord(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::AliDDB::KVMap& uniqKey, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliDDB__AliDDBInterface__deleteRecord_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliDDB::AliDDBInterface* __del = dynamic_cast< ::IceDelegate::AliDDB::AliDDBInterface*>(__delBase.get());
            return __del->deleteRecord(table, keys, uniqKey, __ctx);
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
IceProxy::AliDDB::AliDDBInterface::ice_staticId()
{
    return ::AliDDB::AliDDBInterface::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::AliDDB::AliDDBInterface::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::AliDDB::AliDDBInterface);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::AliDDB::AliDDBInterface::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::AliDDB::AliDDBInterface);
}

bool
IceProxy::AliDDB::operator==(const ::IceProxy::AliDDB::AliDDBInterface& l, const ::IceProxy::AliDDB::AliDDBInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliDDB::operator!=(const ::IceProxy::AliDDB::AliDDBInterface& l, const ::IceProxy::AliDDB::AliDDBInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliDDB::operator<(const ::IceProxy::AliDDB::AliDDBInterface& l, const ::IceProxy::AliDDB::AliDDBInterface& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliDDB::operator<=(const ::IceProxy::AliDDB::AliDDBInterface& l, const ::IceProxy::AliDDB::AliDDBInterface& r)
{
    return l < r || l == r;
}

bool
IceProxy::AliDDB::operator>(const ::IceProxy::AliDDB::AliDDBInterface& l, const ::IceProxy::AliDDB::AliDDBInterface& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::AliDDB::operator>=(const ::IceProxy::AliDDB::AliDDBInterface& l, const ::IceProxy::AliDDB::AliDDBInterface& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::AliDDB::AliDDBInterface::insertRecord(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::AliDDB::DBRecord& record, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliDDB__AliDDBInterface__insertRecord_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(table);
        ::AliDDB::__write(__os, keys, ::AliDDB::__U__KVMap());
        record.__write(__os);
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliDDB::AliDDBInterface::insertMultiRecords(const ::std::string& table, const ::AliDDB::KVMapSeq& keys, const ::AliDDB::DBRecord& record, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliDDB__AliDDBInterface__insertMultiRecords_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(table);
        if(keys.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliDDB::__write(__os, &keys[0], &keys[0] + keys.size(), ::AliDDB::__U__KVMapSeq());
        }
        record.__write(__os);
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliDDB::AliDDBInterface::getRecord(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::Ice::StringSeq& fields, const ::Ice::StringSeq& blobFields, ::AliDDB::DBRecord& record, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliDDB__AliDDBInterface__getRecord_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(table);
        ::AliDDB::__write(__os, keys, ::AliDDB::__U__KVMap());
        if(fields.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&fields[0], &fields[0] + fields.size());
        }
        if(blobFields.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&blobFields[0], &blobFields[0] + blobFields.size());
        }
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
        record.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliDDB::AliDDBInterface::getRecords(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::Ice::StringSeq& fields, const ::std::string& condition, const ::Ice::StringSeq& orderFields, ::Ice::Int num, ::AliDDB::DBRecord& record, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliDDB__AliDDBInterface__getRecords_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(table);
        ::AliDDB::__write(__os, keys, ::AliDDB::__U__KVMap());
        if(fields.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&fields[0], &fields[0] + fields.size());
        }
        __os->write(condition);
        if(orderFields.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&orderFields[0], &orderFields[0] + orderFields.size());
        }
        __os->write(num);
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
        record.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliDDB::AliDDBInterface::getRecordsCount(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::std::string& condition, ::Ice::Int& recordNum, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliDDB__AliDDBInterface__getRecordsCount_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(table);
        ::AliDDB::__write(__os, keys, ::AliDDB::__U__KVMap());
        __os->write(condition);
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
        __is->read(recordNum);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliDDB::AliDDBInterface::getRecordsByPage(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::Ice::StringSeq& fields, const ::std::string& condition, const ::Ice::StringSeq& orderFields, ::Ice::Int pageno, ::Ice::Int pagesize, ::Ice::Int& total, ::AliDDB::DBRecord& record, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliDDB__AliDDBInterface__getRecordsByPage_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(table);
        ::AliDDB::__write(__os, keys, ::AliDDB::__U__KVMap());
        if(fields.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&fields[0], &fields[0] + fields.size());
        }
        __os->write(condition);
        if(orderFields.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&orderFields[0], &orderFields[0] + orderFields.size());
        }
        __os->write(pageno);
        __os->write(pagesize);
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
        __is->read(total);
        record.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliDDB::AliDDBInterface::getMultiRecords(const ::std::string& table, const ::AliDDB::KVMapSeq& keys, const ::Ice::StringSeq& fields, const ::std::string& condition, const ::Ice::StringSeq& orderFields, ::Ice::Int num, ::AliDDB::DBRecord& record, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliDDB__AliDDBInterface__getMultiRecords_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(table);
        if(keys.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliDDB::__write(__os, &keys[0], &keys[0] + keys.size(), ::AliDDB::__U__KVMapSeq());
        }
        if(fields.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&fields[0], &fields[0] + fields.size());
        }
        __os->write(condition);
        if(orderFields.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&orderFields[0], &orderFields[0] + orderFields.size());
        }
        __os->write(num);
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
        record.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliDDB::AliDDBInterface::getMultiRecordsByPage(const ::std::string& table, const ::AliDDB::KVMapSeq& keys, const ::Ice::StringSeq& fields, const ::std::string& condition, const ::Ice::StringSeq& orderFields, ::Ice::Int pageno, ::Ice::Int pagesize, ::Ice::Int& total, ::AliDDB::DBRecord& record, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliDDB__AliDDBInterface__getMultiRecordsByPage_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(table);
        if(keys.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliDDB::__write(__os, &keys[0], &keys[0] + keys.size(), ::AliDDB::__U__KVMapSeq());
        }
        if(fields.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&fields[0], &fields[0] + fields.size());
        }
        __os->write(condition);
        if(orderFields.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&orderFields[0], &orderFields[0] + orderFields.size());
        }
        __os->write(pageno);
        __os->write(pagesize);
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
        __is->read(total);
        record.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliDDB::AliDDBInterface::updateRecord(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::AliDDB::KVMap& uniqKey, const ::AliDDB::DBRecord& record, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliDDB__AliDDBInterface__updateRecord_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(table);
        ::AliDDB::__write(__os, keys, ::AliDDB::__U__KVMap());
        ::AliDDB::__write(__os, uniqKey, ::AliDDB::__U__KVMap());
        record.__write(__os);
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliDDB::AliDDBInterface::updateBlob(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::AliDDB::DBRecord& record, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliDDB__AliDDBInterface__updateBlob_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(table);
        ::AliDDB::__write(__os, keys, ::AliDDB::__U__KVMap());
        record.__write(__os);
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliDDB::AliDDBInterface::deleteRecord(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::AliDDB::KVMap& uniqKey, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliDDB__AliDDBInterface__deleteRecord_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(table);
        ::AliDDB::__write(__os, keys, ::AliDDB::__U__KVMap());
        ::AliDDB::__write(__os, uniqKey, ::AliDDB::__U__KVMap());
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::AliDDB::AliDDBInterface::insertRecord(const ::std::string&, const ::AliDDB::KVMap&, const ::AliDDB::DBRecord&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliDDB::AliDDBInterface::insertMultiRecords(const ::std::string& table, const ::AliDDB::KVMapSeq& keys, const ::AliDDB::DBRecord& record, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliDDB__AliDDBInterface__insertMultiRecords_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliDDB::AliDDBInterface* __servant = dynamic_cast< ::AliDDB::AliDDBInterface*>(__direct.servant().get());
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
                __ret = __servant->insertMultiRecords(table, keys, record, __current);
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
IceDelegateD::AliDDB::AliDDBInterface::getRecord(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::Ice::StringSeq& fields, const ::Ice::StringSeq& blobFields, ::AliDDB::DBRecord& record, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliDDB__AliDDBInterface__getRecord_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliDDB::AliDDBInterface* __servant = dynamic_cast< ::AliDDB::AliDDBInterface*>(__direct.servant().get());
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
                __ret = __servant->getRecord(table, keys, fields, blobFields, record, __current);
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
IceDelegateD::AliDDB::AliDDBInterface::getRecords(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::Ice::StringSeq& fields, const ::std::string& condition, const ::Ice::StringSeq& orderFields, ::Ice::Int num, ::AliDDB::DBRecord& record, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliDDB__AliDDBInterface__getRecords_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliDDB::AliDDBInterface* __servant = dynamic_cast< ::AliDDB::AliDDBInterface*>(__direct.servant().get());
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
                __ret = __servant->getRecords(table, keys, fields, condition, orderFields, num, record, __current);
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
IceDelegateD::AliDDB::AliDDBInterface::getRecordsCount(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::std::string& condition, ::Ice::Int& recordNum, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliDDB__AliDDBInterface__getRecordsCount_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliDDB::AliDDBInterface* __servant = dynamic_cast< ::AliDDB::AliDDBInterface*>(__direct.servant().get());
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
                __ret = __servant->getRecordsCount(table, keys, condition, recordNum, __current);
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
IceDelegateD::AliDDB::AliDDBInterface::getRecordsByPage(const ::std::string& table, const ::AliDDB::KVMap& keys, const ::Ice::StringSeq& fields, const ::std::string& condition, const ::Ice::StringSeq& orderFields, ::Ice::Int pageno, ::Ice::Int pagesize, ::Ice::Int& total, ::AliDDB::DBRecord& record, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliDDB__AliDDBInterface__getRecordsByPage_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliDDB::AliDDBInterface* __servant = dynamic_cast< ::AliDDB::AliDDBInterface*>(__direct.servant().get());
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
                __ret = __servant->getRecordsByPage(table, keys, fields, condition, orderFields, pageno, pagesize, total, record, __current);
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
IceDelegateD::AliDDB::AliDDBInterface::getMultiRecords(const ::std::string& table, const ::AliDDB::KVMapSeq& keys, const ::Ice::StringSeq& fields, const ::std::string& condition, const ::Ice::StringSeq& orderFields, ::Ice::Int num, ::AliDDB::DBRecord& record, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliDDB__AliDDBInterface__getMultiRecords_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliDDB::AliDDBInterface* __servant = dynamic_cast< ::AliDDB::AliDDBInterface*>(__direct.servant().get());
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
                __ret = __servant->getMultiRecords(table, keys, fields, condition, orderFields, num, record, __current);
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
IceDelegateD::AliDDB::AliDDBInterface::getMultiRecordsByPage(const ::std::string& table, const ::AliDDB::KVMapSeq& keys, const ::Ice::StringSeq& fields, const ::std::string& condition, const ::Ice::StringSeq& orderFields, ::Ice::Int pageno, ::Ice::Int pagesize, ::Ice::Int& total, ::AliDDB::DBRecord& record, const ::Ice::Context* __context)
{
    ::Ice::Current __current;
    __initCurrent(__current, __AliDDB__AliDDBInterface__getMultiRecordsByPage_name, ::Ice::Normal, __context);
    while(true)
    {
        ::IceInternal::Direct __direct(__current);
        ::Ice::Int __ret;
        try
        {
            ::AliDDB::AliDDBInterface* __servant = dynamic_cast< ::AliDDB::AliDDBInterface*>(__direct.servant().get());
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
                __ret = __servant->getMultiRecordsByPage(table, keys, fields, condition, orderFields, pageno, pagesize, total, record, __current);
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
IceDelegateD::AliDDB::AliDDBInterface::updateRecord(const ::std::string&, const ::AliDDB::KVMap&, const ::AliDDB::KVMap&, const ::AliDDB::DBRecord&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliDDB::AliDDBInterface::updateBlob(const ::std::string&, const ::AliDDB::KVMap&, const ::AliDDB::DBRecord&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliDDB::AliDDBInterface::deleteRecord(const ::std::string&, const ::AliDDB::KVMap&, const ::AliDDB::KVMap&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::ObjectPtr
AliDDB::AliDDBInterface::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __AliDDB__AliDDBInterface_ids[2] =
{
    "::AliDDB::AliDDBInterface",
    "::Ice::Object"
};

bool
AliDDB::AliDDBInterface::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__AliDDB__AliDDBInterface_ids, __AliDDB__AliDDBInterface_ids + 2, _s);
}

::std::vector< ::std::string>
AliDDB::AliDDBInterface::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__AliDDB__AliDDBInterface_ids[0], &__AliDDB__AliDDBInterface_ids[2]);
}

const ::std::string&
AliDDB::AliDDBInterface::ice_id(const ::Ice::Current&) const
{
    return __AliDDB__AliDDBInterface_ids[0];
}

const ::std::string&
AliDDB::AliDDBInterface::ice_staticId()
{
    return __AliDDB__AliDDBInterface_ids[0];
}

::IceInternal::DispatchStatus
AliDDB::AliDDBInterface::___insertRecord(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string table;
    ::AliDDB::KVMap keys;
    ::AliDDB::DBRecord record;
    __is->read(table);
    ::AliDDB::__read(__is, keys, ::AliDDB::__U__KVMap());
    record.__read(__is);
    ::AliDDB::AMD_AliDDBInterface_insertRecordPtr __cb = new IceAsync::AliDDB::AMD_AliDDBInterface_insertRecord(__inS);
    try
    {
        insertRecord_async(__cb, table, keys, record, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AliDDB::AliDDBInterface::___insertMultiRecords(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string table;
    ::AliDDB::KVMapSeq keys;
    ::AliDDB::DBRecord record;
    __is->read(table);
    ::AliDDB::__read(__is, keys, ::AliDDB::__U__KVMapSeq());
    record.__read(__is);
    ::Ice::Int __ret = insertMultiRecords(table, keys, record, __current);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliDDB::AliDDBInterface::___getRecord(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string table;
    ::AliDDB::KVMap keys;
    ::Ice::StringSeq fields;
    ::Ice::StringSeq blobFields;
    __is->read(table);
    ::AliDDB::__read(__is, keys, ::AliDDB::__U__KVMap());
    __is->read(fields);
    __is->read(blobFields);
    ::AliDDB::DBRecord record;
    ::Ice::Int __ret = getRecord(table, keys, fields, blobFields, record, __current);
    record.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliDDB::AliDDBInterface::___getRecords(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string table;
    ::AliDDB::KVMap keys;
    ::Ice::StringSeq fields;
    ::std::string condition;
    ::Ice::StringSeq orderFields;
    ::Ice::Int num;
    __is->read(table);
    ::AliDDB::__read(__is, keys, ::AliDDB::__U__KVMap());
    __is->read(fields);
    __is->read(condition);
    __is->read(orderFields);
    __is->read(num);
    ::AliDDB::DBRecord record;
    ::Ice::Int __ret = getRecords(table, keys, fields, condition, orderFields, num, record, __current);
    record.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliDDB::AliDDBInterface::___getRecordsCount(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string table;
    ::AliDDB::KVMap keys;
    ::std::string condition;
    __is->read(table);
    ::AliDDB::__read(__is, keys, ::AliDDB::__U__KVMap());
    __is->read(condition);
    ::Ice::Int recordNum;
    ::Ice::Int __ret = getRecordsCount(table, keys, condition, recordNum, __current);
    __os->write(recordNum);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliDDB::AliDDBInterface::___getRecordsByPage(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string table;
    ::AliDDB::KVMap keys;
    ::Ice::StringSeq fields;
    ::std::string condition;
    ::Ice::StringSeq orderFields;
    ::Ice::Int pageno;
    ::Ice::Int pagesize;
    __is->read(table);
    ::AliDDB::__read(__is, keys, ::AliDDB::__U__KVMap());
    __is->read(fields);
    __is->read(condition);
    __is->read(orderFields);
    __is->read(pageno);
    __is->read(pagesize);
    ::Ice::Int total;
    ::AliDDB::DBRecord record;
    ::Ice::Int __ret = getRecordsByPage(table, keys, fields, condition, orderFields, pageno, pagesize, total, record, __current);
    __os->write(total);
    record.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliDDB::AliDDBInterface::___getMultiRecords(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string table;
    ::AliDDB::KVMapSeq keys;
    ::Ice::StringSeq fields;
    ::std::string condition;
    ::Ice::StringSeq orderFields;
    ::Ice::Int num;
    __is->read(table);
    ::AliDDB::__read(__is, keys, ::AliDDB::__U__KVMapSeq());
    __is->read(fields);
    __is->read(condition);
    __is->read(orderFields);
    __is->read(num);
    ::AliDDB::DBRecord record;
    ::Ice::Int __ret = getMultiRecords(table, keys, fields, condition, orderFields, num, record, __current);
    record.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliDDB::AliDDBInterface::___getMultiRecordsByPage(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string table;
    ::AliDDB::KVMapSeq keys;
    ::Ice::StringSeq fields;
    ::std::string condition;
    ::Ice::StringSeq orderFields;
    ::Ice::Int pageno;
    ::Ice::Int pagesize;
    __is->read(table);
    ::AliDDB::__read(__is, keys, ::AliDDB::__U__KVMapSeq());
    __is->read(fields);
    __is->read(condition);
    __is->read(orderFields);
    __is->read(pageno);
    __is->read(pagesize);
    ::Ice::Int total;
    ::AliDDB::DBRecord record;
    ::Ice::Int __ret = getMultiRecordsByPage(table, keys, fields, condition, orderFields, pageno, pagesize, total, record, __current);
    __os->write(total);
    record.__write(__os);
    __os->write(__ret);
    return ::IceInternal::DispatchOK;
}

::IceInternal::DispatchStatus
AliDDB::AliDDBInterface::___updateRecord(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string table;
    ::AliDDB::KVMap keys;
    ::AliDDB::KVMap uniqKey;
    ::AliDDB::DBRecord record;
    __is->read(table);
    ::AliDDB::__read(__is, keys, ::AliDDB::__U__KVMap());
    ::AliDDB::__read(__is, uniqKey, ::AliDDB::__U__KVMap());
    record.__read(__is);
    ::AliDDB::AMD_AliDDBInterface_updateRecordPtr __cb = new IceAsync::AliDDB::AMD_AliDDBInterface_updateRecord(__inS);
    try
    {
        updateRecord_async(__cb, table, keys, uniqKey, record, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AliDDB::AliDDBInterface::___updateBlob(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string table;
    ::AliDDB::KVMap keys;
    ::AliDDB::DBRecord record;
    __is->read(table);
    ::AliDDB::__read(__is, keys, ::AliDDB::__U__KVMap());
    record.__read(__is);
    ::AliDDB::AMD_AliDDBInterface_updateBlobPtr __cb = new IceAsync::AliDDB::AMD_AliDDBInterface_updateBlob(__inS);
    try
    {
        updateBlob_async(__cb, table, keys, record, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

::IceInternal::DispatchStatus
AliDDB::AliDDBInterface::___deleteRecord(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string table;
    ::AliDDB::KVMap keys;
    ::AliDDB::KVMap uniqKey;
    __is->read(table);
    ::AliDDB::__read(__is, keys, ::AliDDB::__U__KVMap());
    ::AliDDB::__read(__is, uniqKey, ::AliDDB::__U__KVMap());
    ::AliDDB::AMD_AliDDBInterface_deleteRecordPtr __cb = new IceAsync::AliDDB::AMD_AliDDBInterface_deleteRecord(__inS);
    try
    {
        deleteRecord_async(__cb, table, keys, uniqKey, __current);
    }
    catch(const ::Ice::Exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::IceInternal::DispatchAsync;
}

static ::std::string __AliDDB__AliDDBInterface_all[] =
{
    "deleteRecord",
    "getMultiRecords",
    "getMultiRecordsByPage",
    "getRecord",
    "getRecords",
    "getRecordsByPage",
    "getRecordsCount",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "insertMultiRecords",
    "insertRecord",
    "updateBlob",
    "updateRecord"
};

::IceInternal::DispatchStatus
AliDDB::AliDDBInterface::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__AliDDB__AliDDBInterface_all, __AliDDB__AliDDBInterface_all + 15, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __AliDDB__AliDDBInterface_all)
    {
        case 0:
        {
            return ___deleteRecord(in, current);
        }
        case 1:
        {
            return ___getMultiRecords(in, current);
        }
        case 2:
        {
            return ___getMultiRecordsByPage(in, current);
        }
        case 3:
        {
            return ___getRecord(in, current);
        }
        case 4:
        {
            return ___getRecords(in, current);
        }
        case 5:
        {
            return ___getRecordsByPage(in, current);
        }
        case 6:
        {
            return ___getRecordsCount(in, current);
        }
        case 7:
        {
            return ___ice_id(in, current);
        }
        case 8:
        {
            return ___ice_ids(in, current);
        }
        case 9:
        {
            return ___ice_isA(in, current);
        }
        case 10:
        {
            return ___ice_ping(in, current);
        }
        case 11:
        {
            return ___insertMultiRecords(in, current);
        }
        case 12:
        {
            return ___insertRecord(in, current);
        }
        case 13:
        {
            return ___updateBlob(in, current);
        }
        case 14:
        {
            return ___updateRecord(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
AliDDB::AliDDBInterface::__write(::IceInternal::BasicStream* __os) const
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
AliDDB::AliDDBInterface::__read(::IceInternal::BasicStream* __is, bool __rid)
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
AliDDB::AliDDBInterface::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliDDB::AliDDBInterface was not generated with stream support";
    throw ex;
}

void
AliDDB::AliDDBInterface::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliDDB::AliDDBInterface was not generated with stream support";
    throw ex;
}

void 
AliDDB::__patch__AliDDBInterfacePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::AliDDB::AliDDBInterfacePtr* p = static_cast< ::AliDDB::AliDDBInterfacePtr*>(__addr);
    assert(p);
    *p = ::AliDDB::AliDDBInterfacePtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::AliDDB::AliDDBInterface::ice_staticId();
        throw e;
    }
}

bool
AliDDB::operator==(const ::AliDDB::AliDDBInterface& l, const ::AliDDB::AliDDBInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
AliDDB::operator!=(const ::AliDDB::AliDDBInterface& l, const ::AliDDB::AliDDBInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
AliDDB::operator<(const ::AliDDB::AliDDBInterface& l, const ::AliDDB::AliDDBInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
AliDDB::operator<=(const ::AliDDB::AliDDBInterface& l, const ::AliDDB::AliDDBInterface& r)
{
    return l < r || l == r;
}

bool
AliDDB::operator>(const ::AliDDB::AliDDBInterface& l, const ::AliDDB::AliDDBInterface& r)
{
    return !(l < r) && !(l == r);
}

bool
AliDDB::operator>=(const ::AliDDB::AliDDBInterface& l, const ::AliDDB::AliDDBInterface& r)
{
    return !(l < r);
}
