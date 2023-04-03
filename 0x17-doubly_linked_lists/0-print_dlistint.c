/*
 * Author: Francis Ofori Anane
 * Date: 1/4/2023
 */

#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 *
 * @h: The list to print elements of.
 * Return: The number of nodes of the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	dlistint_t *p_node;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		h = h;
		nodes ++;
	}
	return (nodes);
}
