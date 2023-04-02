/*
 * Author: Francis Ofori Anane
 * Date: 1/04/2023
 */

#include "lists.h"

/**
 * dlistint_len - Returns the number of
 * elements in a linked dlistint_t list.
 *
 * @h: The list to return the elements of.
 * Return: The number of elements of the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements += 1;
	}
	return (elements);
}
