#include <stdio.h>

/**
 * print_triangle - print a triangle using #
 * @size: the max
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		putchar('\n');

	for (i = 1; i <= size; i++)
	{
		int b = size - i;

		for (j = 0; j < b; j++)
		{
			putchar(' ');
		}
		for (k = 0; k < i; k++)
			putchar(35);
		putchar('\n');
	}
}

