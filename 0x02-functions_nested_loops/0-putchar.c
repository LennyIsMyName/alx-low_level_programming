#include "main.h"
#include <unistd.h>
/**
 * main - print putchar
 * Return: always success on 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
