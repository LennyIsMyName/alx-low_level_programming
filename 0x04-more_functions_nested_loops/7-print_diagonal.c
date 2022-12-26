#include <stdio.h>

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			putchar(' ');
	
	putchar('\\');
	putchar('\n');
	}
}
