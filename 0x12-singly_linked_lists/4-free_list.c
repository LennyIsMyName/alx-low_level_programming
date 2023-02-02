#include <stdlib.h>

/**
 * free_list - frees the entire linked list
 * @head: the pointer to the first node
 */

void free_list(list_t *head)
{	
	list_t *temp;

	temp = head->next;
	free(head);
	head = temp;
}

