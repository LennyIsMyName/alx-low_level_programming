#include <stdio.h>

/**
 * 
 * print_sign - prints the sign
 * @n: the input
 * Return: 0 or 1
 */
int _putchar(char c);

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}else if (n == 0)
	{
		
		_putchar('0');
		return (0);
	}else if(n < 0)
	{
		_putchar('-');
		return (1);
	}
	return (0);
}
