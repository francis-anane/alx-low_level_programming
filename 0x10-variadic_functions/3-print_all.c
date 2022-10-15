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
	char c, *s;
	int d;
	double f;
	va_list ap;

	va_start(ap, format);
	while (i < len && format)
	{
		switch (format[i])
		{
		case 'c':
			c = va_arg(ap, int);
			printf("%c", c);
			break;
		case 'i':
			d = va_arg(ap, int);
			printf("%d", d);
			break;
		case 'f':
			f = va_arg(ap, double);
			printf("%f", f);
			break;
		case 's':
			s = va_arg(ap, char*);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			break;
		default:
			break;
		}
		if ((i < len - 1) && (format[i] == 'c' || format[i] == 'i' ||
				      format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
