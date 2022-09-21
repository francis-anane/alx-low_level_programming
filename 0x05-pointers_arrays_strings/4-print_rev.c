/*
 * File: 3-puts.c
 * Author: Francis Ofori Anane
 * Date: 20/09/2022
 */

#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: string to be reserved.
 */
void print_rev(char *s)
{
	int size = sizeof(s) ;
	int i;

	for (i = size; i >= 0 ; i--)
		_putchar(s[i]);

	_putchar('\n');
}

