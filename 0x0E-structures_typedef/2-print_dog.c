/*
 * Author: Francis Ofori Anane
 * Date: 11/10/2022
 */

#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Print a struct dog.
 *
 * @d: A dog structure.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)

		return;

	if ((*d).name != NULL)

		printf("Name: %s\n", (*d).name);
	else
		printf("Name: (nill)\n");

	printf("Age: %f\n", (*d).age);

	if ((*d).owner != NULL)

		printf("Owner: %s\n", (*d).owner);
	else
		printf("Owner: (nill)\n");
}
