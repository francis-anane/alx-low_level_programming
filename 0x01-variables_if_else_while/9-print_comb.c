#include <stdio.h>
/**
  * main - Prints out  single digit numbers
  * Description: Print out all possible combination of single digit numbers
  * separated by commas.
  * Return: Return 0
  */
int main(void)
{
	/*store numbers*/
	short num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}
	/*putchar('\n');*/
	return (0);
}
