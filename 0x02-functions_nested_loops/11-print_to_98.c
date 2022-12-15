#include <stdlib.h>

/**
 * _putchar - printer
 * print_to_98 - gets all digits
 * @c: input
 */

int _putchar(char c);
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(i + '0');
	}
	for (i = n; i >= 98; i--)
	{
		_putchar(i + '0');
	}
}
