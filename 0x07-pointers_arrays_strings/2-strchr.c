#include <string.h>

/**
 * _strchr - checks if there is any a in s
 * @s: the string to check in
 * @c: the char to check for
 * Return: pointer to c or null
 */

char *_strchr(char *s, char c)
{
	size_t i;

	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}

