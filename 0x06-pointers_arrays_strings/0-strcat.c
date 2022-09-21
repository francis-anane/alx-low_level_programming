/*
 * Author: Francis Ofori Anane
 * Date: 21/09/2022
 */

#include "main.h"

/**
 * strcat - concatenates two strings
 * @dest: A pointer to the string to be concatenated.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int i = 0, 
	int d_len = 0;

	while (dest[i++])
		d_len++;

	for (i = 0; src[i]; i++)
		dest[d_len++] = src[i];

	return (dest);
}
