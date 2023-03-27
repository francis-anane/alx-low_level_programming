/*
 * File: 3-puts.c
 * Author: Francis Ofori Anane
 * Date: 20/09/2022
 */

#include "main.h"

/**
 * _puts - Prints a string .
 * @str: The string.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{

		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
