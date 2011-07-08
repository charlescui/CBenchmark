#ifndef __DDB_INTERFACE_H__
#define __DDB_INTERFACE_H__

#include "DBStruct.ice"

module AliDDB
{
    interface AliDDBInterface
    {
        ["amd"] int insertRecord(string table, KVMap keys, DBRecord record);
        int insertMultiRecords(string table, KVMapSeq keys, DBRecord record);
        int getRecord(string table, KVMap keys, Ice::StringSeq fields, ::Ice::StringSeq blobFields, out DBRecord record);
        int getRecords(string table, KVMap keys, Ice::StringSeq fields, string condition, Ice::StringSeq orderFields, int num, out DBRecord record);
        int getRecordsCount(string table, KVMap keys, string condition, out int recordNum);
		int getRecordsByPage(string table, KVMap keys, Ice::StringSeq fields, string condition, Ice::StringSeq orderFields, int pageno, int pagesize, out int total, out DBRecord record);
        int getMultiRecords(string table, KVMapSeq keys, Ice::StringSeq fields, string condition, Ice::StringSeq orderFields, int num, out DBRecord record);
        int getMultiRecordsByPage(string table, KVMapSeq keys, Ice::StringSeq fields, string condition, Ice::StringSeq orderFields, int pageno, int pagesize, out int total, out DBRecord record);
        ["amd"] int updateRecord(string table, KVMap keys, KVMap uniqKey, DBRecord record);
        ["amd"] int updateBlob(string table, KVMap keys, DBRecord record);  //overwrite whole blob
        ["amd"] int deleteRecord(string table, KVMap keys, KVMap uniqKey);
    };
};

#endif
