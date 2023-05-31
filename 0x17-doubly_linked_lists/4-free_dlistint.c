/*
 * Author: Francis Ofori Anane
 * Date: 26/11/2022
 */

#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 *
 * @head: The list to free.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
