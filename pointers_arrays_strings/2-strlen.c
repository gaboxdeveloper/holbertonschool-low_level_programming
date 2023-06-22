#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: pointer char s
 * Return: a
 */

int _strlen(char *s)
{
	int a, count;

	for (a = 0; a < *s; a++)
	{
		while (a != '\0')
			count++;
	}
	return (count);
}
