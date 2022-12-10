#include <stdio.h>

/**
 * main- entry point
 * Return: always o
 */

int main(void)
{
	int l;

		for (l = 'a'; l <= 'z'; l++)
		{
			if (l != 'q' && l != 'e')
			putchar(l);
		}
		putchar('l');
	return (0);
}
