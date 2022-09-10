#include <stdio.h>
/**
  * main - Prints out  alphabets
  * Description: Print out the lower case alphabets from a-z
  * Return: Return 0
  */
int main(void)
{
	/*store array of alphabeths*/
	char alp[] = "abcdefghijklmnopqrstuvwxyz";
	/*get size of the array*/
	int size = sizeof(alp);
	int i;

	for (i = 0; i <= size; i++)
		putchar(alp[i]);
	putchar('\n');
	return (0);
}
