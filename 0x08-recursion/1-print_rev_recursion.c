#include <stdio.h>


int _putchar(char c);

void _print_rev_recursion(char *s)
{

	if (*s != s[0]) 
		_print_rev_recursion(s + 1);
	_putchar(*s);
}
