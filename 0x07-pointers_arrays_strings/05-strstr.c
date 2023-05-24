
char *_strstr(char *haystack, char *needle)
{
	size_t i, j, minus;
	char *p;
	
	i = 0, j = 0;
	while (haystack[i] != '\0')
	{
		if (needle[j] == haystack[i])
		{
			while (needle[j] != '\0')
			{

				j++;
				minus++;
			}
		}

		i++;
	}

}
