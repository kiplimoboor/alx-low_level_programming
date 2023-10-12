#include "lists.h"

/**
 * dlistint_len - finds length of doubly linked list
 *
 * @h: head of linked list
 *
 * Return: length of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}

	return (length);
}
