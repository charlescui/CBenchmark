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
		//用户登陆时的第一条命令，向用户注册的网站查询密码，允许与否信息
		["amd" ] int CheckUserToken(string userId, string passwd,out string lid, out string retuidtokenpw,out string retmd5passwd,out int activeStat);
		["amd" ] int CheckTmpSession(string userId, string passwd,out string lid, out string retuidtokenpw,out string retmd5passwd,out int activeStat);
		["amd" ] int CheckUserWebPasswd(string userId, string passwd,out string lid, out string retuidtokenpw,out string retmd5passwd,out int activeStat);
        ["amd" ] int CheckUserPasswd(string userId,bool btokenpw, string passwd,out string retuidtokenpw,out string retmd5passwd,out int activeStat);
        ["amd"] int CheckUserWebToken(string userId, string token, out string reason);
        ["amd" ] int GetAtmLongid(string userId, out string longId);
		["amd" ] int  AddUser60(string userId,string md5passwd,string tokenpw,int languageid);
		["amd" ] int GetWebMemberPWInfo(string userId, out SMemberPWInfo pwInfo);
		["amd" ] int GetWebMemberPWInfoEx(string userId, out SMemberPWInfoEx pwInfo);
		["amd" ] int GetUserWebBasicProfile(string userId,out SUserWebBasicProfile profile);//获取用户的基本profile，用来导入到UDB中
		["amd" ] int CheckCanAddContact(string userId, string buddyId);//国际站用，

		//finduid是长ID,指的是谁发起这个操作， shortId指的是需要匹配的短Id
		["amd" ] int QueryMatchedUserIds(string finduid,string shortId,out SMatchedUserIdInfoSeq matchedIds);

		//添加联系人后更新该联系人的信息
		["amd" ] int UpdateContactWebInfo(string userId, string buddyId, SUserWebBasicProfile cntWebInfo);

		//webId是网站的用户ID, 内部逻辑是：检查该用户的IM_USer表里的gmt_create时间与当前时间相比是否小于7天，且该用户的累计在线时间是否小于56小时
		//应该加密过把，待定，string webId, string webIdMD5（webId加密过的md5)
		["amd" ] int DelTaobaoUser(string webId);
		["amd" ] int DelAnyUser(string imuserId); 
        
		/****************************************************************
		  函数名称： KeyWord
		  简要描述：增加删除，修改，查询关键字
		  输入：    userId：贸易通ID，长ID；
flag : 是否允许被查询 0表不能，1表能 
输出：    用户不存在IM NODATAERR
修改日志：
		 *****************************************************************/
        
		["amd" ] int AddUserKeyWord(string userId, string keyword,int flag);
		["amd" ] int UpdateUserKeyWord(string userId, string keyword,int flag);
		["amd" ] int GetUserKeyWord(string userId, out string keyword,out int flag);
		["amd" ] int QueryUserIdsByKeyWord(string keyword,out SMatchedUserIdInfoSeq matchedIds);

		/****************************************************************
		  函数名称： GetMemberInfo
		  简要描述：判断用户是否存在Member表，取用户的信息;
		  输入：    userId：贸易通ID，长ID；
		  memberInfo：传出用户Member表信息
		  输出：    用户不存在IM NODATAERR
		  修改日志：
		 *****************************************************************/
		//int  GetMemberInfo(string userId, out SICEMemberInfo memberInfo);

		/****************************************************************
		  函数名称： GetBatchMemberInfo, 从UDB中取用户的profiles
		  简要描述：取批量用户的信息;
		  输入：    userId：，长ID；
		  count：ID数量（不能超过10）个。
		  memberInfoList：传出用户Member表信息列表
		  输出：    用户不存在IM NOUSER
		  修改日志：
		 *****************************************************************/
		["amd" ] int  GetBatchMemberInfo(Ice::StringSeq userIds, out SICEMemberInfoSeq memberInfoList);

		/****************************************************************
		  函数名称： GetBatchMemberAssortInfo
		  简要描述：取批量用户分类信息;
		  输入：    userId：贸易通ID，长ID；
		  count：ID数量（不能超过1024）个。
		  memberInfoList：传出用户Member表信息列表
		  输出：    用户不存在IM NOUSER
		  修改日志：
		 *****************************************************************/
		//int  GetBatchMemberAssortInfo(Ice::StringSeq userIds,  out SICEMemberInfoSeq memberInfoList);

		/****************************************************************
		  函数名称： GetNotifyMessageUserId
		  简要描述：根据系统消息号sysId，取要发给的所有用户ID，包括 用户ID
		  输入：    sysId 系统消息号
		  userIdList：所有用户ID
		  输出：    系统消息号不存在IM NOSYSID, 给所有人发系统消息
		  修改日志：
		 *****************************************************************/
		//int  GetNotifyMessageUserId(int sysId, out Ice::StringSeq userIdList);


		/****************************************************************
		  函数名称： GetUidByPenname
		  简要描述：用笔名取用户名
		  输入：    penname: 笔名
		  SUserId：传出用户ID
		  输出：    用户不存在IM NOUSER
		  修改日志：
		 *****************************************************************/
		//int  GetUidByPenname(string penname, out string userId);

		/****************************************************************
		  函数名称： GetAllVersion
		  简要描述：取所有的贸易通版本
		  输入：    versionList：传出版本信息列表
		  输出：    
		  修改日志：
		 *****************************************************************/
		["amd" ] int  GetAllVersion(out SICEVersionSeq versionList);

		/****************************************************************
		  函数名称： GetAllSysMsg
		  简要描述：去所有有效的系统消息
		  输入：    sysMsgList：传出系统消息版本；
		  输出：    
		  修改日志：
		 *****************************************************************/
		["amd" ] int  GetAllSysMsg(out SICESysMessageSeq  sysMsgList);

        ["amd" ] int  GetAllExSysMsg(out SExICESysMessageSeq  sysMsgList);

		/****************************************************************
		  函数名称： GetAllUser
		  简要描述：取所有的贸易通用户列表，包括 ID，最后登录时间
		  输入：    userInfoList：传输贸易通用户信息列表
		  输出：    
		  修改日志：
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
		  函数名称： GetUserVerifyInfo
		  简要描述：取贸易通用户验证信息
		  输入：    userId：贸易通ID，长ID；
		  addcontactverify：用户被陌生人添加为联系人验证标记
		  sendmsgverify：   用户被陌生人发送消息验证标记
		  输出：    用户不存在IM NOUSER
		  修改日志：
		 *****************************************************************/
		["amd" ] int  GetUserVerifyInfo(string userId,out  byte addcontactverify, out byte sendmsgverify);
		["amd" ] int  GetUserVerifyInfoEx(string userId,out  byte addcontactverify, out byte sendmsgverify, out byte enableSearchFlag);
		["amd" ] int  GetUserVerifyInfoQuestion(string userId,out  byte addcontactverify, out byte sendmsgverify, out byte enableSearchFlag, out string question, out string answer);

		/****************************************************************
		  函数名称： GetGroupList
		  简要描述：取用户的组列表，包括 组ID，组名
		  输入：    userId：贸易通ID，长ID；
		  groupList：传出用户组列表
		  输出：    
		  修改日志：
		 *****************************************************************/
		["amd" ] int  GetGroupList(string userId, out SICEGroupInfoSeq groupList, out int groupTimes);
		["amd" ] int GetGroupListEx(string userId, out SICEGroupInfoExSeq groupList, out int groupTimes);

		/****************************************************************
		  函数名称： GetContactList
		  简要描述：取用户的联系人列表，包括 联系人ID,组ID，昵称
		  输入：    userId：贸易通ID，长ID；
		  contactList：传出联系人列表
		  输出：    
		  修改日志：
		 *****************************************************************/
		["amd" ] int  GetContactList(string userId, int getFlag, out SICEContactInfoSeq contactList, out int contactTimes);

		/****************************************************************
		  函数名称： GetBlackList
		  简要描述：取用户的黑名单列表，包括  黑名单ID
		  输入：    userId：贸易通ID，长ID；
		  blackList：传出黑名单列表
		  输出：    
		  修改日志：
		 *****************************************************************/
		["amd" ] int  GetBlackList(string userId, out Ice::StringSeq blackList, out int blacklistTimes);

		/****************************************************************
		  函数名称： GetReverseBlackList
		  简要描述：取用户的反向黑名单列表，包括  反向黑名单ID
		  输入：    userId：贸易通ID，长ID；
		  reverseBlackList：传出反向黑名单列表
		  输出：    
		  修改日志：
		 *****************************************************************/
		["amd" ] int  GetReverseBlackList(string userId, out Ice::StringSeq reverseBlackList, out int reverseBlacklistTimes);

		/****************************************************************
		  函数名称： GetOfflineMsg
		  简要描述：取用户的全部离线消息  包括 发送方，类型，时间，内容长度，内容

		  输入：    userId：贸易通ID，长ID；
		  offlineMsgList：传出离线消息列表
		  输出：    
		  修改日志：
		 *****************************************************************/
		["amd" ] int  GetOfflineMsg(string userId, out SICEOffLineMessegeSeq offlineMsgList, out int offlinemsgTimes);
		["amd" ] int  GetOfflineMsgEx(string userId, out SICEOffLineMessegeExSeq offlineMsgList, out int offlinemsgTimes);

		["amd" ] int GetOfflineMsgCount(string uid, out int chatMsgNum, out int sysMsgNum);

		 ["amd" ] int GetEnetOfflineMsgNum(string toId, string fromId, Ice::IntSeq types, out int msgNum);

		/****************************************************************
		  函数名称： GetContactInfo
		  简要描述：取贸易通用户某个联系人信息
		  输入：    userId：贸易通ID，长ID；
contactId: 贸易通ID，长ID；
contactInfo：传出联系人的IMCONTACT表信息
输出：    用户不存在IM NOUSER
修改日志：
		 *****************************************************************/
		["amd" ] int  GetContactInfo(string userId, string contactId, out SICEContactInfo contactInfo);


		/****************************************************************
		  函数名称： GetOfflineMsgNum
		  简要描述：取贸易通用户某个联系人信息
		  输入：    userId：贸易通ID，长ID；
		  msgNum：传出相应ID离线消息条数
		  输出：    
		  修改日志：
		 *****************************************************************/
		["amd" ] int  GetOfflineMsgNum(string userId, out int msgNum);

		/****************************************************************
		  函数名称： GetToolProfiles
		  简要描述：取贸易通用户某个外部工具的配置
		  输入：    userId：贸易通ID，长ID；
		  type：工具类型
		  nowTimes：客户端配置时间戳
		  toolProfilesList：传出配置列表
		  toolTimes：传出数据库配置时间戳
		  输出：    IM NODATAERR没有变化的数据
		  IM NOUSER用户不存在
		  修改日志：
		 *****************************************************************/
		["amd" ] int  GetToolProfiles(string userId, int type, int nowTimes, out Ice::StringSeq toolProfilesList, out int toolTimes);
		["amd" ] int  GetToolProfilesEx(string userId, int nowTimes, out SICEToolProfileSeq toolProfilesList, out int toolTimes);


		/****************************************************************
		  函数名称： GetSysMsg
		  简要描述：去所有有效的系统消息
		  输入：    sysId ：系统消息号
		  sysMsg：传出系统消息版本；
		  输出：    
		  修改日志：
		 *****************************************************************/
		["amd" ] int  GetSysMsg(int sysId, out SICESysMessage sysMsg);

		/****************************************************************
		  函数名称： AddUser
		  简要描述：添加贸易通用户
		  输入：    userId：贸易通ID，长ID；
		  输出：    用户已经存在IM DATADUP
		  修改日志：
		 *****************************************************************/
		["amd" ] int  AddUser(string userId);

		/****************************************************************
		  函数名称： AddGroup
		  简要描述：为用户添加一个组
		  输入：    userId：贸易通ID，长ID；
groupName: 组名
groupId：传出组Id
groupTimes：传出组时间戳
输出：    组已经存在IM DATADUP
修改日志：
		 *****************************************************************/
		["amd" ] int  AddGroup(string userId, string groupName, out int groupId, out int groupTimes);
		["amd" ] int  AddGroupEx(string userId, string groupName, int parentId, out int groupId, out int groupTimes);

		/****************************************************************
		  函数名称： AddBlackList
		  简要描述：为用户添加一个黑名单ID
		  输入：    userId：贸易通ID，长ID；
		  blackId：黑名单ID，长ID；
		  blackListTimes：传出黑名单时间戳
		  输出：    黑名单ID已经存在IM DATADUP
		  修改日志：
		 *****************************************************************/
		["amd" ] int  AddBlackList(string userId, string blackId, out int blackListTimes);

		/****************************************************************
		  函数名称： AddOfflineMsg
		  简要描述：添加一条离线消息
		  输入：    fromId：发送方ID，长ID；
		  toId：接受方ID，长ID；
		  type：消息类型,EOfflineMsgType
		  contect：内容
		  len：内容长度
		  输出：    数据已经满IM DATAFULL
		  修改日志：
		 *****************************************************************/
		["amd" ] int  AddOfflineMsg(string fromId, string toId, int type, string content);
		["amd" ] int AddExpriteTimeOfflineMsg(string fromId, string toId, int type, string content, string expireTime);
		["amd" ] int  AddOfflineMsgNoSMS(string fromId, string toId, int type, string content);

        ["amd" ] int  AddOfflineMsgEx(string fromId, string toId, int type, string content, long uniqueMsgTime);

		/****************************************************************
		  函数名称： AddHelpMsg
		  简要描述：添加一条热线帮助消息
		  输入：    fromId：发送方ID，长ID；
		  toId：接受方ID，长ID；
		  type：消息类型
		  contect：内容
		  len：内容长度
		  输出：    
		  修改日志：
		 *****************************************************************/
		//int  AddHelpMsg(string fromId, string toId, int type, string content);


		/****************************************************************
		  函数名称： UpdateUserLogin
		  简要描述：修改用户登录信息;
		  输入：    userId：贸易通ID，长ID；
		  sysMsgId：最后的系统消息号
		  输出：    
		  修改日志：
		 *****************************************************************/
		["amd" ] int  UpdateUserLogin(string userId, int sysMsgId);
		["amd" ] int  UpdateUserLoginEx(string userId, int sysMsgId,string loginIp);
		["amd" ] int  UpdateUserLoginDataInfo(string userId, int sysMsgId, string loginIp, int onlineTimes, int lastLoginTime);
		["amd" ] int  UpdateUserLoginDataInfoEx(string userId, int sysMsgId, string loginIp, int onlineTimes, int lastLoginTime, int isNeedToUpdate);

		/****************************************************************
		  函数名称： UpdateUserSysMsgId
		  简要描述：修改用户登录信息;
		  输入：    userId：贸易通ID，长ID；
		  sysMsgId：最后的系统消息号
		  输出：    
		  修改日志：
		 *****************************************************************/
		["amd" ] int  UpdateUserSysMsgId(string userId, int sysMsgId);
		
		/****************************************************************
		  函数名称： UpdateUserDataInfo
		  简要描述：修改用户统计和控制信息;
		  输入：    userId：贸易通ID，长ID；
		  strangerMsgCount：今天已经发送的陌生人消息数量
		  onlineTimes：这次登录的累积时间
		  addContactCount：今天已经添加的好友数量
		  activeDegree：这次登录的洽谈活跃度
rewordActDegree: 这次登录的奖励活跃度
输出：    
修改日志：
		 *****************************************************************/
		["amd" ] int  UpdateUserDataInfo(string userId, int strangerMsgCount, int onlineTimes, int addContactCount, int activeDegree, float rewardActDegree, float onlineActDegree, int addTribeCount);
		["amd" ] int  UpdateUserDataInfo2(string userId, int strangerMsgCount, int onlineTimes, int addContactCount, int activeDegree, float rewardActDegree, float onlineActDegree, int addTribeCount, int reqAddContactCount);
		["amd" ] int  UpdateUserDataInfo3(string userId, RIGHTTABLE rightMap, int onlineTimes,  int activeDegree, float rewardActDegree, float onlineActDegree);

		/****************************************************************
		  函数名称： UpdateUserDataInfo
		  简要描述：修改用户添加好友和发送消息验证设置;
		  输入：    userId：贸易通ID，长ID；
		  addContactVerify：添加联系人需要验证标记
		  sendMsgVerify：发送消息需要验证标记
		  enbleSearchFlag: 是否允许通过uid以外的信息被搜索到 
		  输出：    
		  修改日志：
		 *****************************************************************/
		["amd" ] int  UpdateUserVerifySet(string userId, int addContactVerify, int sendMsgVerify);
		["amd" ] int  UpdateUserVerifySetEx(string userId, int addContactVerify, int sendMsgVerify, int enbleSearchFlag);
		["amd" ] int  UpdateUserVerifySetQuestion(string userId, int addContactVerify, int sendMsgVerify, int enbleSearchFlag,
			string question, string answer);

		/****************************************************************
		  函数名称： UpdateGroup
		  简要描述：修改用户的组名
		  输入：    userId：贸易通ID，长ID；
		  groupName：组名
		  groupId：组ID
		  groupTimes：传出组时间戳
		  输出：    
		  修改日志：
		 *****************************************************************/
		["amd" ] int  UpdateGroup(string userId, string groupName, int groupId, out int groupTimes);
		["amd" ] int  MoveGroup(string userId,long groupId,long newparentgid,out int groupTimes);


		/****************************************************************
		  函数名称： UpdateContactInfo
		  简要描述：修改联系人昵称
		  输入：    userId：贸易通ID，长ID；
		  contactId：联系人ID，长ID；
		  nickName：昵称
groupId: 组ID
contactTimes：联系人时间戳
输出：    
修改日志：
		 *****************************************************************/
		//int  UpdateContactInfo(string userId, string contactId, string nickName,int groupId, out int contactTimes);

		/****************************************************************
		  函数名称： UpdateContactNickName
		  简要描述：修改联系人昵称
		  输入：    userId：贸易通ID，长ID；
		  contactId：联系人ID，长ID；
		  nickName：昵称
		  contactTimes：联系人时间戳
		  输出：    
		  修改日志：
		 *****************************************************************/
		["amd" ] int  UpdateContactNickName(string userId, string contactId, string nickName, out int contactTimes);

		/****************************************************************
		  函数名称： UpdateContactGroup
		  简要描述：修改联系人组信息
		  输入：    userId：贸易通ID，长ID；
		  contactId：联系人ID，长ID；
		  srcGroupId：原来的组
		  dstGroupId：目标的组
		  contactTimes：联系人时间戳
		  输出：    
		  修改日志：
		 *****************************************************************/
		["amd" ] int  UpdateContactGroup(string userId, string contactId, int srcGroupId, int dstGroupId, out int contactTimes);

		/****************************************************************
		  函数名称： UpdateContactStatus
		  简要描述：修改联系人状态
		  输入：    userId：贸易通ID，长ID；
		  contactId：联系人ID，长ID；
		  status：状态
		  contactTimes：联系人时间戳
		  输出：    
		  修改日志：
		 *****************************************************************/
		["amd" ] int  UpdateContactStatus(string userId, string contactId, int status, out int contactTimes);

		/****************************************************************
		  函数名称： UpdateNotifyMessage
		  简要描述：修改通知消息状态
		  输入：    msgId：系统消息ID
		  status：状态
		  输出：    
		  修改日志：
		 *****************************************************************/
		["amd" ] int  UpdateNotifyMessage(int msgId, int status);

		/****************************************************************
		  函数名称： UpdateToolProfiles
		  简要描述：修改外部工具配置
		  输入：    userId：贸易通ID，长ID；
		  type：工具类型
		  toolProfilsList：新配置列表
		  toolTimes：传出服务器配置时间戳
		  输出：    
		  修改日志：
		 *****************************************************************/
		["amd" ] int  UpdateToolProfiles(string userId, int type, Ice::StringSeq toolProfilsList, out int toolTimes);
		["amd" ] int  UpdateToolProfilesEx(string userId,SICEToolProfileSeq toolProfilsList, out int toolTimes);

		/****************************************************************
		  函数名称： RemoveGroup
		  简要描述：删除组
		  输入：    userId：贸易通ID，长ID；
		  groupId：组ID
		  groupTimes：传出组时间戳
		  输出：    
		  修改日志：
		 *****************************************************************/
		["amd" ] int  RemoveGroup(string userId, int groupId, out int groupTimes);

		/****************************************************************
		  函数名称： RemoveContact
		  简要描述：删除联系人
		  输入：    userId：贸易通ID，长ID；
		  contactId：联系人ID,长ID
		  contactTimes：传出联系人时间戳
		  输出：    
		  修改日志：
		 *****************************************************************/
		["amd" ] int  RemoveContact(string userId, string contactId, out int contactTimes);

		/****************************************************************
		  函数名称： RemoveInverfiedContact
		  简要描述：删除联系人
		  输入：    userId：贸易通ID，长ID；
		  contactId：联系人ID,长ID
		  输出：    
		  修改日志：
		 *****************************************************************/
		["amd" ] int  RemoveInverfiedContact(string userId, string contactId, out int contactTimes);

		/****************************************************************
		  函数名称： RemoveBlackList
		  简要描述：删除黑名单ID
		  输入：    userId：贸易通ID，长ID；
		  blackId：黑名单ID,长ID
		  blackListTimes：传出黑名单时间戳
		  输出：    用户不存在IM NOUSER
		  修改日志：
		 *****************************************************************/
		["amd" ] int  RemoveBlackList(string userId, string blackId, out int blackListTimes);

		/****************************************************************
		  函数名称： RemoveBlackList
		  简要描述：删除黑名单ID
		  输入：    userId：贸易通ID，长ID；
		  otheruid：贸易通ID,长ID
		  bBlacked：是否被屏蔽
		  输出：  
		  修改日志：
		 *****************************************************************/
		["amd" ] int  IsBlackedByOther(string userId, string otheruid, out bool bBlacked);


        /****************************************************************
          函数名称： RemoveBatchContacts
          简要描述：批量删除联系人
          userId：贸易通ID，长ID；
          cids：联系人cid；
          modifyCntTimes: 传入是否包含贸易通联系人，传出贸易通联系人时间戳
          modifyGenCntTimes: 传入是否包含普通联系人，传出普通联系人时间戳
          输出：    
          修改日志：
         *****************************************************************/
        ["amd" ] int  RemoveBatchContacts(string userId, Ice::StringSeq cids, out ::Ice::StringSeq retVect,out int modifyCntTimes, out int modifyGenCntTime);

		/****************************************************************
		  函数名称：IMPGetUserDStatus
		  简要描述：这是老版本贸易通获取自定义状态的操作数据库接口，过渡期之后删除
		  输入：    userId：贸易通ID，长ID；
		  userDStatusList：传出用户状态列表
		  输出：    没有自定义状态IM NODATAERR
		  修改日志：
		 *****************************************************************/
		["amd" ] int  GetUserDStatus(string userId, out SICEUserDStatusSeq userDStatusList);

		/****************************************************************
		  函数名称：IMPAddUserDStatus
		  简要描述：这是老版本贸易通添加自定义状态的操作数据库接口，过渡期之后删除
		  输入：    userId：贸易通ID，长ID；
		  userDStatus：用户定义状态
statusId: 传出状态号
输出：    自定义状态满IM DATAFULL
修改日志：
		 *****************************************************************/
		["amd" ] int  AddUserDStatus(string userId, string userDStatus, out int statusId);

		/****************************************************************
		  函数名称：IMPRemoveUserDStatus
		  简要描述：这是老版本贸易通删除自定义状态的操作数据库接口，过渡期之后删除
		  输入：    userId：贸易通ID，长ID；
statusId: 状态号
输出：    
修改日志：
		 *****************************************************************/
		["amd" ] int  RemoveUserDStatus(string userId, int statusId);

		//mojx add 2005/11/24

		/****************************************************************
		  函数名称：IMPGetAllContactList
		  简要描述：
		  输入：    userId：贸易通ID，长ID；
getFlag: 1代表只取cnttype=0的contactid, 2代表取contactid, groupid, nickname,cid,cnttype
输出：    contactList：传出联系人列表
修改日志：
		 *****************************************************************/
		["amd" ] int  GetAllContactList(string uid, int getFlag, out SICEContactInfoSeq contactList, out int contactTimes, out int gencontacttimes);//得到联系人列表


		/****************************************************************
		  函数名称：IMPGetCntModifyLis
		  简要描述：
		  输入：    userId：贸易通ID，长ID；
sMaxSeqId: 客户端保存的联系人详细信息最大更改序列号
输出：    cntList：更改过的联系人列表
修改日志：
		 *****************************************************************/
		["amd" ] int  GetCntModifyList(int getFlag,string uid, string sMaxSeqId, out SICECntCidModPairSeq cntList);

		/****************************************************************
		  函数名称：IMPAddGenContactFull
		  简要描述：
		  输入：    detail: 普通联系人的信息

		  输出：    retscid: 新增加联系人的cid
retsmodseqid: 新增加联系人的更改序列号
timeStamps: 新增加联系人的添加删除时间戳
修改日志：
		 *****************************************************************/

		["amd" ] int  AddGenContactFull(SICEGenContactFull detail,out string retscid,out string  retsmodseqid, out long timeStamps);

		/****************************************************************
		  函数名称：IMPGetContactFull
		  简要描述：
		  输入：    detail: 普通联系人的信息

		  输出：    retscid: 新增加联系人的cid
retsmodseqid: 新增加联系人的更改序列号
timeStamps: 新增加联系人的添加删除时间戳
修改日志：
		 *****************************************************************/

		["amd" ] int  GetContactDetail(string  uid, string  cid, out SICEGenContactFull detail);

		/****************************************************************
		  函数名称：IMPDelGenContact
		  简要描述：
		  输入：    uid: 用户loginId
cid: 联系人的cid

输出：    
修改日志：
		 *****************************************************************/
		["amd" ] int  DelGenContact(string uid, string cid,out long contactTimes);
		/****************************************************************
		  函数名称： AddContact
		  简要描述：为用户添加一个联系人
		  输入：    userId：贸易通ID，长ID；
		  contactId：联系人ID,长ID
		  nickName：昵称
		  groupId：组ID
		  contactTimes：传出联系人时间戳
retcid: 联系人CID
retmodseqid: 联系人更改序列号
输出：    联系人已经存在IM DATADUP
修改日志：
		 *****************************************************************/
		["amd" ] int  AddContact(string userId, string contactId, string nickName, int groupId, int status,SUserWebBasicProfile cntInfo,  out int contactTimes,
				out string  retcid, out string  retmodseqid);

		/****************************************************************
		  函数名称： CheckUpgradeGenCnt
		  简要描述：检查是否可以升级为贸易通联系人
		  输入：    uid：贸易通ID，长ID；
		  contactId：联系人ID,长ID
cid: 联系人CID
输出：    联系人已经存在IM DATADUP
修改日志：
		 *****************************************************************/

		["amd" ] int  CheckUpgradeGenCnt(string  uid, string  cid, string  contactId);

		/****************************************************************
		  函数名称： ModifyGenCntID
		  简要描述：更改普通联系人的ID为贸易同联系人ID
		  输入：    uid：贸易通ID，长ID；
		  contactId：联系人ID,长ID
cid: 联系人CID
输出：    modseqid: 详细信息更改序列号
修改日志：
		 *****************************************************************/
		["amd" ] int  ModifyGenCntID(string  uid, string  cid, string  contactId,out string  modseqid);

		/****************************************************************
		  函数名称： UpgradeGenContact
		  简要描述：升级普通联系人为贸易同联系人
		  输入：    uid：贸易通ID，长ID；
		  contactId：联系人ID,长ID
cid: 联系人CID
cntstamp: 新的贸易通联系人时间戳
gencntstamp: 新的普通联系人时间戳
输出：    modseqid: 详细信息更改序列号
修改日志：
		 *****************************************************************/
		["amd" ] int  UpgradeGenContact(string  uid, string  cid, string  contactId, out long cntstamp, out long gencntstamp,out string  modseqid);

		/****************************************************************
		  函数名称： GetUpdatedUserInfo
		  简要描述：取验证通过的新联系人更改过的信息
		  输入：    uid：贸易通ID，长ID；
		  contactId：联系人ID,长ID

cntstamp: 新的贸易通联系人时间戳
gencntstamp: 新的普通联系人时间戳
输出：    cid: 联系人CID
修改日志：
		 *****************************************************************/
		["amd" ] int  GetUpdatedUserInfo(string  uid, string  contactId,out long cntstamp, out long gencntstamp, out string  retcid,out string  modseqid, out long groupid,out string  nickname);

		/****************************************************************
		  函数名称： ModifyContactDetail
		  简要描述：取验证通过的新联系人更改过的信息
		  输入：    uid：贸易通ID，长ID；
		  contactId：联系人ID,长ID

cntstamp: 新的贸易通联系人时间戳
gencntstamp: 新的普通联系人时间戳
输出：    cid: 联系人CID
修改日志：
		 *****************************************************************/
		["amd" ] int  ModifyContactDetail(SICEGenContactFull  detail,out long gencntmodifyVersion, out string  modseqid);


		/****************************************************************
		  函数名称： UpdateContactGroupByCid
		  简要描述：修改联系人组信息
		  输入：    userId：贸易通ID，长ID；
		  contactId：联系人ID，长ID；
		  srcGroupId：原来的组
		  dstGroupId：目标的组
		  contactTimes：联系人时间戳
		  输出：    
		  修改日志：
		 *****************************************************************/
		["amd" ] int  UpdateContactGroupByCid(string userId, string cid, int srcGroupId, int dstGroupId, out int contactTimes);

		/****************************************************************
		  函数名称：DB_UpdateContactNickName
		  简要描述：修改联系人昵称
		  输入：    userId：贸易通ID，长ID；
		  cid：联系人CID，序列ID；
		  nickName：昵称
		  contactTimes：联系人时间戳
		  输出：    
		  修改日志：
		 *****************************************************************/
		["amd" ] int UpdateContactNickNameByCid(string userId, string cid, string nickName, out int contactTimes);

		/****************************************************************
		  函数名称： GetCRMContactDetail
		  简要描述：CRM添加联系人验证失败时，取 添加为普通联系人的详细信息，现在从Member表取 
		  输入：    userId：贸易通ID，长ID；
		  cntid：联系人ID，长ID；
cntDetail: 返回的详细信息
输出：    
修改日志：
		 *****************************************************************/
		["amd" ] int  GetCRMContactDetail(string userId, string cntid, out SICECRMContactDetail cntDetail);
		["amd" ] int  GetHardCodeIds(string uuid, out int count, out string allids);
		["amd" ] int  UpdateHardCodeIds(string uuid, string id);

		/****************************************************************
		  函数名称：IMPGetCntOtherModifyLis
		  简要描述：取对方修改过个人资料的联系人ID列表
		  输入：    userId：贸易通ID，长ID；
sMaxSeqId: 客户端保存的联系人详细信息最大更改序列号
cntList：更改过的联系人列表
输出：    
修改日志：
		 *****************************************************************/
		["amd" ] int GetCntOtherModifyList(string userId, string  sMaxSeqId, out SICECntOtherModInfoSeq cntList);		

		/****************************************************************
		  函数名称：GetCntOtherModifyInfo
		  简要描述：联系人对方修改信息
		  输入：    userId：贸易通ID，长ID；
		  cntOtherModInfo：联系人对方修改信息
		  输出：    
		  修改日志：
		 *****************************************************************/
		["amd" ] int GetCntOtherModifyInfo(string  userId, out SICECntOtherModInfo cntOtherModInfo);	

        ["amd" ] int GetUserCRInfo(string uid, out int crState, out int begTime, out int activeDegree);
        ["amd" ] int SetUserCRInfo(string uid, int crState, out int begTime);
		//kongyw add for netphone 2006/01/24
		/****************************************************************
		  函数名称： GetNetPhoneAccount
		  简要描述：获取网络电话帐户
		  输入：    userId：贸易通ID，长ID；
servicetype: 网络电话服务类型
account: 传出帐户
password: 传出密码
输出：    IM NOUSER
修改日志：
		 *****************************************************************/
		//int  GetNetPhoneAccount(string userId, int servicetype, out string  account, out string  password);

		/****************************************************************
		  函数名称： GetNetPhoneMailing
		  简要描述：获取网络电话帐单寄送
		  输入：    userId：贸易通ID，长ID；
flag: 传出是否需要寄送(0不需要1需要)
address: 传出寄送地址
输出：    
修改日志：
		 *****************************************************************/
		//int  GetNetPhoneMailing(string userId, int type, out int flag, out string  address, out int len);

		/****************************************************************
		  函数名称： GetNetPhoneOpenPresent
		  简要描述：获取网络电话开卡赠送金额
		  输入：    userId：贸易通ID，长ID；
memberlevel: 用户等级
money: 传出赠送金额
输出：    
修改日志：
		 *****************************************************************/
		//int  GetNetPhoneOpenPresent(string userId, int memberlevel,  out int money);

		/****************************************************************
		  函数名称： GetNetPhoneDiscount
		  简要描述：获取网络电话充值折扣
		  输入：    userId：贸易通ID，长ID；
discount:  传出折扣
输出：    
修改日志：
		 *****************************************************************/
		//int  GetNetPhoneDiscount(string userId, out float discount);

		/****************************************************************
		  函数名称： GetNeedChargeRecord
		  简要描述：获取需要完成的网络电话充值请求
		  输入：    inmins: 在多少分钟内
seqid: 传出充值流水号
account: 传出帐号
denomination: 传出面额
chargecardid :  传出充值卡号
chargecardpasswd: 传出充值卡密码
输出：    
修改日志：
		 *****************************************************************/
		//int  GetNeedChargeRecord(int inmins, int type, out string  seqid, out string  account, out int denomination, out string  chargecardid, out string  chargecardpasswd, out string uid, out int trytime);

		/****************************************************************
		  函数名称： GetChargeRecordInfo
		  简要描述：获取需要完成的网络电话充值请求
		  输入：    seqid: 传入充值流水号
account: 传出帐号
denomination: 传出面额
chargecardid :  传出充值卡号
chargecardpasswd: 传出充值卡密码
status: 传出充值状态
输出：    
修改日志：
		 *****************************************************************/
		//int  GetChargeRecordInfo(string  seqid, out string account, out int denomination, out string  chargecardid, out string  chargecardpasswd, out string uid, out int status);

		/****************************************************************
		  函数名称： GetPayRecordInfo
		  简要描述：获取需要完成的网络电话充值请求
		  输入：    seqid: 传入充值流水号
money: 传出充值卡密码
status: 传出充值状态
输出：    
修改日志：
		 *****************************************************************/
		//int  GetPayRecordInfo(string  seqid, out int money, out int status);

		/****************************************************************
		  函数名称： GetChargeRecords
		  简要描述：获取需要完成的网络电话充值请求
		  输入：    uid: 用户ID
beginTime: 开始时间
endTime: 结束时间
chargeRecordList :  传出充值记录
输出：    
修改日志：
		 *****************************************************************/
		//int  GetChargeRecords(string  uid, string beginTime, string endTime, out SICENetPhoneChargeInfoSeq chargeRecordList);

		/****************************************************************
		  函数名称： AddPayRecord
		  简要描述：获取添加一条支付记录
		  输入：    money：支付金额
seqid:  传出支付流水号
输出：    
修改日志：
		 *****************************************************************/
		//int  AddPayRecord(int money, out string  seqid);

		/****************************************************************
		  函数名称： AddNetPhoneAccount
		  简要描述：增加一个网络电话帐户
		  输入：    userId：贸易通ID，长ID；
type :  网络电话类型
account: 传出帐户
password:传出密码
输出：    

修改日志：
		 *****************************************************************/
		//int  AddNetPhoneAccount(string  userId, int type, out string  account, out string  password);

		/****************************************************************
		  函数名称： AddNetPhoneChargeRecord
		  简要描述：增加一个网络电话充值请求
		  输入：    userId：贸易通ID，长ID；
account: 帐户
type :  充值类型
denomination: 面值
money: 真实金额
payid: 支付流水号
chargeid: 传出充值流水号
输出：    
修改日志：
		 *****************************************************************/
		//int  AddNetPhoneChargeRecord(string  userId, string  account, int  type, int denomination, int money, string payid, out string chargeid);

		/****************************************************************
		  函数名称： UpdatePayRecordStatus
		  简要描述：修改支付记录状态
		  输入：    seqid：支付流水号
status :  支付状态
desc: 错误描述
输出：    
修改日志：
		 *****************************************************************/
		//int  UpdatePayRecordStatus(string seqid, int status, out string  desc);

		/****************************************************************
		  函数名称： UpdateChargeRecordStatus
		  简要描述：修改充值记录状态
		  输入：    seqid：充值流水号
status :  充值状态
desc: 错误描述
输出：    
修改日志：
		 *****************************************************************/
		//int  UpdateChargeRecordStatus(string  seqid, int status, string  desc);

		/****************************************************************
		  函数名称： UpdateNetPhoneMailing
		  简要描述：修改网络电话帐单寄送配置
		  输入：    userId：贸易通ID，长ID；
flag :  是否寄送
address: 寄送地址
输出：    
修改日志：
		 *****************************************************************/
		//int  UpdateNetPhoneMailing(string  userId, int type, int flag, string  address, int addrLen);

		/****************************************************************
		  函数名称： UpdateNetPhoneLastUseTime
		  简要描述：修改网络电话帐单寄送配置
		  输入：    userId：贸易通ID，长ID；
		  输出：    
		  修改日志：
		 *****************************************************************/
		//int  UpdateNetPhoneLastUseTime(string  userIds, int type);

		/****************************************************************
		  函数名称： UpdateChargeCardInfo
		  简要描述：修改网络电话充值卡信息
		  输入：    cardno：卡号
status: 使用状态
输出：    
修改日志：
		 *****************************************************************/
		//int  UpdateChargeCardInfo(string  cardno, int status);

		/****************************************************************
		  函数名称： UpdateAccountCardInfo
		  简要描述：修改网络电话身份卡信息
		  输入：    account：帐号
status :  使用状态
flushdisabletime: 刷新实效日期标志
输出：    
修改日志：
		 *****************************************************************/
		//int  UpdateAccountCardInfo(string  account, int status, int flushdisabletime);

		/****************************************************************
		  函数名称： RemoveNetPhoneAccount
		  简要描述：删除贸易通网络电话账户
		  输入：    userId：贸易通ID，长ID；
type: 服务类型
输出：    
修改日志：
		 *****************************************************************/
		//int  RemoveNetPhoneAccount(string userId,  int type);


		/****************************************************************
		  函数名称：GetSmsUserInfoByUid
		  简要描述：通过用户ID取短信用户信息
		  输入：    userId：贸易通ID；
		  smsUserInfo：传出短信用户表IMSMSUSER信息
		  输出：    用户不存在IMNOUSER
		  修改日志：
		 *****************************************************************/
		["amd" ] int GetSmsUserInfoByUid(string userId, out SICESmsUserInfo smsUserInfo);


		/****************************************************************
		  函数名称：GetSmsUserMsgInfo
		  简要描述：检查短信能否下发
		  输入：    userId：贸易通ID；
todaySmsCount: 今天已经发送的短信数量
yesterdaySmsCount：昨天发送的短信数量
输出：    用户不存在IMNOUSER
修改日志：
		 *****************************************************************/
		["amd" ] int GetSmsUserMsgInfo(string userId, out int todaySmsCount, out int yesterdaySmsCount);

		//kongyw add end . for contactList

		["amd" ] int DelOfflineMsg(string uid,string date);
		["amd" ] int DelOfflineMsgEx(string uid,int date);
        
		// taobao wap 旺旺 的过来的 删除离线消息请求
		["amd" ] int DelWapOfflineMsg(string uid, string date);
        
		["amd" ] int ModifyCntMemo(string uid, string cntid, string memo);//给旺旺用
		["amd" ] int GetCntMemo(string uid, string cntid,out string memo);//给旺旺用
        
		/****************************************************************
		  函数名称：DB_GetUserTribe
		  简要描述：取用户归属群列表
		  输入：    userId        用户号
		  输出：    tribeIdList   群ID列表（含群ID、群名称两个字段）
		  修改日志：
		 *****************************************************************/
		["amd" ] int GetUserTribe (string userId, out ALiIMDBTribe::STribeIdDbSeq tribeIdList);
        
		/****************************************************************
		  函数名称：DB_GetTribeMember
		  简要描述：取群成员信息
		  输入：    tribeId        群号
		  memberId       群成员ID
		  level          成员级别
		  输出：    tribeMember     群成员信息
		  修改日志：
		 *****************************************************************/
		//int GetTribeMember (int tribeId, string memberId, int level, out ALiIMDBTribe::STribeMemberSeq tribeMemberList);

		/****************************************************************
		  函数名称：DB_GetUserTribeConfig
		  简要描述：取用户群配置信息
		  输入：    userId        用户号
		  输出：    addVerify     加入群校验标志
		  0x00          不需要验证
		  0x01           需要验证
		  0x02           拒绝
		  修改日志：
		 *****************************************************************/
		["amd" ] int GetUserTribeConfig(string userId, out int addVerify);

		/****************************************************************
		  函数名称：DB_UpdateUserTribeConfig
		  简要描述：更新用户群配置信息
		  输入：    userId        用户号
		  addVerify     加入群校验标志
		  输出：
		  修改日志：
		 *****************************************************************/
		["amd" ] int UpdateUserTribeConfig(string userId, int addVerify);

		/****************************************************************
		  函数名称：GetTribeOffMngMsg
		  简要描述：取管理员离线消息
		  输入：    tribeId       群号
		  memberId     群成员ID
		  输出：    offlineMsg    离线消息列表
		  修改日志：
		 *****************************************************************/
		["amd" ] int GetTribeOffMngMsg (int tribeId, string memberId, out ALiIMDBTribe::STribeOfflineMsgSeq offlineMsgList);

		/****************************************************************
		  函数名称：DelTribeOffMngMsg
		  简要描述：删除离线消息
		  输入：    tribeId      商群号
		  memberId     群成员ID
		  输出：
		  修改日志：
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
		  函数名称：GetChildTeamList
		  简要描述：取团队子帐号列表
		  输入：    parentId       主账号ID
		  输出：    childTeamList    子帐号列表
		  修改日志：
		 *****************************************************************/
		["amd" ] int GetChildTeamList (string parentId, out AliIMDBBase::SChildUserInfoSeq childTeamList);
        
        ["amd" ] int GetChildTeamList2 (string parentId, out AliIMDBBase::SChildUserInfoSeq2 childTeamList);
        
		/****************************************************************
		  函数名称：GetChildUserInfo
		  简要描述：取子帐号信息
		  输入：    childId       子账号ID
		  输出：    childInfo    子帐号信息
		  修改日志：
		 *****************************************************************/
		["amd" ] int GetChildUserInfo (string childId, out AliIMDBBase::SChildUserInfo childInfo);
        
        ["amd" ] int GetChildUserInfo2 (string childId, out AliIMDBBase::SChildUserInfo2 childInfo);
        
		/****************************************************************
		  函数名称：GetShareContactList
		  简要描述：取主账号需要分流的联系人列表
		  输入：    uid       主账号ID
		  输出：    shareContactIdList    要分流的联系人列表
		  修改日志：
		 *****************************************************************/
		["amd" ] int GetShareContactList (string uid, out Ice::StringSeq shareContactIdList);
        
		/****************************************************************
		  函数名称：GetContactShareInfo
		  简要描述：取主账号需要分流的联系人列表
		  输入：    uid       主账号ID
		  contactId    联系人ID
		  type     查询类型 (1: 是否分流)
		  输出：    value  结果(0 表示不分流1表示分流)
		  修改日志：
		 *****************************************************************/
		["amd" ] int GetContactShareInfo (string uid, string contactId, int type, out int value);

		/****************************************************************
		  函数名称：SetContactShareInfo
		  简要描述：取主账号需要分流的联系人列表
		  输入：    uid       主账号ID
		  contactId    联系人ID
		  type     查询类型 (1: 是否分流)
		  value  结果(0 表示不分流1表示分流)
		  输出：    
		  修改日志：
		 *****************************************************************/
		["amd" ] int SetContactShareInfo (string uid, string contactId, int type, int value);


		/****************************************************************
		  函数名称：GetMultiAccountContactList
		  简要描述：取多账号用户联系人列表
		  输入：    uid       主账号ID
		  输出：    contactIdList    用户联系人列表
		  修改日志：
		 *****************************************************************/
		["amd" ] int GetMultiAccountContactList (string uid, out SICEContactInfoSeq contactIdList);

        /****************************************************************
        函数名称：GetMultiServiceList 
        简要描述：取多账号用户功能列表
        输入：    uid       主账号ID
        输出：    ServiceList    用户联系人列表
        修改日志：
        *****************************************************************/
        ["amd" ] int GetMultiServiceList (string uid, out Ice::IntSeq ServiceList);

        /****************************************************************
        函数名称：GetMultiBindToUser
        简要描述：取用户绑定到的帐号列表
        输入：    uid       主账号ID
        输出：    bindToUser用户联系人列表
        修改日志：
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
        
        // e-service 相关
		/*
		 * 函数说明:获取主账号是否参与分流
		 *
		 * 输入: uid        : 主账号ID
		 * 输出: shunt       : 分流标志 1：参与分流 0：不参与分流
		 *
		 * 返回值: -1  -> 数据库操作失败
		 *      其他    -> 未知错误
		 */
		["amd" ] int getESShuntStatus(string uid, out string shunt);                 
		
		/*
		 * 函数说明:设置主账号是否参与分流
		 *
		 * 输入: uid        : 主账号ID
		 *  shunt       : 分流标志 1：参与分流 0：不参与分流
		 *
		 * 返回值: int  0   -> 设置成功
		 *      -1  -> 设置失败
		 *      -2  -> 数据库操作失败
		 *      其他 -> 未知错误
		 */
		["amd" ] int setESShuntStatus(string uid, string shunt);   
		
		/*
		 * 函数说明:获取某一主账号下客服的最高接待人数列表
		 *
		 * 输入: uid        : 主账号ID
		 * 输出：list       : 返回的主账号下客服列表（包含客服的最高接待人数）
		 *
		 * 返回值: int  0   -> 获取成功
		 *      -1  -> 数据库操作失败
		 *      其他    -> 未知错误
		 */
		["amd" ] int getMaxESReceptNum(string uid,int groupId, out SICEReceptNumSeq eserviceList);   
		
		/*
		 * 函数说明:设置客服的最高接待人数
		 *
		 * 输入: uid        : 主账号ID
		 *  list        : 主账号下客服列表（包含客服的最高接待人数）
		 *
		 * 返回值: int  0   -> 设置成功
		 *      -1  -> 数据库操作失败
		 *      其他    -> 未知错误
		 */
		["amd" ] int setMaxESReceptNum(string uid, int groupId, SICEReceptNumSeq eserviceList);   
			
		/* 
		 * 函数说明:获取某一主账号下客服的最高接待人数列表
		 * 
		 * 输入: uid        : 主账号ID
		 * 输出：list       : 返回主账号下客服优先顺序列表
		 * 
		 * 返回值: int  0   -> 获取成功
		 *      -1  -> 数据库操作失败
		 *      其他    -> 未知错误
		 */
		["amd" ] int getESPriority(string uid, int groupId, out SICEReceptPrioritySeq eserviceList);
				
		/* 
		 * 函数说明:设置某一账号下客服的优先接待顺序
		 * 
		 * 输入: uid        : 主账号ID
		 *  list        : 客服优先顺序列表
		 * 
		 * 返回值: int  0   -> 设置成功
		 *      -1  -> 数据库操作失败
		 *      其他    -> 未知错误
		 */
		["amd" ] int setESPriority(string uid, int groupId, SICEReceptPrioritySeq eserviceList);
		
        ["amd" ] int getESRecvOffMsg(string uid, int groupId,out SICERecvOffMsgSeq eserviceList);
        ["amd" ] int setESRecvOffMsg(string uid, int groupId, SICERecvOffMsgSeq eserviceList);
        
		/*
		 * 函数说明:获取分组列表
		 *
		 * 输入: uid        : 主账号ID
		 * 输出：list       : 返回主账号下分组列表
		 *
		 * 返回值: int  0   -> 获取成功
		 *      -1  -> 数据库操作失败
		 *      其他    -> 未知错误
		 */
		["amd" ] int getESGroupList(string uid, out Ice::IntSeq groupList);
	   
		/*  
		 * 函数说明:新增分组
		 *
		 * 输入: uid        : 主账号ID
		 *  group       : 分组对象
		 *
		 * 返回值: int  0   -> 编辑成功
		 *      -1  -> 数据库操作失败
		 *      其他    -> 未知错误
		 */ 
		["amd" ] int insertESGroupInfo(string uid, SICEESGroupInfo groupInfo, out int groupId);
		
		/*  
		 * 函数说明:修改分组
		 *
		 * 输入: uid        : 主账号ID
		 *  group       : 分组对象
		 *
		 * 返回值: int  0   -> 编辑成功
		 *      -1  -> 数据库操作失败
		 *      -2  -> 分组不存在
		 *      其他    -> 未知错误
		 */ 
		["amd" ] int updateESGroupInfo(string uid, SICEESGroupInfo group);
		
		/*  
		 * 函数说明:删除分组
		 *
		 * 输入: uid        : 主账号ID
		 *  group_id    : 分组id
		 *
		 * 返回值: int  0   -> 删除成功
		 *      -1  -> 数据库操作失败
		 *      -2  -> 分组不存在
		 *      其他    -> 未知错误
		 */ 
		["amd" ] int delESGroup(string uid, int groupid);
		
		/*
		 * 函数说明:获取分组中的信息
		 *
		 * 输入: uid        : 主账号ID
		 *  group_id    : 分组id
		 * 输出：group      : 分组的详细信息
		 *
		 * 返回值: int  0   -> 获取成功
		 *      -1  -> 数据库操作失败
		 *      -2  -> 该分组不存在
		 *      其他    -> 未知错误
		 */
		["amd" ] int getESGroupInfo(string uid, out SICEESGroupInfoSeq groupList);
		["amd" ] int getESGroupInfoByID(string uid,int groupId, out SICEESGroupInfo groupInfo);
        
        /*
		 * 函数说明:获取主账号是否参与分流，及分组信息
		 *
		 * 输入: uid        : 主账号ID
		 * 输出：groupId    : 分组ID
		 *       userflag   : flag 第一位表示是否分流
         *
		 * 返回值: int  0   -> 获取成功
		 *      -1  -> 数据库操作失败
		 *      其他    -> 未知错误
		 */
		["amd" ] int getESUserFunc(string uid, string childid, out string userflag, out int groupId);
		
		/*  
		 * 函数说明:获取未参与分组的客服列表
		 *  
		 * 输入: uid        : 主账号ID
		 *
		 * 输出：list       : 未参与分组的客服列表
		 *
		 * 返回值: int  0   -> 获取成功
		 *      -1  -> 数据库操作失败
		 *      其他    -> 未知错误
		 */ 
		["amd" ] int getESUnJoinGroup(string uid, out Ice::StringSeq eserviceList);

		/*  
		 * 函数说明:获取客服接待情况列表
		 *
		 * 输入: uid        : 主账号ID
		 * 输出：list       : 获取客服接待情况列表 
		 *
		 * 返回值: int  0   -> 获取成功
		 *      -1  -> 数据库操作失败
		 *      其他    -> 未知错误
		 */ 
		//int getESReceptList(string uid, out Ice::StringSeq eserviceList);
		
		/*
		 * 函数说明:判断客服是否是管理员
		 *
		 * 输入: uid    : 主账号ID
		 *  group_id    : 分组id
		 *
		 * 返回值: int  1   -> 是管理员
		 *              0   -> 不是管理员
		 *      -1  -> 数据库操作失败
		 *      -2  -> 该分组不存在
		 *      其他    -> 未知错误
		 */
		["amd" ] int checkESRole(string uid, out int groupId);


		["amd" ] int CheckWebWWPasswd(string userId, string passwd,out string lid, out string retuidtokenpw,out string retmd5passwd,out int activeStat);
        
        /*  
         * 函数说明         : 获取客户端扩展信息 
         *  
         * 输入: uid        : 主账号ID
         * 输出: areaInfos  : 扩展区信息
         *  
         * 返回值           : int  0   -> 获取成功
         *      -1  -> 数据库操作失败
         *      其他    -> 未知错误
         */ 
        ["amd" ] int getESExpandArea(string uid, out AliIMDBBase::SICEExpandAreaSeq areaInfos);

        /*  
         * 函数说明         : 获取客户端扩展区域信息 
         *  
         * 输入: uid        : 主账号ID
         * 输入: id         : 扩展区域ID
         * 输出: areaInfos  : 扩展区信息
         *  
         * 返回值           : int  0   -> 获取成功
         *      -1  -> 数据库操作失败
         *      其他    -> 未知错误
         */
        ["amd"] int getESExpandAreaById(string uid, int id, out SICEExpandArea areaInfos);

        /*  
         * 函数说明         : 新增客户端扩展信息 
         *  
         * 输入: uid        : 主账号ID
         *       areaInfos  : 扩展区信息
         *  
         * 返回值           : int  0   -> 获取成功
         *      -1  -> 数据库操作失败
         *      其他    -> 未知错误
         */
        ["amd"] int addESExpandArea(string uid, SICEExpandArea areaInfo);
        
        /*  
         * 函数说明         : 修改客户端扩展信息 
         *  
         * 输入: uid        : 主账号ID
         *       areaInfos  : 扩展区信息
         *  
         * 返回值           : int  0   -> 获取成功
         *      -1  -> 数据库操作失败
         *      其他    -> 未知错误
         */
        ["amd"] int updateESExpandArea(string uid, SICEExpandArea areaInfo);

        /*  
         * 函数说明         : 设置客户端扩展信息 
         *  
         * 输入: uid        : 主账号ID
         *       expandArea_id  : 扩展区id
         *  
         * 返回值           : int  0   -> 获取成功
         *      -1  -> 数据库操作失败
         *      其他    -> 未知错误
         */
        ["amd"] int delESExpandArea(string uid, int id);

        /*  
         * 函数说明         : 预设置评价内容
         *  
         * 输入: uid        : 主账号ID
         *       esEvalInfos: E客服评价内容
         *  
         * 返回值           : int  0   -> 获取成功
         *      -1  -> 数据库操作失败
         *      其他    -> 未知错误
         */
        ["amd" ] int setESEval(string uid, string evalcontent, string welcome);

        /*  
         * 函数说明         : 取评价内容
         *  
         * 输入: uid        : 主账号ID
         *       esEvalInfos: E客服评价内容
         *  
         * 返回值           : int  0   -> 获取成功
         *      -1  -> 数据库操作失败
         *      其他    -> 未知错误
         */
        ["amd" ] int getESEval(string uid, out string evalcontent, out string welcome);


        /*  
         * 函数说明         : 发送评价
         *  
         * 输入: uid        : 主账号ID
         *       buyerid    : 买家id
         *       
         *  
         * 返回值           : int  0   -> 获取成功
         *      -1  -> 数据库操作失败
         *      其他    -> 未知错误
         */
        ["amd" ] int sendESEvalResult(string uid, string buyerid, out int evalId);


        /*  
         * 函数说明         : 设置评价结果
         *  
         * 输入: uid        : 主账号ID
         *       buyerid    : 买家id
         *       
         *  
         * 返回值           : int  0   -> 获取成功
         *      -1  -> 数据库操作失败
         *      其他    -> 未知错误
         */
        ["amd" ] int setESEvalResult(string uid, string buyerid, int evalId, string evalresult);

        /*  
         * 函数说明         : 取评价结果
         *  
         * 输入: uid        : 主账号ID
         *       buyerid    : 买家id
         *       
         *  
         * 返回值           : int  0   -> 获取成功
         *      -1  -> 数据库操作失败
         *      其他    -> 未知错误
         */
        ["amd" ] int getESEvalResult(string uid, string buyerid, int evalId, out string evalresult, out string gmtcreate, out string gmtmodify);
        
        /*  
         * 函数说明         : 取今日评价结果
         *  
         * 输入: uid        : 主账号ID
         *       buyerid    : 买家id
         *       
         *  
         * 返回值           : int  0   -> 获取成功
         *      -1  -> 数据库操作失败
         *      其他    -> 未知错误
         */
        ["amd" ] int getESEvalResultToday(string uid, out SICEESEvalResultSeq evalInfos);
        
        /*  
         * 函数说明         : 取历史评价结果
         *  
         * 输入: uid        : 主账号ID
         *       buyerid    : 买家id
         *   
         *  
         * 返回值           : int  0   -> 获取成功
         *      -1  -> 数据库操作失败
         *      其他    -> 未知错误
         */
        ["amd" ] int getESEvalResultHistory(string uid, string querytime, out SICEESEvalResultSeq evalInfos);
        
        /*  
         * 函数说明         : 取历史评价结果分页显示
         *  
         * 输入: uid        : 主账号ID
         *       buyerid    : 买家id
         *   
         *  
         * 返回值           : int  0   -> 获取成功
         *      -1  -> 数据库操作失败
         *      其他    -> 未知错误
         */
        ["amd" ]int getESEvalResultHistorybypage(string uid, string childid, string begindate, string enddate, int pageno, int pagesize, out int pagecount, out SICEESEvalResultExSeq evalInfos);
        
        /*  
         * 函数说明         : 取最近登录时间
         *  
         * 输入: uid        : 主账号ID
         *       buyerid    : 买家ID
         *       
         *  
         * 返回值           : int  0   -> 获取成功
         *      -1  -> 数据库操作失败
         *      其他    -> 未知错误
         */
        ["amd" ] int getLastLoginTime(Ice::StringSeq loginids, out Ice::StringSeq loginTimes);
        
        /*  
         * 函数说明         : 读取子账号是否参与总分流
         *  
         * 输入: uid        : 主账号ID
         *       
         * 
         * 返回值           : int  0   -> 获取成功
         *      -1                     -> 数据库操作失败
         *      其他                   -> 未知错误
         */ 
        ["amd" ] int getChildShuntInfos(string uid, out SChildUserInfoSeq childInfos);
        
        /*  
         * 函数说明         : 设置子账号是否参与总分流
         *  
         * 输入: uid        : 主账号ID
         *       
         *  
         * 返回值           : int  0   -> 获取成功
         *      -1  -> 数据库操作失败
         *      其他    -> 未知错误
         */
        ["amd" ] int setChildShuntInfos(string uid, SChildUserInfoSeq childinfos);
        
        /* 
         * 函数说明:获取代理主账号的子账号ID
         * 
         * 输入: uid    : 主账号ID
         * 
         * 返回值: int   0   -> 成功
         *              -1  -> 数据库操作失败 
         *              -2  -> 该用户不存在  ?必须先登录客户端)
         *      其他    -> 未知错误
         */
        ["amd" ]int getAgentChild(string uid, out string agentId);
         
        /* 
         * 函数说明:设置代理主账号的子账号ID
         * 
         * 输入: uid    : 主账号ID
         * 
         * 返回值: int   0   -> 成功
         *              -1  -> 数据库操作失败 
         *              -2  -> 该用户不存在  ?必须先登录客户端)
         *      其他    -> 未知错误
         */ 
        ["amd" ]int setAgentChild(string uid, string agentId);
        
        /* 
         * 函数说明:获取代理子账号列表
         * 
         * 输入: uid    : 主账号ID
         * 
         * 返回值: int   0   -> 成功
         *              -1  -> 数据库操作失败 
         *              -2  -> 该用户不存在  ?必须先登录客户端)
         *      其他    -> 未知错误
         */ 
        ["amd" ]int getAgentList(string uid, out Ice::StringSeq agentIds);

        /****************************************************************
          函数名称：GetB2BChildTeamList
          简要描述：B2B取团队子帐号列表
          输入：    parentId       主账号ID
          输出：    childTeamList    子帐号列表
          修改日志：
         *****************************************************************/
        ["amd" ] int getB2BChildTeamList(string parentId, out AliIMDBBase::SB2BChildUserInfoSeq childTeamList);

        /****************************************************************
          函数名称：GetB2BChildTeamList
          简要描述：B2B取团队子帐号列表
          输入：    parentId       主账号ID
          输出：    childTeamList    子帐号列表
          修改日志：
         *****************************************************************/
        ["amd" ] int getB2BChildInfo(string parentId, string childid, out AliIMDBBase::SB2BChildUserInfo childInfo);

        /****************************************************************
          函数名称：GetB2BChildParentId
          简要描述：B2B获取子账号的父账号id
          输入：    childid    子账号id 
          输出：    fid        父账号id
          修改日志：
         *****************************************************************/
        ["amd" ] int getB2BChildParentId(string childId, out string fid);

        /****************************************************************
          函数名称：AddB2BChild
          简要描述：B2B添加B2B子账号
          输入：    fid       主账号ID
          childid   子账号ID
          userflag
          修改日志：
         *****************************************************************/
        ["amd" ] int addB2BChild(string fid, string childId, string userflag);

        /****************************************************************
          函数名称：UpdateB2BChild
          简要描述：B2B更新B2B子账号
          输入：    fid       主账号ID
          childid   子账号ID
          userflag
          修改日志：
         *****************************************************************/
        ["amd" ] int updateB2BChild(string fid, string childId, string userflag);

        /****************************************************************
          函数名称：DeleteB2BChild
          简要描述：B2B更新B2B子账号
          输入：    fid       主账号ID
          childid   子账号ID
          userflag
          修改日志：
         *****************************************************************/
        ["amd" ] int deleteB2BChild(string fid, string childId);
    };  
};      
        
#endif  
