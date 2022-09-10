#include <stdio.h>
/**
  * main - Prints out  alphabets
  * Description: Print out the lower case alphabets in reverse order,
  *from z-a
  * Return: Return 0
  */
int main(void)
{
	/*store lower case letters*/
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
		putchar(alp);
	putchar('\n');
	return (0);
}
