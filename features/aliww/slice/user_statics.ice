#ifndef _USER_STATICS_ICE_
#define _USER_STATICS_ICE_

#include <Ice/BuiltinSequences.ice>
#include "dbdatadefine.ice"

module UserStaticsX
{
    interface UserStaticsI
    {
		/// login id, only insert delta value which is happend everyday
		int insert(AliIMDBBase::UserStatics delta);
		///int insertBatch(AliIMDBBase::UserStaticsSeq deltaseq);
		int get(string id, out AliIMDBBase::UserStatics s);
    };
};

#endif
