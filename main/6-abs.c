/*
 * File: 6-abs.c
 * Author: Francis Ofori Anane
 * Date: 14/09/2022
 */

#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to be computed.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
