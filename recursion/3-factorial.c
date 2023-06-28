#include "main.h"

/**
 * factorial - function
 * @n: factorial number
 * Return: factorial number
 */

int factorial(int n)
{
	int i;

	if (n < 0)
		return (-1);
	i = n * (n - 1);
	return (i);
}
