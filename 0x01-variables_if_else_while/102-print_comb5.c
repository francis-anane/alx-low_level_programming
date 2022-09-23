/**
  * main - entry point
  * Desc: Prints all possible different combinations of three digits
  * Return: 0 (success)
  */

#include <stdio.h>

int main(void)
{
	int i, j, k, l = 99;

	for (i = 0; i <= 99; i++)
		for (j = 0; j <= 99; j++)
			for (k = 0; k <= 99; k++)
				for (l = 0; l <= 99; l++)
				
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					putchar(',');
					putchar(' ');
				}

	putchar('\n');

	return (0);
}
