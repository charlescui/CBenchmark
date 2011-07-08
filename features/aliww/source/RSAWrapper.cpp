// RSAWrapper.cpp : 定义 DLL 应用程序的入口点。
//
#include "RSACipher.h"
#include "RSAWrapper.h"

//
//#ifdef _MANAGED
//#pragma managed(push, off)
//#endif

int  RSA_PublicEncrypt(const char* szPubKey, 
							   const int nPubKey, 
							   const char* szOri,
							   const int nOriLen,
							   std::string& strResult)
{
	CRsaCipher rsa;
	std::string strOri;
	strOri.append(szOri, nOriLen);

	if(rsa.SetKey(KEY_PUB, szPubKey, nPubKey) == -1) //出问题了
		return -1;

	int nRet  = rsa.RSAPublicEncrypt(strOri, strResult, RSA_PKCS1_PADDING);

	return nRet;
}
