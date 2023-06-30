#include "lists.h"

/**
 * print_listint_safe - prints a linked list, safely
 * @head: ponter to the head node of the list to print
 *
 * Return: The number of nodes in the list

 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	long int mem_df;

	while (head)
	{
		mem_df = head - head->next;
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (mem_df > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (count);
}
