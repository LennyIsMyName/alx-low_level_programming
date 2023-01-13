#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */


int main(int argc, char *argv[])
{
	int num, ans, rem;

	ans = 0;
	rem = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
	}

	if (num >= 25)
	{
		ans = num / 25;
		rem = num % 25;
		if (rem == 0)
		{
			printf("%d\n", ans);
			return (0);
		}
		num = rem;
	}
	if (num >= 10)
	{
		ans = ans + num / 10;
		rem = num % 10;
		if (rem == 0)
		{
			printf("%d\n", ans);
			return (0);
		}
		num = rem;
	}
	if (num >= 5)
	{
		ans = ans + num / 5;
		rem = num % 5;
		if (rem == 0)
		{
			printf("%d\n", ans);
			return (0);
		}
		num = rem;
	}
	if (num >= 2)
	{
		ans = ans + num / 2;
		rem = num % 2;
		if (rem == 0)
		{
			printf("%d\n", ans);
			return (0);
		}
		num = rem;
	}
	if (num == 1)
	{
		ans = ans + 1;
		printf("%d\n", ans);
	}
	return (0);
}
