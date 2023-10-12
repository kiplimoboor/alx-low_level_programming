#include "lists.h"

/**
 * sum_dlistint - finds sum of data in doubly linked list
 *
 * @head: the linked list
 *
 * Return: sum of the data, 0 otherwise
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
