/*
 * Author: Francis Ofori Anane
 * Date: 28/09/2022
 */

#include "main.h"

/**
  * _pow_recursion -  returns the value of x raised to the power of y.
  * @x: The base number
  * @y: The exponent
  * Return: x raised to the power of y. or -1 if y is less than 0
  */

int _pow_recursion(int x, int y)
{
	int pow = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	x *= _pow_recursion(x, y - 1);

	return (pow);
}

