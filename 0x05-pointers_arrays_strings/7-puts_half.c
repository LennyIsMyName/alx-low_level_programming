#include <string.h>
#include <stdio.h>

/**
 * puts_half - prints last half of a string
 * @str: the input string
 */

void puts_half(char *str)
{
	int i;
	int n;
	int b;
	int c;

	b = strlen(str);

	if (b % 2 != 0)
	{
		n = (b - 1) / 2;
		c = n + 1;

		for (i = c; i < b; i++)
		{
			putchar(str[i]);
		}
		putchar('\n');
	} else
	{
		n = b / 2;

		for (i = n; i < b; i++)
		{
			putchar(str[i]);
		}
		putchar('\n');
	}
}
