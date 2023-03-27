/*
 * Author: Francis Ofori Anane
 * Date: 26/09/2022
 */

#include "main.h"

/**
  * _memset - Fills  the  first  @n  bytes of the memory area
  * pointed to by @s with the constant byte @b.
  * @s: Pointer to the memory area to fill @n bytes
  * @b: The character to fill the memory area
  * @n: The number of bytes to fill memory area
  * Return: A pointer to the memory area s.
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
