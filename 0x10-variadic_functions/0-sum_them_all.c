/*
 * Author: Francis Ofori Anane
 * Date: 14/10/2022
 */

#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its
 * parameters.
 *
 * @n: The last argument of the list of arguments
 *
 * Return: The sum of the arguments.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
