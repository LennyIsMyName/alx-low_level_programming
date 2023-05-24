#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	size_t buf;
	char *new;

	if (!s1 || !s2)
		return (NULL);

	buf = strlen(s1) + strlen(s2) + 1;
	new = malloc(sizeof(char) * buf);

	while (s1)
	{
		new = s1;
		s1++;
		new++;
	}

	while (s2)
	{
		new = s2;
		s2++;
		new++;
	}

	new = '\0';

	return (new);

}
