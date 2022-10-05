/*
 * Author: Francis Ofori Anane
 * Date: 4/10/2022
 */

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _strdup - Returns a pointer to a newly allocated space in memory,
  * which contains a copy of the string given as a parameter.
  *
  * @str: The string to copy.
  *
  * Return: A pointer to the duplicate string. NULL, if str == NULL or
  * insuficient  memory was available.
  */

char *_strdup(char *str)
{
	unsigned int i = 0, length;
	char *copy;

	if (str == NULL)
		return (NULL);

	while (*str != '\0')
	{
		i++;
		str++;
	}

	length = i + 1;

	copy = malloc(sizeof(char) * length);

	for (i = 0; i < length; i++)
	{
		copy[i] = str[i];

	}

	if (sizeof(copy[0]) * length != sizeof(str[0]) * length)
		return (NULL);

	return (copy);
}
