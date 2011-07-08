#pragma once
#include <string>
#include <cstring>

class Md5Hash
{
public:
	Md5Hash(void);
	~Md5Hash(void);
	static std::string GetMD5(const std::string& buf,bool bHex = false);


	//RSA MD5 implementation
	void Transform(const unsigned char Block[64]);
	void Update( const unsigned char* Input, unsigned nInputLen);
	std::string Final(bool bHex = false);

	inline unsigned RotateLeft(unsigned x, int n);
	inline void FF( unsigned& A, unsigned B, unsigned C, unsigned D, unsigned X, unsigned S, unsigned T);
	inline void GG( unsigned& A, unsigned B, unsigned C, unsigned D, unsigned X, unsigned S, unsigned T);
	inline void HH( unsigned& A, unsigned B, unsigned C, unsigned D, unsigned X, unsigned S, unsigned T);
	inline void II( unsigned& A, unsigned B, unsigned C, unsigned D, unsigned X, unsigned S, unsigned T);
	//utility functions
	void DWordToByte(unsigned char* Output,  const unsigned* Input, unsigned nLength);
	void ByteToDWord(unsigned* Output,  const unsigned char* Input, unsigned nLength);

private:
private:
	unsigned char  m_lpszBuffer[64];		//input buffer
	unsigned m_nCount[2];			//number of bits, modulo 2^64 (lsb first)
	unsigned m_lMD5[4];			//MD5 checksum

};

