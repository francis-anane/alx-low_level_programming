/*
 * Author: Francis Ofori Anane
 * Date: 13/10/2022
 */

#include <stdlib.h>

/**
 * array_iterator - Executes a function given
 * as a parameter on each element of an array.
 *
 * @array: The array.
 * @size: The size of the array.
 * @action: A pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
		for (i = 0; i < size; i++)

			(*action)(array[i]);
}
