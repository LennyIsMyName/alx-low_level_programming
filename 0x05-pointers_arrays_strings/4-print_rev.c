#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints a stirng in reverse order
 * @s: string to be reversed
 * Return: nothing
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
