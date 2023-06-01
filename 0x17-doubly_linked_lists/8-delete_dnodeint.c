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
	dlistint_t *tmp, *node, *prev, *chk;
	unsigned int i = 0, j = 0;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	chk = *head;

	while (chk != NULL)
	{
		chk = chk->next;
		i++;
	}
	if (index > i || index < j)
		return (-1);

	if (index == 0)
	{
		node = tmp;
		tmp = tmp->next;
		*head = tmp;
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			if (i == (index - 1))
				prev = tmp;
			tmp = tmp->next;
		}
		node = tmp;
		prev->next = tmp->next;
	}
	free(node);

	return (1);
}
