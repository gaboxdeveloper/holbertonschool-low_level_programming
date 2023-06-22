#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: pointer char s
 * Return: a
 */

int _strlen(char *s)
{
	char *a;
	int count = 0;

	for (a = 0; a < s; a++)
		count++;
	return (count);
}
