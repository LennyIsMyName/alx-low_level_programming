#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: the input
 * _putchar - prints it
 * @c: the char
 * Return: nothing
 */

int _putchar(char c);

void rev_string(char *s)
{
	int i;

	i = strlen(s);
	while (i >= 0)
	{
		char a;
		a = s[i];
		_putchar('a');
		i--;
	}
}
