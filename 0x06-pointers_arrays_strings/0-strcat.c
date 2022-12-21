#include <string.h>

/**
 * _strcat - concats 2 strings
 * @dest: copy to
 * @src: copy from
 * Return: new dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
