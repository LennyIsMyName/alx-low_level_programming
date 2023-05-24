#include <stddef.h>

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; i != '\0'; ++i)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; j != '\0'; ++j, ++i)
			{
				if (needle[j] == haystack[i])
					return (&haystack[i]);
				else
					return (NULL);
			}
		}
	}
	return (0);
}
