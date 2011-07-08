// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `dbservice.ice'

#ifndef __dbservice_h__
#define __dbservice_h__

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
#include <dbdatadefine.h>
#include <dbtbsstructs60.h>
#include <imsession.h>
#include <imicecommstruct.h>
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

namespace AliIMDBBase
{

class IMDBProxyMgr;
bool operator==(const IMDBProxyMgr&, const IMDBProxyMgr&);
bool operator!=(const IMDBProxyMgr&, const IMDBProxyMgr&);
bool operator<(const IMDBProxyMgr&, const IMDBProxyMgr&);
bool operator<=(const IMDBProxyMgr&, const IMDBProxyMgr&);
bool operator>(const IMDBProxyMgr&, const IMDBProxyMgr&);
bool operator>=(const IMDBProxyMgr&, const IMDBProxyMgr&);

}

}

namespace AliIMDBBase
{

class IMDBProxyMgr;
bool operator==(const IMDBProxyMgr&, const IMDBProxyMgr&);
bool operator!=(const IMDBProxyMgr&, const IMDBProxyMgr&);
bool operator<(const IMDBProxyMgr&, const IMDBProxyMgr&);
bool operator<=(const IMDBProxyMgr&, const IMDBProxyMgr&);
bool operator>(const IMDBProxyMgr&, const IMDBProxyMgr&);
bool operator>=(const IMDBProxyMgr&, const IMDBProxyMgr&);

}

namespace IceInternal
{

void incRef(::AliIMDBBase::IMDBProxyMgr*);
void decRef(::AliIMDBBase::IMDBProxyMgr*);

void incRef(::IceProxy::AliIMDBBase::IMDBProxyMgr*);
void decRef(::IceProxy::AliIMDBBase::IMDBProxyMgr*);

}

namespace AliIMDBBase
{

typedef ::IceInternal::Handle< ::AliIMDBBase::IMDBProxyMgr> IMDBProxyMgrPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::AliIMDBBase::IMDBProxyMgr> IMDBProxyMgrPrx;

void __write(::IceInternal::BasicStream*, const IMDBProxyMgrPrx&);
void __read(::IceInternal::BasicStream*, IMDBProxyMgrPrx&);
void __write(::IceInternal::BasicStream*, const IMDBProxyMgrPtr&);
void __patch__IMDBProxyMgrPtr(void*, ::Ice::ObjectPtr&);

void __addObject(const IMDBProxyMgrPtr&, ::IceInternal::GCCountMap&);
bool __usesClasses(const IMDBProxyMgrPtr&);
void __decRefUnsafe(const IMDBProxyMgrPtr&);
void __clearHandleUnsafe(IMDBProxyMgrPtr&);

}

namespace AliIMDBBase
{

}

namespace AliIMDBBase
{

class AMD_IMDBProxyMgr_sayhello : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_sayhello> AMD_IMDBProxyMgr_sayhelloPtr;

class AMD_IMDBProxyMgr_CheckUserToken : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserToken> AMD_IMDBProxyMgr_CheckUserTokenPtr;

class AMD_IMDBProxyMgr_CheckTmpSession : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_CheckTmpSession> AMD_IMDBProxyMgr_CheckTmpSessionPtr;

class AMD_IMDBProxyMgr_CheckUserWebPasswd : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebPasswd> AMD_IMDBProxyMgr_CheckUserWebPasswdPtr;

class AMD_IMDBProxyMgr_CheckUserPasswd : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&, const ::std::string&, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserPasswd> AMD_IMDBProxyMgr_CheckUserPasswdPtr;

class AMD_IMDBProxyMgr_CheckUserWebToken : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebToken> AMD_IMDBProxyMgr_CheckUserWebTokenPtr;

class AMD_IMDBProxyMgr_GetAtmLongid : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetAtmLongid> AMD_IMDBProxyMgr_GetAtmLongidPtr;

class AMD_IMDBProxyMgr_AddUser60 : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_AddUser60> AMD_IMDBProxyMgr_AddUser60Ptr;

class AMD_IMDBProxyMgr_GetWebMemberPWInfo : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SMemberPWInfo&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetWebMemberPWInfo> AMD_IMDBProxyMgr_GetWebMemberPWInfoPtr;

class AMD_IMDBProxyMgr_GetWebMemberPWInfoEx : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SMemberPWInfoEx&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetWebMemberPWInfoEx> AMD_IMDBProxyMgr_GetWebMemberPWInfoExPtr;

class AMD_IMDBProxyMgr_GetUserWebBasicProfile : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SUserWebBasicProfile&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserWebBasicProfile> AMD_IMDBProxyMgr_GetUserWebBasicProfilePtr;

class AMD_IMDBProxyMgr_CheckCanAddContact : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_CheckCanAddContact> AMD_IMDBProxyMgr_CheckCanAddContactPtr;

class AMD_IMDBProxyMgr_QueryMatchedUserIds : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SMatchedUserIdInfoSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_QueryMatchedUserIds> AMD_IMDBProxyMgr_QueryMatchedUserIdsPtr;

class AMD_IMDBProxyMgr_UpdateContactWebInfo : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactWebInfo> AMD_IMDBProxyMgr_UpdateContactWebInfoPtr;

class AMD_IMDBProxyMgr_DelTaobaoUser : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_DelTaobaoUser> AMD_IMDBProxyMgr_DelTaobaoUserPtr;

class AMD_IMDBProxyMgr_DelAnyUser : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_DelAnyUser> AMD_IMDBProxyMgr_DelAnyUserPtr;

class AMD_IMDBProxyMgr_AddUserKeyWord : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_AddUserKeyWord> AMD_IMDBProxyMgr_AddUserKeyWordPtr;

class AMD_IMDBProxyMgr_UpdateUserKeyWord : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserKeyWord> AMD_IMDBProxyMgr_UpdateUserKeyWordPtr;

class AMD_IMDBProxyMgr_GetUserKeyWord : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserKeyWord> AMD_IMDBProxyMgr_GetUserKeyWordPtr;

class AMD_IMDBProxyMgr_QueryUserIdsByKeyWord : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SMatchedUserIdInfoSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_QueryUserIdsByKeyWord> AMD_IMDBProxyMgr_QueryUserIdsByKeyWordPtr;

class AMD_IMDBProxyMgr_GetBatchMemberInfo : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEMemberInfoSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetBatchMemberInfo> AMD_IMDBProxyMgr_GetBatchMemberInfoPtr;

class AMD_IMDBProxyMgr_GetAllVersion : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEVersionSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetAllVersion> AMD_IMDBProxyMgr_GetAllVersionPtr;

class AMD_IMDBProxyMgr_GetAllSysMsg : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICESysMessageSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetAllSysMsg> AMD_IMDBProxyMgr_GetAllSysMsgPtr;

class AMD_IMDBProxyMgr_GetAllExSysMsg : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SExICESysMessageSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetAllExSysMsg> AMD_IMDBProxyMgr_GetAllExSysMsgPtr;

class AMD_IMDBProxyMgr_GetUserInfo : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEUserInfo&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfo> AMD_IMDBProxyMgr_GetUserInfoPtr;

class AMD_IMDBProxyMgr_GetUserInfo2 : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEUserInfo2&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfo2> AMD_IMDBProxyMgr_GetUserInfo2Ptr;

class AMD_IMDBProxyMgr_GetUserInfoEx : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEUserInfoEx&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoEx> AMD_IMDBProxyMgr_GetUserInfoExPtr;

class AMD_IMDBProxyMgr_GetUserInfoNew : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEUserInfoNew&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoNew> AMD_IMDBProxyMgr_GetUserInfoNewPtr;

class AMD_IMDBProxyMgr_GetUserInfo2New : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEUserInfo2New&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfo2New> AMD_IMDBProxyMgr_GetUserInfo2NewPtr;

class AMD_IMDBProxyMgr_GetUserInfoExNew : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEUserInfoExNew&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew> AMD_IMDBProxyMgr_GetUserInfoExNewPtr;

class AMD_IMDBProxyMgr_GetUserInfoExNew2 : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEUserInfoExNew2&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew2> AMD_IMDBProxyMgr_GetUserInfoExNew2Ptr;

class AMD_IMDBProxyMgr_GetUserInfoExNew3 : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEUserInfoExNew3&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew3> AMD_IMDBProxyMgr_GetUserInfoExNew3Ptr;

class AMD_IMDBProxyMgr_GetUserInfoExNew4 : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEUserInfoExNew4&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew4> AMD_IMDBProxyMgr_GetUserInfoExNew4Ptr;

class AMD_IMDBProxyMgr_GetUserVerifyInfo : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Byte, ::Ice::Byte) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfo> AMD_IMDBProxyMgr_GetUserVerifyInfoPtr;

class AMD_IMDBProxyMgr_GetUserVerifyInfoEx : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Byte, ::Ice::Byte, ::Ice::Byte) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfoEx> AMD_IMDBProxyMgr_GetUserVerifyInfoExPtr;

class AMD_IMDBProxyMgr_GetUserVerifyInfoQuestion : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Byte, ::Ice::Byte, ::Ice::Byte, const ::std::string&, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfoQuestion> AMD_IMDBProxyMgr_GetUserVerifyInfoQuestionPtr;

class AMD_IMDBProxyMgr_GetGroupList : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEGroupInfoSeq&, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetGroupList> AMD_IMDBProxyMgr_GetGroupListPtr;

class AMD_IMDBProxyMgr_GetGroupListEx : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEGroupInfoExSeq&, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetGroupListEx> AMD_IMDBProxyMgr_GetGroupListExPtr;

class AMD_IMDBProxyMgr_GetContactList : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEContactInfoSeq&, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetContactList> AMD_IMDBProxyMgr_GetContactListPtr;

class AMD_IMDBProxyMgr_GetBlackList : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::Ice::StringSeq&, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetBlackList> AMD_IMDBProxyMgr_GetBlackListPtr;

class AMD_IMDBProxyMgr_GetReverseBlackList : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::Ice::StringSeq&, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetReverseBlackList> AMD_IMDBProxyMgr_GetReverseBlackListPtr;

class AMD_IMDBProxyMgr_GetOfflineMsg : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEOffLineMessegeSeq&, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsg> AMD_IMDBProxyMgr_GetOfflineMsgPtr;

class AMD_IMDBProxyMgr_GetOfflineMsgEx : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEOffLineMessegeExSeq&, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgEx> AMD_IMDBProxyMgr_GetOfflineMsgExPtr;

class AMD_IMDBProxyMgr_GetOfflineMsgCount : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgCount> AMD_IMDBProxyMgr_GetOfflineMsgCountPtr;

class AMD_IMDBProxyMgr_GetEnetOfflineMsgNum : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetEnetOfflineMsgNum> AMD_IMDBProxyMgr_GetEnetOfflineMsgNumPtr;

class AMD_IMDBProxyMgr_GetContactInfo : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEContactInfo&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetContactInfo> AMD_IMDBProxyMgr_GetContactInfoPtr;

class AMD_IMDBProxyMgr_GetOfflineMsgNum : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgNum> AMD_IMDBProxyMgr_GetOfflineMsgNumPtr;

class AMD_IMDBProxyMgr_GetToolProfiles : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::Ice::StringSeq&, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetToolProfiles> AMD_IMDBProxyMgr_GetToolProfilesPtr;

class AMD_IMDBProxyMgr_GetToolProfilesEx : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEToolProfileSeq&, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetToolProfilesEx> AMD_IMDBProxyMgr_GetToolProfilesExPtr;

class AMD_IMDBProxyMgr_GetSysMsg : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICESysMessage&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetSysMsg> AMD_IMDBProxyMgr_GetSysMsgPtr;

class AMD_IMDBProxyMgr_AddUser : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_AddUser> AMD_IMDBProxyMgr_AddUserPtr;

class AMD_IMDBProxyMgr_AddGroup : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_AddGroup> AMD_IMDBProxyMgr_AddGroupPtr;

class AMD_IMDBProxyMgr_AddGroupEx : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_AddGroupEx> AMD_IMDBProxyMgr_AddGroupExPtr;

class AMD_IMDBProxyMgr_AddBlackList : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_AddBlackList> AMD_IMDBProxyMgr_AddBlackListPtr;

class AMD_IMDBProxyMgr_AddOfflineMsg : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsg> AMD_IMDBProxyMgr_AddOfflineMsgPtr;

class AMD_IMDBProxyMgr_AddExpriteTimeOfflineMsg : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_AddExpriteTimeOfflineMsg> AMD_IMDBProxyMgr_AddExpriteTimeOfflineMsgPtr;

class AMD_IMDBProxyMgr_AddOfflineMsgNoSMS : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsgNoSMS> AMD_IMDBProxyMgr_AddOfflineMsgNoSMSPtr;

class AMD_IMDBProxyMgr_AddOfflineMsgEx : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsgEx> AMD_IMDBProxyMgr_AddOfflineMsgExPtr;

class AMD_IMDBProxyMgr_UpdateUserLogin : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLogin> AMD_IMDBProxyMgr_UpdateUserLoginPtr;

class AMD_IMDBProxyMgr_UpdateUserLoginEx : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginEx> AMD_IMDBProxyMgr_UpdateUserLoginExPtr;

class AMD_IMDBProxyMgr_UpdateUserLoginDataInfo : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginDataInfo> AMD_IMDBProxyMgr_UpdateUserLoginDataInfoPtr;

class AMD_IMDBProxyMgr_UpdateUserLoginDataInfoEx : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginDataInfoEx> AMD_IMDBProxyMgr_UpdateUserLoginDataInfoExPtr;

class AMD_IMDBProxyMgr_UpdateUserSysMsgId : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserSysMsgId> AMD_IMDBProxyMgr_UpdateUserSysMsgIdPtr;

class AMD_IMDBProxyMgr_UpdateUserDataInfo : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfo> AMD_IMDBProxyMgr_UpdateUserDataInfoPtr;

class AMD_IMDBProxyMgr_UpdateUserDataInfo2 : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfo2> AMD_IMDBProxyMgr_UpdateUserDataInfo2Ptr;

class AMD_IMDBProxyMgr_UpdateUserDataInfo3 : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfo3> AMD_IMDBProxyMgr_UpdateUserDataInfo3Ptr;

class AMD_IMDBProxyMgr_UpdateUserVerifySet : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySet> AMD_IMDBProxyMgr_UpdateUserVerifySetPtr;

class AMD_IMDBProxyMgr_UpdateUserVerifySetEx : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySetEx> AMD_IMDBProxyMgr_UpdateUserVerifySetExPtr;

class AMD_IMDBProxyMgr_UpdateUserVerifySetQuestion : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySetQuestion> AMD_IMDBProxyMgr_UpdateUserVerifySetQuestionPtr;

class AMD_IMDBProxyMgr_UpdateGroup : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateGroup> AMD_IMDBProxyMgr_UpdateGroupPtr;

class AMD_IMDBProxyMgr_MoveGroup : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_MoveGroup> AMD_IMDBProxyMgr_MoveGroupPtr;

class AMD_IMDBProxyMgr_UpdateContactNickName : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactNickName> AMD_IMDBProxyMgr_UpdateContactNickNamePtr;

class AMD_IMDBProxyMgr_UpdateContactGroup : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactGroup> AMD_IMDBProxyMgr_UpdateContactGroupPtr;

class AMD_IMDBProxyMgr_UpdateContactStatus : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactStatus> AMD_IMDBProxyMgr_UpdateContactStatusPtr;

class AMD_IMDBProxyMgr_UpdateNotifyMessage : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateNotifyMessage> AMD_IMDBProxyMgr_UpdateNotifyMessagePtr;

class AMD_IMDBProxyMgr_UpdateToolProfiles : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateToolProfiles> AMD_IMDBProxyMgr_UpdateToolProfilesPtr;

class AMD_IMDBProxyMgr_UpdateToolProfilesEx : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateToolProfilesEx> AMD_IMDBProxyMgr_UpdateToolProfilesExPtr;

class AMD_IMDBProxyMgr_RemoveGroup : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_RemoveGroup> AMD_IMDBProxyMgr_RemoveGroupPtr;

class AMD_IMDBProxyMgr_RemoveContact : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_RemoveContact> AMD_IMDBProxyMgr_RemoveContactPtr;

class AMD_IMDBProxyMgr_RemoveInverfiedContact : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_RemoveInverfiedContact> AMD_IMDBProxyMgr_RemoveInverfiedContactPtr;

class AMD_IMDBProxyMgr_RemoveBlackList : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_RemoveBlackList> AMD_IMDBProxyMgr_RemoveBlackListPtr;

class AMD_IMDBProxyMgr_IsBlackedByOther : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_IsBlackedByOther> AMD_IMDBProxyMgr_IsBlackedByOtherPtr;

class AMD_IMDBProxyMgr_RemoveBatchContacts : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::Ice::StringSeq&, ::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_RemoveBatchContacts> AMD_IMDBProxyMgr_RemoveBatchContactsPtr;

class AMD_IMDBProxyMgr_GetUserDStatus : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEUserDStatusSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserDStatus> AMD_IMDBProxyMgr_GetUserDStatusPtr;

class AMD_IMDBProxyMgr_AddUserDStatus : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_AddUserDStatus> AMD_IMDBProxyMgr_AddUserDStatusPtr;

class AMD_IMDBProxyMgr_RemoveUserDStatus : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_RemoveUserDStatus> AMD_IMDBProxyMgr_RemoveUserDStatusPtr;

class AMD_IMDBProxyMgr_GetAllContactList : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEContactInfoSeq&, ::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetAllContactList> AMD_IMDBProxyMgr_GetAllContactListPtr;

class AMD_IMDBProxyMgr_GetCntModifyList : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICECntCidModPairSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetCntModifyList> AMD_IMDBProxyMgr_GetCntModifyListPtr;

class AMD_IMDBProxyMgr_AddGenContactFull : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&, const ::std::string&, ::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_AddGenContactFull> AMD_IMDBProxyMgr_AddGenContactFullPtr;

class AMD_IMDBProxyMgr_GetContactDetail : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEGenContactFull&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetContactDetail> AMD_IMDBProxyMgr_GetContactDetailPtr;

class AMD_IMDBProxyMgr_DelGenContact : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_DelGenContact> AMD_IMDBProxyMgr_DelGenContactPtr;

class AMD_IMDBProxyMgr_AddContact : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int, const ::std::string&, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_AddContact> AMD_IMDBProxyMgr_AddContactPtr;

class AMD_IMDBProxyMgr_CheckUpgradeGenCnt : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_CheckUpgradeGenCnt> AMD_IMDBProxyMgr_CheckUpgradeGenCntPtr;

class AMD_IMDBProxyMgr_ModifyGenCntID : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_ModifyGenCntID> AMD_IMDBProxyMgr_ModifyGenCntIDPtr;

class AMD_IMDBProxyMgr_UpgradeGenContact : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Long, ::Ice::Long, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpgradeGenContact> AMD_IMDBProxyMgr_UpgradeGenContactPtr;

class AMD_IMDBProxyMgr_GetUpdatedUserInfo : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Long, ::Ice::Long, const ::std::string&, const ::std::string&, ::Ice::Long, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetUpdatedUserInfo> AMD_IMDBProxyMgr_GetUpdatedUserInfoPtr;

class AMD_IMDBProxyMgr_ModifyContactDetail : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Long, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_ModifyContactDetail> AMD_IMDBProxyMgr_ModifyContactDetailPtr;

class AMD_IMDBProxyMgr_UpdateContactGroupByCid : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactGroupByCid> AMD_IMDBProxyMgr_UpdateContactGroupByCidPtr;

class AMD_IMDBProxyMgr_UpdateContactNickNameByCid : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactNickNameByCid> AMD_IMDBProxyMgr_UpdateContactNickNameByCidPtr;

class AMD_IMDBProxyMgr_GetCRMContactDetail : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICECRMContactDetail&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetCRMContactDetail> AMD_IMDBProxyMgr_GetCRMContactDetailPtr;

class AMD_IMDBProxyMgr_GetHardCodeIds : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetHardCodeIds> AMD_IMDBProxyMgr_GetHardCodeIdsPtr;

class AMD_IMDBProxyMgr_UpdateHardCodeIds : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateHardCodeIds> AMD_IMDBProxyMgr_UpdateHardCodeIdsPtr;

class AMD_IMDBProxyMgr_GetCntOtherModifyList : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICECntOtherModInfoSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetCntOtherModifyList> AMD_IMDBProxyMgr_GetCntOtherModifyListPtr;

class AMD_IMDBProxyMgr_GetCntOtherModifyInfo : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICECntOtherModInfo&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetCntOtherModifyInfo> AMD_IMDBProxyMgr_GetCntOtherModifyInfoPtr;

class AMD_IMDBProxyMgr_GetUserCRInfo : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserCRInfo> AMD_IMDBProxyMgr_GetUserCRInfoPtr;

class AMD_IMDBProxyMgr_SetUserCRInfo : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_SetUserCRInfo> AMD_IMDBProxyMgr_SetUserCRInfoPtr;

class AMD_IMDBProxyMgr_GetSmsUserInfoByUid : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICESmsUserInfo&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetSmsUserInfoByUid> AMD_IMDBProxyMgr_GetSmsUserInfoByUidPtr;

class AMD_IMDBProxyMgr_GetSmsUserMsgInfo : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetSmsUserMsgInfo> AMD_IMDBProxyMgr_GetSmsUserMsgInfoPtr;

class AMD_IMDBProxyMgr_DelOfflineMsg : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_DelOfflineMsg> AMD_IMDBProxyMgr_DelOfflineMsgPtr;

class AMD_IMDBProxyMgr_DelOfflineMsgEx : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_DelOfflineMsgEx> AMD_IMDBProxyMgr_DelOfflineMsgExPtr;

class AMD_IMDBProxyMgr_DelWapOfflineMsg : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_DelWapOfflineMsg> AMD_IMDBProxyMgr_DelWapOfflineMsgPtr;

class AMD_IMDBProxyMgr_ModifyCntMemo : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_ModifyCntMemo> AMD_IMDBProxyMgr_ModifyCntMemoPtr;

class AMD_IMDBProxyMgr_GetCntMemo : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetCntMemo> AMD_IMDBProxyMgr_GetCntMemoPtr;

class AMD_IMDBProxyMgr_GetUserTribe : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::ALiIMDBTribe::STribeIdDbSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserTribe> AMD_IMDBProxyMgr_GetUserTribePtr;

class AMD_IMDBProxyMgr_GetUserTribeConfig : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserTribeConfig> AMD_IMDBProxyMgr_GetUserTribeConfigPtr;

class AMD_IMDBProxyMgr_UpdateUserTribeConfig : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserTribeConfig> AMD_IMDBProxyMgr_UpdateUserTribeConfigPtr;

class AMD_IMDBProxyMgr_GetTribeOffMngMsg : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::ALiIMDBTribe::STribeOfflineMsgSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetTribeOffMngMsg> AMD_IMDBProxyMgr_GetTribeOffMngMsgPtr;

class AMD_IMDBProxyMgr_DelTribeOffMngMsg : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_DelTribeOffMngMsg> AMD_IMDBProxyMgr_DelTribeOffMngMsgPtr;

class AMD_IMDBProxyMgr_ModifyPersonalShow : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_ModifyPersonalShow> AMD_IMDBProxyMgr_ModifyPersonalShowPtr;

class AMD_IMDBProxyMgr_GetPersonalShow : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetPersonalShow> AMD_IMDBProxyMgr_GetPersonalShowPtr;

class AMD_IMDBProxyMgr_GetAllOnlineSmsUser : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::Ice::StringSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetAllOnlineSmsUser> AMD_IMDBProxyMgr_GetAllOnlineSmsUserPtr;

class AMD_IMDBProxyMgr_GetUserKeyWordDegree : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Float) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserKeyWordDegree> AMD_IMDBProxyMgr_GetUserKeyWordDegreePtr;

class AMD_IMDBProxyMgr_GetUserValue : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserValue> AMD_IMDBProxyMgr_GetUserValuePtr;

class AMD_IMDBProxyMgr_UpdateUserMd5Password : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserMd5Password> AMD_IMDBProxyMgr_UpdateUserMd5PasswordPtr;

class AMD_IMDBProxyMgr_InsertYahooUser : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_InsertYahooUser> AMD_IMDBProxyMgr_InsertYahooUserPtr;

class AMD_IMDBProxyMgr_GetContactDetailByUid : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEGenContactFull&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetContactDetailByUid> AMD_IMDBProxyMgr_GetContactDetailByUidPtr;

class AMD_IMDBProxyMgr_GetChildTeamList : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SChildUserInfoSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetChildTeamList> AMD_IMDBProxyMgr_GetChildTeamListPtr;

class AMD_IMDBProxyMgr_GetChildTeamList2 : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SChildUserInfoSeq2&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetChildTeamList2> AMD_IMDBProxyMgr_GetChildTeamList2Ptr;

class AMD_IMDBProxyMgr_GetChildUserInfo : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SChildUserInfo&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetChildUserInfo> AMD_IMDBProxyMgr_GetChildUserInfoPtr;

class AMD_IMDBProxyMgr_GetChildUserInfo2 : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SChildUserInfo2&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetChildUserInfo2> AMD_IMDBProxyMgr_GetChildUserInfo2Ptr;

class AMD_IMDBProxyMgr_GetShareContactList : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::Ice::StringSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetShareContactList> AMD_IMDBProxyMgr_GetShareContactListPtr;

class AMD_IMDBProxyMgr_GetContactShareInfo : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetContactShareInfo> AMD_IMDBProxyMgr_GetContactShareInfoPtr;

class AMD_IMDBProxyMgr_SetContactShareInfo : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_SetContactShareInfo> AMD_IMDBProxyMgr_SetContactShareInfoPtr;

class AMD_IMDBProxyMgr_GetMultiAccountContactList : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEContactInfoSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiAccountContactList> AMD_IMDBProxyMgr_GetMultiAccountContactListPtr;

class AMD_IMDBProxyMgr_GetMultiServiceList : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::Ice::IntSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiServiceList> AMD_IMDBProxyMgr_GetMultiServiceListPtr;

class AMD_IMDBProxyMgr_GetMultiBindToUser : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiBindToUser> AMD_IMDBProxyMgr_GetMultiBindToUserPtr;

class AMD_IMDBProxyMgr_GetWebBinds : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEKvPairSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetWebBinds> AMD_IMDBProxyMgr_GetWebBindsPtr;

class AMD_IMDBProxyMgr_AddWebBind : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_AddWebBind> AMD_IMDBProxyMgr_AddWebBindPtr;

class AMD_IMDBProxyMgr_ChangeWebBind : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_ChangeWebBind> AMD_IMDBProxyMgr_ChangeWebBindPtr;

class AMD_IMDBProxyMgr_DelWebBind : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_DelWebBind> AMD_IMDBProxyMgr_DelWebBindPtr;

class AMD_IMDBProxyMgr_getUserSession : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIM::SIceSession&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getUserSession> AMD_IMDBProxyMgr_getUserSessionPtr;

class AMD_IMDBProxyMgr_checkUserSession : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_checkUserSession> AMD_IMDBProxyMgr_checkUserSessionPtr;

class AMD_IMDBProxyMgr_removeSession : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_removeSession> AMD_IMDBProxyMgr_removeSessionPtr;

class AMD_IMDBProxyMgr_UpdateSignature : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateSignature> AMD_IMDBProxyMgr_UpdateSignaturePtr;

class AMD_IMDBProxyMgr_updateContactClientInfo : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_updateContactClientInfo> AMD_IMDBProxyMgr_updateContactClientInfoPtr;

class AMD_IMDBProxyMgr_getUserProfile : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEKVMap&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getUserProfile> AMD_IMDBProxyMgr_getUserProfilePtr;

class AMD_IMDBProxyMgr_getPeerVerifyFlag : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getPeerVerifyFlag> AMD_IMDBProxyMgr_getPeerVerifyFlagPtr;

class AMD_IMDBProxyMgr_getPeerVerifyFlagQuestion : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int, const ::std::string&, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getPeerVerifyFlagQuestion> AMD_IMDBProxyMgr_getPeerVerifyFlagQuestionPtr;

class AMD_IMDBProxyMgr_getNickName : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getNickName> AMD_IMDBProxyMgr_getNickNamePtr;

class AMD_IMDBProxyMgr_getFTServiceInfo : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&, ::Ice::Short) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getFTServiceInfo> AMD_IMDBProxyMgr_getFTServiceInfoPtr;

class AMD_IMDBProxyMgr_getTietuServiceInfo : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int, const ::std::string&, ::Ice::Short) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getTietuServiceInfo> AMD_IMDBProxyMgr_getTietuServiceInfoPtr;

class AMD_IMDBProxyMgr_getFTSAddr : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Long, const ::std::string&, ::Ice::Short) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getFTSAddr> AMD_IMDBProxyMgr_getFTSAddrPtr;

class AMD_IMDBProxyMgr_registerWanghao : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_registerWanghao> AMD_IMDBProxyMgr_registerWanghaoPtr;

class AMD_IMDBProxyMgr_updateUserProfile : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_updateUserProfile> AMD_IMDBProxyMgr_updateUserProfilePtr;

class AMD_IMDBProxyMgr_loadSitePrefix : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SImPrefixSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_loadSitePrefix> AMD_IMDBProxyMgr_loadSitePrefixPtr;

class AMD_IMDBProxyMgr_updateAepUserId : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_updateAepUserId> AMD_IMDBProxyMgr_updateAepUserIdPtr;

class AMD_IMDBProxyMgr_updateVipflag : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_updateVipflag> AMD_IMDBProxyMgr_updateVipflagPtr;

class AMD_IMDBProxyMgr_checkWangHaoPwd : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_checkWangHaoPwd> AMD_IMDBProxyMgr_checkWangHaoPwdPtr;

class AMD_IMDBProxyMgr_checkCanLogin : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_checkCanLogin> AMD_IMDBProxyMgr_checkCanLoginPtr;

class AMD_IMDBProxyMgr_GetSIPSessionId : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_GetSIPSessionId> AMD_IMDBProxyMgr_GetSIPSessionIdPtr;

class AMD_IMDBProxyMgr_CheckGsContact : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_CheckGsContact> AMD_IMDBProxyMgr_CheckGsContactPtr;

class AMD_IMDBProxyMgr_UpdateSmsAuthCode : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateSmsAuthCode> AMD_IMDBProxyMgr_UpdateSmsAuthCodePtr;

class AMD_IMDBProxyMgr_CheckSmsAuthCode : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_CheckSmsAuthCode> AMD_IMDBProxyMgr_CheckSmsAuthCodePtr;

class AMD_IMDBProxyMgr_UpdateUserValueBySmsAuth : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserValueBySmsAuth> AMD_IMDBProxyMgr_UpdateUserValueBySmsAuthPtr;

class AMD_IMDBProxyMgr_CheckSmsAuthStatus : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_CheckSmsAuthStatus> AMD_IMDBProxyMgr_CheckSmsAuthStatusPtr;

class AMD_IMDBProxyMgr_CheckUserTokenExtra : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserTokenExtra> AMD_IMDBProxyMgr_CheckUserTokenExtraPtr;

class AMD_IMDBProxyMgr_CheckUserWebPasswdExtra : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebPasswdExtra> AMD_IMDBProxyMgr_CheckUserWebPasswdExtraPtr;

class AMD_IMDBProxyMgr_getESShuntStatus : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getESShuntStatus> AMD_IMDBProxyMgr_getESShuntStatusPtr;

class AMD_IMDBProxyMgr_setESShuntStatus : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_setESShuntStatus> AMD_IMDBProxyMgr_setESShuntStatusPtr;

class AMD_IMDBProxyMgr_getMaxESReceptNum : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEReceptNumSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getMaxESReceptNum> AMD_IMDBProxyMgr_getMaxESReceptNumPtr;

class AMD_IMDBProxyMgr_setMaxESReceptNum : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_setMaxESReceptNum> AMD_IMDBProxyMgr_setMaxESReceptNumPtr;

class AMD_IMDBProxyMgr_getESPriority : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEReceptPrioritySeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getESPriority> AMD_IMDBProxyMgr_getESPriorityPtr;

class AMD_IMDBProxyMgr_setESPriority : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_setESPriority> AMD_IMDBProxyMgr_setESPriorityPtr;

class AMD_IMDBProxyMgr_getESRecvOffMsg : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICERecvOffMsgSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getESRecvOffMsg> AMD_IMDBProxyMgr_getESRecvOffMsgPtr;

class AMD_IMDBProxyMgr_setESRecvOffMsg : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_setESRecvOffMsg> AMD_IMDBProxyMgr_setESRecvOffMsgPtr;

class AMD_IMDBProxyMgr_getESGroupList : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::Ice::IntSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupList> AMD_IMDBProxyMgr_getESGroupListPtr;

class AMD_IMDBProxyMgr_insertESGroupInfo : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_insertESGroupInfo> AMD_IMDBProxyMgr_insertESGroupInfoPtr;

class AMD_IMDBProxyMgr_updateESGroupInfo : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_updateESGroupInfo> AMD_IMDBProxyMgr_updateESGroupInfoPtr;

class AMD_IMDBProxyMgr_delESGroup : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_delESGroup> AMD_IMDBProxyMgr_delESGroupPtr;

class AMD_IMDBProxyMgr_getESGroupInfo : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEESGroupInfoSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupInfo> AMD_IMDBProxyMgr_getESGroupInfoPtr;

class AMD_IMDBProxyMgr_getESGroupInfoByID : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEESGroupInfo&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupInfoByID> AMD_IMDBProxyMgr_getESGroupInfoByIDPtr;

class AMD_IMDBProxyMgr_getESUserFunc : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getESUserFunc> AMD_IMDBProxyMgr_getESUserFuncPtr;

class AMD_IMDBProxyMgr_getESUnJoinGroup : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::Ice::StringSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getESUnJoinGroup> AMD_IMDBProxyMgr_getESUnJoinGroupPtr;

class AMD_IMDBProxyMgr_checkESRole : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_checkESRole> AMD_IMDBProxyMgr_checkESRolePtr;

class AMD_IMDBProxyMgr_CheckWebWWPasswd : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_CheckWebWWPasswd> AMD_IMDBProxyMgr_CheckWebWWPasswdPtr;

class AMD_IMDBProxyMgr_getESExpandArea : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEExpandAreaSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getESExpandArea> AMD_IMDBProxyMgr_getESExpandAreaPtr;

class AMD_IMDBProxyMgr_getESExpandAreaById : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEExpandArea&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getESExpandAreaById> AMD_IMDBProxyMgr_getESExpandAreaByIdPtr;

class AMD_IMDBProxyMgr_addESExpandArea : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_addESExpandArea> AMD_IMDBProxyMgr_addESExpandAreaPtr;

class AMD_IMDBProxyMgr_updateESExpandArea : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_updateESExpandArea> AMD_IMDBProxyMgr_updateESExpandAreaPtr;

class AMD_IMDBProxyMgr_delESExpandArea : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_delESExpandArea> AMD_IMDBProxyMgr_delESExpandAreaPtr;

class AMD_IMDBProxyMgr_setESEval : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_setESEval> AMD_IMDBProxyMgr_setESEvalPtr;

class AMD_IMDBProxyMgr_getESEval : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getESEval> AMD_IMDBProxyMgr_getESEvalPtr;

class AMD_IMDBProxyMgr_sendESEvalResult : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_sendESEvalResult> AMD_IMDBProxyMgr_sendESEvalResultPtr;

class AMD_IMDBProxyMgr_setESEvalResult : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_setESEvalResult> AMD_IMDBProxyMgr_setESEvalResultPtr;

class AMD_IMDBProxyMgr_getESEvalResult : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&, const ::std::string&, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResult> AMD_IMDBProxyMgr_getESEvalResultPtr;

class AMD_IMDBProxyMgr_getESEvalResultToday : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEESEvalResultSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultToday> AMD_IMDBProxyMgr_getESEvalResultTodayPtr;

class AMD_IMDBProxyMgr_getESEvalResultHistory : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEESEvalResultSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultHistory> AMD_IMDBProxyMgr_getESEvalResultHistoryPtr;

class AMD_IMDBProxyMgr_getESEvalResultHistorybypage : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, ::Ice::Int, const ::AliIMDBBase::SICEESEvalResultExSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultHistorybypage> AMD_IMDBProxyMgr_getESEvalResultHistorybypagePtr;

class AMD_IMDBProxyMgr_getLastLoginTime : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::Ice::StringSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getLastLoginTime> AMD_IMDBProxyMgr_getLastLoginTimePtr;

class AMD_IMDBProxyMgr_getChildShuntInfos : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SChildUserInfoSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getChildShuntInfos> AMD_IMDBProxyMgr_getChildShuntInfosPtr;

class AMD_IMDBProxyMgr_setChildShuntInfos : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_setChildShuntInfos> AMD_IMDBProxyMgr_setChildShuntInfosPtr;

class AMD_IMDBProxyMgr_getAgentChild : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getAgentChild> AMD_IMDBProxyMgr_getAgentChildPtr;

class AMD_IMDBProxyMgr_setAgentChild : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_setAgentChild> AMD_IMDBProxyMgr_setAgentChildPtr;

class AMD_IMDBProxyMgr_getAgentList : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::Ice::StringSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getAgentList> AMD_IMDBProxyMgr_getAgentListPtr;

class AMD_IMDBProxyMgr_getB2BChildTeamList : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SB2BChildUserInfoSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildTeamList> AMD_IMDBProxyMgr_getB2BChildTeamListPtr;

class AMD_IMDBProxyMgr_getB2BChildInfo : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SB2BChildUserInfo&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildInfo> AMD_IMDBProxyMgr_getB2BChildInfoPtr;

class AMD_IMDBProxyMgr_getB2BChildParentId : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int, const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildParentId> AMD_IMDBProxyMgr_getB2BChildParentIdPtr;

class AMD_IMDBProxyMgr_addB2BChild : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_addB2BChild> AMD_IMDBProxyMgr_addB2BChildPtr;

class AMD_IMDBProxyMgr_updateB2BChild : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_updateB2BChild> AMD_IMDBProxyMgr_updateB2BChildPtr;

class AMD_IMDBProxyMgr_deleteB2BChild : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::AliIMDBBase::AMD_IMDBProxyMgr_deleteB2BChild> AMD_IMDBProxyMgr_deleteB2BChildPtr;

}

namespace IceAsync
{

namespace AliIMDBBase
{

class AMD_IMDBProxyMgr_sayhello : public ::AliIMDBBase::AMD_IMDBProxyMgr_sayhello, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_sayhello(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_CheckUserToken : public ::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserToken, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_CheckUserToken(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_CheckTmpSession : public ::AliIMDBBase::AMD_IMDBProxyMgr_CheckTmpSession, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_CheckTmpSession(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_CheckUserWebPasswd : public ::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebPasswd, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_CheckUserWebPasswd(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_CheckUserPasswd : public ::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserPasswd, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_CheckUserPasswd(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&, const ::std::string&, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_CheckUserWebToken : public ::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebToken, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_CheckUserWebToken(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetAtmLongid : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetAtmLongid, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetAtmLongid(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_AddUser60 : public ::AliIMDBBase::AMD_IMDBProxyMgr_AddUser60, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_AddUser60(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetWebMemberPWInfo : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetWebMemberPWInfo, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetWebMemberPWInfo(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SMemberPWInfo&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetWebMemberPWInfoEx : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetWebMemberPWInfoEx, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetWebMemberPWInfoEx(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SMemberPWInfoEx&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetUserWebBasicProfile : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserWebBasicProfile, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetUserWebBasicProfile(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SUserWebBasicProfile&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_CheckCanAddContact : public ::AliIMDBBase::AMD_IMDBProxyMgr_CheckCanAddContact, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_CheckCanAddContact(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_QueryMatchedUserIds : public ::AliIMDBBase::AMD_IMDBProxyMgr_QueryMatchedUserIds, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_QueryMatchedUserIds(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SMatchedUserIdInfoSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpdateContactWebInfo : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactWebInfo, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpdateContactWebInfo(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_DelTaobaoUser : public ::AliIMDBBase::AMD_IMDBProxyMgr_DelTaobaoUser, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_DelTaobaoUser(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_DelAnyUser : public ::AliIMDBBase::AMD_IMDBProxyMgr_DelAnyUser, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_DelAnyUser(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_AddUserKeyWord : public ::AliIMDBBase::AMD_IMDBProxyMgr_AddUserKeyWord, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_AddUserKeyWord(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpdateUserKeyWord : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserKeyWord, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpdateUserKeyWord(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetUserKeyWord : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserKeyWord, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetUserKeyWord(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_QueryUserIdsByKeyWord : public ::AliIMDBBase::AMD_IMDBProxyMgr_QueryUserIdsByKeyWord, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_QueryUserIdsByKeyWord(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SMatchedUserIdInfoSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetBatchMemberInfo : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetBatchMemberInfo, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetBatchMemberInfo(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEMemberInfoSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetAllVersion : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetAllVersion, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetAllVersion(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEVersionSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetAllSysMsg : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetAllSysMsg, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetAllSysMsg(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICESysMessageSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetAllExSysMsg : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetAllExSysMsg, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetAllExSysMsg(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SExICESysMessageSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetUserInfo : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfo, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetUserInfo(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEUserInfo&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetUserInfo2 : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfo2, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetUserInfo2(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEUserInfo2&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetUserInfoEx : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoEx, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetUserInfoEx(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEUserInfoEx&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetUserInfoNew : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoNew, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetUserInfoNew(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEUserInfoNew&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetUserInfo2New : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfo2New, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetUserInfo2New(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEUserInfo2New&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetUserInfoExNew : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetUserInfoExNew(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEUserInfoExNew&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetUserInfoExNew2 : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew2, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetUserInfoExNew2(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEUserInfoExNew2&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetUserInfoExNew3 : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew3, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetUserInfoExNew3(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEUserInfoExNew3&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetUserInfoExNew4 : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew4, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetUserInfoExNew4(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEUserInfoExNew4&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetUserVerifyInfo : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfo, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetUserVerifyInfo(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Byte, ::Ice::Byte);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetUserVerifyInfoEx : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfoEx, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetUserVerifyInfoEx(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Byte, ::Ice::Byte, ::Ice::Byte);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetUserVerifyInfoQuestion : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfoQuestion, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetUserVerifyInfoQuestion(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Byte, ::Ice::Byte, ::Ice::Byte, const ::std::string&, const ::std::string&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetGroupList : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetGroupList, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetGroupList(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEGroupInfoSeq&, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetGroupListEx : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetGroupListEx, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetGroupListEx(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEGroupInfoExSeq&, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetContactList : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetContactList, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetContactList(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEContactInfoSeq&, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetBlackList : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetBlackList, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetBlackList(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::Ice::StringSeq&, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetReverseBlackList : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetReverseBlackList, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetReverseBlackList(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::Ice::StringSeq&, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetOfflineMsg : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsg, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetOfflineMsg(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEOffLineMessegeSeq&, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetOfflineMsgEx : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgEx, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetOfflineMsgEx(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEOffLineMessegeExSeq&, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetOfflineMsgCount : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgCount, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetOfflineMsgCount(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetEnetOfflineMsgNum : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetEnetOfflineMsgNum, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetEnetOfflineMsgNum(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetContactInfo : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetContactInfo, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetContactInfo(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEContactInfo&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetOfflineMsgNum : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgNum, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetOfflineMsgNum(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetToolProfiles : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetToolProfiles, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetToolProfiles(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::Ice::StringSeq&, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetToolProfilesEx : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetToolProfilesEx, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetToolProfilesEx(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEToolProfileSeq&, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetSysMsg : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetSysMsg, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetSysMsg(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICESysMessage&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_AddUser : public ::AliIMDBBase::AMD_IMDBProxyMgr_AddUser, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_AddUser(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_AddGroup : public ::AliIMDBBase::AMD_IMDBProxyMgr_AddGroup, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_AddGroup(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_AddGroupEx : public ::AliIMDBBase::AMD_IMDBProxyMgr_AddGroupEx, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_AddGroupEx(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_AddBlackList : public ::AliIMDBBase::AMD_IMDBProxyMgr_AddBlackList, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_AddBlackList(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_AddOfflineMsg : public ::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsg, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_AddOfflineMsg(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_AddExpriteTimeOfflineMsg : public ::AliIMDBBase::AMD_IMDBProxyMgr_AddExpriteTimeOfflineMsg, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_AddExpriteTimeOfflineMsg(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_AddOfflineMsgNoSMS : public ::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsgNoSMS, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_AddOfflineMsgNoSMS(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_AddOfflineMsgEx : public ::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsgEx, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_AddOfflineMsgEx(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpdateUserLogin : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLogin, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpdateUserLogin(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpdateUserLoginEx : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginEx, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpdateUserLoginEx(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpdateUserLoginDataInfo : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginDataInfo, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpdateUserLoginDataInfo(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpdateUserLoginDataInfoEx : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginDataInfoEx, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpdateUserLoginDataInfoEx(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpdateUserSysMsgId : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserSysMsgId, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpdateUserSysMsgId(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpdateUserDataInfo : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfo, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpdateUserDataInfo(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpdateUserDataInfo2 : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfo2, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpdateUserDataInfo2(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpdateUserDataInfo3 : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfo3, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpdateUserDataInfo3(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpdateUserVerifySet : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySet, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpdateUserVerifySet(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpdateUserVerifySetEx : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySetEx, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpdateUserVerifySetEx(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpdateUserVerifySetQuestion : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySetQuestion, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpdateUserVerifySetQuestion(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpdateGroup : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateGroup, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpdateGroup(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_MoveGroup : public ::AliIMDBBase::AMD_IMDBProxyMgr_MoveGroup, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_MoveGroup(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpdateContactNickName : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactNickName, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpdateContactNickName(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpdateContactGroup : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactGroup, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpdateContactGroup(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpdateContactStatus : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactStatus, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpdateContactStatus(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpdateNotifyMessage : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateNotifyMessage, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpdateNotifyMessage(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpdateToolProfiles : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateToolProfiles, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpdateToolProfiles(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpdateToolProfilesEx : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateToolProfilesEx, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpdateToolProfilesEx(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_RemoveGroup : public ::AliIMDBBase::AMD_IMDBProxyMgr_RemoveGroup, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_RemoveGroup(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_RemoveContact : public ::AliIMDBBase::AMD_IMDBProxyMgr_RemoveContact, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_RemoveContact(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_RemoveInverfiedContact : public ::AliIMDBBase::AMD_IMDBProxyMgr_RemoveInverfiedContact, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_RemoveInverfiedContact(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_RemoveBlackList : public ::AliIMDBBase::AMD_IMDBProxyMgr_RemoveBlackList, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_RemoveBlackList(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_IsBlackedByOther : public ::AliIMDBBase::AMD_IMDBProxyMgr_IsBlackedByOther, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_IsBlackedByOther(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, bool);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_RemoveBatchContacts : public ::AliIMDBBase::AMD_IMDBProxyMgr_RemoveBatchContacts, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_RemoveBatchContacts(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::Ice::StringSeq&, ::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetUserDStatus : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserDStatus, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetUserDStatus(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEUserDStatusSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_AddUserDStatus : public ::AliIMDBBase::AMD_IMDBProxyMgr_AddUserDStatus, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_AddUserDStatus(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_RemoveUserDStatus : public ::AliIMDBBase::AMD_IMDBProxyMgr_RemoveUserDStatus, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_RemoveUserDStatus(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetAllContactList : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetAllContactList, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetAllContactList(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEContactInfoSeq&, ::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetCntModifyList : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetCntModifyList, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetCntModifyList(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICECntCidModPairSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_AddGenContactFull : public ::AliIMDBBase::AMD_IMDBProxyMgr_AddGenContactFull, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_AddGenContactFull(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&, const ::std::string&, ::Ice::Long);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetContactDetail : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetContactDetail, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetContactDetail(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEGenContactFull&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_DelGenContact : public ::AliIMDBBase::AMD_IMDBProxyMgr_DelGenContact, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_DelGenContact(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Long);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_AddContact : public ::AliIMDBBase::AMD_IMDBProxyMgr_AddContact, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_AddContact(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int, const ::std::string&, const ::std::string&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_CheckUpgradeGenCnt : public ::AliIMDBBase::AMD_IMDBProxyMgr_CheckUpgradeGenCnt, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_CheckUpgradeGenCnt(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_ModifyGenCntID : public ::AliIMDBBase::AMD_IMDBProxyMgr_ModifyGenCntID, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_ModifyGenCntID(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpgradeGenContact : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpgradeGenContact, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpgradeGenContact(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Long, ::Ice::Long, const ::std::string&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetUpdatedUserInfo : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetUpdatedUserInfo, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetUpdatedUserInfo(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Long, ::Ice::Long, const ::std::string&, const ::std::string&, ::Ice::Long, const ::std::string&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_ModifyContactDetail : public ::AliIMDBBase::AMD_IMDBProxyMgr_ModifyContactDetail, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_ModifyContactDetail(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Long, const ::std::string&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpdateContactGroupByCid : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactGroupByCid, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpdateContactGroupByCid(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpdateContactNickNameByCid : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactNickNameByCid, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpdateContactNickNameByCid(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetCRMContactDetail : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetCRMContactDetail, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetCRMContactDetail(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICECRMContactDetail&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetHardCodeIds : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetHardCodeIds, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetHardCodeIds(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int, const ::std::string&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpdateHardCodeIds : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateHardCodeIds, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpdateHardCodeIds(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetCntOtherModifyList : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetCntOtherModifyList, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetCntOtherModifyList(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICECntOtherModInfoSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetCntOtherModifyInfo : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetCntOtherModifyInfo, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetCntOtherModifyInfo(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICECntOtherModInfo&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetUserCRInfo : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserCRInfo, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetUserCRInfo(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_SetUserCRInfo : public ::AliIMDBBase::AMD_IMDBProxyMgr_SetUserCRInfo, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_SetUserCRInfo(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetSmsUserInfoByUid : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetSmsUserInfoByUid, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetSmsUserInfoByUid(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICESmsUserInfo&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetSmsUserMsgInfo : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetSmsUserMsgInfo, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetSmsUserMsgInfo(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_DelOfflineMsg : public ::AliIMDBBase::AMD_IMDBProxyMgr_DelOfflineMsg, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_DelOfflineMsg(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_DelOfflineMsgEx : public ::AliIMDBBase::AMD_IMDBProxyMgr_DelOfflineMsgEx, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_DelOfflineMsgEx(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_DelWapOfflineMsg : public ::AliIMDBBase::AMD_IMDBProxyMgr_DelWapOfflineMsg, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_DelWapOfflineMsg(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_ModifyCntMemo : public ::AliIMDBBase::AMD_IMDBProxyMgr_ModifyCntMemo, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_ModifyCntMemo(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetCntMemo : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetCntMemo, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetCntMemo(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetUserTribe : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserTribe, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetUserTribe(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::ALiIMDBTribe::STribeIdDbSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetUserTribeConfig : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserTribeConfig, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetUserTribeConfig(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpdateUserTribeConfig : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserTribeConfig, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpdateUserTribeConfig(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetTribeOffMngMsg : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetTribeOffMngMsg, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetTribeOffMngMsg(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::ALiIMDBTribe::STribeOfflineMsgSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_DelTribeOffMngMsg : public ::AliIMDBBase::AMD_IMDBProxyMgr_DelTribeOffMngMsg, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_DelTribeOffMngMsg(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_ModifyPersonalShow : public ::AliIMDBBase::AMD_IMDBProxyMgr_ModifyPersonalShow, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_ModifyPersonalShow(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetPersonalShow : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetPersonalShow, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetPersonalShow(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetAllOnlineSmsUser : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetAllOnlineSmsUser, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetAllOnlineSmsUser(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::Ice::StringSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetUserKeyWordDegree : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserKeyWordDegree, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetUserKeyWordDegree(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Float);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetUserValue : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserValue, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetUserValue(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpdateUserMd5Password : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserMd5Password, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpdateUserMd5Password(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_InsertYahooUser : public ::AliIMDBBase::AMD_IMDBProxyMgr_InsertYahooUser, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_InsertYahooUser(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetContactDetailByUid : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetContactDetailByUid, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetContactDetailByUid(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEGenContactFull&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetChildTeamList : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetChildTeamList, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetChildTeamList(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SChildUserInfoSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetChildTeamList2 : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetChildTeamList2, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetChildTeamList2(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SChildUserInfoSeq2&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetChildUserInfo : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetChildUserInfo, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetChildUserInfo(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SChildUserInfo&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetChildUserInfo2 : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetChildUserInfo2, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetChildUserInfo2(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SChildUserInfo2&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetShareContactList : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetShareContactList, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetShareContactList(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::Ice::StringSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetContactShareInfo : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetContactShareInfo, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetContactShareInfo(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_SetContactShareInfo : public ::AliIMDBBase::AMD_IMDBProxyMgr_SetContactShareInfo, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_SetContactShareInfo(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetMultiAccountContactList : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiAccountContactList, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetMultiAccountContactList(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEContactInfoSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetMultiServiceList : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiServiceList, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetMultiServiceList(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::Ice::IntSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetMultiBindToUser : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiBindToUser, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetMultiBindToUser(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetWebBinds : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetWebBinds, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetWebBinds(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEKvPairSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_AddWebBind : public ::AliIMDBBase::AMD_IMDBProxyMgr_AddWebBind, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_AddWebBind(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_ChangeWebBind : public ::AliIMDBBase::AMD_IMDBProxyMgr_ChangeWebBind, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_ChangeWebBind(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_DelWebBind : public ::AliIMDBBase::AMD_IMDBProxyMgr_DelWebBind, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_DelWebBind(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getUserSession : public ::AliIMDBBase::AMD_IMDBProxyMgr_getUserSession, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getUserSession(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIM::SIceSession&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_checkUserSession : public ::AliIMDBBase::AMD_IMDBProxyMgr_checkUserSession, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_checkUserSession(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_removeSession : public ::AliIMDBBase::AMD_IMDBProxyMgr_removeSession, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_removeSession(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpdateSignature : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateSignature, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpdateSignature(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_updateContactClientInfo : public ::AliIMDBBase::AMD_IMDBProxyMgr_updateContactClientInfo, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_updateContactClientInfo(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getUserProfile : public ::AliIMDBBase::AMD_IMDBProxyMgr_getUserProfile, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getUserProfile(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEKVMap&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getPeerVerifyFlag : public ::AliIMDBBase::AMD_IMDBProxyMgr_getPeerVerifyFlag, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getPeerVerifyFlag(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getPeerVerifyFlagQuestion : public ::AliIMDBBase::AMD_IMDBProxyMgr_getPeerVerifyFlagQuestion, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getPeerVerifyFlagQuestion(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int, const ::std::string&, const ::std::string&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getNickName : public ::AliIMDBBase::AMD_IMDBProxyMgr_getNickName, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getNickName(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getFTServiceInfo : public ::AliIMDBBase::AMD_IMDBProxyMgr_getFTServiceInfo, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getFTServiceInfo(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&, ::Ice::Short);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getTietuServiceInfo : public ::AliIMDBBase::AMD_IMDBProxyMgr_getTietuServiceInfo, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getTietuServiceInfo(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int, const ::std::string&, ::Ice::Short);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getFTSAddr : public ::AliIMDBBase::AMD_IMDBProxyMgr_getFTSAddr, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getFTSAddr(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Long, const ::std::string&, ::Ice::Short);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_registerWanghao : public ::AliIMDBBase::AMD_IMDBProxyMgr_registerWanghao, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_registerWanghao(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_updateUserProfile : public ::AliIMDBBase::AMD_IMDBProxyMgr_updateUserProfile, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_updateUserProfile(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_loadSitePrefix : public ::AliIMDBBase::AMD_IMDBProxyMgr_loadSitePrefix, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_loadSitePrefix(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SImPrefixSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_updateAepUserId : public ::AliIMDBBase::AMD_IMDBProxyMgr_updateAepUserId, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_updateAepUserId(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_updateVipflag : public ::AliIMDBBase::AMD_IMDBProxyMgr_updateVipflag, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_updateVipflag(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_checkWangHaoPwd : public ::AliIMDBBase::AMD_IMDBProxyMgr_checkWangHaoPwd, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_checkWangHaoPwd(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_checkCanLogin : public ::AliIMDBBase::AMD_IMDBProxyMgr_checkCanLogin, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_checkCanLogin(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_GetSIPSessionId : public ::AliIMDBBase::AMD_IMDBProxyMgr_GetSIPSessionId, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_GetSIPSessionId(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_CheckGsContact : public ::AliIMDBBase::AMD_IMDBProxyMgr_CheckGsContact, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_CheckGsContact(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpdateSmsAuthCode : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateSmsAuthCode, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpdateSmsAuthCode(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_CheckSmsAuthCode : public ::AliIMDBBase::AMD_IMDBProxyMgr_CheckSmsAuthCode, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_CheckSmsAuthCode(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_UpdateUserValueBySmsAuth : public ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserValueBySmsAuth, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_UpdateUserValueBySmsAuth(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_CheckSmsAuthStatus : public ::AliIMDBBase::AMD_IMDBProxyMgr_CheckSmsAuthStatus, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_CheckSmsAuthStatus(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_CheckUserTokenExtra : public ::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserTokenExtra, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_CheckUserTokenExtra(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_CheckUserWebPasswdExtra : public ::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebPasswdExtra, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_CheckUserWebPasswdExtra(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getESShuntStatus : public ::AliIMDBBase::AMD_IMDBProxyMgr_getESShuntStatus, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getESShuntStatus(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_setESShuntStatus : public ::AliIMDBBase::AMD_IMDBProxyMgr_setESShuntStatus, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_setESShuntStatus(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getMaxESReceptNum : public ::AliIMDBBase::AMD_IMDBProxyMgr_getMaxESReceptNum, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getMaxESReceptNum(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEReceptNumSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_setMaxESReceptNum : public ::AliIMDBBase::AMD_IMDBProxyMgr_setMaxESReceptNum, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_setMaxESReceptNum(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getESPriority : public ::AliIMDBBase::AMD_IMDBProxyMgr_getESPriority, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getESPriority(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEReceptPrioritySeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_setESPriority : public ::AliIMDBBase::AMD_IMDBProxyMgr_setESPriority, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_setESPriority(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getESRecvOffMsg : public ::AliIMDBBase::AMD_IMDBProxyMgr_getESRecvOffMsg, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getESRecvOffMsg(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICERecvOffMsgSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_setESRecvOffMsg : public ::AliIMDBBase::AMD_IMDBProxyMgr_setESRecvOffMsg, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_setESRecvOffMsg(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getESGroupList : public ::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupList, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getESGroupList(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::Ice::IntSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_insertESGroupInfo : public ::AliIMDBBase::AMD_IMDBProxyMgr_insertESGroupInfo, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_insertESGroupInfo(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_updateESGroupInfo : public ::AliIMDBBase::AMD_IMDBProxyMgr_updateESGroupInfo, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_updateESGroupInfo(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_delESGroup : public ::AliIMDBBase::AMD_IMDBProxyMgr_delESGroup, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_delESGroup(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getESGroupInfo : public ::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupInfo, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getESGroupInfo(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEESGroupInfoSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getESGroupInfoByID : public ::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupInfoByID, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getESGroupInfoByID(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEESGroupInfo&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getESUserFunc : public ::AliIMDBBase::AMD_IMDBProxyMgr_getESUserFunc, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getESUserFunc(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getESUnJoinGroup : public ::AliIMDBBase::AMD_IMDBProxyMgr_getESUnJoinGroup, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getESUnJoinGroup(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::Ice::StringSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_checkESRole : public ::AliIMDBBase::AMD_IMDBProxyMgr_checkESRole, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_checkESRole(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_CheckWebWWPasswd : public ::AliIMDBBase::AMD_IMDBProxyMgr_CheckWebWWPasswd, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_CheckWebWWPasswd(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getESExpandArea : public ::AliIMDBBase::AMD_IMDBProxyMgr_getESExpandArea, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getESExpandArea(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEExpandAreaSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getESExpandAreaById : public ::AliIMDBBase::AMD_IMDBProxyMgr_getESExpandAreaById, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getESExpandAreaById(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEExpandArea&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_addESExpandArea : public ::AliIMDBBase::AMD_IMDBProxyMgr_addESExpandArea, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_addESExpandArea(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_updateESExpandArea : public ::AliIMDBBase::AMD_IMDBProxyMgr_updateESExpandArea, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_updateESExpandArea(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_delESExpandArea : public ::AliIMDBBase::AMD_IMDBProxyMgr_delESExpandArea, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_delESExpandArea(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_setESEval : public ::AliIMDBBase::AMD_IMDBProxyMgr_setESEval, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_setESEval(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getESEval : public ::AliIMDBBase::AMD_IMDBProxyMgr_getESEval, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getESEval(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&, const ::std::string&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_sendESEvalResult : public ::AliIMDBBase::AMD_IMDBProxyMgr_sendESEvalResult, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_sendESEvalResult(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_setESEvalResult : public ::AliIMDBBase::AMD_IMDBProxyMgr_setESEvalResult, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_setESEvalResult(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getESEvalResult : public ::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResult, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getESEvalResult(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&, const ::std::string&, const ::std::string&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getESEvalResultToday : public ::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultToday, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getESEvalResultToday(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEESEvalResultSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getESEvalResultHistory : public ::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultHistory, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getESEvalResultHistory(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SICEESEvalResultSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getESEvalResultHistorybypage : public ::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultHistorybypage, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getESEvalResultHistorybypage(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, ::Ice::Int, const ::AliIMDBBase::SICEESEvalResultExSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getLastLoginTime : public ::AliIMDBBase::AMD_IMDBProxyMgr_getLastLoginTime, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getLastLoginTime(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::Ice::StringSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getChildShuntInfos : public ::AliIMDBBase::AMD_IMDBProxyMgr_getChildShuntInfos, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getChildShuntInfos(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SChildUserInfoSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_setChildShuntInfos : public ::AliIMDBBase::AMD_IMDBProxyMgr_setChildShuntInfos, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_setChildShuntInfos(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getAgentChild : public ::AliIMDBBase::AMD_IMDBProxyMgr_getAgentChild, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getAgentChild(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_setAgentChild : public ::AliIMDBBase::AMD_IMDBProxyMgr_setAgentChild, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_setAgentChild(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getAgentList : public ::AliIMDBBase::AMD_IMDBProxyMgr_getAgentList, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getAgentList(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::Ice::StringSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getB2BChildTeamList : public ::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildTeamList, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getB2BChildTeamList(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SB2BChildUserInfoSeq&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getB2BChildInfo : public ::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildInfo, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getB2BChildInfo(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::AliIMDBBase::SB2BChildUserInfo&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_getB2BChildParentId : public ::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildParentId, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_getB2BChildParentId(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int, const ::std::string&);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_addB2BChild : public ::AliIMDBBase::AMD_IMDBProxyMgr_addB2BChild, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_addB2BChild(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_updateB2BChild : public ::AliIMDBBase::AMD_IMDBProxyMgr_updateB2BChild, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_updateB2BChild(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMDBProxyMgr_deleteB2BChild : public ::AliIMDBBase::AMD_IMDBProxyMgr_deleteB2BChild, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMDBProxyMgr_deleteB2BChild(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::Ice::Exception&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

}

}

namespace IceProxy
{

namespace AliIMDBBase
{

class IMDBProxyMgr : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int sayhello(const ::std::string& userId, ::std::string& helloword)
    {
        return sayhello(userId, helloword, 0);
    }
    ::Ice::Int sayhello(const ::std::string& userId, ::std::string& helloword, const ::Ice::Context& __ctx)
    {
        return sayhello(userId, helloword, &__ctx);
    }
    
private:

    ::Ice::Int sayhello(const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int CheckUserToken(const ::std::string& userId, const ::std::string& passwd, ::std::string& lid, ::std::string& retuidtokenpw, ::std::string& retmd5passwd, ::Ice::Int& activeStat)
    {
        return CheckUserToken(userId, passwd, lid, retuidtokenpw, retmd5passwd, activeStat, 0);
    }
    ::Ice::Int CheckUserToken(const ::std::string& userId, const ::std::string& passwd, ::std::string& lid, ::std::string& retuidtokenpw, ::std::string& retmd5passwd, ::Ice::Int& activeStat, const ::Ice::Context& __ctx)
    {
        return CheckUserToken(userId, passwd, lid, retuidtokenpw, retmd5passwd, activeStat, &__ctx);
    }
    
private:

    ::Ice::Int CheckUserToken(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int CheckTmpSession(const ::std::string& userId, const ::std::string& passwd, ::std::string& lid, ::std::string& retuidtokenpw, ::std::string& retmd5passwd, ::Ice::Int& activeStat)
    {
        return CheckTmpSession(userId, passwd, lid, retuidtokenpw, retmd5passwd, activeStat, 0);
    }
    ::Ice::Int CheckTmpSession(const ::std::string& userId, const ::std::string& passwd, ::std::string& lid, ::std::string& retuidtokenpw, ::std::string& retmd5passwd, ::Ice::Int& activeStat, const ::Ice::Context& __ctx)
    {
        return CheckTmpSession(userId, passwd, lid, retuidtokenpw, retmd5passwd, activeStat, &__ctx);
    }
    
private:

    ::Ice::Int CheckTmpSession(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int CheckUserWebPasswd(const ::std::string& userId, const ::std::string& passwd, ::std::string& lid, ::std::string& retuidtokenpw, ::std::string& retmd5passwd, ::Ice::Int& activeStat)
    {
        return CheckUserWebPasswd(userId, passwd, lid, retuidtokenpw, retmd5passwd, activeStat, 0);
    }
    ::Ice::Int CheckUserWebPasswd(const ::std::string& userId, const ::std::string& passwd, ::std::string& lid, ::std::string& retuidtokenpw, ::std::string& retmd5passwd, ::Ice::Int& activeStat, const ::Ice::Context& __ctx)
    {
        return CheckUserWebPasswd(userId, passwd, lid, retuidtokenpw, retmd5passwd, activeStat, &__ctx);
    }
    
private:

    ::Ice::Int CheckUserWebPasswd(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int CheckUserPasswd(const ::std::string& userId, bool btokenpw, const ::std::string& passwd, ::std::string& retuidtokenpw, ::std::string& retmd5passwd, ::Ice::Int& activeStat)
    {
        return CheckUserPasswd(userId, btokenpw, passwd, retuidtokenpw, retmd5passwd, activeStat, 0);
    }
    ::Ice::Int CheckUserPasswd(const ::std::string& userId, bool btokenpw, const ::std::string& passwd, ::std::string& retuidtokenpw, ::std::string& retmd5passwd, ::Ice::Int& activeStat, const ::Ice::Context& __ctx)
    {
        return CheckUserPasswd(userId, btokenpw, passwd, retuidtokenpw, retmd5passwd, activeStat, &__ctx);
    }
    
private:

    ::Ice::Int CheckUserPasswd(const ::std::string&, bool, const ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int CheckUserWebToken(const ::std::string& userId, const ::std::string& token, ::std::string& reason)
    {
        return CheckUserWebToken(userId, token, reason, 0);
    }
    ::Ice::Int CheckUserWebToken(const ::std::string& userId, const ::std::string& token, ::std::string& reason, const ::Ice::Context& __ctx)
    {
        return CheckUserWebToken(userId, token, reason, &__ctx);
    }
    
private:

    ::Ice::Int CheckUserWebToken(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetAtmLongid(const ::std::string& userId, ::std::string& longId)
    {
        return GetAtmLongid(userId, longId, 0);
    }
    ::Ice::Int GetAtmLongid(const ::std::string& userId, ::std::string& longId, const ::Ice::Context& __ctx)
    {
        return GetAtmLongid(userId, longId, &__ctx);
    }
    
private:

    ::Ice::Int GetAtmLongid(const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddUser60(const ::std::string& userId, const ::std::string& md5passwd, const ::std::string& tokenpw, ::Ice::Int languageid)
    {
        return AddUser60(userId, md5passwd, tokenpw, languageid, 0);
    }
    ::Ice::Int AddUser60(const ::std::string& userId, const ::std::string& md5passwd, const ::std::string& tokenpw, ::Ice::Int languageid, const ::Ice::Context& __ctx)
    {
        return AddUser60(userId, md5passwd, tokenpw, languageid, &__ctx);
    }
    
private:

    ::Ice::Int AddUser60(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int GetWebMemberPWInfo(const ::std::string& userId, ::AliIMDBBase::SMemberPWInfo& pwInfo)
    {
        return GetWebMemberPWInfo(userId, pwInfo, 0);
    }
    ::Ice::Int GetWebMemberPWInfo(const ::std::string& userId, ::AliIMDBBase::SMemberPWInfo& pwInfo, const ::Ice::Context& __ctx)
    {
        return GetWebMemberPWInfo(userId, pwInfo, &__ctx);
    }
    
private:

    ::Ice::Int GetWebMemberPWInfo(const ::std::string&, ::AliIMDBBase::SMemberPWInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetWebMemberPWInfoEx(const ::std::string& userId, ::AliIMDBBase::SMemberPWInfoEx& pwInfo)
    {
        return GetWebMemberPWInfoEx(userId, pwInfo, 0);
    }
    ::Ice::Int GetWebMemberPWInfoEx(const ::std::string& userId, ::AliIMDBBase::SMemberPWInfoEx& pwInfo, const ::Ice::Context& __ctx)
    {
        return GetWebMemberPWInfoEx(userId, pwInfo, &__ctx);
    }
    
private:

    ::Ice::Int GetWebMemberPWInfoEx(const ::std::string&, ::AliIMDBBase::SMemberPWInfoEx&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUserWebBasicProfile(const ::std::string& userId, ::AliIMDBBase::SUserWebBasicProfile& profile)
    {
        return GetUserWebBasicProfile(userId, profile, 0);
    }
    ::Ice::Int GetUserWebBasicProfile(const ::std::string& userId, ::AliIMDBBase::SUserWebBasicProfile& profile, const ::Ice::Context& __ctx)
    {
        return GetUserWebBasicProfile(userId, profile, &__ctx);
    }
    
private:

    ::Ice::Int GetUserWebBasicProfile(const ::std::string&, ::AliIMDBBase::SUserWebBasicProfile&, const ::Ice::Context*);
    
public:

    ::Ice::Int CheckCanAddContact(const ::std::string& userId, const ::std::string& buddyId)
    {
        return CheckCanAddContact(userId, buddyId, 0);
    }
    ::Ice::Int CheckCanAddContact(const ::std::string& userId, const ::std::string& buddyId, const ::Ice::Context& __ctx)
    {
        return CheckCanAddContact(userId, buddyId, &__ctx);
    }
    
private:

    ::Ice::Int CheckCanAddContact(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int QueryMatchedUserIds(const ::std::string& finduid, const ::std::string& shortId, ::AliIMDBBase::SMatchedUserIdInfoSeq& matchedIds)
    {
        return QueryMatchedUserIds(finduid, shortId, matchedIds, 0);
    }
    ::Ice::Int QueryMatchedUserIds(const ::std::string& finduid, const ::std::string& shortId, ::AliIMDBBase::SMatchedUserIdInfoSeq& matchedIds, const ::Ice::Context& __ctx)
    {
        return QueryMatchedUserIds(finduid, shortId, matchedIds, &__ctx);
    }
    
private:

    ::Ice::Int QueryMatchedUserIds(const ::std::string&, const ::std::string&, ::AliIMDBBase::SMatchedUserIdInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateContactWebInfo(const ::std::string& userId, const ::std::string& buddyId, const ::AliIMDBBase::SUserWebBasicProfile& cntWebInfo)
    {
        return UpdateContactWebInfo(userId, buddyId, cntWebInfo, 0);
    }
    ::Ice::Int UpdateContactWebInfo(const ::std::string& userId, const ::std::string& buddyId, const ::AliIMDBBase::SUserWebBasicProfile& cntWebInfo, const ::Ice::Context& __ctx)
    {
        return UpdateContactWebInfo(userId, buddyId, cntWebInfo, &__ctx);
    }
    
private:

    ::Ice::Int UpdateContactWebInfo(const ::std::string&, const ::std::string&, const ::AliIMDBBase::SUserWebBasicProfile&, const ::Ice::Context*);
    
public:

    ::Ice::Int DelTaobaoUser(const ::std::string& webId)
    {
        return DelTaobaoUser(webId, 0);
    }
    ::Ice::Int DelTaobaoUser(const ::std::string& webId, const ::Ice::Context& __ctx)
    {
        return DelTaobaoUser(webId, &__ctx);
    }
    
private:

    ::Ice::Int DelTaobaoUser(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DelAnyUser(const ::std::string& imuserId)
    {
        return DelAnyUser(imuserId, 0);
    }
    ::Ice::Int DelAnyUser(const ::std::string& imuserId, const ::Ice::Context& __ctx)
    {
        return DelAnyUser(imuserId, &__ctx);
    }
    
private:

    ::Ice::Int DelAnyUser(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddUserKeyWord(const ::std::string& userId, const ::std::string& keyword, ::Ice::Int flag)
    {
        return AddUserKeyWord(userId, keyword, flag, 0);
    }
    ::Ice::Int AddUserKeyWord(const ::std::string& userId, const ::std::string& keyword, ::Ice::Int flag, const ::Ice::Context& __ctx)
    {
        return AddUserKeyWord(userId, keyword, flag, &__ctx);
    }
    
private:

    ::Ice::Int AddUserKeyWord(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateUserKeyWord(const ::std::string& userId, const ::std::string& keyword, ::Ice::Int flag)
    {
        return UpdateUserKeyWord(userId, keyword, flag, 0);
    }
    ::Ice::Int UpdateUserKeyWord(const ::std::string& userId, const ::std::string& keyword, ::Ice::Int flag, const ::Ice::Context& __ctx)
    {
        return UpdateUserKeyWord(userId, keyword, flag, &__ctx);
    }
    
private:

    ::Ice::Int UpdateUserKeyWord(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUserKeyWord(const ::std::string& userId, ::std::string& keyword, ::Ice::Int& flag)
    {
        return GetUserKeyWord(userId, keyword, flag, 0);
    }
    ::Ice::Int GetUserKeyWord(const ::std::string& userId, ::std::string& keyword, ::Ice::Int& flag, const ::Ice::Context& __ctx)
    {
        return GetUserKeyWord(userId, keyword, flag, &__ctx);
    }
    
private:

    ::Ice::Int GetUserKeyWord(const ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int QueryUserIdsByKeyWord(const ::std::string& keyword, ::AliIMDBBase::SMatchedUserIdInfoSeq& matchedIds)
    {
        return QueryUserIdsByKeyWord(keyword, matchedIds, 0);
    }
    ::Ice::Int QueryUserIdsByKeyWord(const ::std::string& keyword, ::AliIMDBBase::SMatchedUserIdInfoSeq& matchedIds, const ::Ice::Context& __ctx)
    {
        return QueryUserIdsByKeyWord(keyword, matchedIds, &__ctx);
    }
    
private:

    ::Ice::Int QueryUserIdsByKeyWord(const ::std::string&, ::AliIMDBBase::SMatchedUserIdInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetBatchMemberInfo(const ::Ice::StringSeq& userIds, ::AliIMDBBase::SICEMemberInfoSeq& memberInfoList)
    {
        return GetBatchMemberInfo(userIds, memberInfoList, 0);
    }
    ::Ice::Int GetBatchMemberInfo(const ::Ice::StringSeq& userIds, ::AliIMDBBase::SICEMemberInfoSeq& memberInfoList, const ::Ice::Context& __ctx)
    {
        return GetBatchMemberInfo(userIds, memberInfoList, &__ctx);
    }
    
private:

    ::Ice::Int GetBatchMemberInfo(const ::Ice::StringSeq&, ::AliIMDBBase::SICEMemberInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetAllVersion(::AliIMDBBase::SICEVersionSeq& versionList)
    {
        return GetAllVersion(versionList, 0);
    }
    ::Ice::Int GetAllVersion(::AliIMDBBase::SICEVersionSeq& versionList, const ::Ice::Context& __ctx)
    {
        return GetAllVersion(versionList, &__ctx);
    }
    
private:

    ::Ice::Int GetAllVersion(::AliIMDBBase::SICEVersionSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetAllSysMsg(::AliIMDBBase::SICESysMessageSeq& sysMsgList)
    {
        return GetAllSysMsg(sysMsgList, 0);
    }
    ::Ice::Int GetAllSysMsg(::AliIMDBBase::SICESysMessageSeq& sysMsgList, const ::Ice::Context& __ctx)
    {
        return GetAllSysMsg(sysMsgList, &__ctx);
    }
    
private:

    ::Ice::Int GetAllSysMsg(::AliIMDBBase::SICESysMessageSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetAllExSysMsg(::AliIMDBBase::SExICESysMessageSeq& sysMsgList)
    {
        return GetAllExSysMsg(sysMsgList, 0);
    }
    ::Ice::Int GetAllExSysMsg(::AliIMDBBase::SExICESysMessageSeq& sysMsgList, const ::Ice::Context& __ctx)
    {
        return GetAllExSysMsg(sysMsgList, &__ctx);
    }
    
private:

    ::Ice::Int GetAllExSysMsg(::AliIMDBBase::SExICESysMessageSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUserInfo(const ::std::string& userId, ::AliIMDBBase::SICEUserInfo& userInfo)
    {
        return GetUserInfo(userId, userInfo, 0);
    }
    ::Ice::Int GetUserInfo(const ::std::string& userId, ::AliIMDBBase::SICEUserInfo& userInfo, const ::Ice::Context& __ctx)
    {
        return GetUserInfo(userId, userInfo, &__ctx);
    }
    
private:

    ::Ice::Int GetUserInfo(const ::std::string&, ::AliIMDBBase::SICEUserInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUserInfo2(const ::std::string& userId, ::AliIMDBBase::SICEUserInfo2& userInfo)
    {
        return GetUserInfo2(userId, userInfo, 0);
    }
    ::Ice::Int GetUserInfo2(const ::std::string& userId, ::AliIMDBBase::SICEUserInfo2& userInfo, const ::Ice::Context& __ctx)
    {
        return GetUserInfo2(userId, userInfo, &__ctx);
    }
    
private:

    ::Ice::Int GetUserInfo2(const ::std::string&, ::AliIMDBBase::SICEUserInfo2&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUserInfoEx(const ::std::string& userId, ::AliIMDBBase::SICEUserInfoEx& userInfo)
    {
        return GetUserInfoEx(userId, userInfo, 0);
    }
    ::Ice::Int GetUserInfoEx(const ::std::string& userId, ::AliIMDBBase::SICEUserInfoEx& userInfo, const ::Ice::Context& __ctx)
    {
        return GetUserInfoEx(userId, userInfo, &__ctx);
    }
    
private:

    ::Ice::Int GetUserInfoEx(const ::std::string&, ::AliIMDBBase::SICEUserInfoEx&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUserInfoNew(const ::std::string& userId, ::AliIMDBBase::SICEUserInfoNew& userInfo)
    {
        return GetUserInfoNew(userId, userInfo, 0);
    }
    ::Ice::Int GetUserInfoNew(const ::std::string& userId, ::AliIMDBBase::SICEUserInfoNew& userInfo, const ::Ice::Context& __ctx)
    {
        return GetUserInfoNew(userId, userInfo, &__ctx);
    }
    
private:

    ::Ice::Int GetUserInfoNew(const ::std::string&, ::AliIMDBBase::SICEUserInfoNew&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUserInfo2New(const ::std::string& userId, ::AliIMDBBase::SICEUserInfo2New& userInfo)
    {
        return GetUserInfo2New(userId, userInfo, 0);
    }
    ::Ice::Int GetUserInfo2New(const ::std::string& userId, ::AliIMDBBase::SICEUserInfo2New& userInfo, const ::Ice::Context& __ctx)
    {
        return GetUserInfo2New(userId, userInfo, &__ctx);
    }
    
private:

    ::Ice::Int GetUserInfo2New(const ::std::string&, ::AliIMDBBase::SICEUserInfo2New&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUserInfoExNew(const ::std::string& userId, ::AliIMDBBase::SICEUserInfoExNew& userInfo)
    {
        return GetUserInfoExNew(userId, userInfo, 0);
    }
    ::Ice::Int GetUserInfoExNew(const ::std::string& userId, ::AliIMDBBase::SICEUserInfoExNew& userInfo, const ::Ice::Context& __ctx)
    {
        return GetUserInfoExNew(userId, userInfo, &__ctx);
    }
    
private:

    ::Ice::Int GetUserInfoExNew(const ::std::string&, ::AliIMDBBase::SICEUserInfoExNew&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUserInfoExNew2(const ::std::string& userId, ::AliIMDBBase::SICEUserInfoExNew2& userInfo)
    {
        return GetUserInfoExNew2(userId, userInfo, 0);
    }
    ::Ice::Int GetUserInfoExNew2(const ::std::string& userId, ::AliIMDBBase::SICEUserInfoExNew2& userInfo, const ::Ice::Context& __ctx)
    {
        return GetUserInfoExNew2(userId, userInfo, &__ctx);
    }
    
private:

    ::Ice::Int GetUserInfoExNew2(const ::std::string&, ::AliIMDBBase::SICEUserInfoExNew2&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUserInfoExNew3(const ::std::string& userId, ::AliIMDBBase::SICEUserInfoExNew3& userInfo)
    {
        return GetUserInfoExNew3(userId, userInfo, 0);
    }
    ::Ice::Int GetUserInfoExNew3(const ::std::string& userId, ::AliIMDBBase::SICEUserInfoExNew3& userInfo, const ::Ice::Context& __ctx)
    {
        return GetUserInfoExNew3(userId, userInfo, &__ctx);
    }
    
private:

    ::Ice::Int GetUserInfoExNew3(const ::std::string&, ::AliIMDBBase::SICEUserInfoExNew3&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUserInfoExNew4(const ::std::string& userId, ::AliIMDBBase::SICEUserInfoExNew4& userInfo)
    {
        return GetUserInfoExNew4(userId, userInfo, 0);
    }
    ::Ice::Int GetUserInfoExNew4(const ::std::string& userId, ::AliIMDBBase::SICEUserInfoExNew4& userInfo, const ::Ice::Context& __ctx)
    {
        return GetUserInfoExNew4(userId, userInfo, &__ctx);
    }
    
private:

    ::Ice::Int GetUserInfoExNew4(const ::std::string&, ::AliIMDBBase::SICEUserInfoExNew4&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUserVerifyInfo(const ::std::string& userId, ::Ice::Byte& addcontactverify, ::Ice::Byte& sendmsgverify)
    {
        return GetUserVerifyInfo(userId, addcontactverify, sendmsgverify, 0);
    }
    ::Ice::Int GetUserVerifyInfo(const ::std::string& userId, ::Ice::Byte& addcontactverify, ::Ice::Byte& sendmsgverify, const ::Ice::Context& __ctx)
    {
        return GetUserVerifyInfo(userId, addcontactverify, sendmsgverify, &__ctx);
    }
    
private:

    ::Ice::Int GetUserVerifyInfo(const ::std::string&, ::Ice::Byte&, ::Ice::Byte&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUserVerifyInfoEx(const ::std::string& userId, ::Ice::Byte& addcontactverify, ::Ice::Byte& sendmsgverify, ::Ice::Byte& enableSearchFlag)
    {
        return GetUserVerifyInfoEx(userId, addcontactverify, sendmsgverify, enableSearchFlag, 0);
    }
    ::Ice::Int GetUserVerifyInfoEx(const ::std::string& userId, ::Ice::Byte& addcontactverify, ::Ice::Byte& sendmsgverify, ::Ice::Byte& enableSearchFlag, const ::Ice::Context& __ctx)
    {
        return GetUserVerifyInfoEx(userId, addcontactverify, sendmsgverify, enableSearchFlag, &__ctx);
    }
    
private:

    ::Ice::Int GetUserVerifyInfoEx(const ::std::string&, ::Ice::Byte&, ::Ice::Byte&, ::Ice::Byte&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUserVerifyInfoQuestion(const ::std::string& userId, ::Ice::Byte& addcontactverify, ::Ice::Byte& sendmsgverify, ::Ice::Byte& enableSearchFlag, ::std::string& question, ::std::string& answer)
    {
        return GetUserVerifyInfoQuestion(userId, addcontactverify, sendmsgverify, enableSearchFlag, question, answer, 0);
    }
    ::Ice::Int GetUserVerifyInfoQuestion(const ::std::string& userId, ::Ice::Byte& addcontactverify, ::Ice::Byte& sendmsgverify, ::Ice::Byte& enableSearchFlag, ::std::string& question, ::std::string& answer, const ::Ice::Context& __ctx)
    {
        return GetUserVerifyInfoQuestion(userId, addcontactverify, sendmsgverify, enableSearchFlag, question, answer, &__ctx);
    }
    
private:

    ::Ice::Int GetUserVerifyInfoQuestion(const ::std::string&, ::Ice::Byte&, ::Ice::Byte&, ::Ice::Byte&, ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetGroupList(const ::std::string& userId, ::AliIMDBBase::SICEGroupInfoSeq& groupList, ::Ice::Int& groupTimes)
    {
        return GetGroupList(userId, groupList, groupTimes, 0);
    }
    ::Ice::Int GetGroupList(const ::std::string& userId, ::AliIMDBBase::SICEGroupInfoSeq& groupList, ::Ice::Int& groupTimes, const ::Ice::Context& __ctx)
    {
        return GetGroupList(userId, groupList, groupTimes, &__ctx);
    }
    
private:

    ::Ice::Int GetGroupList(const ::std::string&, ::AliIMDBBase::SICEGroupInfoSeq&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetGroupListEx(const ::std::string& userId, ::AliIMDBBase::SICEGroupInfoExSeq& groupList, ::Ice::Int& groupTimes)
    {
        return GetGroupListEx(userId, groupList, groupTimes, 0);
    }
    ::Ice::Int GetGroupListEx(const ::std::string& userId, ::AliIMDBBase::SICEGroupInfoExSeq& groupList, ::Ice::Int& groupTimes, const ::Ice::Context& __ctx)
    {
        return GetGroupListEx(userId, groupList, groupTimes, &__ctx);
    }
    
private:

    ::Ice::Int GetGroupListEx(const ::std::string&, ::AliIMDBBase::SICEGroupInfoExSeq&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetContactList(const ::std::string& userId, ::Ice::Int getFlag, ::AliIMDBBase::SICEContactInfoSeq& contactList, ::Ice::Int& contactTimes)
    {
        return GetContactList(userId, getFlag, contactList, contactTimes, 0);
    }
    ::Ice::Int GetContactList(const ::std::string& userId, ::Ice::Int getFlag, ::AliIMDBBase::SICEContactInfoSeq& contactList, ::Ice::Int& contactTimes, const ::Ice::Context& __ctx)
    {
        return GetContactList(userId, getFlag, contactList, contactTimes, &__ctx);
    }
    
private:

    ::Ice::Int GetContactList(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEContactInfoSeq&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetBlackList(const ::std::string& userId, ::Ice::StringSeq& blackList, ::Ice::Int& blacklistTimes)
    {
        return GetBlackList(userId, blackList, blacklistTimes, 0);
    }
    ::Ice::Int GetBlackList(const ::std::string& userId, ::Ice::StringSeq& blackList, ::Ice::Int& blacklistTimes, const ::Ice::Context& __ctx)
    {
        return GetBlackList(userId, blackList, blacklistTimes, &__ctx);
    }
    
private:

    ::Ice::Int GetBlackList(const ::std::string&, ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetReverseBlackList(const ::std::string& userId, ::Ice::StringSeq& reverseBlackList, ::Ice::Int& reverseBlacklistTimes)
    {
        return GetReverseBlackList(userId, reverseBlackList, reverseBlacklistTimes, 0);
    }
    ::Ice::Int GetReverseBlackList(const ::std::string& userId, ::Ice::StringSeq& reverseBlackList, ::Ice::Int& reverseBlacklistTimes, const ::Ice::Context& __ctx)
    {
        return GetReverseBlackList(userId, reverseBlackList, reverseBlacklistTimes, &__ctx);
    }
    
private:

    ::Ice::Int GetReverseBlackList(const ::std::string&, ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetOfflineMsg(const ::std::string& userId, ::AliIMDBBase::SICEOffLineMessegeSeq& offlineMsgList, ::Ice::Int& offlinemsgTimes)
    {
        return GetOfflineMsg(userId, offlineMsgList, offlinemsgTimes, 0);
    }
    ::Ice::Int GetOfflineMsg(const ::std::string& userId, ::AliIMDBBase::SICEOffLineMessegeSeq& offlineMsgList, ::Ice::Int& offlinemsgTimes, const ::Ice::Context& __ctx)
    {
        return GetOfflineMsg(userId, offlineMsgList, offlinemsgTimes, &__ctx);
    }
    
private:

    ::Ice::Int GetOfflineMsg(const ::std::string&, ::AliIMDBBase::SICEOffLineMessegeSeq&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetOfflineMsgEx(const ::std::string& userId, ::AliIMDBBase::SICEOffLineMessegeExSeq& offlineMsgList, ::Ice::Int& offlinemsgTimes)
    {
        return GetOfflineMsgEx(userId, offlineMsgList, offlinemsgTimes, 0);
    }
    ::Ice::Int GetOfflineMsgEx(const ::std::string& userId, ::AliIMDBBase::SICEOffLineMessegeExSeq& offlineMsgList, ::Ice::Int& offlinemsgTimes, const ::Ice::Context& __ctx)
    {
        return GetOfflineMsgEx(userId, offlineMsgList, offlinemsgTimes, &__ctx);
    }
    
private:

    ::Ice::Int GetOfflineMsgEx(const ::std::string&, ::AliIMDBBase::SICEOffLineMessegeExSeq&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetOfflineMsgCount(const ::std::string& uid, ::Ice::Int& chatMsgNum, ::Ice::Int& sysMsgNum)
    {
        return GetOfflineMsgCount(uid, chatMsgNum, sysMsgNum, 0);
    }
    ::Ice::Int GetOfflineMsgCount(const ::std::string& uid, ::Ice::Int& chatMsgNum, ::Ice::Int& sysMsgNum, const ::Ice::Context& __ctx)
    {
        return GetOfflineMsgCount(uid, chatMsgNum, sysMsgNum, &__ctx);
    }
    
private:

    ::Ice::Int GetOfflineMsgCount(const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetEnetOfflineMsgNum(const ::std::string& toId, const ::std::string& fromId, const ::Ice::IntSeq& types, ::Ice::Int& msgNum)
    {
        return GetEnetOfflineMsgNum(toId, fromId, types, msgNum, 0);
    }
    ::Ice::Int GetEnetOfflineMsgNum(const ::std::string& toId, const ::std::string& fromId, const ::Ice::IntSeq& types, ::Ice::Int& msgNum, const ::Ice::Context& __ctx)
    {
        return GetEnetOfflineMsgNum(toId, fromId, types, msgNum, &__ctx);
    }
    
private:

    ::Ice::Int GetEnetOfflineMsgNum(const ::std::string&, const ::std::string&, const ::Ice::IntSeq&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetContactInfo(const ::std::string& userId, const ::std::string& contactId, ::AliIMDBBase::SICEContactInfo& contactInfo)
    {
        return GetContactInfo(userId, contactId, contactInfo, 0);
    }
    ::Ice::Int GetContactInfo(const ::std::string& userId, const ::std::string& contactId, ::AliIMDBBase::SICEContactInfo& contactInfo, const ::Ice::Context& __ctx)
    {
        return GetContactInfo(userId, contactId, contactInfo, &__ctx);
    }
    
private:

    ::Ice::Int GetContactInfo(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEContactInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetOfflineMsgNum(const ::std::string& userId, ::Ice::Int& msgNum)
    {
        return GetOfflineMsgNum(userId, msgNum, 0);
    }
    ::Ice::Int GetOfflineMsgNum(const ::std::string& userId, ::Ice::Int& msgNum, const ::Ice::Context& __ctx)
    {
        return GetOfflineMsgNum(userId, msgNum, &__ctx);
    }
    
private:

    ::Ice::Int GetOfflineMsgNum(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetToolProfiles(const ::std::string& userId, ::Ice::Int type, ::Ice::Int nowTimes, ::Ice::StringSeq& toolProfilesList, ::Ice::Int& toolTimes)
    {
        return GetToolProfiles(userId, type, nowTimes, toolProfilesList, toolTimes, 0);
    }
    ::Ice::Int GetToolProfiles(const ::std::string& userId, ::Ice::Int type, ::Ice::Int nowTimes, ::Ice::StringSeq& toolProfilesList, ::Ice::Int& toolTimes, const ::Ice::Context& __ctx)
    {
        return GetToolProfiles(userId, type, nowTimes, toolProfilesList, toolTimes, &__ctx);
    }
    
private:

    ::Ice::Int GetToolProfiles(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetToolProfilesEx(const ::std::string& userId, ::Ice::Int nowTimes, ::AliIMDBBase::SICEToolProfileSeq& toolProfilesList, ::Ice::Int& toolTimes)
    {
        return GetToolProfilesEx(userId, nowTimes, toolProfilesList, toolTimes, 0);
    }
    ::Ice::Int GetToolProfilesEx(const ::std::string& userId, ::Ice::Int nowTimes, ::AliIMDBBase::SICEToolProfileSeq& toolProfilesList, ::Ice::Int& toolTimes, const ::Ice::Context& __ctx)
    {
        return GetToolProfilesEx(userId, nowTimes, toolProfilesList, toolTimes, &__ctx);
    }
    
private:

    ::Ice::Int GetToolProfilesEx(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEToolProfileSeq&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetSysMsg(::Ice::Int sysId, ::AliIMDBBase::SICESysMessage& sysMsg)
    {
        return GetSysMsg(sysId, sysMsg, 0);
    }
    ::Ice::Int GetSysMsg(::Ice::Int sysId, ::AliIMDBBase::SICESysMessage& sysMsg, const ::Ice::Context& __ctx)
    {
        return GetSysMsg(sysId, sysMsg, &__ctx);
    }
    
private:

    ::Ice::Int GetSysMsg(::Ice::Int, ::AliIMDBBase::SICESysMessage&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddUser(const ::std::string& userId)
    {
        return AddUser(userId, 0);
    }
    ::Ice::Int AddUser(const ::std::string& userId, const ::Ice::Context& __ctx)
    {
        return AddUser(userId, &__ctx);
    }
    
private:

    ::Ice::Int AddUser(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddGroup(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int& groupId, ::Ice::Int& groupTimes)
    {
        return AddGroup(userId, groupName, groupId, groupTimes, 0);
    }
    ::Ice::Int AddGroup(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int& groupId, ::Ice::Int& groupTimes, const ::Ice::Context& __ctx)
    {
        return AddGroup(userId, groupName, groupId, groupTimes, &__ctx);
    }
    
private:

    ::Ice::Int AddGroup(const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddGroupEx(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int parentId, ::Ice::Int& groupId, ::Ice::Int& groupTimes)
    {
        return AddGroupEx(userId, groupName, parentId, groupId, groupTimes, 0);
    }
    ::Ice::Int AddGroupEx(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int parentId, ::Ice::Int& groupId, ::Ice::Int& groupTimes, const ::Ice::Context& __ctx)
    {
        return AddGroupEx(userId, groupName, parentId, groupId, groupTimes, &__ctx);
    }
    
private:

    ::Ice::Int AddGroupEx(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddBlackList(const ::std::string& userId, const ::std::string& blackId, ::Ice::Int& blackListTimes)
    {
        return AddBlackList(userId, blackId, blackListTimes, 0);
    }
    ::Ice::Int AddBlackList(const ::std::string& userId, const ::std::string& blackId, ::Ice::Int& blackListTimes, const ::Ice::Context& __ctx)
    {
        return AddBlackList(userId, blackId, blackListTimes, &__ctx);
    }
    
private:

    ::Ice::Int AddBlackList(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddOfflineMsg(const ::std::string& fromId, const ::std::string& toId, ::Ice::Int type, const ::std::string& content)
    {
        return AddOfflineMsg(fromId, toId, type, content, 0);
    }
    ::Ice::Int AddOfflineMsg(const ::std::string& fromId, const ::std::string& toId, ::Ice::Int type, const ::std::string& content, const ::Ice::Context& __ctx)
    {
        return AddOfflineMsg(fromId, toId, type, content, &__ctx);
    }
    
private:

    ::Ice::Int AddOfflineMsg(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddExpriteTimeOfflineMsg(const ::std::string& fromId, const ::std::string& toId, ::Ice::Int type, const ::std::string& content, const ::std::string& expireTime)
    {
        return AddExpriteTimeOfflineMsg(fromId, toId, type, content, expireTime, 0);
    }
    ::Ice::Int AddExpriteTimeOfflineMsg(const ::std::string& fromId, const ::std::string& toId, ::Ice::Int type, const ::std::string& content, const ::std::string& expireTime, const ::Ice::Context& __ctx)
    {
        return AddExpriteTimeOfflineMsg(fromId, toId, type, content, expireTime, &__ctx);
    }
    
private:

    ::Ice::Int AddExpriteTimeOfflineMsg(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddOfflineMsgNoSMS(const ::std::string& fromId, const ::std::string& toId, ::Ice::Int type, const ::std::string& content)
    {
        return AddOfflineMsgNoSMS(fromId, toId, type, content, 0);
    }
    ::Ice::Int AddOfflineMsgNoSMS(const ::std::string& fromId, const ::std::string& toId, ::Ice::Int type, const ::std::string& content, const ::Ice::Context& __ctx)
    {
        return AddOfflineMsgNoSMS(fromId, toId, type, content, &__ctx);
    }
    
private:

    ::Ice::Int AddOfflineMsgNoSMS(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddOfflineMsgEx(const ::std::string& fromId, const ::std::string& toId, ::Ice::Int type, const ::std::string& content, ::Ice::Long uniqueMsgTime)
    {
        return AddOfflineMsgEx(fromId, toId, type, content, uniqueMsgTime, 0);
    }
    ::Ice::Int AddOfflineMsgEx(const ::std::string& fromId, const ::std::string& toId, ::Ice::Int type, const ::std::string& content, ::Ice::Long uniqueMsgTime, const ::Ice::Context& __ctx)
    {
        return AddOfflineMsgEx(fromId, toId, type, content, uniqueMsgTime, &__ctx);
    }
    
private:

    ::Ice::Int AddOfflineMsgEx(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Long, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateUserLogin(const ::std::string& userId, ::Ice::Int sysMsgId)
    {
        return UpdateUserLogin(userId, sysMsgId, 0);
    }
    ::Ice::Int UpdateUserLogin(const ::std::string& userId, ::Ice::Int sysMsgId, const ::Ice::Context& __ctx)
    {
        return UpdateUserLogin(userId, sysMsgId, &__ctx);
    }
    
private:

    ::Ice::Int UpdateUserLogin(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateUserLoginEx(const ::std::string& userId, ::Ice::Int sysMsgId, const ::std::string& loginIp)
    {
        return UpdateUserLoginEx(userId, sysMsgId, loginIp, 0);
    }
    ::Ice::Int UpdateUserLoginEx(const ::std::string& userId, ::Ice::Int sysMsgId, const ::std::string& loginIp, const ::Ice::Context& __ctx)
    {
        return UpdateUserLoginEx(userId, sysMsgId, loginIp, &__ctx);
    }
    
private:

    ::Ice::Int UpdateUserLoginEx(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateUserLoginDataInfo(const ::std::string& userId, ::Ice::Int sysMsgId, const ::std::string& loginIp, ::Ice::Int onlineTimes, ::Ice::Int lastLoginTime)
    {
        return UpdateUserLoginDataInfo(userId, sysMsgId, loginIp, onlineTimes, lastLoginTime, 0);
    }
    ::Ice::Int UpdateUserLoginDataInfo(const ::std::string& userId, ::Ice::Int sysMsgId, const ::std::string& loginIp, ::Ice::Int onlineTimes, ::Ice::Int lastLoginTime, const ::Ice::Context& __ctx)
    {
        return UpdateUserLoginDataInfo(userId, sysMsgId, loginIp, onlineTimes, lastLoginTime, &__ctx);
    }
    
private:

    ::Ice::Int UpdateUserLoginDataInfo(const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateUserLoginDataInfoEx(const ::std::string& userId, ::Ice::Int sysMsgId, const ::std::string& loginIp, ::Ice::Int onlineTimes, ::Ice::Int lastLoginTime, ::Ice::Int isNeedToUpdate)
    {
        return UpdateUserLoginDataInfoEx(userId, sysMsgId, loginIp, onlineTimes, lastLoginTime, isNeedToUpdate, 0);
    }
    ::Ice::Int UpdateUserLoginDataInfoEx(const ::std::string& userId, ::Ice::Int sysMsgId, const ::std::string& loginIp, ::Ice::Int onlineTimes, ::Ice::Int lastLoginTime, ::Ice::Int isNeedToUpdate, const ::Ice::Context& __ctx)
    {
        return UpdateUserLoginDataInfoEx(userId, sysMsgId, loginIp, onlineTimes, lastLoginTime, isNeedToUpdate, &__ctx);
    }
    
private:

    ::Ice::Int UpdateUserLoginDataInfoEx(const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateUserSysMsgId(const ::std::string& userId, ::Ice::Int sysMsgId)
    {
        return UpdateUserSysMsgId(userId, sysMsgId, 0);
    }
    ::Ice::Int UpdateUserSysMsgId(const ::std::string& userId, ::Ice::Int sysMsgId, const ::Ice::Context& __ctx)
    {
        return UpdateUserSysMsgId(userId, sysMsgId, &__ctx);
    }
    
private:

    ::Ice::Int UpdateUserSysMsgId(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateUserDataInfo(const ::std::string& userId, ::Ice::Int strangerMsgCount, ::Ice::Int onlineTimes, ::Ice::Int addContactCount, ::Ice::Int activeDegree, ::Ice::Float rewardActDegree, ::Ice::Float onlineActDegree, ::Ice::Int addTribeCount)
    {
        return UpdateUserDataInfo(userId, strangerMsgCount, onlineTimes, addContactCount, activeDegree, rewardActDegree, onlineActDegree, addTribeCount, 0);
    }
    ::Ice::Int UpdateUserDataInfo(const ::std::string& userId, ::Ice::Int strangerMsgCount, ::Ice::Int onlineTimes, ::Ice::Int addContactCount, ::Ice::Int activeDegree, ::Ice::Float rewardActDegree, ::Ice::Float onlineActDegree, ::Ice::Int addTribeCount, const ::Ice::Context& __ctx)
    {
        return UpdateUserDataInfo(userId, strangerMsgCount, onlineTimes, addContactCount, activeDegree, rewardActDegree, onlineActDegree, addTribeCount, &__ctx);
    }
    
private:

    ::Ice::Int UpdateUserDataInfo(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Float, ::Ice::Float, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateUserDataInfo2(const ::std::string& userId, ::Ice::Int strangerMsgCount, ::Ice::Int onlineTimes, ::Ice::Int addContactCount, ::Ice::Int activeDegree, ::Ice::Float rewardActDegree, ::Ice::Float onlineActDegree, ::Ice::Int addTribeCount, ::Ice::Int reqAddContactCount)
    {
        return UpdateUserDataInfo2(userId, strangerMsgCount, onlineTimes, addContactCount, activeDegree, rewardActDegree, onlineActDegree, addTribeCount, reqAddContactCount, 0);
    }
    ::Ice::Int UpdateUserDataInfo2(const ::std::string& userId, ::Ice::Int strangerMsgCount, ::Ice::Int onlineTimes, ::Ice::Int addContactCount, ::Ice::Int activeDegree, ::Ice::Float rewardActDegree, ::Ice::Float onlineActDegree, ::Ice::Int addTribeCount, ::Ice::Int reqAddContactCount, const ::Ice::Context& __ctx)
    {
        return UpdateUserDataInfo2(userId, strangerMsgCount, onlineTimes, addContactCount, activeDegree, rewardActDegree, onlineActDegree, addTribeCount, reqAddContactCount, &__ctx);
    }
    
private:

    ::Ice::Int UpdateUserDataInfo2(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Float, ::Ice::Float, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateUserDataInfo3(const ::std::string& userId, const ::AliIMDBBase::RIGHTTABLE& rightMap, ::Ice::Int onlineTimes, ::Ice::Int activeDegree, ::Ice::Float rewardActDegree, ::Ice::Float onlineActDegree)
    {
        return UpdateUserDataInfo3(userId, rightMap, onlineTimes, activeDegree, rewardActDegree, onlineActDegree, 0);
    }
    ::Ice::Int UpdateUserDataInfo3(const ::std::string& userId, const ::AliIMDBBase::RIGHTTABLE& rightMap, ::Ice::Int onlineTimes, ::Ice::Int activeDegree, ::Ice::Float rewardActDegree, ::Ice::Float onlineActDegree, const ::Ice::Context& __ctx)
    {
        return UpdateUserDataInfo3(userId, rightMap, onlineTimes, activeDegree, rewardActDegree, onlineActDegree, &__ctx);
    }
    
private:

    ::Ice::Int UpdateUserDataInfo3(const ::std::string&, const ::AliIMDBBase::RIGHTTABLE&, ::Ice::Int, ::Ice::Int, ::Ice::Float, ::Ice::Float, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateUserVerifySet(const ::std::string& userId, ::Ice::Int addContactVerify, ::Ice::Int sendMsgVerify)
    {
        return UpdateUserVerifySet(userId, addContactVerify, sendMsgVerify, 0);
    }
    ::Ice::Int UpdateUserVerifySet(const ::std::string& userId, ::Ice::Int addContactVerify, ::Ice::Int sendMsgVerify, const ::Ice::Context& __ctx)
    {
        return UpdateUserVerifySet(userId, addContactVerify, sendMsgVerify, &__ctx);
    }
    
private:

    ::Ice::Int UpdateUserVerifySet(const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateUserVerifySetEx(const ::std::string& userId, ::Ice::Int addContactVerify, ::Ice::Int sendMsgVerify, ::Ice::Int enbleSearchFlag)
    {
        return UpdateUserVerifySetEx(userId, addContactVerify, sendMsgVerify, enbleSearchFlag, 0);
    }
    ::Ice::Int UpdateUserVerifySetEx(const ::std::string& userId, ::Ice::Int addContactVerify, ::Ice::Int sendMsgVerify, ::Ice::Int enbleSearchFlag, const ::Ice::Context& __ctx)
    {
        return UpdateUserVerifySetEx(userId, addContactVerify, sendMsgVerify, enbleSearchFlag, &__ctx);
    }
    
private:

    ::Ice::Int UpdateUserVerifySetEx(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateUserVerifySetQuestion(const ::std::string& userId, ::Ice::Int addContactVerify, ::Ice::Int sendMsgVerify, ::Ice::Int enbleSearchFlag, const ::std::string& question, const ::std::string& answer)
    {
        return UpdateUserVerifySetQuestion(userId, addContactVerify, sendMsgVerify, enbleSearchFlag, question, answer, 0);
    }
    ::Ice::Int UpdateUserVerifySetQuestion(const ::std::string& userId, ::Ice::Int addContactVerify, ::Ice::Int sendMsgVerify, ::Ice::Int enbleSearchFlag, const ::std::string& question, const ::std::string& answer, const ::Ice::Context& __ctx)
    {
        return UpdateUserVerifySetQuestion(userId, addContactVerify, sendMsgVerify, enbleSearchFlag, question, answer, &__ctx);
    }
    
private:

    ::Ice::Int UpdateUserVerifySetQuestion(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateGroup(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int groupId, ::Ice::Int& groupTimes)
    {
        return UpdateGroup(userId, groupName, groupId, groupTimes, 0);
    }
    ::Ice::Int UpdateGroup(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int groupId, ::Ice::Int& groupTimes, const ::Ice::Context& __ctx)
    {
        return UpdateGroup(userId, groupName, groupId, groupTimes, &__ctx);
    }
    
private:

    ::Ice::Int UpdateGroup(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int MoveGroup(const ::std::string& userId, ::Ice::Long groupId, ::Ice::Long newparentgid, ::Ice::Int& groupTimes)
    {
        return MoveGroup(userId, groupId, newparentgid, groupTimes, 0);
    }
    ::Ice::Int MoveGroup(const ::std::string& userId, ::Ice::Long groupId, ::Ice::Long newparentgid, ::Ice::Int& groupTimes, const ::Ice::Context& __ctx)
    {
        return MoveGroup(userId, groupId, newparentgid, groupTimes, &__ctx);
    }
    
private:

    ::Ice::Int MoveGroup(const ::std::string&, ::Ice::Long, ::Ice::Long, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateContactNickName(const ::std::string& userId, const ::std::string& contactId, const ::std::string& nickName, ::Ice::Int& contactTimes)
    {
        return UpdateContactNickName(userId, contactId, nickName, contactTimes, 0);
    }
    ::Ice::Int UpdateContactNickName(const ::std::string& userId, const ::std::string& contactId, const ::std::string& nickName, ::Ice::Int& contactTimes, const ::Ice::Context& __ctx)
    {
        return UpdateContactNickName(userId, contactId, nickName, contactTimes, &__ctx);
    }
    
private:

    ::Ice::Int UpdateContactNickName(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateContactGroup(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int srcGroupId, ::Ice::Int dstGroupId, ::Ice::Int& contactTimes)
    {
        return UpdateContactGroup(userId, contactId, srcGroupId, dstGroupId, contactTimes, 0);
    }
    ::Ice::Int UpdateContactGroup(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int srcGroupId, ::Ice::Int dstGroupId, ::Ice::Int& contactTimes, const ::Ice::Context& __ctx)
    {
        return UpdateContactGroup(userId, contactId, srcGroupId, dstGroupId, contactTimes, &__ctx);
    }
    
private:

    ::Ice::Int UpdateContactGroup(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateContactStatus(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int status, ::Ice::Int& contactTimes)
    {
        return UpdateContactStatus(userId, contactId, status, contactTimes, 0);
    }
    ::Ice::Int UpdateContactStatus(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int status, ::Ice::Int& contactTimes, const ::Ice::Context& __ctx)
    {
        return UpdateContactStatus(userId, contactId, status, contactTimes, &__ctx);
    }
    
private:

    ::Ice::Int UpdateContactStatus(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateNotifyMessage(::Ice::Int msgId, ::Ice::Int status)
    {
        return UpdateNotifyMessage(msgId, status, 0);
    }
    ::Ice::Int UpdateNotifyMessage(::Ice::Int msgId, ::Ice::Int status, const ::Ice::Context& __ctx)
    {
        return UpdateNotifyMessage(msgId, status, &__ctx);
    }
    
private:

    ::Ice::Int UpdateNotifyMessage(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateToolProfiles(const ::std::string& userId, ::Ice::Int type, const ::Ice::StringSeq& toolProfilsList, ::Ice::Int& toolTimes)
    {
        return UpdateToolProfiles(userId, type, toolProfilsList, toolTimes, 0);
    }
    ::Ice::Int UpdateToolProfiles(const ::std::string& userId, ::Ice::Int type, const ::Ice::StringSeq& toolProfilsList, ::Ice::Int& toolTimes, const ::Ice::Context& __ctx)
    {
        return UpdateToolProfiles(userId, type, toolProfilsList, toolTimes, &__ctx);
    }
    
private:

    ::Ice::Int UpdateToolProfiles(const ::std::string&, ::Ice::Int, const ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateToolProfilesEx(const ::std::string& userId, const ::AliIMDBBase::SICEToolProfileSeq& toolProfilsList, ::Ice::Int& toolTimes)
    {
        return UpdateToolProfilesEx(userId, toolProfilsList, toolTimes, 0);
    }
    ::Ice::Int UpdateToolProfilesEx(const ::std::string& userId, const ::AliIMDBBase::SICEToolProfileSeq& toolProfilsList, ::Ice::Int& toolTimes, const ::Ice::Context& __ctx)
    {
        return UpdateToolProfilesEx(userId, toolProfilsList, toolTimes, &__ctx);
    }
    
private:

    ::Ice::Int UpdateToolProfilesEx(const ::std::string&, const ::AliIMDBBase::SICEToolProfileSeq&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int RemoveGroup(const ::std::string& userId, ::Ice::Int groupId, ::Ice::Int& groupTimes)
    {
        return RemoveGroup(userId, groupId, groupTimes, 0);
    }
    ::Ice::Int RemoveGroup(const ::std::string& userId, ::Ice::Int groupId, ::Ice::Int& groupTimes, const ::Ice::Context& __ctx)
    {
        return RemoveGroup(userId, groupId, groupTimes, &__ctx);
    }
    
private:

    ::Ice::Int RemoveGroup(const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int RemoveContact(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int& contactTimes)
    {
        return RemoveContact(userId, contactId, contactTimes, 0);
    }
    ::Ice::Int RemoveContact(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int& contactTimes, const ::Ice::Context& __ctx)
    {
        return RemoveContact(userId, contactId, contactTimes, &__ctx);
    }
    
private:

    ::Ice::Int RemoveContact(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int RemoveInverfiedContact(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int& contactTimes)
    {
        return RemoveInverfiedContact(userId, contactId, contactTimes, 0);
    }
    ::Ice::Int RemoveInverfiedContact(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int& contactTimes, const ::Ice::Context& __ctx)
    {
        return RemoveInverfiedContact(userId, contactId, contactTimes, &__ctx);
    }
    
private:

    ::Ice::Int RemoveInverfiedContact(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int RemoveBlackList(const ::std::string& userId, const ::std::string& blackId, ::Ice::Int& blackListTimes)
    {
        return RemoveBlackList(userId, blackId, blackListTimes, 0);
    }
    ::Ice::Int RemoveBlackList(const ::std::string& userId, const ::std::string& blackId, ::Ice::Int& blackListTimes, const ::Ice::Context& __ctx)
    {
        return RemoveBlackList(userId, blackId, blackListTimes, &__ctx);
    }
    
private:

    ::Ice::Int RemoveBlackList(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int IsBlackedByOther(const ::std::string& userId, const ::std::string& otheruid, bool& bBlacked)
    {
        return IsBlackedByOther(userId, otheruid, bBlacked, 0);
    }
    ::Ice::Int IsBlackedByOther(const ::std::string& userId, const ::std::string& otheruid, bool& bBlacked, const ::Ice::Context& __ctx)
    {
        return IsBlackedByOther(userId, otheruid, bBlacked, &__ctx);
    }
    
private:

    ::Ice::Int IsBlackedByOther(const ::std::string&, const ::std::string&, bool&, const ::Ice::Context*);
    
public:

    ::Ice::Int RemoveBatchContacts(const ::std::string& userId, const ::Ice::StringSeq& cids, ::Ice::StringSeq& retVect, ::Ice::Int& modifyCntTimes, ::Ice::Int& modifyGenCntTime)
    {
        return RemoveBatchContacts(userId, cids, retVect, modifyCntTimes, modifyGenCntTime, 0);
    }
    ::Ice::Int RemoveBatchContacts(const ::std::string& userId, const ::Ice::StringSeq& cids, ::Ice::StringSeq& retVect, ::Ice::Int& modifyCntTimes, ::Ice::Int& modifyGenCntTime, const ::Ice::Context& __ctx)
    {
        return RemoveBatchContacts(userId, cids, retVect, modifyCntTimes, modifyGenCntTime, &__ctx);
    }
    
private:

    ::Ice::Int RemoveBatchContacts(const ::std::string&, const ::Ice::StringSeq&, ::Ice::StringSeq&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUserDStatus(const ::std::string& userId, ::AliIMDBBase::SICEUserDStatusSeq& userDStatusList)
    {
        return GetUserDStatus(userId, userDStatusList, 0);
    }
    ::Ice::Int GetUserDStatus(const ::std::string& userId, ::AliIMDBBase::SICEUserDStatusSeq& userDStatusList, const ::Ice::Context& __ctx)
    {
        return GetUserDStatus(userId, userDStatusList, &__ctx);
    }
    
private:

    ::Ice::Int GetUserDStatus(const ::std::string&, ::AliIMDBBase::SICEUserDStatusSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddUserDStatus(const ::std::string& userId, const ::std::string& userDStatus, ::Ice::Int& statusId)
    {
        return AddUserDStatus(userId, userDStatus, statusId, 0);
    }
    ::Ice::Int AddUserDStatus(const ::std::string& userId, const ::std::string& userDStatus, ::Ice::Int& statusId, const ::Ice::Context& __ctx)
    {
        return AddUserDStatus(userId, userDStatus, statusId, &__ctx);
    }
    
private:

    ::Ice::Int AddUserDStatus(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int RemoveUserDStatus(const ::std::string& userId, ::Ice::Int statusId)
    {
        return RemoveUserDStatus(userId, statusId, 0);
    }
    ::Ice::Int RemoveUserDStatus(const ::std::string& userId, ::Ice::Int statusId, const ::Ice::Context& __ctx)
    {
        return RemoveUserDStatus(userId, statusId, &__ctx);
    }
    
private:

    ::Ice::Int RemoveUserDStatus(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int GetAllContactList(const ::std::string& uid, ::Ice::Int getFlag, ::AliIMDBBase::SICEContactInfoSeq& contactList, ::Ice::Int& contactTimes, ::Ice::Int& gencontacttimes)
    {
        return GetAllContactList(uid, getFlag, contactList, contactTimes, gencontacttimes, 0);
    }
    ::Ice::Int GetAllContactList(const ::std::string& uid, ::Ice::Int getFlag, ::AliIMDBBase::SICEContactInfoSeq& contactList, ::Ice::Int& contactTimes, ::Ice::Int& gencontacttimes, const ::Ice::Context& __ctx)
    {
        return GetAllContactList(uid, getFlag, contactList, contactTimes, gencontacttimes, &__ctx);
    }
    
private:

    ::Ice::Int GetAllContactList(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEContactInfoSeq&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetCntModifyList(::Ice::Int getFlag, const ::std::string& uid, const ::std::string& sMaxSeqId, ::AliIMDBBase::SICECntCidModPairSeq& cntList)
    {
        return GetCntModifyList(getFlag, uid, sMaxSeqId, cntList, 0);
    }
    ::Ice::Int GetCntModifyList(::Ice::Int getFlag, const ::std::string& uid, const ::std::string& sMaxSeqId, ::AliIMDBBase::SICECntCidModPairSeq& cntList, const ::Ice::Context& __ctx)
    {
        return GetCntModifyList(getFlag, uid, sMaxSeqId, cntList, &__ctx);
    }
    
private:

    ::Ice::Int GetCntModifyList(::Ice::Int, const ::std::string&, const ::std::string&, ::AliIMDBBase::SICECntCidModPairSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddGenContactFull(const ::AliIMDBBase::SICEGenContactFull& detail, ::std::string& retscid, ::std::string& retsmodseqid, ::Ice::Long& timeStamps)
    {
        return AddGenContactFull(detail, retscid, retsmodseqid, timeStamps, 0);
    }
    ::Ice::Int AddGenContactFull(const ::AliIMDBBase::SICEGenContactFull& detail, ::std::string& retscid, ::std::string& retsmodseqid, ::Ice::Long& timeStamps, const ::Ice::Context& __ctx)
    {
        return AddGenContactFull(detail, retscid, retsmodseqid, timeStamps, &__ctx);
    }
    
private:

    ::Ice::Int AddGenContactFull(const ::AliIMDBBase::SICEGenContactFull&, ::std::string&, ::std::string&, ::Ice::Long&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetContactDetail(const ::std::string& uid, const ::std::string& cid, ::AliIMDBBase::SICEGenContactFull& detail)
    {
        return GetContactDetail(uid, cid, detail, 0);
    }
    ::Ice::Int GetContactDetail(const ::std::string& uid, const ::std::string& cid, ::AliIMDBBase::SICEGenContactFull& detail, const ::Ice::Context& __ctx)
    {
        return GetContactDetail(uid, cid, detail, &__ctx);
    }
    
private:

    ::Ice::Int GetContactDetail(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEGenContactFull&, const ::Ice::Context*);
    
public:

    ::Ice::Int DelGenContact(const ::std::string& uid, const ::std::string& cid, ::Ice::Long& contactTimes)
    {
        return DelGenContact(uid, cid, contactTimes, 0);
    }
    ::Ice::Int DelGenContact(const ::std::string& uid, const ::std::string& cid, ::Ice::Long& contactTimes, const ::Ice::Context& __ctx)
    {
        return DelGenContact(uid, cid, contactTimes, &__ctx);
    }
    
private:

    ::Ice::Int DelGenContact(const ::std::string&, const ::std::string&, ::Ice::Long&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddContact(const ::std::string& userId, const ::std::string& contactId, const ::std::string& nickName, ::Ice::Int groupId, ::Ice::Int status, const ::AliIMDBBase::SUserWebBasicProfile& cntInfo, ::Ice::Int& contactTimes, ::std::string& retcid, ::std::string& retmodseqid)
    {
        return AddContact(userId, contactId, nickName, groupId, status, cntInfo, contactTimes, retcid, retmodseqid, 0);
    }
    ::Ice::Int AddContact(const ::std::string& userId, const ::std::string& contactId, const ::std::string& nickName, ::Ice::Int groupId, ::Ice::Int status, const ::AliIMDBBase::SUserWebBasicProfile& cntInfo, ::Ice::Int& contactTimes, ::std::string& retcid, ::std::string& retmodseqid, const ::Ice::Context& __ctx)
    {
        return AddContact(userId, contactId, nickName, groupId, status, cntInfo, contactTimes, retcid, retmodseqid, &__ctx);
    }
    
private:

    ::Ice::Int AddContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::AliIMDBBase::SUserWebBasicProfile&, ::Ice::Int&, ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int CheckUpgradeGenCnt(const ::std::string& uid, const ::std::string& cid, const ::std::string& contactId)
    {
        return CheckUpgradeGenCnt(uid, cid, contactId, 0);
    }
    ::Ice::Int CheckUpgradeGenCnt(const ::std::string& uid, const ::std::string& cid, const ::std::string& contactId, const ::Ice::Context& __ctx)
    {
        return CheckUpgradeGenCnt(uid, cid, contactId, &__ctx);
    }
    
private:

    ::Ice::Int CheckUpgradeGenCnt(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int ModifyGenCntID(const ::std::string& uid, const ::std::string& cid, const ::std::string& contactId, ::std::string& modseqid)
    {
        return ModifyGenCntID(uid, cid, contactId, modseqid, 0);
    }
    ::Ice::Int ModifyGenCntID(const ::std::string& uid, const ::std::string& cid, const ::std::string& contactId, ::std::string& modseqid, const ::Ice::Context& __ctx)
    {
        return ModifyGenCntID(uid, cid, contactId, modseqid, &__ctx);
    }
    
private:

    ::Ice::Int ModifyGenCntID(const ::std::string&, const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpgradeGenContact(const ::std::string& uid, const ::std::string& cid, const ::std::string& contactId, ::Ice::Long& cntstamp, ::Ice::Long& gencntstamp, ::std::string& modseqid)
    {
        return UpgradeGenContact(uid, cid, contactId, cntstamp, gencntstamp, modseqid, 0);
    }
    ::Ice::Int UpgradeGenContact(const ::std::string& uid, const ::std::string& cid, const ::std::string& contactId, ::Ice::Long& cntstamp, ::Ice::Long& gencntstamp, ::std::string& modseqid, const ::Ice::Context& __ctx)
    {
        return UpgradeGenContact(uid, cid, contactId, cntstamp, gencntstamp, modseqid, &__ctx);
    }
    
private:

    ::Ice::Int UpgradeGenContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long&, ::Ice::Long&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUpdatedUserInfo(const ::std::string& uid, const ::std::string& contactId, ::Ice::Long& cntstamp, ::Ice::Long& gencntstamp, ::std::string& retcid, ::std::string& modseqid, ::Ice::Long& groupid, ::std::string& nickname)
    {
        return GetUpdatedUserInfo(uid, contactId, cntstamp, gencntstamp, retcid, modseqid, groupid, nickname, 0);
    }
    ::Ice::Int GetUpdatedUserInfo(const ::std::string& uid, const ::std::string& contactId, ::Ice::Long& cntstamp, ::Ice::Long& gencntstamp, ::std::string& retcid, ::std::string& modseqid, ::Ice::Long& groupid, ::std::string& nickname, const ::Ice::Context& __ctx)
    {
        return GetUpdatedUserInfo(uid, contactId, cntstamp, gencntstamp, retcid, modseqid, groupid, nickname, &__ctx);
    }
    
private:

    ::Ice::Int GetUpdatedUserInfo(const ::std::string&, const ::std::string&, ::Ice::Long&, ::Ice::Long&, ::std::string&, ::std::string&, ::Ice::Long&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int ModifyContactDetail(const ::AliIMDBBase::SICEGenContactFull& detail, ::Ice::Long& gencntmodifyVersion, ::std::string& modseqid)
    {
        return ModifyContactDetail(detail, gencntmodifyVersion, modseqid, 0);
    }
    ::Ice::Int ModifyContactDetail(const ::AliIMDBBase::SICEGenContactFull& detail, ::Ice::Long& gencntmodifyVersion, ::std::string& modseqid, const ::Ice::Context& __ctx)
    {
        return ModifyContactDetail(detail, gencntmodifyVersion, modseqid, &__ctx);
    }
    
private:

    ::Ice::Int ModifyContactDetail(const ::AliIMDBBase::SICEGenContactFull&, ::Ice::Long&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateContactGroupByCid(const ::std::string& userId, const ::std::string& cid, ::Ice::Int srcGroupId, ::Ice::Int dstGroupId, ::Ice::Int& contactTimes)
    {
        return UpdateContactGroupByCid(userId, cid, srcGroupId, dstGroupId, contactTimes, 0);
    }
    ::Ice::Int UpdateContactGroupByCid(const ::std::string& userId, const ::std::string& cid, ::Ice::Int srcGroupId, ::Ice::Int dstGroupId, ::Ice::Int& contactTimes, const ::Ice::Context& __ctx)
    {
        return UpdateContactGroupByCid(userId, cid, srcGroupId, dstGroupId, contactTimes, &__ctx);
    }
    
private:

    ::Ice::Int UpdateContactGroupByCid(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateContactNickNameByCid(const ::std::string& userId, const ::std::string& cid, const ::std::string& nickName, ::Ice::Int& contactTimes)
    {
        return UpdateContactNickNameByCid(userId, cid, nickName, contactTimes, 0);
    }
    ::Ice::Int UpdateContactNickNameByCid(const ::std::string& userId, const ::std::string& cid, const ::std::string& nickName, ::Ice::Int& contactTimes, const ::Ice::Context& __ctx)
    {
        return UpdateContactNickNameByCid(userId, cid, nickName, contactTimes, &__ctx);
    }
    
private:

    ::Ice::Int UpdateContactNickNameByCid(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetCRMContactDetail(const ::std::string& userId, const ::std::string& cntid, ::AliIMDBBase::SICECRMContactDetail& cntDetail)
    {
        return GetCRMContactDetail(userId, cntid, cntDetail, 0);
    }
    ::Ice::Int GetCRMContactDetail(const ::std::string& userId, const ::std::string& cntid, ::AliIMDBBase::SICECRMContactDetail& cntDetail, const ::Ice::Context& __ctx)
    {
        return GetCRMContactDetail(userId, cntid, cntDetail, &__ctx);
    }
    
private:

    ::Ice::Int GetCRMContactDetail(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICECRMContactDetail&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetHardCodeIds(const ::std::string& uuid, ::Ice::Int& count, ::std::string& allids)
    {
        return GetHardCodeIds(uuid, count, allids, 0);
    }
    ::Ice::Int GetHardCodeIds(const ::std::string& uuid, ::Ice::Int& count, ::std::string& allids, const ::Ice::Context& __ctx)
    {
        return GetHardCodeIds(uuid, count, allids, &__ctx);
    }
    
private:

    ::Ice::Int GetHardCodeIds(const ::std::string&, ::Ice::Int&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateHardCodeIds(const ::std::string& uuid, const ::std::string& id)
    {
        return UpdateHardCodeIds(uuid, id, 0);
    }
    ::Ice::Int UpdateHardCodeIds(const ::std::string& uuid, const ::std::string& id, const ::Ice::Context& __ctx)
    {
        return UpdateHardCodeIds(uuid, id, &__ctx);
    }
    
private:

    ::Ice::Int UpdateHardCodeIds(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetCntOtherModifyList(const ::std::string& userId, const ::std::string& sMaxSeqId, ::AliIMDBBase::SICECntOtherModInfoSeq& cntList)
    {
        return GetCntOtherModifyList(userId, sMaxSeqId, cntList, 0);
    }
    ::Ice::Int GetCntOtherModifyList(const ::std::string& userId, const ::std::string& sMaxSeqId, ::AliIMDBBase::SICECntOtherModInfoSeq& cntList, const ::Ice::Context& __ctx)
    {
        return GetCntOtherModifyList(userId, sMaxSeqId, cntList, &__ctx);
    }
    
private:

    ::Ice::Int GetCntOtherModifyList(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICECntOtherModInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetCntOtherModifyInfo(const ::std::string& userId, ::AliIMDBBase::SICECntOtherModInfo& cntOtherModInfo)
    {
        return GetCntOtherModifyInfo(userId, cntOtherModInfo, 0);
    }
    ::Ice::Int GetCntOtherModifyInfo(const ::std::string& userId, ::AliIMDBBase::SICECntOtherModInfo& cntOtherModInfo, const ::Ice::Context& __ctx)
    {
        return GetCntOtherModifyInfo(userId, cntOtherModInfo, &__ctx);
    }
    
private:

    ::Ice::Int GetCntOtherModifyInfo(const ::std::string&, ::AliIMDBBase::SICECntOtherModInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUserCRInfo(const ::std::string& uid, ::Ice::Int& crState, ::Ice::Int& begTime, ::Ice::Int& activeDegree)
    {
        return GetUserCRInfo(uid, crState, begTime, activeDegree, 0);
    }
    ::Ice::Int GetUserCRInfo(const ::std::string& uid, ::Ice::Int& crState, ::Ice::Int& begTime, ::Ice::Int& activeDegree, const ::Ice::Context& __ctx)
    {
        return GetUserCRInfo(uid, crState, begTime, activeDegree, &__ctx);
    }
    
private:

    ::Ice::Int GetUserCRInfo(const ::std::string&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int SetUserCRInfo(const ::std::string& uid, ::Ice::Int crState, ::Ice::Int& begTime)
    {
        return SetUserCRInfo(uid, crState, begTime, 0);
    }
    ::Ice::Int SetUserCRInfo(const ::std::string& uid, ::Ice::Int crState, ::Ice::Int& begTime, const ::Ice::Context& __ctx)
    {
        return SetUserCRInfo(uid, crState, begTime, &__ctx);
    }
    
private:

    ::Ice::Int SetUserCRInfo(const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetSmsUserInfoByUid(const ::std::string& userId, ::AliIMDBBase::SICESmsUserInfo& smsUserInfo)
    {
        return GetSmsUserInfoByUid(userId, smsUserInfo, 0);
    }
    ::Ice::Int GetSmsUserInfoByUid(const ::std::string& userId, ::AliIMDBBase::SICESmsUserInfo& smsUserInfo, const ::Ice::Context& __ctx)
    {
        return GetSmsUserInfoByUid(userId, smsUserInfo, &__ctx);
    }
    
private:

    ::Ice::Int GetSmsUserInfoByUid(const ::std::string&, ::AliIMDBBase::SICESmsUserInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetSmsUserMsgInfo(const ::std::string& userId, ::Ice::Int& todaySmsCount, ::Ice::Int& yesterdaySmsCount)
    {
        return GetSmsUserMsgInfo(userId, todaySmsCount, yesterdaySmsCount, 0);
    }
    ::Ice::Int GetSmsUserMsgInfo(const ::std::string& userId, ::Ice::Int& todaySmsCount, ::Ice::Int& yesterdaySmsCount, const ::Ice::Context& __ctx)
    {
        return GetSmsUserMsgInfo(userId, todaySmsCount, yesterdaySmsCount, &__ctx);
    }
    
private:

    ::Ice::Int GetSmsUserMsgInfo(const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int DelOfflineMsg(const ::std::string& uid, const ::std::string& date)
    {
        return DelOfflineMsg(uid, date, 0);
    }
    ::Ice::Int DelOfflineMsg(const ::std::string& uid, const ::std::string& date, const ::Ice::Context& __ctx)
    {
        return DelOfflineMsg(uid, date, &__ctx);
    }
    
private:

    ::Ice::Int DelOfflineMsg(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DelOfflineMsgEx(const ::std::string& uid, ::Ice::Int date)
    {
        return DelOfflineMsgEx(uid, date, 0);
    }
    ::Ice::Int DelOfflineMsgEx(const ::std::string& uid, ::Ice::Int date, const ::Ice::Context& __ctx)
    {
        return DelOfflineMsgEx(uid, date, &__ctx);
    }
    
private:

    ::Ice::Int DelOfflineMsgEx(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int DelWapOfflineMsg(const ::std::string& uid, const ::std::string& date)
    {
        return DelWapOfflineMsg(uid, date, 0);
    }
    ::Ice::Int DelWapOfflineMsg(const ::std::string& uid, const ::std::string& date, const ::Ice::Context& __ctx)
    {
        return DelWapOfflineMsg(uid, date, &__ctx);
    }
    
private:

    ::Ice::Int DelWapOfflineMsg(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int ModifyCntMemo(const ::std::string& uid, const ::std::string& cntid, const ::std::string& memo)
    {
        return ModifyCntMemo(uid, cntid, memo, 0);
    }
    ::Ice::Int ModifyCntMemo(const ::std::string& uid, const ::std::string& cntid, const ::std::string& memo, const ::Ice::Context& __ctx)
    {
        return ModifyCntMemo(uid, cntid, memo, &__ctx);
    }
    
private:

    ::Ice::Int ModifyCntMemo(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetCntMemo(const ::std::string& uid, const ::std::string& cntid, ::std::string& memo)
    {
        return GetCntMemo(uid, cntid, memo, 0);
    }
    ::Ice::Int GetCntMemo(const ::std::string& uid, const ::std::string& cntid, ::std::string& memo, const ::Ice::Context& __ctx)
    {
        return GetCntMemo(uid, cntid, memo, &__ctx);
    }
    
private:

    ::Ice::Int GetCntMemo(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUserTribe(const ::std::string& userId, ::ALiIMDBTribe::STribeIdDbSeq& tribeIdList)
    {
        return GetUserTribe(userId, tribeIdList, 0);
    }
    ::Ice::Int GetUserTribe(const ::std::string& userId, ::ALiIMDBTribe::STribeIdDbSeq& tribeIdList, const ::Ice::Context& __ctx)
    {
        return GetUserTribe(userId, tribeIdList, &__ctx);
    }
    
private:

    ::Ice::Int GetUserTribe(const ::std::string&, ::ALiIMDBTribe::STribeIdDbSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUserTribeConfig(const ::std::string& userId, ::Ice::Int& addVerify)
    {
        return GetUserTribeConfig(userId, addVerify, 0);
    }
    ::Ice::Int GetUserTribeConfig(const ::std::string& userId, ::Ice::Int& addVerify, const ::Ice::Context& __ctx)
    {
        return GetUserTribeConfig(userId, addVerify, &__ctx);
    }
    
private:

    ::Ice::Int GetUserTribeConfig(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateUserTribeConfig(const ::std::string& userId, ::Ice::Int addVerify)
    {
        return UpdateUserTribeConfig(userId, addVerify, 0);
    }
    ::Ice::Int UpdateUserTribeConfig(const ::std::string& userId, ::Ice::Int addVerify, const ::Ice::Context& __ctx)
    {
        return UpdateUserTribeConfig(userId, addVerify, &__ctx);
    }
    
private:

    ::Ice::Int UpdateUserTribeConfig(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int GetTribeOffMngMsg(::Ice::Int tribeId, const ::std::string& memberId, ::ALiIMDBTribe::STribeOfflineMsgSeq& offlineMsgList)
    {
        return GetTribeOffMngMsg(tribeId, memberId, offlineMsgList, 0);
    }
    ::Ice::Int GetTribeOffMngMsg(::Ice::Int tribeId, const ::std::string& memberId, ::ALiIMDBTribe::STribeOfflineMsgSeq& offlineMsgList, const ::Ice::Context& __ctx)
    {
        return GetTribeOffMngMsg(tribeId, memberId, offlineMsgList, &__ctx);
    }
    
private:

    ::Ice::Int GetTribeOffMngMsg(::Ice::Int, const ::std::string&, ::ALiIMDBTribe::STribeOfflineMsgSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int DelTribeOffMngMsg(::Ice::Int tribeId, const ::std::string& memberId)
    {
        return DelTribeOffMngMsg(tribeId, memberId, 0);
    }
    ::Ice::Int DelTribeOffMngMsg(::Ice::Int tribeId, const ::std::string& memberId, const ::Ice::Context& __ctx)
    {
        return DelTribeOffMngMsg(tribeId, memberId, &__ctx);
    }
    
private:

    ::Ice::Int DelTribeOffMngMsg(::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int ModifyPersonalShow(const ::std::string& uid, const ::std::string& newshow)
    {
        return ModifyPersonalShow(uid, newshow, 0);
    }
    ::Ice::Int ModifyPersonalShow(const ::std::string& uid, const ::std::string& newshow, const ::Ice::Context& __ctx)
    {
        return ModifyPersonalShow(uid, newshow, &__ctx);
    }
    
private:

    ::Ice::Int ModifyPersonalShow(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetPersonalShow(const ::std::string& uid, ::std::string& show)
    {
        return GetPersonalShow(uid, show, 0);
    }
    ::Ice::Int GetPersonalShow(const ::std::string& uid, ::std::string& show, const ::Ice::Context& __ctx)
    {
        return GetPersonalShow(uid, show, &__ctx);
    }
    
private:

    ::Ice::Int GetPersonalShow(const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetAllOnlineSmsUser(::Ice::StringSeq& userList)
    {
        return GetAllOnlineSmsUser(userList, 0);
    }
    ::Ice::Int GetAllOnlineSmsUser(::Ice::StringSeq& userList, const ::Ice::Context& __ctx)
    {
        return GetAllOnlineSmsUser(userList, &__ctx);
    }
    
private:

    ::Ice::Int GetAllOnlineSmsUser(::Ice::StringSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUserKeyWordDegree(const ::std::string& userId, ::std::string& keyword, ::Ice::Int& flag, ::Ice::Float& degree)
    {
        return GetUserKeyWordDegree(userId, keyword, flag, degree, 0);
    }
    ::Ice::Int GetUserKeyWordDegree(const ::std::string& userId, ::std::string& keyword, ::Ice::Int& flag, ::Ice::Float& degree, const ::Ice::Context& __ctx)
    {
        return GetUserKeyWordDegree(userId, keyword, flag, degree, &__ctx);
    }
    
private:

    ::Ice::Int GetUserKeyWordDegree(const ::std::string&, ::std::string&, ::Ice::Int&, ::Ice::Float&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUserValue(const ::std::string& userId, ::Ice::Int& uservalue)
    {
        return GetUserValue(userId, uservalue, 0);
    }
    ::Ice::Int GetUserValue(const ::std::string& userId, ::Ice::Int& uservalue, const ::Ice::Context& __ctx)
    {
        return GetUserValue(userId, uservalue, &__ctx);
    }
    
private:

    ::Ice::Int GetUserValue(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateUserMd5Password(const ::std::string& userId, const ::std::string& password)
    {
        return UpdateUserMd5Password(userId, password, 0);
    }
    ::Ice::Int UpdateUserMd5Password(const ::std::string& userId, const ::std::string& password, const ::Ice::Context& __ctx)
    {
        return UpdateUserMd5Password(userId, password, &__ctx);
    }
    
private:

    ::Ice::Int UpdateUserMd5Password(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int InsertYahooUser(const ::AliIMDBBase::SUdbUserInfo& userInfo, ::Ice::Int activeDegree, const ::AliIMDBBase::SICEGenContactFullSeq& contactList)
    {
        return InsertYahooUser(userInfo, activeDegree, contactList, 0);
    }
    ::Ice::Int InsertYahooUser(const ::AliIMDBBase::SUdbUserInfo& userInfo, ::Ice::Int activeDegree, const ::AliIMDBBase::SICEGenContactFullSeq& contactList, const ::Ice::Context& __ctx)
    {
        return InsertYahooUser(userInfo, activeDegree, contactList, &__ctx);
    }
    
private:

    ::Ice::Int InsertYahooUser(const ::AliIMDBBase::SUdbUserInfo&, ::Ice::Int, const ::AliIMDBBase::SICEGenContactFullSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetContactDetailByUid(const ::std::string& uid, const ::std::string& cid, ::AliIMDBBase::SICEGenContactFull& detail)
    {
        return GetContactDetailByUid(uid, cid, detail, 0);
    }
    ::Ice::Int GetContactDetailByUid(const ::std::string& uid, const ::std::string& cid, ::AliIMDBBase::SICEGenContactFull& detail, const ::Ice::Context& __ctx)
    {
        return GetContactDetailByUid(uid, cid, detail, &__ctx);
    }
    
private:

    ::Ice::Int GetContactDetailByUid(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEGenContactFull&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetChildTeamList(const ::std::string& parentId, ::AliIMDBBase::SChildUserInfoSeq& childTeamList)
    {
        return GetChildTeamList(parentId, childTeamList, 0);
    }
    ::Ice::Int GetChildTeamList(const ::std::string& parentId, ::AliIMDBBase::SChildUserInfoSeq& childTeamList, const ::Ice::Context& __ctx)
    {
        return GetChildTeamList(parentId, childTeamList, &__ctx);
    }
    
private:

    ::Ice::Int GetChildTeamList(const ::std::string&, ::AliIMDBBase::SChildUserInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetChildTeamList2(const ::std::string& parentId, ::AliIMDBBase::SChildUserInfoSeq2& childTeamList)
    {
        return GetChildTeamList2(parentId, childTeamList, 0);
    }
    ::Ice::Int GetChildTeamList2(const ::std::string& parentId, ::AliIMDBBase::SChildUserInfoSeq2& childTeamList, const ::Ice::Context& __ctx)
    {
        return GetChildTeamList2(parentId, childTeamList, &__ctx);
    }
    
private:

    ::Ice::Int GetChildTeamList2(const ::std::string&, ::AliIMDBBase::SChildUserInfoSeq2&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetChildUserInfo(const ::std::string& childId, ::AliIMDBBase::SChildUserInfo& childInfo)
    {
        return GetChildUserInfo(childId, childInfo, 0);
    }
    ::Ice::Int GetChildUserInfo(const ::std::string& childId, ::AliIMDBBase::SChildUserInfo& childInfo, const ::Ice::Context& __ctx)
    {
        return GetChildUserInfo(childId, childInfo, &__ctx);
    }
    
private:

    ::Ice::Int GetChildUserInfo(const ::std::string&, ::AliIMDBBase::SChildUserInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetChildUserInfo2(const ::std::string& childId, ::AliIMDBBase::SChildUserInfo2& childInfo)
    {
        return GetChildUserInfo2(childId, childInfo, 0);
    }
    ::Ice::Int GetChildUserInfo2(const ::std::string& childId, ::AliIMDBBase::SChildUserInfo2& childInfo, const ::Ice::Context& __ctx)
    {
        return GetChildUserInfo2(childId, childInfo, &__ctx);
    }
    
private:

    ::Ice::Int GetChildUserInfo2(const ::std::string&, ::AliIMDBBase::SChildUserInfo2&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetShareContactList(const ::std::string& uid, ::Ice::StringSeq& shareContactIdList)
    {
        return GetShareContactList(uid, shareContactIdList, 0);
    }
    ::Ice::Int GetShareContactList(const ::std::string& uid, ::Ice::StringSeq& shareContactIdList, const ::Ice::Context& __ctx)
    {
        return GetShareContactList(uid, shareContactIdList, &__ctx);
    }
    
private:

    ::Ice::Int GetShareContactList(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetContactShareInfo(const ::std::string& uid, const ::std::string& contactId, ::Ice::Int type, ::Ice::Int& value)
    {
        return GetContactShareInfo(uid, contactId, type, value, 0);
    }
    ::Ice::Int GetContactShareInfo(const ::std::string& uid, const ::std::string& contactId, ::Ice::Int type, ::Ice::Int& value, const ::Ice::Context& __ctx)
    {
        return GetContactShareInfo(uid, contactId, type, value, &__ctx);
    }
    
private:

    ::Ice::Int GetContactShareInfo(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int SetContactShareInfo(const ::std::string& uid, const ::std::string& contactId, ::Ice::Int type, ::Ice::Int value)
    {
        return SetContactShareInfo(uid, contactId, type, value, 0);
    }
    ::Ice::Int SetContactShareInfo(const ::std::string& uid, const ::std::string& contactId, ::Ice::Int type, ::Ice::Int value, const ::Ice::Context& __ctx)
    {
        return SetContactShareInfo(uid, contactId, type, value, &__ctx);
    }
    
private:

    ::Ice::Int SetContactShareInfo(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int GetMultiAccountContactList(const ::std::string& uid, ::AliIMDBBase::SICEContactInfoSeq& contactIdList)
    {
        return GetMultiAccountContactList(uid, contactIdList, 0);
    }
    ::Ice::Int GetMultiAccountContactList(const ::std::string& uid, ::AliIMDBBase::SICEContactInfoSeq& contactIdList, const ::Ice::Context& __ctx)
    {
        return GetMultiAccountContactList(uid, contactIdList, &__ctx);
    }
    
private:

    ::Ice::Int GetMultiAccountContactList(const ::std::string&, ::AliIMDBBase::SICEContactInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetMultiServiceList(const ::std::string& uid, ::Ice::IntSeq& ServiceList)
    {
        return GetMultiServiceList(uid, ServiceList, 0);
    }
    ::Ice::Int GetMultiServiceList(const ::std::string& uid, ::Ice::IntSeq& ServiceList, const ::Ice::Context& __ctx)
    {
        return GetMultiServiceList(uid, ServiceList, &__ctx);
    }
    
private:

    ::Ice::Int GetMultiServiceList(const ::std::string&, ::Ice::IntSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetMultiBindToUser(const ::std::string& uid, ::std::string& bindToUser)
    {
        return GetMultiBindToUser(uid, bindToUser, 0);
    }
    ::Ice::Int GetMultiBindToUser(const ::std::string& uid, ::std::string& bindToUser, const ::Ice::Context& __ctx)
    {
        return GetMultiBindToUser(uid, bindToUser, &__ctx);
    }
    
private:

    ::Ice::Int GetMultiBindToUser(const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetWebBinds(const ::std::string& uid, ::AliIMDBBase::SICEKvPairSeq& binds)
    {
        return GetWebBinds(uid, binds, 0);
    }
    ::Ice::Int GetWebBinds(const ::std::string& uid, ::AliIMDBBase::SICEKvPairSeq& binds, const ::Ice::Context& __ctx)
    {
        return GetWebBinds(uid, binds, &__ctx);
    }
    
private:

    ::Ice::Int GetWebBinds(const ::std::string&, ::AliIMDBBase::SICEKvPairSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int AddWebBind(const ::std::string& uid, const ::AliIMDBBase::SICEKvPair& bind, ::std::string& webmd5pw)
    {
        return AddWebBind(uid, bind, webmd5pw, 0);
    }
    ::Ice::Int AddWebBind(const ::std::string& uid, const ::AliIMDBBase::SICEKvPair& bind, ::std::string& webmd5pw, const ::Ice::Context& __ctx)
    {
        return AddWebBind(uid, bind, webmd5pw, &__ctx);
    }
    
private:

    ::Ice::Int AddWebBind(const ::std::string&, const ::AliIMDBBase::SICEKvPair&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int ChangeWebBind(const ::std::string& uid, const ::AliIMDBBase::SICEKvPair& newbind, ::std::string& webmd5pw)
    {
        return ChangeWebBind(uid, newbind, webmd5pw, 0);
    }
    ::Ice::Int ChangeWebBind(const ::std::string& uid, const ::AliIMDBBase::SICEKvPair& newbind, ::std::string& webmd5pw, const ::Ice::Context& __ctx)
    {
        return ChangeWebBind(uid, newbind, webmd5pw, &__ctx);
    }
    
private:

    ::Ice::Int ChangeWebBind(const ::std::string&, const ::AliIMDBBase::SICEKvPair&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int DelWebBind(const ::std::string& uid, const ::std::string& binduid)
    {
        return DelWebBind(uid, binduid, 0);
    }
    ::Ice::Int DelWebBind(const ::std::string& uid, const ::std::string& binduid, const ::Ice::Context& __ctx)
    {
        return DelWebBind(uid, binduid, &__ctx);
    }
    
private:

    ::Ice::Int DelWebBind(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserSession(const ::std::string& uid, ::AliIM::SIceSession& retsession)
    {
        return getUserSession(uid, retsession, 0);
    }
    ::Ice::Int getUserSession(const ::std::string& uid, ::AliIM::SIceSession& retsession, const ::Ice::Context& __ctx)
    {
        return getUserSession(uid, retsession, &__ctx);
    }
    
private:

    ::Ice::Int getUserSession(const ::std::string&, ::AliIM::SIceSession&, const ::Ice::Context*);
    
public:

    ::Ice::Int checkUserSession(const ::std::string& uid, const ::std::string& sessionNo)
    {
        return checkUserSession(uid, sessionNo, 0);
    }
    ::Ice::Int checkUserSession(const ::std::string& uid, const ::std::string& sessionNo, const ::Ice::Context& __ctx)
    {
        return checkUserSession(uid, sessionNo, &__ctx);
    }
    
private:

    ::Ice::Int checkUserSession(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int removeSession(const ::std::string& uid)
    {
        return removeSession(uid, 0);
    }
    ::Ice::Int removeSession(const ::std::string& uid, const ::Ice::Context& __ctx)
    {
        return removeSession(uid, &__ctx);
    }
    
private:

    ::Ice::Int removeSession(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateSignature(const ::std::string& uid, const ::std::string& signature)
    {
        return UpdateSignature(uid, signature, 0);
    }
    ::Ice::Int UpdateSignature(const ::std::string& uid, const ::std::string& signature, const ::Ice::Context& __ctx)
    {
        return UpdateSignature(uid, signature, &__ctx);
    }
    
private:

    ::Ice::Int UpdateSignature(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int updateContactClientInfo(const ::std::string& uid, const ::std::string& cid, const ::std::string& data, ::Ice::Int& contactTimes)
    {
        return updateContactClientInfo(uid, cid, data, contactTimes, 0);
    }
    ::Ice::Int updateContactClientInfo(const ::std::string& uid, const ::std::string& cid, const ::std::string& data, ::Ice::Int& contactTimes, const ::Ice::Context& __ctx)
    {
        return updateContactClientInfo(uid, cid, data, contactTimes, &__ctx);
    }
    
private:

    ::Ice::Int updateContactClientInfo(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserProfile(const ::std::string& uid, ::AliIMDBBase::SICEKVMap& profilemap)
    {
        return getUserProfile(uid, profilemap, 0);
    }
    ::Ice::Int getUserProfile(const ::std::string& uid, ::AliIMDBBase::SICEKVMap& profilemap, const ::Ice::Context& __ctx)
    {
        return getUserProfile(uid, profilemap, &__ctx);
    }
    
private:

    ::Ice::Int getUserProfile(const ::std::string&, ::AliIMDBBase::SICEKVMap&, const ::Ice::Context*);
    
public:

    ::Ice::Int getPeerVerifyFlag(const ::std::string& uid, const ::std::string& cid, ::Ice::Int& flag)
    {
        return getPeerVerifyFlag(uid, cid, flag, 0);
    }
    ::Ice::Int getPeerVerifyFlag(const ::std::string& uid, const ::std::string& cid, ::Ice::Int& flag, const ::Ice::Context& __ctx)
    {
        return getPeerVerifyFlag(uid, cid, flag, &__ctx);
    }
    
private:

    ::Ice::Int getPeerVerifyFlag(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int getPeerVerifyFlagQuestion(const ::std::string& uid, const ::std::string& cid, ::Ice::Int& flag, ::std::string& question, ::std::string& answer)
    {
        return getPeerVerifyFlagQuestion(uid, cid, flag, question, answer, 0);
    }
    ::Ice::Int getPeerVerifyFlagQuestion(const ::std::string& uid, const ::std::string& cid, ::Ice::Int& flag, ::std::string& question, ::std::string& answer, const ::Ice::Context& __ctx)
    {
        return getPeerVerifyFlagQuestion(uid, cid, flag, question, answer, &__ctx);
    }
    
private:

    ::Ice::Int getPeerVerifyFlagQuestion(const ::std::string&, const ::std::string&, ::Ice::Int&, ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int getNickName(const ::std::string& uid, ::std::string& nickname)
    {
        return getNickName(uid, nickname, 0);
    }
    ::Ice::Int getNickName(const ::std::string& uid, ::std::string& nickname, const ::Ice::Context& __ctx)
    {
        return getNickName(uid, nickname, &__ctx);
    }
    
private:

    ::Ice::Int getNickName(const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int getFTServiceInfo(const ::std::string& senduid, const ::std::string& touid, ::std::string& srvIp, ::Ice::Short& srvPort)
    {
        return getFTServiceInfo(senduid, touid, srvIp, srvPort, 0);
    }
    ::Ice::Int getFTServiceInfo(const ::std::string& senduid, const ::std::string& touid, ::std::string& srvIp, ::Ice::Short& srvPort, const ::Ice::Context& __ctx)
    {
        return getFTServiceInfo(senduid, touid, srvIp, srvPort, &__ctx);
    }
    
private:

    ::Ice::Int getFTServiceInfo(const ::std::string&, const ::std::string&, ::std::string&, ::Ice::Short&, const ::Ice::Context*);
    
public:

    ::Ice::Int getTietuServiceInfo(const ::std::string& senduid, ::Ice::Int& sessionSum, ::std::string& srvIp, ::Ice::Short& srvPort)
    {
        return getTietuServiceInfo(senduid, sessionSum, srvIp, srvPort, 0);
    }
    ::Ice::Int getTietuServiceInfo(const ::std::string& senduid, ::Ice::Int& sessionSum, ::std::string& srvIp, ::Ice::Short& srvPort, const ::Ice::Context& __ctx)
    {
        return getTietuServiceInfo(senduid, sessionSum, srvIp, srvPort, &__ctx);
    }
    
private:

    ::Ice::Int getTietuServiceInfo(const ::std::string&, ::Ice::Int&, ::std::string&, ::Ice::Short&, const ::Ice::Context*);
    
public:

    ::Ice::Int getFTSAddr(::Ice::Short type, const ::std::string& senduid, ::Ice::Long& ftsid, ::std::string& srvIp, ::Ice::Short& srvPort)
    {
        return getFTSAddr(type, senduid, ftsid, srvIp, srvPort, 0);
    }
    ::Ice::Int getFTSAddr(::Ice::Short type, const ::std::string& senduid, ::Ice::Long& ftsid, ::std::string& srvIp, ::Ice::Short& srvPort, const ::Ice::Context& __ctx)
    {
        return getFTSAddr(type, senduid, ftsid, srvIp, srvPort, &__ctx);
    }
    
private:

    ::Ice::Int getFTSAddr(::Ice::Short, const ::std::string&, ::Ice::Long&, ::std::string&, ::Ice::Short&, const ::Ice::Context*);
    
public:

    ::Ice::Int registerWanghao(const ::std::string& longuid, const ::AliIMInterface::KVMAP& attrs)
    {
        return registerWanghao(longuid, attrs, 0);
    }
    ::Ice::Int registerWanghao(const ::std::string& longuid, const ::AliIMInterface::KVMAP& attrs, const ::Ice::Context& __ctx)
    {
        return registerWanghao(longuid, attrs, &__ctx);
    }
    
private:

    ::Ice::Int registerWanghao(const ::std::string&, const ::AliIMInterface::KVMAP&, const ::Ice::Context*);
    
public:

    ::Ice::Int updateUserProfile(const ::std::string& longuid, const ::AliIMInterface::KVMAP& newattrs)
    {
        return updateUserProfile(longuid, newattrs, 0);
    }
    ::Ice::Int updateUserProfile(const ::std::string& longuid, const ::AliIMInterface::KVMAP& newattrs, const ::Ice::Context& __ctx)
    {
        return updateUserProfile(longuid, newattrs, &__ctx);
    }
    
private:

    ::Ice::Int updateUserProfile(const ::std::string&, const ::AliIMInterface::KVMAP&, const ::Ice::Context*);
    
public:

    ::Ice::Int loadSitePrefix(::AliIMDBBase::SImPrefixSeq& pv)
    {
        return loadSitePrefix(pv, 0);
    }
    ::Ice::Int loadSitePrefix(::AliIMDBBase::SImPrefixSeq& pv, const ::Ice::Context& __ctx)
    {
        return loadSitePrefix(pv, &__ctx);
    }
    
private:

    ::Ice::Int loadSitePrefix(::AliIMDBBase::SImPrefixSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int updateAepUserId(const ::std::string& longuid, const ::std::string& aepuserid)
    {
        return updateAepUserId(longuid, aepuserid, 0);
    }
    ::Ice::Int updateAepUserId(const ::std::string& longuid, const ::std::string& aepuserid, const ::Ice::Context& __ctx)
    {
        return updateAepUserId(longuid, aepuserid, &__ctx);
    }
    
private:

    ::Ice::Int updateAepUserId(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int updateVipflag(const ::std::string& uid, ::Ice::Int flag)
    {
        return updateVipflag(uid, flag, 0);
    }
    ::Ice::Int updateVipflag(const ::std::string& uid, ::Ice::Int flag, const ::Ice::Context& __ctx)
    {
        return updateVipflag(uid, flag, &__ctx);
    }
    
private:

    ::Ice::Int updateVipflag(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int checkWangHaoPwd(const ::std::string& longuid, bool btokenpw, const ::std::string& pw, ::std::string& retluid, ::std::string& retPwToken, ::std::string& retmd5passwd, ::Ice::Int& activeState)
    {
        return checkWangHaoPwd(longuid, btokenpw, pw, retluid, retPwToken, retmd5passwd, activeState, 0);
    }
    ::Ice::Int checkWangHaoPwd(const ::std::string& longuid, bool btokenpw, const ::std::string& pw, ::std::string& retluid, ::std::string& retPwToken, ::std::string& retmd5passwd, ::Ice::Int& activeState, const ::Ice::Context& __ctx)
    {
        return checkWangHaoPwd(longuid, btokenpw, pw, retluid, retPwToken, retmd5passwd, activeState, &__ctx);
    }
    
private:

    ::Ice::Int checkWangHaoPwd(const ::std::string&, bool, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int checkCanLogin(const ::std::string& uid, ::Ice::Int version, const ::std::string& extrainfo)
    {
        return checkCanLogin(uid, version, extrainfo, 0);
    }
    ::Ice::Int checkCanLogin(const ::std::string& uid, ::Ice::Int version, const ::std::string& extrainfo, const ::Ice::Context& __ctx)
    {
        return checkCanLogin(uid, version, extrainfo, &__ctx);
    }
    
private:

    ::Ice::Int checkCanLogin(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int GetSIPSessionId(const ::std::string& uid, const ::std::string& appid, const ::std::string& type, ::std::string& sessionId)
    {
        return GetSIPSessionId(uid, appid, type, sessionId, 0);
    }
    ::Ice::Int GetSIPSessionId(const ::std::string& uid, const ::std::string& appid, const ::std::string& type, ::std::string& sessionId, const ::Ice::Context& __ctx)
    {
        return GetSIPSessionId(uid, appid, type, sessionId, &__ctx);
    }
    
private:

    ::Ice::Int GetSIPSessionId(const ::std::string&, const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int CheckGsContact(const ::std::string& uid, const ::std::string& contactid, ::Ice::Int& flag)
    {
        return CheckGsContact(uid, contactid, flag, 0);
    }
    ::Ice::Int CheckGsContact(const ::std::string& uid, const ::std::string& contactid, ::Ice::Int& flag, const ::Ice::Context& __ctx)
    {
        return CheckGsContact(uid, contactid, flag, &__ctx);
    }
    
private:

    ::Ice::Int CheckGsContact(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateSmsAuthCode(const ::std::string& uid, const ::std::string& phoneNo, const ::std::string& code)
    {
        return UpdateSmsAuthCode(uid, phoneNo, code, 0);
    }
    ::Ice::Int UpdateSmsAuthCode(const ::std::string& uid, const ::std::string& phoneNo, const ::std::string& code, const ::Ice::Context& __ctx)
    {
        return UpdateSmsAuthCode(uid, phoneNo, code, &__ctx);
    }
    
private:

    ::Ice::Int UpdateSmsAuthCode(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int CheckSmsAuthCode(const ::std::string& uid, const ::std::string& phoneNo, const ::std::string& code)
    {
        return CheckSmsAuthCode(uid, phoneNo, code, 0);
    }
    ::Ice::Int CheckSmsAuthCode(const ::std::string& uid, const ::std::string& phoneNo, const ::std::string& code, const ::Ice::Context& __ctx)
    {
        return CheckSmsAuthCode(uid, phoneNo, code, &__ctx);
    }
    
private:

    ::Ice::Int CheckSmsAuthCode(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int UpdateUserValueBySmsAuth(const ::std::string& uid)
    {
        return UpdateUserValueBySmsAuth(uid, 0);
    }
    ::Ice::Int UpdateUserValueBySmsAuth(const ::std::string& uid, const ::Ice::Context& __ctx)
    {
        return UpdateUserValueBySmsAuth(uid, &__ctx);
    }
    
private:

    ::Ice::Int UpdateUserValueBySmsAuth(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int CheckSmsAuthStatus(const ::std::string& uid, ::Ice::Int& status)
    {
        return CheckSmsAuthStatus(uid, status, 0);
    }
    ::Ice::Int CheckSmsAuthStatus(const ::std::string& uid, ::Ice::Int& status, const ::Ice::Context& __ctx)
    {
        return CheckSmsAuthStatus(uid, status, &__ctx);
    }
    
private:

    ::Ice::Int CheckSmsAuthStatus(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int CheckUserTokenExtra(const ::std::string& userId, const ::std::string& passwd, ::std::string& lid, ::std::string& retuidtokenpw, ::std::string& retmd5passwd, ::Ice::Int& activeStat, ::Ice::Int& webdata)
    {
        return CheckUserTokenExtra(userId, passwd, lid, retuidtokenpw, retmd5passwd, activeStat, webdata, 0);
    }
    ::Ice::Int CheckUserTokenExtra(const ::std::string& userId, const ::std::string& passwd, ::std::string& lid, ::std::string& retuidtokenpw, ::std::string& retmd5passwd, ::Ice::Int& activeStat, ::Ice::Int& webdata, const ::Ice::Context& __ctx)
    {
        return CheckUserTokenExtra(userId, passwd, lid, retuidtokenpw, retmd5passwd, activeStat, webdata, &__ctx);
    }
    
private:

    ::Ice::Int CheckUserTokenExtra(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int CheckUserWebPasswdExtra(const ::std::string& userId, const ::std::string& passwd, ::std::string& lid, ::std::string& retuidtokenpw, ::std::string& retmd5passwd, ::Ice::Int& activeStat, ::Ice::Int& webdata)
    {
        return CheckUserWebPasswdExtra(userId, passwd, lid, retuidtokenpw, retmd5passwd, activeStat, webdata, 0);
    }
    ::Ice::Int CheckUserWebPasswdExtra(const ::std::string& userId, const ::std::string& passwd, ::std::string& lid, ::std::string& retuidtokenpw, ::std::string& retmd5passwd, ::Ice::Int& activeStat, ::Ice::Int& webdata, const ::Ice::Context& __ctx)
    {
        return CheckUserWebPasswdExtra(userId, passwd, lid, retuidtokenpw, retmd5passwd, activeStat, webdata, &__ctx);
    }
    
private:

    ::Ice::Int CheckUserWebPasswdExtra(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int getESShuntStatus(const ::std::string& uid, ::std::string& shunt)
    {
        return getESShuntStatus(uid, shunt, 0);
    }
    ::Ice::Int getESShuntStatus(const ::std::string& uid, ::std::string& shunt, const ::Ice::Context& __ctx)
    {
        return getESShuntStatus(uid, shunt, &__ctx);
    }
    
private:

    ::Ice::Int getESShuntStatus(const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int setESShuntStatus(const ::std::string& uid, const ::std::string& shunt)
    {
        return setESShuntStatus(uid, shunt, 0);
    }
    ::Ice::Int setESShuntStatus(const ::std::string& uid, const ::std::string& shunt, const ::Ice::Context& __ctx)
    {
        return setESShuntStatus(uid, shunt, &__ctx);
    }
    
private:

    ::Ice::Int setESShuntStatus(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int getMaxESReceptNum(const ::std::string& uid, ::Ice::Int groupId, ::AliIMDBBase::SICEReceptNumSeq& eserviceList)
    {
        return getMaxESReceptNum(uid, groupId, eserviceList, 0);
    }
    ::Ice::Int getMaxESReceptNum(const ::std::string& uid, ::Ice::Int groupId, ::AliIMDBBase::SICEReceptNumSeq& eserviceList, const ::Ice::Context& __ctx)
    {
        return getMaxESReceptNum(uid, groupId, eserviceList, &__ctx);
    }
    
private:

    ::Ice::Int getMaxESReceptNum(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEReceptNumSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int setMaxESReceptNum(const ::std::string& uid, ::Ice::Int groupId, const ::AliIMDBBase::SICEReceptNumSeq& eserviceList)
    {
        return setMaxESReceptNum(uid, groupId, eserviceList, 0);
    }
    ::Ice::Int setMaxESReceptNum(const ::std::string& uid, ::Ice::Int groupId, const ::AliIMDBBase::SICEReceptNumSeq& eserviceList, const ::Ice::Context& __ctx)
    {
        return setMaxESReceptNum(uid, groupId, eserviceList, &__ctx);
    }
    
private:

    ::Ice::Int setMaxESReceptNum(const ::std::string&, ::Ice::Int, const ::AliIMDBBase::SICEReceptNumSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getESPriority(const ::std::string& uid, ::Ice::Int groupId, ::AliIMDBBase::SICEReceptPrioritySeq& eserviceList)
    {
        return getESPriority(uid, groupId, eserviceList, 0);
    }
    ::Ice::Int getESPriority(const ::std::string& uid, ::Ice::Int groupId, ::AliIMDBBase::SICEReceptPrioritySeq& eserviceList, const ::Ice::Context& __ctx)
    {
        return getESPriority(uid, groupId, eserviceList, &__ctx);
    }
    
private:

    ::Ice::Int getESPriority(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEReceptPrioritySeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int setESPriority(const ::std::string& uid, ::Ice::Int groupId, const ::AliIMDBBase::SICEReceptPrioritySeq& eserviceList)
    {
        return setESPriority(uid, groupId, eserviceList, 0);
    }
    ::Ice::Int setESPriority(const ::std::string& uid, ::Ice::Int groupId, const ::AliIMDBBase::SICEReceptPrioritySeq& eserviceList, const ::Ice::Context& __ctx)
    {
        return setESPriority(uid, groupId, eserviceList, &__ctx);
    }
    
private:

    ::Ice::Int setESPriority(const ::std::string&, ::Ice::Int, const ::AliIMDBBase::SICEReceptPrioritySeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getESRecvOffMsg(const ::std::string& uid, ::Ice::Int groupId, ::AliIMDBBase::SICERecvOffMsgSeq& eserviceList)
    {
        return getESRecvOffMsg(uid, groupId, eserviceList, 0);
    }
    ::Ice::Int getESRecvOffMsg(const ::std::string& uid, ::Ice::Int groupId, ::AliIMDBBase::SICERecvOffMsgSeq& eserviceList, const ::Ice::Context& __ctx)
    {
        return getESRecvOffMsg(uid, groupId, eserviceList, &__ctx);
    }
    
private:

    ::Ice::Int getESRecvOffMsg(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICERecvOffMsgSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int setESRecvOffMsg(const ::std::string& uid, ::Ice::Int groupId, const ::AliIMDBBase::SICERecvOffMsgSeq& eserviceList)
    {
        return setESRecvOffMsg(uid, groupId, eserviceList, 0);
    }
    ::Ice::Int setESRecvOffMsg(const ::std::string& uid, ::Ice::Int groupId, const ::AliIMDBBase::SICERecvOffMsgSeq& eserviceList, const ::Ice::Context& __ctx)
    {
        return setESRecvOffMsg(uid, groupId, eserviceList, &__ctx);
    }
    
private:

    ::Ice::Int setESRecvOffMsg(const ::std::string&, ::Ice::Int, const ::AliIMDBBase::SICERecvOffMsgSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getESGroupList(const ::std::string& uid, ::Ice::IntSeq& groupList)
    {
        return getESGroupList(uid, groupList, 0);
    }
    ::Ice::Int getESGroupList(const ::std::string& uid, ::Ice::IntSeq& groupList, const ::Ice::Context& __ctx)
    {
        return getESGroupList(uid, groupList, &__ctx);
    }
    
private:

    ::Ice::Int getESGroupList(const ::std::string&, ::Ice::IntSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int insertESGroupInfo(const ::std::string& uid, const ::AliIMDBBase::SICEESGroupInfo& groupInfo, ::Ice::Int& groupId)
    {
        return insertESGroupInfo(uid, groupInfo, groupId, 0);
    }
    ::Ice::Int insertESGroupInfo(const ::std::string& uid, const ::AliIMDBBase::SICEESGroupInfo& groupInfo, ::Ice::Int& groupId, const ::Ice::Context& __ctx)
    {
        return insertESGroupInfo(uid, groupInfo, groupId, &__ctx);
    }
    
private:

    ::Ice::Int insertESGroupInfo(const ::std::string&, const ::AliIMDBBase::SICEESGroupInfo&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int updateESGroupInfo(const ::std::string& uid, const ::AliIMDBBase::SICEESGroupInfo& group)
    {
        return updateESGroupInfo(uid, group, 0);
    }
    ::Ice::Int updateESGroupInfo(const ::std::string& uid, const ::AliIMDBBase::SICEESGroupInfo& group, const ::Ice::Context& __ctx)
    {
        return updateESGroupInfo(uid, group, &__ctx);
    }
    
private:

    ::Ice::Int updateESGroupInfo(const ::std::string&, const ::AliIMDBBase::SICEESGroupInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int delESGroup(const ::std::string& uid, ::Ice::Int groupid)
    {
        return delESGroup(uid, groupid, 0);
    }
    ::Ice::Int delESGroup(const ::std::string& uid, ::Ice::Int groupid, const ::Ice::Context& __ctx)
    {
        return delESGroup(uid, groupid, &__ctx);
    }
    
private:

    ::Ice::Int delESGroup(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int getESGroupInfo(const ::std::string& uid, ::AliIMDBBase::SICEESGroupInfoSeq& groupList)
    {
        return getESGroupInfo(uid, groupList, 0);
    }
    ::Ice::Int getESGroupInfo(const ::std::string& uid, ::AliIMDBBase::SICEESGroupInfoSeq& groupList, const ::Ice::Context& __ctx)
    {
        return getESGroupInfo(uid, groupList, &__ctx);
    }
    
private:

    ::Ice::Int getESGroupInfo(const ::std::string&, ::AliIMDBBase::SICEESGroupInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getESGroupInfoByID(const ::std::string& uid, ::Ice::Int groupId, ::AliIMDBBase::SICEESGroupInfo& groupInfo)
    {
        return getESGroupInfoByID(uid, groupId, groupInfo, 0);
    }
    ::Ice::Int getESGroupInfoByID(const ::std::string& uid, ::Ice::Int groupId, ::AliIMDBBase::SICEESGroupInfo& groupInfo, const ::Ice::Context& __ctx)
    {
        return getESGroupInfoByID(uid, groupId, groupInfo, &__ctx);
    }
    
private:

    ::Ice::Int getESGroupInfoByID(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEESGroupInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int getESUserFunc(const ::std::string& uid, const ::std::string& childid, ::std::string& userflag, ::Ice::Int& groupId)
    {
        return getESUserFunc(uid, childid, userflag, groupId, 0);
    }
    ::Ice::Int getESUserFunc(const ::std::string& uid, const ::std::string& childid, ::std::string& userflag, ::Ice::Int& groupId, const ::Ice::Context& __ctx)
    {
        return getESUserFunc(uid, childid, userflag, groupId, &__ctx);
    }
    
private:

    ::Ice::Int getESUserFunc(const ::std::string&, const ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int getESUnJoinGroup(const ::std::string& uid, ::Ice::StringSeq& eserviceList)
    {
        return getESUnJoinGroup(uid, eserviceList, 0);
    }
    ::Ice::Int getESUnJoinGroup(const ::std::string& uid, ::Ice::StringSeq& eserviceList, const ::Ice::Context& __ctx)
    {
        return getESUnJoinGroup(uid, eserviceList, &__ctx);
    }
    
private:

    ::Ice::Int getESUnJoinGroup(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int checkESRole(const ::std::string& uid, ::Ice::Int& groupId)
    {
        return checkESRole(uid, groupId, 0);
    }
    ::Ice::Int checkESRole(const ::std::string& uid, ::Ice::Int& groupId, const ::Ice::Context& __ctx)
    {
        return checkESRole(uid, groupId, &__ctx);
    }
    
private:

    ::Ice::Int checkESRole(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int CheckWebWWPasswd(const ::std::string& userId, const ::std::string& passwd, ::std::string& lid, ::std::string& retuidtokenpw, ::std::string& retmd5passwd, ::Ice::Int& activeStat)
    {
        return CheckWebWWPasswd(userId, passwd, lid, retuidtokenpw, retmd5passwd, activeStat, 0);
    }
    ::Ice::Int CheckWebWWPasswd(const ::std::string& userId, const ::std::string& passwd, ::std::string& lid, ::std::string& retuidtokenpw, ::std::string& retmd5passwd, ::Ice::Int& activeStat, const ::Ice::Context& __ctx)
    {
        return CheckWebWWPasswd(userId, passwd, lid, retuidtokenpw, retmd5passwd, activeStat, &__ctx);
    }
    
private:

    ::Ice::Int CheckWebWWPasswd(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
public:

    ::Ice::Int getESExpandArea(const ::std::string& uid, ::AliIMDBBase::SICEExpandAreaSeq& areaInfos)
    {
        return getESExpandArea(uid, areaInfos, 0);
    }
    ::Ice::Int getESExpandArea(const ::std::string& uid, ::AliIMDBBase::SICEExpandAreaSeq& areaInfos, const ::Ice::Context& __ctx)
    {
        return getESExpandArea(uid, areaInfos, &__ctx);
    }
    
private:

    ::Ice::Int getESExpandArea(const ::std::string&, ::AliIMDBBase::SICEExpandAreaSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getESExpandAreaById(const ::std::string& uid, ::Ice::Int id, ::AliIMDBBase::SICEExpandArea& areaInfos)
    {
        return getESExpandAreaById(uid, id, areaInfos, 0);
    }
    ::Ice::Int getESExpandAreaById(const ::std::string& uid, ::Ice::Int id, ::AliIMDBBase::SICEExpandArea& areaInfos, const ::Ice::Context& __ctx)
    {
        return getESExpandAreaById(uid, id, areaInfos, &__ctx);
    }
    
private:

    ::Ice::Int getESExpandAreaById(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEExpandArea&, const ::Ice::Context*);
    
public:

    ::Ice::Int addESExpandArea(const ::std::string& uid, const ::AliIMDBBase::SICEExpandArea& areaInfo)
    {
        return addESExpandArea(uid, areaInfo, 0);
    }
    ::Ice::Int addESExpandArea(const ::std::string& uid, const ::AliIMDBBase::SICEExpandArea& areaInfo, const ::Ice::Context& __ctx)
    {
        return addESExpandArea(uid, areaInfo, &__ctx);
    }
    
private:

    ::Ice::Int addESExpandArea(const ::std::string&, const ::AliIMDBBase::SICEExpandArea&, const ::Ice::Context*);
    
public:

    ::Ice::Int updateESExpandArea(const ::std::string& uid, const ::AliIMDBBase::SICEExpandArea& areaInfo)
    {
        return updateESExpandArea(uid, areaInfo, 0);
    }
    ::Ice::Int updateESExpandArea(const ::std::string& uid, const ::AliIMDBBase::SICEExpandArea& areaInfo, const ::Ice::Context& __ctx)
    {
        return updateESExpandArea(uid, areaInfo, &__ctx);
    }
    
private:

    ::Ice::Int updateESExpandArea(const ::std::string&, const ::AliIMDBBase::SICEExpandArea&, const ::Ice::Context*);
    
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

    ::Ice::Int sendESEvalResult(const ::std::string& uid, const ::std::string& buyerid, ::Ice::Int& evalId)
    {
        return sendESEvalResult(uid, buyerid, evalId, 0);
    }
    ::Ice::Int sendESEvalResult(const ::std::string& uid, const ::std::string& buyerid, ::Ice::Int& evalId, const ::Ice::Context& __ctx)
    {
        return sendESEvalResult(uid, buyerid, evalId, &__ctx);
    }
    
private:

    ::Ice::Int sendESEvalResult(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);
    
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

    ::Ice::Int getESEvalResultToday(const ::std::string& uid, ::AliIMDBBase::SICEESEvalResultSeq& evalInfos)
    {
        return getESEvalResultToday(uid, evalInfos, 0);
    }
    ::Ice::Int getESEvalResultToday(const ::std::string& uid, ::AliIMDBBase::SICEESEvalResultSeq& evalInfos, const ::Ice::Context& __ctx)
    {
        return getESEvalResultToday(uid, evalInfos, &__ctx);
    }
    
private:

    ::Ice::Int getESEvalResultToday(const ::std::string&, ::AliIMDBBase::SICEESEvalResultSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getESEvalResultHistory(const ::std::string& uid, const ::std::string& querytime, ::AliIMDBBase::SICEESEvalResultSeq& evalInfos)
    {
        return getESEvalResultHistory(uid, querytime, evalInfos, 0);
    }
    ::Ice::Int getESEvalResultHistory(const ::std::string& uid, const ::std::string& querytime, ::AliIMDBBase::SICEESEvalResultSeq& evalInfos, const ::Ice::Context& __ctx)
    {
        return getESEvalResultHistory(uid, querytime, evalInfos, &__ctx);
    }
    
private:

    ::Ice::Int getESEvalResultHistory(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEESEvalResultSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getESEvalResultHistorybypage(const ::std::string& uid, const ::std::string& childid, const ::std::string& begindate, const ::std::string& enddate, ::Ice::Int pageno, ::Ice::Int pagesize, ::Ice::Int& pagecount, ::AliIMDBBase::SICEESEvalResultExSeq& evalInfos)
    {
        return getESEvalResultHistorybypage(uid, childid, begindate, enddate, pageno, pagesize, pagecount, evalInfos, 0);
    }
    ::Ice::Int getESEvalResultHistorybypage(const ::std::string& uid, const ::std::string& childid, const ::std::string& begindate, const ::std::string& enddate, ::Ice::Int pageno, ::Ice::Int pagesize, ::Ice::Int& pagecount, ::AliIMDBBase::SICEESEvalResultExSeq& evalInfos, const ::Ice::Context& __ctx)
    {
        return getESEvalResultHistorybypage(uid, childid, begindate, enddate, pageno, pagesize, pagecount, evalInfos, &__ctx);
    }
    
private:

    ::Ice::Int getESEvalResultHistorybypage(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::AliIMDBBase::SICEESEvalResultExSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getLastLoginTime(const ::Ice::StringSeq& loginids, ::Ice::StringSeq& loginTimes)
    {
        return getLastLoginTime(loginids, loginTimes, 0);
    }
    ::Ice::Int getLastLoginTime(const ::Ice::StringSeq& loginids, ::Ice::StringSeq& loginTimes, const ::Ice::Context& __ctx)
    {
        return getLastLoginTime(loginids, loginTimes, &__ctx);
    }
    
private:

    ::Ice::Int getLastLoginTime(const ::Ice::StringSeq&, ::Ice::StringSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getChildShuntInfos(const ::std::string& uid, ::AliIMDBBase::SChildUserInfoSeq& childInfos)
    {
        return getChildShuntInfos(uid, childInfos, 0);
    }
    ::Ice::Int getChildShuntInfos(const ::std::string& uid, ::AliIMDBBase::SChildUserInfoSeq& childInfos, const ::Ice::Context& __ctx)
    {
        return getChildShuntInfos(uid, childInfos, &__ctx);
    }
    
private:

    ::Ice::Int getChildShuntInfos(const ::std::string&, ::AliIMDBBase::SChildUserInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int setChildShuntInfos(const ::std::string& uid, const ::AliIMDBBase::SChildUserInfoSeq& childinfos)
    {
        return setChildShuntInfos(uid, childinfos, 0);
    }
    ::Ice::Int setChildShuntInfos(const ::std::string& uid, const ::AliIMDBBase::SChildUserInfoSeq& childinfos, const ::Ice::Context& __ctx)
    {
        return setChildShuntInfos(uid, childinfos, &__ctx);
    }
    
private:

    ::Ice::Int setChildShuntInfos(const ::std::string&, const ::AliIMDBBase::SChildUserInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getAgentChild(const ::std::string& uid, ::std::string& agentId)
    {
        return getAgentChild(uid, agentId, 0);
    }
    ::Ice::Int getAgentChild(const ::std::string& uid, ::std::string& agentId, const ::Ice::Context& __ctx)
    {
        return getAgentChild(uid, agentId, &__ctx);
    }
    
private:

    ::Ice::Int getAgentChild(const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int setAgentChild(const ::std::string& uid, const ::std::string& agentId)
    {
        return setAgentChild(uid, agentId, 0);
    }
    ::Ice::Int setAgentChild(const ::std::string& uid, const ::std::string& agentId, const ::Ice::Context& __ctx)
    {
        return setAgentChild(uid, agentId, &__ctx);
    }
    
private:

    ::Ice::Int setAgentChild(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int getAgentList(const ::std::string& uid, ::Ice::StringSeq& agentIds)
    {
        return getAgentList(uid, agentIds, 0);
    }
    ::Ice::Int getAgentList(const ::std::string& uid, ::Ice::StringSeq& agentIds, const ::Ice::Context& __ctx)
    {
        return getAgentList(uid, agentIds, &__ctx);
    }
    
private:

    ::Ice::Int getAgentList(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getB2BChildTeamList(const ::std::string& parentId, ::AliIMDBBase::SB2BChildUserInfoSeq& childTeamList)
    {
        return getB2BChildTeamList(parentId, childTeamList, 0);
    }
    ::Ice::Int getB2BChildTeamList(const ::std::string& parentId, ::AliIMDBBase::SB2BChildUserInfoSeq& childTeamList, const ::Ice::Context& __ctx)
    {
        return getB2BChildTeamList(parentId, childTeamList, &__ctx);
    }
    
private:

    ::Ice::Int getB2BChildTeamList(const ::std::string&, ::AliIMDBBase::SB2BChildUserInfoSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getB2BChildInfo(const ::std::string& parentId, const ::std::string& childid, ::AliIMDBBase::SB2BChildUserInfo& childInfo)
    {
        return getB2BChildInfo(parentId, childid, childInfo, 0);
    }
    ::Ice::Int getB2BChildInfo(const ::std::string& parentId, const ::std::string& childid, ::AliIMDBBase::SB2BChildUserInfo& childInfo, const ::Ice::Context& __ctx)
    {
        return getB2BChildInfo(parentId, childid, childInfo, &__ctx);
    }
    
private:

    ::Ice::Int getB2BChildInfo(const ::std::string&, const ::std::string&, ::AliIMDBBase::SB2BChildUserInfo&, const ::Ice::Context*);
    
public:

    ::Ice::Int getB2BChildParentId(const ::std::string& childId, ::std::string& fid)
    {
        return getB2BChildParentId(childId, fid, 0);
    }
    ::Ice::Int getB2BChildParentId(const ::std::string& childId, ::std::string& fid, const ::Ice::Context& __ctx)
    {
        return getB2BChildParentId(childId, fid, &__ctx);
    }
    
private:

    ::Ice::Int getB2BChildParentId(const ::std::string&, ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int addB2BChild(const ::std::string& fid, const ::std::string& childId, const ::std::string& userflag)
    {
        return addB2BChild(fid, childId, userflag, 0);
    }
    ::Ice::Int addB2BChild(const ::std::string& fid, const ::std::string& childId, const ::std::string& userflag, const ::Ice::Context& __ctx)
    {
        return addB2BChild(fid, childId, userflag, &__ctx);
    }
    
private:

    ::Ice::Int addB2BChild(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int updateB2BChild(const ::std::string& fid, const ::std::string& childId, const ::std::string& userflag)
    {
        return updateB2BChild(fid, childId, userflag, 0);
    }
    ::Ice::Int updateB2BChild(const ::std::string& fid, const ::std::string& childId, const ::std::string& userflag, const ::Ice::Context& __ctx)
    {
        return updateB2BChild(fid, childId, userflag, &__ctx);
    }
    
private:

    ::Ice::Int updateB2BChild(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Int deleteB2BChild(const ::std::string& fid, const ::std::string& childId)
    {
        return deleteB2BChild(fid, childId, 0);
    }
    ::Ice::Int deleteB2BChild(const ::std::string& fid, const ::std::string& childId, const ::Ice::Context& __ctx)
    {
        return deleteB2BChild(fid, childId, &__ctx);
    }
    
private:

    ::Ice::Int deleteB2BChild(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
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

namespace AliIMDBBase
{

class IMDBProxyMgr : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int sayhello(const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int CheckUserToken(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int CheckTmpSession(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int CheckUserWebPasswd(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int CheckUserPasswd(const ::std::string&, bool, const ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int CheckUserWebToken(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetAtmLongid(const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddUser60(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetWebMemberPWInfo(const ::std::string&, ::AliIMDBBase::SMemberPWInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetWebMemberPWInfoEx(const ::std::string&, ::AliIMDBBase::SMemberPWInfoEx&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUserWebBasicProfile(const ::std::string&, ::AliIMDBBase::SUserWebBasicProfile&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int CheckCanAddContact(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int QueryMatchedUserIds(const ::std::string&, const ::std::string&, ::AliIMDBBase::SMatchedUserIdInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateContactWebInfo(const ::std::string&, const ::std::string&, const ::AliIMDBBase::SUserWebBasicProfile&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DelTaobaoUser(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DelAnyUser(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddUserKeyWord(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateUserKeyWord(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUserKeyWord(const ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int QueryUserIdsByKeyWord(const ::std::string&, ::AliIMDBBase::SMatchedUserIdInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetBatchMemberInfo(const ::Ice::StringSeq&, ::AliIMDBBase::SICEMemberInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetAllVersion(::AliIMDBBase::SICEVersionSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetAllSysMsg(::AliIMDBBase::SICESysMessageSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetAllExSysMsg(::AliIMDBBase::SExICESysMessageSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUserInfo(const ::std::string&, ::AliIMDBBase::SICEUserInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUserInfo2(const ::std::string&, ::AliIMDBBase::SICEUserInfo2&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUserInfoEx(const ::std::string&, ::AliIMDBBase::SICEUserInfoEx&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUserInfoNew(const ::std::string&, ::AliIMDBBase::SICEUserInfoNew&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUserInfo2New(const ::std::string&, ::AliIMDBBase::SICEUserInfo2New&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUserInfoExNew(const ::std::string&, ::AliIMDBBase::SICEUserInfoExNew&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUserInfoExNew2(const ::std::string&, ::AliIMDBBase::SICEUserInfoExNew2&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUserInfoExNew3(const ::std::string&, ::AliIMDBBase::SICEUserInfoExNew3&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUserInfoExNew4(const ::std::string&, ::AliIMDBBase::SICEUserInfoExNew4&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUserVerifyInfo(const ::std::string&, ::Ice::Byte&, ::Ice::Byte&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUserVerifyInfoEx(const ::std::string&, ::Ice::Byte&, ::Ice::Byte&, ::Ice::Byte&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUserVerifyInfoQuestion(const ::std::string&, ::Ice::Byte&, ::Ice::Byte&, ::Ice::Byte&, ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetGroupList(const ::std::string&, ::AliIMDBBase::SICEGroupInfoSeq&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetGroupListEx(const ::std::string&, ::AliIMDBBase::SICEGroupInfoExSeq&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetContactList(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEContactInfoSeq&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetBlackList(const ::std::string&, ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetReverseBlackList(const ::std::string&, ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetOfflineMsg(const ::std::string&, ::AliIMDBBase::SICEOffLineMessegeSeq&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetOfflineMsgEx(const ::std::string&, ::AliIMDBBase::SICEOffLineMessegeExSeq&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetOfflineMsgCount(const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetEnetOfflineMsgNum(const ::std::string&, const ::std::string&, const ::Ice::IntSeq&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetContactInfo(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEContactInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetOfflineMsgNum(const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetToolProfiles(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetToolProfilesEx(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEToolProfileSeq&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetSysMsg(::Ice::Int, ::AliIMDBBase::SICESysMessage&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddUser(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddGroup(const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddGroupEx(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddBlackList(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddOfflineMsg(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddExpriteTimeOfflineMsg(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddOfflineMsgNoSMS(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddOfflineMsgEx(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateUserLogin(const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateUserLoginEx(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateUserLoginDataInfo(const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateUserLoginDataInfoEx(const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateUserSysMsgId(const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateUserDataInfo(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Float, ::Ice::Float, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateUserDataInfo2(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Float, ::Ice::Float, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateUserDataInfo3(const ::std::string&, const ::AliIMDBBase::RIGHTTABLE&, ::Ice::Int, ::Ice::Int, ::Ice::Float, ::Ice::Float, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateUserVerifySet(const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateUserVerifySetEx(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateUserVerifySetQuestion(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateGroup(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int MoveGroup(const ::std::string&, ::Ice::Long, ::Ice::Long, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateContactNickName(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateContactGroup(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateContactStatus(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateNotifyMessage(::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateToolProfiles(const ::std::string&, ::Ice::Int, const ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateToolProfilesEx(const ::std::string&, const ::AliIMDBBase::SICEToolProfileSeq&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int RemoveGroup(const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int RemoveContact(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int RemoveInverfiedContact(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int RemoveBlackList(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int IsBlackedByOther(const ::std::string&, const ::std::string&, bool&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int RemoveBatchContacts(const ::std::string&, const ::Ice::StringSeq&, ::Ice::StringSeq&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUserDStatus(const ::std::string&, ::AliIMDBBase::SICEUserDStatusSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddUserDStatus(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int RemoveUserDStatus(const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetAllContactList(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEContactInfoSeq&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetCntModifyList(::Ice::Int, const ::std::string&, const ::std::string&, ::AliIMDBBase::SICECntCidModPairSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddGenContactFull(const ::AliIMDBBase::SICEGenContactFull&, ::std::string&, ::std::string&, ::Ice::Long&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetContactDetail(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEGenContactFull&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DelGenContact(const ::std::string&, const ::std::string&, ::Ice::Long&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::AliIMDBBase::SUserWebBasicProfile&, ::Ice::Int&, ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int CheckUpgradeGenCnt(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int ModifyGenCntID(const ::std::string&, const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpgradeGenContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long&, ::Ice::Long&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUpdatedUserInfo(const ::std::string&, const ::std::string&, ::Ice::Long&, ::Ice::Long&, ::std::string&, ::std::string&, ::Ice::Long&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int ModifyContactDetail(const ::AliIMDBBase::SICEGenContactFull&, ::Ice::Long&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateContactGroupByCid(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateContactNickNameByCid(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetCRMContactDetail(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICECRMContactDetail&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetHardCodeIds(const ::std::string&, ::Ice::Int&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateHardCodeIds(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetCntOtherModifyList(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICECntOtherModInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetCntOtherModifyInfo(const ::std::string&, ::AliIMDBBase::SICECntOtherModInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUserCRInfo(const ::std::string&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int SetUserCRInfo(const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetSmsUserInfoByUid(const ::std::string&, ::AliIMDBBase::SICESmsUserInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetSmsUserMsgInfo(const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DelOfflineMsg(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DelOfflineMsgEx(const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DelWapOfflineMsg(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int ModifyCntMemo(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetCntMemo(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUserTribe(const ::std::string&, ::ALiIMDBTribe::STribeIdDbSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUserTribeConfig(const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateUserTribeConfig(const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetTribeOffMngMsg(::Ice::Int, const ::std::string&, ::ALiIMDBTribe::STribeOfflineMsgSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DelTribeOffMngMsg(::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int ModifyPersonalShow(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetPersonalShow(const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetAllOnlineSmsUser(::Ice::StringSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUserKeyWordDegree(const ::std::string&, ::std::string&, ::Ice::Int&, ::Ice::Float&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUserValue(const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateUserMd5Password(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int InsertYahooUser(const ::AliIMDBBase::SUdbUserInfo&, ::Ice::Int, const ::AliIMDBBase::SICEGenContactFullSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetContactDetailByUid(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEGenContactFull&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetChildTeamList(const ::std::string&, ::AliIMDBBase::SChildUserInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetChildTeamList2(const ::std::string&, ::AliIMDBBase::SChildUserInfoSeq2&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetChildUserInfo(const ::std::string&, ::AliIMDBBase::SChildUserInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetChildUserInfo2(const ::std::string&, ::AliIMDBBase::SChildUserInfo2&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetShareContactList(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetContactShareInfo(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int SetContactShareInfo(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetMultiAccountContactList(const ::std::string&, ::AliIMDBBase::SICEContactInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetMultiServiceList(const ::std::string&, ::Ice::IntSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetMultiBindToUser(const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetWebBinds(const ::std::string&, ::AliIMDBBase::SICEKvPairSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddWebBind(const ::std::string&, const ::AliIMDBBase::SICEKvPair&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int ChangeWebBind(const ::std::string&, const ::AliIMDBBase::SICEKvPair&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int DelWebBind(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserSession(const ::std::string&, ::AliIM::SIceSession&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int checkUserSession(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int removeSession(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateSignature(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int updateContactClientInfo(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserProfile(const ::std::string&, ::AliIMDBBase::SICEKVMap&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getPeerVerifyFlag(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getPeerVerifyFlagQuestion(const ::std::string&, const ::std::string&, ::Ice::Int&, ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getNickName(const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getFTServiceInfo(const ::std::string&, const ::std::string&, ::std::string&, ::Ice::Short&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getTietuServiceInfo(const ::std::string&, ::Ice::Int&, ::std::string&, ::Ice::Short&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getFTSAddr(::Ice::Short, const ::std::string&, ::Ice::Long&, ::std::string&, ::Ice::Short&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int registerWanghao(const ::std::string&, const ::AliIMInterface::KVMAP&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int updateUserProfile(const ::std::string&, const ::AliIMInterface::KVMAP&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int loadSitePrefix(::AliIMDBBase::SImPrefixSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int updateAepUserId(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int updateVipflag(const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int checkWangHaoPwd(const ::std::string&, bool, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int checkCanLogin(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetSIPSessionId(const ::std::string&, const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int CheckGsContact(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateSmsAuthCode(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int CheckSmsAuthCode(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int UpdateUserValueBySmsAuth(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int CheckSmsAuthStatus(const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int CheckUserTokenExtra(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int CheckUserWebPasswdExtra(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESShuntStatus(const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int setESShuntStatus(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getMaxESReceptNum(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEReceptNumSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int setMaxESReceptNum(const ::std::string&, ::Ice::Int, const ::AliIMDBBase::SICEReceptNumSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESPriority(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEReceptPrioritySeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int setESPriority(const ::std::string&, ::Ice::Int, const ::AliIMDBBase::SICEReceptPrioritySeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESRecvOffMsg(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICERecvOffMsgSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int setESRecvOffMsg(const ::std::string&, ::Ice::Int, const ::AliIMDBBase::SICERecvOffMsgSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESGroupList(const ::std::string&, ::Ice::IntSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int insertESGroupInfo(const ::std::string&, const ::AliIMDBBase::SICEESGroupInfo&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int updateESGroupInfo(const ::std::string&, const ::AliIMDBBase::SICEESGroupInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int delESGroup(const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESGroupInfo(const ::std::string&, ::AliIMDBBase::SICEESGroupInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESGroupInfoByID(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEESGroupInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESUserFunc(const ::std::string&, const ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESUnJoinGroup(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int checkESRole(const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int CheckWebWWPasswd(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESExpandArea(const ::std::string&, ::AliIMDBBase::SICEExpandAreaSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESExpandAreaById(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEExpandArea&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int addESExpandArea(const ::std::string&, const ::AliIMDBBase::SICEExpandArea&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int updateESExpandArea(const ::std::string&, const ::AliIMDBBase::SICEExpandArea&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int delESExpandArea(const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int setESEval(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESEval(const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int sendESEvalResult(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int setESEvalResult(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESEvalResult(const ::std::string&, const ::std::string&, ::Ice::Int, ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESEvalResultToday(const ::std::string&, ::AliIMDBBase::SICEESEvalResultSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESEvalResultHistory(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEESEvalResultSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getESEvalResultHistorybypage(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::AliIMDBBase::SICEESEvalResultExSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getLastLoginTime(const ::Ice::StringSeq&, ::Ice::StringSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getChildShuntInfos(const ::std::string&, ::AliIMDBBase::SChildUserInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int setChildShuntInfos(const ::std::string&, const ::AliIMDBBase::SChildUserInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getAgentChild(const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int setAgentChild(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getAgentList(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getB2BChildTeamList(const ::std::string&, ::AliIMDBBase::SB2BChildUserInfoSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getB2BChildInfo(const ::std::string&, const ::std::string&, ::AliIMDBBase::SB2BChildUserInfo&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getB2BChildParentId(const ::std::string&, ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int addB2BChild(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int updateB2BChild(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int deleteB2BChild(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace AliIMDBBase
{

class IMDBProxyMgr : virtual public ::IceDelegate::AliIMDBBase::IMDBProxyMgr,
                     virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int sayhello(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int CheckUserToken(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int CheckTmpSession(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int CheckUserWebPasswd(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int CheckUserPasswd(const ::std::string&, bool, const ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int CheckUserWebToken(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetAtmLongid(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int AddUser60(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int GetWebMemberPWInfo(const ::std::string&, ::AliIMDBBase::SMemberPWInfo&, const ::Ice::Context*);

    virtual ::Ice::Int GetWebMemberPWInfoEx(const ::std::string&, ::AliIMDBBase::SMemberPWInfoEx&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserWebBasicProfile(const ::std::string&, ::AliIMDBBase::SUserWebBasicProfile&, const ::Ice::Context*);

    virtual ::Ice::Int CheckCanAddContact(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int QueryMatchedUserIds(const ::std::string&, const ::std::string&, ::AliIMDBBase::SMatchedUserIdInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateContactWebInfo(const ::std::string&, const ::std::string&, const ::AliIMDBBase::SUserWebBasicProfile&, const ::Ice::Context*);

    virtual ::Ice::Int DelTaobaoUser(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DelAnyUser(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int AddUserKeyWord(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserKeyWord(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int GetUserKeyWord(const ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int QueryUserIdsByKeyWord(const ::std::string&, ::AliIMDBBase::SMatchedUserIdInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetBatchMemberInfo(const ::Ice::StringSeq&, ::AliIMDBBase::SICEMemberInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetAllVersion(::AliIMDBBase::SICEVersionSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetAllSysMsg(::AliIMDBBase::SICESysMessageSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetAllExSysMsg(::AliIMDBBase::SExICESysMessageSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserInfo(const ::std::string&, ::AliIMDBBase::SICEUserInfo&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserInfo2(const ::std::string&, ::AliIMDBBase::SICEUserInfo2&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserInfoEx(const ::std::string&, ::AliIMDBBase::SICEUserInfoEx&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserInfoNew(const ::std::string&, ::AliIMDBBase::SICEUserInfoNew&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserInfo2New(const ::std::string&, ::AliIMDBBase::SICEUserInfo2New&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserInfoExNew(const ::std::string&, ::AliIMDBBase::SICEUserInfoExNew&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserInfoExNew2(const ::std::string&, ::AliIMDBBase::SICEUserInfoExNew2&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserInfoExNew3(const ::std::string&, ::AliIMDBBase::SICEUserInfoExNew3&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserInfoExNew4(const ::std::string&, ::AliIMDBBase::SICEUserInfoExNew4&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserVerifyInfo(const ::std::string&, ::Ice::Byte&, ::Ice::Byte&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserVerifyInfoEx(const ::std::string&, ::Ice::Byte&, ::Ice::Byte&, ::Ice::Byte&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserVerifyInfoQuestion(const ::std::string&, ::Ice::Byte&, ::Ice::Byte&, ::Ice::Byte&, ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetGroupList(const ::std::string&, ::AliIMDBBase::SICEGroupInfoSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetGroupListEx(const ::std::string&, ::AliIMDBBase::SICEGroupInfoExSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetContactList(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEContactInfoSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetBlackList(const ::std::string&, ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetReverseBlackList(const ::std::string&, ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetOfflineMsg(const ::std::string&, ::AliIMDBBase::SICEOffLineMessegeSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetOfflineMsgEx(const ::std::string&, ::AliIMDBBase::SICEOffLineMessegeExSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetOfflineMsgCount(const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetEnetOfflineMsgNum(const ::std::string&, const ::std::string&, const ::Ice::IntSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetContactInfo(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEContactInfo&, const ::Ice::Context*);

    virtual ::Ice::Int GetOfflineMsgNum(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetToolProfiles(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetToolProfilesEx(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEToolProfileSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetSysMsg(::Ice::Int, ::AliIMDBBase::SICESysMessage&, const ::Ice::Context*);

    virtual ::Ice::Int AddUser(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int AddGroup(const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int AddGroupEx(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int AddBlackList(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int AddOfflineMsg(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int AddExpriteTimeOfflineMsg(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int AddOfflineMsgNoSMS(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int AddOfflineMsgEx(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserLogin(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserLoginEx(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserLoginDataInfo(const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserLoginDataInfoEx(const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserSysMsgId(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserDataInfo(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Float, ::Ice::Float, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserDataInfo2(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Float, ::Ice::Float, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserDataInfo3(const ::std::string&, const ::AliIMDBBase::RIGHTTABLE&, ::Ice::Int, ::Ice::Int, ::Ice::Float, ::Ice::Float, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserVerifySet(const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserVerifySetEx(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserVerifySetQuestion(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateGroup(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int MoveGroup(const ::std::string&, ::Ice::Long, ::Ice::Long, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateContactNickName(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateContactGroup(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateContactStatus(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateNotifyMessage(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int UpdateToolProfiles(const ::std::string&, ::Ice::Int, const ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateToolProfilesEx(const ::std::string&, const ::AliIMDBBase::SICEToolProfileSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int RemoveGroup(const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int RemoveContact(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int RemoveInverfiedContact(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int RemoveBlackList(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int IsBlackedByOther(const ::std::string&, const ::std::string&, bool&, const ::Ice::Context*);

    virtual ::Ice::Int RemoveBatchContacts(const ::std::string&, const ::Ice::StringSeq&, ::Ice::StringSeq&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserDStatus(const ::std::string&, ::AliIMDBBase::SICEUserDStatusSeq&, const ::Ice::Context*);

    virtual ::Ice::Int AddUserDStatus(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int RemoveUserDStatus(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int GetAllContactList(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEContactInfoSeq&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetCntModifyList(::Ice::Int, const ::std::string&, const ::std::string&, ::AliIMDBBase::SICECntCidModPairSeq&, const ::Ice::Context*);

    virtual ::Ice::Int AddGenContactFull(const ::AliIMDBBase::SICEGenContactFull&, ::std::string&, ::std::string&, ::Ice::Long&, const ::Ice::Context*);

    virtual ::Ice::Int GetContactDetail(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEGenContactFull&, const ::Ice::Context*);

    virtual ::Ice::Int DelGenContact(const ::std::string&, const ::std::string&, ::Ice::Long&, const ::Ice::Context*);

    virtual ::Ice::Int AddContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::AliIMDBBase::SUserWebBasicProfile&, ::Ice::Int&, ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int CheckUpgradeGenCnt(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int ModifyGenCntID(const ::std::string&, const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int UpgradeGenContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long&, ::Ice::Long&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetUpdatedUserInfo(const ::std::string&, const ::std::string&, ::Ice::Long&, ::Ice::Long&, ::std::string&, ::std::string&, ::Ice::Long&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int ModifyContactDetail(const ::AliIMDBBase::SICEGenContactFull&, ::Ice::Long&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateContactGroupByCid(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateContactNickNameByCid(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetCRMContactDetail(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICECRMContactDetail&, const ::Ice::Context*);

    virtual ::Ice::Int GetHardCodeIds(const ::std::string&, ::Ice::Int&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateHardCodeIds(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetCntOtherModifyList(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICECntOtherModInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetCntOtherModifyInfo(const ::std::string&, ::AliIMDBBase::SICECntOtherModInfo&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserCRInfo(const ::std::string&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int SetUserCRInfo(const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetSmsUserInfoByUid(const ::std::string&, ::AliIMDBBase::SICESmsUserInfo&, const ::Ice::Context*);

    virtual ::Ice::Int GetSmsUserMsgInfo(const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DelOfflineMsg(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DelOfflineMsgEx(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DelWapOfflineMsg(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int ModifyCntMemo(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetCntMemo(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserTribe(const ::std::string&, ::ALiIMDBTribe::STribeIdDbSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserTribeConfig(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserTribeConfig(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int GetTribeOffMngMsg(::Ice::Int, const ::std::string&, ::ALiIMDBTribe::STribeOfflineMsgSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DelTribeOffMngMsg(::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int ModifyPersonalShow(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetPersonalShow(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetAllOnlineSmsUser(::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserKeyWordDegree(const ::std::string&, ::std::string&, ::Ice::Int&, ::Ice::Float&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserValue(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserMd5Password(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int InsertYahooUser(const ::AliIMDBBase::SUdbUserInfo&, ::Ice::Int, const ::AliIMDBBase::SICEGenContactFullSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetContactDetailByUid(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEGenContactFull&, const ::Ice::Context*);

    virtual ::Ice::Int GetChildTeamList(const ::std::string&, ::AliIMDBBase::SChildUserInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetChildTeamList2(const ::std::string&, ::AliIMDBBase::SChildUserInfoSeq2&, const ::Ice::Context*);

    virtual ::Ice::Int GetChildUserInfo(const ::std::string&, ::AliIMDBBase::SChildUserInfo&, const ::Ice::Context*);

    virtual ::Ice::Int GetChildUserInfo2(const ::std::string&, ::AliIMDBBase::SChildUserInfo2&, const ::Ice::Context*);

    virtual ::Ice::Int GetShareContactList(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetContactShareInfo(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int SetContactShareInfo(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int GetMultiAccountContactList(const ::std::string&, ::AliIMDBBase::SICEContactInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetMultiServiceList(const ::std::string&, ::Ice::IntSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetMultiBindToUser(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetWebBinds(const ::std::string&, ::AliIMDBBase::SICEKvPairSeq&, const ::Ice::Context*);

    virtual ::Ice::Int AddWebBind(const ::std::string&, const ::AliIMDBBase::SICEKvPair&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int ChangeWebBind(const ::std::string&, const ::AliIMDBBase::SICEKvPair&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DelWebBind(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getUserSession(const ::std::string&, ::AliIM::SIceSession&, const ::Ice::Context*);

    virtual ::Ice::Int checkUserSession(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int removeSession(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateSignature(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int updateContactClientInfo(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int getUserProfile(const ::std::string&, ::AliIMDBBase::SICEKVMap&, const ::Ice::Context*);

    virtual ::Ice::Int getPeerVerifyFlag(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int getPeerVerifyFlagQuestion(const ::std::string&, const ::std::string&, ::Ice::Int&, ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getNickName(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getFTServiceInfo(const ::std::string&, const ::std::string&, ::std::string&, ::Ice::Short&, const ::Ice::Context*);

    virtual ::Ice::Int getTietuServiceInfo(const ::std::string&, ::Ice::Int&, ::std::string&, ::Ice::Short&, const ::Ice::Context*);

    virtual ::Ice::Int getFTSAddr(::Ice::Short, const ::std::string&, ::Ice::Long&, ::std::string&, ::Ice::Short&, const ::Ice::Context*);

    virtual ::Ice::Int registerWanghao(const ::std::string&, const ::AliIMInterface::KVMAP&, const ::Ice::Context*);

    virtual ::Ice::Int updateUserProfile(const ::std::string&, const ::AliIMInterface::KVMAP&, const ::Ice::Context*);

    virtual ::Ice::Int loadSitePrefix(::AliIMDBBase::SImPrefixSeq&, const ::Ice::Context*);

    virtual ::Ice::Int updateAepUserId(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int updateVipflag(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int checkWangHaoPwd(const ::std::string&, bool, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int checkCanLogin(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetSIPSessionId(const ::std::string&, const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int CheckGsContact(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateSmsAuthCode(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int CheckSmsAuthCode(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserValueBySmsAuth(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int CheckSmsAuthStatus(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int CheckUserTokenExtra(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int CheckUserWebPasswdExtra(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int getESShuntStatus(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int setESShuntStatus(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getMaxESReceptNum(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEReceptNumSeq&, const ::Ice::Context*);

    virtual ::Ice::Int setMaxESReceptNum(const ::std::string&, ::Ice::Int, const ::AliIMDBBase::SICEReceptNumSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESPriority(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEReceptPrioritySeq&, const ::Ice::Context*);

    virtual ::Ice::Int setESPriority(const ::std::string&, ::Ice::Int, const ::AliIMDBBase::SICEReceptPrioritySeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESRecvOffMsg(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICERecvOffMsgSeq&, const ::Ice::Context*);

    virtual ::Ice::Int setESRecvOffMsg(const ::std::string&, ::Ice::Int, const ::AliIMDBBase::SICERecvOffMsgSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESGroupList(const ::std::string&, ::Ice::IntSeq&, const ::Ice::Context*);

    virtual ::Ice::Int insertESGroupInfo(const ::std::string&, const ::AliIMDBBase::SICEESGroupInfo&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int updateESGroupInfo(const ::std::string&, const ::AliIMDBBase::SICEESGroupInfo&, const ::Ice::Context*);

    virtual ::Ice::Int delESGroup(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int getESGroupInfo(const ::std::string&, ::AliIMDBBase::SICEESGroupInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESGroupInfoByID(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEESGroupInfo&, const ::Ice::Context*);

    virtual ::Ice::Int getESUserFunc(const ::std::string&, const ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int getESUnJoinGroup(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int checkESRole(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int CheckWebWWPasswd(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int getESExpandArea(const ::std::string&, ::AliIMDBBase::SICEExpandAreaSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESExpandAreaById(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEExpandArea&, const ::Ice::Context*);

    virtual ::Ice::Int addESExpandArea(const ::std::string&, const ::AliIMDBBase::SICEExpandArea&, const ::Ice::Context*);

    virtual ::Ice::Int updateESExpandArea(const ::std::string&, const ::AliIMDBBase::SICEExpandArea&, const ::Ice::Context*);

    virtual ::Ice::Int delESExpandArea(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int setESEval(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getESEval(const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int sendESEvalResult(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int setESEvalResult(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getESEvalResult(const ::std::string&, const ::std::string&, ::Ice::Int, ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getESEvalResultToday(const ::std::string&, ::AliIMDBBase::SICEESEvalResultSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESEvalResultHistory(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEESEvalResultSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESEvalResultHistorybypage(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::AliIMDBBase::SICEESEvalResultExSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getLastLoginTime(const ::Ice::StringSeq&, ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getChildShuntInfos(const ::std::string&, ::AliIMDBBase::SChildUserInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int setChildShuntInfos(const ::std::string&, const ::AliIMDBBase::SChildUserInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getAgentChild(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int setAgentChild(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getAgentList(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getB2BChildTeamList(const ::std::string&, ::AliIMDBBase::SB2BChildUserInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getB2BChildInfo(const ::std::string&, const ::std::string&, ::AliIMDBBase::SB2BChildUserInfo&, const ::Ice::Context*);

    virtual ::Ice::Int getB2BChildParentId(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int addB2BChild(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int updateB2BChild(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int deleteB2BChild(const ::std::string&, const ::std::string&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace AliIMDBBase
{

class IMDBProxyMgr : virtual public ::IceDelegate::AliIMDBBase::IMDBProxyMgr,
                     virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int sayhello(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int CheckUserToken(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int CheckTmpSession(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int CheckUserWebPasswd(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int CheckUserPasswd(const ::std::string&, bool, const ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int CheckUserWebToken(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetAtmLongid(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int AddUser60(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int GetWebMemberPWInfo(const ::std::string&, ::AliIMDBBase::SMemberPWInfo&, const ::Ice::Context*);

    virtual ::Ice::Int GetWebMemberPWInfoEx(const ::std::string&, ::AliIMDBBase::SMemberPWInfoEx&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserWebBasicProfile(const ::std::string&, ::AliIMDBBase::SUserWebBasicProfile&, const ::Ice::Context*);

    virtual ::Ice::Int CheckCanAddContact(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int QueryMatchedUserIds(const ::std::string&, const ::std::string&, ::AliIMDBBase::SMatchedUserIdInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateContactWebInfo(const ::std::string&, const ::std::string&, const ::AliIMDBBase::SUserWebBasicProfile&, const ::Ice::Context*);

    virtual ::Ice::Int DelTaobaoUser(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DelAnyUser(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int AddUserKeyWord(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserKeyWord(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int GetUserKeyWord(const ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int QueryUserIdsByKeyWord(const ::std::string&, ::AliIMDBBase::SMatchedUserIdInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetBatchMemberInfo(const ::Ice::StringSeq&, ::AliIMDBBase::SICEMemberInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetAllVersion(::AliIMDBBase::SICEVersionSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetAllSysMsg(::AliIMDBBase::SICESysMessageSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetAllExSysMsg(::AliIMDBBase::SExICESysMessageSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserInfo(const ::std::string&, ::AliIMDBBase::SICEUserInfo&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserInfo2(const ::std::string&, ::AliIMDBBase::SICEUserInfo2&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserInfoEx(const ::std::string&, ::AliIMDBBase::SICEUserInfoEx&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserInfoNew(const ::std::string&, ::AliIMDBBase::SICEUserInfoNew&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserInfo2New(const ::std::string&, ::AliIMDBBase::SICEUserInfo2New&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserInfoExNew(const ::std::string&, ::AliIMDBBase::SICEUserInfoExNew&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserInfoExNew2(const ::std::string&, ::AliIMDBBase::SICEUserInfoExNew2&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserInfoExNew3(const ::std::string&, ::AliIMDBBase::SICEUserInfoExNew3&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserInfoExNew4(const ::std::string&, ::AliIMDBBase::SICEUserInfoExNew4&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserVerifyInfo(const ::std::string&, ::Ice::Byte&, ::Ice::Byte&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserVerifyInfoEx(const ::std::string&, ::Ice::Byte&, ::Ice::Byte&, ::Ice::Byte&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserVerifyInfoQuestion(const ::std::string&, ::Ice::Byte&, ::Ice::Byte&, ::Ice::Byte&, ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetGroupList(const ::std::string&, ::AliIMDBBase::SICEGroupInfoSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetGroupListEx(const ::std::string&, ::AliIMDBBase::SICEGroupInfoExSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetContactList(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEContactInfoSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetBlackList(const ::std::string&, ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetReverseBlackList(const ::std::string&, ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetOfflineMsg(const ::std::string&, ::AliIMDBBase::SICEOffLineMessegeSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetOfflineMsgEx(const ::std::string&, ::AliIMDBBase::SICEOffLineMessegeExSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetOfflineMsgCount(const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetEnetOfflineMsgNum(const ::std::string&, const ::std::string&, const ::Ice::IntSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetContactInfo(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEContactInfo&, const ::Ice::Context*);

    virtual ::Ice::Int GetOfflineMsgNum(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetToolProfiles(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetToolProfilesEx(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEToolProfileSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetSysMsg(::Ice::Int, ::AliIMDBBase::SICESysMessage&, const ::Ice::Context*);

    virtual ::Ice::Int AddUser(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int AddGroup(const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int AddGroupEx(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int AddBlackList(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int AddOfflineMsg(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int AddExpriteTimeOfflineMsg(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int AddOfflineMsgNoSMS(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int AddOfflineMsgEx(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserLogin(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserLoginEx(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserLoginDataInfo(const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserLoginDataInfoEx(const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserSysMsgId(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserDataInfo(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Float, ::Ice::Float, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserDataInfo2(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Float, ::Ice::Float, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserDataInfo3(const ::std::string&, const ::AliIMDBBase::RIGHTTABLE&, ::Ice::Int, ::Ice::Int, ::Ice::Float, ::Ice::Float, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserVerifySet(const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserVerifySetEx(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserVerifySetQuestion(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateGroup(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int MoveGroup(const ::std::string&, ::Ice::Long, ::Ice::Long, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateContactNickName(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateContactGroup(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateContactStatus(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateNotifyMessage(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int UpdateToolProfiles(const ::std::string&, ::Ice::Int, const ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateToolProfilesEx(const ::std::string&, const ::AliIMDBBase::SICEToolProfileSeq&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int RemoveGroup(const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int RemoveContact(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int RemoveInverfiedContact(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int RemoveBlackList(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int IsBlackedByOther(const ::std::string&, const ::std::string&, bool&, const ::Ice::Context*);

    virtual ::Ice::Int RemoveBatchContacts(const ::std::string&, const ::Ice::StringSeq&, ::Ice::StringSeq&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserDStatus(const ::std::string&, ::AliIMDBBase::SICEUserDStatusSeq&, const ::Ice::Context*);

    virtual ::Ice::Int AddUserDStatus(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int RemoveUserDStatus(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int GetAllContactList(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEContactInfoSeq&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetCntModifyList(::Ice::Int, const ::std::string&, const ::std::string&, ::AliIMDBBase::SICECntCidModPairSeq&, const ::Ice::Context*);

    virtual ::Ice::Int AddGenContactFull(const ::AliIMDBBase::SICEGenContactFull&, ::std::string&, ::std::string&, ::Ice::Long&, const ::Ice::Context*);

    virtual ::Ice::Int GetContactDetail(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEGenContactFull&, const ::Ice::Context*);

    virtual ::Ice::Int DelGenContact(const ::std::string&, const ::std::string&, ::Ice::Long&, const ::Ice::Context*);

    virtual ::Ice::Int AddContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::AliIMDBBase::SUserWebBasicProfile&, ::Ice::Int&, ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int CheckUpgradeGenCnt(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int ModifyGenCntID(const ::std::string&, const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int UpgradeGenContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long&, ::Ice::Long&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetUpdatedUserInfo(const ::std::string&, const ::std::string&, ::Ice::Long&, ::Ice::Long&, ::std::string&, ::std::string&, ::Ice::Long&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int ModifyContactDetail(const ::AliIMDBBase::SICEGenContactFull&, ::Ice::Long&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateContactGroupByCid(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateContactNickNameByCid(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetCRMContactDetail(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICECRMContactDetail&, const ::Ice::Context*);

    virtual ::Ice::Int GetHardCodeIds(const ::std::string&, ::Ice::Int&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateHardCodeIds(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetCntOtherModifyList(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICECntOtherModInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetCntOtherModifyInfo(const ::std::string&, ::AliIMDBBase::SICECntOtherModInfo&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserCRInfo(const ::std::string&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int SetUserCRInfo(const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int GetSmsUserInfoByUid(const ::std::string&, ::AliIMDBBase::SICESmsUserInfo&, const ::Ice::Context*);

    virtual ::Ice::Int GetSmsUserMsgInfo(const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int DelOfflineMsg(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DelOfflineMsgEx(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int DelWapOfflineMsg(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int ModifyCntMemo(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetCntMemo(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserTribe(const ::std::string&, ::ALiIMDBTribe::STribeIdDbSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserTribeConfig(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserTribeConfig(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int GetTribeOffMngMsg(::Ice::Int, const ::std::string&, ::ALiIMDBTribe::STribeOfflineMsgSeq&, const ::Ice::Context*);

    virtual ::Ice::Int DelTribeOffMngMsg(::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int ModifyPersonalShow(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetPersonalShow(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetAllOnlineSmsUser(::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserKeyWordDegree(const ::std::string&, ::std::string&, ::Ice::Int&, ::Ice::Float&, const ::Ice::Context*);

    virtual ::Ice::Int GetUserValue(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserMd5Password(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int InsertYahooUser(const ::AliIMDBBase::SUdbUserInfo&, ::Ice::Int, const ::AliIMDBBase::SICEGenContactFullSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetContactDetailByUid(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEGenContactFull&, const ::Ice::Context*);

    virtual ::Ice::Int GetChildTeamList(const ::std::string&, ::AliIMDBBase::SChildUserInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetChildTeamList2(const ::std::string&, ::AliIMDBBase::SChildUserInfoSeq2&, const ::Ice::Context*);

    virtual ::Ice::Int GetChildUserInfo(const ::std::string&, ::AliIMDBBase::SChildUserInfo&, const ::Ice::Context*);

    virtual ::Ice::Int GetChildUserInfo2(const ::std::string&, ::AliIMDBBase::SChildUserInfo2&, const ::Ice::Context*);

    virtual ::Ice::Int GetShareContactList(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetContactShareInfo(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int SetContactShareInfo(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int GetMultiAccountContactList(const ::std::string&, ::AliIMDBBase::SICEContactInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetMultiServiceList(const ::std::string&, ::Ice::IntSeq&, const ::Ice::Context*);

    virtual ::Ice::Int GetMultiBindToUser(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetWebBinds(const ::std::string&, ::AliIMDBBase::SICEKvPairSeq&, const ::Ice::Context*);

    virtual ::Ice::Int AddWebBind(const ::std::string&, const ::AliIMDBBase::SICEKvPair&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int ChangeWebBind(const ::std::string&, const ::AliIMDBBase::SICEKvPair&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int DelWebBind(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getUserSession(const ::std::string&, ::AliIM::SIceSession&, const ::Ice::Context*);

    virtual ::Ice::Int checkUserSession(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int removeSession(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateSignature(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int updateContactClientInfo(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int getUserProfile(const ::std::string&, ::AliIMDBBase::SICEKVMap&, const ::Ice::Context*);

    virtual ::Ice::Int getPeerVerifyFlag(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int getPeerVerifyFlagQuestion(const ::std::string&, const ::std::string&, ::Ice::Int&, ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getNickName(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getFTServiceInfo(const ::std::string&, const ::std::string&, ::std::string&, ::Ice::Short&, const ::Ice::Context*);

    virtual ::Ice::Int getTietuServiceInfo(const ::std::string&, ::Ice::Int&, ::std::string&, ::Ice::Short&, const ::Ice::Context*);

    virtual ::Ice::Int getFTSAddr(::Ice::Short, const ::std::string&, ::Ice::Long&, ::std::string&, ::Ice::Short&, const ::Ice::Context*);

    virtual ::Ice::Int registerWanghao(const ::std::string&, const ::AliIMInterface::KVMAP&, const ::Ice::Context*);

    virtual ::Ice::Int updateUserProfile(const ::std::string&, const ::AliIMInterface::KVMAP&, const ::Ice::Context*);

    virtual ::Ice::Int loadSitePrefix(::AliIMDBBase::SImPrefixSeq&, const ::Ice::Context*);

    virtual ::Ice::Int updateAepUserId(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int updateVipflag(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int checkWangHaoPwd(const ::std::string&, bool, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int checkCanLogin(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int GetSIPSessionId(const ::std::string&, const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int CheckGsContact(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateSmsAuthCode(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int CheckSmsAuthCode(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int UpdateUserValueBySmsAuth(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int CheckSmsAuthStatus(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int CheckUserTokenExtra(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int CheckUserWebPasswdExtra(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int getESShuntStatus(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int setESShuntStatus(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getMaxESReceptNum(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEReceptNumSeq&, const ::Ice::Context*);

    virtual ::Ice::Int setMaxESReceptNum(const ::std::string&, ::Ice::Int, const ::AliIMDBBase::SICEReceptNumSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESPriority(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEReceptPrioritySeq&, const ::Ice::Context*);

    virtual ::Ice::Int setESPriority(const ::std::string&, ::Ice::Int, const ::AliIMDBBase::SICEReceptPrioritySeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESRecvOffMsg(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICERecvOffMsgSeq&, const ::Ice::Context*);

    virtual ::Ice::Int setESRecvOffMsg(const ::std::string&, ::Ice::Int, const ::AliIMDBBase::SICERecvOffMsgSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESGroupList(const ::std::string&, ::Ice::IntSeq&, const ::Ice::Context*);

    virtual ::Ice::Int insertESGroupInfo(const ::std::string&, const ::AliIMDBBase::SICEESGroupInfo&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int updateESGroupInfo(const ::std::string&, const ::AliIMDBBase::SICEESGroupInfo&, const ::Ice::Context*);

    virtual ::Ice::Int delESGroup(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int getESGroupInfo(const ::std::string&, ::AliIMDBBase::SICEESGroupInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESGroupInfoByID(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEESGroupInfo&, const ::Ice::Context*);

    virtual ::Ice::Int getESUserFunc(const ::std::string&, const ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int getESUnJoinGroup(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int checkESRole(const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int CheckWebWWPasswd(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int getESExpandArea(const ::std::string&, ::AliIMDBBase::SICEExpandAreaSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESExpandAreaById(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEExpandArea&, const ::Ice::Context*);

    virtual ::Ice::Int addESExpandArea(const ::std::string&, const ::AliIMDBBase::SICEExpandArea&, const ::Ice::Context*);

    virtual ::Ice::Int updateESExpandArea(const ::std::string&, const ::AliIMDBBase::SICEExpandArea&, const ::Ice::Context*);

    virtual ::Ice::Int delESExpandArea(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int setESEval(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getESEval(const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int sendESEvalResult(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*);

    virtual ::Ice::Int setESEvalResult(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getESEvalResult(const ::std::string&, const ::std::string&, ::Ice::Int, ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getESEvalResultToday(const ::std::string&, ::AliIMDBBase::SICEESEvalResultSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESEvalResultHistory(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEESEvalResultSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getESEvalResultHistorybypage(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::AliIMDBBase::SICEESEvalResultExSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getLastLoginTime(const ::Ice::StringSeq&, ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getChildShuntInfos(const ::std::string&, ::AliIMDBBase::SChildUserInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int setChildShuntInfos(const ::std::string&, const ::AliIMDBBase::SChildUserInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getAgentChild(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int setAgentChild(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getAgentList(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getB2BChildTeamList(const ::std::string&, ::AliIMDBBase::SB2BChildUserInfoSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getB2BChildInfo(const ::std::string&, const ::std::string&, ::AliIMDBBase::SB2BChildUserInfo&, const ::Ice::Context*);

    virtual ::Ice::Int getB2BChildParentId(const ::std::string&, ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int addB2BChild(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int updateB2BChild(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int deleteB2BChild(const ::std::string&, const ::std::string&, const ::Ice::Context*);
};

}

}

namespace AliIMDBBase
{

class IMDBProxyMgr : virtual public ::Ice::Object
{
public:

    typedef IMDBProxyMgrPrx ProxyType;
    typedef IMDBProxyMgrPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void sayhello_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_sayhelloPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___sayhello(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void CheckUserToken_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserTokenPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___CheckUserToken(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void CheckTmpSession_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_CheckTmpSessionPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___CheckTmpSession(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void CheckUserWebPasswd_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebPasswdPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___CheckUserWebPasswd(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void CheckUserPasswd_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserPasswdPtr&, const ::std::string&, bool, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___CheckUserPasswd(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void CheckUserWebToken_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebTokenPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___CheckUserWebToken(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetAtmLongid_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetAtmLongidPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetAtmLongid(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void AddUser60_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_AddUser60Ptr&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddUser60(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetWebMemberPWInfo_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetWebMemberPWInfoPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetWebMemberPWInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetWebMemberPWInfoEx_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetWebMemberPWInfoExPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetWebMemberPWInfoEx(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetUserWebBasicProfile_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserWebBasicProfilePtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserWebBasicProfile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void CheckCanAddContact_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_CheckCanAddContactPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___CheckCanAddContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void QueryMatchedUserIds_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_QueryMatchedUserIdsPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___QueryMatchedUserIds(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateContactWebInfo_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactWebInfoPtr&, const ::std::string&, const ::std::string&, const ::AliIMDBBase::SUserWebBasicProfile&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateContactWebInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void DelTaobaoUser_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_DelTaobaoUserPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DelTaobaoUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void DelAnyUser_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_DelAnyUserPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DelAnyUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void AddUserKeyWord_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_AddUserKeyWordPtr&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddUserKeyWord(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateUserKeyWord_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserKeyWordPtr&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateUserKeyWord(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetUserKeyWord_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserKeyWordPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserKeyWord(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void QueryUserIdsByKeyWord_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_QueryUserIdsByKeyWordPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___QueryUserIdsByKeyWord(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetBatchMemberInfo_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetBatchMemberInfoPtr&, const ::Ice::StringSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetBatchMemberInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetAllVersion_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetAllVersionPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetAllVersion(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetAllSysMsg_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetAllSysMsgPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetAllSysMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetAllExSysMsg_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetAllExSysMsgPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetAllExSysMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetUserInfo_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetUserInfo2_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfo2Ptr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserInfo2(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetUserInfoEx_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserInfoEx(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetUserInfoNew_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoNewPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserInfoNew(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetUserInfo2New_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfo2NewPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserInfo2New(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetUserInfoExNew_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNewPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserInfoExNew(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetUserInfoExNew2_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew2Ptr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserInfoExNew2(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetUserInfoExNew3_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew3Ptr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserInfoExNew3(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetUserInfoExNew4_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew4Ptr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserInfoExNew4(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetUserVerifyInfo_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfoPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserVerifyInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetUserVerifyInfoEx_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfoExPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserVerifyInfoEx(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetUserVerifyInfoQuestion_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfoQuestionPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserVerifyInfoQuestion(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetGroupList_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetGroupListPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetGroupList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetGroupListEx_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetGroupListExPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetGroupListEx(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetContactList_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetContactListPtr&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetContactList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetBlackList_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetBlackListPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetBlackList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetReverseBlackList_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetReverseBlackListPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetReverseBlackList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetOfflineMsg_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetOfflineMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetOfflineMsgEx_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgExPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetOfflineMsgEx(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetOfflineMsgCount_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgCountPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetOfflineMsgCount(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetEnetOfflineMsgNum_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetEnetOfflineMsgNumPtr&, const ::std::string&, const ::std::string&, const ::Ice::IntSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetEnetOfflineMsgNum(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetContactInfo_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetContactInfoPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetContactInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetOfflineMsgNum_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgNumPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetOfflineMsgNum(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetToolProfiles_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetToolProfilesPtr&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetToolProfiles(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetToolProfilesEx_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetToolProfilesExPtr&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetToolProfilesEx(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetSysMsg_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetSysMsgPtr&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetSysMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void AddUser_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_AddUserPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void AddGroup_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_AddGroupPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void AddGroupEx_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_AddGroupExPtr&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddGroupEx(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void AddBlackList_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_AddBlackListPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddBlackList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void AddOfflineMsg_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsgPtr&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddOfflineMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void AddExpriteTimeOfflineMsg_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_AddExpriteTimeOfflineMsgPtr&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddExpriteTimeOfflineMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void AddOfflineMsgNoSMS_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsgNoSMSPtr&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddOfflineMsgNoSMS(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void AddOfflineMsgEx_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsgExPtr&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddOfflineMsgEx(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateUserLogin_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginPtr&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateUserLogin(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateUserLoginEx_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginExPtr&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateUserLoginEx(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateUserLoginDataInfo_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginDataInfoPtr&, const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateUserLoginDataInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateUserLoginDataInfoEx_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginDataInfoExPtr&, const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateUserLoginDataInfoEx(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateUserSysMsgId_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserSysMsgIdPtr&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateUserSysMsgId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateUserDataInfo_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfoPtr&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Float, ::Ice::Float, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateUserDataInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateUserDataInfo2_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfo2Ptr&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Float, ::Ice::Float, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateUserDataInfo2(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateUserDataInfo3_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfo3Ptr&, const ::std::string&, const ::AliIMDBBase::RIGHTTABLE&, ::Ice::Int, ::Ice::Int, ::Ice::Float, ::Ice::Float, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateUserDataInfo3(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateUserVerifySet_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySetPtr&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateUserVerifySet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateUserVerifySetEx_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySetExPtr&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateUserVerifySetEx(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateUserVerifySetQuestion_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySetQuestionPtr&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateUserVerifySetQuestion(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateGroup_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateGroupPtr&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void MoveGroup_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_MoveGroupPtr&, const ::std::string&, ::Ice::Long, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___MoveGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateContactNickName_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactNickNamePtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateContactNickName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateContactGroup_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactGroupPtr&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateContactGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateContactStatus_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactStatusPtr&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateContactStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateNotifyMessage_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateNotifyMessagePtr&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateNotifyMessage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateToolProfiles_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateToolProfilesPtr&, const ::std::string&, ::Ice::Int, const ::Ice::StringSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateToolProfiles(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateToolProfilesEx_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateToolProfilesExPtr&, const ::std::string&, const ::AliIMDBBase::SICEToolProfileSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateToolProfilesEx(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void RemoveGroup_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_RemoveGroupPtr&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___RemoveGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void RemoveContact_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_RemoveContactPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___RemoveContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void RemoveInverfiedContact_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_RemoveInverfiedContactPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___RemoveInverfiedContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void RemoveBlackList_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_RemoveBlackListPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___RemoveBlackList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void IsBlackedByOther_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_IsBlackedByOtherPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___IsBlackedByOther(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void RemoveBatchContacts_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_RemoveBatchContactsPtr&, const ::std::string&, const ::Ice::StringSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___RemoveBatchContacts(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetUserDStatus_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserDStatusPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserDStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void AddUserDStatus_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_AddUserDStatusPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddUserDStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void RemoveUserDStatus_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_RemoveUserDStatusPtr&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___RemoveUserDStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetAllContactList_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetAllContactListPtr&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetAllContactList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetCntModifyList_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetCntModifyListPtr&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetCntModifyList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void AddGenContactFull_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_AddGenContactFullPtr&, const ::AliIMDBBase::SICEGenContactFull&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddGenContactFull(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetContactDetail_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetContactDetailPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetContactDetail(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void DelGenContact_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_DelGenContactPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DelGenContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void AddContact_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_AddContactPtr&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::AliIMDBBase::SUserWebBasicProfile&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void CheckUpgradeGenCnt_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_CheckUpgradeGenCntPtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___CheckUpgradeGenCnt(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void ModifyGenCntID_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_ModifyGenCntIDPtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___ModifyGenCntID(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpgradeGenContact_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpgradeGenContactPtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpgradeGenContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetUpdatedUserInfo_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetUpdatedUserInfoPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUpdatedUserInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void ModifyContactDetail_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_ModifyContactDetailPtr&, const ::AliIMDBBase::SICEGenContactFull&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___ModifyContactDetail(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateContactGroupByCid_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactGroupByCidPtr&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateContactGroupByCid(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateContactNickNameByCid_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactNickNameByCidPtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateContactNickNameByCid(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetCRMContactDetail_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetCRMContactDetailPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetCRMContactDetail(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetHardCodeIds_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetHardCodeIdsPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetHardCodeIds(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateHardCodeIds_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateHardCodeIdsPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateHardCodeIds(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetCntOtherModifyList_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetCntOtherModifyListPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetCntOtherModifyList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetCntOtherModifyInfo_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetCntOtherModifyInfoPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetCntOtherModifyInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetUserCRInfo_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserCRInfoPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserCRInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void SetUserCRInfo_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_SetUserCRInfoPtr&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___SetUserCRInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetSmsUserInfoByUid_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetSmsUserInfoByUidPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetSmsUserInfoByUid(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetSmsUserMsgInfo_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetSmsUserMsgInfoPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetSmsUserMsgInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void DelOfflineMsg_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_DelOfflineMsgPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DelOfflineMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void DelOfflineMsgEx_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_DelOfflineMsgExPtr&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DelOfflineMsgEx(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void DelWapOfflineMsg_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_DelWapOfflineMsgPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DelWapOfflineMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void ModifyCntMemo_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_ModifyCntMemoPtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___ModifyCntMemo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetCntMemo_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetCntMemoPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetCntMemo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetUserTribe_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserTribePtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserTribe(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetUserTribeConfig_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserTribeConfigPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserTribeConfig(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateUserTribeConfig_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserTribeConfigPtr&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateUserTribeConfig(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetTribeOffMngMsg_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetTribeOffMngMsgPtr&, ::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetTribeOffMngMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void DelTribeOffMngMsg_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_DelTribeOffMngMsgPtr&, ::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DelTribeOffMngMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void ModifyPersonalShow_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_ModifyPersonalShowPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___ModifyPersonalShow(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetPersonalShow_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetPersonalShowPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetPersonalShow(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetAllOnlineSmsUser_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetAllOnlineSmsUserPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetAllOnlineSmsUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetUserKeyWordDegree_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserKeyWordDegreePtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserKeyWordDegree(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetUserValue_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserValuePtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetUserValue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateUserMd5Password_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserMd5PasswordPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateUserMd5Password(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void InsertYahooUser_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_InsertYahooUserPtr&, const ::AliIMDBBase::SUdbUserInfo&, ::Ice::Int, const ::AliIMDBBase::SICEGenContactFullSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___InsertYahooUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetContactDetailByUid_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetContactDetailByUidPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetContactDetailByUid(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetChildTeamList_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetChildTeamListPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetChildTeamList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetChildTeamList2_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetChildTeamList2Ptr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetChildTeamList2(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetChildUserInfo_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetChildUserInfoPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetChildUserInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetChildUserInfo2_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetChildUserInfo2Ptr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetChildUserInfo2(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetShareContactList_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetShareContactListPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetShareContactList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetContactShareInfo_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetContactShareInfoPtr&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetContactShareInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void SetContactShareInfo_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_SetContactShareInfoPtr&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___SetContactShareInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetMultiAccountContactList_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiAccountContactListPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetMultiAccountContactList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetMultiServiceList_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiServiceListPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetMultiServiceList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetMultiBindToUser_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiBindToUserPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetMultiBindToUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetWebBinds_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetWebBindsPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetWebBinds(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void AddWebBind_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_AddWebBindPtr&, const ::std::string&, const ::AliIMDBBase::SICEKvPair&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___AddWebBind(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void ChangeWebBind_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_ChangeWebBindPtr&, const ::std::string&, const ::AliIMDBBase::SICEKvPair&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___ChangeWebBind(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void DelWebBind_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_DelWebBindPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___DelWebBind(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getUserSession_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getUserSessionPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserSession(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void checkUserSession_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_checkUserSessionPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___checkUserSession(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeSession_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_removeSessionPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___removeSession(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateSignature_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateSignaturePtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateSignature(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void updateContactClientInfo_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_updateContactClientInfoPtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___updateContactClientInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getUserProfile_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getUserProfilePtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getUserProfile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getPeerVerifyFlag_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getPeerVerifyFlagPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getPeerVerifyFlag(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getPeerVerifyFlagQuestion_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getPeerVerifyFlagQuestionPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getPeerVerifyFlagQuestion(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getNickName_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getNickNamePtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getNickName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getFTServiceInfo_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getFTServiceInfoPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getFTServiceInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getTietuServiceInfo_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getTietuServiceInfoPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getTietuServiceInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getFTSAddr_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getFTSAddrPtr&, ::Ice::Short, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getFTSAddr(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void registerWanghao_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_registerWanghaoPtr&, const ::std::string&, const ::AliIMInterface::KVMAP&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___registerWanghao(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void updateUserProfile_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_updateUserProfilePtr&, const ::std::string&, const ::AliIMInterface::KVMAP&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___updateUserProfile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void loadSitePrefix_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_loadSitePrefixPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___loadSitePrefix(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void updateAepUserId_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_updateAepUserIdPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___updateAepUserId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void updateVipflag_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_updateVipflagPtr&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___updateVipflag(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void checkWangHaoPwd_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_checkWangHaoPwdPtr&, const ::std::string&, bool, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___checkWangHaoPwd(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void checkCanLogin_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_checkCanLoginPtr&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___checkCanLogin(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetSIPSessionId_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_GetSIPSessionIdPtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___GetSIPSessionId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void CheckGsContact_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_CheckGsContactPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___CheckGsContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateSmsAuthCode_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateSmsAuthCodePtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateSmsAuthCode(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void CheckSmsAuthCode_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_CheckSmsAuthCodePtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___CheckSmsAuthCode(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void UpdateUserValueBySmsAuth_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserValueBySmsAuthPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___UpdateUserValueBySmsAuth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void CheckSmsAuthStatus_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_CheckSmsAuthStatusPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___CheckSmsAuthStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void CheckUserTokenExtra_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserTokenExtraPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___CheckUserTokenExtra(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void CheckUserWebPasswdExtra_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebPasswdExtraPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___CheckUserWebPasswdExtra(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getESShuntStatus_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getESShuntStatusPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESShuntStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setESShuntStatus_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_setESShuntStatusPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___setESShuntStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getMaxESReceptNum_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getMaxESReceptNumPtr&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getMaxESReceptNum(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setMaxESReceptNum_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_setMaxESReceptNumPtr&, const ::std::string&, ::Ice::Int, const ::AliIMDBBase::SICEReceptNumSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___setMaxESReceptNum(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getESPriority_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getESPriorityPtr&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESPriority(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setESPriority_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_setESPriorityPtr&, const ::std::string&, ::Ice::Int, const ::AliIMDBBase::SICEReceptPrioritySeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___setESPriority(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getESRecvOffMsg_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getESRecvOffMsgPtr&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESRecvOffMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setESRecvOffMsg_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_setESRecvOffMsgPtr&, const ::std::string&, ::Ice::Int, const ::AliIMDBBase::SICERecvOffMsgSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___setESRecvOffMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getESGroupList_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupListPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESGroupList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void insertESGroupInfo_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_insertESGroupInfoPtr&, const ::std::string&, const ::AliIMDBBase::SICEESGroupInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___insertESGroupInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void updateESGroupInfo_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_updateESGroupInfoPtr&, const ::std::string&, const ::AliIMDBBase::SICEESGroupInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___updateESGroupInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void delESGroup_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_delESGroupPtr&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___delESGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getESGroupInfo_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupInfoPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESGroupInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getESGroupInfoByID_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupInfoByIDPtr&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESGroupInfoByID(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getESUserFunc_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getESUserFuncPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESUserFunc(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getESUnJoinGroup_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getESUnJoinGroupPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESUnJoinGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void checkESRole_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_checkESRolePtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___checkESRole(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void CheckWebWWPasswd_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_CheckWebWWPasswdPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___CheckWebWWPasswd(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getESExpandArea_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getESExpandAreaPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESExpandArea(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getESExpandAreaById_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getESExpandAreaByIdPtr&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESExpandAreaById(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addESExpandArea_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_addESExpandAreaPtr&, const ::std::string&, const ::AliIMDBBase::SICEExpandArea&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___addESExpandArea(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void updateESExpandArea_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_updateESExpandAreaPtr&, const ::std::string&, const ::AliIMDBBase::SICEExpandArea&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___updateESExpandArea(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void delESExpandArea_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_delESExpandAreaPtr&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___delESExpandArea(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setESEval_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_setESEvalPtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___setESEval(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getESEval_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESEval(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void sendESEvalResult_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_sendESEvalResultPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___sendESEvalResult(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setESEvalResult_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_setESEvalResultPtr&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___setESEvalResult(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getESEvalResult_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultPtr&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESEvalResult(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getESEvalResultToday_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultTodayPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESEvalResultToday(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getESEvalResultHistory_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultHistoryPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESEvalResultHistory(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getESEvalResultHistorybypage_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultHistorybypagePtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getESEvalResultHistorybypage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getLastLoginTime_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getLastLoginTimePtr&, const ::Ice::StringSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getLastLoginTime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getChildShuntInfos_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getChildShuntInfosPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getChildShuntInfos(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setChildShuntInfos_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_setChildShuntInfosPtr&, const ::std::string&, const ::AliIMDBBase::SChildUserInfoSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___setChildShuntInfos(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getAgentChild_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getAgentChildPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getAgentChild(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setAgentChild_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_setAgentChildPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___setAgentChild(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getAgentList_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getAgentListPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getAgentList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getB2BChildTeamList_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildTeamListPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getB2BChildTeamList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getB2BChildInfo_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildInfoPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getB2BChildInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getB2BChildParentId_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildParentIdPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___getB2BChildParentId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addB2BChild_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_addB2BChildPtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___addB2BChild(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void updateB2BChild_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_updateB2BChildPtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___updateB2BChild(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void deleteB2BChild_async(const ::AliIMDBBase::AMD_IMDBProxyMgr_deleteB2BChildPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::IceInternal::DispatchStatus ___deleteB2BChild(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::IceInternal::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

void __patch__IMDBProxyMgrPtr(void*, ::Ice::ObjectPtr&);

}

#endif
