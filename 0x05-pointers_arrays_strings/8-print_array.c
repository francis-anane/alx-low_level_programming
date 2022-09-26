/*
 * Author: Francis Ofori Anane
 * Date: 25/09/2022
 */

#include <stdio.h>

/**
  * print_array - prints elements of an array of integers, followed 
  * by a new line.
  * @a: Array elements to printed.
  * @n: Number of elements.
  */

void print_array(int *a, int n)
{
	int i;
	
	for(i = 0; i <= n-1; i++)
	{
		printf("%d", a[i]);
		if (i != n-1)
			printf(", ");
	}


}
