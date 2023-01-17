#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = (char*) malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		p[i] = c;

	if (p)
	{
		return (p);
	}else
		return (NULL);
}
