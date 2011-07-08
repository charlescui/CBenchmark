/*---------------------------------------------------------------------------
// Filename:        aqdispatch_pack.h
// Date:            2011-01-30 12:50:19
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __AQDISPATCH_PACK_H__
#define __AQDISPATCH_PACK_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"
#include "aqsc_head.h"

using namespace std;

enum AQDISPATCH_CMD
{
    AQSC_NOTIFY_DATA = 0x2000,
    AQSC_REQ_SUBSCRIBE_DATA = 0x2001,
    AQSC_RSP_SUBSCRIBE_DATA = 0x2002,
    AQSC_REQ_UNSUBSCRIBE_DATA = 0x2003,
    AQSC_RSP_UNSUBSCRIBE_DATA = 0x2004,
    AQSC_REQ_HEALTH_CHECK = 0x1001,
    AQSC_RSP_HEALTH_CHECK = 0x1002,
};

struct SAqkvpair
{
public:
    SAqkvpair()
    {
    }

    ~SAqkvpair() { }
    SAqkvpair(const string&  strKey, const string&  strValue)
    {
        m_key = strKey;
        m_value = strValue;
    }
    SAqkvpair&  operator=( const SAqkvpair&  sAqkvpair )
    {
        m_key = sAqkvpair.m_key;
        m_value = sAqkvpair.m_value;
        return *this;
    }

    string m_key;
    string m_value;

public:
    uint32_t Size() const;
};

inline uint32_t SAqkvpair::Size() const
{
    uint32_t nSize = 5;
    nSize += m_key.length();
    nSize += m_value.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SAqkvpair&  sAqkvpair );
CPackData& operator>> ( CPackData& cPackData, SAqkvpair&  sAqkvpair );

class CAqscNotifyData : public CPackData
{
public:
    enum
    {
        CMD_ID = AQSC_NOTIFY_DATA
    };
    CAqscNotifyData()
    {
    }

    ~CAqscNotifyData() { }
    CAqscNotifyData(const uint16_t&  wServerId, const uint16_t&  wDataType, const VECTOR< SAqkvpair >&  vecKvList)
    {
        m_serverId = wServerId;
        m_dataType = wDataType;
        m_kvList = vecKvList;
    }
    CAqscNotifyData&  operator=( const CAqscNotifyData&  cAqscNotifyData )
    {
        m_serverId = cAqscNotifyData.m_serverId;
        m_dataType = cAqscNotifyData.m_dataType;
        m_kvList = cAqscNotifyData.m_kvList;
        return *this;
    }

    const uint16_t&  GetServerId () const { return m_serverId; }
    bool SetServerId ( const uint16_t&  wServerId )
    {
        m_serverId = wServerId;
        return true;
    }
    const uint16_t&  GetDataType () const { return m_dataType; }
    bool SetDataType ( const uint16_t&  wDataType )
    {
        m_dataType = wDataType;
        return true;
    }
    const VECTOR< SAqkvpair >&  GetKvList () const { return m_kvList; }
    bool SetKvList ( const VECTOR< SAqkvpair >&  vecKvList )
    {
        m_kvList = vecKvList;
        return true;
    }
private:
    uint16_t m_serverId;
    uint16_t m_dataType;
    VECTOR< SAqkvpair > m_kvList;

public:
    CAqscHead m_aqscHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CAqscNotifyData::Size() const
{
    uint32_t nSize = 8;
    for(uint32_t i = 0; i < m_kvList.size(); i++)
    {
        nSize += m_kvList[i].Size();
    }
    return nSize;
}

class CAqscReqSubscribeData : public CPackData
{
public:
    enum
    {
        CMD_ID = AQSC_REQ_SUBSCRIBE_DATA
    };
    CAqscReqSubscribeData()
    {
    }

    ~CAqscReqSubscribeData() { }
    CAqscReqSubscribeData(const string&  strAppid, const VECTOR< uint16_t >&  vecSubscribeList)
    {
        m_appid = strAppid;
        m_subscribeList = vecSubscribeList;
    }
    CAqscReqSubscribeData&  operator=( const CAqscReqSubscribeData&  cAqscReqSubscribeData )
    {
        m_appid = cAqscReqSubscribeData.m_appid;
        m_subscribeList = cAqscReqSubscribeData.m_subscribeList;
        return *this;
    }

    const string&  GetAppid () const { return m_appid; }
    bool SetAppid ( const string&  strAppid )
    {
        m_appid = strAppid;
        return true;
    }
    const VECTOR< uint16_t >&  GetSubscribeList () const { return m_subscribeList; }
    bool SetSubscribeList ( const VECTOR< uint16_t >&  vecSubscribeList )
    {
        m_subscribeList = vecSubscribeList;
        return true;
    }
private:
    string m_appid;
    VECTOR< uint16_t > m_subscribeList;

public:
    CAqscHead m_aqscHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CAqscReqSubscribeData::Size() const
{
    uint32_t nSize = 8;
    nSize += m_appid.length();
    nSize += m_subscribeList.size() * 2;
    return nSize;
}

class CAqscRspSubscribeData : public CPackData
{
public:
    enum
    {
        CMD_ID = AQSC_RSP_SUBSCRIBE_DATA
    };
    CAqscRspSubscribeData()
    {
    }

    ~CAqscRspSubscribeData() { }
    CAqscRspSubscribeData(const uint16_t&  wStatus, const string&  strErrorCode)
    {
        m_status = wStatus;
        m_errorCode = strErrorCode;
    }
    CAqscRspSubscribeData&  operator=( const CAqscRspSubscribeData&  cAqscRspSubscribeData )
    {
        m_status = cAqscRspSubscribeData.m_status;
        m_errorCode = cAqscRspSubscribeData.m_errorCode;
        return *this;
    }

    const uint16_t&  GetStatus () const { return m_status; }
    bool SetStatus ( const uint16_t&  wStatus )
    {
        m_status = wStatus;
        return true;
    }
    const string&  GetErrorCode () const { return m_errorCode; }
    bool SetErrorCode ( const string&  strErrorCode )
    {
        m_errorCode = strErrorCode;
        return true;
    }
private:
    uint16_t m_status;
    string m_errorCode;

public:
    CAqscHead m_aqscHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CAqscRspSubscribeData::Size() const
{
    uint32_t nSize = 6;
    nSize += m_errorCode.length();
    return nSize;
}

class CAqscReqUnsubscribeData : public CPackData
{
public:
    enum
    {
        CMD_ID = AQSC_REQ_UNSUBSCRIBE_DATA
    };
    CAqscReqUnsubscribeData()
    {
    }

    ~CAqscReqUnsubscribeData() { }
    CAqscReqUnsubscribeData(const string&  strAppid, const VECTOR< uint16_t >&  vecUnsubscribeList)
    {
        m_appid = strAppid;
        m_unsubscribeList = vecUnsubscribeList;
    }
    CAqscReqUnsubscribeData&  operator=( const CAqscReqUnsubscribeData&  cAqscReqUnsubscribeData )
    {
        m_appid = cAqscReqUnsubscribeData.m_appid;
        m_unsubscribeList = cAqscReqUnsubscribeData.m_unsubscribeList;
        return *this;
    }

    const string&  GetAppid () const { return m_appid; }
    bool SetAppid ( const string&  strAppid )
    {
        m_appid = strAppid;
        return true;
    }
    const VECTOR< uint16_t >&  GetUnsubscribeList () const { return m_unsubscribeList; }
    bool SetUnsubscribeList ( const VECTOR< uint16_t >&  vecUnsubscribeList )
    {
        m_unsubscribeList = vecUnsubscribeList;
        return true;
    }
private:
    string m_appid;
    VECTOR< uint16_t > m_unsubscribeList;

public:
    CAqscHead m_aqscHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CAqscReqUnsubscribeData::Size() const
{
    uint32_t nSize = 8;
    nSize += m_appid.length();
    nSize += m_unsubscribeList.size() * 2;
    return nSize;
}

class CAqscRspUnsubscribeData : public CPackData
{
public:
    enum
    {
        CMD_ID = AQSC_RSP_UNSUBSCRIBE_DATA
    };
    CAqscRspUnsubscribeData()
    {
    }

    ~CAqscRspUnsubscribeData() { }
    CAqscRspUnsubscribeData(const uint16_t&  wStatus, const string&  strErrorCode)
    {
        m_status = wStatus;
        m_errorCode = strErrorCode;
    }
    CAqscRspUnsubscribeData&  operator=( const CAqscRspUnsubscribeData&  cAqscRspUnsubscribeData )
    {
        m_status = cAqscRspUnsubscribeData.m_status;
        m_errorCode = cAqscRspUnsubscribeData.m_errorCode;
        return *this;
    }

    const uint16_t&  GetStatus () const { return m_status; }
    bool SetStatus ( const uint16_t&  wStatus )
    {
        m_status = wStatus;
        return true;
    }
    const string&  GetErrorCode () const { return m_errorCode; }
    bool SetErrorCode ( const string&  strErrorCode )
    {
        m_errorCode = strErrorCode;
        return true;
    }
private:
    uint16_t m_status;
    string m_errorCode;

public:
    CAqscHead m_aqscHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CAqscRspUnsubscribeData::Size() const
{
    uint32_t nSize = 6;
    nSize += m_errorCode.length();
    return nSize;
}

class CAqscReqHealthCheck : public CPackData
{
public:
    enum
    {
        CMD_ID = AQSC_REQ_HEALTH_CHECK
    };
    CAqscReqHealthCheck()
    {
    }

    ~CAqscReqHealthCheck() { }
    CAqscReqHealthCheck(const string&  strAppid)
    {
        m_appid = strAppid;
    }
    CAqscReqHealthCheck&  operator=( const CAqscReqHealthCheck&  cAqscReqHealthCheck )
    {
        m_appid = cAqscReqHealthCheck.m_appid;
        return *this;
    }

    const string&  GetAppid () const { return m_appid; }
    bool SetAppid ( const string&  strAppid )
    {
        m_appid = strAppid;
        return true;
    }
private:
    string m_appid;

public:
    CAqscHead m_aqscHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CAqscReqHealthCheck::Size() const
{
    uint32_t nSize = 4;
    nSize += m_appid.length();
    return nSize;
}

class CAqscRspHealthCheck : public CPackData
{
public:
    enum
    {
        CMD_ID = AQSC_RSP_HEALTH_CHECK
    };
    ~CAqscRspHealthCheck() { }
public:
    CAqscHead m_aqscHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CAqscRspHealthCheck::Size() const
{
    return 0;
}
#endif
