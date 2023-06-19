#include "main.h"

/**
 * _isdigit - function to know if its uppercase
 *
 * @c: parameter
 *
 * Return: 0
 */

int _isdigit(int c)
{
	if ((c > 47) && (c < 58))
		return (1);
	else
		return (0);
}
