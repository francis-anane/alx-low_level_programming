/*
 * Author: Francis Ofori Anane
 * Date: 21/09/2022
 */

#include "main.h"

/**
 * print_buffer - Prints a buffer 10 bytes at a time, starting with
 * the byte position, then showing the hex content,
 * then displaying printable charcaters.
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */
void print_buffer(char *b, int size)
{
	int data, i;

	for (data = 0; data < size; data += 10)
	{
		printf("%08x: ", data);

		for (i = 0; i < 10; i++)
		{
			if ((i + data) >= size)
				printf("  ");

			else
				printf("%02x", *(b + i + data));

			if ((i % 2) != 0 && i != 0)
				printf(" ");
		}

		for (i = 0; i < 10; i++)
		{
			if ((i + data) >= size)
				break;

			else if (*(b + i + data) >= 31 &&
				 *(b + i + data) <= 126)
				printf("%c", *(b + i + data));

			else
				printf(".");
		}

		if (data >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
