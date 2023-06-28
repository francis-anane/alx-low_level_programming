/*
 * Author: Francis Ofori Anane
 * Date: 4/10/2022
 */

#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Returns the length of a string
 * @s: The string
 *
 * Return: int (length of s)
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
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
	int i, len;
	char *copy;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);

	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[len] = '\0';

	return (copy);
}
