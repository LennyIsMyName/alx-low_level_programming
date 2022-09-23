#include "main.h"

/**
 * reverse_array - reverrses arrays of intergers
 * @a: array
 * @n: number of elements of array
 * return: void
 */
void reverse_array(int *a, int n)
{
	int i, tm;

	for (i = 0; i < n; i++)
	{
		n--;
		tm = a[i];
		a[i] = a[n];
		a[n] = tm;
	}
}
