#ifndef HALIIMDBProxyMgrICE
#define HALIIMDBProxyMgrICE

#include "dbdatadefine.ice"
#include "dbtbsstructs60.ice"
#include "imsession.ice"
#include "imicecommstruct.ice"

module AliIMDBBase
{

    interface IMDBProxyMgr
	{

		["amd" ] int  sayhello(string userId, out string helloword);
		//�û���½ʱ�ĵ�һ��������û�ע�����վ��ѯ���룬���������Ϣ
		["amd" ] int CheckUserToken(string userId, string passwd,out string lid, out string retuidtokenpw,out string retmd5passwd,out int activeStat);
		["amd" ] int CheckTmpSession(string userId, string passwd,out string lid, out string retuidtokenpw,out string retmd5passwd,out int activeStat);
		["amd" ] int CheckUserWebPasswd(string userId, string passwd,out string lid, out string retuidtokenpw,out string retmd5passwd,out int activeStat);
        ["amd" ] int CheckUserPasswd(string userId,bool btokenpw, string passwd,out string retuidtokenpw,out string retmd5passwd,out int activeStat);
        ["amd"] int CheckUserWebToken(string userId, string token, out string reason);
        ["amd" ] int GetAtmLongid(string userId, out string longId);
		["amd" ] int  AddUser60(string userId,string md5passwd,string tokenpw,int languageid);
		["amd" ] int GetWebMemberPWInfo(string userId, out SMemberPWInfo pwInfo);
		["amd" ] int GetWebMemberPWInfoEx(string userId, out SMemberPWInfoEx pwInfo);
		["amd" ] int GetUserWebBasicProfile(string userId,out SUserWebBasicProfile profile);//��ȡ�û��Ļ���profile���������뵽UDB��
		["amd" ] int CheckCanAddContact(string userId, string buddyId);//����վ�ã�

		//finduid�ǳ�ID,ָ����˭������������� shortIdָ������Ҫƥ��Ķ�Id
		["amd" ] int QueryMatchedUserIds(string finduid,string shortId,out SMatchedUserIdInfoSeq matchedIds);

		//�����ϵ�˺���¸���ϵ�˵���Ϣ
		["amd" ] int UpdateContactWebInfo(string userId, string buddyId, SUserWebBasicProfile cntWebInfo);

		//webId����վ���û�ID, �ڲ��߼��ǣ������û���IM_USer�����gmt_createʱ���뵱ǰʱ������Ƿ�С��7�죬�Ҹ��û����ۼ�����ʱ���Ƿ�С��56Сʱ
		//Ӧ�ü��ܹ��ѣ�������string webId, string webIdMD5��webId���ܹ���md5)
		["amd" ] int DelTaobaoUser(string webId);
		["amd" ] int DelAnyUser(string imuserId); 
        
		/****************************************************************
		  �������ƣ� KeyWord
		  ��Ҫ����������ɾ�����޸ģ���ѯ�ؼ���
		  ���룺    userId��ó��ͨID����ID��
flag : �Ƿ�������ѯ 0���ܣ�1���� 
�����    �û�������IM NODATAERR
�޸���־��
		 *****************************************************************/
        
		["amd" ] int AddUserKeyWord(string userId, string keyword,int flag);
		["amd" ] int UpdateUserKeyWord(string userId, string keyword,int flag);
		["amd" ] int GetUserKeyWord(string userId, out string keyword,out int flag);
		["amd" ] int QueryUserIdsByKeyWord(string keyword,out SMatchedUserIdInfoSeq matchedIds);

		/****************************************************************
		  �������ƣ� GetMemberInfo
		  ��Ҫ�������ж��û��Ƿ����Member��ȡ�û�����Ϣ;
		  ���룺    userId��ó��ͨID����ID��
		  memberInfo�������û�Member����Ϣ
		  �����    �û�������IM NODATAERR
		  �޸���־��
		 *****************************************************************/
		//int  GetMemberInfo(string userId, out SICEMemberInfo memberInfo);

		/****************************************************************
		  �������ƣ� GetBatchMemberInfo, ��UDB��ȡ�û���profiles
		  ��Ҫ������ȡ�����û�����Ϣ;
		  ���룺    userId������ID��
		  count��ID���������ܳ���10������
		  memberInfoList�������û�Member����Ϣ�б�
		  �����    �û�������IM NOUSER
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  GetBatchMemberInfo(Ice::StringSeq userIds, out SICEMemberInfoSeq memberInfoList);

		/****************************************************************
		  �������ƣ� GetBatchMemberAssortInfo
		  ��Ҫ������ȡ�����û�������Ϣ;
		  ���룺    userId��ó��ͨID����ID��
		  count��ID���������ܳ���1024������
		  memberInfoList�������û�Member����Ϣ�б�
		  �����    �û�������IM NOUSER
		  �޸���־��
		 *****************************************************************/
		//int  GetBatchMemberAssortInfo(Ice::StringSeq userIds,  out SICEMemberInfoSeq memberInfoList);

		/****************************************************************
		  �������ƣ� GetNotifyMessageUserId
		  ��Ҫ����������ϵͳ��Ϣ��sysId��ȡҪ�����������û�ID������ �û�ID
		  ���룺    sysId ϵͳ��Ϣ��
		  userIdList�������û�ID
		  �����    ϵͳ��Ϣ�Ų�����IM NOSYSID, �������˷�ϵͳ��Ϣ
		  �޸���־��
		 *****************************************************************/
		//int  GetNotifyMessageUserId(int sysId, out Ice::StringSeq userIdList);


		/****************************************************************
		  �������ƣ� GetUidByPenname
		  ��Ҫ�������ñ���ȡ�û���
		  ���룺    penname: ����
		  SUserId�������û�ID
		  �����    �û�������IM NOUSER
		  �޸���־��
		 *****************************************************************/
		//int  GetUidByPenname(string penname, out string userId);

		/****************************************************************
		  �������ƣ� GetAllVersion
		  ��Ҫ������ȡ���е�ó��ͨ�汾
		  ���룺    versionList�������汾��Ϣ�б�
		  �����    
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  GetAllVersion(out SICEVersionSeq versionList);

		/****************************************************************
		  �������ƣ� GetAllSysMsg
		  ��Ҫ������ȥ������Ч��ϵͳ��Ϣ
		  ���룺    sysMsgList������ϵͳ��Ϣ�汾��
		  �����    
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  GetAllSysMsg(out SICESysMessageSeq  sysMsgList);

        ["amd" ] int  GetAllExSysMsg(out SExICESysMessageSeq  sysMsgList);

		/****************************************************************
		  �������ƣ� GetAllUser
		  ��Ҫ������ȡ���е�ó��ͨ�û��б����� ID������¼ʱ��
		  ���룺    userInfoList������ó��ͨ�û���Ϣ�б�
		  �����    
		  �޸���־��
		 *****************************************************************/
		//int  GetAllUser(out SICEUserInfo userInfoList);

		["amd" ] int  GetUserInfo(string userId, out SICEUserInfo userInfo);
		["amd" ] int  GetUserInfo2(string userId, out SICEUserInfo2 userInfo);
		["amd" ] int  GetUserInfoEx(string userId, out SICEUserInfoEx userInfo);

		//add by duhl 2008-9-1 for antirush project
		["amd" ] int  GetUserInfoNew(string userId, out SICEUserInfoNew userInfo);
		["amd" ] int  GetUserInfo2New(string userId, out SICEUserInfo2New userInfo);
		["amd" ] int  GetUserInfoExNew(string userId, out SICEUserInfoExNew userInfo);
		//end add.
		["amd" ] int  GetUserInfoExNew2(string userId, out SICEUserInfoExNew2 userInfo);
		["amd" ] int  GetUserInfoExNew3(string userId, out SICEUserInfoExNew3 userInfo);
		["amd" ] int  GetUserInfoExNew4(string userId, out SICEUserInfoExNew4 userInfo);

		/****************************************************************
		  �������ƣ� GetUserVerifyInfo
		  ��Ҫ������ȡó��ͨ�û���֤��Ϣ
		  ���룺    userId��ó��ͨID����ID��
		  addcontactverify���û���İ�������Ϊ��ϵ����֤���
		  sendmsgverify��   �û���İ���˷�����Ϣ��֤���
		  �����    �û�������IM NOUSER
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  GetUserVerifyInfo(string userId,out  byte addcontactverify, out byte sendmsgverify);
		["amd" ] int  GetUserVerifyInfoEx(string userId,out  byte addcontactverify, out byte sendmsgverify, out byte enableSearchFlag);
		["amd" ] int  GetUserVerifyInfoQuestion(string userId,out  byte addcontactverify, out byte sendmsgverify, out byte enableSearchFlag, out string question, out string answer);

		/****************************************************************
		  �������ƣ� GetGroupList
		  ��Ҫ������ȡ�û������б����� ��ID������
		  ���룺    userId��ó��ͨID����ID��
		  groupList�������û����б�
		  �����    
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  GetGroupList(string userId, out SICEGroupInfoSeq groupList, out int groupTimes);
		["amd" ] int GetGroupListEx(string userId, out SICEGroupInfoExSeq groupList, out int groupTimes);

		/****************************************************************
		  �������ƣ� GetContactList
		  ��Ҫ������ȡ�û�����ϵ���б����� ��ϵ��ID,��ID���ǳ�
		  ���룺    userId��ó��ͨID����ID��
		  contactList��������ϵ���б�
		  �����    
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  GetContactList(string userId, int getFlag, out SICEContactInfoSeq contactList, out int contactTimes);

		/****************************************************************
		  �������ƣ� GetBlackList
		  ��Ҫ������ȡ�û��ĺ������б�����  ������ID
		  ���룺    userId��ó��ͨID����ID��
		  blackList�������������б�
		  �����    
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  GetBlackList(string userId, out Ice::StringSeq blackList, out int blacklistTimes);

		/****************************************************************
		  �������ƣ� GetReverseBlackList
		  ��Ҫ������ȡ�û��ķ���������б�����  ���������ID
		  ���룺    userId��ó��ͨID����ID��
		  reverseBlackList����������������б�
		  �����    
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  GetReverseBlackList(string userId, out Ice::StringSeq reverseBlackList, out int reverseBlacklistTimes);

		/****************************************************************
		  �������ƣ� GetOfflineMsg
		  ��Ҫ������ȡ�û���ȫ��������Ϣ  ���� ���ͷ������ͣ�ʱ�䣬���ݳ��ȣ�����

		  ���룺    userId��ó��ͨID����ID��
		  offlineMsgList������������Ϣ�б�
		  �����    
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  GetOfflineMsg(string userId, out SICEOffLineMessegeSeq offlineMsgList, out int offlinemsgTimes);
		["amd" ] int  GetOfflineMsgEx(string userId, out SICEOffLineMessegeExSeq offlineMsgList, out int offlinemsgTimes);

		["amd" ] int GetOfflineMsgCount(string uid, out int chatMsgNum, out int sysMsgNum);

		 ["amd" ] int GetEnetOfflineMsgNum(string toId, string fromId, Ice::IntSeq types, out int msgNum);

		/****************************************************************
		  �������ƣ� GetContactInfo
		  ��Ҫ������ȡó��ͨ�û�ĳ����ϵ����Ϣ
		  ���룺    userId��ó��ͨID����ID��
contactId: ó��ͨID����ID��
contactInfo��������ϵ�˵�IMCONTACT����Ϣ
�����    �û�������IM NOUSER
�޸���־��
		 *****************************************************************/
		["amd" ] int  GetContactInfo(string userId, string contactId, out SICEContactInfo contactInfo);


		/****************************************************************
		  �������ƣ� GetOfflineMsgNum
		  ��Ҫ������ȡó��ͨ�û�ĳ����ϵ����Ϣ
		  ���룺    userId��ó��ͨID����ID��
		  msgNum��������ӦID������Ϣ����
		  �����    
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  GetOfflineMsgNum(string userId, out int msgNum);

		/****************************************************************
		  �������ƣ� GetToolProfiles
		  ��Ҫ������ȡó��ͨ�û�ĳ���ⲿ���ߵ�����
		  ���룺    userId��ó��ͨID����ID��
		  type����������
		  nowTimes���ͻ�������ʱ���
		  toolProfilesList�����������б�
		  toolTimes���������ݿ�����ʱ���
		  �����    IM NODATAERRû�б仯������
		  IM NOUSER�û�������
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  GetToolProfiles(string userId, int type, int nowTimes, out Ice::StringSeq toolProfilesList, out int toolTimes);
		["amd" ] int  GetToolProfilesEx(string userId, int nowTimes, out SICEToolProfileSeq toolProfilesList, out int toolTimes);


		/****************************************************************
		  �������ƣ� GetSysMsg
		  ��Ҫ������ȥ������Ч��ϵͳ��Ϣ
		  ���룺    sysId ��ϵͳ��Ϣ��
		  sysMsg������ϵͳ��Ϣ�汾��
		  �����    
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  GetSysMsg(int sysId, out SICESysMessage sysMsg);

		/****************************************************************
		  �������ƣ� AddUser
		  ��Ҫ���������ó��ͨ�û�
		  ���룺    userId��ó��ͨID����ID��
		  �����    �û��Ѿ�����IM DATADUP
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  AddUser(string userId);

		/****************************************************************
		  �������ƣ� AddGroup
		  ��Ҫ������Ϊ�û����һ����
		  ���룺    userId��ó��ͨID����ID��
groupName: ����
groupId��������Id
groupTimes��������ʱ���
�����    ���Ѿ�����IM DATADUP
�޸���־��
		 *****************************************************************/
		["amd" ] int  AddGroup(string userId, string groupName, out int groupId, out int groupTimes);
		["amd" ] int  AddGroupEx(string userId, string groupName, int parentId, out int groupId, out int groupTimes);

		/****************************************************************
		  �������ƣ� AddBlackList
		  ��Ҫ������Ϊ�û����һ��������ID
		  ���룺    userId��ó��ͨID����ID��
		  blackId��������ID����ID��
		  blackListTimes������������ʱ���
		  �����    ������ID�Ѿ�����IM DATADUP
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  AddBlackList(string userId, string blackId, out int blackListTimes);

		/****************************************************************
		  �������ƣ� AddOfflineMsg
		  ��Ҫ���������һ��������Ϣ
		  ���룺    fromId�����ͷ�ID����ID��
		  toId�����ܷ�ID����ID��
		  type����Ϣ����,EOfflineMsgType
		  contect������
		  len�����ݳ���
		  �����    �����Ѿ���IM DATAFULL
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  AddOfflineMsg(string fromId, string toId, int type, string content);
		["amd" ] int AddExpriteTimeOfflineMsg(string fromId, string toId, int type, string content, string expireTime);
		["amd" ] int  AddOfflineMsgNoSMS(string fromId, string toId, int type, string content);

        ["amd" ] int  AddOfflineMsgEx(string fromId, string toId, int type, string content, long uniqueMsgTime);

		/****************************************************************
		  �������ƣ� AddHelpMsg
		  ��Ҫ���������һ�����߰�����Ϣ
		  ���룺    fromId�����ͷ�ID����ID��
		  toId�����ܷ�ID����ID��
		  type����Ϣ����
		  contect������
		  len�����ݳ���
		  �����    
		  �޸���־��
		 *****************************************************************/
		//int  AddHelpMsg(string fromId, string toId, int type, string content);


		/****************************************************************
		  �������ƣ� UpdateUserLogin
		  ��Ҫ�������޸��û���¼��Ϣ;
		  ���룺    userId��ó��ͨID����ID��
		  sysMsgId������ϵͳ��Ϣ��
		  �����    
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  UpdateUserLogin(string userId, int sysMsgId);
		["amd" ] int  UpdateUserLoginEx(string userId, int sysMsgId,string loginIp);
		["amd" ] int  UpdateUserLoginDataInfo(string userId, int sysMsgId, string loginIp, int onlineTimes, int lastLoginTime);
		["amd" ] int  UpdateUserLoginDataInfoEx(string userId, int sysMsgId, string loginIp, int onlineTimes, int lastLoginTime, int isNeedToUpdate);

		/****************************************************************
		  �������ƣ� UpdateUserSysMsgId
		  ��Ҫ�������޸��û���¼��Ϣ;
		  ���룺    userId��ó��ͨID����ID��
		  sysMsgId������ϵͳ��Ϣ��
		  �����    
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  UpdateUserSysMsgId(string userId, int sysMsgId);
		
		/****************************************************************
		  �������ƣ� UpdateUserDataInfo
		  ��Ҫ�������޸��û�ͳ�ƺͿ�����Ϣ;
		  ���룺    userId��ó��ͨID����ID��
		  strangerMsgCount�������Ѿ����͵�İ������Ϣ����
		  onlineTimes����ε�¼���ۻ�ʱ��
		  addContactCount�������Ѿ���ӵĺ�������
		  activeDegree����ε�¼��Ǣ̸��Ծ��
rewordActDegree: ��ε�¼�Ľ�����Ծ��
�����    
�޸���־��
		 *****************************************************************/
		["amd" ] int  UpdateUserDataInfo(string userId, int strangerMsgCount, int onlineTimes, int addContactCount, int activeDegree, float rewardActDegree, float onlineActDegree, int addTribeCount);
		["amd" ] int  UpdateUserDataInfo2(string userId, int strangerMsgCount, int onlineTimes, int addContactCount, int activeDegree, float rewardActDegree, float onlineActDegree, int addTribeCount, int reqAddContactCount);
		["amd" ] int  UpdateUserDataInfo3(string userId, RIGHTTABLE rightMap, int onlineTimes,  int activeDegree, float rewardActDegree, float onlineActDegree);

		/****************************************************************
		  �������ƣ� UpdateUserDataInfo
		  ��Ҫ�������޸��û���Ӻ��Ѻͷ�����Ϣ��֤����;
		  ���룺    userId��ó��ͨID����ID��
		  addContactVerify�������ϵ����Ҫ��֤���
		  sendMsgVerify��������Ϣ��Ҫ��֤���
		  enbleSearchFlag: �Ƿ�����ͨ��uid�������Ϣ�������� 
		  �����    
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  UpdateUserVerifySet(string userId, int addContactVerify, int sendMsgVerify);
		["amd" ] int  UpdateUserVerifySetEx(string userId, int addContactVerify, int sendMsgVerify, int enbleSearchFlag);
		["amd" ] int  UpdateUserVerifySetQuestion(string userId, int addContactVerify, int sendMsgVerify, int enbleSearchFlag,
			string question, string answer);

		/****************************************************************
		  �������ƣ� UpdateGroup
		  ��Ҫ�������޸��û�������
		  ���룺    userId��ó��ͨID����ID��
		  groupName������
		  groupId����ID
		  groupTimes��������ʱ���
		  �����    
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  UpdateGroup(string userId, string groupName, int groupId, out int groupTimes);
		["amd" ] int  MoveGroup(string userId,long groupId,long newparentgid,out int groupTimes);


		/****************************************************************
		  �������ƣ� UpdateContactInfo
		  ��Ҫ�������޸���ϵ���ǳ�
		  ���룺    userId��ó��ͨID����ID��
		  contactId����ϵ��ID����ID��
		  nickName���ǳ�
groupId: ��ID
contactTimes����ϵ��ʱ���
�����    
�޸���־��
		 *****************************************************************/
		//int  UpdateContactInfo(string userId, string contactId, string nickName,int groupId, out int contactTimes);

		/****************************************************************
		  �������ƣ� UpdateContactNickName
		  ��Ҫ�������޸���ϵ���ǳ�
		  ���룺    userId��ó��ͨID����ID��
		  contactId����ϵ��ID����ID��
		  nickName���ǳ�
		  contactTimes����ϵ��ʱ���
		  �����    
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  UpdateContactNickName(string userId, string contactId, string nickName, out int contactTimes);

		/****************************************************************
		  �������ƣ� UpdateContactGroup
		  ��Ҫ�������޸���ϵ������Ϣ
		  ���룺    userId��ó��ͨID����ID��
		  contactId����ϵ��ID����ID��
		  srcGroupId��ԭ������
		  dstGroupId��Ŀ�����
		  contactTimes����ϵ��ʱ���
		  �����    
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  UpdateContactGroup(string userId, string contactId, int srcGroupId, int dstGroupId, out int contactTimes);

		/****************************************************************
		  �������ƣ� UpdateContactStatus
		  ��Ҫ�������޸���ϵ��״̬
		  ���룺    userId��ó��ͨID����ID��
		  contactId����ϵ��ID����ID��
		  status��״̬
		  contactTimes����ϵ��ʱ���
		  �����    
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  UpdateContactStatus(string userId, string contactId, int status, out int contactTimes);

		/****************************************************************
		  �������ƣ� UpdateNotifyMessage
		  ��Ҫ�������޸�֪ͨ��Ϣ״̬
		  ���룺    msgId��ϵͳ��ϢID
		  status��״̬
		  �����    
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  UpdateNotifyMessage(int msgId, int status);

		/****************************************************************
		  �������ƣ� UpdateToolProfiles
		  ��Ҫ�������޸��ⲿ��������
		  ���룺    userId��ó��ͨID����ID��
		  type����������
		  toolProfilsList���������б�
		  toolTimes����������������ʱ���
		  �����    
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  UpdateToolProfiles(string userId, int type, Ice::StringSeq toolProfilsList, out int toolTimes);
		["amd" ] int  UpdateToolProfilesEx(string userId,SICEToolProfileSeq toolProfilsList, out int toolTimes);

		/****************************************************************
		  �������ƣ� RemoveGroup
		  ��Ҫ������ɾ����
		  ���룺    userId��ó��ͨID����ID��
		  groupId����ID
		  groupTimes��������ʱ���
		  �����    
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  RemoveGroup(string userId, int groupId, out int groupTimes);

		/****************************************************************
		  �������ƣ� RemoveContact
		  ��Ҫ������ɾ����ϵ��
		  ���룺    userId��ó��ͨID����ID��
		  contactId����ϵ��ID,��ID
		  contactTimes��������ϵ��ʱ���
		  �����    
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  RemoveContact(string userId, string contactId, out int contactTimes);

		/****************************************************************
		  �������ƣ� RemoveInverfiedContact
		  ��Ҫ������ɾ����ϵ��
		  ���룺    userId��ó��ͨID����ID��
		  contactId����ϵ��ID,��ID
		  �����    
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  RemoveInverfiedContact(string userId, string contactId, out int contactTimes);

		/****************************************************************
		  �������ƣ� RemoveBlackList
		  ��Ҫ������ɾ��������ID
		  ���룺    userId��ó��ͨID����ID��
		  blackId��������ID,��ID
		  blackListTimes������������ʱ���
		  �����    �û�������IM NOUSER
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  RemoveBlackList(string userId, string blackId, out int blackListTimes);

		/****************************************************************
		  �������ƣ� RemoveBlackList
		  ��Ҫ������ɾ��������ID
		  ���룺    userId��ó��ͨID����ID��
		  otheruid��ó��ͨID,��ID
		  bBlacked���Ƿ�����
		  �����  
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  IsBlackedByOther(string userId, string otheruid, out bool bBlacked);


        /****************************************************************
          �������ƣ� RemoveBatchContacts
          ��Ҫ����������ɾ����ϵ��
          userId��ó��ͨID����ID��
          cids����ϵ��cid��
          modifyCntTimes: �����Ƿ����ó��ͨ��ϵ�ˣ�����ó��ͨ��ϵ��ʱ���
          modifyGenCntTimes: �����Ƿ������ͨ��ϵ�ˣ�������ͨ��ϵ��ʱ���
          �����    
          �޸���־��
         *****************************************************************/
        ["amd" ] int  RemoveBatchContacts(string userId, Ice::StringSeq cids, out ::Ice::StringSeq retVect,out int modifyCntTimes, out int modifyGenCntTime);

		/****************************************************************
		  �������ƣ�IMPGetUserDStatus
		  ��Ҫ�����������ϰ汾ó��ͨ��ȡ�Զ���״̬�Ĳ������ݿ�ӿڣ�������֮��ɾ��
		  ���룺    userId��ó��ͨID����ID��
		  userDStatusList�������û�״̬�б�
		  �����    û���Զ���״̬IM NODATAERR
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  GetUserDStatus(string userId, out SICEUserDStatusSeq userDStatusList);

		/****************************************************************
		  �������ƣ�IMPAddUserDStatus
		  ��Ҫ�����������ϰ汾ó��ͨ����Զ���״̬�Ĳ������ݿ�ӿڣ�������֮��ɾ��
		  ���룺    userId��ó��ͨID����ID��
		  userDStatus���û�����״̬
statusId: ����״̬��
�����    �Զ���״̬��IM DATAFULL
�޸���־��
		 *****************************************************************/
		["amd" ] int  AddUserDStatus(string userId, string userDStatus, out int statusId);

		/****************************************************************
		  �������ƣ�IMPRemoveUserDStatus
		  ��Ҫ�����������ϰ汾ó��ͨɾ���Զ���״̬�Ĳ������ݿ�ӿڣ�������֮��ɾ��
		  ���룺    userId��ó��ͨID����ID��
statusId: ״̬��
�����    
�޸���־��
		 *****************************************************************/
		["amd" ] int  RemoveUserDStatus(string userId, int statusId);

		//mojx add 2005/11/24

		/****************************************************************
		  �������ƣ�IMPGetAllContactList
		  ��Ҫ������
		  ���룺    userId��ó��ͨID����ID��
getFlag: 1����ֻȡcnttype=0��contactid, 2����ȡcontactid, groupid, nickname,cid,cnttype
�����    contactList��������ϵ���б�
�޸���־��
		 *****************************************************************/
		["amd" ] int  GetAllContactList(string uid, int getFlag, out SICEContactInfoSeq contactList, out int contactTimes, out int gencontacttimes);//�õ���ϵ���б�


		/****************************************************************
		  �������ƣ�IMPGetCntModifyLis
		  ��Ҫ������
		  ���룺    userId��ó��ͨID����ID��
sMaxSeqId: �ͻ��˱������ϵ����ϸ��Ϣ���������к�
�����    cntList�����Ĺ�����ϵ���б�
�޸���־��
		 *****************************************************************/
		["amd" ] int  GetCntModifyList(int getFlag,string uid, string sMaxSeqId, out SICECntCidModPairSeq cntList);

		/****************************************************************
		  �������ƣ�IMPAddGenContactFull
		  ��Ҫ������
		  ���룺    detail: ��ͨ��ϵ�˵���Ϣ

		  �����    retscid: ��������ϵ�˵�cid
retsmodseqid: ��������ϵ�˵ĸ������к�
timeStamps: ��������ϵ�˵����ɾ��ʱ���
�޸���־��
		 *****************************************************************/

		["amd" ] int  AddGenContactFull(SICEGenContactFull detail,out string retscid,out string  retsmodseqid, out long timeStamps);

		/****************************************************************
		  �������ƣ�IMPGetContactFull
		  ��Ҫ������
		  ���룺    detail: ��ͨ��ϵ�˵���Ϣ

		  �����    retscid: ��������ϵ�˵�cid
retsmodseqid: ��������ϵ�˵ĸ������к�
timeStamps: ��������ϵ�˵����ɾ��ʱ���
�޸���־��
		 *****************************************************************/

		["amd" ] int  GetContactDetail(string  uid, string  cid, out SICEGenContactFull detail);

		/****************************************************************
		  �������ƣ�IMPDelGenContact
		  ��Ҫ������
		  ���룺    uid: �û�loginId
cid: ��ϵ�˵�cid

�����    
�޸���־��
		 *****************************************************************/
		["amd" ] int  DelGenContact(string uid, string cid,out long contactTimes);
		/****************************************************************
		  �������ƣ� AddContact
		  ��Ҫ������Ϊ�û����һ����ϵ��
		  ���룺    userId��ó��ͨID����ID��
		  contactId����ϵ��ID,��ID
		  nickName���ǳ�
		  groupId����ID
		  contactTimes��������ϵ��ʱ���
retcid: ��ϵ��CID
retmodseqid: ��ϵ�˸������к�
�����    ��ϵ���Ѿ�����IM DATADUP
�޸���־��
		 *****************************************************************/
		["amd" ] int  AddContact(string userId, string contactId, string nickName, int groupId, int status,SUserWebBasicProfile cntInfo,  out int contactTimes,
				out string  retcid, out string  retmodseqid);

		/****************************************************************
		  �������ƣ� CheckUpgradeGenCnt
		  ��Ҫ����������Ƿ��������Ϊó��ͨ��ϵ��
		  ���룺    uid��ó��ͨID����ID��
		  contactId����ϵ��ID,��ID
cid: ��ϵ��CID
�����    ��ϵ���Ѿ�����IM DATADUP
�޸���־��
		 *****************************************************************/

		["amd" ] int  CheckUpgradeGenCnt(string  uid, string  cid, string  contactId);

		/****************************************************************
		  �������ƣ� ModifyGenCntID
		  ��Ҫ������������ͨ��ϵ�˵�IDΪó��ͬ��ϵ��ID
		  ���룺    uid��ó��ͨID����ID��
		  contactId����ϵ��ID,��ID
cid: ��ϵ��CID
�����    modseqid: ��ϸ��Ϣ�������к�
�޸���־��
		 *****************************************************************/
		["amd" ] int  ModifyGenCntID(string  uid, string  cid, string  contactId,out string  modseqid);

		/****************************************************************
		  �������ƣ� UpgradeGenContact
		  ��Ҫ������������ͨ��ϵ��Ϊó��ͬ��ϵ��
		  ���룺    uid��ó��ͨID����ID��
		  contactId����ϵ��ID,��ID
cid: ��ϵ��CID
cntstamp: �µ�ó��ͨ��ϵ��ʱ���
gencntstamp: �µ���ͨ��ϵ��ʱ���
�����    modseqid: ��ϸ��Ϣ�������к�
�޸���־��
		 *****************************************************************/
		["amd" ] int  UpgradeGenContact(string  uid, string  cid, string  contactId, out long cntstamp, out long gencntstamp,out string  modseqid);

		/****************************************************************
		  �������ƣ� GetUpdatedUserInfo
		  ��Ҫ������ȡ��֤ͨ��������ϵ�˸��Ĺ�����Ϣ
		  ���룺    uid��ó��ͨID����ID��
		  contactId����ϵ��ID,��ID

cntstamp: �µ�ó��ͨ��ϵ��ʱ���
gencntstamp: �µ���ͨ��ϵ��ʱ���
�����    cid: ��ϵ��CID
�޸���־��
		 *****************************************************************/
		["amd" ] int  GetUpdatedUserInfo(string  uid, string  contactId,out long cntstamp, out long gencntstamp, out string  retcid,out string  modseqid, out long groupid,out string  nickname);

		/****************************************************************
		  �������ƣ� ModifyContactDetail
		  ��Ҫ������ȡ��֤ͨ��������ϵ�˸��Ĺ�����Ϣ
		  ���룺    uid��ó��ͨID����ID��
		  contactId����ϵ��ID,��ID

cntstamp: �µ�ó��ͨ��ϵ��ʱ���
gencntstamp: �µ���ͨ��ϵ��ʱ���
�����    cid: ��ϵ��CID
�޸���־��
		 *****************************************************************/
		["amd" ] int  ModifyContactDetail(SICEGenContactFull  detail,out long gencntmodifyVersion, out string  modseqid);


		/****************************************************************
		  �������ƣ� UpdateContactGroupByCid
		  ��Ҫ�������޸���ϵ������Ϣ
		  ���룺    userId��ó��ͨID����ID��
		  contactId����ϵ��ID����ID��
		  srcGroupId��ԭ������
		  dstGroupId��Ŀ�����
		  contactTimes����ϵ��ʱ���
		  �����    
		  �޸���־��
		 *****************************************************************/
		["amd" ] int  UpdateContactGroupByCid(string userId, string cid, int srcGroupId, int dstGroupId, out int contactTimes);

		/****************************************************************
		  �������ƣ�DB_UpdateContactNickName
		  ��Ҫ�������޸���ϵ���ǳ�
		  ���룺    userId��ó��ͨID����ID��
		  cid����ϵ��CID������ID��
		  nickName���ǳ�
		  contactTimes����ϵ��ʱ���
		  �����    
		  �޸���־��
		 *****************************************************************/
		["amd" ] int UpdateContactNickNameByCid(string userId, string cid, string nickName, out int contactTimes);

		/****************************************************************
		  �������ƣ� GetCRMContactDetail
		  ��Ҫ������CRM�����ϵ����֤ʧ��ʱ��ȡ ���Ϊ��ͨ��ϵ�˵���ϸ��Ϣ�����ڴ�Member��ȡ 
		  ���룺    userId��ó��ͨID����ID��
		  cntid����ϵ��ID����ID��
cntDetail: ���ص���ϸ��Ϣ
�����    
�޸���־��
		 *****************************************************************/
		["amd" ] int  GetCRMContactDetail(string userId, string cntid, out SICECRMContactDetail cntDetail);
		["amd" ] int  GetHardCodeIds(string uuid, out int count, out string allids);
		["amd" ] int  UpdateHardCodeIds(string uuid, string id);

		/****************************************************************
		  �������ƣ�IMPGetCntOtherModifyLis
		  ��Ҫ������ȡ�Է��޸Ĺ��������ϵ���ϵ��ID�б�
		  ���룺    userId��ó��ͨID����ID��
sMaxSeqId: �ͻ��˱������ϵ����ϸ��Ϣ���������к�
cntList�����Ĺ�����ϵ���б�
�����    
�޸���־��
		 *****************************************************************/
		["amd" ] int GetCntOtherModifyList(string userId, string  sMaxSeqId, out SICECntOtherModInfoSeq cntList);		

		/****************************************************************
		  �������ƣ�GetCntOtherModifyInfo
		  ��Ҫ��������ϵ�˶Է��޸���Ϣ
		  ���룺    userId��ó��ͨID����ID��
		  cntOtherModInfo����ϵ�˶Է��޸���Ϣ
		  �����    
		  �޸���־��
		 *****************************************************************/
		["amd" ] int GetCntOtherModifyInfo(string  userId, out SICECntOtherModInfo cntOtherModInfo);	

        ["amd" ] int GetUserCRInfo(string uid, out int crState, out int begTime, out int activeDegree);
        ["amd" ] int SetUserCRInfo(string uid, int crState, out int begTime);
		//kongyw add for netphone 2006/01/24
		/****************************************************************
		  �������ƣ� GetNetPhoneAccount
		  ��Ҫ��������ȡ����绰�ʻ�
		  ���룺    userId��ó��ͨID����ID��
servicetype: ����绰��������
account: �����ʻ�
password: ��������
�����    IM NOUSER
�޸���־��
		 *****************************************************************/
		//int  GetNetPhoneAccount(string userId, int servicetype, out string  account, out string  password);

		/****************************************************************
		  �������ƣ� GetNetPhoneMailing
		  ��Ҫ��������ȡ����绰�ʵ�����
		  ���룺    userId��ó��ͨID����ID��
flag: �����Ƿ���Ҫ����(0����Ҫ1��Ҫ)
address: �������͵�ַ
�����    
�޸���־��
		 *****************************************************************/
		//int  GetNetPhoneMailing(string userId, int type, out int flag, out string  address, out int len);

		/****************************************************************
		  �������ƣ� GetNetPhoneOpenPresent
		  ��Ҫ��������ȡ����绰�������ͽ��
		  ���룺    userId��ó��ͨID����ID��
memberlevel: �û��ȼ�
money: �������ͽ��
�����    
�޸���־��
		 *****************************************************************/
		//int  GetNetPhoneOpenPresent(string userId, int memberlevel,  out int money);

		/****************************************************************
		  �������ƣ� GetNetPhoneDiscount
		  ��Ҫ��������ȡ����绰��ֵ�ۿ�
		  ���룺    userId��ó��ͨID����ID��
discount:  �����ۿ�
�����    
�޸���־��
		 *****************************************************************/
		//int  GetNetPhoneDiscount(string userId, out float discount);

		/****************************************************************
		  �������ƣ� GetNeedChargeRecord
		  ��Ҫ��������ȡ��Ҫ��ɵ�����绰��ֵ����
		  ���룺    inmins: �ڶ��ٷ�����
seqid: ������ֵ��ˮ��
account: �����ʺ�
denomination: �������
chargecardid :  ������ֵ����
chargecardpasswd: ������ֵ������
�����    
�޸���־��
		 *****************************************************************/
		//int  GetNeedChargeRecord(int inmins, int type, out string  seqid, out string  account, out int denomination, out string  chargecardid, out string  chargecardpasswd, out string uid, out int trytime);

		/****************************************************************
		  �������ƣ� GetChargeRecordInfo
		  ��Ҫ��������ȡ��Ҫ��ɵ�����绰��ֵ����
		  ���룺    seqid: �����ֵ��ˮ��
account: �����ʺ�
denomination: �������
chargecardid :  ������ֵ����
chargecardpasswd: ������ֵ������
status: ������ֵ״̬
�����    
�޸���־��
		 *****************************************************************/
		//int  GetChargeRecordInfo(string  seqid, out string account, out int denomination, out string  chargecardid, out string  chargecardpasswd, out string uid, out int status);

		/****************************************************************
		  �������ƣ� GetPayRecordInfo
		  ��Ҫ��������ȡ��Ҫ��ɵ�����绰��ֵ����
		  ���룺    seqid: �����ֵ��ˮ��
money: ������ֵ������
status: ������ֵ״̬
�����    
�޸���־��
		 *****************************************************************/
		//int  GetPayRecordInfo(string  seqid, out int money, out int status);

		/****************************************************************
		  �������ƣ� GetChargeRecords
		  ��Ҫ��������ȡ��Ҫ��ɵ�����绰��ֵ����
		  ���룺    uid: �û�ID
beginTime: ��ʼʱ��
endTime: ����ʱ��
chargeRecordList :  ������ֵ��¼
�����    
�޸���־��
		 *****************************************************************/
		//int  GetChargeRecords(string  uid, string beginTime, string endTime, out SICENetPhoneChargeInfoSeq chargeRecordList);

		/****************************************************************
		  �������ƣ� AddPayRecord
		  ��Ҫ��������ȡ���һ��֧����¼
		  ���룺    money��֧�����
seqid:  ����֧����ˮ��
�����    
�޸���־��
		 *****************************************************************/
		//int  AddPayRecord(int money, out string  seqid);

		/****************************************************************
		  �������ƣ� AddNetPhoneAccount
		  ��Ҫ����������һ������绰�ʻ�
		  ���룺    userId��ó��ͨID����ID��
type :  ����绰����
account: �����ʻ�
password:��������
�����    

�޸���־��
		 *****************************************************************/
		//int  AddNetPhoneAccount(string  userId, int type, out string  account, out string  password);

		/****************************************************************
		  �������ƣ� AddNetPhoneChargeRecord
		  ��Ҫ����������һ������绰��ֵ����
		  ���룺    userId��ó��ͨID����ID��
account: �ʻ�
type :  ��ֵ����
denomination: ��ֵ
money: ��ʵ���
payid: ֧����ˮ��
chargeid: ������ֵ��ˮ��
�����    
�޸���־��
		 *****************************************************************/
		//int  AddNetPhoneChargeRecord(string  userId, string  account, int  type, int denomination, int money, string payid, out string chargeid);

		/****************************************************************
		  �������ƣ� UpdatePayRecordStatus
		  ��Ҫ�������޸�֧����¼״̬
		  ���룺    seqid��֧����ˮ��
status :  ֧��״̬
desc: ��������
�����    
�޸���־��
		 *****************************************************************/
		//int  UpdatePayRecordStatus(string seqid, int status, out string  desc);

		/****************************************************************
		  �������ƣ� UpdateChargeRecordStatus
		  ��Ҫ�������޸ĳ�ֵ��¼״̬
		  ���룺    seqid����ֵ��ˮ��
status :  ��ֵ״̬
desc: ��������
�����    
�޸���־��
		 *****************************************************************/
		//int  UpdateChargeRecordStatus(string  seqid, int status, string  desc);

		/****************************************************************
		  �������ƣ� UpdateNetPhoneMailing
		  ��Ҫ�������޸�����绰�ʵ���������
		  ���룺    userId��ó��ͨID����ID��
flag :  �Ƿ����
address: ���͵�ַ
�����    
�޸���־��
		 *****************************************************************/
		//int  UpdateNetPhoneMailing(string  userId, int type, int flag, string  address, int addrLen);

		/****************************************************************
		  �������ƣ� UpdateNetPhoneLastUseTime
		  ��Ҫ�������޸�����绰�ʵ���������
		  ���룺    userId��ó��ͨID����ID��
		  �����    
		  �޸���־��
		 *****************************************************************/
		//int  UpdateNetPhoneLastUseTime(string  userIds, int type);

		/****************************************************************
		  �������ƣ� UpdateChargeCardInfo
		  ��Ҫ�������޸�����绰��ֵ����Ϣ
		  ���룺    cardno������
status: ʹ��״̬
�����    
�޸���־��
		 *****************************************************************/
		//int  UpdateChargeCardInfo(string  cardno, int status);

		/****************************************************************
		  �������ƣ� UpdateAccountCardInfo
		  ��Ҫ�������޸�����绰��ݿ���Ϣ
		  ���룺    account���ʺ�
status :  ʹ��״̬
flushdisabletime: ˢ��ʵЧ���ڱ�־
�����    
�޸���־��
		 *****************************************************************/
		//int  UpdateAccountCardInfo(string  account, int status, int flushdisabletime);

		/****************************************************************
		  �������ƣ� RemoveNetPhoneAccount
		  ��Ҫ������ɾ��ó��ͨ����绰�˻�
		  ���룺    userId��ó��ͨID����ID��
type: ��������
�����    
�޸���־��
		 *****************************************************************/
		//int  RemoveNetPhoneAccount(string userId,  int type);


		/****************************************************************
		  �������ƣ�GetSmsUserInfoByUid
		  ��Ҫ������ͨ���û�IDȡ�����û���Ϣ
		  ���룺    userId��ó��ͨID��
		  smsUserInfo�����������û���IMSMSUSER��Ϣ
		  �����    �û�������IMNOUSER
		  �޸���־��
		 *****************************************************************/
		["amd" ] int GetSmsUserInfoByUid(string userId, out SICESmsUserInfo smsUserInfo);


		/****************************************************************
		  �������ƣ�GetSmsUserMsgInfo
		  ��Ҫ�������������ܷ��·�
		  ���룺    userId��ó��ͨID��
todaySmsCount: �����Ѿ����͵Ķ�������
yesterdaySmsCount�����췢�͵Ķ�������
�����    �û�������IMNOUSER
�޸���־��
		 *****************************************************************/
		["amd" ] int GetSmsUserMsgInfo(string userId, out int todaySmsCount, out int yesterdaySmsCount);

		//kongyw add end . for contactList

		["amd" ] int DelOfflineMsg(string uid,string date);
		["amd" ] int DelOfflineMsgEx(string uid,int date);
        
		// taobao wap ���� �Ĺ����� ɾ��������Ϣ����
		["amd" ] int DelWapOfflineMsg(string uid, string date);
        
		["amd" ] int ModifyCntMemo(string uid, string cntid, string memo);//��������
		["amd" ] int GetCntMemo(string uid, string cntid,out string memo);//��������
        
		/****************************************************************
		  �������ƣ�DB_GetUserTribe
		  ��Ҫ������ȡ�û�����Ⱥ�б�
		  ���룺    userId        �û���
		  �����    tribeIdList   ȺID�б���ȺID��Ⱥ���������ֶΣ�
		  �޸���־��
		 *****************************************************************/
		["amd" ] int GetUserTribe (string userId, out ALiIMDBTribe::STribeIdDbSeq tribeIdList);
        
		/****************************************************************
		  �������ƣ�DB_GetTribeMember
		  ��Ҫ������ȡȺ��Ա��Ϣ
		  ���룺    tribeId        Ⱥ��
		  memberId       Ⱥ��ԱID
		  level          ��Ա����
		  �����    tribeMember     Ⱥ��Ա��Ϣ
		  �޸���־��
		 *****************************************************************/
		//int GetTribeMember (int tribeId, string memberId, int level, out ALiIMDBTribe::STribeMemberSeq tribeMemberList);

		/****************************************************************
		  �������ƣ�DB_GetUserTribeConfig
		  ��Ҫ������ȡ�û�Ⱥ������Ϣ
		  ���룺    userId        �û���
		  �����    addVerify     ����ȺУ���־
		  0x00          ����Ҫ��֤
		  0x01           ��Ҫ��֤
		  0x02           �ܾ�
		  �޸���־��
		 *****************************************************************/
		["amd" ] int GetUserTribeConfig(string userId, out int addVerify);

		/****************************************************************
		  �������ƣ�DB_UpdateUserTribeConfig
		  ��Ҫ�����������û�Ⱥ������Ϣ
		  ���룺    userId        �û���
		  addVerify     ����ȺУ���־
		  �����
		  �޸���־��
		 *****************************************************************/
		["amd" ] int UpdateUserTribeConfig(string userId, int addVerify);

		/****************************************************************
		  �������ƣ�GetTribeOffMngMsg
		  ��Ҫ������ȡ����Ա������Ϣ
		  ���룺    tribeId       Ⱥ��
		  memberId     Ⱥ��ԱID
		  �����    offlineMsg    ������Ϣ�б�
		  �޸���־��
		 *****************************************************************/
		["amd" ] int GetTribeOffMngMsg (int tribeId, string memberId, out ALiIMDBTribe::STribeOfflineMsgSeq offlineMsgList);

		/****************************************************************
		  �������ƣ�DelTribeOffMngMsg
		  ��Ҫ������ɾ��������Ϣ
		  ���룺    tribeId      ��Ⱥ��
		  memberId     Ⱥ��ԱID
		  �����
		  �޸���־��
		 *****************************************************************/
		["amd" ] int DelTribeOffMngMsg (int tribeId, string memberId);
        
		["amd" ] int ModifyPersonalShow(string uid, string newshow);
		["amd" ] int GetPersonalShow(string uid, out string show);
        
		["amd" ] int GetAllOnlineSmsUser(out Ice::StringSeq userList);
        
		//extend to get degree
		["amd" ] int GetUserKeyWordDegree(string userId, out string keyword,out int flag,out float degree);
		
        //extend to get uservalue
		["amd" ] int GetUserValue(string userId, out int uservalue);
        
		["amd" ] int UpdateUserMd5Password(string userId, string password);
        
		["amd" ] int InsertYahooUser(SUdbUserInfo userInfo, int activeDegree, SICEGenContactFullSeq contactList);
		
        ["amd" ] int  GetContactDetailByUid(string  uid, string  cid, out SICEGenContactFull detail);
        
		//kongyw add for onlineservice. 20070607
		/****************************************************************
		  �������ƣ�GetChildTeamList
		  ��Ҫ������ȡ�Ŷ����ʺ��б�
		  ���룺    parentId       ���˺�ID
		  �����    childTeamList    ���ʺ��б�
		  �޸���־��
		 *****************************************************************/
		["amd" ] int GetChildTeamList (string parentId, out AliIMDBBase::SChildUserInfoSeq childTeamList);
        
        ["amd" ] int GetChildTeamList2 (string parentId, out AliIMDBBase::SChildUserInfoSeq2 childTeamList);
        
		/****************************************************************
		  �������ƣ�GetChildUserInfo
		  ��Ҫ������ȡ���ʺ���Ϣ
		  ���룺    childId       ���˺�ID
		  �����    childInfo    ���ʺ���Ϣ
		  �޸���־��
		 *****************************************************************/
		["amd" ] int GetChildUserInfo (string childId, out AliIMDBBase::SChildUserInfo childInfo);
        
        ["amd" ] int GetChildUserInfo2 (string childId, out AliIMDBBase::SChildUserInfo2 childInfo);
        
		/****************************************************************
		  �������ƣ�GetShareContactList
		  ��Ҫ������ȡ���˺���Ҫ��������ϵ���б�
		  ���룺    uid       ���˺�ID
		  �����    shareContactIdList    Ҫ��������ϵ���б�
		  �޸���־��
		 *****************************************************************/
		["amd" ] int GetShareContactList (string uid, out Ice::StringSeq shareContactIdList);
        
		/****************************************************************
		  �������ƣ�GetContactShareInfo
		  ��Ҫ������ȡ���˺���Ҫ��������ϵ���б�
		  ���룺    uid       ���˺�ID
		  contactId    ��ϵ��ID
		  type     ��ѯ���� (1: �Ƿ����)
		  �����    value  ���(0 ��ʾ������1��ʾ����)
		  �޸���־��
		 *****************************************************************/
		["amd" ] int GetContactShareInfo (string uid, string contactId, int type, out int value);

		/****************************************************************
		  �������ƣ�SetContactShareInfo
		  ��Ҫ������ȡ���˺���Ҫ��������ϵ���б�
		  ���룺    uid       ���˺�ID
		  contactId    ��ϵ��ID
		  type     ��ѯ���� (1: �Ƿ����)
		  value  ���(0 ��ʾ������1��ʾ����)
		  �����    
		  �޸���־��
		 *****************************************************************/
		["amd" ] int SetContactShareInfo (string uid, string contactId, int type, int value);


		/****************************************************************
		  �������ƣ�GetMultiAccountContactList
		  ��Ҫ������ȡ���˺��û���ϵ���б�
		  ���룺    uid       ���˺�ID
		  �����    contactIdList    �û���ϵ���б�
		  �޸���־��
		 *****************************************************************/
		["amd" ] int GetMultiAccountContactList (string uid, out SICEContactInfoSeq contactIdList);

        /****************************************************************
        �������ƣ�GetMultiServiceList 
        ��Ҫ������ȡ���˺��û������б�
        ���룺    uid       ���˺�ID
        �����    ServiceList    �û���ϵ���б�
        �޸���־��
        *****************************************************************/
        ["amd" ] int GetMultiServiceList (string uid, out Ice::IntSeq ServiceList);

        /****************************************************************
        �������ƣ�GetMultiBindToUser
        ��Ҫ������ȡ�û��󶨵����ʺ��б�
        ���룺    uid       ���˺�ID
        �����    bindToUser�û���ϵ���б�
        �޸���־��
        *****************************************************************/
        ["amd" ] int GetMultiBindToUser(string uid, out string bindToUser);
		//kongyw add for onlineservice. 20070607

		["amd" ] int GetWebBinds(string uid, out SICEKvPairSeq binds);
		["amd" ] int AddWebBind(string uid, SICEKvPair bind, out string webmd5pw);
		["amd" ] int ChangeWebBind(string uid, SICEKvPair newbind, out string webmd5pw);
		["amd" ] int DelWebBind(string uid, string binduid);
        
		["amd" ] int getUserSession(string uid,out AliIM::SIceSession retsession);
		["amd" ] int checkUserSession(string uid,string sessionNo);
		["amd" ] int removeSession(string uid);	
		["amd" ] int UpdateSignature(string uid, string signature);

		["amd" ] int updateContactClientInfo(string uid, string cid, string data, out int contactTimes);

		["amd" ] int getUserProfile(string uid,out SICEKVMap profilemap);
		["amd" ] int getPeerVerifyFlag(string uid, string cid, out int flag);
		["amd" ] int getPeerVerifyFlagQuestion(string uid, string cid, out int flag, out string question, out string answer);
		["amd" ] int getNickName( string uid, out string nickname);
		
		["amd" ] int getFTServiceInfo(string senduid,string touid,out string srvIp, out short srvPort);
		["amd" ] int getTietuServiceInfo(string senduid,out int sessionSum,out string srvIp, out short srvPort);
		["amd" ] int getFTSAddr(short type, string senduid,out long ftsid,out string srvIp, out short srvPort);

		["amd" ] int registerWanghao(string longuid,AliIMInterface::KVMAP attrs);
		["amd" ] int updateUserProfile(string longuid,AliIMInterface::KVMAP newattrs);
		["amd" ] int loadSitePrefix(out SImPrefixSeq pv);
		["amd" ] int updateAepUserId(string longuid,string aepuserid);
		["amd" ] int updateVipflag(string uid, int  flag);
		["amd" ] int checkWangHaoPwd(string longuid,bool btokenpw,string pw,out string retluid,out string retPwToken,out string retmd5passwd,out int activeState);
		["amd" ] int checkCanLogin(string uid, int version, string extrainfo);
        ["amd" ] int GetSIPSessionId(string uid, string appid, string type, out string sessionId);
		["amd" ] int CheckGsContact(string uid, string contactid, out int flag);

		["amd" ] int UpdateSmsAuthCode(string uid, string phoneNo, string code);
		["amd" ] int CheckSmsAuthCode(string uid, string phoneNo, string code);
		["amd" ] int UpdateUserValueBySmsAuth(string uid);
		["amd" ] int CheckSmsAuthStatus(string uid, out int status);

		["amd" ] int CheckUserTokenExtra(string userId, string passwd,out string lid, out string retuidtokenpw,out string retmd5passwd ,out int activeStat, out int webdata);
		["amd" ] int CheckUserWebPasswdExtra(string userId, string passwd,out string lid, out string retuidtokenpw,out string retmd5passwd,out int activeStat, out int webdata);
        
        // e-service ���
		/*
		 * ����˵��:��ȡ���˺��Ƿ�������
		 *
		 * ����: uid        : ���˺�ID
		 * ���: shunt       : ������־ 1��������� 0�����������
		 *
		 * ����ֵ: -1  -> ���ݿ����ʧ��
		 *      ����    -> δ֪����
		 */
		["amd" ] int getESShuntStatus(string uid, out string shunt);                 
		
		/*
		 * ����˵��:�������˺��Ƿ�������
		 *
		 * ����: uid        : ���˺�ID
		 *  shunt       : ������־ 1��������� 0�����������
		 *
		 * ����ֵ: int  0   -> ���óɹ�
		 *      -1  -> ����ʧ��
		 *      -2  -> ���ݿ����ʧ��
		 *      ���� -> δ֪����
		 */
		["amd" ] int setESShuntStatus(string uid, string shunt);   
		
		/*
		 * ����˵��:��ȡĳһ���˺��¿ͷ�����߽Ӵ������б�
		 *
		 * ����: uid        : ���˺�ID
		 * �����list       : ���ص����˺��¿ͷ��б������ͷ�����߽Ӵ�������
		 *
		 * ����ֵ: int  0   -> ��ȡ�ɹ�
		 *      -1  -> ���ݿ����ʧ��
		 *      ����    -> δ֪����
		 */
		["amd" ] int getMaxESReceptNum(string uid,int groupId, out SICEReceptNumSeq eserviceList);   
		
		/*
		 * ����˵��:���ÿͷ�����߽Ӵ�����
		 *
		 * ����: uid        : ���˺�ID
		 *  list        : ���˺��¿ͷ��б������ͷ�����߽Ӵ�������
		 *
		 * ����ֵ: int  0   -> ���óɹ�
		 *      -1  -> ���ݿ����ʧ��
		 *      ����    -> δ֪����
		 */
		["amd" ] int setMaxESReceptNum(string uid, int groupId, SICEReceptNumSeq eserviceList);   
			
		/* 
		 * ����˵��:��ȡĳһ���˺��¿ͷ�����߽Ӵ������б�
		 * 
		 * ����: uid        : ���˺�ID
		 * �����list       : �������˺��¿ͷ�����˳���б�
		 * 
		 * ����ֵ: int  0   -> ��ȡ�ɹ�
		 *      -1  -> ���ݿ����ʧ��
		 *      ����    -> δ֪����
		 */
		["amd" ] int getESPriority(string uid, int groupId, out SICEReceptPrioritySeq eserviceList);
				
		/* 
		 * ����˵��:����ĳһ�˺��¿ͷ������ȽӴ�˳��
		 * 
		 * ����: uid        : ���˺�ID
		 *  list        : �ͷ�����˳���б�
		 * 
		 * ����ֵ: int  0   -> ���óɹ�
		 *      -1  -> ���ݿ����ʧ��
		 *      ����    -> δ֪����
		 */
		["amd" ] int setESPriority(string uid, int groupId, SICEReceptPrioritySeq eserviceList);
		
        ["amd" ] int getESRecvOffMsg(string uid, int groupId,out SICERecvOffMsgSeq eserviceList);
        ["amd" ] int setESRecvOffMsg(string uid, int groupId, SICERecvOffMsgSeq eserviceList);
        
		/*
		 * ����˵��:��ȡ�����б�
		 *
		 * ����: uid        : ���˺�ID
		 * �����list       : �������˺��·����б�
		 *
		 * ����ֵ: int  0   -> ��ȡ�ɹ�
		 *      -1  -> ���ݿ����ʧ��
		 *      ����    -> δ֪����
		 */
		["amd" ] int getESGroupList(string uid, out Ice::IntSeq groupList);
	   
		/*  
		 * ����˵��:��������
		 *
		 * ����: uid        : ���˺�ID
		 *  group       : �������
		 *
		 * ����ֵ: int  0   -> �༭�ɹ�
		 *      -1  -> ���ݿ����ʧ��
		 *      ����    -> δ֪����
		 */ 
		["amd" ] int insertESGroupInfo(string uid, SICEESGroupInfo groupInfo, out int groupId);
		
		/*  
		 * ����˵��:�޸ķ���
		 *
		 * ����: uid        : ���˺�ID
		 *  group       : �������
		 *
		 * ����ֵ: int  0   -> �༭�ɹ�
		 *      -1  -> ���ݿ����ʧ��
		 *      -2  -> ���鲻����
		 *      ����    -> δ֪����
		 */ 
		["amd" ] int updateESGroupInfo(string uid, SICEESGroupInfo group);
		
		/*  
		 * ����˵��:ɾ������
		 *
		 * ����: uid        : ���˺�ID
		 *  group_id    : ����id
		 *
		 * ����ֵ: int  0   -> ɾ���ɹ�
		 *      -1  -> ���ݿ����ʧ��
		 *      -2  -> ���鲻����
		 *      ����    -> δ֪����
		 */ 
		["amd" ] int delESGroup(string uid, int groupid);
		
		/*
		 * ����˵��:��ȡ�����е���Ϣ
		 *
		 * ����: uid        : ���˺�ID
		 *  group_id    : ����id
		 * �����group      : �������ϸ��Ϣ
		 *
		 * ����ֵ: int  0   -> ��ȡ�ɹ�
		 *      -1  -> ���ݿ����ʧ��
		 *      -2  -> �÷��鲻����
		 *      ����    -> δ֪����
		 */
		["amd" ] int getESGroupInfo(string uid, out SICEESGroupInfoSeq groupList);
		["amd" ] int getESGroupInfoByID(string uid,int groupId, out SICEESGroupInfo groupInfo);
        
        /*
		 * ����˵��:��ȡ���˺��Ƿ�����������������Ϣ
		 *
		 * ����: uid        : ���˺�ID
		 * �����groupId    : ����ID
		 *       userflag   : flag ��һλ��ʾ�Ƿ����
         *
		 * ����ֵ: int  0   -> ��ȡ�ɹ�
		 *      -1  -> ���ݿ����ʧ��
		 *      ����    -> δ֪����
		 */
		["amd" ] int getESUserFunc(string uid, string childid, out string userflag, out int groupId);
		
		/*  
		 * ����˵��:��ȡδ�������Ŀͷ��б�
		 *  
		 * ����: uid        : ���˺�ID
		 *
		 * �����list       : δ�������Ŀͷ��б�
		 *
		 * ����ֵ: int  0   -> ��ȡ�ɹ�
		 *      -1  -> ���ݿ����ʧ��
		 *      ����    -> δ֪����
		 */ 
		["amd" ] int getESUnJoinGroup(string uid, out Ice::StringSeq eserviceList);

		/*  
		 * ����˵��:��ȡ�ͷ��Ӵ�����б�
		 *
		 * ����: uid        : ���˺�ID
		 * �����list       : ��ȡ�ͷ��Ӵ�����б� 
		 *
		 * ����ֵ: int  0   -> ��ȡ�ɹ�
		 *      -1  -> ���ݿ����ʧ��
		 *      ����    -> δ֪����
		 */ 
		//int getESReceptList(string uid, out Ice::StringSeq eserviceList);
		
		/*
		 * ����˵��:�жϿͷ��Ƿ��ǹ���Ա
		 *
		 * ����: uid    : ���˺�ID
		 *  group_id    : ����id
		 *
		 * ����ֵ: int  1   -> �ǹ���Ա
		 *              0   -> ���ǹ���Ա
		 *      -1  -> ���ݿ����ʧ��
		 *      -2  -> �÷��鲻����
		 *      ����    -> δ֪����
		 */
		["amd" ] int checkESRole(string uid, out int groupId);


		["amd" ] int CheckWebWWPasswd(string userId, string passwd,out string lid, out string retuidtokenpw,out string retmd5passwd,out int activeStat);
        
        /*  
         * ����˵��         : ��ȡ�ͻ�����չ��Ϣ 
         *  
         * ����: uid        : ���˺�ID
         * ���: areaInfos  : ��չ����Ϣ
         *  
         * ����ֵ           : int  0   -> ��ȡ�ɹ�
         *      -1  -> ���ݿ����ʧ��
         *      ����    -> δ֪����
         */ 
        ["amd" ] int getESExpandArea(string uid, out AliIMDBBase::SICEExpandAreaSeq areaInfos);

        /*  
         * ����˵��         : ��ȡ�ͻ�����չ������Ϣ 
         *  
         * ����: uid        : ���˺�ID
         * ����: id         : ��չ����ID
         * ���: areaInfos  : ��չ����Ϣ
         *  
         * ����ֵ           : int  0   -> ��ȡ�ɹ�
         *      -1  -> ���ݿ����ʧ��
         *      ����    -> δ֪����
         */
        ["amd"] int getESExpandAreaById(string uid, int id, out SICEExpandArea areaInfos);

        /*  
         * ����˵��         : �����ͻ�����չ��Ϣ 
         *  
         * ����: uid        : ���˺�ID
         *       areaInfos  : ��չ����Ϣ
         *  
         * ����ֵ           : int  0   -> ��ȡ�ɹ�
         *      -1  -> ���ݿ����ʧ��
         *      ����    -> δ֪����
         */
        ["amd"] int addESExpandArea(string uid, SICEExpandArea areaInfo);
        
        /*  
         * ����˵��         : �޸Ŀͻ�����չ��Ϣ 
         *  
         * ����: uid        : ���˺�ID
         *       areaInfos  : ��չ����Ϣ
         *  
         * ����ֵ           : int  0   -> ��ȡ�ɹ�
         *      -1  -> ���ݿ����ʧ��
         *      ����    -> δ֪����
         */
        ["amd"] int updateESExpandArea(string uid, SICEExpandArea areaInfo);

        /*  
         * ����˵��         : ���ÿͻ�����չ��Ϣ 
         *  
         * ����: uid        : ���˺�ID
         *       expandArea_id  : ��չ��id
         *  
         * ����ֵ           : int  0   -> ��ȡ�ɹ�
         *      -1  -> ���ݿ����ʧ��
         *      ����    -> δ֪����
         */
        ["amd"] int delESExpandArea(string uid, int id);

        /*  
         * ����˵��         : Ԥ������������
         *  
         * ����: uid        : ���˺�ID
         *       esEvalInfos: E�ͷ���������
         *  
         * ����ֵ           : int  0   -> ��ȡ�ɹ�
         *      -1  -> ���ݿ����ʧ��
         *      ����    -> δ֪����
         */
        ["amd" ] int setESEval(string uid, string evalcontent, string welcome);

        /*  
         * ����˵��         : ȡ��������
         *  
         * ����: uid        : ���˺�ID
         *       esEvalInfos: E�ͷ���������
         *  
         * ����ֵ           : int  0   -> ��ȡ�ɹ�
         *      -1  -> ���ݿ����ʧ��
         *      ����    -> δ֪����
         */
        ["amd" ] int getESEval(string uid, out string evalcontent, out string welcome);


        /*  
         * ����˵��         : ��������
         *  
         * ����: uid        : ���˺�ID
         *       buyerid    : ���id
         *       
         *  
         * ����ֵ           : int  0   -> ��ȡ�ɹ�
         *      -1  -> ���ݿ����ʧ��
         *      ����    -> δ֪����
         */
        ["amd" ] int sendESEvalResult(string uid, string buyerid, out int evalId);


        /*  
         * ����˵��         : �������۽��
         *  
         * ����: uid        : ���˺�ID
         *       buyerid    : ���id
         *       
         *  
         * ����ֵ           : int  0   -> ��ȡ�ɹ�
         *      -1  -> ���ݿ����ʧ��
         *      ����    -> δ֪����
         */
        ["amd" ] int setESEvalResult(string uid, string buyerid, int evalId, string evalresult);

        /*  
         * ����˵��         : ȡ���۽��
         *  
         * ����: uid        : ���˺�ID
         *       buyerid    : ���id
         *       
         *  
         * ����ֵ           : int  0   -> ��ȡ�ɹ�
         *      -1  -> ���ݿ����ʧ��
         *      ����    -> δ֪����
         */
        ["amd" ] int getESEvalResult(string uid, string buyerid, int evalId, out string evalresult, out string gmtcreate, out string gmtmodify);
        
        /*  
         * ����˵��         : ȡ�������۽��
         *  
         * ����: uid        : ���˺�ID
         *       buyerid    : ���id
         *       
         *  
         * ����ֵ           : int  0   -> ��ȡ�ɹ�
         *      -1  -> ���ݿ����ʧ��
         *      ����    -> δ֪����
         */
        ["amd" ] int getESEvalResultToday(string uid, out SICEESEvalResultSeq evalInfos);
        
        /*  
         * ����˵��         : ȡ��ʷ���۽��
         *  
         * ����: uid        : ���˺�ID
         *       buyerid    : ���id
         *   
         *  
         * ����ֵ           : int  0   -> ��ȡ�ɹ�
         *      -1  -> ���ݿ����ʧ��
         *      ����    -> δ֪����
         */
        ["amd" ] int getESEvalResultHistory(string uid, string querytime, out SICEESEvalResultSeq evalInfos);
        
        /*  
         * ����˵��         : ȡ��ʷ���۽����ҳ��ʾ
         *  
         * ����: uid        : ���˺�ID
         *       buyerid    : ���id
         *   
         *  
         * ����ֵ           : int  0   -> ��ȡ�ɹ�
         *      -1  -> ���ݿ����ʧ��
         *      ����    -> δ֪����
         */
        ["amd" ]int getESEvalResultHistorybypage(string uid, string childid, string begindate, string enddate, int pageno, int pagesize, out int pagecount, out SICEESEvalResultExSeq evalInfos);
        
        /*  
         * ����˵��         : ȡ�����¼ʱ��
         *  
         * ����: uid        : ���˺�ID
         *       buyerid    : ���ID
         *       
         *  
         * ����ֵ           : int  0   -> ��ȡ�ɹ�
         *      -1  -> ���ݿ����ʧ��
         *      ����    -> δ֪����
         */
        ["amd" ] int getLastLoginTime(Ice::StringSeq loginids, out Ice::StringSeq loginTimes);
        
        /*  
         * ����˵��         : ��ȡ���˺��Ƿ�����ܷ���
         *  
         * ����: uid        : ���˺�ID
         *       
         * 
         * ����ֵ           : int  0   -> ��ȡ�ɹ�
         *      -1                     -> ���ݿ����ʧ��
         *      ����                   -> δ֪����
         */ 
        ["amd" ] int getChildShuntInfos(string uid, out SChildUserInfoSeq childInfos);
        
        /*  
         * ����˵��         : �������˺��Ƿ�����ܷ���
         *  
         * ����: uid        : ���˺�ID
         *       
         *  
         * ����ֵ           : int  0   -> ��ȡ�ɹ�
         *      -1  -> ���ݿ����ʧ��
         *      ����    -> δ֪����
         */
        ["amd" ] int setChildShuntInfos(string uid, SChildUserInfoSeq childinfos);
        
        /* 
         * ����˵��:��ȡ�������˺ŵ����˺�ID
         * 
         * ����: uid    : ���˺�ID
         * 
         * ����ֵ: int   0   -> �ɹ�
         *              -1  -> ���ݿ����ʧ�� 
         *              -2  -> ���û�������  ?�����ȵ�¼�ͻ���)
         *      ����    -> δ֪����
         */
        ["amd" ]int getAgentChild(string uid, out string agentId);
         
        /* 
         * ����˵��:���ô������˺ŵ����˺�ID
         * 
         * ����: uid    : ���˺�ID
         * 
         * ����ֵ: int   0   -> �ɹ�
         *              -1  -> ���ݿ����ʧ�� 
         *              -2  -> ���û�������  ?�����ȵ�¼�ͻ���)
         *      ����    -> δ֪����
         */ 
        ["amd" ]int setAgentChild(string uid, string agentId);
        
        /* 
         * ����˵��:��ȡ�������˺��б�
         * 
         * ����: uid    : ���˺�ID
         * 
         * ����ֵ: int   0   -> �ɹ�
         *              -1  -> ���ݿ����ʧ�� 
         *              -2  -> ���û�������  ?�����ȵ�¼�ͻ���)
         *      ����    -> δ֪����
         */ 
        ["amd" ]int getAgentList(string uid, out Ice::StringSeq agentIds);

        /****************************************************************
          �������ƣ�GetB2BChildTeamList
          ��Ҫ������B2Bȡ�Ŷ����ʺ��б�
          ���룺    parentId       ���˺�ID
          �����    childTeamList    ���ʺ��б�
          �޸���־��
         *****************************************************************/
        ["amd" ] int getB2BChildTeamList(string parentId, out AliIMDBBase::SB2BChildUserInfoSeq childTeamList);

        /****************************************************************
          �������ƣ�GetB2BChildTeamList
          ��Ҫ������B2Bȡ�Ŷ����ʺ��б�
          ���룺    parentId       ���˺�ID
          �����    childTeamList    ���ʺ��б�
          �޸���־��
         *****************************************************************/
        ["amd" ] int getB2BChildInfo(string parentId, string childid, out AliIMDBBase::SB2BChildUserInfo childInfo);

        /****************************************************************
          �������ƣ�GetB2BChildParentId
          ��Ҫ������B2B��ȡ���˺ŵĸ��˺�id
          ���룺    childid    ���˺�id 
          �����    fid        ���˺�id
          �޸���־��
         *****************************************************************/
        ["amd" ] int getB2BChildParentId(string childId, out string fid);

        /****************************************************************
          �������ƣ�AddB2BChild
          ��Ҫ������B2B���B2B���˺�
          ���룺    fid       ���˺�ID
          childid   ���˺�ID
          userflag
          �޸���־��
         *****************************************************************/
        ["amd" ] int addB2BChild(string fid, string childId, string userflag);

        /****************************************************************
          �������ƣ�UpdateB2BChild
          ��Ҫ������B2B����B2B���˺�
          ���룺    fid       ���˺�ID
          childid   ���˺�ID
          userflag
          �޸���־��
         *****************************************************************/
        ["amd" ] int updateB2BChild(string fid, string childId, string userflag);

        /****************************************************************
          �������ƣ�DeleteB2BChild
          ��Ҫ������B2B����B2B���˺�
          ���룺    fid       ���˺�ID
          childid   ���˺�ID
          userflag
          �޸���־��
         *****************************************************************/
        ["amd" ] int deleteB2BChild(string fid, string childId);
    };  
};      
        
#endif  
