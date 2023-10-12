#include "lists.h"
#include <stdlib.h>

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp = *h, *tmp;

	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (*h);
	}

	while (temp)
	{
		if (i == idx)
		{
			tmp = temp->prev;
			add_dnodeint(&temp, n);
			tmp->next = temp;
			temp->prev = tmp;
			return (temp);
		}
		i++;
		temp = temp->next;
	}
	if (i == idx)
	{
		add_dnodeint_end(h, n);
		temp = *h;
		while(temp->next)
			temp = temp->next;
		return (temp);
	}

	return (NULL);
}
