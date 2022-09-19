#include <stdio.h>

/**
 * main - print the string in the put function
 *
 * Description: using the maing function
 * print the size of each data type
 * return: 0
 */
void main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: %ld byte(s)\n", sizeof(c));
	printf("size of an int: %ld byte(s)\n", sizeof(i));
	printf("size of a long int: %ld byte(s)\n", sizeof(li));
	printf("size of a long long: %ld byte(s)\n", sizeof(lli));
	printf("size of a float: %f byte(s)\n", sizeof(f));
	return (0);
}
