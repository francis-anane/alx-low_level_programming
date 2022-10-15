/*Author: Francis Ofori Anane. Date:14 /10/2022*/
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_all - Prints any data type given as argument.
 * @format: The format of the data type.
 */
void print_all(const char * const format, ...)
{
	int d, i = 0, len = strlen(format);
	char c, *s;
	double f;
	va_list ap;

	if (format == NULL)
		return;
	va_start(ap, format);
	while (i < len)
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
		while ((i < len - 1) && (format[i] == 'c' || format[i] == 'i' ||
				      format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
			break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
