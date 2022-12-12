#include <stdio.h>
/**
 *
 * main - Putchar 0123456789abcdef
 *
 *
 *
 * Return: returns 0
 *
 */
int main(void)
{
	int c;
	char i;

	for (c = 0; c <= 9; c++)
		putchar(c % 10 + '0');

	for (i = 'a'; i <= 'f'; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
