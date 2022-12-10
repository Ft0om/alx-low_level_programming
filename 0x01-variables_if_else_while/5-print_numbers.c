#include <stdio.h>
/**
 * main - print numbers
 *
 *
 * Return: Always 0
 */
int main(void)
{
	int f = '0';

	while (f <= '9')
	{
		printf(f);
		f++;
	}

	printf('\n');
	return (0);
}
