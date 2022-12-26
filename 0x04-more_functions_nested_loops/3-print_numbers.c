#include <stdio.h>

/**
 * print_numbers - prints the numbers
 * putchar - prints to stdio
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
