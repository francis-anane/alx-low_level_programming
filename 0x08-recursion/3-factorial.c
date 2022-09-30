/*
 * Author: Francis Ofori Anane
 * Date: 28/09/2022
 */

#include "main.h"

/**
  * factorial - Find the factorial of a number
  * @n: Number to find factorial of
  * Return: Factorial of the number
  */

int factorial(int n)
{
	if (n < 0)

		return (-1);

	else if (n == 0)

		return (1);

	return (n * factorial(n - 1));
}
