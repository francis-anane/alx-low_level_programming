/*
 * File: 1-alphabet.c
 * Author: Francis Ofori Anane
 * Date: 14/09/2022
 */

#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');
}
