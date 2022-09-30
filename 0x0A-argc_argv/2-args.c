
/*
 * Author: Francis Ofori Anane
 * Date: 30/09/2022
 */
#include <stdio.h>
/**
  * main - entry point
  * Desc: Prints all the arguments passed at command line.
  * @argc: command line argument count.
  * @argv: An array of command line arguments.
  * Return: 0 (success)
  */

int main(int argc, char *argv[])
{
	int i = 0;
	
	while(i < argc)
	{
		printf("%s\n", argv[i]);

		i++;
	}

	return (0);
}
