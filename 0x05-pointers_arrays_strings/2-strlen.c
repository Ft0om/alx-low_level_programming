#include "main.h"
/**
 * _strlen - find the length
 * @s: input
 * Return: length
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}

