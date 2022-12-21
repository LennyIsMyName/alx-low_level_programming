#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2; second string to compare
 *
 * Return: less than 0 if < s2, 0 if they're equal,
 * more than 0 if > s2
 */

int _strcmp(char *s1, char *s2)
{
	strcmp(s1, s2);
	return (*s1 - *s2);
}
