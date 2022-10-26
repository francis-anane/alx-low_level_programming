/*
 * Author: Francis Ofori Anane
 * Date: 26/11/2022
 */

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t list.
 *
 * @head: The list to free.
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
