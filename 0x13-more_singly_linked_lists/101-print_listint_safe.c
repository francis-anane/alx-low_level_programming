#include "lists.h"

/**
 * looped_len - Counts the number of unique nodes
 * in a looped linked list.
 * @head: A pointer to the head node of the list.
 * Return: Number of unique nodes in the list, or 0 if the list is not looped.
 */

size_t looped_len(const listint_t *head)
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
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = looped_len(head), index;

	if (count == 0)
	{
		while (head != NULL)
		{
			count++;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < count; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (count);
}
