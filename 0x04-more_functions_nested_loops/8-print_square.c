#include <stdio.h>

/**
 * print_square - prints a square with #
 * @size: the size
 * Return: nothing
 * putchar - prints character
 */

void print_square(int size)
{
	int i;
	int j;

	if (size < 0 || size == 0)
		putchar('\n');

	for (i = 0; i < size; i++)
	{
		putchar(35);
		for (j = 0; j < size; j++)
		{
			putchar(35);
		}
			putchar('\n');
	}
}
