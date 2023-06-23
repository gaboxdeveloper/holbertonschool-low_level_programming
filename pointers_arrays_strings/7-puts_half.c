#include "main.h"

/**
 * puts_half - print a string ...
 * @str: string
 */

void puts_half(char *str)
{
	int i, n, length;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	for (n = (length - 1) / 2; str[length] != '\0'; n++)
		_putchar(str[n]);
	_putchar(10);
}
