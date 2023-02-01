#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - adds nodes at the end
 * @head: pointer to a node
 * @str: some data
 * Return: a pointer to the newest (last) node
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *new;

	new = malloc(sizeof(list_t));

	ptr = *head;

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	while (ptr->next != NULL)
		ptr = ptr->next;

	return (ptr);
}
