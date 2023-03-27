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
	unsigned int bytes = 0;
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (bytes);
		}

		s++;

	}

	return (bytes);
}
