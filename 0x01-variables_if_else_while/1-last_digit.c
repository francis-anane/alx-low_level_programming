#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints out the last digit
 * Description: Stores a random number in the variable n and prints out the
 * the last digit of the number stored.
 * Return: Returns an integer value 0
 */
int main(void)
{
	/*Stores a random number*/
	int n;
	/*Stores the last digit of n*/
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*compute last digit*/
	ld = n % 10;
	if (ld > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	else if (ld == 0)
		printf("Last digit of %d is %d and is 0\n", n, ld);
	else if (ld < 6 && ld != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	return (0);
}
