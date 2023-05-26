/*
 * Author: Francis Ofori Anane
 * Date: 29/10/2022
 */

#include <string.h>

/**
 * _pow - calculate num raised to the power of p.
 *
 * @base: The base number.
 * @e: The exponent.
 *
 * Return: num raised to the power of p.
 */

int _pow(int base, int e)
{
	int p;

	for (p = 1; e > 0; e--)
	{
		p = base * p;
	}

	return (p);
}

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 *
 * @b: A pointer to the string of bits.
 *
 * Return: The converted number,
 *  or 0 if there is one or more chars
 * in the string b that is not 0 or 1
 * b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, bit;
	int i, len, exp;

	if (b == NULL)
		return (0);

	len = strlen(b);
	exp = len;

	for (i = 0; i < len; i++)
	{
		if (b[i] == '1')
			bit = 1;
		if (b[i] == '0')
			bit = 0;
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num += bit *  _pow(2, exp - 1);
		exp--;
	}
	return (num);
}
