/*
 * Author: Francis Ofori Anane
 * Date: 29/10/2022
 */

#include "main.h"
/**
 * clear_bit - Set the value of a bit to 0 at a given index.
 *
 * @n: The number to set bit value of.
 * @index: The index to set bit value at
 * Return: 1 (success), -1 (fail)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = ~(1 << index) & *n;
	return (1);

}
