#include "main.h"

/**
 * _puts_recursion - function
 * @s: string
 */

void _puts_recursion(char *s)
{
	if (s == '\0')
		return;
	_putchar(s);
	_puts_recursion(s + 1);
	_putchar('\n');
}
