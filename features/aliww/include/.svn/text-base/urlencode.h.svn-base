#ifndef __H_CURL_ENCODE_H__
#define __H_CURL_ENCODE_H__
/*
   URLEncode是这样编码的
   1。数字和字母不变。
   2。空格变为"+"号。
   3。其他被编码成"%"加上他们的ascii的十六进制，规律是这样的
   比如“啊”字 Ascii的十六进制是B0A1——>%B0%A1(Note:它是每个字节前加个%)。
 */
 
#include <iostream>
#include <string>
#include <fstream>
#include <ctype.h>
#include <stdlib.h>
 
using namespace std;
 
namespace ctool
{
   
    typedef unsigned char BYTE;
 
    inline BYTE toHex(const BYTE &x)
    {
        return x > 9 ? x + 55: x + 48;
    }
 
    inline string URLEncode(const string &sIn)
    {
    // cout << "size: " << sIn.size() << endl;
        string sOut;
        for( size_t ix = 0; ix < sIn.size(); ix++ )
        {      
            BYTE buf[4];
            memset( buf, 0, 4 );
            if( isalnum( (BYTE)sIn[ix] ) )
            {      
                buf[0] = sIn[ix];
            }
            else if ( isspace( (BYTE)sIn[ix] ) )
            {
                buf[0] = '+';
            }
            else
            {
                buf[0] = '%';
                buf[1] = toHex( (BYTE)sIn[ix] >> 4 );
                buf[2] = toHex( (BYTE)sIn[ix] % 16);
            }
            sOut += (char *)buf;
        }
        return sOut;
    };
}
#endif
