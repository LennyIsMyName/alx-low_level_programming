#include <string.h>
#include <stdlib.h>

/**
 * _strdup - makes a copy of a string passed as para..
 * @str: the string
 * Return: pointer to the copy or NULL
 */

char *_strdup(char *str)
{
	unsigned int le, i;
	char *c;

	le = strlen(str);
	le = le + 1;

	c = (char *) malloc(sizeof(char) * le);

	if (*str == NULL)
		return (NULL);

	for (i = 0; i < le; i++)
		c[i] = str[i];
	return (c);
}
