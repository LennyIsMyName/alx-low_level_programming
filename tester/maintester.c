#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i % 2);
		i++;
	}
}
