#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: size of the array
 * @value: The element to search
 * Return: First index of value or -1 on fail
 */
int linear_search(int *array, size_t size, int value)
{
	int index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < (int)size; index++)
	{
		printf("Value checked array[%u] = [%d]\n", index, array[index]);
		if (value == array[index])
			return (index);
	}
	return (-1);
}
