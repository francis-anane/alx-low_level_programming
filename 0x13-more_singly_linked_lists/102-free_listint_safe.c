#include "lists.h"

/**
 * free_listint_safe - frees a linked list safely.
 * @h: head node of the list.
 *
 * Return: size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	size_t node_count = 0;

	while (current != NULL)
	{
		listint_t *temp = current->next;

		free(current);
		node_count++;
		current = temp;

		if (current == *h)
		{
			*h = NULL;
			break;
		}
	}

	return (node_count);
}
