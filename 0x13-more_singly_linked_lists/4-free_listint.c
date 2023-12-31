#include "lists.h"

/**
 * free_listint - frees a list
 *
 * @head: the beginning of a list
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
