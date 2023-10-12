#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds node at end of doubly linked list
 *
 * @head: beginning of list
 * @n: data to be added
 *
 * Return: updated list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if ((*head) == NULL)
		(*head) = new;
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		new->prev = temp;
		temp->next = new;
	}

	return (*head);
}
