#include <stdio.h>

/**
 * print_alphabet - prints the alphas
 * @c: the char to be printed
 * Return: always 0
 */

int _putchar(char c);

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	putchar('\n');
}
