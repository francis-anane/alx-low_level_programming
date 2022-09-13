#include <stdio.h>
/**
* main - Prints out  alphabets
* Description: Print out the lower case alphabets from a-z without e and q
* Return: Return 0
*/
int main(void)
{
	/*Stores lower case alphabet*/
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
