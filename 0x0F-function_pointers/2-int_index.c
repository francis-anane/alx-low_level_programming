/*
 * Author: Francis Ofori Anane
 * Date: 13/10/2022
 */

#include <stdlib.h>

/**
 * int_index - Searches for an integer.
 *
 * @array: The array to search the integer from.
 * @size: The size of the array.
 * @cmp: A pointer to a function that compare
 * integer values.
 *
 * Return: The index of the first element which
 * the @cmp function does not return 0.
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int check;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			check = (*cmp) (array[i]);
			if (i < size && check == 1)
				return (i);
		}
	}
	return (-1);
}
