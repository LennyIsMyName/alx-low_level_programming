#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - finds the length of list
 * @h: head to the first node
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tp = h;
	int num = 0;

	while (tp != NULL)
	{
		num = num + 1;
		tp = tp->next;
	}
	return (num);
}
