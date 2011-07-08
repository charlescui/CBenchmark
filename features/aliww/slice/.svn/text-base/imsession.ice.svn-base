#ifndef __IM_SESSION_ICE
#define __IM_SESSION_ICE

module AliIM
{
	struct SIceSession
	{
		string uid;
		string sessionNo;
		int expiretime;
	};
	interface SessionMgr
	{
		int getUserSession(string uid,out SIceSession retsession);
		int checkUserSession(string uid,string sessionNo);
		int removeSession(string uid);
		int getUserExistSession(string uid, out SIceSession retsession);
	};

};

#endif
