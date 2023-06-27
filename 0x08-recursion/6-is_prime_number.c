/**
 * check_prime - function to check if a number is prime.
 * @num: The number to be checked.
 * @divisor: The current divisor to be tested.
 *
 * Return: 1 if @num is prime, 0 otherwise.
 */
int check_prime(int num, int divisor)
{
	if (divisor == 1)
		return (1);
	if (num % divisor == 0)
		return (0);

	return (check_prime(num, divisor - 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @num: The number to be checked.
 *
 * Return: 1 if @num is prime, 0 otherwise.
 */
int is_prime_number(int num)
{
	if (num <= 1)
		return (0);

	return (check_prime(num, num - 1));
}
