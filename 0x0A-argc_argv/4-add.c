#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, num;

	num = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	for (i = 0; i < argc; i++)
	{
		if (i > 0)
		{
			if (*argv[i]> 57 || *argv[i] < 48)
			{
				printf("Error\n");
				return (1);
			}

		/*this strtol function changes chars and strings to ints*/
		num = num + (int)strtol(argv[i], (char **)NULL, 10);
		}
	}
		printf("%d\n", num);
		return (0);
}
