#include <stdio.h>

void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(j + '0');
		}
		for (k = 0; k < 6; k++)
		{
			putchar((k + 10) + '0');
		}
		putchar('\n');
	}
}
