#include "main.h"

/**
 * _print_rev_recursion - function
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	int a = *s;

	for (a = '\0'; s[a] == 0; a--)
		;
	if (*s == a)
	{
		_putchar(10);
		return;
	}
	_putchar(*s);
	_print_rev_recursion(s - 1);
}
