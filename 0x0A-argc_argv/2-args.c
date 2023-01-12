#include <stdio.h>

/**
 * main - the main function
 * @argc: no of args
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int i;

		for (i = 1; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
