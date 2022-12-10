#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block 
 * Description: compare the chracter with z
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	if (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
        return (0);
}
