#include "main.h"

/**
 * swap_int - replaces 2 int values
 * a - first int
 * b _ secon int
 * Return: returns nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
