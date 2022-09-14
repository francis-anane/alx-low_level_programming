/*
 * File: 1-alphabet.c
 * Author: Francis Ofori Anane
 * Date: 14/09/2022
 */
#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase, followed
 * by a new line
 */
void print_alphabet_x10(void)
{
	int counter = 0;
	char c;

	while (counter < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		counter++;
		_putchar('\n');
	}
}
