/*
 * Author: Francis Ofori Anane
 * Date: 29/10/2022
 */

#include "main.h"
/**
 * print_binary - Prints the binary representation of a number.
 *
 * @n: The number to print binary of.
 */

void print_binary(unsigned long int n)
{
	unsigned long int tmp = n, msk_val = 8192, len = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}

	while(tmp)
	{
		tmp >>= 1;
		len++;
	}

	while (len > 0)
	{
		if ((n & msk_val) == 0)
			_putchar('0');

		else
			_putchar('1');

		msk_val = msk_val >> 1;
		len--;
	}
}
