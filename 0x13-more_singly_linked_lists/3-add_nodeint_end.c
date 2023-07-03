#include "lists.h"

/**
 * add_nodeint_end - adds node to end
 *
 * @head: pointer to the list
 * @n: node to be added
 *
 * Return: the updated node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));

	if (!new)
	{
		printf("Error!\n");
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (*head);
	}

	tmp = *head;

	while (tmp->next)
	{
		tmp = tmp->next;
	}

	tmp->next = new;

	return (new);
}
