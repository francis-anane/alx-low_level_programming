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
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*compute last digit*/
	last_digit = n % 10;
	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	else if (last_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	else if (last_digit < 6 && last_digit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	return (0);
}
