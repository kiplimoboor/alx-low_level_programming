#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a doubly linked list
 *
 * @head: the list
 *
 */

void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
