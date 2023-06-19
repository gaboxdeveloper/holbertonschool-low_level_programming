#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function
 *
 * @n: parameter 2
 *
 * Return: 0
 */

void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a < 99; a++)
		{
			printf("%d", a);
			if (a != 98)
			{
				putchar(',');
				putchar(' ');
			}
			if (a == 98)
				putchar('\n');
		}
	}
	else if (n > 98)
	{
		for (a = n; a > 97; a--)
		{
			printf("%d", a);
			if (a != 98)
			{
				putchar(',');
				putchar(' ');
			}
			if (a == 98)
				putchar('\n');
		}
	}
	else
	{
		printf("%d", 98);
		putchar('\n');
	}
}
