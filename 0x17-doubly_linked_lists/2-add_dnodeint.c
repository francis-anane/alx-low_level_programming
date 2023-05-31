/*
 * Author: Francis Ofori Anane
 * Date: 1/04/2023
 */

#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the
 * beinning of a dlist_t list.
 *
 * @head: The pointer to the head node of the list.
 * @n: Data for the new node.
 * Return: The address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h_node;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head != NULL)
	{
		h_node = *head;

		while (h_node->prev != NULL)
			h_node = h_node->prev;
		new_node->next = h_node;
	}
	*head = new_node;

	return (*head);
}
