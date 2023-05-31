/*
 * Author: Francis Ofori Anane
 * Date: 1/04/2023
 */

#include "lists.h"

/**
 * get_dnodeint_at_index - get a node at a given index of a dlistint_t list.
 *
 * @head: The pointer to the head node of the list.
 * @index: The index.
 * Return: The address of the node at the index .
 * or NULL if it fails.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp, *node;
	unsigned int i;

	tmp = head;
	if (tmp == NULL)
		return (NULL);

	i = 0;
	while (tmp != NULL)
	{
		if (i == index)
		{
			node = tmp;
			return (node);
		}
		i++;
		tmp = tmp->next;
	}

	return (tmp);
}
