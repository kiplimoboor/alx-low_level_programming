#include "lists.h"

/**
 * print_listint - prints characters in a list
 *
 * @h: the list head
 *
 * Return: number of printed characters
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%i\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
