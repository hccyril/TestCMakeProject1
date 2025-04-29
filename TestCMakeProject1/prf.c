#include <stdio.h>
//#include "aes256ctr.h"

/*************************************************
* Name:        prf_aes256ctr
*
* Description: Pseudorandom function based on AES256-CTR mode.
*              Expands a single byte nonce to full 12-byte nonce
*              with remaining bytes set to zero.
*
* NOTE:        The key should be produced by XORing two independent
*              random 32-byte prekeys for strong security guarantees.
*
* Arguments:   - uint8_t *out: output buffer
*              - size_t outlen: requested output length in bytes
*              - const uint8_t key[32]: 256-bit key (should be XOR of two random prekeys)
*              - uint8_t nonce: 8-bit nonce value
**************************************************/
//void prf_aes256ctr(uint8_t* out, size_t outlen, const uint8_t key[32], uint8_t nonce)
//{
//	uint8_t expnonce[12] = { 0 };
//	expnonce[0] = nonce;
//	aes256ctr_prf(out, outlen, key, expnonce);
//}

int mytest2(int x) {
	return x << 2;
}
