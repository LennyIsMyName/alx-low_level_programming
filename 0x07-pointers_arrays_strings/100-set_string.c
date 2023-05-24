
void set_string(char **s, char *to)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		s[i] = *to[i];
	}
}


