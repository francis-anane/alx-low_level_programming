/*
 * Author: Francis Ofori Anane
 * Date: 21/09/2022
 */

#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: If r can store the sum - a pointer to the result.
 * If r cannot store the sum - 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, len1 = 0, len2 = 0;

	for (i = 0; *(n1 + i); i++)
		len1++;

	for (i = 0; *(n2 + i); i++)
		len2++;

	if (size_r <= len1 + 1 || size_r <= len2 + 1)
		return (0);

	n1 += len1 - 1;
	n2 += len2 - 1;
	*(r + size_r) = '\0';

	return 
}
