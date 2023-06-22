#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int i;

	for (i = s['\0']; s[i] == 0; i--)
		_putchar(s[i]);
}
