/*
 * Author: Francis Ofori Anane
 * Date: 21/09/2022
 */

#include "main.h"

/**
 * add_strings - Adds the numbers stored in two strings.
 * @n1: The string containing the first number to be added.
 * @n2: The string containing the second number to be added.
 * @r: The buffer to store the result.
 * @i: The current index of the buffer.
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */
char *add_strings(char *n1, char *n2, char *r, int i)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, i--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + i) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n1; n1--, r_index--)
	{
		num = (*n1 - '0') + tens;
		*(r + i) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n2; n2--, i--)
	{
		num = (*n2 - '0') + tens;
		*(r + i) = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens && i >= 0)
	{
		*(r + i) = (tens % 10) + '0';
		return (r + i);
	}

	else if (tens && i < 0)
		return (0);

	return (r + i + 1);
}
/**
 * infinite_add - Adds two numbers.
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: The buffer to store the result.
 * @size: The buffer size.
 *
 * Return: If r can store the sum - a pointer to the result.
 * If r cannot store the sum - 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size)
{
	int i, len1 = 0, len2 = 0;

	for (i = 0; *(n1 + i); i++)
		len1++;

	for (i = 0; *(n2 + i); i++)
		len2++;

	if (size <= len1 + 1 || size <= len2 + 1)
		return (0);

	n1 += len1 - 1;
	n2 += len2 - 1;
	*(r + size) = '\0';

	return (add_strings(n1, n2, r, --size));
}
