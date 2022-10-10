/*
 * Author: Francis Ofori Anane
 * Date: 7/10/2022
 */

#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _calloc - Allocates memory for an array
 * of @nmemb elements of @size bytes each and
 * returns a pointer to the allocated memory.
 *
 * @nmemb: The array to allocate memory for.
 * @size: The size bytes of the member
 * elements
 *
 * Return: A pointer to the allocated memory,
 * NULL, if @nmemb = 0, or size = 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;
	
	if (nmemb == 0 || size == 0)
		return (NULL);
	
	char *mem = malloc(size * nmemb);
	
	if (mem == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
				mem[i] = '0';
	return (mem);
}

