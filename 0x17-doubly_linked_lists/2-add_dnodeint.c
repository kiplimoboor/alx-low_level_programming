#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds node at beginning of doubly linked list
 *
 * @head: beginning of list
 * @n: data of node to be added
 *
 * Return: the address of new element, NULL otherwise
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = (*head);
	new->prev = NULL;

	(*head) = new;

	return (new);
}
