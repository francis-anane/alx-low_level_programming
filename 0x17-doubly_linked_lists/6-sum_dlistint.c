/*
 * Author: Francis Ofori Anane
 * Date: 1/04/2023
 */

#include "lists.h"

/**
 * sum_dlistint - Sum all the int data of a dlistint list
 *
 * @head: The head node of the list.
 * Return: The sum value, or 0 if list is NULL.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
