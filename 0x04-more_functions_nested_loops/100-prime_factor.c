#include <stdio.h>

int main(void)
{
	long int num = 612852475143;
	int i;

	for (i = num; i > 1; --i)
	{
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 !=0)
		{
			printf("%d\n", i);
		}
	}
	return (0);
}
