#include <stdio.h>

/**
 * main- entry point
 * Return: always zero
 */

int main(void)
{
	int i;
	int j = 9;

	for (i = 0; i < 9; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar(j + '0');
	return (0);
}
