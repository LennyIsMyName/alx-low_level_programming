#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabets 10 times
 * _putchar - prints characters
 * @c: the char to be printed.
 * Return: always 0
 */

int _putchar(char c);

void print_alphabet_x10(void)
{
	int j;

	for (j = 0; j <= 10; j++)
	{

	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
		i++;
		putchar('\n');
	}
	}
}
