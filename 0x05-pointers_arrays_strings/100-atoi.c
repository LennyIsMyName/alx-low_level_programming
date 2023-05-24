#include <stdlib.h>

int _atoi(char *s)
{
	int i;

	for (i = 0; i < strlen(s); i++)
	{
		if (isdigit(s[i]))
		{
			putchar(s[i]);
		}
	}

	return (0);
}
//	unsigned int a;
//
//	if (isdigit(s))
//		return (0);
//	a = unsigned int atoi(s);

//	return (int atoi(s));


