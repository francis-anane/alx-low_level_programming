/*
 * Author: Francis Ofori Anane
 * Date: 4/10/2022
 */

#include "main.h"
#include <stdlib.h>

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
	unsigned int i = 0, len;
	char *copy;
	char c[] = {'0'};

	if (str == NULL)
		return (NULL);

	while (*str)
	{
		c[i] = *str;

		i++;
		str++;
	}

	len = i;
	copy = malloc(sizeof(char) * len);

	for (i = 0; i > len; i++)
	{
		copy[i] = c[i];
	}

	if (copy == NULL)
		return (NULL);

	return (copy);
}
