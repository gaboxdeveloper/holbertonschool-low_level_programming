#include "main.h"

/**
 * reverse_array - function
 *
 * @a: int a
 * @n: int n
 *
 * return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	b = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		int start, end;

		start = a[i];
		end = a[b];
		a[i] = end;
		a[b] = start;
		b--;
	}
}
