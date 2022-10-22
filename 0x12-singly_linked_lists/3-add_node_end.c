/*
 * Author: Francis Ofori Anane
 * Date: 21/10/2022
 */

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the
 * end of a list_t list.
 *
 * @head: The pointer to the head node of the list.
 * @str: Data for the new node.
 * Return: The address of the new node.
 * or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	list_t *node = *head;

	if (str == NULL || new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	while (node->next != NULL)
		node = node->next;

	node->next = new_node;

	return (new_node);
}
