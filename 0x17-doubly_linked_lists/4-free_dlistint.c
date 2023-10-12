#include "lists.h"
#include <stdlib.h>

void free_dlistint(dlistint_t *head)
{
	while(head)
	{
		free(head);
		head = head->next;
	}
}
