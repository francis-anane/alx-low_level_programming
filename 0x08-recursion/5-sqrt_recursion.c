#include "main.h"
/**
 * sqrt_help - evaluate function sqrt
 *@i: interger
 *@n: interger
 *Return: evaluate sqrt
 */

int sqrt_help(int i, int n)
{
	/*ch function*/
	if (n == 0 || n == 1)
		return (n);

	else if (i * i < n)
		return (sqrt_help(i + 1, n));
	else if (i * i == n)
		return (i);

	return (-1);

}

/**
 *_sqrt_recursion - return natural sqrt of a number
 *@n: the number
 *Return: square root
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0) /*check negative*/
		return (-1);

	else
	{
		return (sqrt_help(i, n));
	}

}
