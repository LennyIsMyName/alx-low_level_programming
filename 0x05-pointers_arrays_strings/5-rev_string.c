#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: the input
 */


void rev_string(char *s)
{
	int i;
	int j;
	unsigned char a;
	unsigned len = strlen((const char *)s);

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		a = s[i];
		s[i] = s[j];
		s[j] = a;
	}
}
