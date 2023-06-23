#include "main.h"

/**
 * puts_half - print a string ...
 * @str: string
 */

void puts_half(char *str)
{
	int i, n, length, b;

	for (length = 0; str[length] != '\0'; length++)
		length++;

	n = length;

	if (length % 2 != 0)
	{
		for (i = (n - 1) / 2; i < n; i++)
			_putchar(str[i]);
	}
	else
	{
		for (b = n / 2; b <= n; b++)
			_putchar(str[b]);
	}

	_putchar(10);
}
