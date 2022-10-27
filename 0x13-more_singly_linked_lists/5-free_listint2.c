/*
 * Author: Francis Ofori Anane
 * Date: 26/11/2022
 */

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list.
 *
 * @head: The list to free.
 */

void free_listint2(listint_t **head)
{
	listint_t *h_node = *head;
	listint_t *node;

	if (h_node == NULL)
		return;

	while (h_node != NULL)
	{
		node = h_node->next;
		free(h_node);
		h_node = node;
	}
}
