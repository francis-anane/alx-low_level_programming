/*
 * Author: Francis Ofori Anane
 * Date: 29/10/2022
 */

#include "main.h"

/**
 * get_bit - return the value of a bit at a given index.
 *
 * @n: The number to return bit index of.
 * @index: The index to get value at
 * Return: bit value at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int index_range = 0, val = n;
	if (n == 0 || n == 1)
		index_range = 0;
	else
		while (val >= 1)
		{
			val >>= 1;
			index_range++;
		}

	if (index > index_range)
		return (-1);
	n >>= index;

	return (n & 1);
}
