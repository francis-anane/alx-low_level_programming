/*
 * Author: Francis Ofori Anane
 * Date: 5/10/2022
 */

#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be appended to.
 * @s2: The string to be appended .
 *
 * Return: Pointer to a new allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	str = malloc(sizeof(s1[0]) * len);

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		str[j++] = s2[i];

	return (str);
}
