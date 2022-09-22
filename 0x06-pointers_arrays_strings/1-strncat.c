#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concats to strings
 * @dest: the first stirng
 * @src: the second string
 * @n: the integer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = strlen(dest), j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
}
