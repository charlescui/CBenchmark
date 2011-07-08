#ifndef _H_AliIMDBDATADEFINE_ICE
#define _H_AliIMDBDATADEFINE_ICE

#include <Ice/BuiltinSequences.ice>

module AliIMDBBase
{
	struct SICEMemberInfo
	{
		string memberId;
		string password ;
		string status;
		string realname ;
		string company ;
		string jobtitle ;
		int memberlevel;//诚信通，阿里巴巴员工，等等,权限用
		int industry;
		int area;
		string penName ;
		int phoneStatus;
		byte title;
		string country ;
		
	};
	
	struct SExICESysMessage
	{
		int msgId;
		int type;
		string expireTime;
		int industry;
		int area;
		int rank;
		string message;
		string site;	 // such as "cnalichn", or "cntaobao"
	};
	
	struct SICESysMessage
	{
		int msgId;
		int type;
		string expireTime;
		int industry;
		int area;
		int rank;
		string message;
	};
	
	
	struct SICEVersion
	{
		string version ;
		byte status;
		string remark ;
	};
	
	struct SICEUserInfo
	{
		string uid;
		int picId;
		int sysMsgId;
		string lastLoginTime ;
		int strangerMsgCount;
		int loginCount;
		int onlineTimes;
		int addContactCount;
		int addTribeCount;
		int activeDegree; //now this is chatActiveCount 洽谈活跃度
		int groupTimes;
		int contactTimes;
		int blacklistTimes;
		int reverseBlacklistTimes;
		int offlinemsgTimes;
		int addContactVerify;
		int sendMsgVerify;
		int userStatus;
		int userLevel;
		float newActDgree;//now this is totalActDegree 累计活跃度
		int gencontacttimes;//普通联系人时间戳
		float rewardActDegree;  //奖励活跃度
		float onlineActDegree;  //在线活跃度
		int createTime;
		int accounttype;//0x02 即第二位为1代表是多帐户,0代表普通帐户
	};
struct SICEUserInfo2
	{
		string uid;
		int picId;
		int sysMsgId;
		string lastLoginTime ;
		int strangerMsgCount;
		int loginCount;
		int onlineTimes;
		int addContactCount;
		int addTribeCount;
		int activeDegree; //now this is chatActiveCount 洽谈活跃度
		int groupTimes;
		int contactTimes;
		int blacklistTimes;
		int reverseBlacklistTimes;
		int offlinemsgTimes;
		int addContactVerify;
		int sendMsgVerify;
		int userStatus;
		int userLevel;
		float newActDgree;//now this is totalActDegree 累计活跃度
		int gencontacttimes;//普通联系人时间戳
		float rewardActDegree;  //奖励活跃度
		float onlineActDegree;  //在线活跃度
		int createTime;
		int accounttype;//0x02 即第二位为1代表是多帐户,0代表普通帐户
		string userfunctions; //功能字段, 右数1为多帐号，2为E网打进,3为绑定
	};
	struct SICEUserInfoEx
	{
		string uid;
		int picId;
		int sysMsgId;
		int lastLoginTime ;
		int loginCount;
		int strangerMsgCount;
		int addContactCount;
		int addTribeCount;
		int groupTimes;
		int contactTimes;
		int blacklistTimes;
		int reverseBlacklistTimes;
		int offlinemsgTimes;
		int gencontacttimes;//普通联系人时间戳
		int toolprofiletimes;//个人配置时间戳
		int addContactVerify;
		int sendMsgVerify;
		int userStatus;
		int userLevel;
		float totalActDegree ;//now this is totalActDegree 累计活跃度
		int createTime;
		int accounttype;//0x02 即第二位为1代表是多帐户,0代表普通帐户
		string loginIp;
		string userfunctions;
		//int userValue;
	};
	//add by duhl 2008-09-01 for antirush project
	struct SICEUserInfoNew
	{
		string uid;
		int picId;
		int sysMsgId;
		string lastLoginTime ;
		int strangerMsgCount;
		int loginCount;
		int onlineTimes;
		int addContactCount;
		int addTribeCount;
		int activeDegree; //now this is chatActiveCount 洽谈活跃度
		int groupTimes;
		int contactTimes;
		int blacklistTimes;
		int reverseBlacklistTimes;
		int offlinemsgTimes;
		int addContactVerify;
		int sendMsgVerify;
		int userStatus;
		int userLevel;
		float newActDgree;//now this is totalActDegree 累计活跃度
		int gencontacttimes;//普通联系人时间戳
		float rewardActDegree;  //奖励活跃度
		float onlineActDegree;  //在线活跃度
		int createTime;
		int accounttype;//0x02 即第二位为1代表是多帐户,0代表普通帐户
		int reqAddContactCount;
	};
struct SICEUserInfo2New
	{
		string uid;
		int picId;
		int sysMsgId;
		string lastLoginTime ;
		int strangerMsgCount;
		int loginCount;
		int onlineTimes;
		int addContactCount;
		int addTribeCount;
		int activeDegree; //now this is chatActiveCount 洽谈活跃度
		int groupTimes;
		int contactTimes;
		int blacklistTimes;
		int reverseBlacklistTimes;
		int offlinemsgTimes;
		int addContactVerify;
		int sendMsgVerify;
		int userStatus;
		int userLevel;
		float newActDgree;//now this is totalActDegree 累计活跃度
		int gencontacttimes;//普通联系人时间戳
		float rewardActDegree;  //奖励活跃度
		float onlineActDegree;  //在线活跃度
		int createTime;
		int accounttype;//0x02 即第二位为1代表是多帐户,0代表普通帐户
		string userfunctions; //功能字段, 右数1为多帐号，2为E网打进,3为绑定
		int reqAddContactCount;
	};
	struct SICEUserInfoExNew
	{
		string uid;
		int picId;
		int sysMsgId;
		int lastLoginTime ;
		int loginCount;
		int strangerMsgCount;
		int addContactCount;
		int addTribeCount;
		int groupTimes;
		int contactTimes;
		int blacklistTimes;
		int reverseBlacklistTimes;
		int offlinemsgTimes;
		int gencontacttimes;//普通联系人时间戳
		int toolprofiletimes;//个人配置时间戳
		int addContactVerify;
		int sendMsgVerify;
		int userStatus;
		int userLevel;
		float totalActDegree ;//now this is totalActDegree 累计活跃度
		int createTime;
		int accounttype;//0x02 即第二位为1代表是多帐户,0代表普通帐户
		string loginIp;
		string userfunctions;
		int reqAddContactCount;
	};
	struct SICEUserInfoExNew2
	{
		string uid;
		int picId;
		int sysMsgId;
		int lastLoginTime ;
		int loginCount;
		int strangerMsgCount;
		int addContactCount;
		int addTribeCount;
		int groupTimes;
		int contactTimes;
		int blacklistTimes;
		int reverseBlacklistTimes;
		int offlinemsgTimes;
		int gencontacttimes;//普通联系人时间戳
		int toolprofiletimes;//个人配置时间戳
		int addContactVerify;
		int sendMsgVerify;
		int userStatus;
		int userLevel;
		float totalActDegree ;//now this is totalActDegree 累计活跃度
		int createTime;
		int accounttype;//0x02 即第二位为1代表是多帐户,0代表普通帐户
		string loginIp;
		string userfunctions;
		int reqAddContactCount;
		int userValue;
	};

	dictionary<int, int> RIGHTTABLE;
	struct SICEUserInfoExNew3
	{
		string uid;
		int picId;
		int sysMsgId;
		int lastLoginTime ;
		int loginCount;
		int groupTimes;
		int contactTimes;
		int blacklistTimes;
		int reverseBlacklistTimes;
		int offlinemsgTimes;
		int gencontacttimes;//普通联系人时间戳
		int toolprofiletimes;//个人配置时间戳
		int addContactVerify;
		int sendMsgVerify;
		int userStatus;
		int userLevel;
		float totalActDegree ;//now this is totalActDegree 累计活跃度
		int createTime;
		int accounttype;//0x02 即第二位为1代表是多帐户,0代表普通帐户
		string loginIp;
		string userfunctions;
		int userValue;
		RIGHTTABLE rightMap;
	};

	struct SICEUserInfoExNew4
	{
		string uid;
		int picId;
		int sysMsgId;
		int lastLoginTime ;
		int loginCount;
		int strangerMsgCount;
		int addContactCount;
		int addTribeCount;
		int groupTimes;
		int contactTimes;
		int blacklistTimes;
		int reverseBlacklistTimes;
		int offlinemsgTimes;
		int gencontacttimes;//普通联系人时间戳
		int toolprofiletimes;//个人配置时间戳
		int addContactVerify;
		int sendMsgVerify;
		int userStatus;
		int userLevel;
		float totalActDegree ;//now this is totalActDegree 累计活跃度
		int createTime;
		int accounttype;//0x02 即第二位为1代表是多帐户,0代表普通帐户
		string loginIp;
		string userfunctions;
		int userValue;
		RIGHTTABLE rightMap;
		string question;
		string answer;
	};

	//end add.
	struct SICEGroupInfo
	{
		int groupId;
		string groupName;
	};
	struct SICEGroupInfoEx
	{
		long groupId;
		long parentId;
		string groupName;
	};
	
	struct SICEContactInfo
	{
		string contactId;
		int groupId;
		string nickName;
		int status;
		string cid;
		short cnttype;
		string clientInfo;
	};
	
	struct SICEUserId
	{
		string uid;
	};
		
	struct SICEOffLineMessege
	{
		string createTime;
		int type;
		string fromId;
		string content;
	};
	struct SICEOffLineMessegeEx
	{
		int sendTime;
		int type;
		string fromId;
		string content;
	};
	

	struct SICEUserDStatus	//在过渡期之后删除
	{
	    int statusId;
	    string statusInfo;
	};

	
	struct SICECntCidModPair
	{
	    string cid;
	    string modSeqId;
	};
	
	struct SICECRMContactDetail
	{
		string cntname ;
		string email ;
		string phoneno ;
		string mobileno ;
		string company ;
		byte sex;
		string jobtitle ;
		string compaddr ;
		int  bizcatid;
		string buykeys ;
		string salekeys ;
		string faxnumber ;
		string penname ;
		
	};
	
	struct SICESeqId
	{
		string seqId ;
	};
		
	struct SICENetPhoneChargeInfo
	{
		string chargeseqid ;
		string payseqid ;
		string chargebegintime ;
		int denomination;
		int payrealmoney;
		int chargestatus;
		int paystatus;
	};
	
	
	struct SICEGenContactFull
	{
		string uid ;
		string cid ;
		string cntid ;
		string nickname ;
		string seqid ;
		int groupId;
		byte showflag;
		string sex ;
		byte cnttype;
		int  bizcatid;
		string realname;
		string email1;
		string  cphoneno1;
		string  hphoneno1;
		string  mobileno1;
		string  alitalkid;
		string  companyname;
		string  email2;
		string  email3;
		string  cphoneno2;
		string  cphoneno3;
		string  mobileno2;
		string  mobileno3;
		string  buykeys;
		string  salekeys;
		string  jobtitle;
		string  compaddr;
		string  homeaddr;
		string  compzip;
		string  homezip;
		string  cntpicid;
		string  compurl;
		string  homeurl;
		string  wwangid;
		string  yahooid;		
		string  msnid;
		string  qqid;
		string  deptname;
		string  managername;
		string  idnumber;
		string  workidno;
		string  faxnumber;
		string  penname;		
		string  engname;
		string  consortname;
		string  avocation;
		string  assistname;
		string  childname;
		string  birthday;
		string  memo;	
		string firstname;
		string lastname;
	};


	struct SICEATMGenContactFull
	{
		string uid ;
		string cid ;
		string cntid ;
		string nickname ;
		string seqid ;
		int groupId;
		byte showflag;
		string sex ;
		byte cnttype;
		int  bizcatid;
		string realname;
		string email1;
		string  cphoneno1;
		string  hphoneno1;
		string  mobileno1;
		string  alitalkid;
		string  companyname;
		string  email2;
		string  email3;
		string  cphoneno2;
		string  cphoneno3;
		string  mobileno2;
		string  mobileno3;
		string  buykeys;
		string  salekeys;
		string  jobtitle;
		string  compaddr;
		string  homeaddr;
		string  compzip;
		string  homezip;
		string  cntpicid;
		string  compurl;
		string  homeurl;
		string  wwangid;
		string  yahooid;		
		string  msnid;
		string  qqid;
		string  deptname;
		string  managername;
		string  idnumber;
		string  workidno;
		string  faxnumber;
		string  penname;		
		string  engname;
		string  consortname;
		string  avocation;
		string  assistname;
		string  childname;
		string  birthday;
		string  memo;	
		int companyid;
		int  cntlevel;
		string country;
		string productService;
		string firstname;
		string lastname;
		string biztype;
		int preRegister;
	};

	struct SICECntOtherModInfo
	{
		string cid;
		string modSeqId;
		int memberLevel;
		int smsbindflag;
		int smsmobileonlineflag;
		string smsbindmobile;//[MOBILE_LENGTH+1];
	};
	
	struct SICESmsUserInfo
	{
		string uid;//[UID_LENGTH+1];
		int bindFlag;
		int mobileOnlineFlag;
		string account;//[SMS_ACCOUNT_LENGTH+1];
		string password;//[SMS_PASSWORD_LENGTH+1];
		string mobileNo;//[MOBILE_LENGTH+1];
		int balance;
	};

	struct SICEAMOSUserInfo
	{
		string uid;//[UID_LENGTH+1];
		string lastLoginTime;//[TIME_MAX_LENGTH+1];
		int mobileOnlineFlag;
	};
	struct SMemberPWInfo
	{
		string md5passwd;
		bool bcanlogon;//网站这边是否允许登陆IM
	};
	struct SMemberPWInfoEx
	{
		string md5passwd;
		bool bcanlogon;//网站这边是否允许登陆IM
		int activeState;
	};
	struct SUserWebBasicProfile//用户第一次登陆和被添加联系人时用
	{
		string uid;
		string nickname;
		string realname ; //fullname
		string email; //tbonly have email,address,zip,birthday
		string phoneno; 
		string mobileno;
		string company;
		string jobtitle ;
		string address;
		int catid;
		string buykeyws;
		string salekeyws;
		string faxno;
		string penname;
		string country;//缺省中国
		int  memberlevel;
		int industry;
		int area;
		int phoneStatus;
		int activestat;//激活状态，权限控制用 //notused.
		string extraInfo;// 采用k1=v1&k2=v2格式
		string zip;
		string birthday;

		string password; //add for UDB.
		string prov;
		string city;
		string usergender;
		string birthdate;
		string status; //fora ali.
		string province; //fora ali.

        int webLevel; //来自网站的第二个等级(中文站,是否是员工淘宝站是否是小二)
	};

	struct SUserWebBasicProfile2
	{
		string uid;
		string nickname;
		string realname ; 	//fullname
		string email; 		//tbonly have email,address,zip,birthday
		string phoneno; 
		string mobileno;
		string company;
		string jobtitle ;
		string address;
		int catid;
		string buykeyws;
		string salekeyws;
		string faxno;
		string penname;
		string country;	//缺省中国
		int  memberlevel;
		int industry;
		int area;
		int phoneStatus;
		int activestat;		//激活状态，权限控制用 //notused.
		string extraInfo;	// 采用k1=v1&k2=v2格式
		string zip;
		string birthday;
		string password;	//add for UDB.
		string prov;
		string city;
		string usergender;
		string birthdate;
		string status; 		//fora ali.
		string province; 	//fora ali.
        	int webLevel; 		//来自网站的第二个等级(中文站,是否是员工淘宝站是否是小二)
        	string subcity;
        	string homepage;
        	string interest;
	};

	struct SMatchedUserIdInfo
	{
		string userId;
		string name;
		byte validateflag;
	};

    struct SUdbUserInfo
    {
        string uid;
        string name;
        string rawpasswd;
        string md5passwd;
        string email;
        string mobileno;
        string phoneno;
        string company;
        string jobtitle;
        string birthday;
        string sex;
        string country;
        string province;
        string city;
        string address;
        string zip;
    };  
    
    struct SChildUserInfo
    {   
        string   uid;
        string   nikename;
        string   password;
        string   parentId;
        int      suspended;
        int      expirtTime;
        int      OpenTime;
        int      type;
        int      groupId;
        int      receptionNum;
        int      priority;
        int      recvOffMsg;  
        string   needuseonline;
        string   userflag;
    };  
        
    struct SChildUserInfo2
    {   
        string uid;
        string nikename;
        string password;
        string parentId;
        int      suspended;
        int      expirtTime;
        int      OpenTime;
        int      type;
        int      groupId;
        int      receptionNum;
        int      priority;
        int      recvOffMsg;    
    };  

    struct SB2BChildUserInfo
    {
        string uid;
        string parentId;
        string userflag;
    };
    
	struct SICEToolProfile
	{   
		int type;
		string profile;
	};  

	struct SICEKvPair
	{   
		string key;
		string value;
	};  
    
	struct SImPrefix
	{   
		string prefix;
		string name;
	};  
    
	sequence<SICEMemberInfo> SICEMemberInfoSeq;
	sequence<SICESysMessage> SICESysMessageSeq;
	sequence<SExICESysMessage> SExICESysMessageSeq;
	sequence<SICEVersion> SICEVersionSeq;
	sequence<SICEUserInfo> SICEUserInfoSeq;
	sequence<SICEUserInfoEx> SICEUserInfoExSeq;
	sequence<SICEGroupInfo> SICEGroupInfoSeq;
	sequence<SICEGroupInfoEx> SICEGroupInfoExSeq;
	sequence<SICEContactInfo> SICEContactInfoSeq;
	sequence<SICEOffLineMessege> SICEOffLineMessegeSeq;
	sequence<SICEOffLineMessegeEx> SICEOffLineMessegeExSeq;
	sequence<SICECntCidModPair> SICECntCidModPairSeq;
	sequence<SICEUserDStatus> SICEUserDStatusSeq;
	sequence<SICENetPhoneChargeInfo> SICENetPhoneChargeInfoSeq;
	sequence<SICEGenContactFull> SICEGenContactFullSeq;
	sequence<SICECntOtherModInfo> SICECntOtherModInfoSeq;
	sequence<SICEAMOSUserInfo> SICEAMOSUserInfoSeq;
	sequence<SMatchedUserIdInfo> SMatchedUserIdInfoSeq;
	sequence<SUdbUserInfo> SUdbUserInfoSeq;
	sequence<SChildUserInfo> SChildUserInfoSeq;
    sequence<SB2BChildUserInfo> SB2BChildUserInfoSeq;
    sequence<SChildUserInfo2> SChildUserInfoSeq2;
	sequence<SICEToolProfile> SICEToolProfileSeq;
	sequence<SICEKvPair> SICEKvPairSeq;

	sequence<SImPrefix> SImPrefixSeq;
	dictionary<string,string>     SICEKVMap;
    // e-service 
    struct SICEReceptNum      //客服最大接待人数
    {
        string eserviceid;    //e客服id
        int    receptnum;     //e客服最高接待人数
    };
    sequence<SICEReceptNum> SICEReceptNumSeq;

    struct SICEReceptPriority      //客服优先列表
    {
        string eserviceid;         //e客服id
        int    receptpriority;     //e客服接待权重
    };
    sequence<SICEReceptPriority> SICEReceptPrioritySeq;

    struct SICERecvOffMsg
    {
        string eserviceid;
        int    recvoffmsg;
    };
    sequence<SICERecvOffMsg> SICERecvOffMsgSeq;
    
    struct SICEESGroupInfo            //E客服分组
    {
        string groupName;       //分组名
        int groupId;            //分组id
        string adminId;         //管理员id
        Ice::StringSeq eservicelist;   //成员列表
    };
    sequence<SICEESGroupInfo> SICEESGroupInfoSeq;
    
    struct SICEESBaseGroupInfo
    {
        string groupName;       //分组名
        int groupId;            //分组id
        string adminId;         //管理员id
    }; 

    //E客服扩展区域
    struct SICEExpandArea
    {
        int    id;
        string areaname;
        string url;
        string picpath;
        string createtime;
    };
    sequence<SICEExpandArea> SICEExpandAreaSeq;
    
    //设置E客服评
    struct SICEESEval
    {
        int     code;
        string  codename;
        string  welcome;
    };
    sequence<SICEESEval> SICEESEvalSeq;
    
    //设置E客服评价结果
    struct SICEESCode
    {
        int     code;
        string  codename;
        int     num;
    };
    sequence<SICEESCode> SICEESCodeSeq;
    
    //查看E客服评价结果
    struct SICEESEvalResult
    {
        string              uid;
        int                 sendNum;
        int                 receNum;
        SICEESCodeSeq       codes;
    };
    sequence<SICEESEvalResult> SICEESEvalResultSeq;
     
    //查看E客服评价结果
    struct SICEESEvalResultEx
    {
        string              uid;
        int                 sendNum;
        int                 receNum;
        SICEESCodeSeq       codes;
        string              evalTime;
    };
    sequence<SICEESEvalResultEx> SICEESEvalResultExSeq;

	struct SICESqlItem
	{
		int	type;	//0=int32;2=double,3=string;4=datatime;
		string name;
		string value;
	};
    sequence<SICESqlItem> SICESqlItemSeq;

	struct UserStatics
	{
		int type;
		string loginId;
		int totalDegree;
		int userValue;
		int dailyAction;
		int phoneAuth;

		/// b2b related
		int emailAuth;
		int identityAuth;
		int tpAuth;
		int tpFee;

		/// taobao related
		int alipayAuth;
		int buyCredit;
		int sellCredit;
		
	};

	sequence<UserStatics> UserStaticsSeq;
};      
#endif

