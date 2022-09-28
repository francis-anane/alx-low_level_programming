/*
 * Author: Francis Ofori Anane
 * Date: 28/09/2022
 */

#include "main.h"

/**
  * _puts_recursion - Prints a string, followed by a new line.
  * @s: The string to print
  */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;

	_puts_recursion(s);

}

