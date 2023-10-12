#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes node at a specific position
 * in a doubly linked list
 *
 * @head: the doubly liked list head
 * @index: the position to be deleted
 *
 * Return: 1 if successful, 0 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		if (temp->next)
			temp->next->prev = NULL;
		(*head) = temp->next;
		return (1);
	}

	while (i < index)
	{
		if (!temp->next)
			return (-1);
		temp = temp->next;
	}
	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;

	return (1);
}
