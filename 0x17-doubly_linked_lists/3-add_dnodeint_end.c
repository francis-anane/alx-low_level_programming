/*
 * Author: Francis Ofori Anane
 * Date: 1/04/2023
 */

#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at
 * the end of a dlistint_t list.
 *
 * @head: The pointer to the head node of the list.
 * @n: Data for the new node.
 * Return: The address of the new node.
 * or NULL if it fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	dlistint_t *node = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	else
		node = *head;

	while (node->next != NULL)
		node = node->next;

	node->next = new_node;
	new_node->prev = node;

	return (node);
}
