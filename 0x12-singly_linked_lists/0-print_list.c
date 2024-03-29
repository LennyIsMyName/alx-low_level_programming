#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints contents of each node
 * @h: the head of the node
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{

	size_t n = 0;

	while (h != NULL)
	{
		n++;

		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		h = h->next;
	}
	return (n);
}
