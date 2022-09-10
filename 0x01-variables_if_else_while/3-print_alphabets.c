#include <stdio.h>
/**
  * main - Prints out  alphabets
  * Description: Print out the lower and upper case alphabets from a-z/A-Z
  * Return: Return 0
  */
int main(void)
{
	/*store array of lower case alphabets*/
	char loc[] = "abcdefghijklmnopqrstuvwxyz";
	/*store array of upper case alphabets*/
	char upc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	/*get size of the array*/
	int size = 26;
	int i;

	for (i = 0; i <= size; i++)
	{
		putchar(loc[i]);
		putchar(upc[i]);
	}
	putchar('\n');
	return (0);
}
