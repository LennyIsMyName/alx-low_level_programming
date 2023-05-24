#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
/* Tresspass */
	unsigned int count, newcount;
	dlistint_t *temp, *right, *left, *tp;

	temp = *head;
	count = 0;
	newcount = 0;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		while (count != index)
		{
			temp = temp->next;
			count++;
		}
		temp = *head;
		*head = (*head)->next;
		free(temp);
		*head = temp;
		(*head)->prev = NULL;
		temp = NULL;

		while (tp->next != NULL)
		{
			tp = (*head)->next;
			newcount++;
		}
		if (count == newcount + 1)
			return (1);
		else
			return (-1);
	}
	while (count != index)
	{
		temp = temp->next;
		count++;
	}

	left = temp->prev;
	right = temp->next;
	right->prev = left;
	left->next = right;

	free(temp);
	temp = NULL;

	while (tp->next != NULL)
	{
		tp = (*head)->next;
		newcount++;
	}
	if (count == newcount + 1)
		return (1);
	else
		return (-1);
}
