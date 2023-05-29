#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a given index in a listint_t list
 * @head: pointer to the head node
 * @index: index of the node to return
 *
 * Return: pointer to the node at the index, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	if (node == NULL)
		return (NULL);

	while (node)
	{
		if (i == index)
			return (node);
		node = node->next;
		i++;
	}
	return (NULL);
}
