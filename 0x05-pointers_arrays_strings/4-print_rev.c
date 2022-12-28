#include <stdio.h>
#include <string.h>

/**
 * print_rev - reverses a string
 * @s: the input
 */

void print_rev(char *s)
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
