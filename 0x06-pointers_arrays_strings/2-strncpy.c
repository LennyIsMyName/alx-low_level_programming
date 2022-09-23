#include "main.h"

/**
 * _strncpy - copies the value of a string
 *
 * @dest: the variable to be copied
 * @src: the source variable
 * @n: the third variable
 * Return: pointer to the result string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
