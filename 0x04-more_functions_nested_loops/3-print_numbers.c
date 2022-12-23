

/**
 * print_numbers - prints the numbers
 * _putchar - prints to stdio
 * @c: the input
 * Return: zero
 */
int _putchar(int c);

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
