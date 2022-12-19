#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 * @c: the input
 * _putchar - prints it
 * @c: the characters
 * Return: nothing
 */
int _putchar(int c);

void rev_string(char *s)
{
	int i;

	for (i = strlen(s); i > s[0]; i--)
	{
		int j;

		j = s[i];
		_putchar('j');
	}
	_putchar('\n');
}
