#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks if char is uppercase
 * @c: input
 * Return: 1 or 0
 */

int _isupper(int c)
{
	char ch = c;
	int ans = isupper(ch);

	if (ans)
		return (1);
	else
		return (0);
}
