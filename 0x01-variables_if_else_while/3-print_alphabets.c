#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print alphabets in lower then in upper
 * Return: 0
 */
int main(void)
{
	char ce = 'a';

	while (ce <= 'z')
	{
		putchar(ce);
		ce++;
	}
	
	ce = 'A';

	while (ce <= 'Z')
	{
		putchar(ce);
		ce++;
	}

	putchar('\n');
	return (0);
}
