/*
 * Author: Francis Ofori Anane
 * Date: 14/10/2022
 */

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_all - Prints any data type given as argument.
 *
 * @format: The format of the data type.
 */

void print_all(const char * const format, ...)
{
	int i = 0, len = strlen(format);

	va_list ap;

	va_start(ap, format);

	while (i < len)
	{

		if (format[i] == 'c')
		{
			char data_type = va_arg(ap, int);
			printf("%c", data_type);
		}
		else if (format[i] == 'i')
		{
			int data_type = va_arg(ap, int);
			printf("%d", data_type);
		}
		else if (format[i] == 'f')
		{

			double data_type = va_arg(ap, double);
			printf ("%f", data_type);
		}
		else if (format[i] == 's')
		{

			char *data_type = va_arg(ap, char*);
			if (data_type == NULL)
				data_type = "(nil)";
			printf("%s", data_type);
		}

		while((i < len - 1) && (format[i]
			== 'c' || format[i] ==
			'i' || format[i] == 'f'
		      || format[i] == 's'))
		{
			printf(", ");
			break;
		}

		i++;
	}

	printf("\n");

	va_end(ap);
}
