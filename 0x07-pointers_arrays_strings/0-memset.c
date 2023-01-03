#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s: the pointer to where to start
 * @n: how many times
 * @c: the const char to fill
 * Return: s
 */

char *_memset(char *s, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = c;
	}
	return (s);
}
