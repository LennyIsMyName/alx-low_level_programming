#include <string.h>
#include <stdio.h>

void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	for (i = 0; i < sizeof(a); i++)
	{
		for (j = 0; j < 8; j++)
		{
			char *c = *a + (i * 8 + a[j]);
			putchar(c);
		}
	}
}
