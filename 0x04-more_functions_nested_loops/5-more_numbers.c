#include "main.h"
/**
 * more_numbers - print numbers
 *
 * Return: numbers
 */

void more_numbers(void)
{
	char i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '14'; j++)
			_putchar(j);
	}
	_putchar('\n');
}
