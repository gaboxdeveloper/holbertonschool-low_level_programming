#include "main.h"

/**
 * _puts_recursion - function
 * @s: string
 */

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(i);
	_putchar(10);
}
