#include <stdio.h>

/**
 * print_ascii - print ascii values for string b,
 * formatted to replace nonprintable chars with '.'
 * @b: the string to print
 * @start: the starting position
 * @end: the end position
 */
void print_ascii(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!(((int)ch >= 32) && ((int)ch <= 126)))
			ch = 46; /*ascii for '.' */
		printf("%c", ch);
		i++;
	}
}

/**
 * print_hexes - print hex values for string b in formatted form
 * @b: string to print
 * @start: starting position
 * @end: ending position
 */
void print_hexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * print_buffer - Prints the content of a buffer
 * @b: Pointer to the buffer
 * @size: Size of the buffer
 */

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			print_hexes(b, start, end);
			print_ascii(b, start, end);
			printf("\n");
		}
	} else
		printf("\n");
}
