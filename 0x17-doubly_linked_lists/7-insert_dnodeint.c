/*
 * Author: Francis Ofori Anane
 * Date: 1/04/2023
 */

#include "lists.h"

/**
 * insert_dnodeint_at_index - Adds a new node at a given index.
 * of a dlistint_t list.
 *
 * @h: The pointer to the head node of the list.
 * @idx: The specified index
 * @n: Data for the new node.
 * Return: The address of the new node.
 * or NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp, *prev, *chk;
	unsigned int i = 0, j = 0;

	new_node = malloc(sizeof(dlistint_t));

	if (*h == NULL || new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;


	chk = *h;
	tmp = *h;
	while (chk != NULL)
	{
		chk = chk->next;
		i++;
	}
	if (idx > i || idx < j)
		return (NULL);
	if (idx == 0)
	{
		new_node->next = tmp;
		*h = new_node;
	}
	else
	{
		for (i = 0; i < idx; i++)
		{
			if (i == (idx - 1))
				prev = tmp;
			tmp = tmp->next;
		}
	}
	prev->next = new_node;
	new_node->next = tmp;

	return (new_node);
}
