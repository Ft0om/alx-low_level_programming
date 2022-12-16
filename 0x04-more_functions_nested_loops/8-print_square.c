#include "main.h"
/**
 * print_square - print sgquares
 * @size: square size
 * Return: squares
 */

void print_squares(int size);
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
