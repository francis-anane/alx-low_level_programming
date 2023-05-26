/*
 * Author: Francis Ofori Anane
 * Date: 29/10/2022
 */

#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_binary - Prints the binary representation of a number.
 *
 * @n: The number to print binary of.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	if (n & 1)
	{
		_putchar('1');
	}
	else
		_putchar('0');

}
