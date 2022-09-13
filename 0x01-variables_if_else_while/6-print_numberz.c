#include <stdio.h>
/**
  * main - Prints out single digit  numbers
  * Description: Print out all single digit numbers  of base starting from 0
  * Return: Return 0
  */
int main(void)
{
	/*store base 10 number characters */
	short num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
