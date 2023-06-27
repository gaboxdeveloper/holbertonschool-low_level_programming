#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of 2 digona
 * @a:int
 * @size:int size
 * Return:void
 */
void print_diagsums(int *a, int size)
{
int c, s1 = 0, s2 = 0;

	for (c = 0; c < size; c++)
	{
		s1 += a[c];
		a += size;
	}

	a -= size;

	for (c = 0; c < size; c++)
	{
		s2 += a[c];
		a -= size;
	}

	printf("%d, %d\n", s1, s2);
}
