#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a linked list
 * @head: pointer to the first node
 */

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


