#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point.
 * Generates random valid passwords for the program 101-crackme.
 * Return: 0 (Succes)
 */
int main(void)
{
	int i = 0, j = 0;
	time_t tm;

	srand((unsigned int) time(&tm));
	while (j < 2772)
	{
		i = rand() % 128;
		if ((j + i) > 2772)
			break;
		j += i;
		printf("%c", i);
	}
	printf("%c\n", (2772 - j));
	return (0);
}
