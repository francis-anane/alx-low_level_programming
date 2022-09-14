/*
 * File: 1-alphabet.c
 * Author: Francis Ofori Anane
 * Date:14/09/2022
 */
#include "main.h"
/**
 * print_alphabet - Prints out the alphabets in lower case followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
	/*store alphabets*/
	short c;
	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
	return (void);
