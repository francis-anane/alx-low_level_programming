/*
 * File: 2-strlen.c
 * Author: Francis Ofori Anane
 * Date: 20/09/2022
 */

#include "main.h"

/**
  * _strlen - Returns the length of a string
  * @s: The string
  */

int _strlen(char *s)
{
	int len;
	char c[] = *s;

	for(len = 0; len <= sizeof(c); len++)
		_putchar(c[len]);
	
	return (len);

}


