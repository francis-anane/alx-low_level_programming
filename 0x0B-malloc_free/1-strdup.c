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
	int i, length = 0;
	char *copy;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		length++;
	}
	copy = malloc(sizeof(str[0]) * (length + 1));

	for (i = 0; i < length; i++)
		copy[i] = str[i];

	if (copy == NULL)
		return (NULL);

	return (copy);
}
