/*---------------------------------------------------------------------------
// Filename:        casc_pack.h
// Date:            2011-02-22 11:43:08
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __CASC_PACK_H__
#define __CASC_PACK_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"
#include "des.h"
#include <zlib.h>
#include "sc_head.h"
#include "imsc_cmd.h"
#include "const_macro.h"

using namespace std;

struct SGoodsInfo
{
public:
    SGoodsInfo()
    {
    }

    ~SGoodsInfo() { }
    SGoodsInfo(const string&  strName, const uint32_t&  dwCount)
    {
        m_name = strName;
        m_count = dwCount;
    }
    SGoodsInfo&  operator=( const SGoodsInfo&  sGoodsInfo )
    {
        m_name = sGoodsInfo.m_name;
        m_count = sGoodsInfo.m_count;
        return *this;
    }

    string m_name;
    uint32_t m_count;

public:
    uint32_t Size() const;
};

inline uint32_t SGoodsInfo::Size() const
{
    uint32_t nSize = 11;
    nSize += m_name.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SGoodsInfo&  sGoodsInfo );
CPackData& operator>> ( CPackData& cPackData, SGoodsInfo&  sGoodsInfo );

struct SGoodsInfoEx
{
public:
    SGoodsInfoEx()
    {
    }

    ~SGoodsInfoEx() { }
    SGoodsInfoEx(const string&  strName, const string&  strInfo, const string&  strUrl)
    {
        m_name = strName;
        m_info = strInfo;
        m_url = strUrl;
    }
    SGoodsInfoEx&  operator=( const SGoodsInfoEx&  sGoodsInfoEx )
    {
        m_name = sGoodsInfoEx.m_name;
        m_info = sGoodsInfoEx.m_info;
        m_url = sGoodsInfoEx.m_url;
        return *this;
    }

    string m_name;
    string m_info;
    string m_url;

public:
    uint32_t Size() const;
};

inline uint32_t SGoodsInfoEx::Size() const
{
    uint32_t nSize = 16;
    nSize += m_name.length();
    nSize += m_info.length();
    nSize += m_url.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SGoodsInfoEx&  sGoodsInfoEx );
CPackData& operator>> ( CPackData& cPackData, SGoodsInfoEx&  sGoodsInfoEx );

class CCascReqGoodssearch : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_REQ_GOODSSEARCH
    };
    CCascReqGoodssearch()
    {
    }

    ~CCascReqGoodssearch() { }
    CCascReqGoodssearch(const string&  strKeyword)
    {
        m_keyword = strKeyword;
    }
    CCascReqGoodssearch&  operator=( const CCascReqGoodssearch&  cCascReqGoodssearch )
    {
        m_keyword = cCascReqGoodssearch.m_keyword;
        return *this;
    }

    const string&  GetKeyword () const { return m_keyword; }
    bool SetKeyword ( const string&  strKeyword )
    {
        m_keyword = strKeyword;
        return true;
    }
private:
    string m_keyword;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascReqGoodssearch::Size() const
{
    uint32_t nSize = 6;
    nSize += m_keyword.length();
    return nSize;
}

class CCascRspGoodssearch : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_RSP_GOODSSEARCH
    };
    CCascRspGoodssearch()
    {
    }

    ~CCascRspGoodssearch() { }
    CCascRspGoodssearch(const uint8_t&  chRetcode, const string&  strKeyword, const VECTOR< SGoodsInfo >&  vecGoods)
    {
        m_retcode = chRetcode;
        m_keyword = strKeyword;
        m_goods = vecGoods;
    }
    CCascRspGoodssearch&  operator=( const CCascRspGoodssearch&  cCascRspGoodssearch )
    {
        m_retcode = cCascRspGoodssearch.m_retcode;
        m_keyword = cCascRspGoodssearch.m_keyword;
        m_goods = cCascRspGoodssearch.m_goods;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const string&  GetKeyword () const { return m_keyword; }
    bool SetKeyword ( const string&  strKeyword )
    {
        m_keyword = strKeyword;
        return true;
    }
    const VECTOR< SGoodsInfo >&  GetGoods () const { return m_goods; }
    bool SetGoods ( const VECTOR< SGoodsInfo >&  vecGoods )
    {
        m_goods = vecGoods;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_keyword;
    VECTOR< SGoodsInfo > m_goods;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascRspGoodssearch::Size() const
{
    uint32_t nSize = 14;
    nSize += m_keyword.length();
    for(uint32_t i = 0; i < m_goods.size(); i++)
    {
        nSize += m_goods[i].Size();
    }
    return nSize;
}

class CCascReqGoodssearchex : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_REQ_GOODSSEARCHEX
    };
    CCascReqGoodssearchex()
    {
    }

    ~CCascReqGoodssearchex() { }
    CCascReqGoodssearchex(const string&  strKeyword)
    {
        m_keyword = strKeyword;
    }
    CCascReqGoodssearchex&  operator=( const CCascReqGoodssearchex&  cCascReqGoodssearchex )
    {
        m_keyword = cCascReqGoodssearchex.m_keyword;
        return *this;
    }

    const string&  GetKeyword () const { return m_keyword; }
    bool SetKeyword ( const string&  strKeyword )
    {
        m_keyword = strKeyword;
        return true;
    }
private:
    string m_keyword;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascReqGoodssearchex::Size() const
{
    uint32_t nSize = 6;
    nSize += m_keyword.length();
    return nSize;
}

class CCascRspGoodssearchex : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_RSP_GOODSSEARCHEX
    };
    CCascRspGoodssearchex()
    {
    }

    ~CCascRspGoodssearchex() { }
    CCascRspGoodssearchex(const uint8_t&  chRetcode, const string&  strKeyword, const VECTOR< SGoodsInfoEx >&  vecGoods)
    {
        m_retcode = chRetcode;
        m_keyword = strKeyword;
        m_goods = vecGoods;
    }
    CCascRspGoodssearchex&  operator=( const CCascRspGoodssearchex&  cCascRspGoodssearchex )
    {
        m_retcode = cCascRspGoodssearchex.m_retcode;
        m_keyword = cCascRspGoodssearchex.m_keyword;
        m_goods = cCascRspGoodssearchex.m_goods;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const string&  GetKeyword () const { return m_keyword; }
    bool SetKeyword ( const string&  strKeyword )
    {
        m_keyword = strKeyword;
        return true;
    }
    const VECTOR< SGoodsInfoEx >&  GetGoods () const { return m_goods; }
    bool SetGoods ( const VECTOR< SGoodsInfoEx >&  vecGoods )
    {
        m_goods = vecGoods;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_keyword;
    VECTOR< SGoodsInfoEx > m_goods;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascRspGoodssearchex::Size() const
{
    uint32_t nSize = 14;
    nSize += m_keyword.length();
    for(uint32_t i = 0; i < m_goods.size(); i++)
    {
        nSize += m_goods[i].Size();
    }
    return nSize;
}

class CCascReqWwcardInfo : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_REQ_WWCARD_INFO
    };
    CCascReqWwcardInfo()
    {
    }

    ~CCascReqWwcardInfo() { }
    CCascReqWwcardInfo(const uint8_t&  chType, const string&  strUid)
    {
        m_type = chType;
        m_uid = strUid;
    }
    CCascReqWwcardInfo&  operator=( const CCascReqWwcardInfo&  cCascReqWwcardInfo )
    {
        m_type = cCascReqWwcardInfo.m_type;
        m_uid = cCascReqWwcardInfo.m_uid;
        return *this;
    }

    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const string&  GetUid () const { return m_uid; }
    bool SetUid ( const string&  strUid )
    {
        m_uid = strUid;
        return true;
    }
private:
    uint8_t m_type;
    string m_uid;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascReqWwcardInfo::Size() const
{
    uint32_t nSize = 8;
    nSize += m_uid.length();
    return nSize;
}

class CCascRspWwcardInfo : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_RSP_WWCARD_INFO
    };
    CCascRspWwcardInfo()
    {
    }

    ~CCascRspWwcardInfo() { }
    CCascRspWwcardInfo(const uint8_t&  chRetcode, const string&  strUid, const uint8_t&  chType, const string&  strXmlstring, const string&  strExtinfo)
    {
        m_retcode = chRetcode;
        m_uid = strUid;
        m_type = chType;
        m_xmlstring = strXmlstring;
        m_extinfo = strExtinfo;
    }
    CCascRspWwcardInfo&  operator=( const CCascRspWwcardInfo&  cCascRspWwcardInfo )
    {
        m_retcode = cCascRspWwcardInfo.m_retcode;
        m_uid = cCascRspWwcardInfo.m_uid;
        m_type = cCascRspWwcardInfo.m_type;
        m_xmlstring = cCascRspWwcardInfo.m_xmlstring;
        m_extinfo = cCascRspWwcardInfo.m_extinfo;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const string&  GetUid () const { return m_uid; }
    bool SetUid ( const string&  strUid )
    {
        m_uid = strUid;
        return true;
    }
    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const string&  GetXmlstring () const { return m_xmlstring; }
    bool SetXmlstring ( const string&  strXmlstring )
    {
        m_xmlstring = strXmlstring;
        return true;
    }
    const string&  GetExtinfo () const { return m_extinfo; }
    bool SetExtinfo ( const string&  strExtinfo )
    {
        m_extinfo = strExtinfo;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_uid;
    uint8_t m_type;
    string m_xmlstring;
    string m_extinfo;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascRspWwcardInfo::Size() const
{
    uint32_t nSize = 20;
    nSize += m_uid.length();
    nSize += m_xmlstring.length();
    nSize += m_extinfo.length();
    return nSize;
}

class CCascReqWwcardLevel : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_REQ_WWCARD_LEVEL
    };
    CCascReqWwcardLevel()
    {
    }

    ~CCascReqWwcardLevel() { }
    CCascReqWwcardLevel(const string&  strUid)
    {
        m_uid = strUid;
    }
    CCascReqWwcardLevel&  operator=( const CCascReqWwcardLevel&  cCascReqWwcardLevel )
    {
        m_uid = cCascReqWwcardLevel.m_uid;
        return *this;
    }

    const string&  GetUid () const { return m_uid; }
    bool SetUid ( const string&  strUid )
    {
        m_uid = strUid;
        return true;
    }
private:
    string m_uid;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascReqWwcardLevel::Size() const
{
    uint32_t nSize = 6;
    nSize += m_uid.length();
    return nSize;
}

class CCascRspWwcardLevel : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_RSP_WWCARD_LEVEL
    };
    CCascRspWwcardLevel()
    {
    }

    ~CCascRspWwcardLevel() { }
    CCascRspWwcardLevel(const uint8_t&  chRetcode, const string&  strUid, const uint32_t&  dwUserLevel, const uint32_t&  dwTotalDegree, const uint32_t&  dwNeedDegree, const VECTOR< uint8_t >&  vecShowCount)
    {
        m_retcode = chRetcode;
        m_uid = strUid;
        m_userLevel = dwUserLevel;
        m_totalDegree = dwTotalDegree;
        m_needDegree = dwNeedDegree;
        m_showCount = vecShowCount;
    }
    CCascRspWwcardLevel&  operator=( const CCascRspWwcardLevel&  cCascRspWwcardLevel )
    {
        m_retcode = cCascRspWwcardLevel.m_retcode;
        m_uid = cCascRspWwcardLevel.m_uid;
        m_userLevel = cCascRspWwcardLevel.m_userLevel;
        m_totalDegree = cCascRspWwcardLevel.m_totalDegree;
        m_needDegree = cCascRspWwcardLevel.m_needDegree;
        m_showCount = cCascRspWwcardLevel.m_showCount;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const string&  GetUid () const { return m_uid; }
    bool SetUid ( const string&  strUid )
    {
        m_uid = strUid;
        return true;
    }
    const uint32_t&  GetUserLevel () const { return m_userLevel; }
    bool SetUserLevel ( const uint32_t&  dwUserLevel )
    {
        m_userLevel = dwUserLevel;
        return true;
    }
    const uint32_t&  GetTotalDegree () const { return m_totalDegree; }
    bool SetTotalDegree ( const uint32_t&  dwTotalDegree )
    {
        m_totalDegree = dwTotalDegree;
        return true;
    }
    const uint32_t&  GetNeedDegree () const { return m_needDegree; }
    bool SetNeedDegree ( const uint32_t&  dwNeedDegree )
    {
        m_needDegree = dwNeedDegree;
        return true;
    }
    const VECTOR< uint8_t >&  GetShowCount () const { return m_showCount; }
    bool SetShowCount ( const VECTOR< uint8_t >&  vecShowCount )
    {
        m_showCount = vecShowCount;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_uid;
    uint32_t m_userLevel;
    uint32_t m_totalDegree;
    uint32_t m_needDegree;
    VECTOR< uint8_t > m_showCount;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascRspWwcardLevel::Size() const
{
    uint32_t nSize = 29;
    nSize += m_uid.length();
    nSize += m_showCount.size() * 1;
    return nSize;
}

class CCascReqWwcardSns : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_REQ_WWCARD_SNS
    };
    CCascReqWwcardSns()
    {
    }

    ~CCascReqWwcardSns() { }
    CCascReqWwcardSns(const string&  strUid)
    {
        m_uid = strUid;
    }
    CCascReqWwcardSns&  operator=( const CCascReqWwcardSns&  cCascReqWwcardSns )
    {
        m_uid = cCascReqWwcardSns.m_uid;
        return *this;
    }

    const string&  GetUid () const { return m_uid; }
    bool SetUid ( const string&  strUid )
    {
        m_uid = strUid;
        return true;
    }
private:
    string m_uid;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascReqWwcardSns::Size() const
{
    uint32_t nSize = 6;
    nSize += m_uid.length();
    return nSize;
}

class CCascRspWwcardSns : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_RSP_WWCARD_SNS
    };
    CCascRspWwcardSns()
    {
    }

    ~CCascRspWwcardSns() { }
    CCascRspWwcardSns(const uint8_t&  chRetcode, const string&  strUid, const string&  strXmlstring)
    {
        m_retcode = chRetcode;
        m_uid = strUid;
        m_xmlstring = strXmlstring;
    }
    CCascRspWwcardSns&  operator=( const CCascRspWwcardSns&  cCascRspWwcardSns )
    {
        m_retcode = cCascRspWwcardSns.m_retcode;
        m_uid = cCascRspWwcardSns.m_uid;
        m_xmlstring = cCascRspWwcardSns.m_xmlstring;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const string&  GetUid () const { return m_uid; }
    bool SetUid ( const string&  strUid )
    {
        m_uid = strUid;
        return true;
    }
    const string&  GetXmlstring () const { return m_xmlstring; }
    bool SetXmlstring ( const string&  strXmlstring )
    {
        m_xmlstring = strXmlstring;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_uid;
    string m_xmlstring;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascRspWwcardSns::Size() const
{
    uint32_t nSize = 13;
    nSize += m_uid.length();
    nSize += m_xmlstring.length();
    return nSize;
}

class CCascReqWwcardEvaluate : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_REQ_WWCARD_EVALUATE
    };
    CCascReqWwcardEvaluate()
    {
    }

    ~CCascReqWwcardEvaluate() { }
    CCascReqWwcardEvaluate(const string&  strUid)
    {
        m_uid = strUid;
    }
    CCascReqWwcardEvaluate&  operator=( const CCascReqWwcardEvaluate&  cCascReqWwcardEvaluate )
    {
        m_uid = cCascReqWwcardEvaluate.m_uid;
        return *this;
    }

    const string&  GetUid () const { return m_uid; }
    bool SetUid ( const string&  strUid )
    {
        m_uid = strUid;
        return true;
    }
private:
    string m_uid;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascReqWwcardEvaluate::Size() const
{
    uint32_t nSize = 6;
    nSize += m_uid.length();
    return nSize;
}

class CCascRspWwcardEvaluate : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_RSP_WWCARD_EVALUATE
    };
    CCascRspWwcardEvaluate()
    {
    }

    ~CCascRspWwcardEvaluate() { }
    CCascRspWwcardEvaluate(const uint8_t&  chRetcode, const string&  strUid, const string&  strXmlstring, const string&  strExt)
    {
        m_retcode = chRetcode;
        m_uid = strUid;
        m_xmlstring = strXmlstring;
        m_ext = strExt;
    }
    CCascRspWwcardEvaluate&  operator=( const CCascRspWwcardEvaluate&  cCascRspWwcardEvaluate )
    {
        m_retcode = cCascRspWwcardEvaluate.m_retcode;
        m_uid = cCascRspWwcardEvaluate.m_uid;
        m_xmlstring = cCascRspWwcardEvaluate.m_xmlstring;
        m_ext = cCascRspWwcardEvaluate.m_ext;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const string&  GetUid () const { return m_uid; }
    bool SetUid ( const string&  strUid )
    {
        m_uid = strUid;
        return true;
    }
    const string&  GetXmlstring () const { return m_xmlstring; }
    bool SetXmlstring ( const string&  strXmlstring )
    {
        m_xmlstring = strXmlstring;
        return true;
    }
    const string&  GetExt () const { return m_ext; }
    bool SetExt ( const string&  strExt )
    {
        m_ext = strExt;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_uid;
    string m_xmlstring;
    string m_ext;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascRspWwcardEvaluate::Size() const
{
    uint32_t nSize = 18;
    nSize += m_uid.length();
    nSize += m_xmlstring.length();
    nSize += m_ext.length();
    return nSize;
}

class CCascReqWwcardFavorite : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_REQ_WWCARD_FAVORITE
    };
    CCascReqWwcardFavorite()
    {
    }

    ~CCascReqWwcardFavorite() { }
    CCascReqWwcardFavorite(const string&  strUid)
    {
        m_uid = strUid;
    }
    CCascReqWwcardFavorite&  operator=( const CCascReqWwcardFavorite&  cCascReqWwcardFavorite )
    {
        m_uid = cCascReqWwcardFavorite.m_uid;
        return *this;
    }

    const string&  GetUid () const { return m_uid; }
    bool SetUid ( const string&  strUid )
    {
        m_uid = strUid;
        return true;
    }
private:
    string m_uid;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascReqWwcardFavorite::Size() const
{
    uint32_t nSize = 6;
    nSize += m_uid.length();
    return nSize;
}

class CCascRspWwcardFavorite : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_RSP_WWCARD_FAVORITE
    };
    CCascRspWwcardFavorite()
    {
    }

    ~CCascRspWwcardFavorite() { }
    CCascRspWwcardFavorite(const uint8_t&  chRetcode, const string&  strUid, const string&  strXmlstring)
    {
        m_retcode = chRetcode;
        m_uid = strUid;
        m_xmlstring = strXmlstring;
    }
    CCascRspWwcardFavorite&  operator=( const CCascRspWwcardFavorite&  cCascRspWwcardFavorite )
    {
        m_retcode = cCascRspWwcardFavorite.m_retcode;
        m_uid = cCascRspWwcardFavorite.m_uid;
        m_xmlstring = cCascRspWwcardFavorite.m_xmlstring;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const string&  GetUid () const { return m_uid; }
    bool SetUid ( const string&  strUid )
    {
        m_uid = strUid;
        return true;
    }
    const string&  GetXmlstring () const { return m_xmlstring; }
    bool SetXmlstring ( const string&  strXmlstring )
    {
        m_xmlstring = strXmlstring;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_uid;
    string m_xmlstring;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascRspWwcardFavorite::Size() const
{
    uint32_t nSize = 13;
    nSize += m_uid.length();
    nSize += m_xmlstring.length();
    return nSize;
}

class CCascReqTradeList : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_REQ_TRADE_LIST
    };
    CCascReqTradeList()
    {
    }

    ~CCascReqTradeList() { }
    CCascReqTradeList(const string&  strReqstring)
    {
        m_reqstring = strReqstring;
    }
    CCascReqTradeList&  operator=( const CCascReqTradeList&  cCascReqTradeList )
    {
        m_reqstring = cCascReqTradeList.m_reqstring;
        return *this;
    }

    const string&  GetReqstring () const { return m_reqstring; }
    bool SetReqstring ( const string&  strReqstring )
    {
        m_reqstring = strReqstring;
        return true;
    }
private:
    string m_reqstring;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascReqTradeList::Size() const
{
    uint32_t nSize = 6;
    nSize += m_reqstring.length();
    return nSize;
}

class CCascRspTradeList : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_RSP_TRADE_LIST
    };
    CCascRspTradeList()
    {
    }

    ~CCascRspTradeList() { }
    CCascRspTradeList(const uint8_t&  chRetcode, const string&  strXmlstring)
    {
        m_retcode = chRetcode;
        m_xmlstring = strXmlstring;
    }
    CCascRspTradeList&  operator=( const CCascRspTradeList&  cCascRspTradeList )
    {
        m_retcode = cCascRspTradeList.m_retcode;
        m_xmlstring = cCascRspTradeList.m_xmlstring;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const string&  GetXmlstring () const { return m_xmlstring; }
    bool SetXmlstring ( const string&  strXmlstring )
    {
        m_xmlstring = strXmlstring;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_xmlstring;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascRspTradeList::Size() const
{
    uint32_t nSize = 8;
    nSize += m_xmlstring.length();
    return nSize;
}

class CCascRspTradeInfo : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_RSP_TRADE_INFO
    };
    CCascRspTradeInfo()
    {
    }

    ~CCascRspTradeInfo() { }
    CCascRspTradeInfo(const uint8_t&  chRetcode, const string&  strXmlstring)
    {
        m_retcode = chRetcode;
        m_xmlstring = strXmlstring;
    }
    CCascRspTradeInfo&  operator=( const CCascRspTradeInfo&  cCascRspTradeInfo )
    {
        m_retcode = cCascRspTradeInfo.m_retcode;
        m_xmlstring = cCascRspTradeInfo.m_xmlstring;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const string&  GetXmlstring () const { return m_xmlstring; }
    bool SetXmlstring ( const string&  strXmlstring )
    {
        m_xmlstring = strXmlstring;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_xmlstring;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascRspTradeInfo::Size() const
{
    uint32_t nSize = 8;
    nSize += m_xmlstring.length();
    return nSize;
}

class CCascReqEsexpandtab : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_REQ_ESEXPANDTAB
    };
    CCascReqEsexpandtab()
    {
    }

    ~CCascReqEsexpandtab() { }
    CCascReqEsexpandtab(const string&  strReserve)
    {
        m_reserve = strReserve;
    }
    CCascReqEsexpandtab&  operator=( const CCascReqEsexpandtab&  cCascReqEsexpandtab )
    {
        m_reserve = cCascReqEsexpandtab.m_reserve;
        return *this;
    }

    const string&  GetReserve () const { return m_reserve; }
    bool SetReserve ( const string&  strReserve )
    {
        m_reserve = strReserve;
        return true;
    }
private:
    string m_reserve;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascReqEsexpandtab::Size() const
{
    uint32_t nSize = 6;
    nSize += m_reserve.length();
    return nSize;
}

struct SExpandinfo
{
public:
    SExpandinfo()
    {
    }

    ~SExpandinfo() { }
    SExpandinfo(const string&  strName, const string&  strUrl, const string&  strPicpath)
    {
        m_name = strName;
        m_url = strUrl;
        m_picpath = strPicpath;
    }
    SExpandinfo&  operator=( const SExpandinfo&  sExpandinfo )
    {
        m_name = sExpandinfo.m_name;
        m_url = sExpandinfo.m_url;
        m_picpath = sExpandinfo.m_picpath;
        return *this;
    }

    string m_name;
    string m_url;
    string m_picpath;

public:
    uint32_t Size() const;
};

inline uint32_t SExpandinfo::Size() const
{
    uint32_t nSize = 16;
    nSize += m_name.length();
    nSize += m_url.length();
    nSize += m_picpath.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SExpandinfo&  sExpandinfo );
CPackData& operator>> ( CPackData& cPackData, SExpandinfo&  sExpandinfo );

class CCascRspEsexpandtab : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_RSP_ESEXPANDTAB
    };
    CCascRspEsexpandtab()
    {
    }

    ~CCascRspEsexpandtab() { }
    CCascRspEsexpandtab(const VECTOR< SExpandinfo >&  vecExpandtabs)
    {
        m_expandtabs = vecExpandtabs;
    }
    CCascRspEsexpandtab&  operator=( const CCascRspEsexpandtab&  cCascRspEsexpandtab )
    {
        m_expandtabs = cCascRspEsexpandtab.m_expandtabs;
        return *this;
    }

    const VECTOR< SExpandinfo >&  GetExpandtabs () const { return m_expandtabs; }
    bool SetExpandtabs ( const VECTOR< SExpandinfo >&  vecExpandtabs )
    {
        m_expandtabs = vecExpandtabs;
        return true;
    }
private:
    VECTOR< SExpandinfo > m_expandtabs;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascRspEsexpandtab::Size() const
{
    uint32_t nSize = 7;
    for(uint32_t i = 0; i < m_expandtabs.size(); i++)
    {
        nSize += m_expandtabs[i].Size();
    }
    return nSize;
}

class CCascReqSendEseval : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_REQ_SEND_ESEVAL
    };
    CCascReqSendEseval()
    {
    }

    ~CCascReqSendEseval() { }
    CCascReqSendEseval(const string&  strTargetuid)
    {
        m_targetuid = strTargetuid;
    }
    CCascReqSendEseval&  operator=( const CCascReqSendEseval&  cCascReqSendEseval )
    {
        m_targetuid = cCascReqSendEseval.m_targetuid;
        return *this;
    }

    const string&  GetTargetuid () const { return m_targetuid; }
    bool SetTargetuid ( const string&  strTargetuid )
    {
        m_targetuid = strTargetuid;
        return true;
    }
private:
    string m_targetuid;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascReqSendEseval::Size() const
{
    uint32_t nSize = 6;
    nSize += m_targetuid.length();
    return nSize;
}

class CCascRspSendEseval : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_RSP_SEND_ESEVAL
    };
    CCascRspSendEseval() : m_reserve("")
    {
    }

    ~CCascRspSendEseval() { }
    CCascRspSendEseval(const string&  strTargetuid, const uint8_t&  chRet, const string&  strReserve= "")
    {
        m_targetuid = strTargetuid;
        m_ret = chRet;
        m_reserve = strReserve;
    }
    CCascRspSendEseval&  operator=( const CCascRspSendEseval&  cCascRspSendEseval )
    {
        m_targetuid = cCascRspSendEseval.m_targetuid;
        m_ret = cCascRspSendEseval.m_ret;
        m_reserve = cCascRspSendEseval.m_reserve;
        return *this;
    }

    const string&  GetTargetuid () const { return m_targetuid; }
    bool SetTargetuid ( const string&  strTargetuid )
    {
        m_targetuid = strTargetuid;
        return true;
    }
    const uint8_t&  GetRet () const { return m_ret; }
    bool SetRet ( const uint8_t&  chRet )
    {
        m_ret = chRet;
        return true;
    }
    const string&  GetReserve () const { return m_reserve; }
    bool SetReserve ( const string&  strReserve )
    {
        m_reserve = strReserve;
        return true;
    }
private:
    string m_targetuid;
    uint8_t m_ret;
    string m_reserve;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascRspSendEseval::Size() const
{
    uint32_t nSize = 13;
    nSize += m_targetuid.length();
    nSize += m_reserve.length();
    return nSize;
}

class CCascReqGetcntlist : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_REQ_GETCNTLIST
    };
    CCascReqGetcntlist()
    {
    }

    ~CCascReqGetcntlist() { }
    CCascReqGetcntlist(const uint8_t&  chType)
    {
        m_type = chType;
    }
    CCascReqGetcntlist&  operator=( const CCascReqGetcntlist&  cCascReqGetcntlist )
    {
        m_type = cCascReqGetcntlist.m_type;
        return *this;
    }

    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
private:
    uint8_t m_type;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascReqGetcntlist::Size() const
{
    return 3;
}
struct SCntinfo
{
public:
    SCntinfo()
    {
    }

    ~SCntinfo() { }
    SCntinfo(const string&  strContactid, const string&  strNickname, const string&  strGroupname, const string&  strPrelogintime, const string&  strCreatetime)
    {
        m_contactid = strContactid;
        m_nickname = strNickname;
        m_groupname = strGroupname;
        m_prelogintime = strPrelogintime;
        m_createtime = strCreatetime;
    }
    SCntinfo&  operator=( const SCntinfo&  sCntinfo )
    {
        m_contactid = sCntinfo.m_contactid;
        m_nickname = sCntinfo.m_nickname;
        m_groupname = sCntinfo.m_groupname;
        m_prelogintime = sCntinfo.m_prelogintime;
        m_createtime = sCntinfo.m_createtime;
        return *this;
    }

    string m_contactid;
    string m_nickname;
    string m_groupname;
    string m_prelogintime;
    string m_createtime;

public:
    uint32_t Size() const;
};

inline uint32_t SCntinfo::Size() const
{
    uint32_t nSize = 26;
    nSize += m_contactid.length();
    nSize += m_nickname.length();
    nSize += m_groupname.length();
    nSize += m_prelogintime.length();
    nSize += m_createtime.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SCntinfo&  sCntinfo );
CPackData& operator>> ( CPackData& cPackData, SCntinfo&  sCntinfo );

class CCascRspGetcntlist : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_RSP_GETCNTLIST
    };
    CCascRspGetcntlist()
    {
    }

    ~CCascRspGetcntlist() { }
    CCascRspGetcntlist(const VECTOR< SCntinfo >&  vecCntlist)
    {
        m_cntlist = vecCntlist;
    }
    CCascRspGetcntlist&  operator=( const CCascRspGetcntlist&  cCascRspGetcntlist )
    {
        m_cntlist = cCascRspGetcntlist.m_cntlist;
        return *this;
    }

    const VECTOR< SCntinfo >&  GetCntlist () const { return m_cntlist; }
    bool SetCntlist ( const VECTOR< SCntinfo >&  vecCntlist )
    {
        m_cntlist = vecCntlist;
        return true;
    }
private:
    VECTOR< SCntinfo > m_cntlist;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascRspGetcntlist::Size() const
{
    uint32_t nSize = 7;
    for(uint32_t i = 0; i < m_cntlist.size(); i++)
    {
        nSize += m_cntlist[i].Size();
    }
    return nSize;
}

class CCascReqAuthShellcmd : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_REQ_AUTH_SHELLCMD
    };
    CCascReqAuthShellcmd()
    {
    }

    ~CCascReqAuthShellcmd() { }
    CCascReqAuthShellcmd(const string&  strCmdData, const string&  strSign)
    {
        m_cmdData = strCmdData;
        m_sign = strSign;
    }
    CCascReqAuthShellcmd&  operator=( const CCascReqAuthShellcmd&  cCascReqAuthShellcmd )
    {
        m_cmdData = cCascReqAuthShellcmd.m_cmdData;
        m_sign = cCascReqAuthShellcmd.m_sign;
        return *this;
    }

    const string&  GetCmdData () const { return m_cmdData; }
    bool SetCmdData ( const string&  strCmdData )
    {
        m_cmdData = strCmdData;
        return true;
    }
    const string&  GetSign () const { return m_sign; }
    bool SetSign ( const string&  strSign )
    {
        m_sign = strSign;
        return true;
    }
private:
    string m_cmdData;
    string m_sign;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascReqAuthShellcmd::Size() const
{
    uint32_t nSize = 11;
    nSize += m_cmdData.length();
    nSize += m_sign.length();
    return nSize;
}

class CCascRspAuthShellcmd : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_RSP_AUTH_SHELLCMD
    };
    CCascRspAuthShellcmd()
    {
    }

    ~CCascRspAuthShellcmd() { }
    CCascRspAuthShellcmd(const uint8_t&  chRetcode, const string&  strCmdData)
    {
        m_retcode = chRetcode;
        m_cmdData = strCmdData;
    }
    CCascRspAuthShellcmd&  operator=( const CCascRspAuthShellcmd&  cCascRspAuthShellcmd )
    {
        m_retcode = cCascRspAuthShellcmd.m_retcode;
        m_cmdData = cCascRspAuthShellcmd.m_cmdData;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const string&  GetCmdData () const { return m_cmdData; }
    bool SetCmdData ( const string&  strCmdData )
    {
        m_cmdData = strCmdData;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_cmdData;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascRspAuthShellcmd::Size() const
{
    uint32_t nSize = 8;
    nSize += m_cmdData.length();
    return nSize;
}

class CCascReqWwMainsearch : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_REQ_WW_MAINSEARCH
    };
    CCascReqWwMainsearch()
    {
    }

    ~CCascReqWwMainsearch() { }
    CCascReqWwMainsearch(const string&  strReqData)
    {
        m_reqData = strReqData;
    }
    CCascReqWwMainsearch&  operator=( const CCascReqWwMainsearch&  cCascReqWwMainsearch )
    {
        m_reqData = cCascReqWwMainsearch.m_reqData;
        return *this;
    }

    const string&  GetReqData () const { return m_reqData; }
    bool SetReqData ( const string&  strReqData )
    {
        m_reqData = strReqData;
        return true;
    }
private:
    string m_reqData;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascReqWwMainsearch::Size() const
{
    uint32_t nSize = 6;
    nSize += m_reqData.length();
    return nSize;
}

class CCascRspWwMainsearch : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_RSP_WW_MAINSEARCH
    };
    CCascRspWwMainsearch()
    {
    }

    ~CCascRspWwMainsearch() { }
    CCascRspWwMainsearch(const uint8_t&  chRetcode, const string&  strRspData)
    {
        m_retcode = chRetcode;
        m_rspData = strRspData;
    }
    CCascRspWwMainsearch&  operator=( const CCascRspWwMainsearch&  cCascRspWwMainsearch )
    {
        m_retcode = cCascRspWwMainsearch.m_retcode;
        m_rspData = cCascRspWwMainsearch.m_rspData;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const string&  GetRspData () const { return m_rspData; }
    bool SetRspData ( const string&  strRspData )
    {
        m_rspData = strRspData;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_rspData;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascRspWwMainsearch::Size() const
{
    uint32_t nSize = 8;
    nSize += m_rspData.length();
    return nSize;
}

class CCascReqGetUsercrinfo : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_REQ_GET_USERCRINFO
    };
    CCascReqGetUsercrinfo()
    {
    }

    ~CCascReqGetUsercrinfo() { }
    CCascReqGetUsercrinfo(const string&  strUid, const string&  strVersion)
    {
        m_uid = strUid;
        m_version = strVersion;
    }
    CCascReqGetUsercrinfo&  operator=( const CCascReqGetUsercrinfo&  cCascReqGetUsercrinfo )
    {
        m_uid = cCascReqGetUsercrinfo.m_uid;
        m_version = cCascReqGetUsercrinfo.m_version;
        return *this;
    }

    const string&  GetUid () const { return m_uid; }
    bool SetUid ( const string&  strUid )
    {
        m_uid = strUid;
        return true;
    }
    const string&  GetVersion () const { return m_version; }
    bool SetVersion ( const string&  strVersion )
    {
        m_version = strVersion;
        return true;
    }
private:
    string m_uid;
    string m_version;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascReqGetUsercrinfo::Size() const
{
    uint32_t nSize = 11;
    nSize += m_uid.length();
    nSize += m_version.length();
    return nSize;
}

class CCascRspGetUsercrinfo : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_RSP_GET_USERCRINFO
    };
    CCascRspGetUsercrinfo()
    {
    }

    ~CCascRspGetUsercrinfo() { }
    CCascRspGetUsercrinfo(const uint32_t&  dwRetcode, const uint8_t&  chCrstate, const uint32_t&  dwBegtime, const uint32_t&  dwCrdays, const string&  strExtmsg)
    {
        m_retcode = dwRetcode;
        m_crstate = chCrstate;
        m_begtime = dwBegtime;
        m_crdays = dwCrdays;
        m_extmsg = strExtmsg;
    }
    CCascRspGetUsercrinfo&  operator=( const CCascRspGetUsercrinfo&  cCascRspGetUsercrinfo )
    {
        m_retcode = cCascRspGetUsercrinfo.m_retcode;
        m_crstate = cCascRspGetUsercrinfo.m_crstate;
        m_begtime = cCascRspGetUsercrinfo.m_begtime;
        m_crdays = cCascRspGetUsercrinfo.m_crdays;
        m_extmsg = cCascRspGetUsercrinfo.m_extmsg;
        return *this;
    }

    const uint32_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint32_t&  dwRetcode )
    {
        m_retcode = dwRetcode;
        return true;
    }
    const uint8_t&  GetCrstate () const { return m_crstate; }
    bool SetCrstate ( const uint8_t&  chCrstate )
    {
        m_crstate = chCrstate;
        return true;
    }
    const uint32_t&  GetBegtime () const { return m_begtime; }
    bool SetBegtime ( const uint32_t&  dwBegtime )
    {
        m_begtime = dwBegtime;
        return true;
    }
    const uint32_t&  GetCrdays () const { return m_crdays; }
    bool SetCrdays ( const uint32_t&  dwCrdays )
    {
        m_crdays = dwCrdays;
        return true;
    }
    const string&  GetExtmsg () const { return m_extmsg; }
    bool SetExtmsg ( const string&  strExtmsg )
    {
        m_extmsg = strExtmsg;
        return true;
    }
private:
    uint32_t m_retcode;
    uint8_t m_crstate;
    uint32_t m_begtime;
    uint32_t m_crdays;
    string m_extmsg;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascRspGetUsercrinfo::Size() const
{
    uint32_t nSize = 23;
    nSize += m_extmsg.length();
    return nSize;
}

class CCascReqSetUsercrinfo : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_REQ_SET_USERCRINFO
    };
    CCascReqSetUsercrinfo()
    {
    }

    ~CCascReqSetUsercrinfo() { }
    CCascReqSetUsercrinfo(const string&  strUid, const string&  strVersion, const uint8_t&  chCrstate)
    {
        m_uid = strUid;
        m_version = strVersion;
        m_crstate = chCrstate;
    }
    CCascReqSetUsercrinfo&  operator=( const CCascReqSetUsercrinfo&  cCascReqSetUsercrinfo )
    {
        m_uid = cCascReqSetUsercrinfo.m_uid;
        m_version = cCascReqSetUsercrinfo.m_version;
        m_crstate = cCascReqSetUsercrinfo.m_crstate;
        return *this;
    }

    const string&  GetUid () const { return m_uid; }
    bool SetUid ( const string&  strUid )
    {
        m_uid = strUid;
        return true;
    }
    const string&  GetVersion () const { return m_version; }
    bool SetVersion ( const string&  strVersion )
    {
        m_version = strVersion;
        return true;
    }
    const uint8_t&  GetCrstate () const { return m_crstate; }
    bool SetCrstate ( const uint8_t&  chCrstate )
    {
        m_crstate = chCrstate;
        return true;
    }
private:
    string m_uid;
    string m_version;
    uint8_t m_crstate;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascReqSetUsercrinfo::Size() const
{
    uint32_t nSize = 13;
    nSize += m_uid.length();
    nSize += m_version.length();
    return nSize;
}

class CCascRspSetUsercrinfo : public CPackData
{
public:
    enum
    {
        CMD_ID = CASC_RSP_SET_USERCRINFO
    };
    CCascRspSetUsercrinfo()
    {
    }

    ~CCascRspSetUsercrinfo() { }
    CCascRspSetUsercrinfo(const uint32_t&  dwRetcode, const uint8_t&  chCrstate, const uint32_t&  dwBegtime, const uint32_t&  dwCrdays, const string&  strExtmsg)
    {
        m_retcode = dwRetcode;
        m_crstate = chCrstate;
        m_begtime = dwBegtime;
        m_crdays = dwCrdays;
        m_extmsg = strExtmsg;
    }
    CCascRspSetUsercrinfo&  operator=( const CCascRspSetUsercrinfo&  cCascRspSetUsercrinfo )
    {
        m_retcode = cCascRspSetUsercrinfo.m_retcode;
        m_crstate = cCascRspSetUsercrinfo.m_crstate;
        m_begtime = cCascRspSetUsercrinfo.m_begtime;
        m_crdays = cCascRspSetUsercrinfo.m_crdays;
        m_extmsg = cCascRspSetUsercrinfo.m_extmsg;
        return *this;
    }

    const uint32_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint32_t&  dwRetcode )
    {
        m_retcode = dwRetcode;
        return true;
    }
    const uint8_t&  GetCrstate () const { return m_crstate; }
    bool SetCrstate ( const uint8_t&  chCrstate )
    {
        m_crstate = chCrstate;
        return true;
    }
    const uint32_t&  GetBegtime () const { return m_begtime; }
    bool SetBegtime ( const uint32_t&  dwBegtime )
    {
        m_begtime = dwBegtime;
        return true;
    }
    const uint32_t&  GetCrdays () const { return m_crdays; }
    bool SetCrdays ( const uint32_t&  dwCrdays )
    {
        m_crdays = dwCrdays;
        return true;
    }
    const string&  GetExtmsg () const { return m_extmsg; }
    bool SetExtmsg ( const string&  strExtmsg )
    {
        m_extmsg = strExtmsg;
        return true;
    }
private:
    uint32_t m_retcode;
    uint8_t m_crstate;
    uint32_t m_begtime;
    uint32_t m_crdays;
    string m_extmsg;

public:
    CScHead m_scHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData, const string& strKey = "");
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData, const string& strKey = "");
    uint32_t Size() const;
};

inline uint32_t CCascRspSetUsercrinfo::Size() const
{
    uint32_t nSize = 23;
    nSize += m_extmsg.length();
    return nSize;
}

#endif
