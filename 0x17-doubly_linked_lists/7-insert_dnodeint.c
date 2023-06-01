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
	dlistint_t *new_node, *tmp, *h_node = *h;
	unsigned int offset = 0, count, i = 0;

	new_node = create_dnodeint(n);
	count = count_nodes(h_node);
	if (idx > count || idx < offset)
		return (NULL);
	if (*h == NULL && idx == offset)
		return (*h = new_node);
	if (idx == offset)
	{
		new_node->next = h_node;
		h_node->prev = new_node;
		*h = new_node;
	}
	else
	{
		tmp = *h;
		while (tmp->next != NULL)
		{
			/* insert at an intermediate position*/
			if (i == (idx - 1))
			{
				new_node->prev = tmp;
				tmp->next->prev = new_node;
				new_node->next = tmp->next;
				tmp->next = new_node;
				return (new_node);
			}
			i++;
			tmp = tmp->next;
		}
		/* insert at the very end*/
		if (idx == count)
		{
			tmp->next = new_node;
			new_node->prev = tmp;
		}
	}
	return (new_node);
}

/**
 * create_dnodeint - creates a new dlistint_t node.
 * @n: Data for the created node
 * Return: The created node or NULL on fail.
 */

dlistint_t *create_dnodeint(int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	return (node);
}

/**
 * count_nodes - counts the number of nodes in a dlistint_t.
 * @h: Pointer to the head node
 * Return: The number of nodes
 */

size_t count_nodes(dlistint_t *h)
{
	if (h == NULL)
		return (0);
	else
		return (1 + count_nodes(h->next));

}
