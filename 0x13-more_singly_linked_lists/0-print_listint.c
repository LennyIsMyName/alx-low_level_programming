#include <stdlib.h>

size_t print_listint(const listint_t *h)
{
	size_t count;
	listint_t *temp;

	count = 0;
	temp = h;
	if (h == NULL)
		return (count);
	else
	{
		while (temp->next != NULL)
		{
			printf("%d", temp->n);
			temp = temp->next;
			count++;
		}
	}
	return (count);
}
