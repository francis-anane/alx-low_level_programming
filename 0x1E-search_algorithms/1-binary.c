#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: Pointer to the first element of the array
 * @size: size of the array
 * @value: The value to search
 * Return: Index of the value or, -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	int start = 0, end = size - 1, mid, i;

	if (array == NULL || size == 0)
		return (-1);

	while (start <= end)
	{
		mid = (start + end) / 2;

		printf("Searching in array");
		for (i = start; i <= end; i++)
			printf("%s %d", (i == 0) ? ":" : ",", array[i]);

		printf("\n");

		if (array[start] == value)
			return (start);
		else if (array[end] == value)                                  
                        return (end); 
		else if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
