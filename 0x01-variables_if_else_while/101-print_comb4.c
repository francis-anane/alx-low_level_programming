/**
  * main - entry point
  * Desc: Prints all possible different combinations of three digits
  * Return: 0 (success)
  */

#include <stdio.h>

int main(void)
{
	int i, j, k;

	for (i = 48; i < 58; i++)
		for (j = 48; j < 58; j++)
			for (k = 48; k < 58; k++)
				if (i != j  && i < j && j != k && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (k == 57 && j == 56 && i == 55)
						break;

					putchar(',');
					putchar(' ');
				}

	putchar('\n');

	return (0);
}
