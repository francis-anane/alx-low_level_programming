#include <stdio.h>
/**
* main - Prints out  alphabets
* Description: Print out the lower case alphabets from a-z without e and q
* Return: Return 0
*/
int main(void)
{
	/*store array of lower case alphabets*/
	char lo[] = "abcdfghijklmnoprstuvwxyz";
	/*get size of the array*/
	int size = sizeof(lo) / sizeof(lo[0]);
	int i;

	for (i = 0; i < size; i++)
		putchar(lo[i]);
	putchar('\n');
	return (0);
}
