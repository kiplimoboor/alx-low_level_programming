#include "lists.h"

/**
 * listint_len - finds length of list
 *
 * @h: head of list
 *
 * Return: length of list
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
