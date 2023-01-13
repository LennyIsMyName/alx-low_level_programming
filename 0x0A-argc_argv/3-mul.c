#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	int a = argv[1];
	int b = argv[2];
	int c = a * b;

	printf("%d\n", c);
}
