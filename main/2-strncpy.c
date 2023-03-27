/*
 * Author: Francis Ofori Anane
 * Date: 21/09/2022
 */

#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int s_len = 0;

	while (src[i++])
		s_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = s_len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
