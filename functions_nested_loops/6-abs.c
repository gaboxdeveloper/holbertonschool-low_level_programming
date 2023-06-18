#include "main.h"

/**
 * _abs - function
 *
 * @n: asdasd
 *
 * Return: 0
 */

int _abs(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
	{
		return (n * -1);
	}
	else
		return (n);
}
