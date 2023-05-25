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
 * Return: bit value at index or -1 on fail
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	n >>= index;

	return (n & 1);
}
