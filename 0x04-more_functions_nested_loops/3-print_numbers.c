#include <stdio.h>

/**
 * print_numbers - prints the numbers
 * _putchar - prints to stdio
 * @c: the input
 * Return: zero
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
}
