#include "main.h"

/**
 * puts_half - print a string ...
 * @str: string
 */

void puts_half(char *str)
{
	int i, n, length;

	int n = strlen(str)

	for (i = n/2; i < n; i++)
		_putchar(str[i]);

	_putchar(10);
}
