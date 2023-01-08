#include <string.h>
/**
 * _strlen_recursion - returns string length
 * @s: string pointer
 * Return: string length
 */

/*
 * int _strlen_recursion(char *s)
{
	return(strlen(s));
}
*/

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 +_strlen_recursion(s + 1));
	}
	return (0);
}

