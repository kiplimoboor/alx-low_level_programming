#include "lists.h"

/**
 * free_listint2 - frees a list, sets it to null
 *
 * @head: pointer to the list
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
}
