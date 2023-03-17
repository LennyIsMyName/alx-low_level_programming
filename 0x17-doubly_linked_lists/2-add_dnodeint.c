#include "lists.h"

/**
 * add_dnodeint - adds a node at the beggining of a node
 * @head: pointer to the first node
 * @n: the data of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t* temp;

	if (*head == NULL)
	{
		temp = malloc(sizeof(dlistint_t));
		temp->prev = NULL;
		temp->next = NULL;
		temp->n = n;
		*head = temp;
		return (*head);
	}

	temp = malloc(sizeof(dlistint_t));

	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;

	temp->next = *head;
	*head->prev = temp;
	*head = temp;
	return (*head);
}
