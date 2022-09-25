/*
 * File: 4-print_rev.c
 * Author: Francis Ofori Anane
 * Date: 20/09/2022
 */

#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int i;
	int len;
	i = len = 0;

	while (s[i] != '\0')
	{
		i++;
		len++;
	}

	while(len >= 0)
	{
		_putchar(s[len]);
		len--;
	}

	_putchar('\n');
}

