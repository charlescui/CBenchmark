#ifndef __DB_STRUCT_H__
#define __DB_STRUCT_H__

#include <Ice/BuiltinSequences.ice>

module AliDDB
{
    dictionary<string,string>  KVMap;
	sequence<KVMap>            KVMapSeq;
    struct DBRecord
    {
        KVMap     fields;
        KVMapSeq  blobField;
    };
    sequence<DBRecord>         DBRecordSeq;
};

#endif
