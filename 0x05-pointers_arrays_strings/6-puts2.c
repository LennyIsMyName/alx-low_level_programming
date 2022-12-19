#include <string.h>
/**
 * puts2 - print skipping
 * @str: input
 * _putchar - print
 * @c: output
 * Return: nothing
 */

int _putchar(char c);

void puts2(char *str)
{
	int i;
	int b;
	
	b = strlen(str);

	for (i = str[0]; i < b; i++)
	{
		int a;

		a = str[i];
		_putchar(a);
		i++;
	}
}
