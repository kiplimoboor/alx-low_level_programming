#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements of doubly linked list
 *
 * @h: head of the list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
