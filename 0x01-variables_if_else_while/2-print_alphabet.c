#include <stdio.h>

/**
 * main- entry point
 * Return: always zero
 */

int main(void)
{
	int l;

	for (l = 'a'; l < 'z'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
