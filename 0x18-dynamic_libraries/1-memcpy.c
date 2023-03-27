/*
 * Author: Francis Ofori Anane
 * Date: 27/09/2022
 */

#include "main.h"

/**
  * _memcpy - Copies  @n bytes from memory area @src to memory area @dest.
  * @dest: The memory area to be copied to.
  * @src: The memory area to be copied from.
  * @n: The number of bytes to be copied.
  * Return: A poiter to @dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
