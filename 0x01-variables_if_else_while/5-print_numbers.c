#include <stdio.h>
/**
 * main - print numbers
 *
 *
 * Return: Always 0
 */
int main(void)
{
	char f = '0';

	while (f <= '9')
	{
		putchar(f);
		f++;
	}

	putchar('\n');
	return (0);
}
