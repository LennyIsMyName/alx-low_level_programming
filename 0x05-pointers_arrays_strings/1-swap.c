#include "main.h"

/**
 * swap_int - replaces 2 int values
 * int a - first integer
 * int b -  secon integer
 * Return: returns nothing
 */
/*void swap_int - swap integers*/
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
