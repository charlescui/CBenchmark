/*---------------------------------------------------------------------------
// Filename:        tbsstrc_pack.cpp
// Date:            2011-01-30 12:50:13
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#include "tbsstrc_pack.h"

CPackData& operator<< ( CPackData& cPackData, const SGroupInfo&  sGroupInfo )
{
    uint8_t nFieldNum = 3;
    cPackData << nFieldNum;
    cPackData << FT_INT64;
    cPackData << sGroupInfo.m_groupId;
    cPackData << FT_INT64;
    cPackData << sGroupInfo.m_parentId;
    cPackData << FT_STRING;
    cPackData << sGroupInfo.m_groupName;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SGroupInfo&  sGroupInfo )
{
    uint8_t num;
    cPackData >> num;
    if(num < 3) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_INT64) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sGroupInfo.m_groupId;
    cPackData >> field;
    if(field.m_baseType != FT_INT64) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sGroupInfo.m_parentId;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sGroupInfo.m_groupName;
    for(int i = 3; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const SMemberGroup&  sMemberGroup )
{
    uint8_t nFieldNum = 3;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sMemberGroup.m_tribeId;
    cPackData << FT_VECTOR;
    cPackData << FT_STRUCT;
    {
        uint32_t nLen = sMemberGroup.m_groupList.size();
        cPackData << nLen;
        VECTOR< SGroupInfo >::const_iterator itr;
        for(itr = sMemberGroup.m_groupList.begin(); itr != sMemberGroup.m_groupList.end(); ++itr)
        {
            cPackData << (*itr);
        }
    }
    cPackData << FT_UINT32;
    cPackData << sMemberGroup.m_groupStamp;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SMemberGroup&  sMemberGroup )
{
    uint8_t num;
    cPackData >> num;
    if(num < 3) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sMemberGroup.m_tribeId;
    cPackData >> field;
    if(field.m_baseType != FT_VECTOR) throw PACK_TYPEMATCH_ERROR;
    {
        uint32_t nSize;
        cPackData >> nSize;
        if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
        sMemberGroup.m_groupList.reserve(nSize);
        for(uint32_t i = 0; i < nSize; i++)
        {
            SGroupInfo tmpVal;
            cPackData >> tmpVal;
            sMemberGroup.m_groupList.push_back(tmpVal);
        }
    }
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sMemberGroup.m_groupStamp;
    for(int i = 3; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const STribeInfo&  sTribeInfo )
{
    uint8_t nFieldNum = 15;
    do {
        if(sTribeInfo.m_webTribeId == "")
            nFieldNum--;
        else
            break;
        if(sTribeInfo.m_maxMembers == 300)
            nFieldNum--;
        else
            break;
    } while(0);
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sTribeInfo.m_tribeId;
    cPackData << FT_STRING;
    cPackData << sTribeInfo.m_tribeName;
    cPackData << FT_STRING;
    cPackData << sTribeInfo.m_masterid;
    cPackData << FT_UINT8;
    cPackData << sTribeInfo.m_class;
    cPackData << FT_STRING;
    cPackData << sTribeInfo.m_describe;
    cPackData << FT_STRING;
    cPackData << sTribeInfo.m_bulletin;
    cPackData << FT_UINT8;
    cPackData << sTribeInfo.m_checkMode;
    cPackData << FT_STRING;
    cPackData << sTribeInfo.m_password;
    cPackData << FT_STRING;
    cPackData << sTribeInfo.m_keyword;
    cPackData << FT_UINT8;
    cPackData << sTribeInfo.m_allowVisitor;
    cPackData << FT_UINT8;
    cPackData << sTribeInfo.m_forbidSearch;
    cPackData << FT_STRING;
    cPackData << sTribeInfo.m_extSign;
    cPackData << FT_UINT8;
    cPackData << sTribeInfo.m_openTribe;
    if(nFieldNum == 13)
        return cPackData;
    cPackData << FT_UINT32;
    cPackData << sTribeInfo.m_maxMembers;
    if(nFieldNum == 14)
        return cPackData;
    cPackData << FT_STRING;
    cPackData << sTribeInfo.m_webTribeId;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, STribeInfo&  sTribeInfo )
{
    uint8_t num;
    cPackData >> num;
    if(num < 13) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeInfo.m_tribeId;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeInfo.m_tribeName;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeInfo.m_masterid;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeInfo.m_class;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeInfo.m_describe;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeInfo.m_bulletin;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeInfo.m_checkMode;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeInfo.m_password;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeInfo.m_keyword;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeInfo.m_allowVisitor;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeInfo.m_forbidSearch;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeInfo.m_extSign;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeInfo.m_openTribe;
    try
    {
        if(num < 14) return cPackData;
        cPackData >> field;
        if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
        cPackData >> sTribeInfo.m_maxMembers;
        if(num < 15) return cPackData;
        cPackData >> field;
        if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
        cPackData >> sTribeInfo.m_webTribeId;
    }
    catch(PACKRETCODE)
    {
        return cPackData;
    }
    for(int i = 15; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const STribeExtInfo&  sTribeExtInfo )
{
    uint8_t nFieldNum = 5;
    do {
        if(sTribeExtInfo.m_msgPopup == 0)
            nFieldNum--;
        else
            break;
        if(sTribeExtInfo.m_url == "")
            nFieldNum--;
        else
            break;
        if(sTribeExtInfo.m_title == "")
            nFieldNum--;
        else
            break;
        if(sTribeExtInfo.m_activeDegree == 0)
            nFieldNum--;
        else
            break;
        if(sTribeExtInfo.m_tribeLevel == 0)
            nFieldNum--;
        else
            break;
    } while(0);
    cPackData << nFieldNum;
    if(nFieldNum == 0)
        return cPackData;
    cPackData << FT_UINT8;
    cPackData << sTribeExtInfo.m_tribeLevel;
    if(nFieldNum == 1)
        return cPackData;
    cPackData << FT_UINT32;
    cPackData << sTribeExtInfo.m_activeDegree;
    if(nFieldNum == 2)
        return cPackData;
    cPackData << FT_STRING;
    cPackData << sTribeExtInfo.m_title;
    if(nFieldNum == 3)
        return cPackData;
    cPackData << FT_STRING;
    cPackData << sTribeExtInfo.m_url;
    if(nFieldNum == 4)
        return cPackData;
    cPackData << FT_UINT8;
    cPackData << sTribeExtInfo.m_msgPopup;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, STribeExtInfo&  sTribeExtInfo )
{
    uint8_t num;
    try
    {
        cPackData >> num;
        CFieldType field;
        if(num < 1) return cPackData;
        cPackData >> field;
        if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
        cPackData >> sTribeExtInfo.m_tribeLevel;
        if(num < 2) return cPackData;
        cPackData >> field;
        if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
        cPackData >> sTribeExtInfo.m_activeDegree;
        if(num < 3) return cPackData;
        cPackData >> field;
        if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
        cPackData >> sTribeExtInfo.m_title;
        if(num < 4) return cPackData;
        cPackData >> field;
        if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
        cPackData >> sTribeExtInfo.m_url;
        if(num < 5) return cPackData;
        cPackData >> field;
        if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
        cPackData >> sTribeExtInfo.m_msgPopup;
    }
    catch(PACKRETCODE)
    {
        return cPackData;
    }
    for(int i = 5; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const STmStatus&  sTmStatus )
{
    uint8_t nFieldNum = 5;
    do {
        if(sTmStatus.m_name == "")
            nFieldNum--;
        else
            break;
    } while(0);
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sTmStatus.m_memberId;
    cPackData << FT_UINT8;
    cPackData << sTmStatus.m_basicSts;
    cPackData << FT_UINT8;
    cPackData << sTmStatus.m_predefSts;
    cPackData << FT_UINT8;
    cPackData << sTmStatus.m_tribeLevel;
    if(nFieldNum == 4)
        return cPackData;
    cPackData << FT_STRING;
    cPackData << sTmStatus.m_name;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, STmStatus&  sTmStatus )
{
    uint8_t num;
    cPackData >> num;
    if(num < 4) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTmStatus.m_memberId;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTmStatus.m_basicSts;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTmStatus.m_predefSts;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTmStatus.m_tribeLevel;
    try
    {
        if(num < 5) return cPackData;
        cPackData >> field;
        if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
        cPackData >> sTmStatus.m_name;
    }
    catch(PACKRETCODE)
    {
        return cPackData;
    }
    for(int i = 5; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const STmMsgid&  sTmMsgid )
{
    uint8_t nFieldNum = 4;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sTmMsgid.m_memberId;
    cPackData << FT_UINT8;
    cPackData << sTmMsgid.m_basicSts;
    cPackData << FT_UINT8;
    cPackData << sTmMsgid.m_predefSts;
    cPackData << FT_UINT32;
    cPackData << sTmMsgid.m_lastMsgid;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, STmMsgid&  sTmMsgid )
{
    uint8_t num;
    cPackData >> num;
    if(num < 4) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTmMsgid.m_memberId;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTmMsgid.m_basicSts;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTmMsgid.m_predefSts;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTmMsgid.m_lastMsgid;
    for(int i = 4; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const STribeBlack&  sTribeBlack )
{
    uint8_t nFieldNum = 4;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sTribeBlack.m_userId;
    cPackData << FT_STRING;
    cPackData << sTribeBlack.m_managerId;
    cPackData << FT_STRING;
    cPackData << sTribeBlack.m_addDate;
    cPackData << FT_STRING;
    cPackData << sTribeBlack.m_remark;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, STribeBlack&  sTribeBlack )
{
    uint8_t num;
    cPackData >> num;
    if(num < 4) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeBlack.m_userId;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeBlack.m_managerId;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeBlack.m_addDate;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeBlack.m_remark;
    for(int i = 4; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const STmInfo&  sTmInfo )
{
    uint8_t nFieldNum = 10;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sTmInfo.m_memberId;
    cPackData << FT_STRING;
    cPackData << sTmInfo.m_name;
    cPackData << FT_UINT8;
    cPackData << sTmInfo.m_basicSts;
    cPackData << FT_UINT8;
    cPackData << sTmInfo.m_predefSts;
    cPackData << FT_UINT8;
    cPackData << sTmInfo.m_tribeLevel;
    cPackData << FT_UINT8;
    cPackData << sTmInfo.m_activeLevel;
    cPackData << FT_UINT32;
    cPackData << sTmInfo.m_lastmsgTime;
    cPackData << FT_INT64;
    cPackData << sTmInfo.m_groupId;
    cPackData << FT_UINT8;
    cPackData << sTmInfo.m_mobileBindflag;
    cPackData << FT_STRING;
    cPackData << sTmInfo.m_mobileNo;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, STmInfo&  sTmInfo )
{
    uint8_t num;
    cPackData >> num;
    if(num < 10) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTmInfo.m_memberId;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTmInfo.m_name;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTmInfo.m_basicSts;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTmInfo.m_predefSts;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTmInfo.m_tribeLevel;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTmInfo.m_activeLevel;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTmInfo.m_lastmsgTime;
    cPackData >> field;
    if(field.m_baseType != FT_INT64) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTmInfo.m_groupId;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTmInfo.m_mobileBindflag;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTmInfo.m_mobileNo;
    for(int i = 10; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const STribeMsg&  sTribeMsg )
{
    uint8_t nFieldNum = 4;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sTribeMsg.m_fromId;
    cPackData << FT_UINT8;
    cPackData << sTribeMsg.m_msgType;
    cPackData << FT_STRING;
    cPackData << sTribeMsg.m_message;
    cPackData << FT_UINT32;
    cPackData << sTribeMsg.m_sendTime;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, STribeMsg&  sTribeMsg )
{
    uint8_t num;
    cPackData >> num;
    if(num < 4) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeMsg.m_fromId;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeMsg.m_msgType;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeMsg.m_message;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeMsg.m_sendTime;
    for(int i = 4; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const STribeSysmsg&  sTribeSysmsg )
{
    uint8_t nFieldNum = 8;
    do {
        if(sTribeSysmsg.m_showBottom == 1)
            nFieldNum--;
        else
            break;
        if(sTribeSysmsg.m_stayTime == 10000)
            nFieldNum--;
        else
            break;
        if(sTribeSysmsg.m_title == "系统提示")
            nFieldNum--;
        else
            break;
    } while(0);
    cPackData << nFieldNum;
    cPackData << FT_UINT8;
    cPackData << sTribeSysmsg.m_msgType;
    cPackData << FT_STRING;
    cPackData << sTribeSysmsg.m_message;
    cPackData << FT_UINT32;
    cPackData << sTribeSysmsg.m_sendTime;
    cPackData << FT_UINT8;
    cPackData << sTribeSysmsg.m_format;
    cPackData << FT_STRING;
    cPackData << sTribeSysmsg.m_content;
    if(nFieldNum == 5)
        return cPackData;
    cPackData << FT_STRING;
    cPackData << sTribeSysmsg.m_title;
    if(nFieldNum == 6)
        return cPackData;
    cPackData << FT_UINT32;
    cPackData << sTribeSysmsg.m_stayTime;
    if(nFieldNum == 7)
        return cPackData;
    cPackData << FT_INT32;
    cPackData << sTribeSysmsg.m_showBottom;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, STribeSysmsg&  sTribeSysmsg )
{
    uint8_t num;
    cPackData >> num;
    if(num < 5) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeSysmsg.m_msgType;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeSysmsg.m_message;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeSysmsg.m_sendTime;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeSysmsg.m_format;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeSysmsg.m_content;
    try
    {
        if(num < 6) return cPackData;
        cPackData >> field;
        if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
        cPackData >> sTribeSysmsg.m_title;
        if(num < 7) return cPackData;
        cPackData >> field;
        if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
        cPackData >> sTribeSysmsg.m_stayTime;
        if(num < 8) return cPackData;
        cPackData >> field;
        if(field.m_baseType != FT_INT32) throw PACK_TYPEMATCH_ERROR;
        cPackData >> sTribeSysmsg.m_showBottom;
    }
    catch(PACKRETCODE)
    {
        return cPackData;
    }
    for(int i = 8; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const SWebGroup&  sWebGroup )
{
    uint8_t nFieldNum = 5;
    cPackData << nFieldNum;
    cPackData << FT_UINT32;
    cPackData << sWebGroup.m_groupId;
    cPackData << FT_STRING;
    cPackData << sWebGroup.m_groupName;
    cPackData << FT_STRING;
    cPackData << sWebGroup.m_serviceId;
    cPackData << FT_STRING;
    cPackData << sWebGroup.m_siteId;
    cPackData << FT_STRING;
    cPackData << sWebGroup.m_webId;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SWebGroup&  sWebGroup )
{
    uint8_t num;
    cPackData >> num;
    if(num < 5) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sWebGroup.m_groupId;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sWebGroup.m_groupName;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sWebGroup.m_serviceId;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sWebGroup.m_siteId;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sWebGroup.m_webId;
    for(int i = 5; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const STribeId&  sTribeId )
{
    uint8_t nFieldNum = 9;
    do {
        if(sTribeId.m_msgPopup == 0)
            nFieldNum--;
        else
            break;
        if(sTribeId.m_groupId == 0)
            nFieldNum--;
        else
            break;
    } while(0);
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sTribeId.m_tribeId;
    cPackData << FT_STRING;
    cPackData << sTribeId.m_tribeName;
    cPackData << FT_UINT8;
    cPackData << sTribeId.m_tribeLevel;
    cPackData << FT_UINT8;
    cPackData << sTribeId.m_tribeStatus;
    cPackData << FT_STRING;
    cPackData << sTribeId.m_extSign;
    cPackData << FT_UINT32;
    cPackData << sTribeId.m_groupStamp;
    cPackData << FT_UINT8;
    cPackData << sTribeId.m_openTribe;
    if(nFieldNum == 7)
        return cPackData;
    cPackData << FT_UINT32;
    cPackData << sTribeId.m_groupId;
    if(nFieldNum == 8)
        return cPackData;
    cPackData << FT_UINT8;
    cPackData << sTribeId.m_msgPopup;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, STribeId&  sTribeId )
{
    uint8_t num;
    cPackData >> num;
    if(num < 7) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeId.m_tribeId;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeId.m_tribeName;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeId.m_tribeLevel;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeId.m_tribeStatus;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeId.m_extSign;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeId.m_groupStamp;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTribeId.m_openTribe;
    try
    {
        if(num < 8) return cPackData;
        cPackData >> field;
        if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
        cPackData >> sTribeId.m_groupId;
        if(num < 9) return cPackData;
        cPackData >> field;
        if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
        cPackData >> sTribeId.m_msgPopup;
    }
    catch(PACKRETCODE)
    {
        return cPackData;
    }
    for(int i = 9; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

