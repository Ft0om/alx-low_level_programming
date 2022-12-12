#include <stdio.h>
/**
 *  main - Prints all single digits of base 16 followed by new line
 *
 *
 * Return Always 0
 */
int main(void)
{
	int c;
	char i;

	for (c = 0; c <= 9; c++)
		putchar(c % 10 + '0');

	for (i = 'a'; i <= 'f'; i++)
		putchar(c);

	putchar('\n');
	return (0);
}
