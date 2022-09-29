/*
 * Author: Francis Ofori Anane
 * Date: 28/09/2022
 */

#include "main.h"

/**
  * _print_rev_recursion -  Prints a string in reverse.
  * @s: The string to print
  */

void _print_rev_recursion(char *s)
{
	int size = sizeof(s);

	if (size == 0 )
	{
		return;
	}

	_putchar(size);
	size--;

	_print_rev_recursion(s-1);
}
