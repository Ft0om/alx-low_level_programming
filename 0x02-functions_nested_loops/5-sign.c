#include "main.h"
/**
 * print_sign - print numbers sign
 * @n: input
 *
 * Return: 1, 0, or -1
 */
int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		_putchar('+');
		i = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		i = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		i = -1;
	}
	return (i);
}
