/*
 * Author: Francis Ofori Anane
 * Date: 26/10/2022
 */

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - Returns the number of
 * elements in a linked listint_t list.
 *
 * @h: The list to return the elements of.
 * Return: The number of elements of the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements += 1;
	}
	return (elements);
}
