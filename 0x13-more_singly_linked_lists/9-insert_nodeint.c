/*
 * Author: Francis Ofori Anane
 * Date: 1/04/2023
 */

#include "lists.h"

/**
 * insert_nodeint_at_index - Adds a new node at a given index.
 * of a listint_t list.
 *
 * @head: The pointer to the head node of the list.
 * @idx: The specified index
 * @n: Data for the new node.
 * Return: The address of the new node.
 * or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp, *prev, *chk;
	unsigned int i = 0, j = 0;

	if (*head == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	chk = *head;
	tmp = *head;
	while (chk)
	{
		chk = chk->next;
		i++;
	}
	if (idx > i || idx < j)
		return (NULL);

	for (i = 0; i < idx; i++)
	{
		if (i == (idx - 1))
			prev = tmp;
		tmp = tmp->next;
	}

	prev->next = new_node;
	new_node->next = tmp;

	return (new_node);
}
