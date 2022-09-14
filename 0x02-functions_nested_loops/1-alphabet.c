/*
 * File: 0-putchar.c
 * Author: Francis Ofori Anane
 * Date:14/09/2022
 */
#include "main.h"
/**
 * print_alphabet - prints alphabets
 * Description: Prints out the alphabets in lower case
 * Return: void
 */
void main(void)
{
	/*store alphabets*/
	short c;
	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
	return (void);
