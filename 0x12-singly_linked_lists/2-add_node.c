/*
 * Author: Francis Ofori Anane
 * Date: 21/10/2022
 */

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node at the
 * beinning of a list_t list.
 *
 * @head: The pointer to the head node of the list.
 * @str: Data for the new node.
 * Return: The address of the new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
