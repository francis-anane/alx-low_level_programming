#include "lists.h"

/**
 * looped_list_len - Counts the number of unique nodes
 * in a looped linked list.
 * @head: A pointer to the head node of the list.
 * Return: Number of unique nodes in the list, or 0 if the list is not looped.
 */

size_t looped_list_len(const listint_t *head)
{
	const listint_t *tortois, *hare;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortois = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortois == hare)
		{
			tortois = head;
			while (tortois != hare)
			{
				count++;
				tortois = tortois->next;
				hare = hare->next;
			}

			tortois = tortois->next;
			while (tortois != hare)
			{
				count++;
				tortois = tortois->next;
			}

			return (count);
		}

		tortois = tortois->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a linked list including a list containing a loop
 * @h: A pointer to the head node's address.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *node;
	size_t count, index;

	count = looped_list_len(*h);

	if (count == 0)
	{
		while (h != NULL && *h != NULL)
		{
			count++;
			node = (*h)->next;
			free(*h);
			*h = node;
		}
	}

	else
	{
		for (index = 0; index < count; index++)
		{
			node = (*h)->next;
			free(*h);
			*h = node;
		}

		*h = NULL;
	}

	h = NULL;

	return (count);
}
