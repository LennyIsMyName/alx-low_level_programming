#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int counter, countall;
	dlistint_t *temp, *new, *tp;

	counter = 0;
	new = malloc(sizeof(dlistint_t));

	tp = *h;
	while (tp != NULL)
		{
			countall = countall + 1;
			tp = tp->next;
		}


/* return NULL if idx is out of bound*/
	if (idx > countall) 
		return (NULL);

/* if it is a new node to an empty list */
	if (*h == NULL && idx == 0) 
	{
		temp = malloc(sizeof(dlistint_t));
		temp->prev = NULL;
		temp->next = NULL;
		temp->n = n;
		*h = temp;
		return (*h);
/* if it is a new node to the beggining of an existing list */
	}else if (idx == 0) 
	{
		temp = malloc(sizeof(dlistint_t));

		temp->n = n;
		temp->prev = NULL;
		temp->next = NULL;

		temp->next = *h;
		(*h)->prev = temp;
		*h = temp;
		if (*h)
			return (*h);
		else
			return (NULL);
		
/* if it is a new node to the end of an existing list */
	}else if (idx == countall) 
	{
		new = malloc(sizeof(dlistint_t));
		new->prev = NULL;
		new->n = n;
		new->next = NULL;
		temp = *h;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
		new->prev = temp;
		if (new)
			return (new);
		else
			return (NULL);
/*add in the middle of other nodes. */
	} else
	{
		temp = *h;
		while (counter != idx - 1) 
		{
			temp = temp->next;
			counter++;
		}
		new = malloc(sizeof(dlistint_t));
		new->prev = NULL;
		new->next = NULL;
		new->n = n;

		new->prev = temp;
		new->next = temp->next;
		
		temp = temp->next;
		temp->prev = new;
		temp = temp->prev;
		temp = temp->prev;
		temp->next = new;

		if (new)
			return (new);
		else
			return (NULL);
	}
}
