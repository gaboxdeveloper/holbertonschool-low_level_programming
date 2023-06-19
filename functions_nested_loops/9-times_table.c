#include "main.h"

/**
 * times_table - function
 *
 * Return: 0
 */

void times_table(void)
{
	int n, x, p;

	for (n = 0; n < 10; n++)
	{
		for (x = 0; x < 10; x++)
		{
			p = x * n;

			if (p <= 9)
				_putchar(' ');
			else
				_putchar((p / 10) + '0');
			_putchar((p % 10) + '0');
			if (x != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar(10);
	}
}
