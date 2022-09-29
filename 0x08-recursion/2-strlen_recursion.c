/*
 * Author: Francis Ofori Anane
 * Date: 28/09/2022
 */

#include "main.h"

/**
  * _strlen_recursion -  returns the length of a string.
  * @s: The string
  * Return: Length of string @s.
  */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		i += _strlen_recursion(s + 1);
	}

	return (i);
}
