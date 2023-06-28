#include "main.h"

/**
 * pow_recursion - function
 * @x: int 1
 * @y: int 2
 * Return: int
 */

int pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (x * pow_recursion(x, y - 1));
}
