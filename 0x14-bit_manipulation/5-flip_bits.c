#include "main.h"

/**
 * flip_bits - indicates the number of bits you would need to flip
 * inorder to get from one number to another
 * @n: parameter
 * @m: destiny
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, bits = 0;

	for (xor = n ^ m; xor > 0; xor >>= 1)
	{
		bits += (xor & 1);
	}

	return (bits);
}
