/*
 * Author: Francis Ofori Anane
 * Date: 26/10/2022
 */

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the
 * beinning of a list_t list.
 *
 * @head: The pointer to the head node of the list.
 * @n: Data for the new node.
 * Return: The address of the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
