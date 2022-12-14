#include <stdio.h>

/**
 * _islower - checks case
 * @c: the char input
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
