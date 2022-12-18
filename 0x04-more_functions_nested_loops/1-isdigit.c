
#include <ctype.h>

/**
 * _isdigit - checks if its a digit
 * @c: the input
 */

int _isdigit(int c)
{
	int num = c;

	int number = isdigit(num);
	if (number)
		return (1);
	else
		return (0);
	return (0);
}
