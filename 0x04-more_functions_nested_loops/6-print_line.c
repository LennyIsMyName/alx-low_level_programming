#include <stdio.h>
/**
 * print_line - prints a long line
 * @n: length of line
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
