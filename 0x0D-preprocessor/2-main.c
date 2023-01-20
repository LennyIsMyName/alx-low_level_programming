#include <stdio.h>
/**
 * main - prints the filename
 * Return: 0
 */

#define MYNAME __FILE__


int main(void)
{
	printf("%s\n", MYNAME);
	return (0);
}
