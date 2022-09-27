/*
 * Author: Francis Ofori Anane
 * Date: 26/09/2022
 */

#include "main.h"

/**
  * _memset - Fills  the  first  n  bytes of the memory area
  * pointed to by s with the constant byte c.
  * @s: Pointer to the bytes of  memory area n
  * @b: The bytes to fill the memory area n
  * @n: The byte of memory area pointed to by s
  * Return: returns a pointer to the memory area s.
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
