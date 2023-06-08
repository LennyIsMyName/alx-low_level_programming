#include <string.h>
#include <stdlib.h>

/**
 * _strdup - makes a copy of a string passed as para..
 * @str: the string
 * Return: pointer to the copy or NULL
 */

char *_strdup(char *str)
{
	unsigned int le;
	char *c;

	le = strlen(str) + 1;

	if (str == NULL)
		return (NULL);
	c = malloc(sizeof(char) * le);

	if (c == NULL)
		return (NULL);
	memcpy(c, str, le);
	return (c);
}
