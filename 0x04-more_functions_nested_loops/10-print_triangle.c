#include "main.h"
/**
 * print_triangle - print triangles
 *
 *
 * @size: size of triangle
 *
 */

void print_triangle(int size)
{
	int raw, hash, space;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (raw = 1; raw <= size; raw++)
		{
			for (space = size - raw ; space >= 1; space--)
			{
				_putchar(' ');
			}
			for (hash = 1; hash <= raw; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
