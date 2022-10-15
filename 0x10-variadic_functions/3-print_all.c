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
	int len = sizeof (format);

	va_list ap;

	va_start(ap, len);

	while (*format)
	{

		if (*format == 'c')
		{
			char str = va_arg(ap, char);
			printf("%c", str);
		}
		else if (*format == 'i')
		{
			int str = va_arg(ap, int);
			printf("%d", str);
		}
		{

			float str = va_arg(ap, float);
			printf ("%f", str);
		}
		else if (*format == 's')
		{

			char *str = va_arg(ap, char*);
			printf("%s", str);
		}
		format++;
	}

	printf("\n");

	va_end(ap);
}
