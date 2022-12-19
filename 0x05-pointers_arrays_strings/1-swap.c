
/**
 * swap_int - swaps value of 2 variables
 * @a: first value
 * @b: second value
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*b = c;
	*a = d;
}
