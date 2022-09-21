/*
 * File: 2-strlen.c
 * Author: Francis Ofori Anane
 * Date: 20/09/2022
 */

#include "main.h"

/**
  * _strlen - Returns the length of a string
  * @s: The string
  *
  * Return: int (length of s)
  */

int _strlen(char *s)
{
	int i;
	char c[] = s;
	
	for (i = 0; c[i] != '\0'; i++);

	return (i);
}
