#ifndef      _RSA_WRAPPER_H_
#define      _RSA_WRAPPER_H_

#include <string>

int  RSA_PublicEncrypt(const char* szPubKey, 
							   const int nPubKey, 
							   const char* szOri,
							   const int nOriLen,
							   std::string& strResult);
#endif
