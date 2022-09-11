#include<stdio.h>
/**
  * main - entry point
  * Description: Prints the size of various c types on the computer it is
  *compiled and run on
  * Return: always 0 (success)
  */
int main(void)
{
	/*store c types*/
	char ch;
	short sh;
	int in;
	float fl;
	long lo;
	/*store size*/
	int size;

	size = sizeof(ch);
	printf("Size of a char: %d byte(s)\n", size);
	size = sizeof(sh);
	printf("Size of an int: %d byte(s)\n", size);
	size = sizeof(in);
	printf("Size of a long int: %d byte(s)\n", size);
	size = sizeof(lo);
	printf("Size of a long long int: %d byte(s)\n", size);
	size = sizeof(fl);
	printf("Size of a float: %d byte(s)\n", size);
	return (0);
}
