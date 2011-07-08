#ifndef	__TBS_STRUCTS_60_H
#define	__TBS_STRUCTS_60_H

#include <Ice/BuiltinSequences.ice>

/*
 *@auth: yuxh 
 *@date: 2008-03-13
 */
module ALiIMDBTribe
{
struct STribeInfo
{
	long       tribeId;
	string     name;
	string     masterId;
	string     createrId;
	int        tribeclass;
	string     describe;
	string     bulletin;
	short      checkMode;
	string     password;
	string     validateCode;
	int        lastMsgid;
	int        memberTimes;
	int        onlineTimes;
	double     onlineDegree;
	int        discussDegree;
	double     rewardDegree;
	int        masterOffer;
	double     totalDegree;
	string	   keyword;
    short      allowVisitor;
    short      forbidSearch;
    string     extSign;
    int        groupStamp;
    int        blackStamp;
};

struct STribeOfflineMsg
{
	long          tribeId;
	string       memberId;
	short        type;
	string       message;
	int 	     sendTime;
};

struct STribeMemberInfo
{   
	string       userId;
	string       name;
	short        memberLevel;
	short        tribeLevel;
	short        mobileBindFlag;
	string       mobileNo;
	string       bindMobile;
	int          lastMsgid;
    double       onlineDegree;
    int          discussDegree;
    double       rewardDegree;
    double       totalDegree;
    long         groupId;
    short        starMember;
    short        openFlag;
};

/// add for popup flag
struct STribeMemberInfo2
{   
	string       userId;
	string       name;
	short        memberLevel;
	short        tribeLevel;
	short        mobileBindFlag;
	string       mobileNo;
	string       bindMobile;
	int          lastMsgid;
    double       onlineDegree;
    int          discussDegree;
    double       rewardDegree;
    double       totalDegree;
    long         groupId;
    short        starMember;
    short        openFlag;
	int			 popupFlag;
};


struct STribeMember
{
	long         tribeId;
	string       memberId;
	int          level;
	int          lastMsgid;
	string       operId;
    long         groupId;
};


struct STribeId
{
	long         tribeId;
	string       name;
	short        tribeLevel;
	short        tribeStatus;
    string       extSign;
    int          groupStamp;
    short        openTribe;
};

struct STribeId2
{
	long         tribeId;
	string       name;
	short        tribeLevel;
	short        tribeStatus;
    string       extSign;
    int          groupStamp;
    short        openTribe;
	short		 popupFlag;
};

struct STribeIdDb
{
	long         tribeId;
	string       name;
	short        tribeLevel;
	short        tribeStatus;
};

struct STribeGroup
{
	long         tribeId;
    long         groupId;
	string       groupName;
    long         parentId;
};

sequence<STribeMemberInfo> STribeMemberInfoSeq;
/// add for popup flag
sequence<STribeMemberInfo2> STribeMemberInfoSeq2;
sequence<STribeOfflineMsg> STribeOfflineMsgSeq;
sequence<STribeMember> STribeMemberSeq;
sequence<STribeId> STribeIdSeq;
sequence<STribeId2> STribeIdSeq2;
sequence<STribeIdDb> STribeIdDbSeq;
sequence<STribeGroup> STribeGroupSeq;

struct STribeCard
{
	long		tribeId;
	string		memberId;
	string		realName;
	string		phoneNum;
	string		mobileNum;
	string		email;
	string		address;
	string		memo;
};

struct STribeInfo2
{
	long       tribeId;
	string     name;
	string     masterId;
	string     createrId;
	int        tribeclass;
	string     describe;
	string     bulletin;
	short      checkMode;
	string     password;
	string     validateCode;
	int        lastMsgid;
	int        memberTimes;
	int        onlineTimes;
	double     onlineDegree;
	int        discussDegree;
	double     rewardDegree;
	int        masterOffer;
	double     totalDegree;
	string	   keyword;
    short      allowVisitor;
    short      forbidSearch;
    string     extSign;
    int        groupStamp;
    int        blackStamp;
    string     webTid;
    long       groupId;
};

struct STribeMember2
{
	long         tribeId;
	string       memberId;
    string       name;
	int          level;
	int          lastMsgid;
	string       operId;
    long         groupId;
};
sequence<STribeMember2> STribeMember2Seq;

struct STribeInfo3
{
	long       tribeId;
	string     name;
	string     masterId;
	string     createrId;
	int        tribeclass;
	string     describe;
	string     bulletin;
	short      checkMode;
	string     password;
	string     validateCode;
	int        lastMsgid;
	int        memberTimes;
	int        onlineTimes;
	double     onlineDegree;
	int        discussDegree;
	double     rewardDegree;
	int        masterOffer;
	double     totalDegree;
	string	   keyword;
    short      allowVisitor;
    short      forbidSearch;
    string     extSign;
    int        groupStamp;
    int        blackStamp;
    string     webTid;
    long       groupId;
	int		   tribeLimit;
};

struct SWebTribeGroup
{
    long         groupId;
    string       groupName;
    string       serviceId;
    string       siteId;
    string       webId;
};
sequence<SWebTribeGroup> SWebTribeGroupSeq;

struct SWebTribeId
{
	long         tribeId;
	string       name;
	short        tribeLevel;
	short        tribeStatus;
    string       extSign;
    int          groupStamp;
    short        openTribe;
    string       webTid;
    long         groupId;
};
sequence<SWebTribeId> SWebTribeIdSeq;

};
#endif
