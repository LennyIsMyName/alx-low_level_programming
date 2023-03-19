#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *tp;

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
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	tp = *head;
	while (tp->next != NULL)
		tp = tp->next;
	tp->next = temp;
	temp->prev = tp;
	if (temp)
		return (temp);
	else
		return (NULL);
}
