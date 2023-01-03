#include <string.h>

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
				break;
			}
		}
	}
				return (l);
}

