#include <stdio.h>

/**
 * main- program entry point
 * Return: zero
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
