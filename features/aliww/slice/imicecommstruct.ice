#ifndef _H_IMICECOMMSTRUCT_H_
#define _H_IMICECOMMSTRUCT_H_

#include <Ice/BuiltinSequences.ice>

module AliIMInterface
{
        dictionary<string,string> KVMAP;
 	struct SWebBindId
	{
		string prefix;
		string webid;//short id
		bool bIMBind;
	};
	sequence<SWebBindId> SWebBindIdSeq;
	struct SWanghaoWebBindId
	{
		string id;
		SWebBindIdSeq webids;
	};
	sequence<SWanghaoWebBindId> SWanghaoWebBindIdSeq;

       sequence<KVMAP> KVMAPSeq;

};




#endif

