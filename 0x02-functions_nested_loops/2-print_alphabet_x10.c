#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabets 10 times
 */

int _putchar(char c);

void print_alphabet_x10(void)
{
	int j;
	for (j = 0; j <= 10; j++)
	{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	putchar('\n');
	}
}
