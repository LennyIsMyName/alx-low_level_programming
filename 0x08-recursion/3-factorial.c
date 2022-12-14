/**
 * factorial - find factorial of a number.
 * @n: the input
 * Return: the factorial.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}

