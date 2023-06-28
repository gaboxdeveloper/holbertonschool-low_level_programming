#include "main.h"

/**
 * _puts_recursion - function
 * @s: string
 */

void _puts_recursion(char *s)
{
	int i = *s;

	if (i == '\0')
		return;
	_putchar(i);
	i++;
	_putchar(10);
}
