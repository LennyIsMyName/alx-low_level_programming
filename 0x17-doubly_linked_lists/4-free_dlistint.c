#include "lists.h"
#include <stdlib.h>

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr, *next;

	curr = head;
	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}


