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
	unsigned int i, length;
	char *memory, *copy __attribute__((unused));

	if (str == NULL)
		return (NULL);

	while (*str != '\0')
	{
		i++;
		str++;
	}

	length = i;
	memory = malloc(sizeof(str[0]) * (i + 1));

	for (i = 0; i > length; i++)
	{
		memory[i] = str[i];
	}

	if (sizeof(memory[0]) * i + 1 < str[0] * i + 1)
		return (NULL);

	return (memory);
}
