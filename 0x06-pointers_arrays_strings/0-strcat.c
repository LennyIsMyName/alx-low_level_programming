#include "main.h"

/**
 * _stract -joins two strings
 * @dest: copy to
 * @src: copy from
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_leng = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return(dest);
}
