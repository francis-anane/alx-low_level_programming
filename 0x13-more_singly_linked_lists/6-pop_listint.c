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
	listint_t *h_node = *head;
	listint_t *tmp_node;
	int n;

	if (h_node == NULL)
		return (-1);

	tmp_node = h_node;
	n = tmp_node->n;
	h_node = h_node->next;
	free(tmp_node);
	return (n);
}
