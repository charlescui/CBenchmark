// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `aliuidstruct.ice'

#include <aliuidstruct.h>
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

bool
AliUID::SMobileUserInfo::operator==(const SMobileUserInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AliUID::SMobileUserInfo::operator!=(const SMobileUserInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(aliuid != __rhs.aliuid)
    {
        return true;
    }
    if(mobileNo != __rhs.mobileNo)
    {
        return true;
    }
    if(mkey1 != __rhs.mkey1)
    {
        return true;
    }
    if(mkey2 != __rhs.mkey2)
    {
        return true;
    }
    if(clientKey != __rhs.clientKey)
    {
        return true;
    }
    if(wkey1 != __rhs.wkey1)
    {
        return true;
    }
    if(wkey2 != __rhs.wkey2)
    {
        return true;
    }
    if(token != __rhs.token)
    {
        return true;
    }
    if(authServices != __rhs.authServices)
    {
        return true;
    }
    return false;
}

bool
AliUID::SMobileUserInfo::operator<(const SMobileUserInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(aliuid < __rhs.aliuid)
    {
        return true;
    }
    else if(__rhs.aliuid < aliuid)
    {
        return false;
    }
    if(mobileNo < __rhs.mobileNo)
    {
        return true;
    }
    else if(__rhs.mobileNo < mobileNo)
    {
        return false;
    }
    if(mkey1 < __rhs.mkey1)
    {
        return true;
    }
    else if(__rhs.mkey1 < mkey1)
    {
        return false;
    }
    if(mkey2 < __rhs.mkey2)
    {
        return true;
    }
    else if(__rhs.mkey2 < mkey2)
    {
        return false;
    }
    if(clientKey < __rhs.clientKey)
    {
        return true;
    }
    else if(__rhs.clientKey < clientKey)
    {
        return false;
    }
    if(wkey1 < __rhs.wkey1)
    {
        return true;
    }
    else if(__rhs.wkey1 < wkey1)
    {
        return false;
    }
    if(wkey2 < __rhs.wkey2)
    {
        return true;
    }
    else if(__rhs.wkey2 < wkey2)
    {
        return false;
    }
    if(token < __rhs.token)
    {
        return true;
    }
    else if(__rhs.token < token)
    {
        return false;
    }
    if(authServices < __rhs.authServices)
    {
        return true;
    }
    else if(__rhs.authServices < authServices)
    {
        return false;
    }
    return false;
}

void
AliUID::SMobileUserInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(aliuid);
    __os->write(mobileNo);
    __os->write(mkey1);
    __os->write(mkey2);
    __os->write(clientKey);
    __os->write(wkey1);
    __os->write(wkey2);
    __os->write(token);
    if(authServices.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&authServices[0], &authServices[0] + authServices.size());
    }
}

void
AliUID::SMobileUserInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(aliuid);
    __is->read(mobileNo);
    __is->read(mkey1);
    __is->read(mkey2);
    __is->read(clientKey);
    __is->read(wkey1);
    __is->read(wkey2);
    __is->read(token);
    __is->read(authServices);
}

bool
AliUID::SServiceUser::operator==(const SServiceUser& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AliUID::SServiceUser::operator!=(const SServiceUser& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(serviceId != __rhs.serviceId)
    {
        return true;
    }
    if(buid != __rhs.buid)
    {
        return true;
    }
    if(buToken != __rhs.buToken)
    {
        return true;
    }
    if(status != __rhs.status)
    {
        return true;
    }
    return false;
}

bool
AliUID::SServiceUser::operator<(const SServiceUser& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(serviceId < __rhs.serviceId)
    {
        return true;
    }
    else if(__rhs.serviceId < serviceId)
    {
        return false;
    }
    if(buid < __rhs.buid)
    {
        return true;
    }
    else if(__rhs.buid < buid)
    {
        return false;
    }
    if(buToken < __rhs.buToken)
    {
        return true;
    }
    else if(__rhs.buToken < buToken)
    {
        return false;
    }
    if(status < __rhs.status)
    {
        return true;
    }
    else if(__rhs.status < status)
    {
        return false;
    }
    return false;
}

void
AliUID::SServiceUser::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(serviceId);
    __os->write(buid);
    __os->write(buToken);
    __os->write(status);
}

void
AliUID::SServiceUser::__read(::IceInternal::BasicStream* __is)
{
    __is->read(serviceId);
    __is->read(buid);
    __is->read(buToken);
    __is->read(status);
}

void
AliUID::__write(::IceInternal::BasicStream* __os, const ::AliUID::SServiceUser* begin, const ::AliUID::SServiceUser* end, ::AliUID::__U__SServiceUserSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
AliUID::__read(::IceInternal::BasicStream* __is, ::AliUID::SServiceUserSeq& v, ::AliUID::__U__SServiceUserSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 5);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

bool
AliUID::SPassportAccount::operator==(const SPassportAccount& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AliUID::SPassportAccount::operator!=(const SPassportAccount& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(aliuid != __rhs.aliuid)
    {
        return true;
    }
    if(email != __rhs.email)
    {
        return true;
    }
    if(mobile != __rhs.mobile)
    {
        return true;
    }
    if(buids != __rhs.buids)
    {
        return true;
    }
    return false;
}

bool
AliUID::SPassportAccount::operator<(const SPassportAccount& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(aliuid < __rhs.aliuid)
    {
        return true;
    }
    else if(__rhs.aliuid < aliuid)
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
    if(mobile < __rhs.mobile)
    {
        return true;
    }
    else if(__rhs.mobile < mobile)
    {
        return false;
    }
    if(buids < __rhs.buids)
    {
        return true;
    }
    else if(__rhs.buids < buids)
    {
        return false;
    }
    return false;
}

void
AliUID::SPassportAccount::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(aliuid);
    __os->write(email);
    __os->write(mobile);
    if(buids.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::AliUID::__write(__os, &buids[0], &buids[0] + buids.size(), ::AliUID::__U__SServiceUserSeq());
    }
}

void
AliUID::SPassportAccount::__read(::IceInternal::BasicStream* __is)
{
    __is->read(aliuid);
    __is->read(email);
    __is->read(mobile);
    ::AliUID::__read(__is, buids, ::AliUID::__U__SServiceUserSeq());
}

bool
AliUID::SUrlInfo::operator==(const SUrlInfo& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AliUID::SUrlInfo::operator!=(const SUrlInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(baseUrl != __rhs.baseUrl)
    {
        return true;
    }
    if(trustUrl != __rhs.trustUrl)
    {
        return true;
    }
    return false;
}

bool
AliUID::SUrlInfo::operator<(const SUrlInfo& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(baseUrl < __rhs.baseUrl)
    {
        return true;
    }
    else if(__rhs.baseUrl < baseUrl)
    {
        return false;
    }
    if(trustUrl < __rhs.trustUrl)
    {
        return true;
    }
    else if(__rhs.trustUrl < trustUrl)
    {
        return false;
    }
    return false;
}

void
AliUID::SUrlInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(baseUrl);
    __os->write(trustUrl);
}

void
AliUID::SUrlInfo::__read(::IceInternal::BasicStream* __is)
{
    __is->read(baseUrl);
    __is->read(trustUrl);
}

void
AliUID::__write(::IceInternal::BasicStream* __os, const ::AliUID::SUrlInfo* begin, const ::AliUID::SUrlInfo* end, ::AliUID::__U__SUrlInfoSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
AliUID::__read(::IceInternal::BasicStream* __is, ::AliUID::SUrlInfoSeq& v, ::AliUID::__U__SUrlInfoSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 2);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

bool
AliUID::SWebBind::operator==(const SWebBind& __rhs) const
{
    return !operator!=(__rhs);
}

bool
AliUID::SWebBind::operator!=(const SWebBind& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(serviceId != __rhs.serviceId)
    {
        return true;
    }
    if(siteId != __rhs.siteId)
    {
        return true;
    }
    if(webId != __rhs.webId)
    {
        return true;
    }
    if(webUid != __rhs.webUid)
    {
        return true;
    }
    if(webUrl != __rhs.webUrl)
    {
        return true;
    }
    return false;
}

bool
AliUID::SWebBind::operator<(const SWebBind& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(serviceId < __rhs.serviceId)
    {
        return true;
    }
    else if(__rhs.serviceId < serviceId)
    {
        return false;
    }
    if(siteId < __rhs.siteId)
    {
        return true;
    }
    else if(__rhs.siteId < siteId)
    {
        return false;
    }
    if(webId < __rhs.webId)
    {
        return true;
    }
    else if(__rhs.webId < webId)
    {
        return false;
    }
    if(webUid < __rhs.webUid)
    {
        return true;
    }
    else if(__rhs.webUid < webUid)
    {
        return false;
    }
    if(webUrl < __rhs.webUrl)
    {
        return true;
    }
    else if(__rhs.webUrl < webUrl)
    {
        return false;
    }
    return false;
}

void
AliUID::SWebBind::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(serviceId);
    __os->write(siteId);
    __os->write(webId);
    __os->write(webUid);
    if(webUrl.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&webUrl[0], &webUrl[0] + webUrl.size());
    }
}

void
AliUID::SWebBind::__read(::IceInternal::BasicStream* __is)
{
    __is->read(serviceId);
    __is->read(siteId);
    __is->read(webId);
    __is->read(webUid);
    __is->read(webUrl);
}

void
AliUID::__write(::IceInternal::BasicStream* __os, const ::AliUID::SWebBind* begin, const ::AliUID::SWebBind* end, ::AliUID::__U__SWebBindSeq)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
AliUID::__read(::IceInternal::BasicStream* __is, ::AliUID::SWebBindSeq& v, ::AliUID::__U__SWebBindSeq)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 5);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}
