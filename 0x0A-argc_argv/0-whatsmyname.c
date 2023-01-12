#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: exit_success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
