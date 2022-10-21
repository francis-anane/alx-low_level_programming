/*
 * Author: Francis Ofori Anane
 * Date: 21/10/2022
 */

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Prints all the elements of a list_t list.
 *
 * @h: The list to print elements of.
 * Return: The number of nodes of the list.
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	while (h != NULL)
	{
		if(h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		nodes += 1;
	}
	return (nodes);
}
