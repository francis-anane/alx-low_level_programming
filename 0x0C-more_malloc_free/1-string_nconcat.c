/*
 * Author: Francis Ofori Anane
 * Date: 7/10/2022
 */

#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * string_nconcat - Concatenates two strings.
 *
 * @s1: The string to append to.
 * @s2: The string to append from.
 * @n: The bytes of @s2 to be concatinated.
 *
 * Return: A pointer to the newly allocated
 * space in memory, which contains @s1,
 * followed by the first @n bytes of @s2,
 * and null terminated.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *appended;
	unsigned int i, j, s1_len, s2_len;

	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	appended = malloc(s1_len + (n + 1));

	if (n < s2_len)
		s2_len = n;

	if (appended == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		appended[i] = s1[i];

	for (j = 0; j < s2_len; j++)
	{
		appended[i] = s2[j];
		i++;
	}

	appended[i] = '\0';

	return (appended);
}
