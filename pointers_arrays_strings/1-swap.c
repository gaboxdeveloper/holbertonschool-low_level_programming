#include "main.h"

/**
 * swap_int - swaps values
 * @a: pointer
 * @b: pointer2
 */

void swap_int(int *a, int *b)
{
	int *c = *a;
	*a = *b;
	*b = *c;
}
