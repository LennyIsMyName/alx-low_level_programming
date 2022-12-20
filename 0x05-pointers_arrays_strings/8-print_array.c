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

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
}
