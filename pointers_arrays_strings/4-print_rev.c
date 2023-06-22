#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int i;
	int length = 0;

	while (s[length] != '\0')
		length++;

	for (i = length; i >= 0; i--)
		_putchar(s[i]);
}
