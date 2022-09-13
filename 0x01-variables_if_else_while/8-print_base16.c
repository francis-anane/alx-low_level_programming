#include <stdio.h>
/**
  * main - Prints out  base 16 in lower case
  * Description: Print out all the numbers of base 16 in lower case
  * Return: Return 0
  */
int main(void)
{
	/*store number characters*/
	char num;
	/*store letter characters*/
	char letter;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
