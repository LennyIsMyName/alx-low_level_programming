#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints the last half
 * _putchar - prints them out
 * @c: the char
 * @str: the input
 * Return: zero
 */

int _putchar(char c);

void puts_half(char *str)
{
	int i;
	int a;
	int b;

	a = strlen(str);
	if (a % 2 == 0)
		b = a / 2;
	else
		b = a / 2 - 0.5;

	for (i = str[b]; i <= a; i++)
	{
		_putchar(i);
	}
}
