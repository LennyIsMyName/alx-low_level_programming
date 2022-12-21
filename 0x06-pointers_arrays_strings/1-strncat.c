#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concats strings
 * @dest: the first stirng
 * @src: the second string
 * @n: the integer
 * Return: pointer dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;

	while (*(src + j) != '\0' && j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';

	return (dest);
}

