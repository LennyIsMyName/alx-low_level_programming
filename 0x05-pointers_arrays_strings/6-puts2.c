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

	for (i = str[0]; i < strlen(str); i++)
	{
		int a;

		a = str[i];
		_putchar(a);
		i++;
	}
}
