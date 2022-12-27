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

	j = strlen(s) - 1;

	for (i = j; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
