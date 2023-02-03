#include <stdlib.h>

/**
 * print_listint - lists all cotents in list
 * @h: pointer to first node
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	if (h == NULL)
		return (count);
	else
	{
		while (h->next != NULL)
		{
			printf("%d", h->n);
			h = h->next;
			count++;
		}
		
		if (h->next != NULL)
		{
			printf("%d", h->n);
			count++;
		}
	}
	return (count);
}
