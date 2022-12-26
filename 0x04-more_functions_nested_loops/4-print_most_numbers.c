#include <stdio.h>
/**
 * print_most_numbers - 0-9 except 2 and 4
 * Return: nothing
 * putchar - prints character
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			putchar(i + '0');
		}
		putchar('\n');
	}
}

