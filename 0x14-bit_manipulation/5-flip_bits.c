#include "main.h"

/**
 * flip_bits - Computes the number of bits
 * flipped to get from one number to another.
 * @n: The number to flip
 * @m: The number to flip to.
 *
 * Return: The number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_count, xor_nm;

	bit_count = 0;
	xor_nm = n ^ m;

	while (xor_nm >= 1)
	{
		bit_count += (xor_nm & 1);
		xor_nm >>= 1;
	}

	return (bit_count);
}
