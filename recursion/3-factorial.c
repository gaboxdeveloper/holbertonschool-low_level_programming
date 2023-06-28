#include "main.h"

/**
 * factorial - function
 * @n: factorial number
 * Return: factorial number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
