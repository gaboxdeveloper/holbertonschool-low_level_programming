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
	int lc, uc;

	for (lc = 97; lc < 123; lc++)
		putchar(lc);
	for (uc = 65; uc < 91; uc++)
		putchar(uc);
	putchar(10);
	return (0);
}
