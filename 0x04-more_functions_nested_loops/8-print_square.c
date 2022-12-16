#include "main.h"
/**
 * print_square - print sgquares
 * @n: square size
 * Return: squares
 */

void print_squares(int n);
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
