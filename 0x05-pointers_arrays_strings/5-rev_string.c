/*
 * File: 5-rev_string.c
 * Author: Francis Ofori Anane
 * Date: 20/09/2022
 */

#include "main.h"

/**
 * rev_string - Reverse a string.
 * @s: The string.
 */
void rev_string(char *s)
{
	int i = 0, len = 0;
	char c;

	while (s[i++])
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = c;
	}
}
