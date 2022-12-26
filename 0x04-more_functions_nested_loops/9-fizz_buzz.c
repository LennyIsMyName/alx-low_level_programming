#include <stdio.h>

/**
 * main - main function
 * Return: zero
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		}else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz");
		}else
			printf("%d", i);
		putchar(' ');
	}
		putchar('\n');
		return (0);
}
