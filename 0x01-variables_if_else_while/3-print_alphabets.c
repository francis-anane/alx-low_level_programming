#include <stdio.h>
/**
  * main - Prints out  alphabets
  * Description: Print out the lower and upper case alphabets from a-z/A-Z
  * Return: Return 0
  */
int main(void)
{
	/*store low case alphabets*/
	char lo_case;
	/*store upper case alphabets*/
	char up_case;

	for (lo_case = 'a'; lo_case <= 'z'; lo_case++)
		putchar(lo_case);
	for (up_case = 'A'; up_case <= 'Z'; up_case++)
		putchar(up_case);
	putchar('\n');
	return (0);
}
