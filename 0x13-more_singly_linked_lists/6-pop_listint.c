/*
 * Author: Francis Ofori Anane
 * Date: 26/11/2022
 */

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - Delete the head node of listint_t list.
 *
 * @head: Pointer to a pointer of the head node.
 * Return: Data of the deleted head node
 */

int pop_listint(listint_t **head)
{
	listint_t *node, *h_node = *head;
	int n;

	if (*head  == NULL)
		return (0);
	n = h_node->n;
	*head = h_node->next;
	free(h_node);
	return (n);
}
