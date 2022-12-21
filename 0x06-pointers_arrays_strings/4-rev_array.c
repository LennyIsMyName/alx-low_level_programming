
/**
 * reverse_array - reverses an array
 * @a: pointer to the array
 * @n: length of number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, b;

	for (i = 0; i < n; i++)
	{
		n--;

		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
