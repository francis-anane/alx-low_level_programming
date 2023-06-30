#include "lists.h"

/**
 * free_listint_safe - frees a linked list safely.
 * @h: head node of the list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow = *h, *fast = *h, *loop_start = NULL;
	size_t node_count = 0;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next, fast = fast->next->next;
		if (slow == fast)
		{
			loop_start = slow;
			break;
		}
	}
	if (loop_start != NULL)
	{
		listint_t *temp = loop_start;

		do {
			temp = temp->next, node_count++;
		} while (temp != loop_start);
		temp = *h;
		while (loop_start->next != temp)
		{
			listint_t *next_node = temp->next;

			free(temp), temp = next_node, node_count--;
		}
		free(temp), node_count--;
	}
	else
	{
		listint_t *current = *h;

		while (current != NULL)
		{
			listint_t *next_node = current->next;

			free(current), current = next_node, node_count++;
		}
	}
	*h = NULL;
	return (node_count);
}
