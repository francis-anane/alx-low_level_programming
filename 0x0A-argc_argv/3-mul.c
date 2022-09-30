
/*
 * Author: Francis Ofori Anane
 * Date: 30/09/2022
 */

#include <stdio.h>
#include <stdlib.h>

/**
  * main - entry point
  * Desc: Multiply two numbers given at command line and print the result,
  * followed by a newline
  * @argc: command line argument count.
  * @argv: An array of command line arguments.
  * Return: 0 (success). 1 (error)
  */

int main(int argc, char *argv[])
{

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");

		return (1);
	}

	printf("%d\n", argv[1] * argv[2]);

	return (0);
}
