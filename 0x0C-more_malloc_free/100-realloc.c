#include "main.h"

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: A pointer to the memory previously allocated with a call to malloc
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: Pointer to the allocated block of memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_clone, *relloc;
	unsigned int i;

	if (ptr != NULL)
		ptr_clone = ptr;
	else
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	relloc = malloc(new_size);
	if (relloc == NULL)
		return (NULL);
	for (i = 0; i < (old_size || i < new_size); i++)
		*(relloc + i) = ptr_clone[i];
	free(ptr);
	return (relloc);
}
