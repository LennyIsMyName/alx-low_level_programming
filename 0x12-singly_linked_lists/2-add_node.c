#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds nodes at the beginnig of a linked list.
 * @head: head of the linked list
 * @str: a string to assign to each node
 * Return: pointer to the newest node or null
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	ptr->str = strdup(str);
	ptr->len = strlen(str);

	ptr->next = *head;
	*head = ptr;

	if (head)
		return (*head);
	else
		return (NULL);

}
