#include <stdio.h>
/**
  * main - Prints out  alphabets
  * Description: Print out the lower case alphabets from a-z
  * Return: Return 0
  */
int main(void)
{
	/*store array of alphabeths*/
	char c[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	/*get size of the array*/
	int size = sizeof(c) / sizeof(c[0]);
	int i = 0;
	for (; i <= size; i++)
		putchar(c[i]);
	putchar('\n');
	return (0);
}
