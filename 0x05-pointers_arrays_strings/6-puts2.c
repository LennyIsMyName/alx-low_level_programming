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
	i = 0;

	while (i < b)
	{
		int a;

		a = str[i];
		if (i % 2 == 0)
		{
		_putchar(a);
		}else if(i % 2 == 1)
		{
			i++;
		}
	}
	_putchar('\n');
}

