/*---------------------------------------------------------------------------
// Filename:        cachss_pack.h
// Date:            2011-01-30 12:50:08
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by root
//---------------------------------------------------------------------------*/
#ifndef __CACHSS_PACK_H__
#define __CACHSS_PACK_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"
#include "ss_head.h"
#include "const_macro.h"

using namespace std;

enum CACHSS_NOTIFY
{
    SS_CA_NOTIFY                = 0x7f020001,

};

class CSsCaNotify : public CPackData
{
public:
    enum
    {
        CMD_ID = SS_CA_NOTIFY
    };
    CSsCaNotify()
    {
    }

    ~CSsCaNotify() { }
    CSsCaNotify(const string&  strOpname, const map< string,string >&  mapAttrs)
    {
        m_opname = strOpname;
        m_attrs = mapAttrs;
    }
    CSsCaNotify&  operator=( const CSsCaNotify&  cSsCaNotify )
    {
        m_opname = cSsCaNotify.m_opname;
        m_attrs = cSsCaNotify.m_attrs;
        return *this;
    }

    const string&  GetOpname () const { return m_opname; }
    bool SetOpname ( const string&  strOpname )
    {
        m_opname = strOpname;
        return true;
    }
    const map< string,string >&  GetAttrs () const { return m_attrs; }
    bool SetAttrs ( const map< string,string >&  mapAttrs )
    {
        m_attrs = mapAttrs;
        return true;
    }
private:
    string m_opname;
    map< string,string > m_attrs;

public:
    CSsHead m_ssHead;
    void PackHead(string& strData);
    void PackBody(string& strData);
    void PackData(string& strData);
    PACKRETCODE UnpackBody(string& strData);
    PACKRETCODE UnpackData(string& strData);
    uint32_t Size() const;
};

inline uint32_t CSsCaNotify::Size() const
{
    uint32_t nSize = 10;
    nSize += m_opname.length();
    nSize += m_attrs.size() * 8;
    {
        map< string,string >::const_iterator itr;
        for(itr = m_attrs.begin(); itr != m_attrs.end(); ++itr)
        {
            nSize += itr->first.length();
            nSize += itr->second.length();
        }
    }
    return nSize;
}

#endif
