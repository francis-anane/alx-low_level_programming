/*
 * Author: Francis Ofori Anane
 * Date: 14/10/2022
 */
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * print_all - Prints any data type given as argument.
 *
 * @format: The format of the data type.
 */
void print_all(const char * const format, ...)
{
	int i = 0, len;
	va_list ap;
	char *s;

	if (format != NULL)
	{
		len = strlen(format);
		va_start(ap, format);
		while (i < len)
		{
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
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
			while ((i < len - 1) && (format[i] == 'c' || format[i] == 'i' ||
				      format[i] == 'f' || format[i] == 's'))
			{
				printf(", ");
				break;
			}
			i++;
		}
	}
	va_end(ap);
	printf("\n");
}
