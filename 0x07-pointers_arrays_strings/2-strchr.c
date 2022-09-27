/*
 * Author: Francis Ofori Anane
 * Date: 27/09/2022
 */

#include "main.h"

/**
  * _strchr - returns a pointer to the first occurrence of the
  * character c in the string s.
  * @s: The string to search character from.
  * @c: The character to search.
  * Return: A pointer to the character to search. Or NULL if character
  * is not found.
  */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	return ('\0');
}
