#include <string.h>
#include <stdio.h>

/**
 * puts2 - print skipping
 * @str: input
 * _putchar - print
 */

void puts2(char *str)
{
	int i;
	int j;

	j = strlen(str);
	for (i = 0; i < j; i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
		putchar('\n');
}
