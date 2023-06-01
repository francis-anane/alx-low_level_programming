/*
 * Author: Francis Ofori Anane
 * Date: 2/04/2023
 */

#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t
 * linked list.
 *
 * @head: The pointer to the head node of the list.
 * @index: The specified index
 * Return: 1 on success or -1 if it fails.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *prev;
	unsigned int i, offset = 0, count;

	if (*head == NULL)
		return (-1);
	tmp = *head;

	count = count_nodes(tmp);

	if (index > count || index < offset)
		return (-1);

	if (index == 0)
	{
		*head = tmp->next;
		/*(*head)->prev = NULL;*/
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			if (i == (index - 1))
				prev = tmp;
			tmp = tmp->next;
		}
		/*node = tmp;*/
		prev->next = tmp->next;
		tmp->next->prev = prev;
	}
	free(tmp);

	return (1);
}

/**
 * count_nodes - counts the number of nodes * in a dlistint_t.
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
