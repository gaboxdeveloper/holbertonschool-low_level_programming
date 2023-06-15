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
	int lc;

	for (lc = 97; lc < 123; lc++)
	{
		if (lc != 101 && lc != 113)
			putchar(lc);
	}
	putchar(10);
	return (0);
}
