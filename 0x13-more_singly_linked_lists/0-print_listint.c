/*
 * Author: Francis Ofori Anane
 * Date: 26/10/2022
 */

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Prints all the elements of a listint_t list.
 *
 * @h: The list to print elements of.
 * Return: The number of nodes of the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
			printf("%d\n", h->n);

		h = h->next;
		nodes += 1;
	}
	return (nodes);
}
