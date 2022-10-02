/*
 * Author: Francis Ofori Anane
 * Date: 30/09/2022
 */

#include <stdio.h>
#include <stdlib.h>

/**
  * main - entry point
  * Desc: Add positive numbers given at command line and print the result,
  * followed by a newline. If no numbers are given print 0 followed by
  * a new line.If one of the number contains symbols that are not digits
  * print Error.
  * @argc: command line argument count.
  * @argv: An array of command line arguments.
  * Return: 0 (success). 1 (error)
  */

int main(int argc, char *argv[])
{
	int i;
	char *digit;

	int sum = 0;

	for (i = 1; i <= argc - 1; i++)
	{
		digit = argv[i];

		while (*digit)
		{
			if (*digit < '0' || *digit > '9')
			{
				printf("Error\n");
				return (1);
			}

			digit++;
		}

		if ((atoi(argv[i])) >= 0)
			sum += (atoi(argv[i]));
	}

	printf("%d\n", sum);

	return (0);
}
