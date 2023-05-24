#include <math.h>
#include "main.h"
#include <string.h>

unsigned int binary_to_uint(const char *b)
{

	unsigned int i, k, dec, power, len;


	i = 0, k = 0, len = 0, dec = 0;

	if (!b)
		return (0);
	while(b[k] != '\0')
	{
		if (b[k] != '0' || b[k] != '1')
			return (0);
		k++;
	}

	len = strlen(b);
	power = len - 1;

	while (b[i] != '\0')
	{
		if (b[i] == '1')
		{
			dec = dec + pow(2, power);
		}
		i++;
		power--;
	}
	return (dec);

}
