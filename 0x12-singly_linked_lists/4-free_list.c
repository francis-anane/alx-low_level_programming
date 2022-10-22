/*
 * Author: Francis Ofori Anane
 * Date: 21/11/2022
 */

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - Frees a list_t list.
 *
 * @head: The list to free.
 */

void free_list(list_t *head)
{
	if (head->str != NULL)
		free(head->str);
	else if (head != NULL)
                free(head);
}
