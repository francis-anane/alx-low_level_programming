/*
 * File: 4-print_rev.c
 * Author: Francis Ofori Anane
 * Date: 20/09/2022
 */

#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string.
 */
void print_rev(char *s)
{
	int len = sizeof (s);
	int i;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}

