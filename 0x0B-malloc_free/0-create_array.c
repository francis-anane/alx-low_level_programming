/*
 * Author: Francis Ofori Anane
 * Date: 4/10/2022
 */

#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of
 * chars, and initializes it with
 * a specific char.
 *
 * @size: The size of the array.
 * @c: The character to initialize
 * the array.
 *
 * Return: NULL if size = 0, or
 * A pointer to the array, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(c) * size);

	for (i = 0; i < size; i++)

		array[i] = c;

	return (array);
}
