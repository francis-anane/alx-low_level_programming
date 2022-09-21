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
	int len = 0;
	int i;

	while (s[i++])
		len++;

	for (i = len - 1; i >= 0; index--)
		_putchar(s[i]);

	_putchar('\n');
}

