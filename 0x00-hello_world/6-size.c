#include <stdio.h>

/**
 * main - print the type
 * Description: using the maing function
 * print the size of each data type
 * return: 0
 */
int main(void)
{
	printf("size of a char: %lu\r byte(s)\n", sizeof(char));
	printf("size of an int: %lu\r byte(s)\n", sizeof(int));
	printf("size of a double: %lu\r byte(s)\n", sizeof(double));
	printf("size of a short: %lu\r byte(s)\n", sizeof(short));
	printf("size of a long: %lu\r byte(s)\n", sizeof(long));
	printf("size of a float: %lu\r byte(s)\n", sizeof(float));
	return (0);
}
