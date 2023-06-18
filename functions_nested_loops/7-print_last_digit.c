#include "main.h"

/**
 * print_last_digit - function
 *
 * @l: asdasd
 *
 * Return: 0
 */

int print_last_digit(int l)
{
	int n;

	n = l % 10;
	if (n < 0)
		n *= -1;
	_putchar(n + '0');
	return (n);
}
