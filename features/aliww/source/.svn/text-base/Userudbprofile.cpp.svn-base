class CImReqUserudbprofile : public CPackData
 {
public:
       enum
       {
           CMD_ID = IM_REQ_USERUDBPROFILE
       };
       CImReqUserudbprofile() : m_uid("magic")
    {
     }
 
        ~CImReqUserudbprofile() { }
        CImReqUserudbprofile(const string&  strUid)
      {
         m_uid = strUid;
        }
         CImReqUserudbprofile&  operator=( const CImReqUserudbprofile&  cImReqUserudbprofile )
         {
             m_uid = cImReqUserudbprofile.m_uid;
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
 
 inline uint32_t CImReqUserudbprofile::Size() const
 {
     uint32_t nSize = 6;
     nSize += m_uid.length();
     return nSize;
 }
 
class CImRspUserudbprofile : public CPackData
{
    public:
      enum
   
           CMD_ID = IM_RSP_USERUDBPROFILE
         };
         CImRspUserudbprofile()
       {
         }
 
         ~CImRspUserudbprofile() { }
         CImRspUserudbprofile(const uint32_t&  dwRetcode, const map< string,string >&  mapProfilelist, const string&  strUid)
     {
            m_retcode = dwRetcode;
             m_profilelist = mapProfilelist;
             m_uid = strUid;
         }
    CImRspUserudbprofile&  operator=( const CImRspUserudbprofile&  cImRspUserudbprofile )
        {
          m_retcode = cImRspUserudbprofile.m_retcode;
          m_profilelist = cImRspUserudbprofile.m_profilelist;
           m_uid = cImRspUserudbprofile.m_uid;
            return *this;
      }

      const uint32_t&  GetRetcode () const { return m_retcode; }
      bool SetRetcode ( const uint32_t&  dwRetcode )
       {
         m_retcode = dwRetcode;
         return true;
     }
    const map< string,string >&  GetProfilelist () const { return m_profilelist; }
      bool SetProfilelist ( const map< string,string >&  mapProfilelist )
     {
        m_profilelist = mapProfilelist;
         return true;
         }
        const string&  GetUid () const { return m_uid; }
     bool SetUid ( const string&  strUid )
      {
          m_uid = strUid;
             return true;
         }
    private:
     uint32_t m_retcode;
     map< string,string > m_profilelist;
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

