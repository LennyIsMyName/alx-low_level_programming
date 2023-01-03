#include <string.h>

/**
 * _strspn - checks for number of same chars in string b
 * @s: string to check in
 * @accept: string to check from
 * Return: l
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, l;

	l = 0;
	for (i = 0; i < strlen(s); ++i)
	{
		for (j = 0; j < strlen(accept); ++j)
		{
			if (s[i] == accept[j])
			{
				l++;
			}
		}
	}
	return (l);
}

