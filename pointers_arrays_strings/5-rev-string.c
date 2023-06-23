#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string
 */

void rev_string(char *s)
{
	int i;
	int length = 0;
	char *p;
	char *q;

	while (s[length] != '\0')
		length++;
	q = s;
	for (i = length - 1; i >= 0; i--)
	{
		p = q + i;
		s[i] = *p;
	}
	_putchar('\n');
}
