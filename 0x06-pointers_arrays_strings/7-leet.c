#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: string to encode
 *
 * Return: adress of s
 */
char *leet(char *n)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (n[i] == a[j])
			{
				n[i] = b[j];
			}
		}
	}
	return (n);
}
