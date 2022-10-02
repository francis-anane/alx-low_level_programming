/*
 * Author: Francis Ofori Anane
 * Date: 30/09/2022
 */

#include <stdio.h>
#include <stdlib.h>

/**
  * main - entry point.
  * Desc: Prints the minimum number of
  * coins to make change for an amount
  * of money.
  * if the number of arguments passed to
  * the program is not exactly 1,
  * print Error, followed by a new line.
  *
  * @argc: command line argument count.
  * @argv: An array of command line
  * arguments.
  * Return: 0 (success). 1 (error)
  */

int main(int argc, char *argv[])
{
	int money;
	int i;
	int pesewas[6] = {1, 5, 10, 20, 50,
		100};

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");

		return (1);
	}
	else if (*argv[1] == '-')
	{
		printf("0\n");

		return (0);
	}
	else
	{
		money = atoi(argv[1]);

	}

	for (i = 0; i <= money; i++)
	{
		if (money - pesewas[i] >= 0)

			printf("%d\n", pesewas[i]);
		money -= pesewas[i];
	}

	return (0);
}
