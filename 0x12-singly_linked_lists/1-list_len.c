#include <stdlib.h>
#include "lists.h"

/**
 * list_len - counts all items in a struct
 * @h: the head to the linked list
 * Return: number of items
 */

size_t list_len(const list_t *h)
{
	size_t len;

	len = 0;
	if (h->str)
		len++;
	if (h->len)
		len++;
	return (len);
}
