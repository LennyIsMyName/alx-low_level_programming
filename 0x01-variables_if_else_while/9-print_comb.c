#include <stdio.h>

/**
 * main- entry point
 * Return: always zero
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i == 9)
		{
			putchar('\n');
			return (0);
		}
		putchar(',');
		putchar(' ');
	}
	return (0);
}
