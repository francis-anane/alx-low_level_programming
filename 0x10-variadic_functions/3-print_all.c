/*
 * Author: Francis Ofori Anane
 * Date: 14/10/2022
 */

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  * print_line - print a new line.
  */

void print_line(void)
{
	printf("\n");
	exit(1);
}

/**
 * print_str - print a string.
 * @s: The string.
 */
void print_str(char *s)
{
	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}

/**
 * print_all - Prints any data type given as argument.
 *
 * @format: The format of the data type.
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ap;

	if (format == NULL)
		print_line();
	va_start(ap, format);
	while (i < strlen(format))
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
			print_str(va_arg(ap, char*));
			break;
		default:
			break;
		}
		while (i < (strlen(format) - 1) &&
(format[i] == 'c' || format[i] == 'i' ||
format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
			break;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
