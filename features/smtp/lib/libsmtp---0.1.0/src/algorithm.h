/***********************************************************************
 *                                                                     *
 * Copyright (C) 2003 Timo Benk t_benk@web.de                          *
 *                                                                     *
 * This library is free software; you can redistribute it and/or       *
 * modify it under the terms of the GNU Lesser General Public          *
 * License as published by the Free Software Foundation; either        *
 * version 2.1 of the License, or (at your option) any later version.  *
 *                                                                     *
 * This library is distributed in the hope that it will be useful,     *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of      *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU   *
 * Lesser General Public License for more details.                     *
 *                                                                     *
 * You should have received a copy of the GNU Lesser General Public    *
 * License along with this library; if not, write to the               *
 * Free Software Foundation, Inc., 59 Temple Place, Suite 330,         *
 * Boston, MA  02111-1307 USA                                          *
 *                                                                     *
 * algorithm.c provides some useful codec and cipher functions.        *
 *                                                                     *
 ***********************************************************************/

#ifndef __ALGORITHM_H__
#define __ALGORITHM_H__

#include <strings.h>
#include <unistd.h>
#include <errno.h>
#include <openssl/md5.h>
#include <openssl/sha.h>
#include <openssl/hmac.h>
#include "error.h"
#include "alloc.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * The available hash algorithms.
 */
enum HASH { H_MD2 = 1, H_MD4 = 2, H_MD5 = 3, H_SHA1 = 4 };

/**
 * The available cipher algorithms.
 */
enum CIPHER { C_RC4 = 1, C_RC4_40 = 2, C_RC4_56 = 3, C_DES = 4, C_THREE_DES = 5 };

/**
 * alg_hmac() calculates the keyed checksum. (rfc2104)
 * digest must be big enough to hold the complete hash 
 * value (H_SHA1 == 20 bytes, all others 16 bytes).
 *
 * @param str     The text that should be checksummed.
 * @param str_len The length of str.
 * @param key     The key that should be used.
 * @param key_len The length of key.
 * @param digest  The checksum that is calculated out of key 
 *                and text will be stored at digest. digest
 *                needs to be at least 16/20 Bytes big.
 * @param hash    The algorithm that should be used. One of
 *                H_MD2, H_MD4, H_MD5 or H_SHA1.
 */
void alg_hmac (unsigned char * str,
               unsigned int    str_len,
               unsigned char * key,
               unsigned int    key_len,
               unsigned char * digest,
               enum HASH hash);

/**
 * alg_chksum() calculates the md5 checksum of data, which is 
 * len bytes long and stores the resulting bytes in digest, 
 * which must be big enough to hold the resulting hash 
 * value (H_SHA1 == 20 bytes, all others 16 bytes).
 *
 * @param data   The data that should be checksummed.
 * @param len    The length of data.
 * @param digest The buffer the calculated checksum will be stored at.
 * @param hash   The algorithm that should be used. One of
 *               H_MD2, H_MD4, H_MD5 or H_SHA1.
 */
void alg_chksum (unsigned char * data, 
                 unsigned int    len, 
                 unsigned char * digest,
                 enum HASH hash);

/**
 * alg_b64_encode() encodes orig_str with the base64 
 * codec and stores the result at the address pointed 
 * to by enc_str. enc_str needs to be at least 
 * (strlen(orig_str)+(strlen(orig_str)/4)+4) bytes big.
 * The number of bytes written to enc_str will be
 * returned.
 *
 * @param orig_str The string that should be encoded.
 * @param orig_len The size of orig_str in bytes.
 * @param enc_str  The resulting encoded string will be stored
 *                 at the address pointed to by enc_str.
 *
 * @returns The number of bytes written to enc_str.
 */
int alg_b64_encode (char *orig_str, 
                    unsigned int orig_len, 
                    char *enc_str);

/**
 * alg_b64_decode() decodes enc_str with the base64 
 * codec and stores the result at the address pointed 
 * to by orig_str. orig_str needs to be at least 
 * (strlen(enc_str)+(strlen(enc_str)/4)+4) bytes big.
 * The number of bytes written to orig_str will be
 * returned.
 *
 * @param enc_str  The string that should be decoded.
 * @param enc_len  The size of enc_str in bytes.
 * @param orig_str The resulting decoded string will be stored
 *                 at the address pointed to by orig_str.
 *
 * @returns The number of bytes written to orig_str.
 */
int alg_b64_decode (char *enc_str, 
                    unsigned int enc_len,
                    char *orig_str);

/**
 * alg_encrypt() encrypts data, which is data_len bytes big, 
 * using key as the key and iv as the iv and writes the 
 * resulting encrypted data block into buf, which is bufsiz big. 
 * buf needs to be at least (data_len+(2*EVP_MAX_IV_LENGTH)-1) 
 * bytes big.
 *
 * @param data     The data that should be encrypted.
 * @param data_len The size of data.
 * @param key      The key that should be used.
 * @param iv       The iv that should be used (if any).
 * @param buf      The buffer where the encrypted data should be
 *                 written.
 * @param bufsiz   The size of buf, which needs to be at least
 *                 (data_len+(2*EVP_MAX_IV_LENGTH)-1) bytes big.
 * @param cipher   The cipher that should be used. One of
 *                 C_RC4, C_RC4_40, C_RC4_56, C_DES, C_THREE_DES.
 *
 * @returns The number of bytes that were written to buf.
 */
int alg_encrypt (unsigned char * data,
                 unsigned int    data_len,
                 unsigned char * key,
                 unsigned char * iv,
                 unsigned char * buf,
                 unsigned int    bufsiz,
                 enum CIPHER cipher);

/**
 * alg_decrypt() decrypts data, which is data_len bytes big, 
 * using key as the key and iv as the iv and writes the resulting 
 * decrypted data block into buf, which is bufsiz big. buf 
 * needs to be at least (2*(data_len+EVP_MAX_IV_LENGTH)-1) 
 * bytes big.
 *
 * @param data     The data that should be decrypted.
 * @param data_len The size of data.
 * @param key      The key that should be used.
 * @param iv       The iv that should be used (if any).
 * @param buf      The buffer where the decrypted data should be
 *                 written.
 * @param bufsiz   The size of buf, which needs to be at least
 *                 (2*(data_len+EVP_MAX_IV_LENGTH)-1) bytes big.
 * @param cipher   The cipher that should be used. One of
 *                 C_RC4, C_RC4_40, C_RC4_56, C_DES, C_THREE_DES.
 * 
 * @returns The number of bytes that were written to buf or -1 if
 * some error occured.
 */
int alg_decrypt (unsigned char * data,
                 unsigned int    data_len,
                 unsigned char * key,
                 unsigned char * iv,
                 unsigned char * buf,
                 unsigned int    bufsiz,
                 enum CIPHER cipher);

#ifdef __cplusplus
}
#endif

#endif
