/*
 * Author: Francis Ofori Anane
 * Date: 30/09/2022
 */

#include <stdio.h>

/**
  * main - entry point
  * Desc: Prints the number of arguments passed at command line.
  * @argc: command line argument count.
  * @argv: An array of command line arguments.
  * Return: 0 (success)
  */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
