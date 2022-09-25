/*
 * File: 6-puts2.c
 * Author: Francis Ofori Anane
 * Date: 20/09/2022
 */

#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting
 * with the first character, followed by a new line
 * @str: The string containing the characters.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
