/*
 * Author: Francis Ofori Anane
 * Date: 14/10/2022
 */

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - Prints any data type given as argument.
 *
 * @format: The format of the data type.
 */

void print_all(const char * const format, ...)
{
	unsigned int i;
	char *str;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}
