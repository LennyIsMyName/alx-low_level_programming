#include <string.h>

/**
 * _strpbrk - prints string from the first occurrence of a substring
 * @s: the string to check in
 * @accept: the substring
 * Return: pointer to first occurrence or null
 */


char *_strpbrk(char *s, char *accept)
{
	size_t i, j;

	for (i = 0; i < strlen(s); ++i)
	{
		for (j = 0; j < strlen(accept); ++j)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
