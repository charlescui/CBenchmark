//#include "StdAfx.h"
#include "RSACipher.h"
#include <string.h>

using namespace std;

int pass_cb(char *buf, int size, int rwflag, void *u)
{
	int len;
	char *tmp;

	string* pstrpass = (string*)u;
	if(!pstrpass)
		return 0;

	len = (int)(pstrpass->size());

	if (len <= 0) return 0;

	/* if too long, truncate */
	if (len > size) 
		len = size;

	tmp = (char *)pstrpass->data();

	memcpy(buf, tmp, len);
	return len;
}

CRsaCipher::CRsaCipher(void)
: m_pRSA(NULL)
{
}

CRsaCipher::~CRsaCipher(void)
{
}

bool CRsaCipher::isKeyPresent(long type)
{
	if(!m_pRSA)
	{
		return false;
	}

	switch(type)
	{
	case KEY_PUB:
		return (m_pRSA->e && m_pRSA->n);
	case KEY_PRI:
		return !(!m_pRSA->d);
	default:
		return false;
	}
}

int CRsaCipher::GenKey(long bits, EALICIPHERALG alg)
{
	// 长度检测
	if(bits <512)
		bits = 1024;
	else if( (bits != 512) && (bits != 1024) && (bits != 2048) && (bits != 4096))
	{
		bits = 1024;
	}

	if(GetInternalCipher(alg ) == NULL)
	{
		return -1;
	}

	// 开始产生key
	if(m_pRSA)
	{
		RSA_free(m_pRSA);
		m_pRSA = NULL;
	}

	srand( (unsigned)time( NULL ) );
	// 
	m_pRSA = RSA_generate_key(bits , 17 , NULL , NULL);
	if(!m_pRSA)
	{
		return -1;
	}


	// 存储算法id
	m_alg = alg;

	return 0;
}

int CRsaCipher::GetKey(eKeyType type, std::string &retKey)
{
	if(type == 0)
	{
		type = KEY_PUB;
	}

	if(!isKeyPresent(type))
	{
		return -1;
	}

	switch(type)
	{
	case KEY_PUB:
		{
			// 读取公钥
			BIO *biopubkey = BIO_new(BIO_s_mem());
			if(1 != PEM_write_bio_RSAPublicKey(biopubkey , m_pRSA))
			{
				BIO_free(biopubkey);
				return -1;
			}
			char* buffer=new char[8092];
			int outlen=8092, retlen=0;
			retlen=BIO_read(biopubkey,buffer,outlen);
			BIO_free(biopubkey);
			retKey.assign(buffer, retlen);			
			delete []buffer;
		}
		break;
	case KEY_PRI:
		{

			BIO *bioprikey = BIO_new(BIO_s_mem());
			if(1 != PEM_write_bio_RSAPrivateKey(bioprikey ,m_pRSA ,GetInternalCipher(m_alg ),
				(unsigned char*)m_strPass.data() ,int(m_strPass.size()),NULL , NULL))
			{
				BIO_free(bioprikey);
				return -1;
			}
			char* buffer=new char[8092];
			int outlen=8092, retlen=0;
			retlen=BIO_read(bioprikey,buffer,outlen);
			BIO_free(bioprikey);
			retKey.assign(buffer, retlen);
			delete []buffer;
		}
		break;
	default:
		return -1;
	}

	return 0;
}

int CRsaCipher::RSAPublicEncrypt(std::string &source, std::string &to, int paddType)
{
	int blockSize=RSA_size(m_pRSA);

	unsigned char* tmpbuff = new unsigned char[blockSize+1];
	if(RSA_PKCS1_PADDING == paddType)
	{
		blockSize -=11;
	}
	else if(RSA_PKCS1_OAEP_PADDING == paddType)
	{
		blockSize -=41;
	}
	int leftlen=(int)source.size();
	if(leftlen %blockSize )
	{
		source.append(blockSize-leftlen%blockSize,0);
		leftlen=(int)source.size();
	}
	int index=0;
	while(leftlen >0)
	{
		int flen=blockSize;
		if(leftlen < blockSize)
			flen = leftlen;
		int num = RSA_public_encrypt(flen, (unsigned char*)source.data()+index, tmpbuff, m_pRSA, paddType);
		if(num == -1)
		{
			delete []tmpbuff;
			return -1;
		}
		index +=flen;
		leftlen -=flen;
		to.append((char*)tmpbuff,num);
	}
	delete []tmpbuff;
	return 0;
}

int CRsaCipher::RSAPrivDecrypt(const std::string &source, std::string &to, int paddType)
{
	int blockSize=RSA_size(m_pRSA);
	int leftlen=(int)source.size();
	if(leftlen %blockSize )
	{
		return -2;
		//source.append(blockSize-leftlen%blockSize,0);
		//leftlen=source.size();
	}
	unsigned char* tmpbuff = new unsigned char[blockSize+1];
	int decyptedLen=blockSize;
	if(RSA_PKCS1_PADDING == paddType)
	{
		decyptedLen -=11;
	}
	else if(RSA_PKCS1_OAEP_PADDING == paddType)
	{
		decyptedLen -=41;
	}
	int index=0;
	while(leftlen >0)
	{
		int flen=blockSize;
		//	if(leftlen < blockSize)
		//		flen = leftlen;
		int num = RSA_private_decrypt(flen, (unsigned char*)source.data()+index, tmpbuff, m_pRSA, paddType);
		if(num == -1)
		{
			delete []tmpbuff;
			return -1;
		}
		if(num !=decyptedLen )
			break;
		index +=flen;
		leftlen -=flen;
		to.append((char*)tmpbuff,num);
	}
	delete []tmpbuff;
	return 0;
}

int CRsaCipher::SetKey(eKeyType type, const void* pKey, int nKeyLen, const std::string privkeypass)
{
	m_strPass =privkeypass;
	//BSTR bstrpass, ULONGLONG pVoid
	if(type == 0)
	{
		type = KEY_PUB;
	}

	switch(type)
	{
	case KEY_PUB:
		{
			// 设置公钥
			BIO *pbiopubkey = BIO_new(BIO_s_mem());
			BIO_write(pbiopubkey , pKey, nKeyLen);
			RSA* pRet = NULL;
			if(!(pRet = PEM_read_bio_RSAPublicKey(pbiopubkey , NULL , NULL,NULL)))
			{
				BIO_free(pbiopubkey);
				return -1;
			}
			BIO_free(pbiopubkey);
			if(m_pRSA)
			{
				RSA_free(m_pRSA);
				m_pRSA = NULL;
			}

			m_pRSA = pRet;
		}
		break;
	case KEY_PRI:
		{
			BIO *pBio = BIO_new(BIO_s_mem());
			BIO_write(pBio , pKey, nKeyLen);
			RSA* pRet = NULL;
			OpenSSL_add_all_algorithms();
			if(!(pRet = PEM_read_bio_RSAPrivateKey(pBio,NULL,pass_cb,(void*)&m_strPass)))
			{
				BIO_free(pBio);
				return -1;
			}
			BIO_free(pBio);
			if(m_pRSA)
			{
				RSA_free(m_pRSA);
				m_pRSA = NULL;
			}

			m_alg = ALI_CIPHER_DES3_ECB_ALG;

			m_pRSA = pRet;
		}
		break;
	default:
		return -1;
	}

	return 0;
}

EVP_CIPHER* CRsaCipher::GetInternalCipher(EALICIPHERALG  alg )
{
	// 判断算法有效性
	EVP_CIPHER *cipher = NULL;

	switch(alg)
	{
	case ALI_CIPHER_DES_ECB_ALG:
		cipher = const_cast<EVP_CIPHER *>(EVP_des_ecb());
		break;					
	case ALI_CIPHER_DES_CFB_ALG:
		cipher = const_cast<EVP_CIPHER *>(EVP_des_cfb());
		break;						
	case ALI_CIPHER_DES_OFB_ALG:
		cipher = const_cast<EVP_CIPHER *>(EVP_des_ofb());
		break;	

	case ALI_CIPHER_DES3_ECB_ALG:
		cipher = const_cast<EVP_CIPHER *>(EVP_des_ede3_ecb());
		break;					
	case ALI_CIPHER_DES3_CFB_ALG:
		cipher = const_cast<EVP_CIPHER *>(EVP_des_ede3_cfb());
		break;						
	case ALI_CIPHER_DES3_OFB_ALG:
		cipher = const_cast<EVP_CIPHER *>(EVP_des_ede3_ofb());
		break;	
	case ALI_CIPHER_DES3_CBC_ALG:
		cipher = const_cast<EVP_CIPHER *>(EVP_des_ede3_cbc());						
		break;
	case ALI_CIPHER_RC4_ALG:
		cipher = const_cast<EVP_CIPHER *>(EVP_rc4());						
		break;

	default:
		cipher = const_cast<EVP_CIPHER *>(EVP_des_cbc());						
		break;
	}

	return cipher;

}