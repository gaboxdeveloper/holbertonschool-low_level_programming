#include "main.h"

/**
 * times_table - function
 *
 * Return: 0
 */

void times_table(void)
{
	int n, x;

	for (n = 0; n < 10; n++)
	{
		for (x = 0; x < 10; x++)
		{
			_putchar(' ');
			_putchar((n * x) + '0');
			_putchar(',');
		}
	}
}
