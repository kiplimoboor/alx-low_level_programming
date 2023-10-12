#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - gets node form doubly linked list at an index
 *
 * @head: the linked list
 * @index: the index
 *
 * Return: the node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
