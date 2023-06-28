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
	if (cents <= 0)
		return (0);

	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[0]);
	int min_coins = 0;

	for (int i = 0; i < num_coins; i++)
	{
		if (cents >= coins[i])
		{
			int count = cents / coins[i];

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
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	int min_coins = get_min_coins(cents);

	printf("%d\n", min_coins);

	return (0);
}
