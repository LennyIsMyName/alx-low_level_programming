#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	int counter;
	dlistint_t *tp;

	counter = 0;
	tp = head;
	if (head == NULL)
		return (0);
	
	while (tp != NULL)
	{
		counter += tp->n;
		tp = tp->next;
	}

	return (counter);
}
