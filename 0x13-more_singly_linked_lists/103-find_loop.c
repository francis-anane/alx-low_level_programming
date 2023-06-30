#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head node of the linked list to search
 * Return: address of the node where the loop starts, or NULL if no loop found
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortois = head;
	listint_t *hare = head;

	if (head == NULL)
		return (NULL);

	while (slow && fast && fast->next)
	{
		hare = hare->next->next;
		tortois = tortois->next;
		if (hare == tortois)
		{
			tortois = head;
			while (tortois != hare)
			{
				tortois = tortois->next;
				hare = hare->next;
			}
			return (hare);
		}
	}

	return (NULL);
}
