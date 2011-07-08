//	DES function prototypes

#ifndef	__DES_H_
#define __DES_H_

#include <string>

class CDesEncrypt
{
public:
//mode == 0: standard Data Encryption Algorithm
//mode == 1: DEA without initial and final permutations for speed
//mode == 2: DEA without permutations and with 128-byte key (completely
//          independent subkeys for each round)
    CDesEncrypt(int mode = 0) : m_mode(mode) { };
    ~CDesEncrypt() { }

    void SetMode(int mode)
    {
        m_mode = mode;
    }

    std::string SetKey(const std::string& key);

    std::string Encrypt(const std::string& data, const std::string& desKey);

    std::string Decrypt(const std::string& data, const std::string& desKey);

    void Encrypt(std::string& data, const std::string& desKey, std::string::size_type offset);

    void Decrypt(std::string& data, const std::string& desKey, std::string::size_type offset);
private:
    int  m_mode;
};

#endif	//__DES_H
