#include <stdio.h>

/**
 * _putchar - prints char
 * times_table - prints times table
 * @c: para
 * Return: zero
 */

int _putchar(char c);
void times_table(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			int a;

			a = x * y;
			putchar(a);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
