#include <stdio.h>

/**
 * _isalpha - checks wheather a character is an alphabet
 * @c: the character to be tested
 * Return: 1 if true, 0 if negative
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
