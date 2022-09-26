#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints a description
 * lastInt: last digit
 * Return: always 0
 */

int main(void)
{
	int n;
	int lastInt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastInt = n % 10;
	if (lastInt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastInt);
	}
	else if (lastInt == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastInt);
	}
	else if (lastInt < 6 || n > 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastInt);
	}
	else if (lastInt < 6 || n < 0)
	{
		printf("Last digit of %d is -%d and is less than 6 and not 0\n", n, lastInt);
	}
	printf("last digit is: %d\n", lastInt);
	return (0);
}
