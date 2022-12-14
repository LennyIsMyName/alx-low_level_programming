#include <stdio.h>

/**
 * 
 * print_sign - prints the sign
 * @n: the input
 * Return: 0 or 1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (('+')1);
	}else if (n == 0)
	{
		return (('0')0);
	}else if(n < 0)
	{
		return (('-')1);
	}
	return (0);
}
