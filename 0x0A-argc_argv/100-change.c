#include <stdio.h>
#include <stdlib.h>

/**
 * get_min_coins - Calculates the minimum number of coins required for change.
 * @cents: The amount in cents.
 *
 * Return: The minimum number of coins.
 */
int get_min_coins(int cents)
{
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins, min_coins = 0, i, count;

	if (cents <= 0)
		return (0);

	num_coins = sizeof(coins) / sizeof(coins[0]);

	for (i = 0; i < num_coins; i++)
	{
		if (cents >= coins[i])
		{
			count = cents / coins[i];

			min_coins += count;
			cents -= count * coins[i];
		}
	}

	return (min_coins);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Decription: print minimum number of coins needed for a change
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int cents, min_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	min_coins = get_min_coins(cents);

	printf("%d\n", min_coins);

	return (0);
}
