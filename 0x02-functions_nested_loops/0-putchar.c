/**
 * Author: Francis Ofori Anane
 * Date:13/09/2022
 * File: 0-putchar.c
 */
#include<stdio.h>
/**
 * main - entry point
 * Description: Prints out the string _putchar
 * Return: always 0 (success)
 */
int main(void)
{
	/*store some string*/
	char s[] ="_putchar";
	int size = sizeof(s);
	int i;
	for (i = 0;  i <= size;  i++)
		putchar(s[i]);
	putchar('\n');
	return (0);
}
