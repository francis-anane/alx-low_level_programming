/*
 * Author: Francis Ofori Anane
 * Date: 21/10/2022
 */

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - Returns the number of
 * elements in a linked list_t list.
 *
 * @h: The list to return the elements of.
 * Return: The number of elements of the list.
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements += 1;
	}
	return (elements);
}
