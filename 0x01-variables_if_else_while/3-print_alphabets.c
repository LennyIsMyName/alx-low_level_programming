#include <stdio.h>

/**
* main- entry point
* Return: always zero
*/

int main(void)
{
	int l;
	int L;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (L = 'A'; L <= 'Z'; L++)
	{
		putchar(L);
	}
	putchar('\n');
	return (0);
}

