/*
 * File: 1-swap.c
 * Author: Francis Ofori Anane
 * Date: 20/09/2022
 */

#include "main.h"

/**
  * swap_int - swaps the values of two integers.
  * @a: The first integer
  * @b: The second integer
  */

void swap_int(int *a, int *b)
{
	int n;
	int m;

	n = *a;
	m = *b;
	*a = m;
	*b = n;
}

