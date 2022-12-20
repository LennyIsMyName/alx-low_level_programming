#include <stdio.h>
#include <string.h>

/**
 * print_array - print upto n
 * @a: the array
 * @n: element n
 */

void print_array(int *a, int n)
{
	int i;
	int b;

	b = a[n];
	for (i = 0; i <= b; i++)
	{
		printf("%d, ", a[i]);
	}
}
