/*
 * Author: Francis Ofori Anane
 * Date: 27/09/2022
 */

#include "main.h"

/**
  * _strspn - Gets the length of a prefix substring.
  * @s: The string contain substring.
  * @accept: The substring
  * Return: The number of bytes in the initial segment
  * of @s which consist only of bytes from accept
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				bytes++;
				break;
			}
			else if (*accept + 1 == '\0')

				return (bytes);

			accept++;


		}

		s++;

	}

	return (bytes);
}
