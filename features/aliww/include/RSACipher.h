#ifndef __H_ALIRSA_H__
#define __H_ALIRSA_H__

#include <openssl/rsa.h>
#include <openssl/evp.h>
#include <openssl/pem.h>

#include <string>
//#pragma comment(lib, "libeay32.lib")

enum eKeyType
{
	KEY_PUB = 0,
	KEY_PRI = 1,
};

enum EALIHASHALG
{
	ALI_NULL_ALG = 0, // �㷨��ʼ��ʶ
	ALI_HASH_ALG	= ALI_NULL_ALG  + 1 , // HASH���㷨��ʼ
	ALI_HASH_CRC_ALG	= ALI_HASH_ALG  + 2 ,  // CRC
	ALI_HASH_MD5_ALG	= ALI_HASH_ALG  + 3 , // MD5
	ALI_HASH_SHA_ALG	= ALI_HASH_ALG  + 4 , // SHA
	ALI_HASH_SHA1_ALG	= ALI_HASH_ALG  + 5 , // SHA1
	ALI_HASH_USER_ALG	= ALI_HASH_ALG  + 0x100 ,  // �Զ���hash�㷨��ʼֵ
	
	
};

enum EALICIPHERALG
{
	ALI_CIPHER_ALG	= 0x1000 ,// cipher���㷨��ʼ
	ALI_CIPHER_DES3_ALG	= ALI_CIPHER_ALG  + 1 , // DES3
	ALI_CIPHER_DES3_CBC_ALG = ALI_CIPHER_DES3_ALG + 1,
	ALI_CIPHER_DES3_ECB_ALG = ALI_CIPHER_DES3_ALG + 2,
	ALI_CIPHER_DES3_CFB_ALG = ALI_CIPHER_DES3_ALG + 3,
	ALI_CIPHER_DES3_OFB_ALG = ALI_CIPHER_DES3_ALG + 4,
	ALI_CIPHER_RC4_ALG	= ALI_CIPHER_ALG  + 6 , // RC4
	ALI_CIPHER_DES_ALG	= ALI_CIPHER_ALG  + 7 , // DES
	ALI_CIPHER_DES_CBC_ALG = ALI_CIPHER_DES_ALG + 1,
	ALI_CIPHER_DES_ECB_ALG = ALI_CIPHER_DES_ALG + 2,
	ALI_CIPHER_DES_CFB_ALG = ALI_CIPHER_DES_ALG + 3,
	ALI_CIPHER_DES_OFB_ALG = ALI_CIPHER_DES_ALG + 4,
	ALI_CIPHER_USER_ALG	= ALI_CIPHER_ALG  + 0x100 ,  // �Զ���cipher�㷨��ʼֵ
};


class CRsaCipher
{
public:
	CRsaCipher(void);
	~CRsaCipher(void);
	bool isKeyPresent(long type);

	int Initialize(long bits, EALICIPHERALG alg, const std::string privkeypass="testprivkeypass" )
	{
		m_strPass =privkeypass;
		return GenKey(bits,alg);
	}
	int GenKey(long bits , EALICIPHERALG alg );

	int GetKey(enum eKeyType type , std::string& retKey);
	//if source length ���ǿ�����������ᱻ��0
	int RSAPublicEncrypt(std::string& source, std::string& to,int paddType);

	int RSAPrivDecrypt(const std::string& source, std::string& to,int paddType);

	int SetKey(enum eKeyType type ,const void* pKey, int nKeyLen, const std::string privkeypass="testprivkeypass" );

private:
	EVP_CIPHER* GetInternalCipher(EALICIPHERALG  alg );

private:	
	RSA*	m_pRSA;
	std::string	m_strPass;
	EALICIPHERALG	m_alg;
};

#endif