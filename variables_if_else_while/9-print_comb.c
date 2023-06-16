#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point of the program
 * description: variables, if, else and while
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if ( n != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
