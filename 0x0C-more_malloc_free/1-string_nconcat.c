#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *str;
	
	len1 = strlen(s1);
	len2 = strlen(s2);

	str = malloc(sizeof(char) * len1);
	
	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}

	printf("%s\n", str);

	realloc(str, (len1 + n) * sizeof(char));

	for (j = len1; k = 0; j < strlen(str); k < n; j++ k++)
	{
		str[j] = s2[k];
	}

}
