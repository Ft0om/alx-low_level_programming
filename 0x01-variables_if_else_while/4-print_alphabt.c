#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * 
 *
 * Retrun: 0
 */
int main(void)
{
	char ce = 'a';

	while (ce <= 'z')
	{
		if (ce != 'q' && ce != 'e')
		putchar(ce);
		ce++;
	}
	putchar('\n');
	return (0);
}
