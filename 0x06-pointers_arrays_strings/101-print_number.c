/**
 * print_number - prints an interger.
 * _putchar - prints it out
 * @c: the value
 * Return: always zero
 */

int _putchar(char c);

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}

