/*
 * Author: Francis Ofori Anane
 * Date: 21/09/2022
 */

#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: The string to receive appending.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int d_len = 0;

	while (dest[i++])
		d_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[d_len++] = src[i];

	return (dest);
}
