#include "main.h"

/**
 * puts_half - print a string ...
 * @str: string
 */

void puts_half(char *str)
{
	int i, n, length;

	for (length = 0; str[length] != '\0'; length++)
		length++;

	n = length;

	for (i = n / 2; i < n; i++)
		_putchar(str[i]);

	_putchar(10);
}
