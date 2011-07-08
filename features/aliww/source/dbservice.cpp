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

#include <dbservice.h>
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

static const ::std::string __AliIMDBBase__IMDBProxyMgr__sayhello_name = "sayhello";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__CheckUserToken_name = "CheckUserToken";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__CheckTmpSession_name = "CheckTmpSession";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__CheckUserWebPasswd_name = "CheckUserWebPasswd";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__CheckUserPasswd_name = "CheckUserPasswd";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__CheckUserWebToken_name = "CheckUserWebToken";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetAtmLongid_name = "GetAtmLongid";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__AddUser60_name = "AddUser60";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetWebMemberPWInfo_name = "GetWebMemberPWInfo";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetWebMemberPWInfoEx_name = "GetWebMemberPWInfoEx";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetUserWebBasicProfile_name = "GetUserWebBasicProfile";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__CheckCanAddContact_name = "CheckCanAddContact";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__QueryMatchedUserIds_name = "QueryMatchedUserIds";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpdateContactWebInfo_name = "UpdateContactWebInfo";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__DelTaobaoUser_name = "DelTaobaoUser";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__DelAnyUser_name = "DelAnyUser";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__AddUserKeyWord_name = "AddUserKeyWord";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpdateUserKeyWord_name = "UpdateUserKeyWord";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetUserKeyWord_name = "GetUserKeyWord";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__QueryUserIdsByKeyWord_name = "QueryUserIdsByKeyWord";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetBatchMemberInfo_name = "GetBatchMemberInfo";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetAllVersion_name = "GetAllVersion";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetAllSysMsg_name = "GetAllSysMsg";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetAllExSysMsg_name = "GetAllExSysMsg";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetUserInfo_name = "GetUserInfo";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetUserInfo2_name = "GetUserInfo2";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetUserInfoEx_name = "GetUserInfoEx";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetUserInfoNew_name = "GetUserInfoNew";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetUserInfo2New_name = "GetUserInfo2New";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetUserInfoExNew_name = "GetUserInfoExNew";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetUserInfoExNew2_name = "GetUserInfoExNew2";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetUserInfoExNew3_name = "GetUserInfoExNew3";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetUserInfoExNew4_name = "GetUserInfoExNew4";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetUserVerifyInfo_name = "GetUserVerifyInfo";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetUserVerifyInfoEx_name = "GetUserVerifyInfoEx";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetUserVerifyInfoQuestion_name = "GetUserVerifyInfoQuestion";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetGroupList_name = "GetGroupList";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetGroupListEx_name = "GetGroupListEx";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetContactList_name = "GetContactList";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetBlackList_name = "GetBlackList";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetReverseBlackList_name = "GetReverseBlackList";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetOfflineMsg_name = "GetOfflineMsg";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetOfflineMsgEx_name = "GetOfflineMsgEx";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetOfflineMsgCount_name = "GetOfflineMsgCount";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetEnetOfflineMsgNum_name = "GetEnetOfflineMsgNum";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetContactInfo_name = "GetContactInfo";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetOfflineMsgNum_name = "GetOfflineMsgNum";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetToolProfiles_name = "GetToolProfiles";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetToolProfilesEx_name = "GetToolProfilesEx";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetSysMsg_name = "GetSysMsg";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__AddUser_name = "AddUser";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__AddGroup_name = "AddGroup";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__AddGroupEx_name = "AddGroupEx";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__AddBlackList_name = "AddBlackList";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__AddOfflineMsg_name = "AddOfflineMsg";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__AddExpriteTimeOfflineMsg_name = "AddExpriteTimeOfflineMsg";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__AddOfflineMsgNoSMS_name = "AddOfflineMsgNoSMS";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__AddOfflineMsgEx_name = "AddOfflineMsgEx";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpdateUserLogin_name = "UpdateUserLogin";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpdateUserLoginEx_name = "UpdateUserLoginEx";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpdateUserLoginDataInfo_name = "UpdateUserLoginDataInfo";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpdateUserLoginDataInfoEx_name = "UpdateUserLoginDataInfoEx";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpdateUserSysMsgId_name = "UpdateUserSysMsgId";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpdateUserDataInfo_name = "UpdateUserDataInfo";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpdateUserDataInfo2_name = "UpdateUserDataInfo2";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpdateUserDataInfo3_name = "UpdateUserDataInfo3";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpdateUserVerifySet_name = "UpdateUserVerifySet";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpdateUserVerifySetEx_name = "UpdateUserVerifySetEx";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpdateUserVerifySetQuestion_name = "UpdateUserVerifySetQuestion";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpdateGroup_name = "UpdateGroup";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__MoveGroup_name = "MoveGroup";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpdateContactNickName_name = "UpdateContactNickName";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpdateContactGroup_name = "UpdateContactGroup";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpdateContactStatus_name = "UpdateContactStatus";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpdateNotifyMessage_name = "UpdateNotifyMessage";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpdateToolProfiles_name = "UpdateToolProfiles";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpdateToolProfilesEx_name = "UpdateToolProfilesEx";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__RemoveGroup_name = "RemoveGroup";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__RemoveContact_name = "RemoveContact";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__RemoveInverfiedContact_name = "RemoveInverfiedContact";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__RemoveBlackList_name = "RemoveBlackList";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__IsBlackedByOther_name = "IsBlackedByOther";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__RemoveBatchContacts_name = "RemoveBatchContacts";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetUserDStatus_name = "GetUserDStatus";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__AddUserDStatus_name = "AddUserDStatus";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__RemoveUserDStatus_name = "RemoveUserDStatus";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetAllContactList_name = "GetAllContactList";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetCntModifyList_name = "GetCntModifyList";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__AddGenContactFull_name = "AddGenContactFull";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetContactDetail_name = "GetContactDetail";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__DelGenContact_name = "DelGenContact";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__AddContact_name = "AddContact";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__CheckUpgradeGenCnt_name = "CheckUpgradeGenCnt";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__ModifyGenCntID_name = "ModifyGenCntID";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpgradeGenContact_name = "UpgradeGenContact";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetUpdatedUserInfo_name = "GetUpdatedUserInfo";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__ModifyContactDetail_name = "ModifyContactDetail";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpdateContactGroupByCid_name = "UpdateContactGroupByCid";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpdateContactNickNameByCid_name = "UpdateContactNickNameByCid";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetCRMContactDetail_name = "GetCRMContactDetail";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetHardCodeIds_name = "GetHardCodeIds";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpdateHardCodeIds_name = "UpdateHardCodeIds";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetCntOtherModifyList_name = "GetCntOtherModifyList";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetCntOtherModifyInfo_name = "GetCntOtherModifyInfo";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetUserCRInfo_name = "GetUserCRInfo";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__SetUserCRInfo_name = "SetUserCRInfo";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetSmsUserInfoByUid_name = "GetSmsUserInfoByUid";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetSmsUserMsgInfo_name = "GetSmsUserMsgInfo";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__DelOfflineMsg_name = "DelOfflineMsg";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__DelOfflineMsgEx_name = "DelOfflineMsgEx";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__DelWapOfflineMsg_name = "DelWapOfflineMsg";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__ModifyCntMemo_name = "ModifyCntMemo";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetCntMemo_name = "GetCntMemo";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetUserTribe_name = "GetUserTribe";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetUserTribeConfig_name = "GetUserTribeConfig";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpdateUserTribeConfig_name = "UpdateUserTribeConfig";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetTribeOffMngMsg_name = "GetTribeOffMngMsg";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__DelTribeOffMngMsg_name = "DelTribeOffMngMsg";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__ModifyPersonalShow_name = "ModifyPersonalShow";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetPersonalShow_name = "GetPersonalShow";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetAllOnlineSmsUser_name = "GetAllOnlineSmsUser";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetUserKeyWordDegree_name = "GetUserKeyWordDegree";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetUserValue_name = "GetUserValue";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpdateUserMd5Password_name = "UpdateUserMd5Password";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__InsertYahooUser_name = "InsertYahooUser";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetContactDetailByUid_name = "GetContactDetailByUid";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetChildTeamList_name = "GetChildTeamList";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetChildTeamList2_name = "GetChildTeamList2";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetChildUserInfo_name = "GetChildUserInfo";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetChildUserInfo2_name = "GetChildUserInfo2";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetShareContactList_name = "GetShareContactList";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetContactShareInfo_name = "GetContactShareInfo";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__SetContactShareInfo_name = "SetContactShareInfo";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetMultiAccountContactList_name = "GetMultiAccountContactList";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetMultiServiceList_name = "GetMultiServiceList";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetMultiBindToUser_name = "GetMultiBindToUser";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetWebBinds_name = "GetWebBinds";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__AddWebBind_name = "AddWebBind";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__ChangeWebBind_name = "ChangeWebBind";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__DelWebBind_name = "DelWebBind";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getUserSession_name = "getUserSession";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__checkUserSession_name = "checkUserSession";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__removeSession_name = "removeSession";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpdateSignature_name = "UpdateSignature";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__updateContactClientInfo_name = "updateContactClientInfo";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getUserProfile_name = "getUserProfile";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getPeerVerifyFlag_name = "getPeerVerifyFlag";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getPeerVerifyFlagQuestion_name = "getPeerVerifyFlagQuestion";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getNickName_name = "getNickName";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getFTServiceInfo_name = "getFTServiceInfo";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getTietuServiceInfo_name = "getTietuServiceInfo";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getFTSAddr_name = "getFTSAddr";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__registerWanghao_name = "registerWanghao";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__updateUserProfile_name = "updateUserProfile";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__loadSitePrefix_name = "loadSitePrefix";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__updateAepUserId_name = "updateAepUserId";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__updateVipflag_name = "updateVipflag";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__checkWangHaoPwd_name = "checkWangHaoPwd";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__checkCanLogin_name = "checkCanLogin";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__GetSIPSessionId_name = "GetSIPSessionId";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__CheckGsContact_name = "CheckGsContact";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpdateSmsAuthCode_name = "UpdateSmsAuthCode";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__CheckSmsAuthCode_name = "CheckSmsAuthCode";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__UpdateUserValueBySmsAuth_name = "UpdateUserValueBySmsAuth";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__CheckSmsAuthStatus_name = "CheckSmsAuthStatus";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__CheckUserTokenExtra_name = "CheckUserTokenExtra";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__CheckUserWebPasswdExtra_name = "CheckUserWebPasswdExtra";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getESShuntStatus_name = "getESShuntStatus";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__setESShuntStatus_name = "setESShuntStatus";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getMaxESReceptNum_name = "getMaxESReceptNum";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__setMaxESReceptNum_name = "setMaxESReceptNum";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getESPriority_name = "getESPriority";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__setESPriority_name = "setESPriority";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getESRecvOffMsg_name = "getESRecvOffMsg";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__setESRecvOffMsg_name = "setESRecvOffMsg";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getESGroupList_name = "getESGroupList";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__insertESGroupInfo_name = "insertESGroupInfo";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__updateESGroupInfo_name = "updateESGroupInfo";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__delESGroup_name = "delESGroup";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getESGroupInfo_name = "getESGroupInfo";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getESGroupInfoByID_name = "getESGroupInfoByID";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getESUserFunc_name = "getESUserFunc";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getESUnJoinGroup_name = "getESUnJoinGroup";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__checkESRole_name = "checkESRole";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__CheckWebWWPasswd_name = "CheckWebWWPasswd";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getESExpandArea_name = "getESExpandArea";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getESExpandAreaById_name = "getESExpandAreaById";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__addESExpandArea_name = "addESExpandArea";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__updateESExpandArea_name = "updateESExpandArea";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__delESExpandArea_name = "delESExpandArea";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__setESEval_name = "setESEval";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getESEval_name = "getESEval";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__sendESEvalResult_name = "sendESEvalResult";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__setESEvalResult_name = "setESEvalResult";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getESEvalResult_name = "getESEvalResult";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getESEvalResultToday_name = "getESEvalResultToday";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getESEvalResultHistory_name = "getESEvalResultHistory";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getESEvalResultHistorybypage_name = "getESEvalResultHistorybypage";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getLastLoginTime_name = "getLastLoginTime";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getChildShuntInfos_name = "getChildShuntInfos";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__setChildShuntInfos_name = "setChildShuntInfos";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getAgentChild_name = "getAgentChild";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__setAgentChild_name = "setAgentChild";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getAgentList_name = "getAgentList";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getB2BChildTeamList_name = "getB2BChildTeamList";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getB2BChildInfo_name = "getB2BChildInfo";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__getB2BChildParentId_name = "getB2BChildParentId";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__addB2BChild_name = "addB2BChild";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__updateB2BChild_name = "updateB2BChild";

static const ::std::string __AliIMDBBase__IMDBProxyMgr__deleteB2BChild_name = "deleteB2BChild";

void
IceInternal::incRef(::AliIMDBBase::IMDBProxyMgr* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::AliIMDBBase::IMDBProxyMgr* p)
{
    p->__decRef();
}

void
IceInternal::incRef(::IceProxy::AliIMDBBase::IMDBProxyMgr* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::IceProxy::AliIMDBBase::IMDBProxyMgr* p)
{
    p->__decRef();
}

void
AliIMDBBase::__write(::IceInternal::BasicStream* __os, const ::AliIMDBBase::IMDBProxyMgrPrx& v)
{
    __os->write(::Ice::ObjectPrx(v));
}

void
AliIMDBBase::__read(::IceInternal::BasicStream* __is, ::AliIMDBBase::IMDBProxyMgrPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::AliIMDBBase::IMDBProxyMgr;
        v->__copyFrom(proxy);
    }
}

void
AliIMDBBase::__write(::IceInternal::BasicStream* __os, const ::AliIMDBBase::IMDBProxyMgrPtr& v)
{
    __os->write(::Ice::ObjectPtr(v));
}

void
AliIMDBBase::__addObject(const IMDBProxyMgrPtr& p, ::IceInternal::GCCountMap& c)
{
    p->__addObject(c);
}

bool
AliIMDBBase::__usesClasses(const IMDBProxyMgrPtr& p)
{
    return p->__usesClasses();
}

void
AliIMDBBase::__decRefUnsafe(const IMDBProxyMgrPtr& p)
{
    p->__decRefUnsafe();
}

void
AliIMDBBase::__clearHandleUnsafe(IMDBProxyMgrPtr& p)
{
    p.__clearHandleUnsafe();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_sayhello::AMD_IMDBProxyMgr_sayhello(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_sayhello::ice_response(::Ice::Int __ret, const ::std::string& helloword)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(helloword);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_sayhello::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_sayhello::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_sayhello::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserToken::AMD_IMDBProxyMgr_CheckUserToken(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserToken::ice_response(::Ice::Int __ret, const ::std::string& lid, const ::std::string& retuidtokenpw, const ::std::string& retmd5passwd, ::Ice::Int activeStat)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(lid);
        __os->write(retuidtokenpw);
        __os->write(retmd5passwd);
        __os->write(activeStat);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserToken::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserToken::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserToken::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckTmpSession::AMD_IMDBProxyMgr_CheckTmpSession(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckTmpSession::ice_response(::Ice::Int __ret, const ::std::string& lid, const ::std::string& retuidtokenpw, const ::std::string& retmd5passwd, ::Ice::Int activeStat)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(lid);
        __os->write(retuidtokenpw);
        __os->write(retmd5passwd);
        __os->write(activeStat);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckTmpSession::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckTmpSession::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckTmpSession::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebPasswd::AMD_IMDBProxyMgr_CheckUserWebPasswd(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebPasswd::ice_response(::Ice::Int __ret, const ::std::string& lid, const ::std::string& retuidtokenpw, const ::std::string& retmd5passwd, ::Ice::Int activeStat)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(lid);
        __os->write(retuidtokenpw);
        __os->write(retmd5passwd);
        __os->write(activeStat);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebPasswd::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebPasswd::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebPasswd::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserPasswd::AMD_IMDBProxyMgr_CheckUserPasswd(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserPasswd::ice_response(::Ice::Int __ret, const ::std::string& retuidtokenpw, const ::std::string& retmd5passwd, ::Ice::Int activeStat)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(retuidtokenpw);
        __os->write(retmd5passwd);
        __os->write(activeStat);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserPasswd::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserPasswd::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserPasswd::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebToken::AMD_IMDBProxyMgr_CheckUserWebToken(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebToken::ice_response(::Ice::Int __ret, const ::std::string& reason)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(reason);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebToken::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebToken::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebToken::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAtmLongid::AMD_IMDBProxyMgr_GetAtmLongid(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAtmLongid::ice_response(::Ice::Int __ret, const ::std::string& longId)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(longId);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAtmLongid::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAtmLongid::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAtmLongid::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddUser60::AMD_IMDBProxyMgr_AddUser60(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddUser60::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddUser60::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddUser60::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddUser60::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetWebMemberPWInfo::AMD_IMDBProxyMgr_GetWebMemberPWInfo(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetWebMemberPWInfo::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SMemberPWInfo& pwInfo)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        pwInfo.__write(__os);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetWebMemberPWInfo::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetWebMemberPWInfo::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetWebMemberPWInfo::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetWebMemberPWInfoEx::AMD_IMDBProxyMgr_GetWebMemberPWInfoEx(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetWebMemberPWInfoEx::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SMemberPWInfoEx& pwInfo)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        pwInfo.__write(__os);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetWebMemberPWInfoEx::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetWebMemberPWInfoEx::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetWebMemberPWInfoEx::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserWebBasicProfile::AMD_IMDBProxyMgr_GetUserWebBasicProfile(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserWebBasicProfile::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SUserWebBasicProfile& profile)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        profile.__write(__os);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserWebBasicProfile::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserWebBasicProfile::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserWebBasicProfile::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckCanAddContact::AMD_IMDBProxyMgr_CheckCanAddContact(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckCanAddContact::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckCanAddContact::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckCanAddContact::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckCanAddContact::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_QueryMatchedUserIds::AMD_IMDBProxyMgr_QueryMatchedUserIds(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_QueryMatchedUserIds::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SMatchedUserIdInfoSeq& matchedIds)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(matchedIds.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &matchedIds[0], &matchedIds[0] + matchedIds.size(), ::AliIMDBBase::__U__SMatchedUserIdInfoSeq());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_QueryMatchedUserIds::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_QueryMatchedUserIds::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_QueryMatchedUserIds::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactWebInfo::AMD_IMDBProxyMgr_UpdateContactWebInfo(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactWebInfo::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactWebInfo::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactWebInfo::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactWebInfo::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelTaobaoUser::AMD_IMDBProxyMgr_DelTaobaoUser(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelTaobaoUser::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelTaobaoUser::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelTaobaoUser::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelTaobaoUser::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelAnyUser::AMD_IMDBProxyMgr_DelAnyUser(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelAnyUser::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelAnyUser::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelAnyUser::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelAnyUser::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddUserKeyWord::AMD_IMDBProxyMgr_AddUserKeyWord(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddUserKeyWord::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddUserKeyWord::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddUserKeyWord::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddUserKeyWord::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserKeyWord::AMD_IMDBProxyMgr_UpdateUserKeyWord(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserKeyWord::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserKeyWord::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserKeyWord::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserKeyWord::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserKeyWord::AMD_IMDBProxyMgr_GetUserKeyWord(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserKeyWord::ice_response(::Ice::Int __ret, const ::std::string& keyword, ::Ice::Int flag)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(keyword);
        __os->write(flag);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserKeyWord::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserKeyWord::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserKeyWord::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_QueryUserIdsByKeyWord::AMD_IMDBProxyMgr_QueryUserIdsByKeyWord(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_QueryUserIdsByKeyWord::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SMatchedUserIdInfoSeq& matchedIds)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(matchedIds.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &matchedIds[0], &matchedIds[0] + matchedIds.size(), ::AliIMDBBase::__U__SMatchedUserIdInfoSeq());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_QueryUserIdsByKeyWord::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_QueryUserIdsByKeyWord::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_QueryUserIdsByKeyWord::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetBatchMemberInfo::AMD_IMDBProxyMgr_GetBatchMemberInfo(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetBatchMemberInfo::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEMemberInfoSeq& memberInfoList)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(memberInfoList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &memberInfoList[0], &memberInfoList[0] + memberInfoList.size(), ::AliIMDBBase::__U__SICEMemberInfoSeq());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetBatchMemberInfo::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetBatchMemberInfo::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetBatchMemberInfo::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllVersion::AMD_IMDBProxyMgr_GetAllVersion(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllVersion::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEVersionSeq& versionList)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(versionList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &versionList[0], &versionList[0] + versionList.size(), ::AliIMDBBase::__U__SICEVersionSeq());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllVersion::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllVersion::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllVersion::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllSysMsg::AMD_IMDBProxyMgr_GetAllSysMsg(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllSysMsg::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICESysMessageSeq& sysMsgList)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(sysMsgList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &sysMsgList[0], &sysMsgList[0] + sysMsgList.size(), ::AliIMDBBase::__U__SICESysMessageSeq());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllSysMsg::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllSysMsg::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllSysMsg::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllExSysMsg::AMD_IMDBProxyMgr_GetAllExSysMsg(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllExSysMsg::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SExICESysMessageSeq& sysMsgList)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(sysMsgList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &sysMsgList[0], &sysMsgList[0] + sysMsgList.size(), ::AliIMDBBase::__U__SExICESysMessageSeq());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllExSysMsg::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllExSysMsg::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllExSysMsg::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfo::AMD_IMDBProxyMgr_GetUserInfo(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfo::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEUserInfo& userInfo)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        userInfo.__write(__os);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfo::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfo::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfo::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfo2::AMD_IMDBProxyMgr_GetUserInfo2(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfo2::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEUserInfo2& userInfo)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        userInfo.__write(__os);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfo2::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfo2::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfo2::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoEx::AMD_IMDBProxyMgr_GetUserInfoEx(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoEx::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEUserInfoEx& userInfo)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        userInfo.__write(__os);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoEx::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoEx::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoEx::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoNew::AMD_IMDBProxyMgr_GetUserInfoNew(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoNew::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEUserInfoNew& userInfo)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        userInfo.__write(__os);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoNew::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoNew::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoNew::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfo2New::AMD_IMDBProxyMgr_GetUserInfo2New(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfo2New::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEUserInfo2New& userInfo)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        userInfo.__write(__os);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfo2New::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfo2New::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfo2New::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew::AMD_IMDBProxyMgr_GetUserInfoExNew(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEUserInfoExNew& userInfo)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        userInfo.__write(__os);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew2::AMD_IMDBProxyMgr_GetUserInfoExNew2(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew2::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEUserInfoExNew2& userInfo)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        userInfo.__write(__os);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew2::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew2::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew2::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew3::AMD_IMDBProxyMgr_GetUserInfoExNew3(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew3::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEUserInfoExNew3& userInfo)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        userInfo.__write(__os);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew3::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew3::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew3::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew4::AMD_IMDBProxyMgr_GetUserInfoExNew4(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew4::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEUserInfoExNew4& userInfo)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        userInfo.__write(__os);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew4::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew4::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew4::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfo::AMD_IMDBProxyMgr_GetUserVerifyInfo(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfo::ice_response(::Ice::Int __ret, ::Ice::Byte addcontactverify, ::Ice::Byte sendmsgverify)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(addcontactverify);
        __os->write(sendmsgverify);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfo::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfo::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfo::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfoEx::AMD_IMDBProxyMgr_GetUserVerifyInfoEx(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfoEx::ice_response(::Ice::Int __ret, ::Ice::Byte addcontactverify, ::Ice::Byte sendmsgverify, ::Ice::Byte enableSearchFlag)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(addcontactverify);
        __os->write(sendmsgverify);
        __os->write(enableSearchFlag);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfoEx::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfoEx::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfoEx::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfoQuestion::AMD_IMDBProxyMgr_GetUserVerifyInfoQuestion(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfoQuestion::ice_response(::Ice::Int __ret, ::Ice::Byte addcontactverify, ::Ice::Byte sendmsgverify, ::Ice::Byte enableSearchFlag, const ::std::string& question, const ::std::string& answer)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(addcontactverify);
        __os->write(sendmsgverify);
        __os->write(enableSearchFlag);
        __os->write(question);
        __os->write(answer);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfoQuestion::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfoQuestion::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfoQuestion::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetGroupList::AMD_IMDBProxyMgr_GetGroupList(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetGroupList::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEGroupInfoSeq& groupList, ::Ice::Int groupTimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(groupList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &groupList[0], &groupList[0] + groupList.size(), ::AliIMDBBase::__U__SICEGroupInfoSeq());
        }
        __os->write(groupTimes);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetGroupList::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetGroupList::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetGroupList::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetGroupListEx::AMD_IMDBProxyMgr_GetGroupListEx(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetGroupListEx::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEGroupInfoExSeq& groupList, ::Ice::Int groupTimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(groupList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &groupList[0], &groupList[0] + groupList.size(), ::AliIMDBBase::__U__SICEGroupInfoExSeq());
        }
        __os->write(groupTimes);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetGroupListEx::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetGroupListEx::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetGroupListEx::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactList::AMD_IMDBProxyMgr_GetContactList(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactList::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEContactInfoSeq& contactList, ::Ice::Int contactTimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(contactList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &contactList[0], &contactList[0] + contactList.size(), ::AliIMDBBase::__U__SICEContactInfoSeq());
        }
        __os->write(contactTimes);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactList::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactList::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactList::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetBlackList::AMD_IMDBProxyMgr_GetBlackList(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetBlackList::ice_response(::Ice::Int __ret, const ::Ice::StringSeq& blackList, ::Ice::Int blacklistTimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(blackList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&blackList[0], &blackList[0] + blackList.size());
        }
        __os->write(blacklistTimes);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetBlackList::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetBlackList::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetBlackList::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetReverseBlackList::AMD_IMDBProxyMgr_GetReverseBlackList(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetReverseBlackList::ice_response(::Ice::Int __ret, const ::Ice::StringSeq& reverseBlackList, ::Ice::Int reverseBlacklistTimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(reverseBlackList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&reverseBlackList[0], &reverseBlackList[0] + reverseBlackList.size());
        }
        __os->write(reverseBlacklistTimes);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetReverseBlackList::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetReverseBlackList::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetReverseBlackList::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsg::AMD_IMDBProxyMgr_GetOfflineMsg(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsg::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEOffLineMessegeSeq& offlineMsgList, ::Ice::Int offlinemsgTimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(offlineMsgList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &offlineMsgList[0], &offlineMsgList[0] + offlineMsgList.size(), ::AliIMDBBase::__U__SICEOffLineMessegeSeq());
        }
        __os->write(offlinemsgTimes);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsg::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsg::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsg::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgEx::AMD_IMDBProxyMgr_GetOfflineMsgEx(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgEx::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEOffLineMessegeExSeq& offlineMsgList, ::Ice::Int offlinemsgTimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(offlineMsgList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &offlineMsgList[0], &offlineMsgList[0] + offlineMsgList.size(), ::AliIMDBBase::__U__SICEOffLineMessegeExSeq());
        }
        __os->write(offlinemsgTimes);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgEx::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgEx::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgEx::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgCount::AMD_IMDBProxyMgr_GetOfflineMsgCount(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgCount::ice_response(::Ice::Int __ret, ::Ice::Int chatMsgNum, ::Ice::Int sysMsgNum)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(chatMsgNum);
        __os->write(sysMsgNum);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgCount::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgCount::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgCount::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetEnetOfflineMsgNum::AMD_IMDBProxyMgr_GetEnetOfflineMsgNum(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetEnetOfflineMsgNum::ice_response(::Ice::Int __ret, ::Ice::Int msgNum)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(msgNum);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetEnetOfflineMsgNum::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetEnetOfflineMsgNum::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetEnetOfflineMsgNum::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactInfo::AMD_IMDBProxyMgr_GetContactInfo(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactInfo::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEContactInfo& contactInfo)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        contactInfo.__write(__os);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactInfo::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactInfo::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactInfo::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgNum::AMD_IMDBProxyMgr_GetOfflineMsgNum(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgNum::ice_response(::Ice::Int __ret, ::Ice::Int msgNum)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(msgNum);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgNum::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgNum::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgNum::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetToolProfiles::AMD_IMDBProxyMgr_GetToolProfiles(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetToolProfiles::ice_response(::Ice::Int __ret, const ::Ice::StringSeq& toolProfilesList, ::Ice::Int toolTimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(toolProfilesList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&toolProfilesList[0], &toolProfilesList[0] + toolProfilesList.size());
        }
        __os->write(toolTimes);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetToolProfiles::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetToolProfiles::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetToolProfiles::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetToolProfilesEx::AMD_IMDBProxyMgr_GetToolProfilesEx(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetToolProfilesEx::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEToolProfileSeq& toolProfilesList, ::Ice::Int toolTimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(toolProfilesList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &toolProfilesList[0], &toolProfilesList[0] + toolProfilesList.size(), ::AliIMDBBase::__U__SICEToolProfileSeq());
        }
        __os->write(toolTimes);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetToolProfilesEx::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetToolProfilesEx::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetToolProfilesEx::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetSysMsg::AMD_IMDBProxyMgr_GetSysMsg(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetSysMsg::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICESysMessage& sysMsg)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        sysMsg.__write(__os);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetSysMsg::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetSysMsg::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetSysMsg::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddUser::AMD_IMDBProxyMgr_AddUser(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddUser::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddUser::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddUser::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddUser::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddGroup::AMD_IMDBProxyMgr_AddGroup(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddGroup::ice_response(::Ice::Int __ret, ::Ice::Int groupId, ::Ice::Int groupTimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(groupId);
        __os->write(groupTimes);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddGroup::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddGroup::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddGroup::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddGroupEx::AMD_IMDBProxyMgr_AddGroupEx(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddGroupEx::ice_response(::Ice::Int __ret, ::Ice::Int groupId, ::Ice::Int groupTimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(groupId);
        __os->write(groupTimes);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddGroupEx::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddGroupEx::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddGroupEx::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddBlackList::AMD_IMDBProxyMgr_AddBlackList(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddBlackList::ice_response(::Ice::Int __ret, ::Ice::Int blackListTimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(blackListTimes);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddBlackList::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddBlackList::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddBlackList::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsg::AMD_IMDBProxyMgr_AddOfflineMsg(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsg::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsg::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsg::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsg::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddExpriteTimeOfflineMsg::AMD_IMDBProxyMgr_AddExpriteTimeOfflineMsg(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddExpriteTimeOfflineMsg::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddExpriteTimeOfflineMsg::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddExpriteTimeOfflineMsg::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddExpriteTimeOfflineMsg::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsgNoSMS::AMD_IMDBProxyMgr_AddOfflineMsgNoSMS(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsgNoSMS::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsgNoSMS::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsgNoSMS::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsgNoSMS::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsgEx::AMD_IMDBProxyMgr_AddOfflineMsgEx(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsgEx::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsgEx::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsgEx::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsgEx::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLogin::AMD_IMDBProxyMgr_UpdateUserLogin(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLogin::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLogin::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLogin::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLogin::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginEx::AMD_IMDBProxyMgr_UpdateUserLoginEx(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginEx::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginEx::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginEx::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginEx::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginDataInfo::AMD_IMDBProxyMgr_UpdateUserLoginDataInfo(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginDataInfo::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginDataInfo::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginDataInfo::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginDataInfo::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginDataInfoEx::AMD_IMDBProxyMgr_UpdateUserLoginDataInfoEx(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginDataInfoEx::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginDataInfoEx::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginDataInfoEx::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginDataInfoEx::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserSysMsgId::AMD_IMDBProxyMgr_UpdateUserSysMsgId(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserSysMsgId::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserSysMsgId::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserSysMsgId::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserSysMsgId::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfo::AMD_IMDBProxyMgr_UpdateUserDataInfo(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfo::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfo::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfo::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfo::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfo2::AMD_IMDBProxyMgr_UpdateUserDataInfo2(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfo2::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfo2::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfo2::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfo2::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfo3::AMD_IMDBProxyMgr_UpdateUserDataInfo3(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfo3::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfo3::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfo3::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfo3::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySet::AMD_IMDBProxyMgr_UpdateUserVerifySet(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySet::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySet::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySet::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySet::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySetEx::AMD_IMDBProxyMgr_UpdateUserVerifySetEx(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySetEx::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySetEx::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySetEx::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySetEx::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySetQuestion::AMD_IMDBProxyMgr_UpdateUserVerifySetQuestion(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySetQuestion::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySetQuestion::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySetQuestion::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySetQuestion::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateGroup::AMD_IMDBProxyMgr_UpdateGroup(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateGroup::ice_response(::Ice::Int __ret, ::Ice::Int groupTimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(groupTimes);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateGroup::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateGroup::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateGroup::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_MoveGroup::AMD_IMDBProxyMgr_MoveGroup(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_MoveGroup::ice_response(::Ice::Int __ret, ::Ice::Int groupTimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(groupTimes);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_MoveGroup::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_MoveGroup::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_MoveGroup::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactNickName::AMD_IMDBProxyMgr_UpdateContactNickName(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactNickName::ice_response(::Ice::Int __ret, ::Ice::Int contactTimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(contactTimes);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactNickName::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactNickName::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactNickName::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactGroup::AMD_IMDBProxyMgr_UpdateContactGroup(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactGroup::ice_response(::Ice::Int __ret, ::Ice::Int contactTimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(contactTimes);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactGroup::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactGroup::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactGroup::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactStatus::AMD_IMDBProxyMgr_UpdateContactStatus(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactStatus::ice_response(::Ice::Int __ret, ::Ice::Int contactTimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(contactTimes);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactStatus::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactStatus::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactStatus::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateNotifyMessage::AMD_IMDBProxyMgr_UpdateNotifyMessage(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateNotifyMessage::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateNotifyMessage::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateNotifyMessage::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateNotifyMessage::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateToolProfiles::AMD_IMDBProxyMgr_UpdateToolProfiles(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateToolProfiles::ice_response(::Ice::Int __ret, ::Ice::Int toolTimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(toolTimes);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateToolProfiles::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateToolProfiles::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateToolProfiles::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateToolProfilesEx::AMD_IMDBProxyMgr_UpdateToolProfilesEx(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateToolProfilesEx::ice_response(::Ice::Int __ret, ::Ice::Int toolTimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(toolTimes);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateToolProfilesEx::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateToolProfilesEx::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateToolProfilesEx::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveGroup::AMD_IMDBProxyMgr_RemoveGroup(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveGroup::ice_response(::Ice::Int __ret, ::Ice::Int groupTimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(groupTimes);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveGroup::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveGroup::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveGroup::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveContact::AMD_IMDBProxyMgr_RemoveContact(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveContact::ice_response(::Ice::Int __ret, ::Ice::Int contactTimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(contactTimes);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveContact::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveContact::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveContact::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveInverfiedContact::AMD_IMDBProxyMgr_RemoveInverfiedContact(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveInverfiedContact::ice_response(::Ice::Int __ret, ::Ice::Int contactTimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(contactTimes);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveInverfiedContact::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveInverfiedContact::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveInverfiedContact::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveBlackList::AMD_IMDBProxyMgr_RemoveBlackList(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveBlackList::ice_response(::Ice::Int __ret, ::Ice::Int blackListTimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(blackListTimes);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveBlackList::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveBlackList::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveBlackList::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_IsBlackedByOther::AMD_IMDBProxyMgr_IsBlackedByOther(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_IsBlackedByOther::ice_response(::Ice::Int __ret, bool bBlacked)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(bBlacked);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_IsBlackedByOther::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_IsBlackedByOther::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_IsBlackedByOther::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveBatchContacts::AMD_IMDBProxyMgr_RemoveBatchContacts(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveBatchContacts::ice_response(::Ice::Int __ret, const ::Ice::StringSeq& retVect, ::Ice::Int modifyCntTimes, ::Ice::Int modifyGenCntTime)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(retVect.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&retVect[0], &retVect[0] + retVect.size());
        }
        __os->write(modifyCntTimes);
        __os->write(modifyGenCntTime);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveBatchContacts::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveBatchContacts::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveBatchContacts::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserDStatus::AMD_IMDBProxyMgr_GetUserDStatus(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserDStatus::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEUserDStatusSeq& userDStatusList)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(userDStatusList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &userDStatusList[0], &userDStatusList[0] + userDStatusList.size(), ::AliIMDBBase::__U__SICEUserDStatusSeq());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserDStatus::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserDStatus::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserDStatus::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddUserDStatus::AMD_IMDBProxyMgr_AddUserDStatus(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddUserDStatus::ice_response(::Ice::Int __ret, ::Ice::Int statusId)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(statusId);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddUserDStatus::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddUserDStatus::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddUserDStatus::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveUserDStatus::AMD_IMDBProxyMgr_RemoveUserDStatus(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveUserDStatus::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveUserDStatus::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveUserDStatus::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveUserDStatus::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllContactList::AMD_IMDBProxyMgr_GetAllContactList(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllContactList::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEContactInfoSeq& contactList, ::Ice::Int contactTimes, ::Ice::Int gencontacttimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(contactList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &contactList[0], &contactList[0] + contactList.size(), ::AliIMDBBase::__U__SICEContactInfoSeq());
        }
        __os->write(contactTimes);
        __os->write(gencontacttimes);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllContactList::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllContactList::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllContactList::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCntModifyList::AMD_IMDBProxyMgr_GetCntModifyList(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCntModifyList::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICECntCidModPairSeq& cntList)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(cntList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &cntList[0], &cntList[0] + cntList.size(), ::AliIMDBBase::__U__SICECntCidModPairSeq());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCntModifyList::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCntModifyList::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCntModifyList::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddGenContactFull::AMD_IMDBProxyMgr_AddGenContactFull(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddGenContactFull::ice_response(::Ice::Int __ret, const ::std::string& retscid, const ::std::string& retsmodseqid, ::Ice::Long timeStamps)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(retscid);
        __os->write(retsmodseqid);
        __os->write(timeStamps);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddGenContactFull::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddGenContactFull::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddGenContactFull::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactDetail::AMD_IMDBProxyMgr_GetContactDetail(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactDetail::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEGenContactFull& detail)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        detail.__write(__os);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactDetail::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactDetail::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactDetail::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelGenContact::AMD_IMDBProxyMgr_DelGenContact(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelGenContact::ice_response(::Ice::Int __ret, ::Ice::Long contactTimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(contactTimes);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelGenContact::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelGenContact::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelGenContact::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddContact::AMD_IMDBProxyMgr_AddContact(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddContact::ice_response(::Ice::Int __ret, ::Ice::Int contactTimes, const ::std::string& retcid, const ::std::string& retmodseqid)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(contactTimes);
        __os->write(retcid);
        __os->write(retmodseqid);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddContact::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddContact::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddContact::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUpgradeGenCnt::AMD_IMDBProxyMgr_CheckUpgradeGenCnt(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUpgradeGenCnt::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUpgradeGenCnt::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUpgradeGenCnt::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUpgradeGenCnt::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ModifyGenCntID::AMD_IMDBProxyMgr_ModifyGenCntID(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ModifyGenCntID::ice_response(::Ice::Int __ret, const ::std::string& modseqid)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(modseqid);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ModifyGenCntID::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ModifyGenCntID::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ModifyGenCntID::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpgradeGenContact::AMD_IMDBProxyMgr_UpgradeGenContact(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpgradeGenContact::ice_response(::Ice::Int __ret, ::Ice::Long cntstamp, ::Ice::Long gencntstamp, const ::std::string& modseqid)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(cntstamp);
        __os->write(gencntstamp);
        __os->write(modseqid);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpgradeGenContact::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpgradeGenContact::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpgradeGenContact::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUpdatedUserInfo::AMD_IMDBProxyMgr_GetUpdatedUserInfo(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUpdatedUserInfo::ice_response(::Ice::Int __ret, ::Ice::Long cntstamp, ::Ice::Long gencntstamp, const ::std::string& retcid, const ::std::string& modseqid, ::Ice::Long groupid, const ::std::string& nickname)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(cntstamp);
        __os->write(gencntstamp);
        __os->write(retcid);
        __os->write(modseqid);
        __os->write(groupid);
        __os->write(nickname);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUpdatedUserInfo::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUpdatedUserInfo::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUpdatedUserInfo::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ModifyContactDetail::AMD_IMDBProxyMgr_ModifyContactDetail(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ModifyContactDetail::ice_response(::Ice::Int __ret, ::Ice::Long gencntmodifyVersion, const ::std::string& modseqid)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(gencntmodifyVersion);
        __os->write(modseqid);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ModifyContactDetail::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ModifyContactDetail::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ModifyContactDetail::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactGroupByCid::AMD_IMDBProxyMgr_UpdateContactGroupByCid(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactGroupByCid::ice_response(::Ice::Int __ret, ::Ice::Int contactTimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(contactTimes);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactGroupByCid::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactGroupByCid::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactGroupByCid::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactNickNameByCid::AMD_IMDBProxyMgr_UpdateContactNickNameByCid(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactNickNameByCid::ice_response(::Ice::Int __ret, ::Ice::Int contactTimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(contactTimes);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactNickNameByCid::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactNickNameByCid::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactNickNameByCid::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCRMContactDetail::AMD_IMDBProxyMgr_GetCRMContactDetail(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCRMContactDetail::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICECRMContactDetail& cntDetail)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        cntDetail.__write(__os);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCRMContactDetail::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCRMContactDetail::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCRMContactDetail::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetHardCodeIds::AMD_IMDBProxyMgr_GetHardCodeIds(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetHardCodeIds::ice_response(::Ice::Int __ret, ::Ice::Int count, const ::std::string& allids)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(count);
        __os->write(allids);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetHardCodeIds::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetHardCodeIds::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetHardCodeIds::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateHardCodeIds::AMD_IMDBProxyMgr_UpdateHardCodeIds(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateHardCodeIds::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateHardCodeIds::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateHardCodeIds::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateHardCodeIds::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCntOtherModifyList::AMD_IMDBProxyMgr_GetCntOtherModifyList(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCntOtherModifyList::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICECntOtherModInfoSeq& cntList)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(cntList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &cntList[0], &cntList[0] + cntList.size(), ::AliIMDBBase::__U__SICECntOtherModInfoSeq());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCntOtherModifyList::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCntOtherModifyList::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCntOtherModifyList::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCntOtherModifyInfo::AMD_IMDBProxyMgr_GetCntOtherModifyInfo(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCntOtherModifyInfo::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICECntOtherModInfo& cntOtherModInfo)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        cntOtherModInfo.__write(__os);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCntOtherModifyInfo::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCntOtherModifyInfo::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCntOtherModifyInfo::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserCRInfo::AMD_IMDBProxyMgr_GetUserCRInfo(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserCRInfo::ice_response(::Ice::Int __ret, ::Ice::Int crState, ::Ice::Int begTime, ::Ice::Int activeDegree)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(crState);
        __os->write(begTime);
        __os->write(activeDegree);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserCRInfo::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserCRInfo::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserCRInfo::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_SetUserCRInfo::AMD_IMDBProxyMgr_SetUserCRInfo(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_SetUserCRInfo::ice_response(::Ice::Int __ret, ::Ice::Int begTime)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(begTime);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_SetUserCRInfo::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_SetUserCRInfo::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_SetUserCRInfo::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetSmsUserInfoByUid::AMD_IMDBProxyMgr_GetSmsUserInfoByUid(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetSmsUserInfoByUid::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICESmsUserInfo& smsUserInfo)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        smsUserInfo.__write(__os);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetSmsUserInfoByUid::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetSmsUserInfoByUid::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetSmsUserInfoByUid::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetSmsUserMsgInfo::AMD_IMDBProxyMgr_GetSmsUserMsgInfo(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetSmsUserMsgInfo::ice_response(::Ice::Int __ret, ::Ice::Int todaySmsCount, ::Ice::Int yesterdaySmsCount)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(todaySmsCount);
        __os->write(yesterdaySmsCount);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetSmsUserMsgInfo::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetSmsUserMsgInfo::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetSmsUserMsgInfo::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelOfflineMsg::AMD_IMDBProxyMgr_DelOfflineMsg(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelOfflineMsg::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelOfflineMsg::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelOfflineMsg::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelOfflineMsg::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelOfflineMsgEx::AMD_IMDBProxyMgr_DelOfflineMsgEx(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelOfflineMsgEx::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelOfflineMsgEx::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelOfflineMsgEx::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelOfflineMsgEx::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelWapOfflineMsg::AMD_IMDBProxyMgr_DelWapOfflineMsg(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelWapOfflineMsg::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelWapOfflineMsg::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelWapOfflineMsg::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelWapOfflineMsg::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ModifyCntMemo::AMD_IMDBProxyMgr_ModifyCntMemo(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ModifyCntMemo::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ModifyCntMemo::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ModifyCntMemo::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ModifyCntMemo::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCntMemo::AMD_IMDBProxyMgr_GetCntMemo(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCntMemo::ice_response(::Ice::Int __ret, const ::std::string& memo)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(memo);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCntMemo::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCntMemo::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCntMemo::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserTribe::AMD_IMDBProxyMgr_GetUserTribe(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserTribe::ice_response(::Ice::Int __ret, const ::ALiIMDBTribe::STribeIdDbSeq& tribeIdList)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(tribeIdList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::ALiIMDBTribe::__write(__os, &tribeIdList[0], &tribeIdList[0] + tribeIdList.size(), ::ALiIMDBTribe::__U__STribeIdDbSeq());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserTribe::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserTribe::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserTribe::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserTribeConfig::AMD_IMDBProxyMgr_GetUserTribeConfig(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserTribeConfig::ice_response(::Ice::Int __ret, ::Ice::Int addVerify)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(addVerify);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserTribeConfig::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserTribeConfig::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserTribeConfig::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserTribeConfig::AMD_IMDBProxyMgr_UpdateUserTribeConfig(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserTribeConfig::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserTribeConfig::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserTribeConfig::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserTribeConfig::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetTribeOffMngMsg::AMD_IMDBProxyMgr_GetTribeOffMngMsg(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetTribeOffMngMsg::ice_response(::Ice::Int __ret, const ::ALiIMDBTribe::STribeOfflineMsgSeq& offlineMsgList)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(offlineMsgList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::ALiIMDBTribe::__write(__os, &offlineMsgList[0], &offlineMsgList[0] + offlineMsgList.size(), ::ALiIMDBTribe::__U__STribeOfflineMsgSeq());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetTribeOffMngMsg::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetTribeOffMngMsg::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetTribeOffMngMsg::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelTribeOffMngMsg::AMD_IMDBProxyMgr_DelTribeOffMngMsg(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelTribeOffMngMsg::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelTribeOffMngMsg::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelTribeOffMngMsg::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelTribeOffMngMsg::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ModifyPersonalShow::AMD_IMDBProxyMgr_ModifyPersonalShow(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ModifyPersonalShow::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ModifyPersonalShow::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ModifyPersonalShow::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ModifyPersonalShow::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetPersonalShow::AMD_IMDBProxyMgr_GetPersonalShow(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetPersonalShow::ice_response(::Ice::Int __ret, const ::std::string& show)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(show);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetPersonalShow::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetPersonalShow::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetPersonalShow::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllOnlineSmsUser::AMD_IMDBProxyMgr_GetAllOnlineSmsUser(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllOnlineSmsUser::ice_response(::Ice::Int __ret, const ::Ice::StringSeq& userList)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(userList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&userList[0], &userList[0] + userList.size());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllOnlineSmsUser::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllOnlineSmsUser::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllOnlineSmsUser::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserKeyWordDegree::AMD_IMDBProxyMgr_GetUserKeyWordDegree(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserKeyWordDegree::ice_response(::Ice::Int __ret, const ::std::string& keyword, ::Ice::Int flag, ::Ice::Float degree)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(keyword);
        __os->write(flag);
        __os->write(degree);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserKeyWordDegree::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserKeyWordDegree::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserKeyWordDegree::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserValue::AMD_IMDBProxyMgr_GetUserValue(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserValue::ice_response(::Ice::Int __ret, ::Ice::Int uservalue)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(uservalue);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserValue::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserValue::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserValue::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserMd5Password::AMD_IMDBProxyMgr_UpdateUserMd5Password(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserMd5Password::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserMd5Password::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserMd5Password::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserMd5Password::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_InsertYahooUser::AMD_IMDBProxyMgr_InsertYahooUser(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_InsertYahooUser::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_InsertYahooUser::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_InsertYahooUser::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_InsertYahooUser::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactDetailByUid::AMD_IMDBProxyMgr_GetContactDetailByUid(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactDetailByUid::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEGenContactFull& detail)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        detail.__write(__os);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactDetailByUid::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactDetailByUid::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactDetailByUid::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetChildTeamList::AMD_IMDBProxyMgr_GetChildTeamList(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetChildTeamList::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SChildUserInfoSeq& childTeamList)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(childTeamList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &childTeamList[0], &childTeamList[0] + childTeamList.size(), ::AliIMDBBase::__U__SChildUserInfoSeq());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetChildTeamList::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetChildTeamList::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetChildTeamList::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetChildTeamList2::AMD_IMDBProxyMgr_GetChildTeamList2(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetChildTeamList2::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SChildUserInfoSeq2& childTeamList)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(childTeamList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &childTeamList[0], &childTeamList[0] + childTeamList.size(), ::AliIMDBBase::__U__SChildUserInfoSeq2());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetChildTeamList2::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetChildTeamList2::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetChildTeamList2::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetChildUserInfo::AMD_IMDBProxyMgr_GetChildUserInfo(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetChildUserInfo::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SChildUserInfo& childInfo)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        childInfo.__write(__os);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetChildUserInfo::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetChildUserInfo::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetChildUserInfo::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetChildUserInfo2::AMD_IMDBProxyMgr_GetChildUserInfo2(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetChildUserInfo2::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SChildUserInfo2& childInfo)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        childInfo.__write(__os);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetChildUserInfo2::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetChildUserInfo2::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetChildUserInfo2::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetShareContactList::AMD_IMDBProxyMgr_GetShareContactList(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetShareContactList::ice_response(::Ice::Int __ret, const ::Ice::StringSeq& shareContactIdList)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(shareContactIdList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&shareContactIdList[0], &shareContactIdList[0] + shareContactIdList.size());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetShareContactList::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetShareContactList::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetShareContactList::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactShareInfo::AMD_IMDBProxyMgr_GetContactShareInfo(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactShareInfo::ice_response(::Ice::Int __ret, ::Ice::Int value)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(value);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactShareInfo::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactShareInfo::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactShareInfo::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_SetContactShareInfo::AMD_IMDBProxyMgr_SetContactShareInfo(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_SetContactShareInfo::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_SetContactShareInfo::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_SetContactShareInfo::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_SetContactShareInfo::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiAccountContactList::AMD_IMDBProxyMgr_GetMultiAccountContactList(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiAccountContactList::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEContactInfoSeq& contactIdList)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(contactIdList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &contactIdList[0], &contactIdList[0] + contactIdList.size(), ::AliIMDBBase::__U__SICEContactInfoSeq());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiAccountContactList::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiAccountContactList::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiAccountContactList::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiServiceList::AMD_IMDBProxyMgr_GetMultiServiceList(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiServiceList::ice_response(::Ice::Int __ret, const ::Ice::IntSeq& ServiceList)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(ServiceList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&ServiceList[0], &ServiceList[0] + ServiceList.size());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiServiceList::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiServiceList::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiServiceList::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiBindToUser::AMD_IMDBProxyMgr_GetMultiBindToUser(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiBindToUser::ice_response(::Ice::Int __ret, const ::std::string& bindToUser)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(bindToUser);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiBindToUser::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiBindToUser::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiBindToUser::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetWebBinds::AMD_IMDBProxyMgr_GetWebBinds(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetWebBinds::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEKvPairSeq& binds)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(binds.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &binds[0], &binds[0] + binds.size(), ::AliIMDBBase::__U__SICEKvPairSeq());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetWebBinds::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetWebBinds::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetWebBinds::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddWebBind::AMD_IMDBProxyMgr_AddWebBind(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddWebBind::ice_response(::Ice::Int __ret, const ::std::string& webmd5pw)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(webmd5pw);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddWebBind::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddWebBind::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddWebBind::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ChangeWebBind::AMD_IMDBProxyMgr_ChangeWebBind(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ChangeWebBind::ice_response(::Ice::Int __ret, const ::std::string& webmd5pw)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(webmd5pw);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ChangeWebBind::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ChangeWebBind::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ChangeWebBind::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelWebBind::AMD_IMDBProxyMgr_DelWebBind(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelWebBind::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelWebBind::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelWebBind::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelWebBind::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getUserSession::AMD_IMDBProxyMgr_getUserSession(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getUserSession::ice_response(::Ice::Int __ret, const ::AliIM::SIceSession& retsession)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        retsession.__write(__os);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getUserSession::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getUserSession::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getUserSession::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_checkUserSession::AMD_IMDBProxyMgr_checkUserSession(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_checkUserSession::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_checkUserSession::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_checkUserSession::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_checkUserSession::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_removeSession::AMD_IMDBProxyMgr_removeSession(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_removeSession::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_removeSession::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_removeSession::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_removeSession::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateSignature::AMD_IMDBProxyMgr_UpdateSignature(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateSignature::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateSignature::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateSignature::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateSignature::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateContactClientInfo::AMD_IMDBProxyMgr_updateContactClientInfo(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateContactClientInfo::ice_response(::Ice::Int __ret, ::Ice::Int contactTimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(contactTimes);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateContactClientInfo::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateContactClientInfo::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateContactClientInfo::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getUserProfile::AMD_IMDBProxyMgr_getUserProfile(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getUserProfile::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEKVMap& profilemap)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        ::AliIMDBBase::__write(__os, profilemap, ::AliIMDBBase::__U__SICEKVMap());
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getUserProfile::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getUserProfile::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getUserProfile::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getPeerVerifyFlag::AMD_IMDBProxyMgr_getPeerVerifyFlag(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getPeerVerifyFlag::ice_response(::Ice::Int __ret, ::Ice::Int flag)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(flag);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getPeerVerifyFlag::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getPeerVerifyFlag::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getPeerVerifyFlag::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getPeerVerifyFlagQuestion::AMD_IMDBProxyMgr_getPeerVerifyFlagQuestion(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getPeerVerifyFlagQuestion::ice_response(::Ice::Int __ret, ::Ice::Int flag, const ::std::string& question, const ::std::string& answer)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(flag);
        __os->write(question);
        __os->write(answer);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getPeerVerifyFlagQuestion::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getPeerVerifyFlagQuestion::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getPeerVerifyFlagQuestion::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getNickName::AMD_IMDBProxyMgr_getNickName(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getNickName::ice_response(::Ice::Int __ret, const ::std::string& nickname)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(nickname);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getNickName::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getNickName::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getNickName::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getFTServiceInfo::AMD_IMDBProxyMgr_getFTServiceInfo(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getFTServiceInfo::ice_response(::Ice::Int __ret, const ::std::string& srvIp, ::Ice::Short srvPort)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(srvIp);
        __os->write(srvPort);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getFTServiceInfo::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getFTServiceInfo::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getFTServiceInfo::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getTietuServiceInfo::AMD_IMDBProxyMgr_getTietuServiceInfo(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getTietuServiceInfo::ice_response(::Ice::Int __ret, ::Ice::Int sessionSum, const ::std::string& srvIp, ::Ice::Short srvPort)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(sessionSum);
        __os->write(srvIp);
        __os->write(srvPort);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getTietuServiceInfo::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getTietuServiceInfo::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getTietuServiceInfo::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getFTSAddr::AMD_IMDBProxyMgr_getFTSAddr(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getFTSAddr::ice_response(::Ice::Int __ret, ::Ice::Long ftsid, const ::std::string& srvIp, ::Ice::Short srvPort)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(ftsid);
        __os->write(srvIp);
        __os->write(srvPort);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getFTSAddr::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getFTSAddr::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getFTSAddr::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_registerWanghao::AMD_IMDBProxyMgr_registerWanghao(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_registerWanghao::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_registerWanghao::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_registerWanghao::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_registerWanghao::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateUserProfile::AMD_IMDBProxyMgr_updateUserProfile(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateUserProfile::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateUserProfile::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateUserProfile::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateUserProfile::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_loadSitePrefix::AMD_IMDBProxyMgr_loadSitePrefix(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_loadSitePrefix::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SImPrefixSeq& pv)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(pv.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &pv[0], &pv[0] + pv.size(), ::AliIMDBBase::__U__SImPrefixSeq());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_loadSitePrefix::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_loadSitePrefix::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_loadSitePrefix::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateAepUserId::AMD_IMDBProxyMgr_updateAepUserId(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateAepUserId::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateAepUserId::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateAepUserId::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateAepUserId::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateVipflag::AMD_IMDBProxyMgr_updateVipflag(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateVipflag::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateVipflag::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateVipflag::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateVipflag::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_checkWangHaoPwd::AMD_IMDBProxyMgr_checkWangHaoPwd(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_checkWangHaoPwd::ice_response(::Ice::Int __ret, const ::std::string& retluid, const ::std::string& retPwToken, const ::std::string& retmd5passwd, ::Ice::Int activeState)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(retluid);
        __os->write(retPwToken);
        __os->write(retmd5passwd);
        __os->write(activeState);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_checkWangHaoPwd::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_checkWangHaoPwd::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_checkWangHaoPwd::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_checkCanLogin::AMD_IMDBProxyMgr_checkCanLogin(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_checkCanLogin::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_checkCanLogin::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_checkCanLogin::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_checkCanLogin::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetSIPSessionId::AMD_IMDBProxyMgr_GetSIPSessionId(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetSIPSessionId::ice_response(::Ice::Int __ret, const ::std::string& sessionId)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(sessionId);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetSIPSessionId::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetSIPSessionId::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetSIPSessionId::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckGsContact::AMD_IMDBProxyMgr_CheckGsContact(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckGsContact::ice_response(::Ice::Int __ret, ::Ice::Int flag)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(flag);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckGsContact::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckGsContact::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckGsContact::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateSmsAuthCode::AMD_IMDBProxyMgr_UpdateSmsAuthCode(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateSmsAuthCode::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateSmsAuthCode::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateSmsAuthCode::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateSmsAuthCode::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckSmsAuthCode::AMD_IMDBProxyMgr_CheckSmsAuthCode(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckSmsAuthCode::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckSmsAuthCode::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckSmsAuthCode::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckSmsAuthCode::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserValueBySmsAuth::AMD_IMDBProxyMgr_UpdateUserValueBySmsAuth(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserValueBySmsAuth::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserValueBySmsAuth::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserValueBySmsAuth::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserValueBySmsAuth::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckSmsAuthStatus::AMD_IMDBProxyMgr_CheckSmsAuthStatus(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckSmsAuthStatus::ice_response(::Ice::Int __ret, ::Ice::Int status)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(status);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckSmsAuthStatus::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckSmsAuthStatus::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckSmsAuthStatus::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserTokenExtra::AMD_IMDBProxyMgr_CheckUserTokenExtra(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserTokenExtra::ice_response(::Ice::Int __ret, const ::std::string& lid, const ::std::string& retuidtokenpw, const ::std::string& retmd5passwd, ::Ice::Int activeStat, ::Ice::Int webdata)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(lid);
        __os->write(retuidtokenpw);
        __os->write(retmd5passwd);
        __os->write(activeStat);
        __os->write(webdata);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserTokenExtra::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserTokenExtra::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserTokenExtra::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebPasswdExtra::AMD_IMDBProxyMgr_CheckUserWebPasswdExtra(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebPasswdExtra::ice_response(::Ice::Int __ret, const ::std::string& lid, const ::std::string& retuidtokenpw, const ::std::string& retmd5passwd, ::Ice::Int activeStat, ::Ice::Int webdata)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(lid);
        __os->write(retuidtokenpw);
        __os->write(retmd5passwd);
        __os->write(activeStat);
        __os->write(webdata);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebPasswdExtra::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebPasswdExtra::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebPasswdExtra::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESShuntStatus::AMD_IMDBProxyMgr_getESShuntStatus(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESShuntStatus::ice_response(::Ice::Int __ret, const ::std::string& shunt)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(shunt);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESShuntStatus::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESShuntStatus::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESShuntStatus::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESShuntStatus::AMD_IMDBProxyMgr_setESShuntStatus(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESShuntStatus::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESShuntStatus::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESShuntStatus::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESShuntStatus::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getMaxESReceptNum::AMD_IMDBProxyMgr_getMaxESReceptNum(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getMaxESReceptNum::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEReceptNumSeq& eserviceList)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(eserviceList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &eserviceList[0], &eserviceList[0] + eserviceList.size(), ::AliIMDBBase::__U__SICEReceptNumSeq());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getMaxESReceptNum::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getMaxESReceptNum::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getMaxESReceptNum::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setMaxESReceptNum::AMD_IMDBProxyMgr_setMaxESReceptNum(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setMaxESReceptNum::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setMaxESReceptNum::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setMaxESReceptNum::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setMaxESReceptNum::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESPriority::AMD_IMDBProxyMgr_getESPriority(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESPriority::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEReceptPrioritySeq& eserviceList)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(eserviceList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &eserviceList[0], &eserviceList[0] + eserviceList.size(), ::AliIMDBBase::__U__SICEReceptPrioritySeq());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESPriority::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESPriority::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESPriority::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESPriority::AMD_IMDBProxyMgr_setESPriority(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESPriority::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESPriority::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESPriority::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESPriority::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESRecvOffMsg::AMD_IMDBProxyMgr_getESRecvOffMsg(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESRecvOffMsg::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICERecvOffMsgSeq& eserviceList)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(eserviceList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &eserviceList[0], &eserviceList[0] + eserviceList.size(), ::AliIMDBBase::__U__SICERecvOffMsgSeq());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESRecvOffMsg::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESRecvOffMsg::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESRecvOffMsg::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESRecvOffMsg::AMD_IMDBProxyMgr_setESRecvOffMsg(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESRecvOffMsg::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESRecvOffMsg::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESRecvOffMsg::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESRecvOffMsg::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupList::AMD_IMDBProxyMgr_getESGroupList(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupList::ice_response(::Ice::Int __ret, const ::Ice::IntSeq& groupList)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(groupList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&groupList[0], &groupList[0] + groupList.size());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupList::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupList::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupList::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_insertESGroupInfo::AMD_IMDBProxyMgr_insertESGroupInfo(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_insertESGroupInfo::ice_response(::Ice::Int __ret, ::Ice::Int groupId)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(groupId);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_insertESGroupInfo::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_insertESGroupInfo::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_insertESGroupInfo::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateESGroupInfo::AMD_IMDBProxyMgr_updateESGroupInfo(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateESGroupInfo::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateESGroupInfo::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateESGroupInfo::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateESGroupInfo::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_delESGroup::AMD_IMDBProxyMgr_delESGroup(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_delESGroup::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_delESGroup::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_delESGroup::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_delESGroup::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupInfo::AMD_IMDBProxyMgr_getESGroupInfo(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupInfo::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEESGroupInfoSeq& groupList)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(groupList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &groupList[0], &groupList[0] + groupList.size(), ::AliIMDBBase::__U__SICEESGroupInfoSeq());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupInfo::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupInfo::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupInfo::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupInfoByID::AMD_IMDBProxyMgr_getESGroupInfoByID(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupInfoByID::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEESGroupInfo& groupInfo)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        groupInfo.__write(__os);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupInfoByID::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupInfoByID::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupInfoByID::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESUserFunc::AMD_IMDBProxyMgr_getESUserFunc(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESUserFunc::ice_response(::Ice::Int __ret, const ::std::string& userflag, ::Ice::Int groupId)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(userflag);
        __os->write(groupId);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESUserFunc::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESUserFunc::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESUserFunc::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESUnJoinGroup::AMD_IMDBProxyMgr_getESUnJoinGroup(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESUnJoinGroup::ice_response(::Ice::Int __ret, const ::Ice::StringSeq& eserviceList)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(eserviceList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&eserviceList[0], &eserviceList[0] + eserviceList.size());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESUnJoinGroup::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESUnJoinGroup::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESUnJoinGroup::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_checkESRole::AMD_IMDBProxyMgr_checkESRole(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_checkESRole::ice_response(::Ice::Int __ret, ::Ice::Int groupId)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(groupId);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_checkESRole::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_checkESRole::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_checkESRole::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckWebWWPasswd::AMD_IMDBProxyMgr_CheckWebWWPasswd(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckWebWWPasswd::ice_response(::Ice::Int __ret, const ::std::string& lid, const ::std::string& retuidtokenpw, const ::std::string& retmd5passwd, ::Ice::Int activeStat)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(lid);
        __os->write(retuidtokenpw);
        __os->write(retmd5passwd);
        __os->write(activeStat);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckWebWWPasswd::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckWebWWPasswd::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckWebWWPasswd::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESExpandArea::AMD_IMDBProxyMgr_getESExpandArea(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESExpandArea::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEExpandAreaSeq& areaInfos)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(areaInfos.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &areaInfos[0], &areaInfos[0] + areaInfos.size(), ::AliIMDBBase::__U__SICEExpandAreaSeq());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESExpandArea::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESExpandArea::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESExpandArea::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESExpandAreaById::AMD_IMDBProxyMgr_getESExpandAreaById(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESExpandAreaById::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEExpandArea& areaInfos)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        areaInfos.__write(__os);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESExpandAreaById::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESExpandAreaById::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESExpandAreaById::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_addESExpandArea::AMD_IMDBProxyMgr_addESExpandArea(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_addESExpandArea::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_addESExpandArea::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_addESExpandArea::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_addESExpandArea::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateESExpandArea::AMD_IMDBProxyMgr_updateESExpandArea(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateESExpandArea::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateESExpandArea::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateESExpandArea::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateESExpandArea::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_delESExpandArea::AMD_IMDBProxyMgr_delESExpandArea(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_delESExpandArea::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_delESExpandArea::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_delESExpandArea::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_delESExpandArea::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESEval::AMD_IMDBProxyMgr_setESEval(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESEval::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESEval::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESEval::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESEval::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEval::AMD_IMDBProxyMgr_getESEval(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEval::ice_response(::Ice::Int __ret, const ::std::string& evalcontent, const ::std::string& welcome)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(evalcontent);
        __os->write(welcome);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEval::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEval::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEval::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_sendESEvalResult::AMD_IMDBProxyMgr_sendESEvalResult(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_sendESEvalResult::ice_response(::Ice::Int __ret, ::Ice::Int evalId)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(evalId);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_sendESEvalResult::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_sendESEvalResult::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_sendESEvalResult::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESEvalResult::AMD_IMDBProxyMgr_setESEvalResult(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESEvalResult::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESEvalResult::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESEvalResult::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESEvalResult::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResult::AMD_IMDBProxyMgr_getESEvalResult(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResult::ice_response(::Ice::Int __ret, const ::std::string& evalresult, const ::std::string& gmtcreate, const ::std::string& gmtmodify)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(evalresult);
        __os->write(gmtcreate);
        __os->write(gmtmodify);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResult::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResult::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResult::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultToday::AMD_IMDBProxyMgr_getESEvalResultToday(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultToday::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEESEvalResultSeq& evalInfos)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(evalInfos.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &evalInfos[0], &evalInfos[0] + evalInfos.size(), ::AliIMDBBase::__U__SICEESEvalResultSeq());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultToday::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultToday::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultToday::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultHistory::AMD_IMDBProxyMgr_getESEvalResultHistory(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultHistory::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SICEESEvalResultSeq& evalInfos)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(evalInfos.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &evalInfos[0], &evalInfos[0] + evalInfos.size(), ::AliIMDBBase::__U__SICEESEvalResultSeq());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultHistory::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultHistory::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultHistory::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultHistorybypage::AMD_IMDBProxyMgr_getESEvalResultHistorybypage(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultHistorybypage::ice_response(::Ice::Int __ret, ::Ice::Int pagecount, const ::AliIMDBBase::SICEESEvalResultExSeq& evalInfos)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(pagecount);
        if(evalInfos.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &evalInfos[0], &evalInfos[0] + evalInfos.size(), ::AliIMDBBase::__U__SICEESEvalResultExSeq());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultHistorybypage::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultHistorybypage::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultHistorybypage::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getLastLoginTime::AMD_IMDBProxyMgr_getLastLoginTime(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getLastLoginTime::ice_response(::Ice::Int __ret, const ::Ice::StringSeq& loginTimes)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(loginTimes.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&loginTimes[0], &loginTimes[0] + loginTimes.size());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getLastLoginTime::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getLastLoginTime::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getLastLoginTime::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getChildShuntInfos::AMD_IMDBProxyMgr_getChildShuntInfos(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getChildShuntInfos::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SChildUserInfoSeq& childInfos)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(childInfos.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &childInfos[0], &childInfos[0] + childInfos.size(), ::AliIMDBBase::__U__SChildUserInfoSeq());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getChildShuntInfos::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getChildShuntInfos::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getChildShuntInfos::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setChildShuntInfos::AMD_IMDBProxyMgr_setChildShuntInfos(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setChildShuntInfos::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setChildShuntInfos::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setChildShuntInfos::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setChildShuntInfos::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getAgentChild::AMD_IMDBProxyMgr_getAgentChild(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getAgentChild::ice_response(::Ice::Int __ret, const ::std::string& agentId)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(agentId);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getAgentChild::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getAgentChild::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getAgentChild::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setAgentChild::AMD_IMDBProxyMgr_setAgentChild(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setAgentChild::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setAgentChild::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setAgentChild::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setAgentChild::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getAgentList::AMD_IMDBProxyMgr_getAgentList(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getAgentList::ice_response(::Ice::Int __ret, const ::Ice::StringSeq& agentIds)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(agentIds.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&agentIds[0], &agentIds[0] + agentIds.size());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getAgentList::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getAgentList::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getAgentList::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildTeamList::AMD_IMDBProxyMgr_getB2BChildTeamList(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildTeamList::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SB2BChildUserInfoSeq& childTeamList)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        if(childTeamList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &childTeamList[0], &childTeamList[0] + childTeamList.size(), ::AliIMDBBase::__U__SB2BChildUserInfoSeq());
        }
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildTeamList::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildTeamList::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildTeamList::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildInfo::AMD_IMDBProxyMgr_getB2BChildInfo(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildInfo::ice_response(::Ice::Int __ret, const ::AliIMDBBase::SB2BChildUserInfo& childInfo)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        childInfo.__write(__os);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildInfo::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildInfo::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildInfo::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildParentId::AMD_IMDBProxyMgr_getB2BChildParentId(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildParentId::ice_response(::Ice::Int __ret, const ::std::string& fid)
{
    try
    {
        ::IceInternal::BasicStream* __os = this->__os();
        __os->write(fid);
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildParentId::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildParentId::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildParentId::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_addB2BChild::AMD_IMDBProxyMgr_addB2BChild(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_addB2BChild::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_addB2BChild::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_addB2BChild::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_addB2BChild::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateB2BChild::AMD_IMDBProxyMgr_updateB2BChild(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateB2BChild::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateB2BChild::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateB2BChild::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateB2BChild::ice_exception()
{
    __exception();
}

IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_deleteB2BChild::AMD_IMDBProxyMgr_deleteB2BChild(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_deleteB2BChild::ice_response(::Ice::Int __ret)
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
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_deleteB2BChild::ice_exception(const ::Ice::Exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_deleteB2BChild::ice_exception(const ::std::exception& ex)
{
    __exception(ex);
}

void
IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_deleteB2BChild::ice_exception()
{
    __exception();
}

::Ice::Int
IceProxy::AliIMDBBase::IMDBProxyMgr::sayhello(const ::std::string& userId, ::std::string& helloword, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__sayhello_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->sayhello(userId, helloword, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::CheckUserToken(const ::std::string& userId, const ::std::string& passwd, ::std::string& lid, ::std::string& retuidtokenpw, ::std::string& retmd5passwd, ::Ice::Int& activeStat, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__CheckUserToken_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->CheckUserToken(userId, passwd, lid, retuidtokenpw, retmd5passwd, activeStat, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::CheckTmpSession(const ::std::string& userId, const ::std::string& passwd, ::std::string& lid, ::std::string& retuidtokenpw, ::std::string& retmd5passwd, ::Ice::Int& activeStat, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__CheckTmpSession_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->CheckTmpSession(userId, passwd, lid, retuidtokenpw, retmd5passwd, activeStat, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::CheckUserWebPasswd(const ::std::string& userId, const ::std::string& passwd, ::std::string& lid, ::std::string& retuidtokenpw, ::std::string& retmd5passwd, ::Ice::Int& activeStat, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__CheckUserWebPasswd_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->CheckUserWebPasswd(userId, passwd, lid, retuidtokenpw, retmd5passwd, activeStat, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::CheckUserPasswd(const ::std::string& userId, bool btokenpw, const ::std::string& passwd, ::std::string& retuidtokenpw, ::std::string& retmd5passwd, ::Ice::Int& activeStat, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__CheckUserPasswd_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->CheckUserPasswd(userId, btokenpw, passwd, retuidtokenpw, retmd5passwd, activeStat, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::CheckUserWebToken(const ::std::string& userId, const ::std::string& token, ::std::string& reason, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__CheckUserWebToken_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->CheckUserWebToken(userId, token, reason, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetAtmLongid(const ::std::string& userId, ::std::string& longId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetAtmLongid_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetAtmLongid(userId, longId, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::AddUser60(const ::std::string& userId, const ::std::string& md5passwd, const ::std::string& tokenpw, ::Ice::Int languageid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__AddUser60_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->AddUser60(userId, md5passwd, tokenpw, languageid, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetWebMemberPWInfo(const ::std::string& userId, ::AliIMDBBase::SMemberPWInfo& pwInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetWebMemberPWInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetWebMemberPWInfo(userId, pwInfo, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetWebMemberPWInfoEx(const ::std::string& userId, ::AliIMDBBase::SMemberPWInfoEx& pwInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetWebMemberPWInfoEx_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetWebMemberPWInfoEx(userId, pwInfo, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetUserWebBasicProfile(const ::std::string& userId, ::AliIMDBBase::SUserWebBasicProfile& profile, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetUserWebBasicProfile_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetUserWebBasicProfile(userId, profile, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::CheckCanAddContact(const ::std::string& userId, const ::std::string& buddyId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__CheckCanAddContact_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->CheckCanAddContact(userId, buddyId, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::QueryMatchedUserIds(const ::std::string& finduid, const ::std::string& shortId, ::AliIMDBBase::SMatchedUserIdInfoSeq& matchedIds, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__QueryMatchedUserIds_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->QueryMatchedUserIds(finduid, shortId, matchedIds, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpdateContactWebInfo(const ::std::string& userId, const ::std::string& buddyId, const ::AliIMDBBase::SUserWebBasicProfile& cntWebInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpdateContactWebInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpdateContactWebInfo(userId, buddyId, cntWebInfo, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::DelTaobaoUser(const ::std::string& webId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__DelTaobaoUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->DelTaobaoUser(webId, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::DelAnyUser(const ::std::string& imuserId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__DelAnyUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->DelAnyUser(imuserId, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::AddUserKeyWord(const ::std::string& userId, const ::std::string& keyword, ::Ice::Int flag, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__AddUserKeyWord_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->AddUserKeyWord(userId, keyword, flag, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpdateUserKeyWord(const ::std::string& userId, const ::std::string& keyword, ::Ice::Int flag, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpdateUserKeyWord_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpdateUserKeyWord(userId, keyword, flag, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetUserKeyWord(const ::std::string& userId, ::std::string& keyword, ::Ice::Int& flag, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetUserKeyWord_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetUserKeyWord(userId, keyword, flag, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::QueryUserIdsByKeyWord(const ::std::string& keyword, ::AliIMDBBase::SMatchedUserIdInfoSeq& matchedIds, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__QueryUserIdsByKeyWord_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->QueryUserIdsByKeyWord(keyword, matchedIds, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetBatchMemberInfo(const ::Ice::StringSeq& userIds, ::AliIMDBBase::SICEMemberInfoSeq& memberInfoList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetBatchMemberInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetBatchMemberInfo(userIds, memberInfoList, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetAllVersion(::AliIMDBBase::SICEVersionSeq& versionList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetAllVersion_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetAllVersion(versionList, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetAllSysMsg(::AliIMDBBase::SICESysMessageSeq& sysMsgList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetAllSysMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetAllSysMsg(sysMsgList, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetAllExSysMsg(::AliIMDBBase::SExICESysMessageSeq& sysMsgList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetAllExSysMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetAllExSysMsg(sysMsgList, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetUserInfo(const ::std::string& userId, ::AliIMDBBase::SICEUserInfo& userInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetUserInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetUserInfo(userId, userInfo, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetUserInfo2(const ::std::string& userId, ::AliIMDBBase::SICEUserInfo2& userInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetUserInfo2_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetUserInfo2(userId, userInfo, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetUserInfoEx(const ::std::string& userId, ::AliIMDBBase::SICEUserInfoEx& userInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetUserInfoEx_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetUserInfoEx(userId, userInfo, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetUserInfoNew(const ::std::string& userId, ::AliIMDBBase::SICEUserInfoNew& userInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetUserInfoNew_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetUserInfoNew(userId, userInfo, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetUserInfo2New(const ::std::string& userId, ::AliIMDBBase::SICEUserInfo2New& userInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetUserInfo2New_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetUserInfo2New(userId, userInfo, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetUserInfoExNew(const ::std::string& userId, ::AliIMDBBase::SICEUserInfoExNew& userInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetUserInfoExNew_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetUserInfoExNew(userId, userInfo, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetUserInfoExNew2(const ::std::string& userId, ::AliIMDBBase::SICEUserInfoExNew2& userInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetUserInfoExNew2_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetUserInfoExNew2(userId, userInfo, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetUserInfoExNew3(const ::std::string& userId, ::AliIMDBBase::SICEUserInfoExNew3& userInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetUserInfoExNew3_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetUserInfoExNew3(userId, userInfo, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetUserInfoExNew4(const ::std::string& userId, ::AliIMDBBase::SICEUserInfoExNew4& userInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetUserInfoExNew4_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetUserInfoExNew4(userId, userInfo, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetUserVerifyInfo(const ::std::string& userId, ::Ice::Byte& addcontactverify, ::Ice::Byte& sendmsgverify, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetUserVerifyInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetUserVerifyInfo(userId, addcontactverify, sendmsgverify, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetUserVerifyInfoEx(const ::std::string& userId, ::Ice::Byte& addcontactverify, ::Ice::Byte& sendmsgverify, ::Ice::Byte& enableSearchFlag, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetUserVerifyInfoEx_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetUserVerifyInfoEx(userId, addcontactverify, sendmsgverify, enableSearchFlag, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetUserVerifyInfoQuestion(const ::std::string& userId, ::Ice::Byte& addcontactverify, ::Ice::Byte& sendmsgverify, ::Ice::Byte& enableSearchFlag, ::std::string& question, ::std::string& answer, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetUserVerifyInfoQuestion_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetUserVerifyInfoQuestion(userId, addcontactverify, sendmsgverify, enableSearchFlag, question, answer, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetGroupList(const ::std::string& userId, ::AliIMDBBase::SICEGroupInfoSeq& groupList, ::Ice::Int& groupTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetGroupList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetGroupList(userId, groupList, groupTimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetGroupListEx(const ::std::string& userId, ::AliIMDBBase::SICEGroupInfoExSeq& groupList, ::Ice::Int& groupTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetGroupListEx_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetGroupListEx(userId, groupList, groupTimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetContactList(const ::std::string& userId, ::Ice::Int getFlag, ::AliIMDBBase::SICEContactInfoSeq& contactList, ::Ice::Int& contactTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetContactList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetContactList(userId, getFlag, contactList, contactTimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetBlackList(const ::std::string& userId, ::Ice::StringSeq& blackList, ::Ice::Int& blacklistTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetBlackList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetBlackList(userId, blackList, blacklistTimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetReverseBlackList(const ::std::string& userId, ::Ice::StringSeq& reverseBlackList, ::Ice::Int& reverseBlacklistTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetReverseBlackList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetReverseBlackList(userId, reverseBlackList, reverseBlacklistTimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetOfflineMsg(const ::std::string& userId, ::AliIMDBBase::SICEOffLineMessegeSeq& offlineMsgList, ::Ice::Int& offlinemsgTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetOfflineMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetOfflineMsg(userId, offlineMsgList, offlinemsgTimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetOfflineMsgEx(const ::std::string& userId, ::AliIMDBBase::SICEOffLineMessegeExSeq& offlineMsgList, ::Ice::Int& offlinemsgTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetOfflineMsgEx_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetOfflineMsgEx(userId, offlineMsgList, offlinemsgTimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetOfflineMsgCount(const ::std::string& uid, ::Ice::Int& chatMsgNum, ::Ice::Int& sysMsgNum, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetOfflineMsgCount_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetOfflineMsgCount(uid, chatMsgNum, sysMsgNum, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetEnetOfflineMsgNum(const ::std::string& toId, const ::std::string& fromId, const ::Ice::IntSeq& types, ::Ice::Int& msgNum, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetEnetOfflineMsgNum_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetEnetOfflineMsgNum(toId, fromId, types, msgNum, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetContactInfo(const ::std::string& userId, const ::std::string& contactId, ::AliIMDBBase::SICEContactInfo& contactInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetContactInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetContactInfo(userId, contactId, contactInfo, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetOfflineMsgNum(const ::std::string& userId, ::Ice::Int& msgNum, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetOfflineMsgNum_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetOfflineMsgNum(userId, msgNum, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetToolProfiles(const ::std::string& userId, ::Ice::Int type, ::Ice::Int nowTimes, ::Ice::StringSeq& toolProfilesList, ::Ice::Int& toolTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetToolProfiles_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetToolProfiles(userId, type, nowTimes, toolProfilesList, toolTimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetToolProfilesEx(const ::std::string& userId, ::Ice::Int nowTimes, ::AliIMDBBase::SICEToolProfileSeq& toolProfilesList, ::Ice::Int& toolTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetToolProfilesEx_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetToolProfilesEx(userId, nowTimes, toolProfilesList, toolTimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetSysMsg(::Ice::Int sysId, ::AliIMDBBase::SICESysMessage& sysMsg, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetSysMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetSysMsg(sysId, sysMsg, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::AddUser(const ::std::string& userId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__AddUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->AddUser(userId, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::AddGroup(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int& groupId, ::Ice::Int& groupTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__AddGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->AddGroup(userId, groupName, groupId, groupTimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::AddGroupEx(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int parentId, ::Ice::Int& groupId, ::Ice::Int& groupTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__AddGroupEx_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->AddGroupEx(userId, groupName, parentId, groupId, groupTimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::AddBlackList(const ::std::string& userId, const ::std::string& blackId, ::Ice::Int& blackListTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__AddBlackList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->AddBlackList(userId, blackId, blackListTimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::AddOfflineMsg(const ::std::string& fromId, const ::std::string& toId, ::Ice::Int type, const ::std::string& content, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__AddOfflineMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->AddOfflineMsg(fromId, toId, type, content, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::AddExpriteTimeOfflineMsg(const ::std::string& fromId, const ::std::string& toId, ::Ice::Int type, const ::std::string& content, const ::std::string& expireTime, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__AddExpriteTimeOfflineMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->AddExpriteTimeOfflineMsg(fromId, toId, type, content, expireTime, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::AddOfflineMsgNoSMS(const ::std::string& fromId, const ::std::string& toId, ::Ice::Int type, const ::std::string& content, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__AddOfflineMsgNoSMS_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->AddOfflineMsgNoSMS(fromId, toId, type, content, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::AddOfflineMsgEx(const ::std::string& fromId, const ::std::string& toId, ::Ice::Int type, const ::std::string& content, ::Ice::Long uniqueMsgTime, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__AddOfflineMsgEx_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->AddOfflineMsgEx(fromId, toId, type, content, uniqueMsgTime, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpdateUserLogin(const ::std::string& userId, ::Ice::Int sysMsgId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpdateUserLogin_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpdateUserLogin(userId, sysMsgId, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpdateUserLoginEx(const ::std::string& userId, ::Ice::Int sysMsgId, const ::std::string& loginIp, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpdateUserLoginEx_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpdateUserLoginEx(userId, sysMsgId, loginIp, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpdateUserLoginDataInfo(const ::std::string& userId, ::Ice::Int sysMsgId, const ::std::string& loginIp, ::Ice::Int onlineTimes, ::Ice::Int lastLoginTime, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpdateUserLoginDataInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpdateUserLoginDataInfo(userId, sysMsgId, loginIp, onlineTimes, lastLoginTime, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpdateUserLoginDataInfoEx(const ::std::string& userId, ::Ice::Int sysMsgId, const ::std::string& loginIp, ::Ice::Int onlineTimes, ::Ice::Int lastLoginTime, ::Ice::Int isNeedToUpdate, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpdateUserLoginDataInfoEx_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpdateUserLoginDataInfoEx(userId, sysMsgId, loginIp, onlineTimes, lastLoginTime, isNeedToUpdate, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpdateUserSysMsgId(const ::std::string& userId, ::Ice::Int sysMsgId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpdateUserSysMsgId_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpdateUserSysMsgId(userId, sysMsgId, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpdateUserDataInfo(const ::std::string& userId, ::Ice::Int strangerMsgCount, ::Ice::Int onlineTimes, ::Ice::Int addContactCount, ::Ice::Int activeDegree, ::Ice::Float rewardActDegree, ::Ice::Float onlineActDegree, ::Ice::Int addTribeCount, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpdateUserDataInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpdateUserDataInfo(userId, strangerMsgCount, onlineTimes, addContactCount, activeDegree, rewardActDegree, onlineActDegree, addTribeCount, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpdateUserDataInfo2(const ::std::string& userId, ::Ice::Int strangerMsgCount, ::Ice::Int onlineTimes, ::Ice::Int addContactCount, ::Ice::Int activeDegree, ::Ice::Float rewardActDegree, ::Ice::Float onlineActDegree, ::Ice::Int addTribeCount, ::Ice::Int reqAddContactCount, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpdateUserDataInfo2_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpdateUserDataInfo2(userId, strangerMsgCount, onlineTimes, addContactCount, activeDegree, rewardActDegree, onlineActDegree, addTribeCount, reqAddContactCount, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpdateUserDataInfo3(const ::std::string& userId, const ::AliIMDBBase::RIGHTTABLE& rightMap, ::Ice::Int onlineTimes, ::Ice::Int activeDegree, ::Ice::Float rewardActDegree, ::Ice::Float onlineActDegree, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpdateUserDataInfo3_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpdateUserDataInfo3(userId, rightMap, onlineTimes, activeDegree, rewardActDegree, onlineActDegree, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpdateUserVerifySet(const ::std::string& userId, ::Ice::Int addContactVerify, ::Ice::Int sendMsgVerify, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpdateUserVerifySet_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpdateUserVerifySet(userId, addContactVerify, sendMsgVerify, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpdateUserVerifySetEx(const ::std::string& userId, ::Ice::Int addContactVerify, ::Ice::Int sendMsgVerify, ::Ice::Int enbleSearchFlag, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpdateUserVerifySetEx_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpdateUserVerifySetEx(userId, addContactVerify, sendMsgVerify, enbleSearchFlag, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpdateUserVerifySetQuestion(const ::std::string& userId, ::Ice::Int addContactVerify, ::Ice::Int sendMsgVerify, ::Ice::Int enbleSearchFlag, const ::std::string& question, const ::std::string& answer, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpdateUserVerifySetQuestion_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpdateUserVerifySetQuestion(userId, addContactVerify, sendMsgVerify, enbleSearchFlag, question, answer, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpdateGroup(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int groupId, ::Ice::Int& groupTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpdateGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpdateGroup(userId, groupName, groupId, groupTimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::MoveGroup(const ::std::string& userId, ::Ice::Long groupId, ::Ice::Long newparentgid, ::Ice::Int& groupTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__MoveGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->MoveGroup(userId, groupId, newparentgid, groupTimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpdateContactNickName(const ::std::string& userId, const ::std::string& contactId, const ::std::string& nickName, ::Ice::Int& contactTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpdateContactNickName_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpdateContactNickName(userId, contactId, nickName, contactTimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpdateContactGroup(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int srcGroupId, ::Ice::Int dstGroupId, ::Ice::Int& contactTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpdateContactGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpdateContactGroup(userId, contactId, srcGroupId, dstGroupId, contactTimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpdateContactStatus(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int status, ::Ice::Int& contactTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpdateContactStatus_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpdateContactStatus(userId, contactId, status, contactTimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpdateNotifyMessage(::Ice::Int msgId, ::Ice::Int status, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpdateNotifyMessage_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpdateNotifyMessage(msgId, status, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpdateToolProfiles(const ::std::string& userId, ::Ice::Int type, const ::Ice::StringSeq& toolProfilsList, ::Ice::Int& toolTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpdateToolProfiles_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpdateToolProfiles(userId, type, toolProfilsList, toolTimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpdateToolProfilesEx(const ::std::string& userId, const ::AliIMDBBase::SICEToolProfileSeq& toolProfilsList, ::Ice::Int& toolTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpdateToolProfilesEx_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpdateToolProfilesEx(userId, toolProfilsList, toolTimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::RemoveGroup(const ::std::string& userId, ::Ice::Int groupId, ::Ice::Int& groupTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__RemoveGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->RemoveGroup(userId, groupId, groupTimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::RemoveContact(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int& contactTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__RemoveContact_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->RemoveContact(userId, contactId, contactTimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::RemoveInverfiedContact(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int& contactTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__RemoveInverfiedContact_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->RemoveInverfiedContact(userId, contactId, contactTimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::RemoveBlackList(const ::std::string& userId, const ::std::string& blackId, ::Ice::Int& blackListTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__RemoveBlackList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->RemoveBlackList(userId, blackId, blackListTimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::IsBlackedByOther(const ::std::string& userId, const ::std::string& otheruid, bool& bBlacked, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__IsBlackedByOther_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->IsBlackedByOther(userId, otheruid, bBlacked, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::RemoveBatchContacts(const ::std::string& userId, const ::Ice::StringSeq& cids, ::Ice::StringSeq& retVect, ::Ice::Int& modifyCntTimes, ::Ice::Int& modifyGenCntTime, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__RemoveBatchContacts_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->RemoveBatchContacts(userId, cids, retVect, modifyCntTimes, modifyGenCntTime, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetUserDStatus(const ::std::string& userId, ::AliIMDBBase::SICEUserDStatusSeq& userDStatusList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetUserDStatus_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetUserDStatus(userId, userDStatusList, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::AddUserDStatus(const ::std::string& userId, const ::std::string& userDStatus, ::Ice::Int& statusId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__AddUserDStatus_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->AddUserDStatus(userId, userDStatus, statusId, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::RemoveUserDStatus(const ::std::string& userId, ::Ice::Int statusId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__RemoveUserDStatus_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->RemoveUserDStatus(userId, statusId, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetAllContactList(const ::std::string& uid, ::Ice::Int getFlag, ::AliIMDBBase::SICEContactInfoSeq& contactList, ::Ice::Int& contactTimes, ::Ice::Int& gencontacttimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetAllContactList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetAllContactList(uid, getFlag, contactList, contactTimes, gencontacttimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetCntModifyList(::Ice::Int getFlag, const ::std::string& uid, const ::std::string& sMaxSeqId, ::AliIMDBBase::SICECntCidModPairSeq& cntList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetCntModifyList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetCntModifyList(getFlag, uid, sMaxSeqId, cntList, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::AddGenContactFull(const ::AliIMDBBase::SICEGenContactFull& detail, ::std::string& retscid, ::std::string& retsmodseqid, ::Ice::Long& timeStamps, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__AddGenContactFull_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->AddGenContactFull(detail, retscid, retsmodseqid, timeStamps, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetContactDetail(const ::std::string& uid, const ::std::string& cid, ::AliIMDBBase::SICEGenContactFull& detail, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetContactDetail_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetContactDetail(uid, cid, detail, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::DelGenContact(const ::std::string& uid, const ::std::string& cid, ::Ice::Long& contactTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__DelGenContact_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->DelGenContact(uid, cid, contactTimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::AddContact(const ::std::string& userId, const ::std::string& contactId, const ::std::string& nickName, ::Ice::Int groupId, ::Ice::Int status, const ::AliIMDBBase::SUserWebBasicProfile& cntInfo, ::Ice::Int& contactTimes, ::std::string& retcid, ::std::string& retmodseqid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__AddContact_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->AddContact(userId, contactId, nickName, groupId, status, cntInfo, contactTimes, retcid, retmodseqid, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::CheckUpgradeGenCnt(const ::std::string& uid, const ::std::string& cid, const ::std::string& contactId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__CheckUpgradeGenCnt_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->CheckUpgradeGenCnt(uid, cid, contactId, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::ModifyGenCntID(const ::std::string& uid, const ::std::string& cid, const ::std::string& contactId, ::std::string& modseqid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__ModifyGenCntID_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->ModifyGenCntID(uid, cid, contactId, modseqid, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpgradeGenContact(const ::std::string& uid, const ::std::string& cid, const ::std::string& contactId, ::Ice::Long& cntstamp, ::Ice::Long& gencntstamp, ::std::string& modseqid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpgradeGenContact_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpgradeGenContact(uid, cid, contactId, cntstamp, gencntstamp, modseqid, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetUpdatedUserInfo(const ::std::string& uid, const ::std::string& contactId, ::Ice::Long& cntstamp, ::Ice::Long& gencntstamp, ::std::string& retcid, ::std::string& modseqid, ::Ice::Long& groupid, ::std::string& nickname, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetUpdatedUserInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetUpdatedUserInfo(uid, contactId, cntstamp, gencntstamp, retcid, modseqid, groupid, nickname, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::ModifyContactDetail(const ::AliIMDBBase::SICEGenContactFull& detail, ::Ice::Long& gencntmodifyVersion, ::std::string& modseqid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__ModifyContactDetail_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->ModifyContactDetail(detail, gencntmodifyVersion, modseqid, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpdateContactGroupByCid(const ::std::string& userId, const ::std::string& cid, ::Ice::Int srcGroupId, ::Ice::Int dstGroupId, ::Ice::Int& contactTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpdateContactGroupByCid_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpdateContactGroupByCid(userId, cid, srcGroupId, dstGroupId, contactTimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpdateContactNickNameByCid(const ::std::string& userId, const ::std::string& cid, const ::std::string& nickName, ::Ice::Int& contactTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpdateContactNickNameByCid_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpdateContactNickNameByCid(userId, cid, nickName, contactTimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetCRMContactDetail(const ::std::string& userId, const ::std::string& cntid, ::AliIMDBBase::SICECRMContactDetail& cntDetail, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetCRMContactDetail_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetCRMContactDetail(userId, cntid, cntDetail, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetHardCodeIds(const ::std::string& uuid, ::Ice::Int& count, ::std::string& allids, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetHardCodeIds_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetHardCodeIds(uuid, count, allids, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpdateHardCodeIds(const ::std::string& uuid, const ::std::string& id, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpdateHardCodeIds_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpdateHardCodeIds(uuid, id, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetCntOtherModifyList(const ::std::string& userId, const ::std::string& sMaxSeqId, ::AliIMDBBase::SICECntOtherModInfoSeq& cntList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetCntOtherModifyList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetCntOtherModifyList(userId, sMaxSeqId, cntList, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetCntOtherModifyInfo(const ::std::string& userId, ::AliIMDBBase::SICECntOtherModInfo& cntOtherModInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetCntOtherModifyInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetCntOtherModifyInfo(userId, cntOtherModInfo, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetUserCRInfo(const ::std::string& uid, ::Ice::Int& crState, ::Ice::Int& begTime, ::Ice::Int& activeDegree, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetUserCRInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetUserCRInfo(uid, crState, begTime, activeDegree, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::SetUserCRInfo(const ::std::string& uid, ::Ice::Int crState, ::Ice::Int& begTime, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__SetUserCRInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->SetUserCRInfo(uid, crState, begTime, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetSmsUserInfoByUid(const ::std::string& userId, ::AliIMDBBase::SICESmsUserInfo& smsUserInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetSmsUserInfoByUid_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetSmsUserInfoByUid(userId, smsUserInfo, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetSmsUserMsgInfo(const ::std::string& userId, ::Ice::Int& todaySmsCount, ::Ice::Int& yesterdaySmsCount, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetSmsUserMsgInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetSmsUserMsgInfo(userId, todaySmsCount, yesterdaySmsCount, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::DelOfflineMsg(const ::std::string& uid, const ::std::string& date, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__DelOfflineMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->DelOfflineMsg(uid, date, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::DelOfflineMsgEx(const ::std::string& uid, ::Ice::Int date, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__DelOfflineMsgEx_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->DelOfflineMsgEx(uid, date, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::DelWapOfflineMsg(const ::std::string& uid, const ::std::string& date, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__DelWapOfflineMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->DelWapOfflineMsg(uid, date, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::ModifyCntMemo(const ::std::string& uid, const ::std::string& cntid, const ::std::string& memo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__ModifyCntMemo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->ModifyCntMemo(uid, cntid, memo, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetCntMemo(const ::std::string& uid, const ::std::string& cntid, ::std::string& memo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetCntMemo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetCntMemo(uid, cntid, memo, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetUserTribe(const ::std::string& userId, ::ALiIMDBTribe::STribeIdDbSeq& tribeIdList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetUserTribe_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetUserTribe(userId, tribeIdList, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetUserTribeConfig(const ::std::string& userId, ::Ice::Int& addVerify, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetUserTribeConfig_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetUserTribeConfig(userId, addVerify, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpdateUserTribeConfig(const ::std::string& userId, ::Ice::Int addVerify, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpdateUserTribeConfig_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpdateUserTribeConfig(userId, addVerify, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetTribeOffMngMsg(::Ice::Int tribeId, const ::std::string& memberId, ::ALiIMDBTribe::STribeOfflineMsgSeq& offlineMsgList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetTribeOffMngMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetTribeOffMngMsg(tribeId, memberId, offlineMsgList, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::DelTribeOffMngMsg(::Ice::Int tribeId, const ::std::string& memberId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__DelTribeOffMngMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->DelTribeOffMngMsg(tribeId, memberId, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::ModifyPersonalShow(const ::std::string& uid, const ::std::string& newshow, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__ModifyPersonalShow_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->ModifyPersonalShow(uid, newshow, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetPersonalShow(const ::std::string& uid, ::std::string& show, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetPersonalShow_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetPersonalShow(uid, show, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetAllOnlineSmsUser(::Ice::StringSeq& userList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetAllOnlineSmsUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetAllOnlineSmsUser(userList, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetUserKeyWordDegree(const ::std::string& userId, ::std::string& keyword, ::Ice::Int& flag, ::Ice::Float& degree, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetUserKeyWordDegree_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetUserKeyWordDegree(userId, keyword, flag, degree, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetUserValue(const ::std::string& userId, ::Ice::Int& uservalue, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetUserValue_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetUserValue(userId, uservalue, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpdateUserMd5Password(const ::std::string& userId, const ::std::string& password, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpdateUserMd5Password_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpdateUserMd5Password(userId, password, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::InsertYahooUser(const ::AliIMDBBase::SUdbUserInfo& userInfo, ::Ice::Int activeDegree, const ::AliIMDBBase::SICEGenContactFullSeq& contactList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__InsertYahooUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->InsertYahooUser(userInfo, activeDegree, contactList, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetContactDetailByUid(const ::std::string& uid, const ::std::string& cid, ::AliIMDBBase::SICEGenContactFull& detail, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetContactDetailByUid_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetContactDetailByUid(uid, cid, detail, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetChildTeamList(const ::std::string& parentId, ::AliIMDBBase::SChildUserInfoSeq& childTeamList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetChildTeamList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetChildTeamList(parentId, childTeamList, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetChildTeamList2(const ::std::string& parentId, ::AliIMDBBase::SChildUserInfoSeq2& childTeamList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetChildTeamList2_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetChildTeamList2(parentId, childTeamList, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetChildUserInfo(const ::std::string& childId, ::AliIMDBBase::SChildUserInfo& childInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetChildUserInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetChildUserInfo(childId, childInfo, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetChildUserInfo2(const ::std::string& childId, ::AliIMDBBase::SChildUserInfo2& childInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetChildUserInfo2_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetChildUserInfo2(childId, childInfo, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetShareContactList(const ::std::string& uid, ::Ice::StringSeq& shareContactIdList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetShareContactList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetShareContactList(uid, shareContactIdList, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetContactShareInfo(const ::std::string& uid, const ::std::string& contactId, ::Ice::Int type, ::Ice::Int& value, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetContactShareInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetContactShareInfo(uid, contactId, type, value, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::SetContactShareInfo(const ::std::string& uid, const ::std::string& contactId, ::Ice::Int type, ::Ice::Int value, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__SetContactShareInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->SetContactShareInfo(uid, contactId, type, value, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetMultiAccountContactList(const ::std::string& uid, ::AliIMDBBase::SICEContactInfoSeq& contactIdList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetMultiAccountContactList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetMultiAccountContactList(uid, contactIdList, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetMultiServiceList(const ::std::string& uid, ::Ice::IntSeq& ServiceList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetMultiServiceList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetMultiServiceList(uid, ServiceList, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetMultiBindToUser(const ::std::string& uid, ::std::string& bindToUser, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetMultiBindToUser_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetMultiBindToUser(uid, bindToUser, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetWebBinds(const ::std::string& uid, ::AliIMDBBase::SICEKvPairSeq& binds, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetWebBinds_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetWebBinds(uid, binds, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::AddWebBind(const ::std::string& uid, const ::AliIMDBBase::SICEKvPair& bind, ::std::string& webmd5pw, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__AddWebBind_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->AddWebBind(uid, bind, webmd5pw, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::ChangeWebBind(const ::std::string& uid, const ::AliIMDBBase::SICEKvPair& newbind, ::std::string& webmd5pw, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__ChangeWebBind_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->ChangeWebBind(uid, newbind, webmd5pw, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::DelWebBind(const ::std::string& uid, const ::std::string& binduid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__DelWebBind_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->DelWebBind(uid, binduid, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getUserSession(const ::std::string& uid, ::AliIM::SIceSession& retsession, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getUserSession_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getUserSession(uid, retsession, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::checkUserSession(const ::std::string& uid, const ::std::string& sessionNo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__checkUserSession_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->checkUserSession(uid, sessionNo, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::removeSession(const ::std::string& uid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__removeSession_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->removeSession(uid, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpdateSignature(const ::std::string& uid, const ::std::string& signature, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpdateSignature_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpdateSignature(uid, signature, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::updateContactClientInfo(const ::std::string& uid, const ::std::string& cid, const ::std::string& data, ::Ice::Int& contactTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__updateContactClientInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->updateContactClientInfo(uid, cid, data, contactTimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getUserProfile(const ::std::string& uid, ::AliIMDBBase::SICEKVMap& profilemap, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getUserProfile_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getUserProfile(uid, profilemap, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getPeerVerifyFlag(const ::std::string& uid, const ::std::string& cid, ::Ice::Int& flag, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getPeerVerifyFlag_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getPeerVerifyFlag(uid, cid, flag, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getPeerVerifyFlagQuestion(const ::std::string& uid, const ::std::string& cid, ::Ice::Int& flag, ::std::string& question, ::std::string& answer, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getPeerVerifyFlagQuestion_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getPeerVerifyFlagQuestion(uid, cid, flag, question, answer, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getNickName(const ::std::string& uid, ::std::string& nickname, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getNickName_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getNickName(uid, nickname, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getFTServiceInfo(const ::std::string& senduid, const ::std::string& touid, ::std::string& srvIp, ::Ice::Short& srvPort, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getFTServiceInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getFTServiceInfo(senduid, touid, srvIp, srvPort, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getTietuServiceInfo(const ::std::string& senduid, ::Ice::Int& sessionSum, ::std::string& srvIp, ::Ice::Short& srvPort, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getTietuServiceInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getTietuServiceInfo(senduid, sessionSum, srvIp, srvPort, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getFTSAddr(::Ice::Short type, const ::std::string& senduid, ::Ice::Long& ftsid, ::std::string& srvIp, ::Ice::Short& srvPort, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getFTSAddr_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getFTSAddr(type, senduid, ftsid, srvIp, srvPort, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::registerWanghao(const ::std::string& longuid, const ::AliIMInterface::KVMAP& attrs, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__registerWanghao_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->registerWanghao(longuid, attrs, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::updateUserProfile(const ::std::string& longuid, const ::AliIMInterface::KVMAP& newattrs, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__updateUserProfile_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->updateUserProfile(longuid, newattrs, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::loadSitePrefix(::AliIMDBBase::SImPrefixSeq& pv, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__loadSitePrefix_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->loadSitePrefix(pv, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::updateAepUserId(const ::std::string& longuid, const ::std::string& aepuserid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__updateAepUserId_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->updateAepUserId(longuid, aepuserid, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::updateVipflag(const ::std::string& uid, ::Ice::Int flag, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__updateVipflag_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->updateVipflag(uid, flag, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::checkWangHaoPwd(const ::std::string& longuid, bool btokenpw, const ::std::string& pw, ::std::string& retluid, ::std::string& retPwToken, ::std::string& retmd5passwd, ::Ice::Int& activeState, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__checkWangHaoPwd_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->checkWangHaoPwd(longuid, btokenpw, pw, retluid, retPwToken, retmd5passwd, activeState, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::checkCanLogin(const ::std::string& uid, ::Ice::Int version, const ::std::string& extrainfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__checkCanLogin_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->checkCanLogin(uid, version, extrainfo, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::GetSIPSessionId(const ::std::string& uid, const ::std::string& appid, const ::std::string& type, ::std::string& sessionId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__GetSIPSessionId_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->GetSIPSessionId(uid, appid, type, sessionId, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::CheckGsContact(const ::std::string& uid, const ::std::string& contactid, ::Ice::Int& flag, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__CheckGsContact_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->CheckGsContact(uid, contactid, flag, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpdateSmsAuthCode(const ::std::string& uid, const ::std::string& phoneNo, const ::std::string& code, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpdateSmsAuthCode_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpdateSmsAuthCode(uid, phoneNo, code, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::CheckSmsAuthCode(const ::std::string& uid, const ::std::string& phoneNo, const ::std::string& code, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__CheckSmsAuthCode_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->CheckSmsAuthCode(uid, phoneNo, code, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::UpdateUserValueBySmsAuth(const ::std::string& uid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__UpdateUserValueBySmsAuth_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->UpdateUserValueBySmsAuth(uid, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::CheckSmsAuthStatus(const ::std::string& uid, ::Ice::Int& status, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__CheckSmsAuthStatus_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->CheckSmsAuthStatus(uid, status, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::CheckUserTokenExtra(const ::std::string& userId, const ::std::string& passwd, ::std::string& lid, ::std::string& retuidtokenpw, ::std::string& retmd5passwd, ::Ice::Int& activeStat, ::Ice::Int& webdata, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__CheckUserTokenExtra_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->CheckUserTokenExtra(userId, passwd, lid, retuidtokenpw, retmd5passwd, activeStat, webdata, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::CheckUserWebPasswdExtra(const ::std::string& userId, const ::std::string& passwd, ::std::string& lid, ::std::string& retuidtokenpw, ::std::string& retmd5passwd, ::Ice::Int& activeStat, ::Ice::Int& webdata, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__CheckUserWebPasswdExtra_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->CheckUserWebPasswdExtra(userId, passwd, lid, retuidtokenpw, retmd5passwd, activeStat, webdata, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getESShuntStatus(const ::std::string& uid, ::std::string& shunt, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getESShuntStatus_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getESShuntStatus(uid, shunt, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::setESShuntStatus(const ::std::string& uid, const ::std::string& shunt, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__setESShuntStatus_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->setESShuntStatus(uid, shunt, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getMaxESReceptNum(const ::std::string& uid, ::Ice::Int groupId, ::AliIMDBBase::SICEReceptNumSeq& eserviceList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getMaxESReceptNum_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getMaxESReceptNum(uid, groupId, eserviceList, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::setMaxESReceptNum(const ::std::string& uid, ::Ice::Int groupId, const ::AliIMDBBase::SICEReceptNumSeq& eserviceList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__setMaxESReceptNum_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->setMaxESReceptNum(uid, groupId, eserviceList, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getESPriority(const ::std::string& uid, ::Ice::Int groupId, ::AliIMDBBase::SICEReceptPrioritySeq& eserviceList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getESPriority_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getESPriority(uid, groupId, eserviceList, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::setESPriority(const ::std::string& uid, ::Ice::Int groupId, const ::AliIMDBBase::SICEReceptPrioritySeq& eserviceList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__setESPriority_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->setESPriority(uid, groupId, eserviceList, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getESRecvOffMsg(const ::std::string& uid, ::Ice::Int groupId, ::AliIMDBBase::SICERecvOffMsgSeq& eserviceList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getESRecvOffMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getESRecvOffMsg(uid, groupId, eserviceList, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::setESRecvOffMsg(const ::std::string& uid, ::Ice::Int groupId, const ::AliIMDBBase::SICERecvOffMsgSeq& eserviceList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__setESRecvOffMsg_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->setESRecvOffMsg(uid, groupId, eserviceList, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getESGroupList(const ::std::string& uid, ::Ice::IntSeq& groupList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getESGroupList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getESGroupList(uid, groupList, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::insertESGroupInfo(const ::std::string& uid, const ::AliIMDBBase::SICEESGroupInfo& groupInfo, ::Ice::Int& groupId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__insertESGroupInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->insertESGroupInfo(uid, groupInfo, groupId, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::updateESGroupInfo(const ::std::string& uid, const ::AliIMDBBase::SICEESGroupInfo& group, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__updateESGroupInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->updateESGroupInfo(uid, group, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::delESGroup(const ::std::string& uid, ::Ice::Int groupid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__delESGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->delESGroup(uid, groupid, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getESGroupInfo(const ::std::string& uid, ::AliIMDBBase::SICEESGroupInfoSeq& groupList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getESGroupInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getESGroupInfo(uid, groupList, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getESGroupInfoByID(const ::std::string& uid, ::Ice::Int groupId, ::AliIMDBBase::SICEESGroupInfo& groupInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getESGroupInfoByID_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getESGroupInfoByID(uid, groupId, groupInfo, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getESUserFunc(const ::std::string& uid, const ::std::string& childid, ::std::string& userflag, ::Ice::Int& groupId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getESUserFunc_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getESUserFunc(uid, childid, userflag, groupId, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getESUnJoinGroup(const ::std::string& uid, ::Ice::StringSeq& eserviceList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getESUnJoinGroup_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getESUnJoinGroup(uid, eserviceList, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::checkESRole(const ::std::string& uid, ::Ice::Int& groupId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__checkESRole_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->checkESRole(uid, groupId, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::CheckWebWWPasswd(const ::std::string& userId, const ::std::string& passwd, ::std::string& lid, ::std::string& retuidtokenpw, ::std::string& retmd5passwd, ::Ice::Int& activeStat, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__CheckWebWWPasswd_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->CheckWebWWPasswd(userId, passwd, lid, retuidtokenpw, retmd5passwd, activeStat, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getESExpandArea(const ::std::string& uid, ::AliIMDBBase::SICEExpandAreaSeq& areaInfos, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getESExpandArea_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getESExpandArea(uid, areaInfos, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getESExpandAreaById(const ::std::string& uid, ::Ice::Int id, ::AliIMDBBase::SICEExpandArea& areaInfos, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getESExpandAreaById_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getESExpandAreaById(uid, id, areaInfos, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::addESExpandArea(const ::std::string& uid, const ::AliIMDBBase::SICEExpandArea& areaInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__addESExpandArea_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->addESExpandArea(uid, areaInfo, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::updateESExpandArea(const ::std::string& uid, const ::AliIMDBBase::SICEExpandArea& areaInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__updateESExpandArea_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->updateESExpandArea(uid, areaInfo, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::delESExpandArea(const ::std::string& uid, ::Ice::Int id, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__delESExpandArea_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->delESExpandArea(uid, id, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::setESEval(const ::std::string& uid, const ::std::string& evalcontent, const ::std::string& welcome, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__setESEval_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->setESEval(uid, evalcontent, welcome, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getESEval(const ::std::string& uid, ::std::string& evalcontent, ::std::string& welcome, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getESEval_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getESEval(uid, evalcontent, welcome, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::sendESEvalResult(const ::std::string& uid, const ::std::string& buyerid, ::Ice::Int& evalId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__sendESEvalResult_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->sendESEvalResult(uid, buyerid, evalId, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::setESEvalResult(const ::std::string& uid, const ::std::string& buyerid, ::Ice::Int evalId, const ::std::string& evalresult, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__setESEvalResult_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->setESEvalResult(uid, buyerid, evalId, evalresult, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getESEvalResult(const ::std::string& uid, const ::std::string& buyerid, ::Ice::Int evalId, ::std::string& evalresult, ::std::string& gmtcreate, ::std::string& gmtmodify, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getESEvalResult_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getESEvalResult(uid, buyerid, evalId, evalresult, gmtcreate, gmtmodify, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getESEvalResultToday(const ::std::string& uid, ::AliIMDBBase::SICEESEvalResultSeq& evalInfos, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getESEvalResultToday_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getESEvalResultToday(uid, evalInfos, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getESEvalResultHistory(const ::std::string& uid, const ::std::string& querytime, ::AliIMDBBase::SICEESEvalResultSeq& evalInfos, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getESEvalResultHistory_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getESEvalResultHistory(uid, querytime, evalInfos, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getESEvalResultHistorybypage(const ::std::string& uid, const ::std::string& childid, const ::std::string& begindate, const ::std::string& enddate, ::Ice::Int pageno, ::Ice::Int pagesize, ::Ice::Int& pagecount, ::AliIMDBBase::SICEESEvalResultExSeq& evalInfos, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getESEvalResultHistorybypage_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getESEvalResultHistorybypage(uid, childid, begindate, enddate, pageno, pagesize, pagecount, evalInfos, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getLastLoginTime(const ::Ice::StringSeq& loginids, ::Ice::StringSeq& loginTimes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getLastLoginTime_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getLastLoginTime(loginids, loginTimes, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getChildShuntInfos(const ::std::string& uid, ::AliIMDBBase::SChildUserInfoSeq& childInfos, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getChildShuntInfos_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getChildShuntInfos(uid, childInfos, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::setChildShuntInfos(const ::std::string& uid, const ::AliIMDBBase::SChildUserInfoSeq& childinfos, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__setChildShuntInfos_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->setChildShuntInfos(uid, childinfos, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getAgentChild(const ::std::string& uid, ::std::string& agentId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getAgentChild_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getAgentChild(uid, agentId, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::setAgentChild(const ::std::string& uid, const ::std::string& agentId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__setAgentChild_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->setAgentChild(uid, agentId, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getAgentList(const ::std::string& uid, ::Ice::StringSeq& agentIds, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getAgentList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getAgentList(uid, agentIds, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getB2BChildTeamList(const ::std::string& parentId, ::AliIMDBBase::SB2BChildUserInfoSeq& childTeamList, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getB2BChildTeamList_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getB2BChildTeamList(parentId, childTeamList, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getB2BChildInfo(const ::std::string& parentId, const ::std::string& childid, ::AliIMDBBase::SB2BChildUserInfo& childInfo, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getB2BChildInfo_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getB2BChildInfo(parentId, childid, childInfo, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::getB2BChildParentId(const ::std::string& childId, ::std::string& fid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__getB2BChildParentId_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->getB2BChildParentId(childId, fid, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::addB2BChild(const ::std::string& fid, const ::std::string& childId, const ::std::string& userflag, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__addB2BChild_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->addB2BChild(fid, childId, userflag, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::updateB2BChild(const ::std::string& fid, const ::std::string& childId, const ::std::string& userflag, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__updateB2BChild_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->updateB2BChild(fid, childId, userflag, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::deleteB2BChild(const ::std::string& fid, const ::std::string& childId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__AliIMDBBase__IMDBProxyMgr__deleteB2BChild_name);
            __delBase = __getDelegate();
            ::IceDelegate::AliIMDBBase::IMDBProxyMgr* __del = dynamic_cast< ::IceDelegate::AliIMDBBase::IMDBProxyMgr*>(__delBase.get());
            return __del->deleteB2BChild(fid, childId, __ctx);
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
IceProxy::AliIMDBBase::IMDBProxyMgr::ice_staticId()
{
    return ::AliIMDBBase::IMDBProxyMgr::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::AliIMDBBase::IMDBProxyMgr::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::AliIMDBBase::IMDBProxyMgr);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::AliIMDBBase::IMDBProxyMgr::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::AliIMDBBase::IMDBProxyMgr);
}

bool
IceProxy::AliIMDBBase::operator==(const ::IceProxy::AliIMDBBase::IMDBProxyMgr& l, const ::IceProxy::AliIMDBBase::IMDBProxyMgr& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) == static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIMDBBase::operator!=(const ::IceProxy::AliIMDBBase::IMDBProxyMgr& l, const ::IceProxy::AliIMDBBase::IMDBProxyMgr& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) != static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIMDBBase::operator<(const ::IceProxy::AliIMDBBase::IMDBProxyMgr& l, const ::IceProxy::AliIMDBBase::IMDBProxyMgr& r)
{
    return static_cast<const ::IceProxy::Ice::Object&>(l) < static_cast<const ::IceProxy::Ice::Object&>(r);
}

bool
IceProxy::AliIMDBBase::operator<=(const ::IceProxy::AliIMDBBase::IMDBProxyMgr& l, const ::IceProxy::AliIMDBBase::IMDBProxyMgr& r)
{
    return l < r || l == r;
}

bool
IceProxy::AliIMDBBase::operator>(const ::IceProxy::AliIMDBBase::IMDBProxyMgr& l, const ::IceProxy::AliIMDBBase::IMDBProxyMgr& r)
{
    return !(l < r) && !(l == r);
}

bool
IceProxy::AliIMDBBase::operator>=(const ::IceProxy::AliIMDBBase::IMDBProxyMgr& l, const ::IceProxy::AliIMDBBase::IMDBProxyMgr& r)
{
    return !(l < r);
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::sayhello(const ::std::string& userId, ::std::string& helloword, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__sayhello_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        __is->read(helloword);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::CheckUserToken(const ::std::string& userId, const ::std::string& passwd, ::std::string& lid, ::std::string& retuidtokenpw, ::std::string& retmd5passwd, ::Ice::Int& activeStat, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__CheckUserToken_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(passwd);
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
        __is->read(lid);
        __is->read(retuidtokenpw);
        __is->read(retmd5passwd);
        __is->read(activeStat);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::CheckTmpSession(const ::std::string& userId, const ::std::string& passwd, ::std::string& lid, ::std::string& retuidtokenpw, ::std::string& retmd5passwd, ::Ice::Int& activeStat, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__CheckTmpSession_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(passwd);
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
        __is->read(lid);
        __is->read(retuidtokenpw);
        __is->read(retmd5passwd);
        __is->read(activeStat);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::CheckUserWebPasswd(const ::std::string& userId, const ::std::string& passwd, ::std::string& lid, ::std::string& retuidtokenpw, ::std::string& retmd5passwd, ::Ice::Int& activeStat, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__CheckUserWebPasswd_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(passwd);
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
        __is->read(lid);
        __is->read(retuidtokenpw);
        __is->read(retmd5passwd);
        __is->read(activeStat);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::CheckUserPasswd(const ::std::string& userId, bool btokenpw, const ::std::string& passwd, ::std::string& retuidtokenpw, ::std::string& retmd5passwd, ::Ice::Int& activeStat, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__CheckUserPasswd_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(btokenpw);
        __os->write(passwd);
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
        __is->read(retuidtokenpw);
        __is->read(retmd5passwd);
        __is->read(activeStat);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::CheckUserWebToken(const ::std::string& userId, const ::std::string& token, ::std::string& reason, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__CheckUserWebToken_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(token);
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
        __is->read(reason);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetAtmLongid(const ::std::string& userId, ::std::string& longId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetAtmLongid_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        __is->read(longId);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::AddUser60(const ::std::string& userId, const ::std::string& md5passwd, const ::std::string& tokenpw, ::Ice::Int languageid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__AddUser60_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(md5passwd);
        __os->write(tokenpw);
        __os->write(languageid);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetWebMemberPWInfo(const ::std::string& userId, ::AliIMDBBase::SMemberPWInfo& pwInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetWebMemberPWInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        pwInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetWebMemberPWInfoEx(const ::std::string& userId, ::AliIMDBBase::SMemberPWInfoEx& pwInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetWebMemberPWInfoEx_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        pwInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetUserWebBasicProfile(const ::std::string& userId, ::AliIMDBBase::SUserWebBasicProfile& profile, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetUserWebBasicProfile_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        profile.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::CheckCanAddContact(const ::std::string& userId, const ::std::string& buddyId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__CheckCanAddContact_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(buddyId);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::QueryMatchedUserIds(const ::std::string& finduid, const ::std::string& shortId, ::AliIMDBBase::SMatchedUserIdInfoSeq& matchedIds, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__QueryMatchedUserIds_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(finduid);
        __os->write(shortId);
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
        ::AliIMDBBase::__read(__is, matchedIds, ::AliIMDBBase::__U__SMatchedUserIdInfoSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpdateContactWebInfo(const ::std::string& userId, const ::std::string& buddyId, const ::AliIMDBBase::SUserWebBasicProfile& cntWebInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpdateContactWebInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(buddyId);
        cntWebInfo.__write(__os);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::DelTaobaoUser(const ::std::string& webId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__DelTaobaoUser_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(webId);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::DelAnyUser(const ::std::string& imuserId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__DelAnyUser_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(imuserId);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::AddUserKeyWord(const ::std::string& userId, const ::std::string& keyword, ::Ice::Int flag, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__AddUserKeyWord_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(keyword);
        __os->write(flag);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpdateUserKeyWord(const ::std::string& userId, const ::std::string& keyword, ::Ice::Int flag, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpdateUserKeyWord_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(keyword);
        __os->write(flag);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetUserKeyWord(const ::std::string& userId, ::std::string& keyword, ::Ice::Int& flag, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetUserKeyWord_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        __is->read(keyword);
        __is->read(flag);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::QueryUserIdsByKeyWord(const ::std::string& keyword, ::AliIMDBBase::SMatchedUserIdInfoSeq& matchedIds, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__QueryUserIdsByKeyWord_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(keyword);
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
        ::AliIMDBBase::__read(__is, matchedIds, ::AliIMDBBase::__U__SMatchedUserIdInfoSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetBatchMemberInfo(const ::Ice::StringSeq& userIds, ::AliIMDBBase::SICEMemberInfoSeq& memberInfoList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetBatchMemberInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(userIds.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&userIds[0], &userIds[0] + userIds.size());
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
        ::AliIMDBBase::__read(__is, memberInfoList, ::AliIMDBBase::__U__SICEMemberInfoSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetAllVersion(::AliIMDBBase::SICEVersionSeq& versionList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetAllVersion_name, ::Ice::Normal, __context, __compress);
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
        ::AliIMDBBase::__read(__is, versionList, ::AliIMDBBase::__U__SICEVersionSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetAllSysMsg(::AliIMDBBase::SICESysMessageSeq& sysMsgList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetAllSysMsg_name, ::Ice::Normal, __context, __compress);
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
        ::AliIMDBBase::__read(__is, sysMsgList, ::AliIMDBBase::__U__SICESysMessageSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetAllExSysMsg(::AliIMDBBase::SExICESysMessageSeq& sysMsgList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetAllExSysMsg_name, ::Ice::Normal, __context, __compress);
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
        ::AliIMDBBase::__read(__is, sysMsgList, ::AliIMDBBase::__U__SExICESysMessageSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetUserInfo(const ::std::string& userId, ::AliIMDBBase::SICEUserInfo& userInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetUserInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetUserInfo2(const ::std::string& userId, ::AliIMDBBase::SICEUserInfo2& userInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetUserInfo2_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetUserInfoEx(const ::std::string& userId, ::AliIMDBBase::SICEUserInfoEx& userInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetUserInfoEx_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetUserInfoNew(const ::std::string& userId, ::AliIMDBBase::SICEUserInfoNew& userInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetUserInfoNew_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetUserInfo2New(const ::std::string& userId, ::AliIMDBBase::SICEUserInfo2New& userInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetUserInfo2New_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetUserInfoExNew(const ::std::string& userId, ::AliIMDBBase::SICEUserInfoExNew& userInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetUserInfoExNew_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetUserInfoExNew2(const ::std::string& userId, ::AliIMDBBase::SICEUserInfoExNew2& userInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetUserInfoExNew2_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetUserInfoExNew3(const ::std::string& userId, ::AliIMDBBase::SICEUserInfoExNew3& userInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetUserInfoExNew3_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetUserInfoExNew4(const ::std::string& userId, ::AliIMDBBase::SICEUserInfoExNew4& userInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetUserInfoExNew4_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetUserVerifyInfo(const ::std::string& userId, ::Ice::Byte& addcontactverify, ::Ice::Byte& sendmsgverify, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetUserVerifyInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        __is->read(addcontactverify);
        __is->read(sendmsgverify);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetUserVerifyInfoEx(const ::std::string& userId, ::Ice::Byte& addcontactverify, ::Ice::Byte& sendmsgverify, ::Ice::Byte& enableSearchFlag, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetUserVerifyInfoEx_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        __is->read(addcontactverify);
        __is->read(sendmsgverify);
        __is->read(enableSearchFlag);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetUserVerifyInfoQuestion(const ::std::string& userId, ::Ice::Byte& addcontactverify, ::Ice::Byte& sendmsgverify, ::Ice::Byte& enableSearchFlag, ::std::string& question, ::std::string& answer, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetUserVerifyInfoQuestion_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        __is->read(addcontactverify);
        __is->read(sendmsgverify);
        __is->read(enableSearchFlag);
        __is->read(question);
        __is->read(answer);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetGroupList(const ::std::string& userId, ::AliIMDBBase::SICEGroupInfoSeq& groupList, ::Ice::Int& groupTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetGroupList_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        ::AliIMDBBase::__read(__is, groupList, ::AliIMDBBase::__U__SICEGroupInfoSeq());
        __is->read(groupTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetGroupListEx(const ::std::string& userId, ::AliIMDBBase::SICEGroupInfoExSeq& groupList, ::Ice::Int& groupTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetGroupListEx_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        ::AliIMDBBase::__read(__is, groupList, ::AliIMDBBase::__U__SICEGroupInfoExSeq());
        __is->read(groupTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetContactList(const ::std::string& userId, ::Ice::Int getFlag, ::AliIMDBBase::SICEContactInfoSeq& contactList, ::Ice::Int& contactTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetContactList_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(getFlag);
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
        ::AliIMDBBase::__read(__is, contactList, ::AliIMDBBase::__U__SICEContactInfoSeq());
        __is->read(contactTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetBlackList(const ::std::string& userId, ::Ice::StringSeq& blackList, ::Ice::Int& blacklistTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetBlackList_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        __is->read(blackList);
        __is->read(blacklistTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetReverseBlackList(const ::std::string& userId, ::Ice::StringSeq& reverseBlackList, ::Ice::Int& reverseBlacklistTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetReverseBlackList_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        __is->read(reverseBlackList);
        __is->read(reverseBlacklistTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetOfflineMsg(const ::std::string& userId, ::AliIMDBBase::SICEOffLineMessegeSeq& offlineMsgList, ::Ice::Int& offlinemsgTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetOfflineMsg_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        ::AliIMDBBase::__read(__is, offlineMsgList, ::AliIMDBBase::__U__SICEOffLineMessegeSeq());
        __is->read(offlinemsgTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetOfflineMsgEx(const ::std::string& userId, ::AliIMDBBase::SICEOffLineMessegeExSeq& offlineMsgList, ::Ice::Int& offlinemsgTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetOfflineMsgEx_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        ::AliIMDBBase::__read(__is, offlineMsgList, ::AliIMDBBase::__U__SICEOffLineMessegeExSeq());
        __is->read(offlinemsgTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetOfflineMsgCount(const ::std::string& uid, ::Ice::Int& chatMsgNum, ::Ice::Int& sysMsgNum, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetOfflineMsgCount_name, ::Ice::Normal, __context, __compress);
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
        __is->read(chatMsgNum);
        __is->read(sysMsgNum);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetEnetOfflineMsgNum(const ::std::string& toId, const ::std::string& fromId, const ::Ice::IntSeq& types, ::Ice::Int& msgNum, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetEnetOfflineMsgNum_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(toId);
        __os->write(fromId);
        if(types.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&types[0], &types[0] + types.size());
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
        __is->read(msgNum);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetContactInfo(const ::std::string& userId, const ::std::string& contactId, ::AliIMDBBase::SICEContactInfo& contactInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetContactInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(contactId);
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
        contactInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetOfflineMsgNum(const ::std::string& userId, ::Ice::Int& msgNum, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetOfflineMsgNum_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        __is->read(msgNum);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetToolProfiles(const ::std::string& userId, ::Ice::Int type, ::Ice::Int nowTimes, ::Ice::StringSeq& toolProfilesList, ::Ice::Int& toolTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetToolProfiles_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(type);
        __os->write(nowTimes);
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
        __is->read(toolProfilesList);
        __is->read(toolTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetToolProfilesEx(const ::std::string& userId, ::Ice::Int nowTimes, ::AliIMDBBase::SICEToolProfileSeq& toolProfilesList, ::Ice::Int& toolTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetToolProfilesEx_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(nowTimes);
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
        ::AliIMDBBase::__read(__is, toolProfilesList, ::AliIMDBBase::__U__SICEToolProfileSeq());
        __is->read(toolTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetSysMsg(::Ice::Int sysId, ::AliIMDBBase::SICESysMessage& sysMsg, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetSysMsg_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(sysId);
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
        sysMsg.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::AddUser(const ::std::string& userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__AddUser_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::AddGroup(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int& groupId, ::Ice::Int& groupTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__AddGroup_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(groupName);
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
        __is->read(groupId);
        __is->read(groupTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::AddGroupEx(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int parentId, ::Ice::Int& groupId, ::Ice::Int& groupTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__AddGroupEx_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(groupName);
        __os->write(parentId);
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
        __is->read(groupId);
        __is->read(groupTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::AddBlackList(const ::std::string& userId, const ::std::string& blackId, ::Ice::Int& blackListTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__AddBlackList_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(blackId);
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
        __is->read(blackListTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::AddOfflineMsg(const ::std::string& fromId, const ::std::string& toId, ::Ice::Int type, const ::std::string& content, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__AddOfflineMsg_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(fromId);
        __os->write(toId);
        __os->write(type);
        __os->write(content);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::AddExpriteTimeOfflineMsg(const ::std::string& fromId, const ::std::string& toId, ::Ice::Int type, const ::std::string& content, const ::std::string& expireTime, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__AddExpriteTimeOfflineMsg_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(fromId);
        __os->write(toId);
        __os->write(type);
        __os->write(content);
        __os->write(expireTime);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::AddOfflineMsgNoSMS(const ::std::string& fromId, const ::std::string& toId, ::Ice::Int type, const ::std::string& content, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__AddOfflineMsgNoSMS_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(fromId);
        __os->write(toId);
        __os->write(type);
        __os->write(content);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::AddOfflineMsgEx(const ::std::string& fromId, const ::std::string& toId, ::Ice::Int type, const ::std::string& content, ::Ice::Long uniqueMsgTime, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__AddOfflineMsgEx_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(fromId);
        __os->write(toId);
        __os->write(type);
        __os->write(content);
        __os->write(uniqueMsgTime);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpdateUserLogin(const ::std::string& userId, ::Ice::Int sysMsgId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpdateUserLogin_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(sysMsgId);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpdateUserLoginEx(const ::std::string& userId, ::Ice::Int sysMsgId, const ::std::string& loginIp, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpdateUserLoginEx_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(sysMsgId);
        __os->write(loginIp);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpdateUserLoginDataInfo(const ::std::string& userId, ::Ice::Int sysMsgId, const ::std::string& loginIp, ::Ice::Int onlineTimes, ::Ice::Int lastLoginTime, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpdateUserLoginDataInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(sysMsgId);
        __os->write(loginIp);
        __os->write(onlineTimes);
        __os->write(lastLoginTime);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpdateUserLoginDataInfoEx(const ::std::string& userId, ::Ice::Int sysMsgId, const ::std::string& loginIp, ::Ice::Int onlineTimes, ::Ice::Int lastLoginTime, ::Ice::Int isNeedToUpdate, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpdateUserLoginDataInfoEx_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(sysMsgId);
        __os->write(loginIp);
        __os->write(onlineTimes);
        __os->write(lastLoginTime);
        __os->write(isNeedToUpdate);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpdateUserSysMsgId(const ::std::string& userId, ::Ice::Int sysMsgId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpdateUserSysMsgId_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(sysMsgId);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpdateUserDataInfo(const ::std::string& userId, ::Ice::Int strangerMsgCount, ::Ice::Int onlineTimes, ::Ice::Int addContactCount, ::Ice::Int activeDegree, ::Ice::Float rewardActDegree, ::Ice::Float onlineActDegree, ::Ice::Int addTribeCount, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpdateUserDataInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(strangerMsgCount);
        __os->write(onlineTimes);
        __os->write(addContactCount);
        __os->write(activeDegree);
        __os->write(rewardActDegree);
        __os->write(onlineActDegree);
        __os->write(addTribeCount);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpdateUserDataInfo2(const ::std::string& userId, ::Ice::Int strangerMsgCount, ::Ice::Int onlineTimes, ::Ice::Int addContactCount, ::Ice::Int activeDegree, ::Ice::Float rewardActDegree, ::Ice::Float onlineActDegree, ::Ice::Int addTribeCount, ::Ice::Int reqAddContactCount, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpdateUserDataInfo2_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(strangerMsgCount);
        __os->write(onlineTimes);
        __os->write(addContactCount);
        __os->write(activeDegree);
        __os->write(rewardActDegree);
        __os->write(onlineActDegree);
        __os->write(addTribeCount);
        __os->write(reqAddContactCount);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpdateUserDataInfo3(const ::std::string& userId, const ::AliIMDBBase::RIGHTTABLE& rightMap, ::Ice::Int onlineTimes, ::Ice::Int activeDegree, ::Ice::Float rewardActDegree, ::Ice::Float onlineActDegree, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpdateUserDataInfo3_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        ::AliIMDBBase::__write(__os, rightMap, ::AliIMDBBase::__U__RIGHTTABLE());
        __os->write(onlineTimes);
        __os->write(activeDegree);
        __os->write(rewardActDegree);
        __os->write(onlineActDegree);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpdateUserVerifySet(const ::std::string& userId, ::Ice::Int addContactVerify, ::Ice::Int sendMsgVerify, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpdateUserVerifySet_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(addContactVerify);
        __os->write(sendMsgVerify);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpdateUserVerifySetEx(const ::std::string& userId, ::Ice::Int addContactVerify, ::Ice::Int sendMsgVerify, ::Ice::Int enbleSearchFlag, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpdateUserVerifySetEx_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(addContactVerify);
        __os->write(sendMsgVerify);
        __os->write(enbleSearchFlag);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpdateUserVerifySetQuestion(const ::std::string& userId, ::Ice::Int addContactVerify, ::Ice::Int sendMsgVerify, ::Ice::Int enbleSearchFlag, const ::std::string& question, const ::std::string& answer, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpdateUserVerifySetQuestion_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(addContactVerify);
        __os->write(sendMsgVerify);
        __os->write(enbleSearchFlag);
        __os->write(question);
        __os->write(answer);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpdateGroup(const ::std::string& userId, const ::std::string& groupName, ::Ice::Int groupId, ::Ice::Int& groupTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpdateGroup_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(groupName);
        __os->write(groupId);
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
        __is->read(groupTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::MoveGroup(const ::std::string& userId, ::Ice::Long groupId, ::Ice::Long newparentgid, ::Ice::Int& groupTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__MoveGroup_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(groupId);
        __os->write(newparentgid);
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
        __is->read(groupTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpdateContactNickName(const ::std::string& userId, const ::std::string& contactId, const ::std::string& nickName, ::Ice::Int& contactTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpdateContactNickName_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(contactId);
        __os->write(nickName);
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
        __is->read(contactTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpdateContactGroup(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int srcGroupId, ::Ice::Int dstGroupId, ::Ice::Int& contactTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpdateContactGroup_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(contactId);
        __os->write(srcGroupId);
        __os->write(dstGroupId);
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
        __is->read(contactTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpdateContactStatus(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int status, ::Ice::Int& contactTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpdateContactStatus_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(contactId);
        __os->write(status);
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
        __is->read(contactTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpdateNotifyMessage(::Ice::Int msgId, ::Ice::Int status, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpdateNotifyMessage_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(msgId);
        __os->write(status);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpdateToolProfiles(const ::std::string& userId, ::Ice::Int type, const ::Ice::StringSeq& toolProfilsList, ::Ice::Int& toolTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpdateToolProfiles_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(type);
        if(toolProfilsList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&toolProfilsList[0], &toolProfilsList[0] + toolProfilsList.size());
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
        __is->read(toolTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpdateToolProfilesEx(const ::std::string& userId, const ::AliIMDBBase::SICEToolProfileSeq& toolProfilsList, ::Ice::Int& toolTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpdateToolProfilesEx_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        if(toolProfilsList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &toolProfilsList[0], &toolProfilsList[0] + toolProfilsList.size(), ::AliIMDBBase::__U__SICEToolProfileSeq());
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
        __is->read(toolTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::RemoveGroup(const ::std::string& userId, ::Ice::Int groupId, ::Ice::Int& groupTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__RemoveGroup_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(groupId);
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
        __is->read(groupTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::RemoveContact(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int& contactTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__RemoveContact_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(contactId);
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
        __is->read(contactTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::RemoveInverfiedContact(const ::std::string& userId, const ::std::string& contactId, ::Ice::Int& contactTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__RemoveInverfiedContact_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(contactId);
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
        __is->read(contactTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::RemoveBlackList(const ::std::string& userId, const ::std::string& blackId, ::Ice::Int& blackListTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__RemoveBlackList_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(blackId);
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
        __is->read(blackListTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::IsBlackedByOther(const ::std::string& userId, const ::std::string& otheruid, bool& bBlacked, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__IsBlackedByOther_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(otheruid);
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
        __is->read(bBlacked);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::RemoveBatchContacts(const ::std::string& userId, const ::Ice::StringSeq& cids, ::Ice::StringSeq& retVect, ::Ice::Int& modifyCntTimes, ::Ice::Int& modifyGenCntTime, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__RemoveBatchContacts_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        if(cids.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&cids[0], &cids[0] + cids.size());
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
        __is->read(retVect);
        __is->read(modifyCntTimes);
        __is->read(modifyGenCntTime);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetUserDStatus(const ::std::string& userId, ::AliIMDBBase::SICEUserDStatusSeq& userDStatusList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetUserDStatus_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        ::AliIMDBBase::__read(__is, userDStatusList, ::AliIMDBBase::__U__SICEUserDStatusSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::AddUserDStatus(const ::std::string& userId, const ::std::string& userDStatus, ::Ice::Int& statusId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__AddUserDStatus_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(userDStatus);
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
        __is->read(statusId);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::RemoveUserDStatus(const ::std::string& userId, ::Ice::Int statusId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__RemoveUserDStatus_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(statusId);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetAllContactList(const ::std::string& uid, ::Ice::Int getFlag, ::AliIMDBBase::SICEContactInfoSeq& contactList, ::Ice::Int& contactTimes, ::Ice::Int& gencontacttimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetAllContactList_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(getFlag);
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
        ::AliIMDBBase::__read(__is, contactList, ::AliIMDBBase::__U__SICEContactInfoSeq());
        __is->read(contactTimes);
        __is->read(gencontacttimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetCntModifyList(::Ice::Int getFlag, const ::std::string& uid, const ::std::string& sMaxSeqId, ::AliIMDBBase::SICECntCidModPairSeq& cntList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetCntModifyList_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(getFlag);
        __os->write(uid);
        __os->write(sMaxSeqId);
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
        ::AliIMDBBase::__read(__is, cntList, ::AliIMDBBase::__U__SICECntCidModPairSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::AddGenContactFull(const ::AliIMDBBase::SICEGenContactFull& detail, ::std::string& retscid, ::std::string& retsmodseqid, ::Ice::Long& timeStamps, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__AddGenContactFull_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        detail.__write(__os);
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
        __is->read(retscid);
        __is->read(retsmodseqid);
        __is->read(timeStamps);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetContactDetail(const ::std::string& uid, const ::std::string& cid, ::AliIMDBBase::SICEGenContactFull& detail, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetContactDetail_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(cid);
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
        detail.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::DelGenContact(const ::std::string& uid, const ::std::string& cid, ::Ice::Long& contactTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__DelGenContact_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(cid);
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
        __is->read(contactTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::AddContact(const ::std::string& userId, const ::std::string& contactId, const ::std::string& nickName, ::Ice::Int groupId, ::Ice::Int status, const ::AliIMDBBase::SUserWebBasicProfile& cntInfo, ::Ice::Int& contactTimes, ::std::string& retcid, ::std::string& retmodseqid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__AddContact_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(contactId);
        __os->write(nickName);
        __os->write(groupId);
        __os->write(status);
        cntInfo.__write(__os);
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
        __is->read(contactTimes);
        __is->read(retcid);
        __is->read(retmodseqid);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::CheckUpgradeGenCnt(const ::std::string& uid, const ::std::string& cid, const ::std::string& contactId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__CheckUpgradeGenCnt_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(cid);
        __os->write(contactId);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::ModifyGenCntID(const ::std::string& uid, const ::std::string& cid, const ::std::string& contactId, ::std::string& modseqid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__ModifyGenCntID_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(cid);
        __os->write(contactId);
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
        __is->read(modseqid);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpgradeGenContact(const ::std::string& uid, const ::std::string& cid, const ::std::string& contactId, ::Ice::Long& cntstamp, ::Ice::Long& gencntstamp, ::std::string& modseqid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpgradeGenContact_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(cid);
        __os->write(contactId);
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
        __is->read(cntstamp);
        __is->read(gencntstamp);
        __is->read(modseqid);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetUpdatedUserInfo(const ::std::string& uid, const ::std::string& contactId, ::Ice::Long& cntstamp, ::Ice::Long& gencntstamp, ::std::string& retcid, ::std::string& modseqid, ::Ice::Long& groupid, ::std::string& nickname, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetUpdatedUserInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(contactId);
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
        __is->read(cntstamp);
        __is->read(gencntstamp);
        __is->read(retcid);
        __is->read(modseqid);
        __is->read(groupid);
        __is->read(nickname);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::ModifyContactDetail(const ::AliIMDBBase::SICEGenContactFull& detail, ::Ice::Long& gencntmodifyVersion, ::std::string& modseqid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__ModifyContactDetail_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        detail.__write(__os);
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
        __is->read(gencntmodifyVersion);
        __is->read(modseqid);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpdateContactGroupByCid(const ::std::string& userId, const ::std::string& cid, ::Ice::Int srcGroupId, ::Ice::Int dstGroupId, ::Ice::Int& contactTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpdateContactGroupByCid_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(cid);
        __os->write(srcGroupId);
        __os->write(dstGroupId);
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
        __is->read(contactTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpdateContactNickNameByCid(const ::std::string& userId, const ::std::string& cid, const ::std::string& nickName, ::Ice::Int& contactTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpdateContactNickNameByCid_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(cid);
        __os->write(nickName);
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
        __is->read(contactTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetCRMContactDetail(const ::std::string& userId, const ::std::string& cntid, ::AliIMDBBase::SICECRMContactDetail& cntDetail, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetCRMContactDetail_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(cntid);
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
        cntDetail.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetHardCodeIds(const ::std::string& uuid, ::Ice::Int& count, ::std::string& allids, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetHardCodeIds_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uuid);
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
        __is->read(count);
        __is->read(allids);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpdateHardCodeIds(const ::std::string& uuid, const ::std::string& id, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpdateHardCodeIds_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uuid);
        __os->write(id);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetCntOtherModifyList(const ::std::string& userId, const ::std::string& sMaxSeqId, ::AliIMDBBase::SICECntOtherModInfoSeq& cntList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetCntOtherModifyList_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(sMaxSeqId);
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
        ::AliIMDBBase::__read(__is, cntList, ::AliIMDBBase::__U__SICECntOtherModInfoSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetCntOtherModifyInfo(const ::std::string& userId, ::AliIMDBBase::SICECntOtherModInfo& cntOtherModInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetCntOtherModifyInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        cntOtherModInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetUserCRInfo(const ::std::string& uid, ::Ice::Int& crState, ::Ice::Int& begTime, ::Ice::Int& activeDegree, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetUserCRInfo_name, ::Ice::Normal, __context, __compress);
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
        __is->read(crState);
        __is->read(begTime);
        __is->read(activeDegree);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::SetUserCRInfo(const ::std::string& uid, ::Ice::Int crState, ::Ice::Int& begTime, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__SetUserCRInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(crState);
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
        __is->read(begTime);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetSmsUserInfoByUid(const ::std::string& userId, ::AliIMDBBase::SICESmsUserInfo& smsUserInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetSmsUserInfoByUid_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        smsUserInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetSmsUserMsgInfo(const ::std::string& userId, ::Ice::Int& todaySmsCount, ::Ice::Int& yesterdaySmsCount, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetSmsUserMsgInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        __is->read(todaySmsCount);
        __is->read(yesterdaySmsCount);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::DelOfflineMsg(const ::std::string& uid, const ::std::string& date, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__DelOfflineMsg_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(date);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::DelOfflineMsgEx(const ::std::string& uid, ::Ice::Int date, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__DelOfflineMsgEx_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(date);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::DelWapOfflineMsg(const ::std::string& uid, const ::std::string& date, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__DelWapOfflineMsg_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(date);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::ModifyCntMemo(const ::std::string& uid, const ::std::string& cntid, const ::std::string& memo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__ModifyCntMemo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(cntid);
        __os->write(memo);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetCntMemo(const ::std::string& uid, const ::std::string& cntid, ::std::string& memo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetCntMemo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(cntid);
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
        __is->read(memo);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetUserTribe(const ::std::string& userId, ::ALiIMDBTribe::STribeIdDbSeq& tribeIdList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetUserTribe_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        ::ALiIMDBTribe::__read(__is, tribeIdList, ::ALiIMDBTribe::__U__STribeIdDbSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetUserTribeConfig(const ::std::string& userId, ::Ice::Int& addVerify, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetUserTribeConfig_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        __is->read(addVerify);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpdateUserTribeConfig(const ::std::string& userId, ::Ice::Int addVerify, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpdateUserTribeConfig_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(addVerify);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetTribeOffMngMsg(::Ice::Int tribeId, const ::std::string& memberId, ::ALiIMDBTribe::STribeOfflineMsgSeq& offlineMsgList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetTribeOffMngMsg_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(memberId);
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
        ::ALiIMDBTribe::__read(__is, offlineMsgList, ::ALiIMDBTribe::__U__STribeOfflineMsgSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::DelTribeOffMngMsg(::Ice::Int tribeId, const ::std::string& memberId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__DelTribeOffMngMsg_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(tribeId);
        __os->write(memberId);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::ModifyPersonalShow(const ::std::string& uid, const ::std::string& newshow, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__ModifyPersonalShow_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(newshow);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetPersonalShow(const ::std::string& uid, ::std::string& show, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetPersonalShow_name, ::Ice::Normal, __context, __compress);
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
        __is->read(show);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetAllOnlineSmsUser(::Ice::StringSeq& userList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetAllOnlineSmsUser_name, ::Ice::Normal, __context, __compress);
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
        __is->read(userList);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetUserKeyWordDegree(const ::std::string& userId, ::std::string& keyword, ::Ice::Int& flag, ::Ice::Float& degree, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetUserKeyWordDegree_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        __is->read(keyword);
        __is->read(flag);
        __is->read(degree);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetUserValue(const ::std::string& userId, ::Ice::Int& uservalue, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetUserValue_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        __is->read(uservalue);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpdateUserMd5Password(const ::std::string& userId, const ::std::string& password, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpdateUserMd5Password_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::InsertYahooUser(const ::AliIMDBBase::SUdbUserInfo& userInfo, ::Ice::Int activeDegree, const ::AliIMDBBase::SICEGenContactFullSeq& contactList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__InsertYahooUser_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        userInfo.__write(__os);
        __os->write(activeDegree);
        if(contactList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &contactList[0], &contactList[0] + contactList.size(), ::AliIMDBBase::__U__SICEGenContactFullSeq());
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetContactDetailByUid(const ::std::string& uid, const ::std::string& cid, ::AliIMDBBase::SICEGenContactFull& detail, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetContactDetailByUid_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(cid);
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
        detail.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetChildTeamList(const ::std::string& parentId, ::AliIMDBBase::SChildUserInfoSeq& childTeamList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetChildTeamList_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(parentId);
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
        ::AliIMDBBase::__read(__is, childTeamList, ::AliIMDBBase::__U__SChildUserInfoSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetChildTeamList2(const ::std::string& parentId, ::AliIMDBBase::SChildUserInfoSeq2& childTeamList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetChildTeamList2_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(parentId);
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
        ::AliIMDBBase::__read(__is, childTeamList, ::AliIMDBBase::__U__SChildUserInfoSeq2());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetChildUserInfo(const ::std::string& childId, ::AliIMDBBase::SChildUserInfo& childInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetChildUserInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(childId);
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
        childInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetChildUserInfo2(const ::std::string& childId, ::AliIMDBBase::SChildUserInfo2& childInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetChildUserInfo2_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(childId);
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
        childInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetShareContactList(const ::std::string& uid, ::Ice::StringSeq& shareContactIdList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetShareContactList_name, ::Ice::Normal, __context, __compress);
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
        __is->read(shareContactIdList);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetContactShareInfo(const ::std::string& uid, const ::std::string& contactId, ::Ice::Int type, ::Ice::Int& value, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetContactShareInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(contactId);
        __os->write(type);
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
        __is->read(value);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::SetContactShareInfo(const ::std::string& uid, const ::std::string& contactId, ::Ice::Int type, ::Ice::Int value, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__SetContactShareInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(contactId);
        __os->write(type);
        __os->write(value);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetMultiAccountContactList(const ::std::string& uid, ::AliIMDBBase::SICEContactInfoSeq& contactIdList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetMultiAccountContactList_name, ::Ice::Normal, __context, __compress);
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
        ::AliIMDBBase::__read(__is, contactIdList, ::AliIMDBBase::__U__SICEContactInfoSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetMultiServiceList(const ::std::string& uid, ::Ice::IntSeq& ServiceList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetMultiServiceList_name, ::Ice::Normal, __context, __compress);
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
        __is->read(ServiceList);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetMultiBindToUser(const ::std::string& uid, ::std::string& bindToUser, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetMultiBindToUser_name, ::Ice::Normal, __context, __compress);
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
        __is->read(bindToUser);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetWebBinds(const ::std::string& uid, ::AliIMDBBase::SICEKvPairSeq& binds, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetWebBinds_name, ::Ice::Normal, __context, __compress);
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
        ::AliIMDBBase::__read(__is, binds, ::AliIMDBBase::__U__SICEKvPairSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::AddWebBind(const ::std::string& uid, const ::AliIMDBBase::SICEKvPair& bind, ::std::string& webmd5pw, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__AddWebBind_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        bind.__write(__os);
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
        __is->read(webmd5pw);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::ChangeWebBind(const ::std::string& uid, const ::AliIMDBBase::SICEKvPair& newbind, ::std::string& webmd5pw, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__ChangeWebBind_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        newbind.__write(__os);
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
        __is->read(webmd5pw);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::DelWebBind(const ::std::string& uid, const ::std::string& binduid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__DelWebBind_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(binduid);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getUserSession(const ::std::string& uid, ::AliIM::SIceSession& retsession, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getUserSession_name, ::Ice::Normal, __context, __compress);
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
        retsession.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::checkUserSession(const ::std::string& uid, const ::std::string& sessionNo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__checkUserSession_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(sessionNo);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::removeSession(const ::std::string& uid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__removeSession_name, ::Ice::Normal, __context, __compress);
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpdateSignature(const ::std::string& uid, const ::std::string& signature, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpdateSignature_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(signature);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::updateContactClientInfo(const ::std::string& uid, const ::std::string& cid, const ::std::string& data, ::Ice::Int& contactTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__updateContactClientInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(cid);
        __os->write(data);
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
        __is->read(contactTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getUserProfile(const ::std::string& uid, ::AliIMDBBase::SICEKVMap& profilemap, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getUserProfile_name, ::Ice::Normal, __context, __compress);
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
        ::AliIMDBBase::__read(__is, profilemap, ::AliIMDBBase::__U__SICEKVMap());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getPeerVerifyFlag(const ::std::string& uid, const ::std::string& cid, ::Ice::Int& flag, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getPeerVerifyFlag_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(cid);
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
        __is->read(flag);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getPeerVerifyFlagQuestion(const ::std::string& uid, const ::std::string& cid, ::Ice::Int& flag, ::std::string& question, ::std::string& answer, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getPeerVerifyFlagQuestion_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(cid);
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
        __is->read(flag);
        __is->read(question);
        __is->read(answer);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getNickName(const ::std::string& uid, ::std::string& nickname, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getNickName_name, ::Ice::Normal, __context, __compress);
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
        __is->read(nickname);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getFTServiceInfo(const ::std::string& senduid, const ::std::string& touid, ::std::string& srvIp, ::Ice::Short& srvPort, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getFTServiceInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(senduid);
        __os->write(touid);
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
        __is->read(srvIp);
        __is->read(srvPort);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getTietuServiceInfo(const ::std::string& senduid, ::Ice::Int& sessionSum, ::std::string& srvIp, ::Ice::Short& srvPort, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getTietuServiceInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(senduid);
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
        __is->read(sessionSum);
        __is->read(srvIp);
        __is->read(srvPort);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getFTSAddr(::Ice::Short type, const ::std::string& senduid, ::Ice::Long& ftsid, ::std::string& srvIp, ::Ice::Short& srvPort, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getFTSAddr_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(type);
        __os->write(senduid);
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
        __is->read(ftsid);
        __is->read(srvIp);
        __is->read(srvPort);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::registerWanghao(const ::std::string& longuid, const ::AliIMInterface::KVMAP& attrs, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__registerWanghao_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longuid);
        ::AliIMInterface::__write(__os, attrs, ::AliIMInterface::__U__KVMAP());
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::updateUserProfile(const ::std::string& longuid, const ::AliIMInterface::KVMAP& newattrs, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__updateUserProfile_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longuid);
        ::AliIMInterface::__write(__os, newattrs, ::AliIMInterface::__U__KVMAP());
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::loadSitePrefix(::AliIMDBBase::SImPrefixSeq& pv, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__loadSitePrefix_name, ::Ice::Normal, __context, __compress);
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
        ::AliIMDBBase::__read(__is, pv, ::AliIMDBBase::__U__SImPrefixSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::updateAepUserId(const ::std::string& longuid, const ::std::string& aepuserid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__updateAepUserId_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longuid);
        __os->write(aepuserid);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::updateVipflag(const ::std::string& uid, ::Ice::Int flag, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__updateVipflag_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(flag);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::checkWangHaoPwd(const ::std::string& longuid, bool btokenpw, const ::std::string& pw, ::std::string& retluid, ::std::string& retPwToken, ::std::string& retmd5passwd, ::Ice::Int& activeState, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__checkWangHaoPwd_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(longuid);
        __os->write(btokenpw);
        __os->write(pw);
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
        __is->read(retluid);
        __is->read(retPwToken);
        __is->read(retmd5passwd);
        __is->read(activeState);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::checkCanLogin(const ::std::string& uid, ::Ice::Int version, const ::std::string& extrainfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__checkCanLogin_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(version);
        __os->write(extrainfo);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::GetSIPSessionId(const ::std::string& uid, const ::std::string& appid, const ::std::string& type, ::std::string& sessionId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__GetSIPSessionId_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(appid);
        __os->write(type);
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
        __is->read(sessionId);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::CheckGsContact(const ::std::string& uid, const ::std::string& contactid, ::Ice::Int& flag, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__CheckGsContact_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(contactid);
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
        __is->read(flag);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpdateSmsAuthCode(const ::std::string& uid, const ::std::string& phoneNo, const ::std::string& code, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpdateSmsAuthCode_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(phoneNo);
        __os->write(code);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::CheckSmsAuthCode(const ::std::string& uid, const ::std::string& phoneNo, const ::std::string& code, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__CheckSmsAuthCode_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(phoneNo);
        __os->write(code);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::UpdateUserValueBySmsAuth(const ::std::string& uid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__UpdateUserValueBySmsAuth_name, ::Ice::Normal, __context, __compress);
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::CheckSmsAuthStatus(const ::std::string& uid, ::Ice::Int& status, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__CheckSmsAuthStatus_name, ::Ice::Normal, __context, __compress);
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
        __is->read(status);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::CheckUserTokenExtra(const ::std::string& userId, const ::std::string& passwd, ::std::string& lid, ::std::string& retuidtokenpw, ::std::string& retmd5passwd, ::Ice::Int& activeStat, ::Ice::Int& webdata, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__CheckUserTokenExtra_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(passwd);
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
        __is->read(lid);
        __is->read(retuidtokenpw);
        __is->read(retmd5passwd);
        __is->read(activeStat);
        __is->read(webdata);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::CheckUserWebPasswdExtra(const ::std::string& userId, const ::std::string& passwd, ::std::string& lid, ::std::string& retuidtokenpw, ::std::string& retmd5passwd, ::Ice::Int& activeStat, ::Ice::Int& webdata, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__CheckUserWebPasswdExtra_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(passwd);
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
        __is->read(lid);
        __is->read(retuidtokenpw);
        __is->read(retmd5passwd);
        __is->read(activeStat);
        __is->read(webdata);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getESShuntStatus(const ::std::string& uid, ::std::string& shunt, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getESShuntStatus_name, ::Ice::Normal, __context, __compress);
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
        __is->read(shunt);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::setESShuntStatus(const ::std::string& uid, const ::std::string& shunt, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__setESShuntStatus_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(shunt);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getMaxESReceptNum(const ::std::string& uid, ::Ice::Int groupId, ::AliIMDBBase::SICEReceptNumSeq& eserviceList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getMaxESReceptNum_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(groupId);
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
        ::AliIMDBBase::__read(__is, eserviceList, ::AliIMDBBase::__U__SICEReceptNumSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::setMaxESReceptNum(const ::std::string& uid, ::Ice::Int groupId, const ::AliIMDBBase::SICEReceptNumSeq& eserviceList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__setMaxESReceptNum_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(groupId);
        if(eserviceList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &eserviceList[0], &eserviceList[0] + eserviceList.size(), ::AliIMDBBase::__U__SICEReceptNumSeq());
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getESPriority(const ::std::string& uid, ::Ice::Int groupId, ::AliIMDBBase::SICEReceptPrioritySeq& eserviceList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getESPriority_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(groupId);
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
        ::AliIMDBBase::__read(__is, eserviceList, ::AliIMDBBase::__U__SICEReceptPrioritySeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::setESPriority(const ::std::string& uid, ::Ice::Int groupId, const ::AliIMDBBase::SICEReceptPrioritySeq& eserviceList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__setESPriority_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(groupId);
        if(eserviceList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &eserviceList[0], &eserviceList[0] + eserviceList.size(), ::AliIMDBBase::__U__SICEReceptPrioritySeq());
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getESRecvOffMsg(const ::std::string& uid, ::Ice::Int groupId, ::AliIMDBBase::SICERecvOffMsgSeq& eserviceList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getESRecvOffMsg_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(groupId);
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
        ::AliIMDBBase::__read(__is, eserviceList, ::AliIMDBBase::__U__SICERecvOffMsgSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::setESRecvOffMsg(const ::std::string& uid, ::Ice::Int groupId, const ::AliIMDBBase::SICERecvOffMsgSeq& eserviceList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__setESRecvOffMsg_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(groupId);
        if(eserviceList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &eserviceList[0], &eserviceList[0] + eserviceList.size(), ::AliIMDBBase::__U__SICERecvOffMsgSeq());
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getESGroupList(const ::std::string& uid, ::Ice::IntSeq& groupList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getESGroupList_name, ::Ice::Normal, __context, __compress);
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
        __is->read(groupList);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::insertESGroupInfo(const ::std::string& uid, const ::AliIMDBBase::SICEESGroupInfo& groupInfo, ::Ice::Int& groupId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__insertESGroupInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        groupInfo.__write(__os);
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
        __is->read(groupId);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::updateESGroupInfo(const ::std::string& uid, const ::AliIMDBBase::SICEESGroupInfo& group, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__updateESGroupInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        group.__write(__os);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::delESGroup(const ::std::string& uid, ::Ice::Int groupid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__delESGroup_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(groupid);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getESGroupInfo(const ::std::string& uid, ::AliIMDBBase::SICEESGroupInfoSeq& groupList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getESGroupInfo_name, ::Ice::Normal, __context, __compress);
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
        ::AliIMDBBase::__read(__is, groupList, ::AliIMDBBase::__U__SICEESGroupInfoSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getESGroupInfoByID(const ::std::string& uid, ::Ice::Int groupId, ::AliIMDBBase::SICEESGroupInfo& groupInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getESGroupInfoByID_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(groupId);
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
        groupInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getESUserFunc(const ::std::string& uid, const ::std::string& childid, ::std::string& userflag, ::Ice::Int& groupId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getESUserFunc_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(childid);
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
        __is->read(userflag);
        __is->read(groupId);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getESUnJoinGroup(const ::std::string& uid, ::Ice::StringSeq& eserviceList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getESUnJoinGroup_name, ::Ice::Normal, __context, __compress);
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
        __is->read(eserviceList);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::checkESRole(const ::std::string& uid, ::Ice::Int& groupId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__checkESRole_name, ::Ice::Normal, __context, __compress);
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
        __is->read(groupId);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::CheckWebWWPasswd(const ::std::string& userId, const ::std::string& passwd, ::std::string& lid, ::std::string& retuidtokenpw, ::std::string& retmd5passwd, ::Ice::Int& activeStat, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__CheckWebWWPasswd_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(passwd);
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
        __is->read(lid);
        __is->read(retuidtokenpw);
        __is->read(retmd5passwd);
        __is->read(activeStat);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getESExpandArea(const ::std::string& uid, ::AliIMDBBase::SICEExpandAreaSeq& areaInfos, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getESExpandArea_name, ::Ice::Normal, __context, __compress);
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
        ::AliIMDBBase::__read(__is, areaInfos, ::AliIMDBBase::__U__SICEExpandAreaSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getESExpandAreaById(const ::std::string& uid, ::Ice::Int id, ::AliIMDBBase::SICEExpandArea& areaInfos, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getESExpandAreaById_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(id);
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
        areaInfos.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::addESExpandArea(const ::std::string& uid, const ::AliIMDBBase::SICEExpandArea& areaInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__addESExpandArea_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        areaInfo.__write(__os);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::updateESExpandArea(const ::std::string& uid, const ::AliIMDBBase::SICEExpandArea& areaInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__updateESExpandArea_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        areaInfo.__write(__os);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::delESExpandArea(const ::std::string& uid, ::Ice::Int id, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__delESExpandArea_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(id);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::setESEval(const ::std::string& uid, const ::std::string& evalcontent, const ::std::string& welcome, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__setESEval_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(evalcontent);
        __os->write(welcome);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getESEval(const ::std::string& uid, ::std::string& evalcontent, ::std::string& welcome, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getESEval_name, ::Ice::Normal, __context, __compress);
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
        __is->read(evalcontent);
        __is->read(welcome);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::sendESEvalResult(const ::std::string& uid, const ::std::string& buyerid, ::Ice::Int& evalId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__sendESEvalResult_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(buyerid);
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
        __is->read(evalId);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::setESEvalResult(const ::std::string& uid, const ::std::string& buyerid, ::Ice::Int evalId, const ::std::string& evalresult, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__setESEvalResult_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(buyerid);
        __os->write(evalId);
        __os->write(evalresult);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getESEvalResult(const ::std::string& uid, const ::std::string& buyerid, ::Ice::Int evalId, ::std::string& evalresult, ::std::string& gmtcreate, ::std::string& gmtmodify, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getESEvalResult_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(buyerid);
        __os->write(evalId);
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
        __is->read(evalresult);
        __is->read(gmtcreate);
        __is->read(gmtmodify);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getESEvalResultToday(const ::std::string& uid, ::AliIMDBBase::SICEESEvalResultSeq& evalInfos, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getESEvalResultToday_name, ::Ice::Normal, __context, __compress);
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
        ::AliIMDBBase::__read(__is, evalInfos, ::AliIMDBBase::__U__SICEESEvalResultSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getESEvalResultHistory(const ::std::string& uid, const ::std::string& querytime, ::AliIMDBBase::SICEESEvalResultSeq& evalInfos, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getESEvalResultHistory_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(querytime);
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
        ::AliIMDBBase::__read(__is, evalInfos, ::AliIMDBBase::__U__SICEESEvalResultSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getESEvalResultHistorybypage(const ::std::string& uid, const ::std::string& childid, const ::std::string& begindate, const ::std::string& enddate, ::Ice::Int pageno, ::Ice::Int pagesize, ::Ice::Int& pagecount, ::AliIMDBBase::SICEESEvalResultExSeq& evalInfos, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getESEvalResultHistorybypage_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(childid);
        __os->write(begindate);
        __os->write(enddate);
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
        __is->read(pagecount);
        ::AliIMDBBase::__read(__is, evalInfos, ::AliIMDBBase::__U__SICEESEvalResultExSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getLastLoginTime(const ::Ice::StringSeq& loginids, ::Ice::StringSeq& loginTimes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getLastLoginTime_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(loginids.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&loginids[0], &loginids[0] + loginids.size());
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
        __is->read(loginTimes);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getChildShuntInfos(const ::std::string& uid, ::AliIMDBBase::SChildUserInfoSeq& childInfos, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getChildShuntInfos_name, ::Ice::Normal, __context, __compress);
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
        ::AliIMDBBase::__read(__is, childInfos, ::AliIMDBBase::__U__SChildUserInfoSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::setChildShuntInfos(const ::std::string& uid, const ::AliIMDBBase::SChildUserInfoSeq& childinfos, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__setChildShuntInfos_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        if(childinfos.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::AliIMDBBase::__write(__os, &childinfos[0], &childinfos[0] + childinfos.size(), ::AliIMDBBase::__U__SChildUserInfoSeq());
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
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getAgentChild(const ::std::string& uid, ::std::string& agentId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getAgentChild_name, ::Ice::Normal, __context, __compress);
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
        __is->read(agentId);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::setAgentChild(const ::std::string& uid, const ::std::string& agentId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__setAgentChild_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(agentId);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getAgentList(const ::std::string& uid, ::Ice::StringSeq& agentIds, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getAgentList_name, ::Ice::Normal, __context, __compress);
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
        __is->read(agentIds);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getB2BChildTeamList(const ::std::string& parentId, ::AliIMDBBase::SB2BChildUserInfoSeq& childTeamList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getB2BChildTeamList_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(parentId);
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
        ::AliIMDBBase::__read(__is, childTeamList, ::AliIMDBBase::__U__SB2BChildUserInfoSeq());
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getB2BChildInfo(const ::std::string& parentId, const ::std::string& childid, ::AliIMDBBase::SB2BChildUserInfo& childInfo, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getB2BChildInfo_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(parentId);
        __os->write(childid);
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
        childInfo.__read(__is);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::getB2BChildParentId(const ::std::string& childId, ::std::string& fid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__getB2BChildParentId_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(childId);
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
        __is->read(fid);
        __is->read(__ret);
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::AliIMDBBase::IMDBProxyMgr::addB2BChild(const ::std::string& fid, const ::std::string& childId, const ::std::string& userflag, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__addB2BChild_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(fid);
        __os->write(childId);
        __os->write(userflag);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::updateB2BChild(const ::std::string& fid, const ::std::string& childId, const ::std::string& userflag, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__updateB2BChild_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(fid);
        __os->write(childId);
        __os->write(userflag);
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
IceDelegateM::AliIMDBBase::IMDBProxyMgr::deleteB2BChild(const ::std::string& fid, const ::std::string& childId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__connection.get(), __reference.get(), __AliIMDBBase__IMDBProxyMgr__deleteB2BChild_name, ::Ice::Normal, __context, __compress);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(fid);
        __os->write(childId);
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
IceDelegateD::AliIMDBBase::IMDBProxyMgr::sayhello(const ::std::string&, ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::CheckUserToken(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::CheckTmpSession(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::CheckUserWebPasswd(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::CheckUserPasswd(const ::std::string&, bool, const ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::CheckUserWebToken(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetAtmLongid(const ::std::string&, ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::AddUser60(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetWebMemberPWInfo(const ::std::string&, ::AliIMDBBase::SMemberPWInfo&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetWebMemberPWInfoEx(const ::std::string&, ::AliIMDBBase::SMemberPWInfoEx&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetUserWebBasicProfile(const ::std::string&, ::AliIMDBBase::SUserWebBasicProfile&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::CheckCanAddContact(const ::std::string&, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::QueryMatchedUserIds(const ::std::string&, const ::std::string&, ::AliIMDBBase::SMatchedUserIdInfoSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpdateContactWebInfo(const ::std::string&, const ::std::string&, const ::AliIMDBBase::SUserWebBasicProfile&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::DelTaobaoUser(const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::DelAnyUser(const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::AddUserKeyWord(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpdateUserKeyWord(const ::std::string&, const ::std::string&, ::Ice::Int, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetUserKeyWord(const ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::QueryUserIdsByKeyWord(const ::std::string&, ::AliIMDBBase::SMatchedUserIdInfoSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetBatchMemberInfo(const ::Ice::StringSeq&, ::AliIMDBBase::SICEMemberInfoSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetAllVersion(::AliIMDBBase::SICEVersionSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetAllSysMsg(::AliIMDBBase::SICESysMessageSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetAllExSysMsg(::AliIMDBBase::SExICESysMessageSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetUserInfo(const ::std::string&, ::AliIMDBBase::SICEUserInfo&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetUserInfo2(const ::std::string&, ::AliIMDBBase::SICEUserInfo2&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetUserInfoEx(const ::std::string&, ::AliIMDBBase::SICEUserInfoEx&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetUserInfoNew(const ::std::string&, ::AliIMDBBase::SICEUserInfoNew&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetUserInfo2New(const ::std::string&, ::AliIMDBBase::SICEUserInfo2New&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetUserInfoExNew(const ::std::string&, ::AliIMDBBase::SICEUserInfoExNew&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetUserInfoExNew2(const ::std::string&, ::AliIMDBBase::SICEUserInfoExNew2&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetUserInfoExNew3(const ::std::string&, ::AliIMDBBase::SICEUserInfoExNew3&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetUserInfoExNew4(const ::std::string&, ::AliIMDBBase::SICEUserInfoExNew4&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetUserVerifyInfo(const ::std::string&, ::Ice::Byte&, ::Ice::Byte&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetUserVerifyInfoEx(const ::std::string&, ::Ice::Byte&, ::Ice::Byte&, ::Ice::Byte&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetUserVerifyInfoQuestion(const ::std::string&, ::Ice::Byte&, ::Ice::Byte&, ::Ice::Byte&, ::std::string&, ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetGroupList(const ::std::string&, ::AliIMDBBase::SICEGroupInfoSeq&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetGroupListEx(const ::std::string&, ::AliIMDBBase::SICEGroupInfoExSeq&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetContactList(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEContactInfoSeq&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetBlackList(const ::std::string&, ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetReverseBlackList(const ::std::string&, ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetOfflineMsg(const ::std::string&, ::AliIMDBBase::SICEOffLineMessegeSeq&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetOfflineMsgEx(const ::std::string&, ::AliIMDBBase::SICEOffLineMessegeExSeq&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetOfflineMsgCount(const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetEnetOfflineMsgNum(const ::std::string&, const ::std::string&, const ::Ice::IntSeq&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetContactInfo(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEContactInfo&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetOfflineMsgNum(const ::std::string&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetToolProfiles(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetToolProfilesEx(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEToolProfileSeq&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetSysMsg(::Ice::Int, ::AliIMDBBase::SICESysMessage&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::AddUser(const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::AddGroup(const ::std::string&, const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::AddGroupEx(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::AddBlackList(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::AddOfflineMsg(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::AddExpriteTimeOfflineMsg(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::AddOfflineMsgNoSMS(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::AddOfflineMsgEx(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Long, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpdateUserLogin(const ::std::string&, ::Ice::Int, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpdateUserLoginEx(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpdateUserLoginDataInfo(const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpdateUserLoginDataInfoEx(const ::std::string&, ::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpdateUserSysMsgId(const ::std::string&, ::Ice::Int, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpdateUserDataInfo(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Float, ::Ice::Float, ::Ice::Int, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpdateUserDataInfo2(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Float, ::Ice::Float, ::Ice::Int, ::Ice::Int, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpdateUserDataInfo3(const ::std::string&, const ::AliIMDBBase::RIGHTTABLE&, ::Ice::Int, ::Ice::Int, ::Ice::Float, ::Ice::Float, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpdateUserVerifySet(const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpdateUserVerifySetEx(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpdateUserVerifySetQuestion(const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpdateGroup(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::MoveGroup(const ::std::string&, ::Ice::Long, ::Ice::Long, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpdateContactNickName(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpdateContactGroup(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpdateContactStatus(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpdateNotifyMessage(::Ice::Int, ::Ice::Int, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpdateToolProfiles(const ::std::string&, ::Ice::Int, const ::Ice::StringSeq&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpdateToolProfilesEx(const ::std::string&, const ::AliIMDBBase::SICEToolProfileSeq&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::RemoveGroup(const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::RemoveContact(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::RemoveInverfiedContact(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::RemoveBlackList(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::IsBlackedByOther(const ::std::string&, const ::std::string&, bool&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::RemoveBatchContacts(const ::std::string&, const ::Ice::StringSeq&, ::Ice::StringSeq&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetUserDStatus(const ::std::string&, ::AliIMDBBase::SICEUserDStatusSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::AddUserDStatus(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::RemoveUserDStatus(const ::std::string&, ::Ice::Int, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetAllContactList(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEContactInfoSeq&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetCntModifyList(::Ice::Int, const ::std::string&, const ::std::string&, ::AliIMDBBase::SICECntCidModPairSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::AddGenContactFull(const ::AliIMDBBase::SICEGenContactFull&, ::std::string&, ::std::string&, ::Ice::Long&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetContactDetail(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEGenContactFull&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::DelGenContact(const ::std::string&, const ::std::string&, ::Ice::Long&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::AddContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::AliIMDBBase::SUserWebBasicProfile&, ::Ice::Int&, ::std::string&, ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::CheckUpgradeGenCnt(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::ModifyGenCntID(const ::std::string&, const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpgradeGenContact(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long&, ::Ice::Long&, ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetUpdatedUserInfo(const ::std::string&, const ::std::string&, ::Ice::Long&, ::Ice::Long&, ::std::string&, ::std::string&, ::Ice::Long&, ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::ModifyContactDetail(const ::AliIMDBBase::SICEGenContactFull&, ::Ice::Long&, ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpdateContactGroupByCid(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpdateContactNickNameByCid(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetCRMContactDetail(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICECRMContactDetail&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetHardCodeIds(const ::std::string&, ::Ice::Int&, ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpdateHardCodeIds(const ::std::string&, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetCntOtherModifyList(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICECntOtherModInfoSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetCntOtherModifyInfo(const ::std::string&, ::AliIMDBBase::SICECntOtherModInfo&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetUserCRInfo(const ::std::string&, ::Ice::Int&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::SetUserCRInfo(const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetSmsUserInfoByUid(const ::std::string&, ::AliIMDBBase::SICESmsUserInfo&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetSmsUserMsgInfo(const ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::DelOfflineMsg(const ::std::string&, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::DelOfflineMsgEx(const ::std::string&, ::Ice::Int, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::DelWapOfflineMsg(const ::std::string&, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::ModifyCntMemo(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetCntMemo(const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetUserTribe(const ::std::string&, ::ALiIMDBTribe::STribeIdDbSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetUserTribeConfig(const ::std::string&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpdateUserTribeConfig(const ::std::string&, ::Ice::Int, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetTribeOffMngMsg(::Ice::Int, const ::std::string&, ::ALiIMDBTribe::STribeOfflineMsgSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::DelTribeOffMngMsg(::Ice::Int, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::ModifyPersonalShow(const ::std::string&, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetPersonalShow(const ::std::string&, ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetAllOnlineSmsUser(::Ice::StringSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetUserKeyWordDegree(const ::std::string&, ::std::string&, ::Ice::Int&, ::Ice::Float&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetUserValue(const ::std::string&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpdateUserMd5Password(const ::std::string&, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::InsertYahooUser(const ::AliIMDBBase::SUdbUserInfo&, ::Ice::Int, const ::AliIMDBBase::SICEGenContactFullSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetContactDetailByUid(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEGenContactFull&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetChildTeamList(const ::std::string&, ::AliIMDBBase::SChildUserInfoSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetChildTeamList2(const ::std::string&, ::AliIMDBBase::SChildUserInfoSeq2&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetChildUserInfo(const ::std::string&, ::AliIMDBBase::SChildUserInfo&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetChildUserInfo2(const ::std::string&, ::AliIMDBBase::SChildUserInfo2&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetShareContactList(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetContactShareInfo(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::SetContactShareInfo(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetMultiAccountContactList(const ::std::string&, ::AliIMDBBase::SICEContactInfoSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetMultiServiceList(const ::std::string&, ::Ice::IntSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetMultiBindToUser(const ::std::string&, ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetWebBinds(const ::std::string&, ::AliIMDBBase::SICEKvPairSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::AddWebBind(const ::std::string&, const ::AliIMDBBase::SICEKvPair&, ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::ChangeWebBind(const ::std::string&, const ::AliIMDBBase::SICEKvPair&, ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::DelWebBind(const ::std::string&, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getUserSession(const ::std::string&, ::AliIM::SIceSession&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::checkUserSession(const ::std::string&, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::removeSession(const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpdateSignature(const ::std::string&, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::updateContactClientInfo(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getUserProfile(const ::std::string&, ::AliIMDBBase::SICEKVMap&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getPeerVerifyFlag(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getPeerVerifyFlagQuestion(const ::std::string&, const ::std::string&, ::Ice::Int&, ::std::string&, ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getNickName(const ::std::string&, ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getFTServiceInfo(const ::std::string&, const ::std::string&, ::std::string&, ::Ice::Short&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getTietuServiceInfo(const ::std::string&, ::Ice::Int&, ::std::string&, ::Ice::Short&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getFTSAddr(::Ice::Short, const ::std::string&, ::Ice::Long&, ::std::string&, ::Ice::Short&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::registerWanghao(const ::std::string&, const ::AliIMInterface::KVMAP&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::updateUserProfile(const ::std::string&, const ::AliIMInterface::KVMAP&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::loadSitePrefix(::AliIMDBBase::SImPrefixSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::updateAepUserId(const ::std::string&, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::updateVipflag(const ::std::string&, ::Ice::Int, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::checkWangHaoPwd(const ::std::string&, bool, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::checkCanLogin(const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::GetSIPSessionId(const ::std::string&, const ::std::string&, const ::std::string&, ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::CheckGsContact(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpdateSmsAuthCode(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::CheckSmsAuthCode(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::UpdateUserValueBySmsAuth(const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::CheckSmsAuthStatus(const ::std::string&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::CheckUserTokenExtra(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::CheckUserWebPasswdExtra(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getESShuntStatus(const ::std::string&, ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::setESShuntStatus(const ::std::string&, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getMaxESReceptNum(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEReceptNumSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::setMaxESReceptNum(const ::std::string&, ::Ice::Int, const ::AliIMDBBase::SICEReceptNumSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getESPriority(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEReceptPrioritySeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::setESPriority(const ::std::string&, ::Ice::Int, const ::AliIMDBBase::SICEReceptPrioritySeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getESRecvOffMsg(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICERecvOffMsgSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::setESRecvOffMsg(const ::std::string&, ::Ice::Int, const ::AliIMDBBase::SICERecvOffMsgSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getESGroupList(const ::std::string&, ::Ice::IntSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::insertESGroupInfo(const ::std::string&, const ::AliIMDBBase::SICEESGroupInfo&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::updateESGroupInfo(const ::std::string&, const ::AliIMDBBase::SICEESGroupInfo&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::delESGroup(const ::std::string&, ::Ice::Int, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getESGroupInfo(const ::std::string&, ::AliIMDBBase::SICEESGroupInfoSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getESGroupInfoByID(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEESGroupInfo&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getESUserFunc(const ::std::string&, const ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getESUnJoinGroup(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::checkESRole(const ::std::string&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::CheckWebWWPasswd(const ::std::string&, const ::std::string&, ::std::string&, ::std::string&, ::std::string&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getESExpandArea(const ::std::string&, ::AliIMDBBase::SICEExpandAreaSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getESExpandAreaById(const ::std::string&, ::Ice::Int, ::AliIMDBBase::SICEExpandArea&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::addESExpandArea(const ::std::string&, const ::AliIMDBBase::SICEExpandArea&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::updateESExpandArea(const ::std::string&, const ::AliIMDBBase::SICEExpandArea&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::delESExpandArea(const ::std::string&, ::Ice::Int, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::setESEval(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getESEval(const ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::sendESEvalResult(const ::std::string&, const ::std::string&, ::Ice::Int&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::setESEvalResult(const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getESEvalResult(const ::std::string&, const ::std::string&, ::Ice::Int, ::std::string&, ::std::string&, ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getESEvalResultToday(const ::std::string&, ::AliIMDBBase::SICEESEvalResultSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getESEvalResultHistory(const ::std::string&, const ::std::string&, ::AliIMDBBase::SICEESEvalResultSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getESEvalResultHistorybypage(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Int&, ::AliIMDBBase::SICEESEvalResultExSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getLastLoginTime(const ::Ice::StringSeq&, ::Ice::StringSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getChildShuntInfos(const ::std::string&, ::AliIMDBBase::SChildUserInfoSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::setChildShuntInfos(const ::std::string&, const ::AliIMDBBase::SChildUserInfoSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getAgentChild(const ::std::string&, ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::setAgentChild(const ::std::string&, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getAgentList(const ::std::string&, ::Ice::StringSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getB2BChildTeamList(const ::std::string&, ::AliIMDBBase::SB2BChildUserInfoSeq&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getB2BChildInfo(const ::std::string&, const ::std::string&, ::AliIMDBBase::SB2BChildUserInfo&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::getB2BChildParentId(const ::std::string&, ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::addB2BChild(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::updateB2BChild(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::AliIMDBBase::IMDBProxyMgr::deleteB2BChild(const ::std::string&, const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::ObjectPtr
AliIMDBBase::IMDBProxyMgr::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __AliIMDBBase__IMDBProxyMgr_ids[2] =
{
    "::AliIMDBBase::IMDBProxyMgr",
    "::Ice::Object"
};

bool
AliIMDBBase::IMDBProxyMgr::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__AliIMDBBase__IMDBProxyMgr_ids, __AliIMDBBase__IMDBProxyMgr_ids + 2, _s);
}

::std::vector< ::std::string>
AliIMDBBase::IMDBProxyMgr::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__AliIMDBBase__IMDBProxyMgr_ids[0], &__AliIMDBBase__IMDBProxyMgr_ids[2]);
}

const ::std::string&
AliIMDBBase::IMDBProxyMgr::ice_id(const ::Ice::Current&) const
{
    return __AliIMDBBase__IMDBProxyMgr_ids[0];
}

const ::std::string&
AliIMDBBase::IMDBProxyMgr::ice_staticId()
{
    return __AliIMDBBase__IMDBProxyMgr_ids[0];
}

::IceInternal::DispatchStatus
AliIMDBBase::IMDBProxyMgr::___sayhello(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_sayhelloPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_sayhello(__inS);
    try
    {
        sayhello_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___CheckUserToken(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string passwd;
    __is->read(userId);
    __is->read(passwd);
    ::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserTokenPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserToken(__inS);
    try
    {
        CheckUserToken_async(__cb, userId, passwd, __current);
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
AliIMDBBase::IMDBProxyMgr::___CheckTmpSession(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string passwd;
    __is->read(userId);
    __is->read(passwd);
    ::AliIMDBBase::AMD_IMDBProxyMgr_CheckTmpSessionPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckTmpSession(__inS);
    try
    {
        CheckTmpSession_async(__cb, userId, passwd, __current);
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
AliIMDBBase::IMDBProxyMgr::___CheckUserWebPasswd(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string passwd;
    __is->read(userId);
    __is->read(passwd);
    ::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebPasswdPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebPasswd(__inS);
    try
    {
        CheckUserWebPasswd_async(__cb, userId, passwd, __current);
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
AliIMDBBase::IMDBProxyMgr::___CheckUserPasswd(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    bool btokenpw;
    ::std::string passwd;
    __is->read(userId);
    __is->read(btokenpw);
    __is->read(passwd);
    ::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserPasswdPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserPasswd(__inS);
    try
    {
        CheckUserPasswd_async(__cb, userId, btokenpw, passwd, __current);
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
AliIMDBBase::IMDBProxyMgr::___CheckUserWebToken(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string token;
    __is->read(userId);
    __is->read(token);
    ::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebTokenPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebToken(__inS);
    try
    {
        CheckUserWebToken_async(__cb, userId, token, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetAtmLongid(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetAtmLongidPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAtmLongid(__inS);
    try
    {
        GetAtmLongid_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___AddUser60(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string md5passwd;
    ::std::string tokenpw;
    ::Ice::Int languageid;
    __is->read(userId);
    __is->read(md5passwd);
    __is->read(tokenpw);
    __is->read(languageid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_AddUser60Ptr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddUser60(__inS);
    try
    {
        AddUser60_async(__cb, userId, md5passwd, tokenpw, languageid, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetWebMemberPWInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetWebMemberPWInfoPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetWebMemberPWInfo(__inS);
    try
    {
        GetWebMemberPWInfo_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetWebMemberPWInfoEx(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetWebMemberPWInfoExPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetWebMemberPWInfoEx(__inS);
    try
    {
        GetWebMemberPWInfoEx_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetUserWebBasicProfile(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserWebBasicProfilePtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserWebBasicProfile(__inS);
    try
    {
        GetUserWebBasicProfile_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___CheckCanAddContact(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string buddyId;
    __is->read(userId);
    __is->read(buddyId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_CheckCanAddContactPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckCanAddContact(__inS);
    try
    {
        CheckCanAddContact_async(__cb, userId, buddyId, __current);
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
AliIMDBBase::IMDBProxyMgr::___QueryMatchedUserIds(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string finduid;
    ::std::string shortId;
    __is->read(finduid);
    __is->read(shortId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_QueryMatchedUserIdsPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_QueryMatchedUserIds(__inS);
    try
    {
        QueryMatchedUserIds_async(__cb, finduid, shortId, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpdateContactWebInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string buddyId;
    ::AliIMDBBase::SUserWebBasicProfile cntWebInfo;
    __is->read(userId);
    __is->read(buddyId);
    cntWebInfo.__read(__is);
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactWebInfoPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactWebInfo(__inS);
    try
    {
        UpdateContactWebInfo_async(__cb, userId, buddyId, cntWebInfo, __current);
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
AliIMDBBase::IMDBProxyMgr::___DelTaobaoUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string webId;
    __is->read(webId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_DelTaobaoUserPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelTaobaoUser(__inS);
    try
    {
        DelTaobaoUser_async(__cb, webId, __current);
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
AliIMDBBase::IMDBProxyMgr::___DelAnyUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string imuserId;
    __is->read(imuserId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_DelAnyUserPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelAnyUser(__inS);
    try
    {
        DelAnyUser_async(__cb, imuserId, __current);
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
AliIMDBBase::IMDBProxyMgr::___AddUserKeyWord(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string keyword;
    ::Ice::Int flag;
    __is->read(userId);
    __is->read(keyword);
    __is->read(flag);
    ::AliIMDBBase::AMD_IMDBProxyMgr_AddUserKeyWordPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddUserKeyWord(__inS);
    try
    {
        AddUserKeyWord_async(__cb, userId, keyword, flag, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpdateUserKeyWord(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string keyword;
    ::Ice::Int flag;
    __is->read(userId);
    __is->read(keyword);
    __is->read(flag);
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserKeyWordPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserKeyWord(__inS);
    try
    {
        UpdateUserKeyWord_async(__cb, userId, keyword, flag, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetUserKeyWord(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserKeyWordPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserKeyWord(__inS);
    try
    {
        GetUserKeyWord_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___QueryUserIdsByKeyWord(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string keyword;
    __is->read(keyword);
    ::AliIMDBBase::AMD_IMDBProxyMgr_QueryUserIdsByKeyWordPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_QueryUserIdsByKeyWord(__inS);
    try
    {
        QueryUserIdsByKeyWord_async(__cb, keyword, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetBatchMemberInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::StringSeq userIds;
    __is->read(userIds);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetBatchMemberInfoPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetBatchMemberInfo(__inS);
    try
    {
        GetBatchMemberInfo_async(__cb, userIds, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetAllVersion(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetAllVersionPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllVersion(__inS);
    try
    {
        GetAllVersion_async(__cb, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetAllSysMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetAllSysMsgPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllSysMsg(__inS);
    try
    {
        GetAllSysMsg_async(__cb, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetAllExSysMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetAllExSysMsgPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllExSysMsg(__inS);
    try
    {
        GetAllExSysMsg_async(__cb, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetUserInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfo(__inS);
    try
    {
        GetUserInfo_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetUserInfo2(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfo2Ptr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfo2(__inS);
    try
    {
        GetUserInfo2_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetUserInfoEx(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoEx(__inS);
    try
    {
        GetUserInfoEx_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetUserInfoNew(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoNewPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoNew(__inS);
    try
    {
        GetUserInfoNew_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetUserInfo2New(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfo2NewPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfo2New(__inS);
    try
    {
        GetUserInfo2New_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetUserInfoExNew(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNewPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew(__inS);
    try
    {
        GetUserInfoExNew_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetUserInfoExNew2(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew2Ptr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew2(__inS);
    try
    {
        GetUserInfoExNew2_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetUserInfoExNew3(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew3Ptr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew3(__inS);
    try
    {
        GetUserInfoExNew3_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetUserInfoExNew4(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew4Ptr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserInfoExNew4(__inS);
    try
    {
        GetUserInfoExNew4_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetUserVerifyInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfoPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfo(__inS);
    try
    {
        GetUserVerifyInfo_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetUserVerifyInfoEx(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfoExPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfoEx(__inS);
    try
    {
        GetUserVerifyInfoEx_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetUserVerifyInfoQuestion(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfoQuestionPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserVerifyInfoQuestion(__inS);
    try
    {
        GetUserVerifyInfoQuestion_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetGroupList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetGroupListPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetGroupList(__inS);
    try
    {
        GetGroupList_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetGroupListEx(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetGroupListExPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetGroupListEx(__inS);
    try
    {
        GetGroupListEx_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetContactList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::Ice::Int getFlag;
    __is->read(userId);
    __is->read(getFlag);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetContactListPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactList(__inS);
    try
    {
        GetContactList_async(__cb, userId, getFlag, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetBlackList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetBlackListPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetBlackList(__inS);
    try
    {
        GetBlackList_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetReverseBlackList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetReverseBlackListPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetReverseBlackList(__inS);
    try
    {
        GetReverseBlackList_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetOfflineMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsg(__inS);
    try
    {
        GetOfflineMsg_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetOfflineMsgEx(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgExPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgEx(__inS);
    try
    {
        GetOfflineMsgEx_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetOfflineMsgCount(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    __is->read(uid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgCountPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgCount(__inS);
    try
    {
        GetOfflineMsgCount_async(__cb, uid, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetEnetOfflineMsgNum(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string toId;
    ::std::string fromId;
    ::Ice::IntSeq types;
    __is->read(toId);
    __is->read(fromId);
    __is->read(types);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetEnetOfflineMsgNumPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetEnetOfflineMsgNum(__inS);
    try
    {
        GetEnetOfflineMsgNum_async(__cb, toId, fromId, types, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetContactInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string contactId;
    __is->read(userId);
    __is->read(contactId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetContactInfoPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactInfo(__inS);
    try
    {
        GetContactInfo_async(__cb, userId, contactId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetOfflineMsgNum(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgNumPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetOfflineMsgNum(__inS);
    try
    {
        GetOfflineMsgNum_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetToolProfiles(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::Ice::Int type;
    ::Ice::Int nowTimes;
    __is->read(userId);
    __is->read(type);
    __is->read(nowTimes);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetToolProfilesPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetToolProfiles(__inS);
    try
    {
        GetToolProfiles_async(__cb, userId, type, nowTimes, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetToolProfilesEx(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::Ice::Int nowTimes;
    __is->read(userId);
    __is->read(nowTimes);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetToolProfilesExPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetToolProfilesEx(__inS);
    try
    {
        GetToolProfilesEx_async(__cb, userId, nowTimes, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetSysMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Int sysId;
    __is->read(sysId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetSysMsgPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetSysMsg(__inS);
    try
    {
        GetSysMsg_async(__cb, sysId, __current);
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
AliIMDBBase::IMDBProxyMgr::___AddUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_AddUserPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddUser(__inS);
    try
    {
        AddUser_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___AddGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string groupName;
    __is->read(userId);
    __is->read(groupName);
    ::AliIMDBBase::AMD_IMDBProxyMgr_AddGroupPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddGroup(__inS);
    try
    {
        AddGroup_async(__cb, userId, groupName, __current);
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
AliIMDBBase::IMDBProxyMgr::___AddGroupEx(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string groupName;
    ::Ice::Int parentId;
    __is->read(userId);
    __is->read(groupName);
    __is->read(parentId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_AddGroupExPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddGroupEx(__inS);
    try
    {
        AddGroupEx_async(__cb, userId, groupName, parentId, __current);
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
AliIMDBBase::IMDBProxyMgr::___AddBlackList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string blackId;
    __is->read(userId);
    __is->read(blackId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_AddBlackListPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddBlackList(__inS);
    try
    {
        AddBlackList_async(__cb, userId, blackId, __current);
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
AliIMDBBase::IMDBProxyMgr::___AddOfflineMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string fromId;
    ::std::string toId;
    ::Ice::Int type;
    ::std::string content;
    __is->read(fromId);
    __is->read(toId);
    __is->read(type);
    __is->read(content);
    ::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsgPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsg(__inS);
    try
    {
        AddOfflineMsg_async(__cb, fromId, toId, type, content, __current);
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
AliIMDBBase::IMDBProxyMgr::___AddExpriteTimeOfflineMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string fromId;
    ::std::string toId;
    ::Ice::Int type;
    ::std::string content;
    ::std::string expireTime;
    __is->read(fromId);
    __is->read(toId);
    __is->read(type);
    __is->read(content);
    __is->read(expireTime);
    ::AliIMDBBase::AMD_IMDBProxyMgr_AddExpriteTimeOfflineMsgPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddExpriteTimeOfflineMsg(__inS);
    try
    {
        AddExpriteTimeOfflineMsg_async(__cb, fromId, toId, type, content, expireTime, __current);
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
AliIMDBBase::IMDBProxyMgr::___AddOfflineMsgNoSMS(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string fromId;
    ::std::string toId;
    ::Ice::Int type;
    ::std::string content;
    __is->read(fromId);
    __is->read(toId);
    __is->read(type);
    __is->read(content);
    ::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsgNoSMSPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsgNoSMS(__inS);
    try
    {
        AddOfflineMsgNoSMS_async(__cb, fromId, toId, type, content, __current);
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
AliIMDBBase::IMDBProxyMgr::___AddOfflineMsgEx(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string fromId;
    ::std::string toId;
    ::Ice::Int type;
    ::std::string content;
    ::Ice::Long uniqueMsgTime;
    __is->read(fromId);
    __is->read(toId);
    __is->read(type);
    __is->read(content);
    __is->read(uniqueMsgTime);
    ::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsgExPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddOfflineMsgEx(__inS);
    try
    {
        AddOfflineMsgEx_async(__cb, fromId, toId, type, content, uniqueMsgTime, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpdateUserLogin(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::Ice::Int sysMsgId;
    __is->read(userId);
    __is->read(sysMsgId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLogin(__inS);
    try
    {
        UpdateUserLogin_async(__cb, userId, sysMsgId, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpdateUserLoginEx(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::Ice::Int sysMsgId;
    ::std::string loginIp;
    __is->read(userId);
    __is->read(sysMsgId);
    __is->read(loginIp);
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginExPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginEx(__inS);
    try
    {
        UpdateUserLoginEx_async(__cb, userId, sysMsgId, loginIp, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpdateUserLoginDataInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::Ice::Int sysMsgId;
    ::std::string loginIp;
    ::Ice::Int onlineTimes;
    ::Ice::Int lastLoginTime;
    __is->read(userId);
    __is->read(sysMsgId);
    __is->read(loginIp);
    __is->read(onlineTimes);
    __is->read(lastLoginTime);
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginDataInfoPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginDataInfo(__inS);
    try
    {
        UpdateUserLoginDataInfo_async(__cb, userId, sysMsgId, loginIp, onlineTimes, lastLoginTime, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpdateUserLoginDataInfoEx(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::Ice::Int sysMsgId;
    ::std::string loginIp;
    ::Ice::Int onlineTimes;
    ::Ice::Int lastLoginTime;
    ::Ice::Int isNeedToUpdate;
    __is->read(userId);
    __is->read(sysMsgId);
    __is->read(loginIp);
    __is->read(onlineTimes);
    __is->read(lastLoginTime);
    __is->read(isNeedToUpdate);
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginDataInfoExPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserLoginDataInfoEx(__inS);
    try
    {
        UpdateUserLoginDataInfoEx_async(__cb, userId, sysMsgId, loginIp, onlineTimes, lastLoginTime, isNeedToUpdate, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpdateUserSysMsgId(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::Ice::Int sysMsgId;
    __is->read(userId);
    __is->read(sysMsgId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserSysMsgIdPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserSysMsgId(__inS);
    try
    {
        UpdateUserSysMsgId_async(__cb, userId, sysMsgId, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpdateUserDataInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::Ice::Int strangerMsgCount;
    ::Ice::Int onlineTimes;
    ::Ice::Int addContactCount;
    ::Ice::Int activeDegree;
    ::Ice::Float rewardActDegree;
    ::Ice::Float onlineActDegree;
    ::Ice::Int addTribeCount;
    __is->read(userId);
    __is->read(strangerMsgCount);
    __is->read(onlineTimes);
    __is->read(addContactCount);
    __is->read(activeDegree);
    __is->read(rewardActDegree);
    __is->read(onlineActDegree);
    __is->read(addTribeCount);
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfoPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfo(__inS);
    try
    {
        UpdateUserDataInfo_async(__cb, userId, strangerMsgCount, onlineTimes, addContactCount, activeDegree, rewardActDegree, onlineActDegree, addTribeCount, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpdateUserDataInfo2(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::Ice::Int strangerMsgCount;
    ::Ice::Int onlineTimes;
    ::Ice::Int addContactCount;
    ::Ice::Int activeDegree;
    ::Ice::Float rewardActDegree;
    ::Ice::Float onlineActDegree;
    ::Ice::Int addTribeCount;
    ::Ice::Int reqAddContactCount;
    __is->read(userId);
    __is->read(strangerMsgCount);
    __is->read(onlineTimes);
    __is->read(addContactCount);
    __is->read(activeDegree);
    __is->read(rewardActDegree);
    __is->read(onlineActDegree);
    __is->read(addTribeCount);
    __is->read(reqAddContactCount);
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfo2Ptr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfo2(__inS);
    try
    {
        UpdateUserDataInfo2_async(__cb, userId, strangerMsgCount, onlineTimes, addContactCount, activeDegree, rewardActDegree, onlineActDegree, addTribeCount, reqAddContactCount, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpdateUserDataInfo3(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::AliIMDBBase::RIGHTTABLE rightMap;
    ::Ice::Int onlineTimes;
    ::Ice::Int activeDegree;
    ::Ice::Float rewardActDegree;
    ::Ice::Float onlineActDegree;
    __is->read(userId);
    ::AliIMDBBase::__read(__is, rightMap, ::AliIMDBBase::__U__RIGHTTABLE());
    __is->read(onlineTimes);
    __is->read(activeDegree);
    __is->read(rewardActDegree);
    __is->read(onlineActDegree);
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfo3Ptr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserDataInfo3(__inS);
    try
    {
        UpdateUserDataInfo3_async(__cb, userId, rightMap, onlineTimes, activeDegree, rewardActDegree, onlineActDegree, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpdateUserVerifySet(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::Ice::Int addContactVerify;
    ::Ice::Int sendMsgVerify;
    __is->read(userId);
    __is->read(addContactVerify);
    __is->read(sendMsgVerify);
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySetPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySet(__inS);
    try
    {
        UpdateUserVerifySet_async(__cb, userId, addContactVerify, sendMsgVerify, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpdateUserVerifySetEx(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::Ice::Int addContactVerify;
    ::Ice::Int sendMsgVerify;
    ::Ice::Int enbleSearchFlag;
    __is->read(userId);
    __is->read(addContactVerify);
    __is->read(sendMsgVerify);
    __is->read(enbleSearchFlag);
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySetExPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySetEx(__inS);
    try
    {
        UpdateUserVerifySetEx_async(__cb, userId, addContactVerify, sendMsgVerify, enbleSearchFlag, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpdateUserVerifySetQuestion(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::Ice::Int addContactVerify;
    ::Ice::Int sendMsgVerify;
    ::Ice::Int enbleSearchFlag;
    ::std::string question;
    ::std::string answer;
    __is->read(userId);
    __is->read(addContactVerify);
    __is->read(sendMsgVerify);
    __is->read(enbleSearchFlag);
    __is->read(question);
    __is->read(answer);
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySetQuestionPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserVerifySetQuestion(__inS);
    try
    {
        UpdateUserVerifySetQuestion_async(__cb, userId, addContactVerify, sendMsgVerify, enbleSearchFlag, question, answer, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpdateGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string groupName;
    ::Ice::Int groupId;
    __is->read(userId);
    __is->read(groupName);
    __is->read(groupId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateGroupPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateGroup(__inS);
    try
    {
        UpdateGroup_async(__cb, userId, groupName, groupId, __current);
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
AliIMDBBase::IMDBProxyMgr::___MoveGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::Ice::Long groupId;
    ::Ice::Long newparentgid;
    __is->read(userId);
    __is->read(groupId);
    __is->read(newparentgid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_MoveGroupPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_MoveGroup(__inS);
    try
    {
        MoveGroup_async(__cb, userId, groupId, newparentgid, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpdateContactNickName(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string contactId;
    ::std::string nickName;
    __is->read(userId);
    __is->read(contactId);
    __is->read(nickName);
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactNickNamePtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactNickName(__inS);
    try
    {
        UpdateContactNickName_async(__cb, userId, contactId, nickName, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpdateContactGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string contactId;
    ::Ice::Int srcGroupId;
    ::Ice::Int dstGroupId;
    __is->read(userId);
    __is->read(contactId);
    __is->read(srcGroupId);
    __is->read(dstGroupId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactGroupPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactGroup(__inS);
    try
    {
        UpdateContactGroup_async(__cb, userId, contactId, srcGroupId, dstGroupId, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpdateContactStatus(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string contactId;
    ::Ice::Int status;
    __is->read(userId);
    __is->read(contactId);
    __is->read(status);
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactStatusPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactStatus(__inS);
    try
    {
        UpdateContactStatus_async(__cb, userId, contactId, status, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpdateNotifyMessage(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Int msgId;
    ::Ice::Int status;
    __is->read(msgId);
    __is->read(status);
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateNotifyMessagePtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateNotifyMessage(__inS);
    try
    {
        UpdateNotifyMessage_async(__cb, msgId, status, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpdateToolProfiles(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::Ice::Int type;
    ::Ice::StringSeq toolProfilsList;
    __is->read(userId);
    __is->read(type);
    __is->read(toolProfilsList);
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateToolProfilesPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateToolProfiles(__inS);
    try
    {
        UpdateToolProfiles_async(__cb, userId, type, toolProfilsList, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpdateToolProfilesEx(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::AliIMDBBase::SICEToolProfileSeq toolProfilsList;
    __is->read(userId);
    ::AliIMDBBase::__read(__is, toolProfilsList, ::AliIMDBBase::__U__SICEToolProfileSeq());
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateToolProfilesExPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateToolProfilesEx(__inS);
    try
    {
        UpdateToolProfilesEx_async(__cb, userId, toolProfilsList, __current);
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
AliIMDBBase::IMDBProxyMgr::___RemoveGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::Ice::Int groupId;
    __is->read(userId);
    __is->read(groupId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_RemoveGroupPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveGroup(__inS);
    try
    {
        RemoveGroup_async(__cb, userId, groupId, __current);
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
AliIMDBBase::IMDBProxyMgr::___RemoveContact(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string contactId;
    __is->read(userId);
    __is->read(contactId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_RemoveContactPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveContact(__inS);
    try
    {
        RemoveContact_async(__cb, userId, contactId, __current);
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
AliIMDBBase::IMDBProxyMgr::___RemoveInverfiedContact(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string contactId;
    __is->read(userId);
    __is->read(contactId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_RemoveInverfiedContactPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveInverfiedContact(__inS);
    try
    {
        RemoveInverfiedContact_async(__cb, userId, contactId, __current);
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
AliIMDBBase::IMDBProxyMgr::___RemoveBlackList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string blackId;
    __is->read(userId);
    __is->read(blackId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_RemoveBlackListPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveBlackList(__inS);
    try
    {
        RemoveBlackList_async(__cb, userId, blackId, __current);
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
AliIMDBBase::IMDBProxyMgr::___IsBlackedByOther(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string otheruid;
    __is->read(userId);
    __is->read(otheruid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_IsBlackedByOtherPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_IsBlackedByOther(__inS);
    try
    {
        IsBlackedByOther_async(__cb, userId, otheruid, __current);
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
AliIMDBBase::IMDBProxyMgr::___RemoveBatchContacts(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::Ice::StringSeq cids;
    __is->read(userId);
    __is->read(cids);
    ::AliIMDBBase::AMD_IMDBProxyMgr_RemoveBatchContactsPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveBatchContacts(__inS);
    try
    {
        RemoveBatchContacts_async(__cb, userId, cids, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetUserDStatus(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserDStatusPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserDStatus(__inS);
    try
    {
        GetUserDStatus_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___AddUserDStatus(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string userDStatus;
    __is->read(userId);
    __is->read(userDStatus);
    ::AliIMDBBase::AMD_IMDBProxyMgr_AddUserDStatusPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddUserDStatus(__inS);
    try
    {
        AddUserDStatus_async(__cb, userId, userDStatus, __current);
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
AliIMDBBase::IMDBProxyMgr::___RemoveUserDStatus(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::Ice::Int statusId;
    __is->read(userId);
    __is->read(statusId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_RemoveUserDStatusPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_RemoveUserDStatus(__inS);
    try
    {
        RemoveUserDStatus_async(__cb, userId, statusId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetAllContactList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::Ice::Int getFlag;
    __is->read(uid);
    __is->read(getFlag);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetAllContactListPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllContactList(__inS);
    try
    {
        GetAllContactList_async(__cb, uid, getFlag, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetCntModifyList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Int getFlag;
    ::std::string uid;
    ::std::string sMaxSeqId;
    __is->read(getFlag);
    __is->read(uid);
    __is->read(sMaxSeqId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetCntModifyListPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCntModifyList(__inS);
    try
    {
        GetCntModifyList_async(__cb, getFlag, uid, sMaxSeqId, __current);
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
AliIMDBBase::IMDBProxyMgr::___AddGenContactFull(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::AliIMDBBase::SICEGenContactFull detail;
    detail.__read(__is);
    ::AliIMDBBase::AMD_IMDBProxyMgr_AddGenContactFullPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddGenContactFull(__inS);
    try
    {
        AddGenContactFull_async(__cb, detail, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetContactDetail(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string cid;
    __is->read(uid);
    __is->read(cid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetContactDetailPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactDetail(__inS);
    try
    {
        GetContactDetail_async(__cb, uid, cid, __current);
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
AliIMDBBase::IMDBProxyMgr::___DelGenContact(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string cid;
    __is->read(uid);
    __is->read(cid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_DelGenContactPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelGenContact(__inS);
    try
    {
        DelGenContact_async(__cb, uid, cid, __current);
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
AliIMDBBase::IMDBProxyMgr::___AddContact(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string contactId;
    ::std::string nickName;
    ::Ice::Int groupId;
    ::Ice::Int status;
    ::AliIMDBBase::SUserWebBasicProfile cntInfo;
    __is->read(userId);
    __is->read(contactId);
    __is->read(nickName);
    __is->read(groupId);
    __is->read(status);
    cntInfo.__read(__is);
    ::AliIMDBBase::AMD_IMDBProxyMgr_AddContactPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddContact(__inS);
    try
    {
        AddContact_async(__cb, userId, contactId, nickName, groupId, status, cntInfo, __current);
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
AliIMDBBase::IMDBProxyMgr::___CheckUpgradeGenCnt(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string cid;
    ::std::string contactId;
    __is->read(uid);
    __is->read(cid);
    __is->read(contactId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_CheckUpgradeGenCntPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUpgradeGenCnt(__inS);
    try
    {
        CheckUpgradeGenCnt_async(__cb, uid, cid, contactId, __current);
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
AliIMDBBase::IMDBProxyMgr::___ModifyGenCntID(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string cid;
    ::std::string contactId;
    __is->read(uid);
    __is->read(cid);
    __is->read(contactId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_ModifyGenCntIDPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ModifyGenCntID(__inS);
    try
    {
        ModifyGenCntID_async(__cb, uid, cid, contactId, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpgradeGenContact(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string cid;
    ::std::string contactId;
    __is->read(uid);
    __is->read(cid);
    __is->read(contactId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpgradeGenContactPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpgradeGenContact(__inS);
    try
    {
        UpgradeGenContact_async(__cb, uid, cid, contactId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetUpdatedUserInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string contactId;
    __is->read(uid);
    __is->read(contactId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetUpdatedUserInfoPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUpdatedUserInfo(__inS);
    try
    {
        GetUpdatedUserInfo_async(__cb, uid, contactId, __current);
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
AliIMDBBase::IMDBProxyMgr::___ModifyContactDetail(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::AliIMDBBase::SICEGenContactFull detail;
    detail.__read(__is);
    ::AliIMDBBase::AMD_IMDBProxyMgr_ModifyContactDetailPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ModifyContactDetail(__inS);
    try
    {
        ModifyContactDetail_async(__cb, detail, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpdateContactGroupByCid(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string cid;
    ::Ice::Int srcGroupId;
    ::Ice::Int dstGroupId;
    __is->read(userId);
    __is->read(cid);
    __is->read(srcGroupId);
    __is->read(dstGroupId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactGroupByCidPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactGroupByCid(__inS);
    try
    {
        UpdateContactGroupByCid_async(__cb, userId, cid, srcGroupId, dstGroupId, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpdateContactNickNameByCid(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string cid;
    ::std::string nickName;
    __is->read(userId);
    __is->read(cid);
    __is->read(nickName);
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactNickNameByCidPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateContactNickNameByCid(__inS);
    try
    {
        UpdateContactNickNameByCid_async(__cb, userId, cid, nickName, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetCRMContactDetail(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string cntid;
    __is->read(userId);
    __is->read(cntid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetCRMContactDetailPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCRMContactDetail(__inS);
    try
    {
        GetCRMContactDetail_async(__cb, userId, cntid, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetHardCodeIds(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uuid;
    __is->read(uuid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetHardCodeIdsPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetHardCodeIds(__inS);
    try
    {
        GetHardCodeIds_async(__cb, uuid, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpdateHardCodeIds(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uuid;
    ::std::string id;
    __is->read(uuid);
    __is->read(id);
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateHardCodeIdsPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateHardCodeIds(__inS);
    try
    {
        UpdateHardCodeIds_async(__cb, uuid, id, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetCntOtherModifyList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string sMaxSeqId;
    __is->read(userId);
    __is->read(sMaxSeqId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetCntOtherModifyListPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCntOtherModifyList(__inS);
    try
    {
        GetCntOtherModifyList_async(__cb, userId, sMaxSeqId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetCntOtherModifyInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetCntOtherModifyInfoPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCntOtherModifyInfo(__inS);
    try
    {
        GetCntOtherModifyInfo_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetUserCRInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    __is->read(uid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserCRInfoPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserCRInfo(__inS);
    try
    {
        GetUserCRInfo_async(__cb, uid, __current);
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
AliIMDBBase::IMDBProxyMgr::___SetUserCRInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::Ice::Int crState;
    __is->read(uid);
    __is->read(crState);
    ::AliIMDBBase::AMD_IMDBProxyMgr_SetUserCRInfoPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_SetUserCRInfo(__inS);
    try
    {
        SetUserCRInfo_async(__cb, uid, crState, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetSmsUserInfoByUid(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetSmsUserInfoByUidPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetSmsUserInfoByUid(__inS);
    try
    {
        GetSmsUserInfoByUid_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetSmsUserMsgInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetSmsUserMsgInfoPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetSmsUserMsgInfo(__inS);
    try
    {
        GetSmsUserMsgInfo_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___DelOfflineMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string date;
    __is->read(uid);
    __is->read(date);
    ::AliIMDBBase::AMD_IMDBProxyMgr_DelOfflineMsgPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelOfflineMsg(__inS);
    try
    {
        DelOfflineMsg_async(__cb, uid, date, __current);
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
AliIMDBBase::IMDBProxyMgr::___DelOfflineMsgEx(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::Ice::Int date;
    __is->read(uid);
    __is->read(date);
    ::AliIMDBBase::AMD_IMDBProxyMgr_DelOfflineMsgExPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelOfflineMsgEx(__inS);
    try
    {
        DelOfflineMsgEx_async(__cb, uid, date, __current);
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
AliIMDBBase::IMDBProxyMgr::___DelWapOfflineMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string date;
    __is->read(uid);
    __is->read(date);
    ::AliIMDBBase::AMD_IMDBProxyMgr_DelWapOfflineMsgPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelWapOfflineMsg(__inS);
    try
    {
        DelWapOfflineMsg_async(__cb, uid, date, __current);
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
AliIMDBBase::IMDBProxyMgr::___ModifyCntMemo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string cntid;
    ::std::string memo;
    __is->read(uid);
    __is->read(cntid);
    __is->read(memo);
    ::AliIMDBBase::AMD_IMDBProxyMgr_ModifyCntMemoPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ModifyCntMemo(__inS);
    try
    {
        ModifyCntMemo_async(__cb, uid, cntid, memo, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetCntMemo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string cntid;
    __is->read(uid);
    __is->read(cntid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetCntMemoPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetCntMemo(__inS);
    try
    {
        GetCntMemo_async(__cb, uid, cntid, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetUserTribe(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserTribePtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserTribe(__inS);
    try
    {
        GetUserTribe_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetUserTribeConfig(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserTribeConfigPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserTribeConfig(__inS);
    try
    {
        GetUserTribeConfig_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpdateUserTribeConfig(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::Ice::Int addVerify;
    __is->read(userId);
    __is->read(addVerify);
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserTribeConfigPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserTribeConfig(__inS);
    try
    {
        UpdateUserTribeConfig_async(__cb, userId, addVerify, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetTribeOffMngMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Int tribeId;
    ::std::string memberId;
    __is->read(tribeId);
    __is->read(memberId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetTribeOffMngMsgPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetTribeOffMngMsg(__inS);
    try
    {
        GetTribeOffMngMsg_async(__cb, tribeId, memberId, __current);
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
AliIMDBBase::IMDBProxyMgr::___DelTribeOffMngMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Int tribeId;
    ::std::string memberId;
    __is->read(tribeId);
    __is->read(memberId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_DelTribeOffMngMsgPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelTribeOffMngMsg(__inS);
    try
    {
        DelTribeOffMngMsg_async(__cb, tribeId, memberId, __current);
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
AliIMDBBase::IMDBProxyMgr::___ModifyPersonalShow(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string newshow;
    __is->read(uid);
    __is->read(newshow);
    ::AliIMDBBase::AMD_IMDBProxyMgr_ModifyPersonalShowPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ModifyPersonalShow(__inS);
    try
    {
        ModifyPersonalShow_async(__cb, uid, newshow, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetPersonalShow(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    __is->read(uid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetPersonalShowPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetPersonalShow(__inS);
    try
    {
        GetPersonalShow_async(__cb, uid, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetAllOnlineSmsUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetAllOnlineSmsUserPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetAllOnlineSmsUser(__inS);
    try
    {
        GetAllOnlineSmsUser_async(__cb, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetUserKeyWordDegree(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserKeyWordDegreePtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserKeyWordDegree(__inS);
    try
    {
        GetUserKeyWordDegree_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetUserValue(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    __is->read(userId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetUserValuePtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetUserValue(__inS);
    try
    {
        GetUserValue_async(__cb, userId, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpdateUserMd5Password(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string password;
    __is->read(userId);
    __is->read(password);
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserMd5PasswordPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserMd5Password(__inS);
    try
    {
        UpdateUserMd5Password_async(__cb, userId, password, __current);
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
AliIMDBBase::IMDBProxyMgr::___InsertYahooUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::AliIMDBBase::SUdbUserInfo userInfo;
    ::Ice::Int activeDegree;
    ::AliIMDBBase::SICEGenContactFullSeq contactList;
    userInfo.__read(__is);
    __is->read(activeDegree);
    ::AliIMDBBase::__read(__is, contactList, ::AliIMDBBase::__U__SICEGenContactFullSeq());
    ::AliIMDBBase::AMD_IMDBProxyMgr_InsertYahooUserPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_InsertYahooUser(__inS);
    try
    {
        InsertYahooUser_async(__cb, userInfo, activeDegree, contactList, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetContactDetailByUid(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string cid;
    __is->read(uid);
    __is->read(cid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetContactDetailByUidPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactDetailByUid(__inS);
    try
    {
        GetContactDetailByUid_async(__cb, uid, cid, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetChildTeamList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string parentId;
    __is->read(parentId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetChildTeamListPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetChildTeamList(__inS);
    try
    {
        GetChildTeamList_async(__cb, parentId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetChildTeamList2(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string parentId;
    __is->read(parentId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetChildTeamList2Ptr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetChildTeamList2(__inS);
    try
    {
        GetChildTeamList2_async(__cb, parentId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetChildUserInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string childId;
    __is->read(childId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetChildUserInfoPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetChildUserInfo(__inS);
    try
    {
        GetChildUserInfo_async(__cb, childId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetChildUserInfo2(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string childId;
    __is->read(childId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetChildUserInfo2Ptr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetChildUserInfo2(__inS);
    try
    {
        GetChildUserInfo2_async(__cb, childId, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetShareContactList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    __is->read(uid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetShareContactListPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetShareContactList(__inS);
    try
    {
        GetShareContactList_async(__cb, uid, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetContactShareInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string contactId;
    ::Ice::Int type;
    __is->read(uid);
    __is->read(contactId);
    __is->read(type);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetContactShareInfoPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetContactShareInfo(__inS);
    try
    {
        GetContactShareInfo_async(__cb, uid, contactId, type, __current);
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
AliIMDBBase::IMDBProxyMgr::___SetContactShareInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string contactId;
    ::Ice::Int type;
    ::Ice::Int value;
    __is->read(uid);
    __is->read(contactId);
    __is->read(type);
    __is->read(value);
    ::AliIMDBBase::AMD_IMDBProxyMgr_SetContactShareInfoPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_SetContactShareInfo(__inS);
    try
    {
        SetContactShareInfo_async(__cb, uid, contactId, type, value, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetMultiAccountContactList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    __is->read(uid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiAccountContactListPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiAccountContactList(__inS);
    try
    {
        GetMultiAccountContactList_async(__cb, uid, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetMultiServiceList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    __is->read(uid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiServiceListPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiServiceList(__inS);
    try
    {
        GetMultiServiceList_async(__cb, uid, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetMultiBindToUser(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    __is->read(uid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiBindToUserPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetMultiBindToUser(__inS);
    try
    {
        GetMultiBindToUser_async(__cb, uid, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetWebBinds(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    __is->read(uid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetWebBindsPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetWebBinds(__inS);
    try
    {
        GetWebBinds_async(__cb, uid, __current);
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
AliIMDBBase::IMDBProxyMgr::___AddWebBind(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::AliIMDBBase::SICEKvPair bind;
    __is->read(uid);
    bind.__read(__is);
    ::AliIMDBBase::AMD_IMDBProxyMgr_AddWebBindPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_AddWebBind(__inS);
    try
    {
        AddWebBind_async(__cb, uid, bind, __current);
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
AliIMDBBase::IMDBProxyMgr::___ChangeWebBind(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::AliIMDBBase::SICEKvPair newbind;
    __is->read(uid);
    newbind.__read(__is);
    ::AliIMDBBase::AMD_IMDBProxyMgr_ChangeWebBindPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_ChangeWebBind(__inS);
    try
    {
        ChangeWebBind_async(__cb, uid, newbind, __current);
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
AliIMDBBase::IMDBProxyMgr::___DelWebBind(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string binduid;
    __is->read(uid);
    __is->read(binduid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_DelWebBindPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_DelWebBind(__inS);
    try
    {
        DelWebBind_async(__cb, uid, binduid, __current);
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
AliIMDBBase::IMDBProxyMgr::___getUserSession(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    __is->read(uid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getUserSessionPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getUserSession(__inS);
    try
    {
        getUserSession_async(__cb, uid, __current);
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
AliIMDBBase::IMDBProxyMgr::___checkUserSession(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string sessionNo;
    __is->read(uid);
    __is->read(sessionNo);
    ::AliIMDBBase::AMD_IMDBProxyMgr_checkUserSessionPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_checkUserSession(__inS);
    try
    {
        checkUserSession_async(__cb, uid, sessionNo, __current);
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
AliIMDBBase::IMDBProxyMgr::___removeSession(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    __is->read(uid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_removeSessionPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_removeSession(__inS);
    try
    {
        removeSession_async(__cb, uid, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpdateSignature(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string signature;
    __is->read(uid);
    __is->read(signature);
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateSignaturePtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateSignature(__inS);
    try
    {
        UpdateSignature_async(__cb, uid, signature, __current);
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
AliIMDBBase::IMDBProxyMgr::___updateContactClientInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string cid;
    ::std::string data;
    __is->read(uid);
    __is->read(cid);
    __is->read(data);
    ::AliIMDBBase::AMD_IMDBProxyMgr_updateContactClientInfoPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateContactClientInfo(__inS);
    try
    {
        updateContactClientInfo_async(__cb, uid, cid, data, __current);
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
AliIMDBBase::IMDBProxyMgr::___getUserProfile(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    __is->read(uid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getUserProfilePtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getUserProfile(__inS);
    try
    {
        getUserProfile_async(__cb, uid, __current);
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
AliIMDBBase::IMDBProxyMgr::___getPeerVerifyFlag(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string cid;
    __is->read(uid);
    __is->read(cid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getPeerVerifyFlagPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getPeerVerifyFlag(__inS);
    try
    {
        getPeerVerifyFlag_async(__cb, uid, cid, __current);
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
AliIMDBBase::IMDBProxyMgr::___getPeerVerifyFlagQuestion(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string cid;
    __is->read(uid);
    __is->read(cid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getPeerVerifyFlagQuestionPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getPeerVerifyFlagQuestion(__inS);
    try
    {
        getPeerVerifyFlagQuestion_async(__cb, uid, cid, __current);
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
AliIMDBBase::IMDBProxyMgr::___getNickName(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    __is->read(uid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getNickNamePtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getNickName(__inS);
    try
    {
        getNickName_async(__cb, uid, __current);
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
AliIMDBBase::IMDBProxyMgr::___getFTServiceInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string senduid;
    ::std::string touid;
    __is->read(senduid);
    __is->read(touid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getFTServiceInfoPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getFTServiceInfo(__inS);
    try
    {
        getFTServiceInfo_async(__cb, senduid, touid, __current);
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
AliIMDBBase::IMDBProxyMgr::___getTietuServiceInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string senduid;
    __is->read(senduid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getTietuServiceInfoPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getTietuServiceInfo(__inS);
    try
    {
        getTietuServiceInfo_async(__cb, senduid, __current);
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
AliIMDBBase::IMDBProxyMgr::___getFTSAddr(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Short type;
    ::std::string senduid;
    __is->read(type);
    __is->read(senduid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getFTSAddrPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getFTSAddr(__inS);
    try
    {
        getFTSAddr_async(__cb, type, senduid, __current);
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
AliIMDBBase::IMDBProxyMgr::___registerWanghao(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string longuid;
    ::AliIMInterface::KVMAP attrs;
    __is->read(longuid);
    ::AliIMInterface::__read(__is, attrs, ::AliIMInterface::__U__KVMAP());
    ::AliIMDBBase::AMD_IMDBProxyMgr_registerWanghaoPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_registerWanghao(__inS);
    try
    {
        registerWanghao_async(__cb, longuid, attrs, __current);
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
AliIMDBBase::IMDBProxyMgr::___updateUserProfile(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string longuid;
    ::AliIMInterface::KVMAP newattrs;
    __is->read(longuid);
    ::AliIMInterface::__read(__is, newattrs, ::AliIMInterface::__U__KVMAP());
    ::AliIMDBBase::AMD_IMDBProxyMgr_updateUserProfilePtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateUserProfile(__inS);
    try
    {
        updateUserProfile_async(__cb, longuid, newattrs, __current);
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
AliIMDBBase::IMDBProxyMgr::___loadSitePrefix(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::AliIMDBBase::AMD_IMDBProxyMgr_loadSitePrefixPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_loadSitePrefix(__inS);
    try
    {
        loadSitePrefix_async(__cb, __current);
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
AliIMDBBase::IMDBProxyMgr::___updateAepUserId(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string longuid;
    ::std::string aepuserid;
    __is->read(longuid);
    __is->read(aepuserid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_updateAepUserIdPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateAepUserId(__inS);
    try
    {
        updateAepUserId_async(__cb, longuid, aepuserid, __current);
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
AliIMDBBase::IMDBProxyMgr::___updateVipflag(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::Ice::Int flag;
    __is->read(uid);
    __is->read(flag);
    ::AliIMDBBase::AMD_IMDBProxyMgr_updateVipflagPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateVipflag(__inS);
    try
    {
        updateVipflag_async(__cb, uid, flag, __current);
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
AliIMDBBase::IMDBProxyMgr::___checkWangHaoPwd(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string longuid;
    bool btokenpw;
    ::std::string pw;
    __is->read(longuid);
    __is->read(btokenpw);
    __is->read(pw);
    ::AliIMDBBase::AMD_IMDBProxyMgr_checkWangHaoPwdPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_checkWangHaoPwd(__inS);
    try
    {
        checkWangHaoPwd_async(__cb, longuid, btokenpw, pw, __current);
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
AliIMDBBase::IMDBProxyMgr::___checkCanLogin(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::Ice::Int version;
    ::std::string extrainfo;
    __is->read(uid);
    __is->read(version);
    __is->read(extrainfo);
    ::AliIMDBBase::AMD_IMDBProxyMgr_checkCanLoginPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_checkCanLogin(__inS);
    try
    {
        checkCanLogin_async(__cb, uid, version, extrainfo, __current);
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
AliIMDBBase::IMDBProxyMgr::___GetSIPSessionId(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string appid;
    ::std::string type;
    __is->read(uid);
    __is->read(appid);
    __is->read(type);
    ::AliIMDBBase::AMD_IMDBProxyMgr_GetSIPSessionIdPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_GetSIPSessionId(__inS);
    try
    {
        GetSIPSessionId_async(__cb, uid, appid, type, __current);
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
AliIMDBBase::IMDBProxyMgr::___CheckGsContact(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string contactid;
    __is->read(uid);
    __is->read(contactid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_CheckGsContactPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckGsContact(__inS);
    try
    {
        CheckGsContact_async(__cb, uid, contactid, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpdateSmsAuthCode(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string phoneNo;
    ::std::string code;
    __is->read(uid);
    __is->read(phoneNo);
    __is->read(code);
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateSmsAuthCodePtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateSmsAuthCode(__inS);
    try
    {
        UpdateSmsAuthCode_async(__cb, uid, phoneNo, code, __current);
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
AliIMDBBase::IMDBProxyMgr::___CheckSmsAuthCode(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string phoneNo;
    ::std::string code;
    __is->read(uid);
    __is->read(phoneNo);
    __is->read(code);
    ::AliIMDBBase::AMD_IMDBProxyMgr_CheckSmsAuthCodePtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckSmsAuthCode(__inS);
    try
    {
        CheckSmsAuthCode_async(__cb, uid, phoneNo, code, __current);
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
AliIMDBBase::IMDBProxyMgr::___UpdateUserValueBySmsAuth(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    __is->read(uid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserValueBySmsAuthPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_UpdateUserValueBySmsAuth(__inS);
    try
    {
        UpdateUserValueBySmsAuth_async(__cb, uid, __current);
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
AliIMDBBase::IMDBProxyMgr::___CheckSmsAuthStatus(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    __is->read(uid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_CheckSmsAuthStatusPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckSmsAuthStatus(__inS);
    try
    {
        CheckSmsAuthStatus_async(__cb, uid, __current);
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
AliIMDBBase::IMDBProxyMgr::___CheckUserTokenExtra(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string passwd;
    __is->read(userId);
    __is->read(passwd);
    ::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserTokenExtraPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserTokenExtra(__inS);
    try
    {
        CheckUserTokenExtra_async(__cb, userId, passwd, __current);
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
AliIMDBBase::IMDBProxyMgr::___CheckUserWebPasswdExtra(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string passwd;
    __is->read(userId);
    __is->read(passwd);
    ::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebPasswdExtraPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckUserWebPasswdExtra(__inS);
    try
    {
        CheckUserWebPasswdExtra_async(__cb, userId, passwd, __current);
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
AliIMDBBase::IMDBProxyMgr::___getESShuntStatus(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    __is->read(uid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getESShuntStatusPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESShuntStatus(__inS);
    try
    {
        getESShuntStatus_async(__cb, uid, __current);
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
AliIMDBBase::IMDBProxyMgr::___setESShuntStatus(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string shunt;
    __is->read(uid);
    __is->read(shunt);
    ::AliIMDBBase::AMD_IMDBProxyMgr_setESShuntStatusPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESShuntStatus(__inS);
    try
    {
        setESShuntStatus_async(__cb, uid, shunt, __current);
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
AliIMDBBase::IMDBProxyMgr::___getMaxESReceptNum(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::Ice::Int groupId;
    __is->read(uid);
    __is->read(groupId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getMaxESReceptNumPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getMaxESReceptNum(__inS);
    try
    {
        getMaxESReceptNum_async(__cb, uid, groupId, __current);
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
AliIMDBBase::IMDBProxyMgr::___setMaxESReceptNum(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::Ice::Int groupId;
    ::AliIMDBBase::SICEReceptNumSeq eserviceList;
    __is->read(uid);
    __is->read(groupId);
    ::AliIMDBBase::__read(__is, eserviceList, ::AliIMDBBase::__U__SICEReceptNumSeq());
    ::AliIMDBBase::AMD_IMDBProxyMgr_setMaxESReceptNumPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setMaxESReceptNum(__inS);
    try
    {
        setMaxESReceptNum_async(__cb, uid, groupId, eserviceList, __current);
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
AliIMDBBase::IMDBProxyMgr::___getESPriority(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::Ice::Int groupId;
    __is->read(uid);
    __is->read(groupId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getESPriorityPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESPriority(__inS);
    try
    {
        getESPriority_async(__cb, uid, groupId, __current);
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
AliIMDBBase::IMDBProxyMgr::___setESPriority(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::Ice::Int groupId;
    ::AliIMDBBase::SICEReceptPrioritySeq eserviceList;
    __is->read(uid);
    __is->read(groupId);
    ::AliIMDBBase::__read(__is, eserviceList, ::AliIMDBBase::__U__SICEReceptPrioritySeq());
    ::AliIMDBBase::AMD_IMDBProxyMgr_setESPriorityPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESPriority(__inS);
    try
    {
        setESPriority_async(__cb, uid, groupId, eserviceList, __current);
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
AliIMDBBase::IMDBProxyMgr::___getESRecvOffMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::Ice::Int groupId;
    __is->read(uid);
    __is->read(groupId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getESRecvOffMsgPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESRecvOffMsg(__inS);
    try
    {
        getESRecvOffMsg_async(__cb, uid, groupId, __current);
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
AliIMDBBase::IMDBProxyMgr::___setESRecvOffMsg(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::Ice::Int groupId;
    ::AliIMDBBase::SICERecvOffMsgSeq eserviceList;
    __is->read(uid);
    __is->read(groupId);
    ::AliIMDBBase::__read(__is, eserviceList, ::AliIMDBBase::__U__SICERecvOffMsgSeq());
    ::AliIMDBBase::AMD_IMDBProxyMgr_setESRecvOffMsgPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESRecvOffMsg(__inS);
    try
    {
        setESRecvOffMsg_async(__cb, uid, groupId, eserviceList, __current);
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
AliIMDBBase::IMDBProxyMgr::___getESGroupList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    __is->read(uid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupListPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupList(__inS);
    try
    {
        getESGroupList_async(__cb, uid, __current);
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
AliIMDBBase::IMDBProxyMgr::___insertESGroupInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::AliIMDBBase::SICEESGroupInfo groupInfo;
    __is->read(uid);
    groupInfo.__read(__is);
    ::AliIMDBBase::AMD_IMDBProxyMgr_insertESGroupInfoPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_insertESGroupInfo(__inS);
    try
    {
        insertESGroupInfo_async(__cb, uid, groupInfo, __current);
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
AliIMDBBase::IMDBProxyMgr::___updateESGroupInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::AliIMDBBase::SICEESGroupInfo group;
    __is->read(uid);
    group.__read(__is);
    ::AliIMDBBase::AMD_IMDBProxyMgr_updateESGroupInfoPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateESGroupInfo(__inS);
    try
    {
        updateESGroupInfo_async(__cb, uid, group, __current);
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
AliIMDBBase::IMDBProxyMgr::___delESGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::Ice::Int groupid;
    __is->read(uid);
    __is->read(groupid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_delESGroupPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_delESGroup(__inS);
    try
    {
        delESGroup_async(__cb, uid, groupid, __current);
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
AliIMDBBase::IMDBProxyMgr::___getESGroupInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    __is->read(uid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupInfoPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupInfo(__inS);
    try
    {
        getESGroupInfo_async(__cb, uid, __current);
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
AliIMDBBase::IMDBProxyMgr::___getESGroupInfoByID(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::Ice::Int groupId;
    __is->read(uid);
    __is->read(groupId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupInfoByIDPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESGroupInfoByID(__inS);
    try
    {
        getESGroupInfoByID_async(__cb, uid, groupId, __current);
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
AliIMDBBase::IMDBProxyMgr::___getESUserFunc(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string childid;
    __is->read(uid);
    __is->read(childid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getESUserFuncPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESUserFunc(__inS);
    try
    {
        getESUserFunc_async(__cb, uid, childid, __current);
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
AliIMDBBase::IMDBProxyMgr::___getESUnJoinGroup(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    __is->read(uid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getESUnJoinGroupPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESUnJoinGroup(__inS);
    try
    {
        getESUnJoinGroup_async(__cb, uid, __current);
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
AliIMDBBase::IMDBProxyMgr::___checkESRole(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    __is->read(uid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_checkESRolePtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_checkESRole(__inS);
    try
    {
        checkESRole_async(__cb, uid, __current);
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
AliIMDBBase::IMDBProxyMgr::___CheckWebWWPasswd(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string userId;
    ::std::string passwd;
    __is->read(userId);
    __is->read(passwd);
    ::AliIMDBBase::AMD_IMDBProxyMgr_CheckWebWWPasswdPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_CheckWebWWPasswd(__inS);
    try
    {
        CheckWebWWPasswd_async(__cb, userId, passwd, __current);
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
AliIMDBBase::IMDBProxyMgr::___getESExpandArea(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    __is->read(uid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getESExpandAreaPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESExpandArea(__inS);
    try
    {
        getESExpandArea_async(__cb, uid, __current);
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
AliIMDBBase::IMDBProxyMgr::___getESExpandAreaById(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::Ice::Int id;
    __is->read(uid);
    __is->read(id);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getESExpandAreaByIdPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESExpandAreaById(__inS);
    try
    {
        getESExpandAreaById_async(__cb, uid, id, __current);
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
AliIMDBBase::IMDBProxyMgr::___addESExpandArea(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::AliIMDBBase::SICEExpandArea areaInfo;
    __is->read(uid);
    areaInfo.__read(__is);
    ::AliIMDBBase::AMD_IMDBProxyMgr_addESExpandAreaPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_addESExpandArea(__inS);
    try
    {
        addESExpandArea_async(__cb, uid, areaInfo, __current);
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
AliIMDBBase::IMDBProxyMgr::___updateESExpandArea(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::AliIMDBBase::SICEExpandArea areaInfo;
    __is->read(uid);
    areaInfo.__read(__is);
    ::AliIMDBBase::AMD_IMDBProxyMgr_updateESExpandAreaPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateESExpandArea(__inS);
    try
    {
        updateESExpandArea_async(__cb, uid, areaInfo, __current);
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
AliIMDBBase::IMDBProxyMgr::___delESExpandArea(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::Ice::Int id;
    __is->read(uid);
    __is->read(id);
    ::AliIMDBBase::AMD_IMDBProxyMgr_delESExpandAreaPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_delESExpandArea(__inS);
    try
    {
        delESExpandArea_async(__cb, uid, id, __current);
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
AliIMDBBase::IMDBProxyMgr::___setESEval(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string evalcontent;
    ::std::string welcome;
    __is->read(uid);
    __is->read(evalcontent);
    __is->read(welcome);
    ::AliIMDBBase::AMD_IMDBProxyMgr_setESEvalPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESEval(__inS);
    try
    {
        setESEval_async(__cb, uid, evalcontent, welcome, __current);
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
AliIMDBBase::IMDBProxyMgr::___getESEval(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    __is->read(uid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEval(__inS);
    try
    {
        getESEval_async(__cb, uid, __current);
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
AliIMDBBase::IMDBProxyMgr::___sendESEvalResult(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string buyerid;
    __is->read(uid);
    __is->read(buyerid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_sendESEvalResultPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_sendESEvalResult(__inS);
    try
    {
        sendESEvalResult_async(__cb, uid, buyerid, __current);
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
AliIMDBBase::IMDBProxyMgr::___setESEvalResult(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string buyerid;
    ::Ice::Int evalId;
    ::std::string evalresult;
    __is->read(uid);
    __is->read(buyerid);
    __is->read(evalId);
    __is->read(evalresult);
    ::AliIMDBBase::AMD_IMDBProxyMgr_setESEvalResultPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setESEvalResult(__inS);
    try
    {
        setESEvalResult_async(__cb, uid, buyerid, evalId, evalresult, __current);
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
AliIMDBBase::IMDBProxyMgr::___getESEvalResult(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string buyerid;
    ::Ice::Int evalId;
    __is->read(uid);
    __is->read(buyerid);
    __is->read(evalId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResult(__inS);
    try
    {
        getESEvalResult_async(__cb, uid, buyerid, evalId, __current);
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
AliIMDBBase::IMDBProxyMgr::___getESEvalResultToday(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    __is->read(uid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultTodayPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultToday(__inS);
    try
    {
        getESEvalResultToday_async(__cb, uid, __current);
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
AliIMDBBase::IMDBProxyMgr::___getESEvalResultHistory(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string querytime;
    __is->read(uid);
    __is->read(querytime);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultHistoryPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultHistory(__inS);
    try
    {
        getESEvalResultHistory_async(__cb, uid, querytime, __current);
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
AliIMDBBase::IMDBProxyMgr::___getESEvalResultHistorybypage(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string childid;
    ::std::string begindate;
    ::std::string enddate;
    ::Ice::Int pageno;
    ::Ice::Int pagesize;
    __is->read(uid);
    __is->read(childid);
    __is->read(begindate);
    __is->read(enddate);
    __is->read(pageno);
    __is->read(pagesize);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultHistorybypagePtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getESEvalResultHistorybypage(__inS);
    try
    {
        getESEvalResultHistorybypage_async(__cb, uid, childid, begindate, enddate, pageno, pagesize, __current);
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
AliIMDBBase::IMDBProxyMgr::___getLastLoginTime(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::StringSeq loginids;
    __is->read(loginids);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getLastLoginTimePtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getLastLoginTime(__inS);
    try
    {
        getLastLoginTime_async(__cb, loginids, __current);
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
AliIMDBBase::IMDBProxyMgr::___getChildShuntInfos(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    __is->read(uid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getChildShuntInfosPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getChildShuntInfos(__inS);
    try
    {
        getChildShuntInfos_async(__cb, uid, __current);
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
AliIMDBBase::IMDBProxyMgr::___setChildShuntInfos(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::AliIMDBBase::SChildUserInfoSeq childinfos;
    __is->read(uid);
    ::AliIMDBBase::__read(__is, childinfos, ::AliIMDBBase::__U__SChildUserInfoSeq());
    ::AliIMDBBase::AMD_IMDBProxyMgr_setChildShuntInfosPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setChildShuntInfos(__inS);
    try
    {
        setChildShuntInfos_async(__cb, uid, childinfos, __current);
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
AliIMDBBase::IMDBProxyMgr::___getAgentChild(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    __is->read(uid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getAgentChildPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getAgentChild(__inS);
    try
    {
        getAgentChild_async(__cb, uid, __current);
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
AliIMDBBase::IMDBProxyMgr::___setAgentChild(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    ::std::string agentId;
    __is->read(uid);
    __is->read(agentId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_setAgentChildPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_setAgentChild(__inS);
    try
    {
        setAgentChild_async(__cb, uid, agentId, __current);
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
AliIMDBBase::IMDBProxyMgr::___getAgentList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string uid;
    __is->read(uid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getAgentListPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getAgentList(__inS);
    try
    {
        getAgentList_async(__cb, uid, __current);
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
AliIMDBBase::IMDBProxyMgr::___getB2BChildTeamList(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string parentId;
    __is->read(parentId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildTeamListPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildTeamList(__inS);
    try
    {
        getB2BChildTeamList_async(__cb, parentId, __current);
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
AliIMDBBase::IMDBProxyMgr::___getB2BChildInfo(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string parentId;
    ::std::string childid;
    __is->read(parentId);
    __is->read(childid);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildInfoPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildInfo(__inS);
    try
    {
        getB2BChildInfo_async(__cb, parentId, childid, __current);
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
AliIMDBBase::IMDBProxyMgr::___getB2BChildParentId(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string childId;
    __is->read(childId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildParentIdPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_getB2BChildParentId(__inS);
    try
    {
        getB2BChildParentId_async(__cb, childId, __current);
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
AliIMDBBase::IMDBProxyMgr::___addB2BChild(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string fid;
    ::std::string childId;
    ::std::string userflag;
    __is->read(fid);
    __is->read(childId);
    __is->read(userflag);
    ::AliIMDBBase::AMD_IMDBProxyMgr_addB2BChildPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_addB2BChild(__inS);
    try
    {
        addB2BChild_async(__cb, fid, childId, userflag, __current);
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
AliIMDBBase::IMDBProxyMgr::___updateB2BChild(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string fid;
    ::std::string childId;
    ::std::string userflag;
    __is->read(fid);
    __is->read(childId);
    __is->read(userflag);
    ::AliIMDBBase::AMD_IMDBProxyMgr_updateB2BChildPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_updateB2BChild(__inS);
    try
    {
        updateB2BChild_async(__cb, fid, childId, userflag, __current);
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
AliIMDBBase::IMDBProxyMgr::___deleteB2BChild(::IceInternal::Incoming&__inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string fid;
    ::std::string childId;
    __is->read(fid);
    __is->read(childId);
    ::AliIMDBBase::AMD_IMDBProxyMgr_deleteB2BChildPtr __cb = new IceAsync::AliIMDBBase::AMD_IMDBProxyMgr_deleteB2BChild(__inS);
    try
    {
        deleteB2BChild_async(__cb, fid, childId, __current);
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

static ::std::string __AliIMDBBase__IMDBProxyMgr_all[] =
{
    "AddBlackList",
    "AddContact",
    "AddExpriteTimeOfflineMsg",
    "AddGenContactFull",
    "AddGroup",
    "AddGroupEx",
    "AddOfflineMsg",
    "AddOfflineMsgEx",
    "AddOfflineMsgNoSMS",
    "AddUser",
    "AddUser60",
    "AddUserDStatus",
    "AddUserKeyWord",
    "AddWebBind",
    "ChangeWebBind",
    "CheckCanAddContact",
    "CheckGsContact",
    "CheckSmsAuthCode",
    "CheckSmsAuthStatus",
    "CheckTmpSession",
    "CheckUpgradeGenCnt",
    "CheckUserPasswd",
    "CheckUserToken",
    "CheckUserTokenExtra",
    "CheckUserWebPasswd",
    "CheckUserWebPasswdExtra",
    "CheckUserWebToken",
    "CheckWebWWPasswd",
    "DelAnyUser",
    "DelGenContact",
    "DelOfflineMsg",
    "DelOfflineMsgEx",
    "DelTaobaoUser",
    "DelTribeOffMngMsg",
    "DelWapOfflineMsg",
    "DelWebBind",
    "GetAllContactList",
    "GetAllExSysMsg",
    "GetAllOnlineSmsUser",
    "GetAllSysMsg",
    "GetAllVersion",
    "GetAtmLongid",
    "GetBatchMemberInfo",
    "GetBlackList",
    "GetCRMContactDetail",
    "GetChildTeamList",
    "GetChildTeamList2",
    "GetChildUserInfo",
    "GetChildUserInfo2",
    "GetCntMemo",
    "GetCntModifyList",
    "GetCntOtherModifyInfo",
    "GetCntOtherModifyList",
    "GetContactDetail",
    "GetContactDetailByUid",
    "GetContactInfo",
    "GetContactList",
    "GetContactShareInfo",
    "GetEnetOfflineMsgNum",
    "GetGroupList",
    "GetGroupListEx",
    "GetHardCodeIds",
    "GetMultiAccountContactList",
    "GetMultiBindToUser",
    "GetMultiServiceList",
    "GetOfflineMsg",
    "GetOfflineMsgCount",
    "GetOfflineMsgEx",
    "GetOfflineMsgNum",
    "GetPersonalShow",
    "GetReverseBlackList",
    "GetSIPSessionId",
    "GetShareContactList",
    "GetSmsUserInfoByUid",
    "GetSmsUserMsgInfo",
    "GetSysMsg",
    "GetToolProfiles",
    "GetToolProfilesEx",
    "GetTribeOffMngMsg",
    "GetUpdatedUserInfo",
    "GetUserCRInfo",
    "GetUserDStatus",
    "GetUserInfo",
    "GetUserInfo2",
    "GetUserInfo2New",
    "GetUserInfoEx",
    "GetUserInfoExNew",
    "GetUserInfoExNew2",
    "GetUserInfoExNew3",
    "GetUserInfoExNew4",
    "GetUserInfoNew",
    "GetUserKeyWord",
    "GetUserKeyWordDegree",
    "GetUserTribe",
    "GetUserTribeConfig",
    "GetUserValue",
    "GetUserVerifyInfo",
    "GetUserVerifyInfoEx",
    "GetUserVerifyInfoQuestion",
    "GetUserWebBasicProfile",
    "GetWebBinds",
    "GetWebMemberPWInfo",
    "GetWebMemberPWInfoEx",
    "InsertYahooUser",
    "IsBlackedByOther",
    "ModifyCntMemo",
    "ModifyContactDetail",
    "ModifyGenCntID",
    "ModifyPersonalShow",
    "MoveGroup",
    "QueryMatchedUserIds",
    "QueryUserIdsByKeyWord",
    "RemoveBatchContacts",
    "RemoveBlackList",
    "RemoveContact",
    "RemoveGroup",
    "RemoveInverfiedContact",
    "RemoveUserDStatus",
    "SetContactShareInfo",
    "SetUserCRInfo",
    "UpdateContactGroup",
    "UpdateContactGroupByCid",
    "UpdateContactNickName",
    "UpdateContactNickNameByCid",
    "UpdateContactStatus",
    "UpdateContactWebInfo",
    "UpdateGroup",
    "UpdateHardCodeIds",
    "UpdateNotifyMessage",
    "UpdateSignature",
    "UpdateSmsAuthCode",
    "UpdateToolProfiles",
    "UpdateToolProfilesEx",
    "UpdateUserDataInfo",
    "UpdateUserDataInfo2",
    "UpdateUserDataInfo3",
    "UpdateUserKeyWord",
    "UpdateUserLogin",
    "UpdateUserLoginDataInfo",
    "UpdateUserLoginDataInfoEx",
    "UpdateUserLoginEx",
    "UpdateUserMd5Password",
    "UpdateUserSysMsgId",
    "UpdateUserTribeConfig",
    "UpdateUserValueBySmsAuth",
    "UpdateUserVerifySet",
    "UpdateUserVerifySetEx",
    "UpdateUserVerifySetQuestion",
    "UpgradeGenContact",
    "addB2BChild",
    "addESExpandArea",
    "checkCanLogin",
    "checkESRole",
    "checkUserSession",
    "checkWangHaoPwd",
    "delESExpandArea",
    "delESGroup",
    "deleteB2BChild",
    "getAgentChild",
    "getAgentList",
    "getB2BChildInfo",
    "getB2BChildParentId",
    "getB2BChildTeamList",
    "getChildShuntInfos",
    "getESEval",
    "getESEvalResult",
    "getESEvalResultHistory",
    "getESEvalResultHistorybypage",
    "getESEvalResultToday",
    "getESExpandArea",
    "getESExpandAreaById",
    "getESGroupInfo",
    "getESGroupInfoByID",
    "getESGroupList",
    "getESPriority",
    "getESRecvOffMsg",
    "getESShuntStatus",
    "getESUnJoinGroup",
    "getESUserFunc",
    "getFTSAddr",
    "getFTServiceInfo",
    "getLastLoginTime",
    "getMaxESReceptNum",
    "getNickName",
    "getPeerVerifyFlag",
    "getPeerVerifyFlagQuestion",
    "getTietuServiceInfo",
    "getUserProfile",
    "getUserSession",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "insertESGroupInfo",
    "loadSitePrefix",
    "registerWanghao",
    "removeSession",
    "sayhello",
    "sendESEvalResult",
    "setAgentChild",
    "setChildShuntInfos",
    "setESEval",
    "setESEvalResult",
    "setESPriority",
    "setESRecvOffMsg",
    "setESShuntStatus",
    "setMaxESReceptNum",
    "updateAepUserId",
    "updateB2BChild",
    "updateContactClientInfo",
    "updateESExpandArea",
    "updateESGroupInfo",
    "updateUserProfile",
    "updateVipflag"
};

::IceInternal::DispatchStatus
AliIMDBBase::IMDBProxyMgr::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__AliIMDBBase__IMDBProxyMgr_all, __AliIMDBBase__IMDBProxyMgr_all + 214, current.operation);
    if(r.first == r.second)
    {
        return ::IceInternal::DispatchOperationNotExist;
    }

    switch(r.first - __AliIMDBBase__IMDBProxyMgr_all)
    {
        case 0:
        {
            return ___AddBlackList(in, current);
        }
        case 1:
        {
            return ___AddContact(in, current);
        }
        case 2:
        {
            return ___AddExpriteTimeOfflineMsg(in, current);
        }
        case 3:
        {
            return ___AddGenContactFull(in, current);
        }
        case 4:
        {
            return ___AddGroup(in, current);
        }
        case 5:
        {
            return ___AddGroupEx(in, current);
        }
        case 6:
        {
            return ___AddOfflineMsg(in, current);
        }
        case 7:
        {
            return ___AddOfflineMsgEx(in, current);
        }
        case 8:
        {
            return ___AddOfflineMsgNoSMS(in, current);
        }
        case 9:
        {
            return ___AddUser(in, current);
        }
        case 10:
        {
            return ___AddUser60(in, current);
        }
        case 11:
        {
            return ___AddUserDStatus(in, current);
        }
        case 12:
        {
            return ___AddUserKeyWord(in, current);
        }
        case 13:
        {
            return ___AddWebBind(in, current);
        }
        case 14:
        {
            return ___ChangeWebBind(in, current);
        }
        case 15:
        {
            return ___CheckCanAddContact(in, current);
        }
        case 16:
        {
            return ___CheckGsContact(in, current);
        }
        case 17:
        {
            return ___CheckSmsAuthCode(in, current);
        }
        case 18:
        {
            return ___CheckSmsAuthStatus(in, current);
        }
        case 19:
        {
            return ___CheckTmpSession(in, current);
        }
        case 20:
        {
            return ___CheckUpgradeGenCnt(in, current);
        }
        case 21:
        {
            return ___CheckUserPasswd(in, current);
        }
        case 22:
        {
            return ___CheckUserToken(in, current);
        }
        case 23:
        {
            return ___CheckUserTokenExtra(in, current);
        }
        case 24:
        {
            return ___CheckUserWebPasswd(in, current);
        }
        case 25:
        {
            return ___CheckUserWebPasswdExtra(in, current);
        }
        case 26:
        {
            return ___CheckUserWebToken(in, current);
        }
        case 27:
        {
            return ___CheckWebWWPasswd(in, current);
        }
        case 28:
        {
            return ___DelAnyUser(in, current);
        }
        case 29:
        {
            return ___DelGenContact(in, current);
        }
        case 30:
        {
            return ___DelOfflineMsg(in, current);
        }
        case 31:
        {
            return ___DelOfflineMsgEx(in, current);
        }
        case 32:
        {
            return ___DelTaobaoUser(in, current);
        }
        case 33:
        {
            return ___DelTribeOffMngMsg(in, current);
        }
        case 34:
        {
            return ___DelWapOfflineMsg(in, current);
        }
        case 35:
        {
            return ___DelWebBind(in, current);
        }
        case 36:
        {
            return ___GetAllContactList(in, current);
        }
        case 37:
        {
            return ___GetAllExSysMsg(in, current);
        }
        case 38:
        {
            return ___GetAllOnlineSmsUser(in, current);
        }
        case 39:
        {
            return ___GetAllSysMsg(in, current);
        }
        case 40:
        {
            return ___GetAllVersion(in, current);
        }
        case 41:
        {
            return ___GetAtmLongid(in, current);
        }
        case 42:
        {
            return ___GetBatchMemberInfo(in, current);
        }
        case 43:
        {
            return ___GetBlackList(in, current);
        }
        case 44:
        {
            return ___GetCRMContactDetail(in, current);
        }
        case 45:
        {
            return ___GetChildTeamList(in, current);
        }
        case 46:
        {
            return ___GetChildTeamList2(in, current);
        }
        case 47:
        {
            return ___GetChildUserInfo(in, current);
        }
        case 48:
        {
            return ___GetChildUserInfo2(in, current);
        }
        case 49:
        {
            return ___GetCntMemo(in, current);
        }
        case 50:
        {
            return ___GetCntModifyList(in, current);
        }
        case 51:
        {
            return ___GetCntOtherModifyInfo(in, current);
        }
        case 52:
        {
            return ___GetCntOtherModifyList(in, current);
        }
        case 53:
        {
            return ___GetContactDetail(in, current);
        }
        case 54:
        {
            return ___GetContactDetailByUid(in, current);
        }
        case 55:
        {
            return ___GetContactInfo(in, current);
        }
        case 56:
        {
            return ___GetContactList(in, current);
        }
        case 57:
        {
            return ___GetContactShareInfo(in, current);
        }
        case 58:
        {
            return ___GetEnetOfflineMsgNum(in, current);
        }
        case 59:
        {
            return ___GetGroupList(in, current);
        }
        case 60:
        {
            return ___GetGroupListEx(in, current);
        }
        case 61:
        {
            return ___GetHardCodeIds(in, current);
        }
        case 62:
        {
            return ___GetMultiAccountContactList(in, current);
        }
        case 63:
        {
            return ___GetMultiBindToUser(in, current);
        }
        case 64:
        {
            return ___GetMultiServiceList(in, current);
        }
        case 65:
        {
            return ___GetOfflineMsg(in, current);
        }
        case 66:
        {
            return ___GetOfflineMsgCount(in, current);
        }
        case 67:
        {
            return ___GetOfflineMsgEx(in, current);
        }
        case 68:
        {
            return ___GetOfflineMsgNum(in, current);
        }
        case 69:
        {
            return ___GetPersonalShow(in, current);
        }
        case 70:
        {
            return ___GetReverseBlackList(in, current);
        }
        case 71:
        {
            return ___GetSIPSessionId(in, current);
        }
        case 72:
        {
            return ___GetShareContactList(in, current);
        }
        case 73:
        {
            return ___GetSmsUserInfoByUid(in, current);
        }
        case 74:
        {
            return ___GetSmsUserMsgInfo(in, current);
        }
        case 75:
        {
            return ___GetSysMsg(in, current);
        }
        case 76:
        {
            return ___GetToolProfiles(in, current);
        }
        case 77:
        {
            return ___GetToolProfilesEx(in, current);
        }
        case 78:
        {
            return ___GetTribeOffMngMsg(in, current);
        }
        case 79:
        {
            return ___GetUpdatedUserInfo(in, current);
        }
        case 80:
        {
            return ___GetUserCRInfo(in, current);
        }
        case 81:
        {
            return ___GetUserDStatus(in, current);
        }
        case 82:
        {
            return ___GetUserInfo(in, current);
        }
        case 83:
        {
            return ___GetUserInfo2(in, current);
        }
        case 84:
        {
            return ___GetUserInfo2New(in, current);
        }
        case 85:
        {
            return ___GetUserInfoEx(in, current);
        }
        case 86:
        {
            return ___GetUserInfoExNew(in, current);
        }
        case 87:
        {
            return ___GetUserInfoExNew2(in, current);
        }
        case 88:
        {
            return ___GetUserInfoExNew3(in, current);
        }
        case 89:
        {
            return ___GetUserInfoExNew4(in, current);
        }
        case 90:
        {
            return ___GetUserInfoNew(in, current);
        }
        case 91:
        {
            return ___GetUserKeyWord(in, current);
        }
        case 92:
        {
            return ___GetUserKeyWordDegree(in, current);
        }
        case 93:
        {
            return ___GetUserTribe(in, current);
        }
        case 94:
        {
            return ___GetUserTribeConfig(in, current);
        }
        case 95:
        {
            return ___GetUserValue(in, current);
        }
        case 96:
        {
            return ___GetUserVerifyInfo(in, current);
        }
        case 97:
        {
            return ___GetUserVerifyInfoEx(in, current);
        }
        case 98:
        {
            return ___GetUserVerifyInfoQuestion(in, current);
        }
        case 99:
        {
            return ___GetUserWebBasicProfile(in, current);
        }
        case 100:
        {
            return ___GetWebBinds(in, current);
        }
        case 101:
        {
            return ___GetWebMemberPWInfo(in, current);
        }
        case 102:
        {
            return ___GetWebMemberPWInfoEx(in, current);
        }
        case 103:
        {
            return ___InsertYahooUser(in, current);
        }
        case 104:
        {
            return ___IsBlackedByOther(in, current);
        }
        case 105:
        {
            return ___ModifyCntMemo(in, current);
        }
        case 106:
        {
            return ___ModifyContactDetail(in, current);
        }
        case 107:
        {
            return ___ModifyGenCntID(in, current);
        }
        case 108:
        {
            return ___ModifyPersonalShow(in, current);
        }
        case 109:
        {
            return ___MoveGroup(in, current);
        }
        case 110:
        {
            return ___QueryMatchedUserIds(in, current);
        }
        case 111:
        {
            return ___QueryUserIdsByKeyWord(in, current);
        }
        case 112:
        {
            return ___RemoveBatchContacts(in, current);
        }
        case 113:
        {
            return ___RemoveBlackList(in, current);
        }
        case 114:
        {
            return ___RemoveContact(in, current);
        }
        case 115:
        {
            return ___RemoveGroup(in, current);
        }
        case 116:
        {
            return ___RemoveInverfiedContact(in, current);
        }
        case 117:
        {
            return ___RemoveUserDStatus(in, current);
        }
        case 118:
        {
            return ___SetContactShareInfo(in, current);
        }
        case 119:
        {
            return ___SetUserCRInfo(in, current);
        }
        case 120:
        {
            return ___UpdateContactGroup(in, current);
        }
        case 121:
        {
            return ___UpdateContactGroupByCid(in, current);
        }
        case 122:
        {
            return ___UpdateContactNickName(in, current);
        }
        case 123:
        {
            return ___UpdateContactNickNameByCid(in, current);
        }
        case 124:
        {
            return ___UpdateContactStatus(in, current);
        }
        case 125:
        {
            return ___UpdateContactWebInfo(in, current);
        }
        case 126:
        {
            return ___UpdateGroup(in, current);
        }
        case 127:
        {
            return ___UpdateHardCodeIds(in, current);
        }
        case 128:
        {
            return ___UpdateNotifyMessage(in, current);
        }
        case 129:
        {
            return ___UpdateSignature(in, current);
        }
        case 130:
        {
            return ___UpdateSmsAuthCode(in, current);
        }
        case 131:
        {
            return ___UpdateToolProfiles(in, current);
        }
        case 132:
        {
            return ___UpdateToolProfilesEx(in, current);
        }
        case 133:
        {
            return ___UpdateUserDataInfo(in, current);
        }
        case 134:
        {
            return ___UpdateUserDataInfo2(in, current);
        }
        case 135:
        {
            return ___UpdateUserDataInfo3(in, current);
        }
        case 136:
        {
            return ___UpdateUserKeyWord(in, current);
        }
        case 137:
        {
            return ___UpdateUserLogin(in, current);
        }
        case 138:
        {
            return ___UpdateUserLoginDataInfo(in, current);
        }
        case 139:
        {
            return ___UpdateUserLoginDataInfoEx(in, current);
        }
        case 140:
        {
            return ___UpdateUserLoginEx(in, current);
        }
        case 141:
        {
            return ___UpdateUserMd5Password(in, current);
        }
        case 142:
        {
            return ___UpdateUserSysMsgId(in, current);
        }
        case 143:
        {
            return ___UpdateUserTribeConfig(in, current);
        }
        case 144:
        {
            return ___UpdateUserValueBySmsAuth(in, current);
        }
        case 145:
        {
            return ___UpdateUserVerifySet(in, current);
        }
        case 146:
        {
            return ___UpdateUserVerifySetEx(in, current);
        }
        case 147:
        {
            return ___UpdateUserVerifySetQuestion(in, current);
        }
        case 148:
        {
            return ___UpgradeGenContact(in, current);
        }
        case 149:
        {
            return ___addB2BChild(in, current);
        }
        case 150:
        {
            return ___addESExpandArea(in, current);
        }
        case 151:
        {
            return ___checkCanLogin(in, current);
        }
        case 152:
        {
            return ___checkESRole(in, current);
        }
        case 153:
        {
            return ___checkUserSession(in, current);
        }
        case 154:
        {
            return ___checkWangHaoPwd(in, current);
        }
        case 155:
        {
            return ___delESExpandArea(in, current);
        }
        case 156:
        {
            return ___delESGroup(in, current);
        }
        case 157:
        {
            return ___deleteB2BChild(in, current);
        }
        case 158:
        {
            return ___getAgentChild(in, current);
        }
        case 159:
        {
            return ___getAgentList(in, current);
        }
        case 160:
        {
            return ___getB2BChildInfo(in, current);
        }
        case 161:
        {
            return ___getB2BChildParentId(in, current);
        }
        case 162:
        {
            return ___getB2BChildTeamList(in, current);
        }
        case 163:
        {
            return ___getChildShuntInfos(in, current);
        }
        case 164:
        {
            return ___getESEval(in, current);
        }
        case 165:
        {
            return ___getESEvalResult(in, current);
        }
        case 166:
        {
            return ___getESEvalResultHistory(in, current);
        }
        case 167:
        {
            return ___getESEvalResultHistorybypage(in, current);
        }
        case 168:
        {
            return ___getESEvalResultToday(in, current);
        }
        case 169:
        {
            return ___getESExpandArea(in, current);
        }
        case 170:
        {
            return ___getESExpandAreaById(in, current);
        }
        case 171:
        {
            return ___getESGroupInfo(in, current);
        }
        case 172:
        {
            return ___getESGroupInfoByID(in, current);
        }
        case 173:
        {
            return ___getESGroupList(in, current);
        }
        case 174:
        {
            return ___getESPriority(in, current);
        }
        case 175:
        {
            return ___getESRecvOffMsg(in, current);
        }
        case 176:
        {
            return ___getESShuntStatus(in, current);
        }
        case 177:
        {
            return ___getESUnJoinGroup(in, current);
        }
        case 178:
        {
            return ___getESUserFunc(in, current);
        }
        case 179:
        {
            return ___getFTSAddr(in, current);
        }
        case 180:
        {
            return ___getFTServiceInfo(in, current);
        }
        case 181:
        {
            return ___getLastLoginTime(in, current);
        }
        case 182:
        {
            return ___getMaxESReceptNum(in, current);
        }
        case 183:
        {
            return ___getNickName(in, current);
        }
        case 184:
        {
            return ___getPeerVerifyFlag(in, current);
        }
        case 185:
        {
            return ___getPeerVerifyFlagQuestion(in, current);
        }
        case 186:
        {
            return ___getTietuServiceInfo(in, current);
        }
        case 187:
        {
            return ___getUserProfile(in, current);
        }
        case 188:
        {
            return ___getUserSession(in, current);
        }
        case 189:
        {
            return ___ice_id(in, current);
        }
        case 190:
        {
            return ___ice_ids(in, current);
        }
        case 191:
        {
            return ___ice_isA(in, current);
        }
        case 192:
        {
            return ___ice_ping(in, current);
        }
        case 193:
        {
            return ___insertESGroupInfo(in, current);
        }
        case 194:
        {
            return ___loadSitePrefix(in, current);
        }
        case 195:
        {
            return ___registerWanghao(in, current);
        }
        case 196:
        {
            return ___removeSession(in, current);
        }
        case 197:
        {
            return ___sayhello(in, current);
        }
        case 198:
        {
            return ___sendESEvalResult(in, current);
        }
        case 199:
        {
            return ___setAgentChild(in, current);
        }
        case 200:
        {
            return ___setChildShuntInfos(in, current);
        }
        case 201:
        {
            return ___setESEval(in, current);
        }
        case 202:
        {
            return ___setESEvalResult(in, current);
        }
        case 203:
        {
            return ___setESPriority(in, current);
        }
        case 204:
        {
            return ___setESRecvOffMsg(in, current);
        }
        case 205:
        {
            return ___setESShuntStatus(in, current);
        }
        case 206:
        {
            return ___setMaxESReceptNum(in, current);
        }
        case 207:
        {
            return ___updateAepUserId(in, current);
        }
        case 208:
        {
            return ___updateB2BChild(in, current);
        }
        case 209:
        {
            return ___updateContactClientInfo(in, current);
        }
        case 210:
        {
            return ___updateESExpandArea(in, current);
        }
        case 211:
        {
            return ___updateESGroupInfo(in, current);
        }
        case 212:
        {
            return ___updateUserProfile(in, current);
        }
        case 213:
        {
            return ___updateVipflag(in, current);
        }
    }

    assert(false);
    return ::IceInternal::DispatchOperationNotExist;
}

void
AliIMDBBase::IMDBProxyMgr::__write(::IceInternal::BasicStream* __os) const
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
AliIMDBBase::IMDBProxyMgr::__read(::IceInternal::BasicStream* __is, bool __rid)
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
AliIMDBBase::IMDBProxyMgr::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIMDBBase::IMDBProxyMgr was not generated with stream support";
    throw ex;
}

void
AliIMDBBase::IMDBProxyMgr::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type AliIMDBBase::IMDBProxyMgr was not generated with stream support";
    throw ex;
}

void 
AliIMDBBase::__patch__IMDBProxyMgrPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::AliIMDBBase::IMDBProxyMgrPtr* p = static_cast< ::AliIMDBBase::IMDBProxyMgrPtr*>(__addr);
    assert(p);
    *p = ::AliIMDBBase::IMDBProxyMgrPtr::dynamicCast(v);
    if(v && !*p)
    {
        ::Ice::UnexpectedObjectException e(__FILE__, __LINE__);
        e.type = v->ice_id();
        e.expectedType = ::AliIMDBBase::IMDBProxyMgr::ice_staticId();
        throw e;
    }
}

bool
AliIMDBBase::operator==(const ::AliIMDBBase::IMDBProxyMgr& l, const ::AliIMDBBase::IMDBProxyMgr& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
AliIMDBBase::operator!=(const ::AliIMDBBase::IMDBProxyMgr& l, const ::AliIMDBBase::IMDBProxyMgr& r)
{
    return static_cast<const ::Ice::Object&>(l) != static_cast<const ::Ice::Object&>(r);
}

bool
AliIMDBBase::operator<(const ::AliIMDBBase::IMDBProxyMgr& l, const ::AliIMDBBase::IMDBProxyMgr& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

bool
AliIMDBBase::operator<=(const ::AliIMDBBase::IMDBProxyMgr& l, const ::AliIMDBBase::IMDBProxyMgr& r)
{
    return l < r || l == r;
}

bool
AliIMDBBase::operator>(const ::AliIMDBBase::IMDBProxyMgr& l, const ::AliIMDBBase::IMDBProxyMgr& r)
{
    return !(l < r) && !(l == r);
}

bool
AliIMDBBase::operator>=(const ::AliIMDBBase::IMDBProxyMgr& l, const ::AliIMDBBase::IMDBProxyMgr& r)
{
    return !(l < r);
}
