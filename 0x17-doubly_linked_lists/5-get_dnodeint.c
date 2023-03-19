#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node
 * @head: pointer to the first node
 * @index: nth
 * Return: nth index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tp;
	unsigned int no;

	tp = head;
	no = 0;
	if (tp == NULL)
		return (NULL);
	while (no != index)
	{
		tp = tp->next;
		no++;
	}

	return (tp);
}
