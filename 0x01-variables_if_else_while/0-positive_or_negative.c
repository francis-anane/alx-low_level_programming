#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints out a random number
 * Description: Stores a random number in the variable n and prints out the
 * the value.
 * Return: Returns an integer value 0
 */
int main(void)
{
	/*Stores a random number*/
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
